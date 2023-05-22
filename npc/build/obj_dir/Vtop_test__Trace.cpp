// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop_test__Syms.h"


void Vtop_test___024root__traceChgSub0(Vtop_test___024root* vlSelf, VerilatedVcd* tracep);

void Vtop_test___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vtop_test___024root* const __restrict vlSelf = static_cast<Vtop_test___024root*>(voidSelf);
    Vtop_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vtop_test___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vtop_test___024root__traceChgSub0(Vtop_test___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<4>/*127:0*/ __Vtemp1232;
    VlWide<4>/*127:0*/ __Vtemp1233;
    VlWide<4>/*127:0*/ __Vtemp1236;
    VlWide<4>/*127:0*/ __Vtemp1239;
    VlWide<4>/*127:0*/ __Vtemp1250;
    VlWide<4>/*127:0*/ __Vtemp1251;
    VlWide<4>/*127:0*/ __Vtemp1253;
    VlWide<4>/*127:0*/ __Vtemp1263;
    VlWide<4>/*127:0*/ __Vtemp1266;
    VlWide<4>/*127:0*/ __Vtemp1277;
    VlWide<4>/*127:0*/ __Vtemp1278;
    VlWide<4>/*127:0*/ __Vtemp1280;
    VlWide<4>/*127:0*/ __Vtemp1290;
    VlWide<4>/*127:0*/ __Vtemp1293;
    VlWide<4>/*127:0*/ __Vtemp1304;
    VlWide<4>/*127:0*/ __Vtemp1305;
    VlWide<4>/*127:0*/ __Vtemp1307;
    VlWide<4>/*127:0*/ __Vtemp1317;
    VlWide<4>/*127:0*/ __Vtemp1320;
    VlWide<4>/*127:0*/ __Vtemp1331;
    VlWide<4>/*127:0*/ __Vtemp1332;
    VlWide<4>/*127:0*/ __Vtemp1334;
    VlWide<4>/*127:0*/ __Vtemp1344;
    VlWide<4>/*127:0*/ __Vtemp1348;
    VlWide<4>/*127:0*/ __Vtemp1351;
    VlWide<4>/*127:0*/ __Vtemp1361;
    VlWide<4>/*127:0*/ __Vtemp1364;
    VlWide<4>/*127:0*/ __Vtemp1374;
    VlWide<4>/*127:0*/ __Vtemp1377;
    VlWide<4>/*127:0*/ __Vtemp1387;
    VlWide<4>/*127:0*/ __Vtemp1390;
    VlWide<4>/*127:0*/ __Vtemp1400;
    VlWide<3>/*95:0*/ __Vtemp1402;
    VlWide<3>/*95:0*/ __Vtemp1403;
    VlWide<3>/*95:0*/ __Vtemp1404;
    VlWide<3>/*95:0*/ __Vtemp1405;
    VlWide<3>/*95:0*/ __Vtemp1406;
    VlWide<3>/*95:0*/ __Vtemp1407;
    VlWide<3>/*95:0*/ __Vtemp1409;
    VlWide<3>/*95:0*/ __Vtemp1410;
    VlWide<3>/*95:0*/ __Vtemp1411;
    VlWide<3>/*95:0*/ __Vtemp1414;
    VlWide<3>/*95:0*/ __Vtemp1415;
    VlWide<3>/*95:0*/ __Vtemp1416;
    VlWide<3>/*95:0*/ __Vtemp1420;
    VlWide<3>/*95:0*/ __Vtemp1421;
    VlWide<5>/*159:0*/ __Vtemp1423;
    VlWide<5>/*159:0*/ __Vtemp1424;
    VlWide<5>/*159:0*/ __Vtemp1425;
    VlWide<5>/*159:0*/ __Vtemp1426;
    VlWide<5>/*159:0*/ __Vtemp1427;
    VlWide<5>/*159:0*/ __Vtemp1429;
    VlWide<5>/*159:0*/ __Vtemp1430;
    VlWide<5>/*159:0*/ __Vtemp1431;
    VlWide<5>/*159:0*/ __Vtemp1432;
    VlWide<5>/*159:0*/ __Vtemp1433;
    VlWide<4>/*127:0*/ __Vtemp1435;
    VlWide<4>/*127:0*/ __Vtemp1436;
    VlWide<4>/*127:0*/ __Vtemp1437;
    VlWide<4>/*127:0*/ __Vtemp1438;
    VlWide<4>/*127:0*/ __Vtemp1439;
    VlWide<4>/*127:0*/ __Vtemp1440;
    VlWide<4>/*127:0*/ __Vtemp1441;
    VlWide<4>/*127:0*/ __Vtemp1442;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+0,((0U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_axi_full_s2_0__DOT__write_state))));
            tracep->chgBit(oldp+1,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_arbiter_1__DOT__awvalid));
            tracep->chgIData(oldp+2,(((2U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_arbiter_1__DOT__master_state))
                                       ? ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__use_cache)
                                           ? ((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__tagarray
                                               [(0x3fU 
                                                 & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__araddr 
                                                    >> 6U))] 
                                               << 0xcU) 
                                              | (0xfc0U 
                                                 & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__araddr))
                                           : (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result))
                                       : 0U)),32);
            tracep->chgCData(oldp+3,(((2U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_arbiter_1__DOT__master_state))
                                       ? ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__use_cache)
                                           ? 8U : 1U)
                                       : 0U)),8);
            tracep->chgCData(oldp+4,(((2U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_arbiter_1__DOT__master_state))
                                       ? 1U : 0U)),2);
            tracep->chgBit(oldp+5,(vlSelf->top_test__DOT__io_master_wready));
            tracep->chgBit(oldp+6,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_arbiter_1__DOT__wvalid));
            tracep->chgQData(oldp+7,(((2U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_arbiter_1__DOT__master_state))
                                       ? ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__use_cache)
                                           ? vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__r_wdata
                                           : vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_mem_read_write_0__DOT__wdata)
                                       : 0ULL)),64);
            tracep->chgCData(oldp+9,(((2U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_arbiter_1__DOT__master_state))
                                       ? ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__use_cache)
                                           ? 0xffU : 
                                          (0xffU & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__wmask_reg_is)))
                                       : 0U)),8);
            tracep->chgBit(oldp+10,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_arbiter_1__DOT__wlast));
            tracep->chgBit(oldp+11,(((2U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_arbiter_1__DOT__master_state))
                                      ? (1U & ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__use_cache)
                                                ? (
                                                   (1U 
                                                    == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__write_state)) 
                                                   & (2U 
                                                      == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__write_state)))
                                                : (
                                                   (1U 
                                                    == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_mem_read_write_0__DOT__write_state)) 
                                                   & (2U 
                                                      == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_mem_read_write_0__DOT__write_state)))))
                                      : 0U)));
            tracep->chgBit(oldp+12,((2U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_axi_full_s2_0__DOT__write_state))));
            tracep->chgCData(oldp+13,(vlSelf->top_test__DOT__io_master_bresp),2);
            tracep->chgBit(oldp+14,((0U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_axi_full_s2_0__DOT__state))));
            tracep->chgBit(oldp+15,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_arbiter_1__DOT__arvalid));
            tracep->chgCData(oldp+16,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_arbiter_1__DOT__arlen),8);
            tracep->chgCData(oldp+17,(((1U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_arbiter_1__DOT__master_state))
                                        ? 3U : ((2U 
                                                 == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_arbiter_1__DOT__master_state))
                                                 ? 3U
                                                 : 0U))),3);
            tracep->chgCData(oldp+18,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_arbiter_1__DOT__arburst),2);
            tracep->chgBit(oldp+19,((1U & ((1U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_arbiter_1__DOT__master_state))
                                            ? (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__rready)
                                            : ((2U 
                                                == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_arbiter_1__DOT__master_state))
                                                ? ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__use_cache)
                                                    ? (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)
                                                    : (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_mem_read_write_0__DOT__rready))
                                                : 0U)))));
            tracep->chgBit(oldp+20,(vlSelf->top_test__DOT__io_master_rvalid));
            tracep->chgCData(oldp+21,(vlSelf->top_test__DOT__io_master_rresp),2);
            tracep->chgQData(oldp+22,(vlSelf->top_test__DOT__io_master_rdata),64);
            tracep->chgBit(oldp+24,(vlSelf->top_test__DOT__io_master_rlast));
            tracep->chgBit(oldp+25,((1U & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__rvalid1) 
                                               & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__rready)) 
                                              & ((0U 
                                                  == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__d_len)) 
                                                 | (1U 
                                                    == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__d_len))))))));
            __Vtemp1232[0U] = (~ ((0U == (1U & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__d_len)))
                                   ? 0xffffffffU : 0U));
            __Vtemp1232[1U] = (~ ((0U == (1U & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__d_len)))
                                   ? 0xffffffffU : 0U));
            __Vtemp1232[2U] = (~ ((0U == (1U & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__d_len)))
                                   ? 0U : 0xffffffffU));
            __Vtemp1232[3U] = (~ ((0U == (1U & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__d_len)))
                                   ? 0U : 0xffffffffU));
            tracep->chgWData(oldp+26,(__Vtemp1232),128);
            VL_EXTEND_WQ(128,64, __Vtemp1233, vlSelf->top_test__DOT__ysyx_22050533_0__DOT__rdata1);
            if ((0U == (1U & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__d_len)))) {
                __Vtemp1236[0U] = __Vtemp1233[0U];
                __Vtemp1236[1U] = __Vtemp1233[1U];
                __Vtemp1236[2U] = __Vtemp1233[2U];
                __Vtemp1236[3U] = __Vtemp1233[3U];
            } else {
                __Vtemp1236[0U] = 0U;
                __Vtemp1236[1U] = 0U;
                __Vtemp1236[2U] = (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__rdata1);
                __Vtemp1236[3U] = (IData)((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__rdata1 
                                           >> 0x20U));
            }
            tracep->chgWData(oldp+30,(__Vtemp1236),128);
            tracep->chgWData(oldp+34,(vlSelf->top_test__DOT__io_sram0_rdata),128);
            tracep->chgBit(oldp+38,((1U & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__rvalid1) 
                                               & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__rready)) 
                                              & ((2U 
                                                  == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__d_len)) 
                                                 | (3U 
                                                    == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__d_len))))))));
            tracep->chgWData(oldp+39,(vlSelf->top_test__DOT__io_sram1_rdata),128);
            tracep->chgBit(oldp+43,((1U & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__rvalid1) 
                                               & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__rready)) 
                                              & ((4U 
                                                  == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__d_len)) 
                                                 | (5U 
                                                    == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__d_len))))))));
            tracep->chgWData(oldp+44,(vlSelf->top_test__DOT__io_sram2_rdata),128);
            tracep->chgBit(oldp+48,((1U & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__rvalid1) 
                                               & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__rready)) 
                                              & ((6U 
                                                  == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__d_len)) 
                                                 | (7U 
                                                    == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__d_len))))))));
            tracep->chgWData(oldp+49,(vlSelf->top_test__DOT__io_sram3_rdata),128);
            tracep->chgCData(oldp+53,(vlSelf->top_test__DOT__io_sram4_addr),6);
            tracep->chgBit(oldp+54,((1U & (~ ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                                & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                               & ((0U 
                                                   == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)) 
                                                  | (1U 
                                                     == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))) 
                                              | ((6U 
                                                  == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                                 & ((0U 
                                                     == 
                                                     (7U 
                                                      & (IData)(
                                                                (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                                 >> 3U)))) 
                                                    | (1U 
                                                       == 
                                                       (7U 
                                                        & (IData)(
                                                                  (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                                   >> 3U)))))))))));
            VL_EXTEND_WQ(128,64, __Vtemp1239, vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__wmask_align);
            __Vtemp1250[0U] = (~ ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                    & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                   & (0U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                                   ? 0xffffffffU : 
                                  ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                     & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                    & (1U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                                    ? 0U : (((6U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                             & (0U 
                                                == 
                                                (7U 
                                                 & (IData)(
                                                           (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                            >> 3U)))))
                                             ? __Vtemp1239[0U]
                                             : 0U))));
            __Vtemp1250[1U] = (~ ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                    & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                   & (0U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                                   ? 0xffffffffU : 
                                  ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                     & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                    & (1U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                                    ? 0U : (((6U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                             & (0U 
                                                == 
                                                (7U 
                                                 & (IData)(
                                                           (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                            >> 3U)))))
                                             ? __Vtemp1239[1U]
                                             : 0U))));
            __Vtemp1250[2U] = (~ ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                    & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                   & (0U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                                   ? 0U : ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                             & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                            & (1U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                                            ? 0xffffffffU
                                            : (((6U 
                                                 == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                                & (0U 
                                                   == 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                               >> 3U)))))
                                                ? __Vtemp1239[2U]
                                                : (
                                                   ((6U 
                                                     == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                                    & (1U 
                                                       == 
                                                       (7U 
                                                        & (IData)(
                                                                  (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                                   >> 3U)))))
                                                    ? (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__wmask_align)
                                                    : 0U)))));
            __Vtemp1250[3U] = (~ ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                    & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                   & (0U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                                   ? 0U : ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                             & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                            & (1U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                                            ? 0xffffffffU
                                            : (((6U 
                                                 == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                                & (0U 
                                                   == 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                               >> 3U)))))
                                                ? __Vtemp1239[3U]
                                                : (
                                                   ((6U 
                                                     == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                                    & (1U 
                                                       == 
                                                       (7U 
                                                        & (IData)(
                                                                  (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                                   >> 3U)))))
                                                    ? (IData)(
                                                              (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__wmask_align 
                                                               >> 0x20U))
                                                    : 0U)))));
            tracep->chgWData(oldp+55,(__Vtemp1250),128);
            VL_EXTEND_WQ(128,64, __Vtemp1251, vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rdata2_0);
            VL_EXTEND_WQ(128,64, __Vtemp1253, vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__wdata_align);
            if ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                  & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                 & (0U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))) {
                __Vtemp1263[0U] = __Vtemp1251[0U];
                __Vtemp1263[1U] = __Vtemp1251[1U];
                __Vtemp1263[2U] = __Vtemp1251[2U];
                __Vtemp1263[3U] = __Vtemp1251[3U];
            } else {
                __Vtemp1263[0U] = ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                     & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                    & (1U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                                    ? 0U : (((6U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                             & (0U 
                                                == 
                                                (7U 
                                                 & (IData)(
                                                           (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                            >> 3U)))))
                                             ? __Vtemp1253[0U]
                                             : 0U));
                __Vtemp1263[1U] = ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                     & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                    & (1U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                                    ? 0U : (((6U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                             & (0U 
                                                == 
                                                (7U 
                                                 & (IData)(
                                                           (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                            >> 3U)))))
                                             ? __Vtemp1253[1U]
                                             : 0U));
                __Vtemp1263[2U] = ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                     & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                    & (1U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                                    ? (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rdata2_0)
                                    : (((6U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                        & (0U == (7U 
                                                  & (IData)(
                                                            (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                             >> 3U)))))
                                        ? __Vtemp1253[2U]
                                        : (((6U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                            & (1U == 
                                               (7U 
                                                & (IData)(
                                                          (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                           >> 3U)))))
                                            ? (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__wdata_align)
                                            : 0U)));
                __Vtemp1263[3U] = ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                     & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                    & (1U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                                    ? (IData)((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rdata2_0 
                                               >> 0x20U))
                                    : (((6U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                        & (0U == (7U 
                                                  & (IData)(
                                                            (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                             >> 3U)))))
                                        ? __Vtemp1253[3U]
                                        : (((6U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                            & (1U == 
                                               (7U 
                                                & (IData)(
                                                          (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                           >> 3U)))))
                                            ? (IData)(
                                                      (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__wdata_align 
                                                       >> 0x20U))
                                            : 0U)));
            }
            tracep->chgWData(oldp+59,(__Vtemp1263),128);
            tracep->chgWData(oldp+63,(vlSelf->top_test__DOT__io_sram4_rdata),128);
            tracep->chgCData(oldp+67,(vlSelf->top_test__DOT__io_sram5_addr),6);
            tracep->chgBit(oldp+68,((1U & (~ ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                                & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                               & ((2U 
                                                   == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)) 
                                                  | (3U 
                                                     == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))) 
                                              | ((6U 
                                                  == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                                 & ((2U 
                                                     == 
                                                     (7U 
                                                      & (IData)(
                                                                (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                                 >> 3U)))) 
                                                    | (3U 
                                                       == 
                                                       (7U 
                                                        & (IData)(
                                                                  (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                                   >> 3U)))))))))));
            VL_EXTEND_WQ(128,64, __Vtemp1266, vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__wmask_align);
            __Vtemp1277[0U] = (~ ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                    & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                   & (2U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                                   ? 0xffffffffU : 
                                  ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                     & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                    & (3U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                                    ? 0U : (((6U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                             & (2U 
                                                == 
                                                (7U 
                                                 & (IData)(
                                                           (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                            >> 3U)))))
                                             ? __Vtemp1266[0U]
                                             : 0U))));
            __Vtemp1277[1U] = (~ ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                    & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                   & (2U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                                   ? 0xffffffffU : 
                                  ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                     & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                    & (3U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                                    ? 0U : (((6U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                             & (2U 
                                                == 
                                                (7U 
                                                 & (IData)(
                                                           (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                            >> 3U)))))
                                             ? __Vtemp1266[1U]
                                             : 0U))));
            __Vtemp1277[2U] = (~ ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                    & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                   & (2U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                                   ? 0U : ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                             & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                            & (3U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                                            ? 0xffffffffU
                                            : (((6U 
                                                 == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                                & (2U 
                                                   == 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                               >> 3U)))))
                                                ? __Vtemp1266[2U]
                                                : (
                                                   ((6U 
                                                     == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                                    & (3U 
                                                       == 
                                                       (7U 
                                                        & (IData)(
                                                                  (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                                   >> 3U)))))
                                                    ? (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__wmask_align)
                                                    : 0U)))));
            __Vtemp1277[3U] = (~ ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                    & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                   & (2U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                                   ? 0U : ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                             & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                            & (3U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                                            ? 0xffffffffU
                                            : (((6U 
                                                 == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                                & (2U 
                                                   == 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                               >> 3U)))))
                                                ? __Vtemp1266[3U]
                                                : (
                                                   ((6U 
                                                     == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                                    & (3U 
                                                       == 
                                                       (7U 
                                                        & (IData)(
                                                                  (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                                   >> 3U)))))
                                                    ? (IData)(
                                                              (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__wmask_align 
                                                               >> 0x20U))
                                                    : 0U)))));
            tracep->chgWData(oldp+69,(__Vtemp1277),128);
            VL_EXTEND_WQ(128,64, __Vtemp1278, vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rdata2_0);
            VL_EXTEND_WQ(128,64, __Vtemp1280, vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__wdata_align);
            if ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                  & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                 & (2U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))) {
                __Vtemp1290[0U] = __Vtemp1278[0U];
                __Vtemp1290[1U] = __Vtemp1278[1U];
                __Vtemp1290[2U] = __Vtemp1278[2U];
                __Vtemp1290[3U] = __Vtemp1278[3U];
            } else {
                __Vtemp1290[0U] = ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                     & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                    & (3U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                                    ? 0U : (((6U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                             & (2U 
                                                == 
                                                (7U 
                                                 & (IData)(
                                                           (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                            >> 3U)))))
                                             ? __Vtemp1280[0U]
                                             : 0U));
                __Vtemp1290[1U] = ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                     & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                    & (3U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                                    ? 0U : (((6U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                             & (2U 
                                                == 
                                                (7U 
                                                 & (IData)(
                                                           (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                            >> 3U)))))
                                             ? __Vtemp1280[1U]
                                             : 0U));
                __Vtemp1290[2U] = ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                     & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                    & (3U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                                    ? (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rdata2_0)
                                    : (((6U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                        & (2U == (7U 
                                                  & (IData)(
                                                            (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                             >> 3U)))))
                                        ? __Vtemp1280[2U]
                                        : (((6U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                            & (3U == 
                                               (7U 
                                                & (IData)(
                                                          (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                           >> 3U)))))
                                            ? (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__wdata_align)
                                            : 0U)));
                __Vtemp1290[3U] = ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                     & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                    & (3U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                                    ? (IData)((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rdata2_0 
                                               >> 0x20U))
                                    : (((6U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                        & (2U == (7U 
                                                  & (IData)(
                                                            (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                             >> 3U)))))
                                        ? __Vtemp1280[3U]
                                        : (((6U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                            & (3U == 
                                               (7U 
                                                & (IData)(
                                                          (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                           >> 3U)))))
                                            ? (IData)(
                                                      (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__wdata_align 
                                                       >> 0x20U))
                                            : 0U)));
            }
            tracep->chgWData(oldp+73,(__Vtemp1290),128);
            tracep->chgWData(oldp+77,(vlSelf->top_test__DOT__io_sram5_rdata),128);
            tracep->chgCData(oldp+81,(vlSelf->top_test__DOT__io_sram6_addr),6);
            tracep->chgBit(oldp+82,((1U & (~ ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                                & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                               & ((4U 
                                                   == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)) 
                                                  | (5U 
                                                     == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))) 
                                              | ((6U 
                                                  == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                                 & ((4U 
                                                     == 
                                                     (7U 
                                                      & (IData)(
                                                                (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                                 >> 3U)))) 
                                                    | (5U 
                                                       == 
                                                       (7U 
                                                        & (IData)(
                                                                  (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                                   >> 3U)))))))))));
            VL_EXTEND_WQ(128,64, __Vtemp1293, vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__wmask_align);
            __Vtemp1304[0U] = (~ ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                    & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                   & (4U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                                   ? 0xffffffffU : 
                                  ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                     & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                    & (5U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                                    ? 0U : (((6U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                             & (4U 
                                                == 
                                                (7U 
                                                 & (IData)(
                                                           (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                            >> 3U)))))
                                             ? __Vtemp1293[0U]
                                             : 0U))));
            __Vtemp1304[1U] = (~ ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                    & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                   & (4U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                                   ? 0xffffffffU : 
                                  ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                     & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                    & (5U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                                    ? 0U : (((6U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                             & (4U 
                                                == 
                                                (7U 
                                                 & (IData)(
                                                           (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                            >> 3U)))))
                                             ? __Vtemp1293[1U]
                                             : 0U))));
            __Vtemp1304[2U] = (~ ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                    & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                   & (4U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                                   ? 0U : ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                             & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                            & (5U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                                            ? 0xffffffffU
                                            : (((6U 
                                                 == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                                & (4U 
                                                   == 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                               >> 3U)))))
                                                ? __Vtemp1293[2U]
                                                : (
                                                   ((6U 
                                                     == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                                    & (5U 
                                                       == 
                                                       (7U 
                                                        & (IData)(
                                                                  (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                                   >> 3U)))))
                                                    ? (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__wmask_align)
                                                    : 0U)))));
            __Vtemp1304[3U] = (~ ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                    & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                   & (4U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                                   ? 0U : ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                             & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                            & (5U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                                            ? 0xffffffffU
                                            : (((6U 
                                                 == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                                & (4U 
                                                   == 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                               >> 3U)))))
                                                ? __Vtemp1293[3U]
                                                : (
                                                   ((6U 
                                                     == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                                    & (5U 
                                                       == 
                                                       (7U 
                                                        & (IData)(
                                                                  (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                                   >> 3U)))))
                                                    ? (IData)(
                                                              (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__wmask_align 
                                                               >> 0x20U))
                                                    : 0U)))));
            tracep->chgWData(oldp+83,(__Vtemp1304),128);
            VL_EXTEND_WQ(128,64, __Vtemp1305, vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rdata2_0);
            VL_EXTEND_WQ(128,64, __Vtemp1307, vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__wdata_align);
            if ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                  & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                 & (4U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))) {
                __Vtemp1317[0U] = __Vtemp1305[0U];
                __Vtemp1317[1U] = __Vtemp1305[1U];
                __Vtemp1317[2U] = __Vtemp1305[2U];
                __Vtemp1317[3U] = __Vtemp1305[3U];
            } else {
                __Vtemp1317[0U] = ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                     & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                    & (5U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                                    ? 0U : (((6U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                             & (4U 
                                                == 
                                                (7U 
                                                 & (IData)(
                                                           (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                            >> 3U)))))
                                             ? __Vtemp1307[0U]
                                             : 0U));
                __Vtemp1317[1U] = ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                     & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                    & (5U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                                    ? 0U : (((6U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                             & (4U 
                                                == 
                                                (7U 
                                                 & (IData)(
                                                           (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                            >> 3U)))))
                                             ? __Vtemp1307[1U]
                                             : 0U));
                __Vtemp1317[2U] = ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                     & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                    & (5U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                                    ? (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rdata2_0)
                                    : (((6U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                        & (4U == (7U 
                                                  & (IData)(
                                                            (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                             >> 3U)))))
                                        ? __Vtemp1307[2U]
                                        : (((6U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                            & (5U == 
                                               (7U 
                                                & (IData)(
                                                          (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                           >> 3U)))))
                                            ? (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__wdata_align)
                                            : 0U)));
                __Vtemp1317[3U] = ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                     & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                    & (5U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                                    ? (IData)((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rdata2_0 
                                               >> 0x20U))
                                    : (((6U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                        & (4U == (7U 
                                                  & (IData)(
                                                            (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                             >> 3U)))))
                                        ? __Vtemp1307[3U]
                                        : (((6U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                            & (5U == 
                                               (7U 
                                                & (IData)(
                                                          (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                           >> 3U)))))
                                            ? (IData)(
                                                      (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__wdata_align 
                                                       >> 0x20U))
                                            : 0U)));
            }
            tracep->chgWData(oldp+87,(__Vtemp1317),128);
            tracep->chgWData(oldp+91,(vlSelf->top_test__DOT__io_sram6_rdata),128);
            tracep->chgCData(oldp+95,(vlSelf->top_test__DOT__io_sram7_addr),6);
            tracep->chgBit(oldp+96,((1U & (~ ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                                & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                               & ((6U 
                                                   == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)) 
                                                  | (7U 
                                                     == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))) 
                                              | ((6U 
                                                  == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                                 & ((6U 
                                                     == 
                                                     (7U 
                                                      & (IData)(
                                                                (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                                 >> 3U)))) 
                                                    | (7U 
                                                       == 
                                                       (7U 
                                                        & (IData)(
                                                                  (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                                   >> 3U)))))))))));
            VL_EXTEND_WQ(128,64, __Vtemp1320, vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__wmask_align);
            __Vtemp1331[0U] = (~ ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                    & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                   & (6U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                                   ? 0xffffffffU : 
                                  ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                     & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                    & (7U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                                    ? 0U : (((6U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                             & (6U 
                                                == 
                                                (7U 
                                                 & (IData)(
                                                           (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                            >> 3U)))))
                                             ? __Vtemp1320[0U]
                                             : 0U))));
            __Vtemp1331[1U] = (~ ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                    & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                   & (6U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                                   ? 0xffffffffU : 
                                  ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                     & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                    & (7U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                                    ? 0U : (((6U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                             & (6U 
                                                == 
                                                (7U 
                                                 & (IData)(
                                                           (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                            >> 3U)))))
                                             ? __Vtemp1320[1U]
                                             : 0U))));
            __Vtemp1331[2U] = (~ ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                    & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                   & (6U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                                   ? 0U : ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                             & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                            & (7U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                                            ? 0xffffffffU
                                            : (((6U 
                                                 == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                                & (6U 
                                                   == 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                               >> 3U)))))
                                                ? __Vtemp1320[2U]
                                                : (
                                                   ((6U 
                                                     == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                                    & (7U 
                                                       == 
                                                       (7U 
                                                        & (IData)(
                                                                  (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                                   >> 3U)))))
                                                    ? (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__wmask_align)
                                                    : 0U)))));
            __Vtemp1331[3U] = (~ ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                    & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                   & (6U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                                   ? 0U : ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                             & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                            & (7U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                                            ? 0xffffffffU
                                            : (((6U 
                                                 == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                                & (6U 
                                                   == 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                               >> 3U)))))
                                                ? __Vtemp1320[3U]
                                                : (
                                                   ((6U 
                                                     == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                                    & (7U 
                                                       == 
                                                       (7U 
                                                        & (IData)(
                                                                  (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                                   >> 3U)))))
                                                    ? (IData)(
                                                              (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__wmask_align 
                                                               >> 0x20U))
                                                    : 0U)))));
            tracep->chgWData(oldp+97,(__Vtemp1331),128);
            VL_EXTEND_WQ(128,64, __Vtemp1332, vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rdata2_0);
            VL_EXTEND_WQ(128,64, __Vtemp1334, vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__wdata_align);
            if ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                  & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                 & (6U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))) {
                __Vtemp1344[0U] = __Vtemp1332[0U];
                __Vtemp1344[1U] = __Vtemp1332[1U];
                __Vtemp1344[2U] = __Vtemp1332[2U];
                __Vtemp1344[3U] = __Vtemp1332[3U];
            } else {
                __Vtemp1344[0U] = ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                     & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                    & (7U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                                    ? 0U : (((6U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                             & (6U 
                                                == 
                                                (7U 
                                                 & (IData)(
                                                           (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                            >> 3U)))))
                                             ? __Vtemp1334[0U]
                                             : 0U));
                __Vtemp1344[1U] = ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                     & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                    & (7U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                                    ? 0U : (((6U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                             & (6U 
                                                == 
                                                (7U 
                                                 & (IData)(
                                                           (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                            >> 3U)))))
                                             ? __Vtemp1334[1U]
                                             : 0U));
                __Vtemp1344[2U] = ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                     & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                    & (7U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                                    ? (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rdata2_0)
                                    : (((6U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                        & (6U == (7U 
                                                  & (IData)(
                                                            (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                             >> 3U)))))
                                        ? __Vtemp1334[2U]
                                        : (((6U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                            & (7U == 
                                               (7U 
                                                & (IData)(
                                                          (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                           >> 3U)))))
                                            ? (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__wdata_align)
                                            : 0U)));
                __Vtemp1344[3U] = ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                     & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                    & (7U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                                    ? (IData)((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rdata2_0 
                                               >> 0x20U))
                                    : (((6U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                        & (6U == (7U 
                                                  & (IData)(
                                                            (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                             >> 3U)))))
                                        ? __Vtemp1334[3U]
                                        : (((6U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                            & (7U == 
                                               (7U 
                                                & (IData)(
                                                          (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                           >> 3U)))))
                                            ? (IData)(
                                                      (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__wdata_align 
                                                       >> 0x20U))
                                            : 0U)));
            }
            tracep->chgWData(oldp+101,(__Vtemp1344),128);
            tracep->chgWData(oldp+105,(vlSelf->top_test__DOT__io_sram7_rdata),128);
            tracep->chgIData(oldp+109,(vlSelf->top_test__DOT__ysyx_22050533_axi_full_s2_0__DOT__r_araddr),32);
            tracep->chgCData(oldp+110,(vlSelf->top_test__DOT__ysyx_22050533_axi_full_s2_0__DOT__c_arlen),8);
            tracep->chgIData(oldp+111,(vlSelf->top_test__DOT__ysyx_22050533_axi_full_s2_0__DOT__r_awaddr),32);
            tracep->chgCData(oldp+112,(vlSelf->top_test__DOT__ysyx_22050533_axi_full_s2_0__DOT__state),3);
            tracep->chgCData(oldp+113,(vlSelf->top_test__DOT__ysyx_22050533_axi_full_s2_0__DOT__write_state),3);
            tracep->chgBit(oldp+114,((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__rvalid1) 
                                       & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__rready)) 
                                      & ((0U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__d_len)) 
                                         | (1U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__d_len))))));
            if ((0U == (1U & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__d_len)))) {
                __Vtemp1348[0U] = 0xffffffffU;
                __Vtemp1348[1U] = 0xffffffffU;
                __Vtemp1348[2U] = 0U;
                __Vtemp1348[3U] = 0U;
            } else {
                __Vtemp1348[0U] = 0U;
                __Vtemp1348[1U] = 0U;
                __Vtemp1348[2U] = 0xffffffffU;
                __Vtemp1348[3U] = 0xffffffffU;
            }
            tracep->chgWData(oldp+115,(__Vtemp1348),128);
            tracep->chgBit(oldp+119,((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__rvalid1) 
                                       & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__rready)) 
                                      & ((2U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__d_len)) 
                                         | (3U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__d_len))))));
            tracep->chgBit(oldp+120,((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__rvalid1) 
                                       & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__rready)) 
                                      & ((4U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__d_len)) 
                                         | (5U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__d_len))))));
            tracep->chgBit(oldp+121,((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__rvalid1) 
                                       & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__rready)) 
                                      & ((6U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__d_len)) 
                                         | (7U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__d_len))))));
            tracep->chgBit(oldp+122,(((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                        & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                       & ((0U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)) 
                                          | (1U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))) 
                                      | ((6U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                         & ((0U == 
                                             (7U & (IData)(
                                                           (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                            >> 3U)))) 
                                            | (1U == 
                                               (7U 
                                                & (IData)(
                                                          (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                           >> 3U)))))))));
            VL_EXTEND_WQ(128,64, __Vtemp1351, vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__wmask_align);
            if ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                  & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                 & (0U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))) {
                __Vtemp1361[0U] = 0xffffffffU;
                __Vtemp1361[1U] = 0xffffffffU;
                __Vtemp1361[2U] = 0U;
                __Vtemp1361[3U] = 0U;
            } else {
                __Vtemp1361[0U] = ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                     & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                    & (1U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                                    ? 0U : (((6U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                             & (0U 
                                                == 
                                                (7U 
                                                 & (IData)(
                                                           (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                            >> 3U)))))
                                             ? __Vtemp1351[0U]
                                             : 0U));
                __Vtemp1361[1U] = ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                     & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                    & (1U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                                    ? 0U : (((6U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                             & (0U 
                                                == 
                                                (7U 
                                                 & (IData)(
                                                           (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                            >> 3U)))))
                                             ? __Vtemp1351[1U]
                                             : 0U));
                __Vtemp1361[2U] = ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                     & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                    & (1U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                                    ? 0xffffffffU : 
                                   (((6U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                     & (0U == (7U & (IData)(
                                                            (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                             >> 3U)))))
                                     ? __Vtemp1351[2U]
                                     : (((6U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                         & (1U == (7U 
                                                   & (IData)(
                                                             (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                              >> 3U)))))
                                         ? (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__wmask_align)
                                         : 0U)));
                __Vtemp1361[3U] = ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                     & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                    & (1U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                                    ? 0xffffffffU : 
                                   (((6U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                     & (0U == (7U & (IData)(
                                                            (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                             >> 3U)))))
                                     ? __Vtemp1351[3U]
                                     : (((6U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                         & (1U == (7U 
                                                   & (IData)(
                                                             (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                              >> 3U)))))
                                         ? (IData)(
                                                   (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__wmask_align 
                                                    >> 0x20U))
                                         : 0U)));
            }
            tracep->chgWData(oldp+123,(__Vtemp1361),128);
            tracep->chgBit(oldp+127,(((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                        & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                       & ((2U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)) 
                                          | (3U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))) 
                                      | ((6U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                         & ((2U == 
                                             (7U & (IData)(
                                                           (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                            >> 3U)))) 
                                            | (3U == 
                                               (7U 
                                                & (IData)(
                                                          (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                           >> 3U)))))))));
            VL_EXTEND_WQ(128,64, __Vtemp1364, vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__wmask_align);
            if ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                  & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                 & (2U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))) {
                __Vtemp1374[0U] = 0xffffffffU;
                __Vtemp1374[1U] = 0xffffffffU;
                __Vtemp1374[2U] = 0U;
                __Vtemp1374[3U] = 0U;
            } else {
                __Vtemp1374[0U] = ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                     & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                    & (3U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                                    ? 0U : (((6U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                             & (2U 
                                                == 
                                                (7U 
                                                 & (IData)(
                                                           (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                            >> 3U)))))
                                             ? __Vtemp1364[0U]
                                             : 0U));
                __Vtemp1374[1U] = ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                     & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                    & (3U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                                    ? 0U : (((6U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                             & (2U 
                                                == 
                                                (7U 
                                                 & (IData)(
                                                           (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                            >> 3U)))))
                                             ? __Vtemp1364[1U]
                                             : 0U));
                __Vtemp1374[2U] = ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                     & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                    & (3U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                                    ? 0xffffffffU : 
                                   (((6U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                     & (2U == (7U & (IData)(
                                                            (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                             >> 3U)))))
                                     ? __Vtemp1364[2U]
                                     : (((6U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                         & (3U == (7U 
                                                   & (IData)(
                                                             (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                              >> 3U)))))
                                         ? (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__wmask_align)
                                         : 0U)));
                __Vtemp1374[3U] = ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                     & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                    & (3U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                                    ? 0xffffffffU : 
                                   (((6U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                     & (2U == (7U & (IData)(
                                                            (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                             >> 3U)))))
                                     ? __Vtemp1364[3U]
                                     : (((6U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                         & (3U == (7U 
                                                   & (IData)(
                                                             (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                              >> 3U)))))
                                         ? (IData)(
                                                   (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__wmask_align 
                                                    >> 0x20U))
                                         : 0U)));
            }
            tracep->chgWData(oldp+128,(__Vtemp1374),128);
            tracep->chgBit(oldp+132,(((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                        & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                       & ((4U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)) 
                                          | (5U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))) 
                                      | ((6U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                         & ((4U == 
                                             (7U & (IData)(
                                                           (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                            >> 3U)))) 
                                            | (5U == 
                                               (7U 
                                                & (IData)(
                                                          (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                           >> 3U)))))))));
            VL_EXTEND_WQ(128,64, __Vtemp1377, vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__wmask_align);
            if ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                  & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                 & (4U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))) {
                __Vtemp1387[0U] = 0xffffffffU;
                __Vtemp1387[1U] = 0xffffffffU;
                __Vtemp1387[2U] = 0U;
                __Vtemp1387[3U] = 0U;
            } else {
                __Vtemp1387[0U] = ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                     & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                    & (5U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                                    ? 0U : (((6U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                             & (4U 
                                                == 
                                                (7U 
                                                 & (IData)(
                                                           (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                            >> 3U)))))
                                             ? __Vtemp1377[0U]
                                             : 0U));
                __Vtemp1387[1U] = ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                     & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                    & (5U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                                    ? 0U : (((6U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                             & (4U 
                                                == 
                                                (7U 
                                                 & (IData)(
                                                           (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                            >> 3U)))))
                                             ? __Vtemp1377[1U]
                                             : 0U));
                __Vtemp1387[2U] = ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                     & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                    & (5U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                                    ? 0xffffffffU : 
                                   (((6U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                     & (4U == (7U & (IData)(
                                                            (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                             >> 3U)))))
                                     ? __Vtemp1377[2U]
                                     : (((6U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                         & (5U == (7U 
                                                   & (IData)(
                                                             (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                              >> 3U)))))
                                         ? (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__wmask_align)
                                         : 0U)));
                __Vtemp1387[3U] = ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                     & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                    & (5U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                                    ? 0xffffffffU : 
                                   (((6U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                     & (4U == (7U & (IData)(
                                                            (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                             >> 3U)))))
                                     ? __Vtemp1377[3U]
                                     : (((6U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                         & (5U == (7U 
                                                   & (IData)(
                                                             (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                              >> 3U)))))
                                         ? (IData)(
                                                   (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__wmask_align 
                                                    >> 0x20U))
                                         : 0U)));
            }
            tracep->chgWData(oldp+133,(__Vtemp1387),128);
            tracep->chgBit(oldp+137,(((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                        & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                       & ((6U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)) 
                                          | (7U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))) 
                                      | ((6U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                         & ((6U == 
                                             (7U & (IData)(
                                                           (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                            >> 3U)))) 
                                            | (7U == 
                                               (7U 
                                                & (IData)(
                                                          (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                           >> 3U)))))))));
            VL_EXTEND_WQ(128,64, __Vtemp1390, vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__wmask_align);
            if ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                  & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                 & (6U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))) {
                __Vtemp1400[0U] = 0xffffffffU;
                __Vtemp1400[1U] = 0xffffffffU;
                __Vtemp1400[2U] = 0U;
                __Vtemp1400[3U] = 0U;
            } else {
                __Vtemp1400[0U] = ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                     & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                    & (7U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                                    ? 0U : (((6U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                             & (6U 
                                                == 
                                                (7U 
                                                 & (IData)(
                                                           (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                            >> 3U)))))
                                             ? __Vtemp1390[0U]
                                             : 0U));
                __Vtemp1400[1U] = ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                     & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                    & (7U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                                    ? 0U : (((6U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                             & (6U 
                                                == 
                                                (7U 
                                                 & (IData)(
                                                           (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                            >> 3U)))))
                                             ? __Vtemp1390[1U]
                                             : 0U));
                __Vtemp1400[2U] = ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                     & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                    & (7U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                                    ? 0xffffffffU : 
                                   (((6U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                     & (6U == (7U & (IData)(
                                                            (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                             >> 3U)))))
                                     ? __Vtemp1390[2U]
                                     : (((6U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                         & (7U == (7U 
                                                   & (IData)(
                                                             (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                              >> 3U)))))
                                         ? (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__wmask_align)
                                         : 0U)));
                __Vtemp1400[3U] = ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                     & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                    & (7U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                                    ? 0xffffffffU : 
                                   (((6U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                     & (6U == (7U & (IData)(
                                                            (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                             >> 3U)))))
                                     ? __Vtemp1390[3U]
                                     : (((6U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                         & (7U == (7U 
                                                   & (IData)(
                                                             (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                              >> 3U)))))
                                         ? (IData)(
                                                   (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__wmask_align 
                                                    >> 0x20U))
                                         : 0U)));
            }
            tracep->chgWData(oldp+138,(__Vtemp1400),128);
            tracep->chgBit(oldp+142,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__isu_finish));
            tracep->chgBit(oldp+143,((1U & ((((IData)(
                                                      (0U 
                                                       != 
                                                       (0x6000U 
                                                        & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__alu_control_reg_is))) 
                                              & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__div_finish)) 
                                             | ((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__alu_control_reg_is 
                                                 >> 0xcU) 
                                                & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__mul_finish))) 
                                            | (~ (IData)(
                                                         (0U 
                                                          != 
                                                          (0x7000U 
                                                           & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__alu_control_reg_is))))))));
            tracep->chgBit(oldp+144,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ebreak_finish));
            tracep->chgBit(oldp+145,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__control_hazard));
            tracep->chgBit(oldp+146,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__not_jump));
            tracep->chgQData(oldp+147,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__c_rdata),64);
            tracep->chgQData(oldp+149,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__imm),64);
            tracep->chgQData(oldp+151,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__src1),64);
            tracep->chgQData(oldp+153,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__r0__DOT__rf
                                       [(0x1fU & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                                  >> 0x14U))]),64);
            tracep->chgBit(oldp+155,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__arvalid));
            tracep->chgBit(oldp+156,(((1U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_arbiter_1__DOT__master_state))
                                       ? (IData)((0U 
                                                  == (IData)(vlSelf->top_test__DOT__ysyx_22050533_axi_full_s2_0__DOT__state)))
                                       : 0U)));
            tracep->chgQData(oldp+157,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__rdata1),64);
            tracep->chgCData(oldp+159,(((1U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_arbiter_1__DOT__master_state))
                                         ? (3U & (IData)(vlSelf->top_test__DOT__io_master_rresp))
                                         : 0U)),2);
            tracep->chgBit(oldp+160,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__rvalid1));
            tracep->chgBit(oldp+161,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__rlast1));
            tracep->chgBit(oldp+162,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__rready));
            tracep->chgIData(oldp+163,(((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__use_cache)
                                         ? (0xffffffc0U 
                                            & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__araddr)
                                         : (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result))),32);
            tracep->chgBit(oldp+164,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__arvalid2));
            tracep->chgCData(oldp+165,(((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__use_cache)
                                         ? 8U : 1U)),8);
            tracep->chgBit(oldp+166,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__arready2));
            tracep->chgQData(oldp+167,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__rdata2),64);
            tracep->chgCData(oldp+169,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__rresp2),2);
            tracep->chgBit(oldp+170,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__rvalid2));
            tracep->chgBit(oldp+171,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__rlast2));
            tracep->chgBit(oldp+172,(((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__use_cache)
                                       ? (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)
                                       : (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_mem_read_write_0__DOT__rready))));
            tracep->chgIData(oldp+173,(((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__use_cache)
                                         ? ((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__tagarray
                                             [(0x3fU 
                                               & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__araddr 
                                                  >> 6U))] 
                                             << 0xcU) 
                                            | (0xfc0U 
                                               & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__araddr))
                                         : (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result))),32);
            tracep->chgBit(oldp+174,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__awvalid2));
            tracep->chgBit(oldp+175,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__awready2));
            tracep->chgQData(oldp+176,(((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__use_cache)
                                         ? vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__r_wdata
                                         : vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_mem_read_write_0__DOT__wdata)),64);
            tracep->chgBit(oldp+178,(((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__use_cache)
                                       ? (8U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__c_awlen))
                                       : (1U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_mem_read_write_0__DOT__c_awlen)))));
            tracep->chgCData(oldp+179,(((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__use_cache)
                                         ? 0xffU : (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__wmask_reg_is))),8);
            tracep->chgBit(oldp+180,(((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__use_cache)
                                       ? (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__wvalid)
                                       : (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_mem_read_write_0__DOT__wvalid))));
            tracep->chgBit(oldp+181,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__wready2));
            tracep->chgCData(oldp+182,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__bresp2),2);
            tracep->chgBit(oldp+183,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__bvalid2));
            tracep->chgBit(oldp+184,(((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__use_cache)
                                       ? ((1U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__write_state)) 
                                          & (2U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__write_state)))
                                       : ((1U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_mem_read_write_0__DOT__write_state)) 
                                          & (2U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_mem_read_write_0__DOT__write_state))))));
            tracep->chgQData(oldp+185,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__dnpc_jump_data),64);
            tracep->chgSData(oldp+187,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__e_j_b_inst),12);
            tracep->chgBit(oldp+188,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__rf_ren_src1));
            tracep->chgBit(oldp+189,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__rf_ren_src2));
            tracep->chgCData(oldp+190,((0x1fU & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                                 >> 7U))),5);
            tracep->chgSData(oldp+191,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__op_d),12);
            tracep->chgCData(oldp+192,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__fu_7_d),5);
            tracep->chgCData(oldp+193,((0xffU & ((IData)(1U) 
                                                 << 
                                                 (7U 
                                                  & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                                     >> 0xcU))))),8);
            tracep->chgCData(oldp+194,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__sel_alu_src1),4);
            tracep->chgCData(oldp+195,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__sel_alu_src2),3);
            tracep->chgIData(oldp+196,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__alu_control),17);
            tracep->chgBit(oldp+197,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__rf_wen));
            tracep->chgCData(oldp+198,(((((((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__ld) 
                                              | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__lw)) 
                                             | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__lwu)) 
                                            | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__lh)) 
                                           | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__lhu)) 
                                          | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__lb)) 
                                         | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__lbu))
                                         ? 2U : (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__csrrw) 
                                                  | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__csrrs))
                                                  ? 4U
                                                  : 1U))),3);
            tracep->chgBit(oldp+199,((((((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__ld) 
                                           | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__lw)) 
                                          | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__lwu)) 
                                         | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__lh)) 
                                        | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__lhu)) 
                                       | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__lb)) 
                                      | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__lbu))));
            tracep->chgBit(oldp+200,((((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__sd) 
                                         | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__sb)) 
                                        | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__sh)) 
                                       | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__sw)) 
                                      | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__sb))));
            tracep->chgCData(oldp+201,((((((((1U & 
                                              (- (IData)((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__ld)))) 
                                             | (2U 
                                                & (- (IData)((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__lw))))) 
                                            | (4U & 
                                               (- (IData)((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__lwu))))) 
                                           | (8U & 
                                              (- (IData)((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__lh))))) 
                                          | (0x10U 
                                             & (- (IData)((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__lhu))))) 
                                         | (0x20U & 
                                            (- (IData)((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__lb))))) 
                                        | (0x40U & 
                                           (- (IData)((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__lbu)))))),7);
            tracep->chgBit(oldp+202,(((((((((((((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__addw) 
                                                  | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__subw)) 
                                                 | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__mulw)) 
                                                | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__divw)) 
                                               | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__divuw)) 
                                              | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__remw)) 
                                             | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__sllw)) 
                                            | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__srlw)) 
                                           | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__sraw)) 
                                          | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__addiw)) 
                                         | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__sraiw)) 
                                        | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__slliw)) 
                                       | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__srliw)) 
                                      | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__remuw))));
            tracep->chgBit(oldp+203,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__csrrs));
            tracep->chgBit(oldp+204,(((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__csrrw) 
                                      | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__csrrs))));
            tracep->chgCData(oldp+205,(((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__sb)
                                         ? 1U : ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__sh)
                                                  ? 3U
                                                  : 
                                                 ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__sw)
                                                   ? 0xfU
                                                   : 
                                                  ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__sd)
                                                    ? 0xffU
                                                    : 0U))))),8);
            tracep->chgBit(oldp+206,((1U & ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__e_j_b_inst_reg_id) 
                                            >> 1U))));
            tracep->chgQData(oldp+207,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__alu_result),64);
            tracep->chgQData(oldp+209,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result),64);
            tracep->chgQData(oldp+211,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ram_data),64);
            tracep->chgQData(oldp+213,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__wdata),64);
            tracep->chgQData(oldp+215,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__cpupc_reg_id),64);
            tracep->chgIData(oldp+217,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id),32);
            tracep->chgSData(oldp+218,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__e_j_b_inst_reg_id),12);
            tracep->chgQData(oldp+219,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__cpupc_reg_is),64);
            tracep->chgCData(oldp+221,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__alu_src1_reg_is),4);
            tracep->chgCData(oldp+222,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__alu_src2_reg_is),3);
            tracep->chgIData(oldp+223,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__alu_control_reg_is),17);
            tracep->chgBit(oldp+224,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__data_ram_ren_reg_is));
            tracep->chgBit(oldp+225,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__data_ram_wen_reg_is));
            tracep->chgCData(oldp+226,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__wmask_reg_is),8);
            tracep->chgCData(oldp+227,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__l_choose_reg_is),7);
            tracep->chgBit(oldp+228,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__w_choose_reg_is));
            tracep->chgQData(oldp+229,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__src1_reg_is),64);
            tracep->chgQData(oldp+231,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__src2_reg_is),64);
            tracep->chgQData(oldp+233,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__imm_reg_is),64);
            tracep->chgQData(oldp+235,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__c_rdata_reg_is),64);
            tracep->chgSData(oldp+237,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__e_j_b_inst_reg_is),12);
            tracep->chgSData(oldp+238,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__e_j_b_inst_reg_wb),12);
            tracep->chgQData(oldp+239,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__dnpc_reg_id),64);
            tracep->chgQData(oldp+241,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__dnpc_reg_is),64);
            tracep->chgCData(oldp+243,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__sel_rf_res_reg_wb),3);
            tracep->chgBit(oldp+244,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__rf_wen_reg_wb));
            tracep->chgQData(oldp+245,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__alu_result_reg_wb),64);
            tracep->chgQData(oldp+247,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ram_data_reg_wb),64);
            tracep->chgCData(oldp+249,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__rd_reg_wb),5);
            tracep->chgQData(oldp+250,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__c_rdata_reg_wb),64);
            tracep->chgBit(oldp+252,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__pipe3_valid));
            tracep->chgBit(oldp+253,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_reg_finish));
            tracep->chgBit(oldp+254,(((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__stallable_pipeline_test__DOT__pipe1_to_pipe2_valid) 
                                      & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__stallable_pipeline_test__DOT__pipe2_allow_in))));
            tracep->chgBit(oldp+255,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__stallable_pipeline_test__DOT__pipe2_to_pipe3_valid));
            tracep->chgBit(oldp+256,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__pipe2_valid));
            tracep->chgBit(oldp+257,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__pipe1_valid));
            tracep->chgCData(oldp+258,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__stallable_pipeline_test__DOT__sel_rf_res_reg_is),3);
            tracep->chgBit(oldp+259,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__stallable_pipeline_test__DOT__rf_wen_reg_is));
            tracep->chgCData(oldp+260,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__stallable_pipeline_test__DOT__rd_reg_is),5);
            tracep->chgIData(oldp+261,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__stallable_pipeline_test__DOT__inst_reg_is),32);
            tracep->chgBit(oldp+262,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__stallable_pipeline_test__DOT__not_jump_reg_id));
            tracep->chgBit(oldp+263,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__stallable_pipeline_test__DOT__not_jump_reg_is));
            tracep->chgBit(oldp+264,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__stallable_pipeline_test__DOT__not_jump_reg_wb));
            tracep->chgBit(oldp+265,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__stallable_pipeline_test__DOT__pipe1_allow_in));
            tracep->chgBit(oldp+266,((1U & (~ (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__control_hazard)))));
            tracep->chgBit(oldp+267,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__stallable_pipeline_test__DOT__pipe1_to_pipe2_valid));
            tracep->chgBit(oldp+268,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__stallable_pipeline_test__DOT__pipe2_allow_in));
            tracep->chgQData(oldp+269,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__dnpc_0),64);
            tracep->chgBit(oldp+271,((4U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__cache_state))));
            tracep->chgQData(oldp+272,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__rdata_u),64);
            tracep->chgWData(oldp+274,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT____Vcellinp__mux4____pinNumber3),130);
            tracep->chgWData(oldp+279,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__mux4__DOT__i0__DOT__pair_list[0]),65);
            tracep->chgWData(oldp+282,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__mux4__DOT__i0__DOT__pair_list[1]),65);
            tracep->chgBit(oldp+285,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__mux4__DOT__i0__DOT__key_list[0]));
            tracep->chgBit(oldp+286,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__mux4__DOT__i0__DOT__key_list[1]));
            tracep->chgQData(oldp+287,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__mux4__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+289,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__mux4__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+291,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__mux4__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+293,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__mux4__DOT__i0__DOT__hit));
            tracep->chgBit(oldp+294,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT____Vcellinp__mux5____pinNumber2));
            tracep->chgWData(oldp+295,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT____Vcellinp__mux5____pinNumber3),130);
            tracep->chgWData(oldp+300,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__mux5__DOT__i0__DOT__pair_list[0]),65);
            tracep->chgWData(oldp+303,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__mux5__DOT__i0__DOT__pair_list[1]),65);
            tracep->chgBit(oldp+306,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__mux5__DOT__i0__DOT__key_list[0]));
            tracep->chgBit(oldp+307,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__mux5__DOT__i0__DOT__key_list[1]));
            tracep->chgQData(oldp+308,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__mux5__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+310,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__mux5__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+312,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__mux5__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+314,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__mux5__DOT__i0__DOT__hit));
            tracep->chgBit(oldp+315,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__rlast_delay));
            tracep->chgCData(oldp+316,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__cache_state),3);
            tracep->chgCData(oldp+317,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__d_len),3);
            tracep->chgCData(oldp+318,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__state),3);
            tracep->chgBit(oldp+319,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__rvalid_rready));
            tracep->chgQData(oldp+320,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__rdata_test3),64);
            tracep->chgIData(oldp+322,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__unnamedblk1__DOT__i),32);
            tracep->chgCData(oldp+323,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__c_raddr),2);
            tracep->chgCData(oldp+324,((0x1fU & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                                 >> 0xfU))),5);
            tracep->chgCData(oldp+325,((0x1fU & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                                 >> 0x14U))),5);
            tracep->chgBit(oldp+326,(((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__rf_ren_src1) 
                                        & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__rf_wen)) 
                                       & ((0x1fU & 
                                           (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                            >> 7U)) 
                                          == (0x1fU 
                                              & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                                 >> 0xfU)))) 
                                      | (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__rf_ren_src2) 
                                          & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__rf_wen)) 
                                         & ((0x1fU 
                                             & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                                >> 7U)) 
                                            == (0x1fU 
                                                & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                                   >> 0x14U)))))));
            tracep->chgCData(oldp+327,((0x7fU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id)),7);
            tracep->chgCData(oldp+328,((7U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                              >> 0xcU))),3);
            tracep->chgCData(oldp+329,((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                        >> 0x19U)),7);
            tracep->chgIData(oldp+330,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__buzy),32);
            tracep->chgQData(oldp+331,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__immi),64);
            tracep->chgQData(oldp+333,((((- (QData)((IData)(
                                                            (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                                             >> 0x1fU)))) 
                                         << 0xcU) | (QData)((IData)(
                                                                    ((0xfe0U 
                                                                      & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                                                         >> 0x14U)) 
                                                                     | (0x1fU 
                                                                        & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                                                           >> 7U))))))),64);
            tracep->chgQData(oldp+335,((((- (QData)((IData)(
                                                            (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                                             >> 0x1fU)))) 
                                         << 0xdU) | (QData)((IData)(
                                                                    ((0x1000U 
                                                                      & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                                                         >> 0x13U)) 
                                                                     | ((0x800U 
                                                                         & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                                                            << 4U)) 
                                                                        | ((0x7e0U 
                                                                            & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                                                               >> 0x14U)) 
                                                                           | (0x1eU 
                                                                              & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                                                                >> 7U))))))))),64);
            tracep->chgQData(oldp+337,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__immu),64);
            tracep->chgQData(oldp+339,((((- (QData)((IData)(
                                                            (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                                             >> 0x1fU)))) 
                                         << 0x15U) 
                                        | (QData)((IData)(
                                                          ((0x100000U 
                                                            & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                                               >> 0xbU)) 
                                                           | ((0xff000U 
                                                               & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id) 
                                                              | ((0x800U 
                                                                  & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                                                     >> 9U)) 
                                                                 | (0x7feU 
                                                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                                                       >> 0x14U))))))))),64);
            tracep->chgQData(oldp+341,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__c_wdata),64);
            tracep->chgIData(oldp+343,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__unnamedblk1__DOT__i),32);
            tracep->chgWData(oldp+344,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3),760);
            tracep->chgWData(oldp+368,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[0]),76);
            tracep->chgWData(oldp+371,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[1]),76);
            tracep->chgWData(oldp+374,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[2]),76);
            tracep->chgWData(oldp+377,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[3]),76);
            tracep->chgWData(oldp+380,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[4]),76);
            tracep->chgWData(oldp+383,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[5]),76);
            tracep->chgWData(oldp+386,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[6]),76);
            tracep->chgWData(oldp+389,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[7]),76);
            tracep->chgWData(oldp+392,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[8]),76);
            tracep->chgWData(oldp+395,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[9]),76);
            tracep->chgSData(oldp+398,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list[0]),12);
            tracep->chgSData(oldp+399,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list[1]),12);
            tracep->chgSData(oldp+400,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list[2]),12);
            tracep->chgSData(oldp+401,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list[3]),12);
            tracep->chgSData(oldp+402,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list[4]),12);
            tracep->chgSData(oldp+403,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list[5]),12);
            tracep->chgSData(oldp+404,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list[6]),12);
            tracep->chgSData(oldp+405,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list[7]),12);
            tracep->chgSData(oldp+406,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list[8]),12);
            tracep->chgSData(oldp+407,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list[9]),12);
            tracep->chgQData(oldp+408,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+410,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+412,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+414,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+416,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list[4]),64);
            tracep->chgQData(oldp+418,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list[5]),64);
            tracep->chgQData(oldp+420,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list[6]),64);
            tracep->chgQData(oldp+422,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list[7]),64);
            tracep->chgQData(oldp+424,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list[8]),64);
            tracep->chgQData(oldp+426,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list[9]),64);
            tracep->chgQData(oldp+428,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+430,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux0__DOT__i0__DOT__hit));
            tracep->chgWData(oldp+431,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT____Vcellinp__mux3____pinNumber3),130);
            tracep->chgWData(oldp+436,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux3__DOT__i0__DOT__pair_list[0]),65);
            tracep->chgWData(oldp+439,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux3__DOT__i0__DOT__pair_list[1]),65);
            tracep->chgBit(oldp+442,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux3__DOT__i0__DOT__key_list[0]));
            tracep->chgBit(oldp+443,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux3__DOT__i0__DOT__key_list[1]));
            tracep->chgQData(oldp+444,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux3__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+446,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux3__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+448,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux3__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+450,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__mux3__DOT__i0__DOT__hit));
            tracep->chgBit(oldp+451,(((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__rf_wen_reg_wb) 
                                      & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__pipe3_valid))));
            tracep->chgQData(oldp+452,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__r0__DOT__rf[0]),64);
            tracep->chgQData(oldp+454,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__r0__DOT__rf[1]),64);
            tracep->chgQData(oldp+456,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__r0__DOT__rf[2]),64);
            tracep->chgQData(oldp+458,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__r0__DOT__rf[3]),64);
            tracep->chgQData(oldp+460,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__r0__DOT__rf[4]),64);
            tracep->chgQData(oldp+462,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__r0__DOT__rf[5]),64);
            tracep->chgQData(oldp+464,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__r0__DOT__rf[6]),64);
            tracep->chgQData(oldp+466,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__r0__DOT__rf[7]),64);
            tracep->chgQData(oldp+468,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__r0__DOT__rf[8]),64);
            tracep->chgQData(oldp+470,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__r0__DOT__rf[9]),64);
            tracep->chgQData(oldp+472,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__r0__DOT__rf[10]),64);
            tracep->chgQData(oldp+474,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__r0__DOT__rf[11]),64);
            tracep->chgQData(oldp+476,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__r0__DOT__rf[12]),64);
            tracep->chgQData(oldp+478,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__r0__DOT__rf[13]),64);
            tracep->chgQData(oldp+480,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__r0__DOT__rf[14]),64);
            tracep->chgQData(oldp+482,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__r0__DOT__rf[15]),64);
            tracep->chgQData(oldp+484,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__r0__DOT__rf[16]),64);
            tracep->chgQData(oldp+486,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__r0__DOT__rf[17]),64);
            tracep->chgQData(oldp+488,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__r0__DOT__rf[18]),64);
            tracep->chgQData(oldp+490,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__r0__DOT__rf[19]),64);
            tracep->chgQData(oldp+492,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__r0__DOT__rf[20]),64);
            tracep->chgQData(oldp+494,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__r0__DOT__rf[21]),64);
            tracep->chgQData(oldp+496,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__r0__DOT__rf[22]),64);
            tracep->chgQData(oldp+498,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__r0__DOT__rf[23]),64);
            tracep->chgQData(oldp+500,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__r0__DOT__rf[24]),64);
            tracep->chgQData(oldp+502,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__r0__DOT__rf[25]),64);
            tracep->chgQData(oldp+504,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__r0__DOT__rf[26]),64);
            tracep->chgQData(oldp+506,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__r0__DOT__rf[27]),64);
            tracep->chgQData(oldp+508,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__r0__DOT__rf[28]),64);
            tracep->chgQData(oldp+510,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__r0__DOT__rf[29]),64);
            tracep->chgQData(oldp+512,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__r0__DOT__rf[30]),64);
            tracep->chgQData(oldp+514,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__r0__DOT__rf[31]),64);
            tracep->chgQData(oldp+516,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__r0__DOT__csr[0]),64);
            tracep->chgQData(oldp+518,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__r0__DOT__csr[1]),64);
            tracep->chgQData(oldp+520,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__r0__DOT__csr[2]),64);
            tracep->chgQData(oldp+522,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__r0__DOT__csr[3]),64);
            tracep->chgIData(oldp+524,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__r0__DOT__i),32);
            tracep->chgBit(oldp+525,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__addi));
            tracep->chgBit(oldp+526,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__csrrw));
            tracep->chgBit(oldp+527,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__andi));
            tracep->chgBit(oldp+528,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__xori));
            tracep->chgBit(oldp+529,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__ori));
            tracep->chgBit(oldp+530,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__sll));
            tracep->chgBit(oldp+531,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__srl));
            tracep->chgBit(oldp+532,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__sra));
            tracep->chgBit(oldp+533,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__sllw));
            tracep->chgBit(oldp+534,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__srlw));
            tracep->chgBit(oldp+535,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__sraw));
            tracep->chgBit(oldp+536,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__addiw));
            tracep->chgBit(oldp+537,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__slliw));
            tracep->chgBit(oldp+538,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__srliw));
            tracep->chgBit(oldp+539,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__sraiw));
            tracep->chgBit(oldp+540,((1U & ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__op_d) 
                                            >> 1U))));
            tracep->chgBit(oldp+541,((1U & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__op_d))));
            tracep->chgBit(oldp+542,((1U & ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__e_j_b_inst_reg_id) 
                                            >> 3U))));
            tracep->chgBit(oldp+543,((1U & ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__e_j_b_inst_reg_id) 
                                            >> 4U))));
            tracep->chgBit(oldp+544,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__sd));
            tracep->chgBit(oldp+545,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__sh));
            tracep->chgBit(oldp+546,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__sw));
            tracep->chgBit(oldp+547,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__sb));
            tracep->chgBit(oldp+548,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__lw));
            tracep->chgBit(oldp+549,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__lwu));
            tracep->chgBit(oldp+550,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__lh));
            tracep->chgBit(oldp+551,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__lhu));
            tracep->chgBit(oldp+552,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__lb));
            tracep->chgBit(oldp+553,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__lbu));
            tracep->chgBit(oldp+554,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__ld));
            tracep->chgBit(oldp+555,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__addw));
            tracep->chgBit(oldp+556,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__subw));
            tracep->chgBit(oldp+557,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__mulw));
            tracep->chgBit(oldp+558,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__divw));
            tracep->chgBit(oldp+559,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__divuw));
            tracep->chgBit(oldp+560,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__remw));
            tracep->chgBit(oldp+561,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__remuw));
            tracep->chgBit(oldp+562,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__divu));
            tracep->chgBit(oldp+563,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__div));
            tracep->chgBit(oldp+564,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__rem));
            tracep->chgBit(oldp+565,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__remu));
            tracep->chgBit(oldp+566,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__Add));
            tracep->chgBit(oldp+567,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__Mul));
            tracep->chgBit(oldp+568,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__And));
            tracep->chgBit(oldp+569,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__Xor));
            tracep->chgBit(oldp+570,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__Or));
            tracep->chgBit(oldp+571,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__sltu));
            tracep->chgBit(oldp+572,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__slt));
            tracep->chgBit(oldp+573,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__sub));
            tracep->chgBit(oldp+574,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__sltiu));
            tracep->chgBit(oldp+575,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__srai));
            tracep->chgBit(oldp+576,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__slli));
            tracep->chgBit(oldp+577,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__srli));
            tracep->chgBit(oldp+578,((1U & ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__e_j_b_inst_reg_id) 
                                            >> 5U))));
            tracep->chgBit(oldp+579,((1U & ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__e_j_b_inst_reg_id) 
                                            >> 6U))));
            tracep->chgBit(oldp+580,((1U & ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__e_j_b_inst_reg_id) 
                                            >> 7U))));
            tracep->chgBit(oldp+581,((1U & ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__e_j_b_inst_reg_id) 
                                            >> 8U))));
            tracep->chgBit(oldp+582,((1U & ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__e_j_b_inst_reg_id) 
                                            >> 9U))));
            tracep->chgBit(oldp+583,((1U & ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__e_j_b_inst_reg_id) 
                                            >> 0xaU))));
            tracep->chgCData(oldp+584,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__alu_equal),3);
            tracep->chgQData(oldp+585,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__alu_src1),64);
            tracep->chgQData(oldp+587,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__alu_src2),64);
            tracep->chgWData(oldp+589,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT____Vcellinp__mux1____pinNumber3),272);
            tracep->chgWData(oldp+598,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__mux1__DOT__i0__DOT__pair_list[0]),68);
            tracep->chgWData(oldp+601,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__mux1__DOT__i0__DOT__pair_list[1]),68);
            tracep->chgWData(oldp+604,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__mux1__DOT__i0__DOT__pair_list[2]),68);
            tracep->chgWData(oldp+607,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__mux1__DOT__i0__DOT__pair_list[3]),68);
            tracep->chgCData(oldp+610,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__mux1__DOT__i0__DOT__key_list[0]),4);
            tracep->chgCData(oldp+611,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__mux1__DOT__i0__DOT__key_list[1]),4);
            tracep->chgCData(oldp+612,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__mux1__DOT__i0__DOT__key_list[2]),4);
            tracep->chgCData(oldp+613,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__mux1__DOT__i0__DOT__key_list[3]),4);
            tracep->chgQData(oldp+614,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__mux1__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+616,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__mux1__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+618,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__mux1__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+620,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__mux1__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+622,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__mux1__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+624,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__mux1__DOT__i0__DOT__hit));
            tracep->chgWData(oldp+625,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT____Vcellinp__mux2____pinNumber3),201);
            tracep->chgWData(oldp+632,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__mux2__DOT__i0__DOT__pair_list[0]),67);
            tracep->chgWData(oldp+635,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__mux2__DOT__i0__DOT__pair_list[1]),67);
            tracep->chgWData(oldp+638,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__mux2__DOT__i0__DOT__pair_list[2]),67);
            tracep->chgCData(oldp+641,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__mux2__DOT__i0__DOT__key_list[0]),3);
            tracep->chgCData(oldp+642,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__mux2__DOT__i0__DOT__key_list[1]),3);
            tracep->chgCData(oldp+643,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__mux2__DOT__i0__DOT__key_list[2]),3);
            tracep->chgQData(oldp+644,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__mux2__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+646,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__mux2__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+648,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__mux2__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+650,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__mux2__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+652,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__mux2__DOT__i0__DOT__hit));
            tracep->chgBit(oldp+653,((1U & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__alu_control_reg_is)));
            tracep->chgBit(oldp+654,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__alu_control_reg_is 
                                            >> 1U))));
            tracep->chgBit(oldp+655,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__alu_control_reg_is 
                                            >> 2U))));
            tracep->chgBit(oldp+656,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__alu_control_reg_is 
                                            >> 3U))));
            tracep->chgBit(oldp+657,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__alu_control_reg_is 
                                            >> 4U))));
            tracep->chgBit(oldp+658,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__alu_control_reg_is 
                                            >> 5U))));
            tracep->chgBit(oldp+659,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__alu_control_reg_is 
                                            >> 6U))));
            tracep->chgBit(oldp+660,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__alu_control_reg_is 
                                            >> 7U))));
            tracep->chgBit(oldp+661,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__alu_control_reg_is 
                                            >> 8U))));
            tracep->chgBit(oldp+662,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__alu_control_reg_is 
                                            >> 9U))));
            tracep->chgBit(oldp+663,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__alu_control_reg_is 
                                            >> 0xaU))));
            tracep->chgBit(oldp+664,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__alu_control_reg_is 
                                            >> 0xbU))));
            tracep->chgBit(oldp+665,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__alu_control_reg_is 
                                            >> 0xcU))));
            tracep->chgBit(oldp+666,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__alu_control_reg_is 
                                            >> 0xdU))));
            tracep->chgBit(oldp+667,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__alu_control_reg_is 
                                            >> 0xeU))));
            tracep->chgBit(oldp+668,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__alu_control_reg_is 
                                            >> 0xfU))));
            tracep->chgBit(oldp+669,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__alu_control_reg_is 
                                            >> 0x10U))));
            tracep->chgBit(oldp+670,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__div_valid));
            tracep->chgBit(oldp+671,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__div_ready));
            tracep->chgBit(oldp+672,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__div_out_valid));
            tracep->chgBit(oldp+673,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__div_doing));
            tracep->chgBit(oldp+674,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__div_finish));
            tracep->chgQData(oldp+675,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__div_result_r),64);
            tracep->chgQData(oldp+677,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__qutient),64);
            tracep->chgBit(oldp+679,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__mul_valid));
            tracep->chgBit(oldp+680,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__mul_ready));
            tracep->chgBit(oldp+681,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__mul_out_valid));
            tracep->chgBit(oldp+682,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__mul_doing));
            tracep->chgBit(oldp+683,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__mul_finish));
            tracep->chgQData(oldp+684,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__mul_result_r),64);
            tracep->chgQData(oldp+686,((((QData)((IData)(
                                                         vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__tmp_result[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__tmp_result[0U])))),64);
            tracep->chgQData(oldp+688,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__slt_result),64);
            tracep->chgQData(oldp+690,((QData)((IData)(
                                                       (1U 
                                                        & (~ (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_cout)))))),64);
            tracep->chgQData(oldp+692,((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__alu_src1 
                                        & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__alu_src2)),64);
            tracep->chgQData(oldp+694,((~ vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__or_result)),64);
            tracep->chgQData(oldp+696,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__or_result),64);
            tracep->chgQData(oldp+698,((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__alu_src1 
                                        ^ vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__alu_src2)),64);
            tracep->chgQData(oldp+700,((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__alu_src1 
                                        << (0x3fU & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__alu_src2)))),64);
            tracep->chgQData(oldp+702,((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__alu_src1 
                                        >> (0x3fU & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__alu_src2)))),64);
            tracep->chgQData(oldp+704,(VL_SHIFTRS_QQI(64,64,6, vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__alu_src1, 
                                                      (0x3fU 
                                                       & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__alu_src2)))),64);
            tracep->chgQData(oldp+706,((0xfffffffffffff000ULL 
                                        & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__alu_src2)),64);
            tracep->chgQData(oldp+708,(VL_MODDIV_QQQ(64, vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__alu_src1, vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__alu_src2)),64);
            tracep->chgQData(oldp+710,(VL_MODDIVS_QQQ(64, vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__alu_src1, vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__alu_src2)),64);
            tracep->chgQData(oldp+712,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_b),64);
            tracep->chgBit(oldp+714,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_cin));
            tracep->chgBit(oldp+715,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_cout));
            tracep->chgQData(oldp+716,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__alu_result_uw),64);
            tracep->chgQData(oldp+718,((((QData)((IData)(
                                                         (- (IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__alu_result_uw 
                                                                                >> 0x1fU))))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__alu_result_uw)))),64);
            tracep->chgWData(oldp+720,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT____Vcellinp__mux1____pinNumber3),130);
            tracep->chgWData(oldp+725,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__mux1__DOT__i0__DOT__pair_list[0]),65);
            tracep->chgWData(oldp+728,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__mux1__DOT__i0__DOT__pair_list[1]),65);
            tracep->chgBit(oldp+731,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__mux1__DOT__i0__DOT__key_list[0]));
            tracep->chgBit(oldp+732,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__mux1__DOT__i0__DOT__key_list[1]));
            tracep->chgQData(oldp+733,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__mux1__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+735,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__mux1__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+737,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__mux1__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+739,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__mux1__DOT__i0__DOT__hit));
            tracep->chgQData(oldp+740,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__remain),64);
            tracep->chgWData(oldp+742,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__dividend),128);
            tracep->chgQData(oldp+746,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__divisor),64);
            tracep->chgBit(oldp+748,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__running_r));
            tracep->chgBit(oldp+749,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__divisor_s));
            tracep->chgBit(oldp+750,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__dividend_s));
            tracep->chgCData(oldp+751,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__count),7);
            tracep->chgBit(oldp+752,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__done));
            tracep->chgBit(oldp+753,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__div_prepare));
            tracep->chgBit(oldp+754,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__sub_cout));
            __Vtemp1402[0U] = 1U;
            __Vtemp1402[1U] = 0U;
            __Vtemp1402[2U] = 0U;
            __Vtemp1403[0U] = ((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__dividend[2U] 
                                << 1U) | (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__dividend[1U] 
                                          >> 0x1fU));
            __Vtemp1403[1U] = ((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__dividend[3U] 
                                << 1U) | (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__dividend[2U] 
                                          >> 0x1fU));
            __Vtemp1403[2U] = (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__dividend[3U] 
                               >> 0x1fU);
            __Vtemp1404[0U] = (IData)((~ vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__divisor));
            __Vtemp1404[1U] = (IData)(((~ vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__divisor) 
                                       >> 0x20U));
            __Vtemp1404[2U] = 1U;
            VL_ADD_W(3, __Vtemp1405, __Vtemp1403, __Vtemp1404);
            VL_ADD_W(3, __Vtemp1406, __Vtemp1402, __Vtemp1405);
            __Vtemp1407[0U] = __Vtemp1406[0U];
            __Vtemp1407[1U] = __Vtemp1406[1U];
            __Vtemp1407[2U] = (1U & __Vtemp1406[2U]);
            tracep->chgWData(oldp+755,(__Vtemp1407),65);
            tracep->chgQData(oldp+758,((1ULL + (~ vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__y_adder_src1))),64);
            tracep->chgQData(oldp+760,((1ULL + (~ vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__x_adder_src1))),64);
            tracep->chgQData(oldp+762,(((1U & ((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__alu_control_reg_is 
                                                >> 0xeU) 
                                               & (IData)(
                                                         (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__alu_src1 
                                                          >> 0x3fU))))
                                         ? (1ULL + 
                                            (~ vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__x_adder_src1))
                                         : vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__alu_src1)),64);
            tracep->chgQData(oldp+764,(((1U & ((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__alu_control_reg_is 
                                                >> 0xeU) 
                                               & (IData)(
                                                         (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__alu_src2 
                                                          >> 0x3fU))))
                                         ? (1ULL + 
                                            (~ vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__y_adder_src1))
                                         : vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__alu_src2)),64);
            tracep->chgQData(oldp+766,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__x_adder_src1),64);
            tracep->chgQData(oldp+768,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__y_adder_src1),64);
            tracep->chgBit(oldp+770,((((~ (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__dividend_s)) 
                                       & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__divisor_s)) 
                                      | ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__dividend_s) 
                                         & (~ (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__divisor_s))))));
            tracep->chgQData(oldp+771,((~ vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__x_adder_src1)),64);
            __Vtemp1409[0U] = 1U;
            __Vtemp1409[1U] = 0U;
            __Vtemp1409[2U] = 0U;
            VL_EXTEND_WQ(65,64, __Vtemp1410, (~ vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__x_adder_src1));
            VL_ADD_W(3, __Vtemp1411, __Vtemp1409, __Vtemp1410);
            tracep->chgBit(oldp+773,((1U & __Vtemp1411[2U])));
            tracep->chgQData(oldp+774,((~ vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__y_adder_src1)),64);
            __Vtemp1414[0U] = 1U;
            __Vtemp1414[1U] = 0U;
            __Vtemp1414[2U] = 0U;
            VL_EXTEND_WQ(65,64, __Vtemp1415, (~ vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__y_adder_src1));
            VL_ADD_W(3, __Vtemp1416, __Vtemp1414, __Vtemp1415);
            tracep->chgBit(oldp+776,((1U & __Vtemp1416[2U])));
            __Vtemp1420[0U] = ((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__dividend[2U] 
                                << 1U) | (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__dividend[1U] 
                                          >> 0x1fU));
            __Vtemp1420[1U] = ((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__dividend[3U] 
                                << 1U) | (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__dividend[2U] 
                                          >> 0x1fU));
            __Vtemp1420[2U] = (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__dividend[3U] 
                               >> 0x1fU);
            tracep->chgWData(oldp+777,(__Vtemp1420),65);
            __Vtemp1421[0U] = (IData)((~ vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__divisor));
            __Vtemp1421[1U] = (IData)(((~ vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__divisor) 
                                       >> 0x20U));
            __Vtemp1421[2U] = 1U;
            tracep->chgWData(oldp+780,(__Vtemp1421),65);
            tracep->chgWData(oldp+783,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT____Vcellinp__ysyx_22050533_mulu_0__multiplicand),65);
            tracep->chgWData(oldp+786,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT____Vcellinp__ysyx_22050533_mulu_0__multiplier),65);
            tracep->chgWData(oldp+789,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__tmp_result),132);
            tracep->chgWData(oldp+794,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r),132);
            tracep->chgWData(oldp+799,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplier_r),67);
            tracep->chgBit(oldp+802,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__running_r));
            tracep->chgBit(oldp+803,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__mul_prepare));
            tracep->chgBit(oldp+804,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__done));
            tracep->chgWData(oldp+805,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result),132);
            tracep->chgCData(oldp+810,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__cnt),7);
            tracep->chgBit(oldp+811,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial_cout));
            VL_ADD_W(5, __Vtemp1423, vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result, vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__tmp_result);
            VL_EXTEND_WI(133,1, __Vtemp1424, (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial_cout));
            __Vtemp1425[0U] = __Vtemp1424[0U];
            __Vtemp1425[1U] = __Vtemp1424[1U];
            __Vtemp1425[2U] = __Vtemp1424[2U];
            __Vtemp1425[3U] = __Vtemp1424[3U];
            __Vtemp1425[4U] = __Vtemp1424[4U];
            VL_ADD_W(5, __Vtemp1426, __Vtemp1423, __Vtemp1425);
            __Vtemp1427[0U] = __Vtemp1426[0U];
            __Vtemp1427[1U] = __Vtemp1426[1U];
            __Vtemp1427[2U] = __Vtemp1426[2U];
            __Vtemp1427[3U] = __Vtemp1426[3U];
            __Vtemp1427[4U] = (0xfU & __Vtemp1426[4U]);
            tracep->chgWData(oldp+812,(__Vtemp1427),132);
            VL_EXTEND_WW(133,132, __Vtemp1429, vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result);
            VL_EXTEND_WW(133,132, __Vtemp1430, vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__tmp_result);
            VL_ADD_W(5, __Vtemp1431, __Vtemp1429, __Vtemp1430);
            VL_EXTEND_WI(133,1, __Vtemp1432, (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial_cout));
            VL_ADD_W(5, __Vtemp1433, __Vtemp1431, __Vtemp1432);
            tracep->chgBit(oldp+817,((1U & (__Vtemp1433[4U] 
                                            >> 4U))));
            tracep->chgCData(oldp+818,((7U & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplier_r[0U])),3);
            tracep->chgCData(oldp+819,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel),4);
            tracep->chgBit(oldp+820,((1U & ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                            >> 3U))));
            tracep->chgBit(oldp+821,((1U & ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                            >> 1U))));
            tracep->chgBit(oldp+822,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplier_r[0U] 
                                            >> 2U))));
            tracep->chgBit(oldp+823,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplier_r[0U] 
                                            >> 1U))));
            tracep->chgBit(oldp+824,((1U & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplier_r[0U])));
            tracep->chgBit(oldp+825,((1U & ((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplier_r[0U] 
                                             >> 2U) 
                                            & (((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplier_r[0U] 
                                                 >> 1U) 
                                                & (~ 
                                                   vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplier_r[0U])) 
                                               | ((~ 
                                                   (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplier_r[0U] 
                                                    >> 1U)) 
                                                  & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplier_r[0U]))))));
            tracep->chgBit(oldp+826,((1U & (((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplier_r[0U] 
                                              >> 2U) 
                                             & (~ (
                                                   vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplier_r[0U] 
                                                   >> 1U))) 
                                            & (~ vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplier_r[0U])))));
            tracep->chgBit(oldp+827,((1U & ((~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplier_r[0U] 
                                                >> 2U)) 
                                            & (((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplier_r[0U] 
                                                 >> 1U) 
                                                & (~ 
                                                   vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplier_r[0U])) 
                                               | ((~ 
                                                   (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplier_r[0U] 
                                                    >> 1U)) 
                                                  & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplier_r[0U]))))));
            tracep->chgBit(oldp+828,((1U & (((~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplier_r[0U] 
                                                 >> 2U)) 
                                             & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplier_r[0U] 
                                                >> 1U)) 
                                            & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplier_r[0U]))));
            tracep->chgCData(oldp+829,((2U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                              << 1U))),2);
            tracep->chgBit(oldp+830,((1U & (~ (((~ 
                                                 (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                   >> 3U) 
                                                  & (~ 
                                                     vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U]))) 
                                                & (~ 
                                                   ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                    >> 1U))) 
                                               & (~ 
                                                  (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                    >> 2U) 
                                                   & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U])))))));
            tracep->chgBit(oldp+831,((1U & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U])));
            tracep->chgBit(oldp+832,((1U & ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                            >> 3U))));
            tracep->chgBit(oldp+833,((1U & ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                            >> 1U))));
            tracep->chgBit(oldp+834,((1U & ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                            >> 2U))));
            tracep->chgBit(oldp+835,((1U & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel))));
            tracep->chgCData(oldp+836,((3U & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U])),2);
            tracep->chgBit(oldp+837,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                       >> 1U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U])))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                       >> 1U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                   & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U])))))));
            tracep->chgBit(oldp+838,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                            >> 1U))));
            tracep->chgBit(oldp+839,((1U & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U])));
            tracep->chgCData(oldp+840,((3U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                              >> 1U))),2);
            tracep->chgBit(oldp+841,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                       >> 2U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                         >> 1U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                     & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U]) 
                                                    >> 2U))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                      >> 1U))))))));
            tracep->chgBit(oldp+842,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                            >> 2U))));
            tracep->chgCData(oldp+843,((3U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                              >> 2U))),2);
            tracep->chgBit(oldp+844,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                       >> 3U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                         >> 2U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                       >> 3U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                      >> 2U))))))));
            tracep->chgBit(oldp+845,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                            >> 3U))));
            tracep->chgCData(oldp+846,((3U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                              >> 3U))),2);
            tracep->chgBit(oldp+847,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                       >> 4U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                         >> 3U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                       >> 4U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                      >> 3U))))))));
            tracep->chgBit(oldp+848,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                            >> 4U))));
            tracep->chgCData(oldp+849,((3U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                              >> 4U))),2);
            tracep->chgBit(oldp+850,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                       >> 5U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                         >> 4U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                       >> 5U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                      >> 4U))))))));
            tracep->chgBit(oldp+851,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                            >> 5U))));
            tracep->chgCData(oldp+852,((3U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                              >> 5U))),2);
            tracep->chgBit(oldp+853,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                       >> 6U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                         >> 5U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                       >> 6U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                      >> 5U))))))));
            tracep->chgBit(oldp+854,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                            >> 6U))));
            tracep->chgCData(oldp+855,((3U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                              >> 6U))),2);
            tracep->chgBit(oldp+856,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                       >> 7U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                         >> 6U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                       >> 7U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                      >> 6U))))))));
            tracep->chgBit(oldp+857,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                            >> 7U))));
            tracep->chgCData(oldp+858,((3U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                              >> 7U))),2);
            tracep->chgBit(oldp+859,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                       >> 8U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                         >> 7U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                       >> 8U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                      >> 7U))))))));
            tracep->chgBit(oldp+860,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                            >> 8U))));
            tracep->chgCData(oldp+861,((3U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                              >> 8U))),2);
            tracep->chgBit(oldp+862,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                       >> 9U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                         >> 8U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                       >> 9U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                      >> 8U))))))));
            tracep->chgBit(oldp+863,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                            >> 9U))));
            tracep->chgCData(oldp+864,((3U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                              >> 9U))),2);
            tracep->chgBit(oldp+865,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                       >> 0xaU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                         >> 9U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                       >> 0xaU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                      >> 9U))))))));
            tracep->chgBit(oldp+866,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                            >> 0xaU))));
            tracep->chgCData(oldp+867,((3U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                              >> 0xaU))),2);
            tracep->chgBit(oldp+868,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                       >> 0xbU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                         >> 0xaU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                       >> 0xbU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                      >> 0xaU))))))));
            tracep->chgBit(oldp+869,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                            >> 0xbU))));
            tracep->chgCData(oldp+870,((3U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                              >> 0xbU))),2);
            tracep->chgBit(oldp+871,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                       >> 0xcU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                         >> 0xbU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                       >> 0xcU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                      >> 0xbU))))))));
            tracep->chgBit(oldp+872,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                            >> 0xcU))));
            tracep->chgCData(oldp+873,((3U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                              >> 0xcU))),2);
            tracep->chgBit(oldp+874,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                       >> 0xdU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                         >> 0xcU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                       >> 0xdU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                      >> 0xcU))))))));
            tracep->chgBit(oldp+875,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                            >> 0xdU))));
            tracep->chgCData(oldp+876,((3U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                              >> 0xdU))),2);
            tracep->chgBit(oldp+877,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                       >> 0xeU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                         >> 0xdU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                       >> 0xeU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                      >> 0xdU))))))));
            tracep->chgBit(oldp+878,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                            >> 0xeU))));
            tracep->chgCData(oldp+879,((3U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                              >> 0xeU))),2);
            tracep->chgBit(oldp+880,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                       >> 0xfU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                         >> 0xeU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                       >> 0xfU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                      >> 0xeU))))))));
            tracep->chgBit(oldp+881,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                            >> 0xfU))));
            tracep->chgCData(oldp+882,((3U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                              >> 0xfU))),2);
            tracep->chgBit(oldp+883,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                       >> 0x10U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                         >> 0xfU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                       >> 0x10U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                      >> 0xfU))))))));
            tracep->chgBit(oldp+884,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                            >> 0x10U))));
            tracep->chgCData(oldp+885,((3U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                              >> 0x10U))),2);
            tracep->chgBit(oldp+886,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                       >> 0x11U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                         >> 0x10U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                       >> 0x11U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                      >> 0x10U))))))));
            tracep->chgBit(oldp+887,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                            >> 0x11U))));
            tracep->chgCData(oldp+888,((3U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                              >> 0x11U))),2);
            tracep->chgBit(oldp+889,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                       >> 0x12U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                         >> 0x11U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                       >> 0x12U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                      >> 0x11U))))))));
            tracep->chgBit(oldp+890,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                            >> 0x12U))));
            tracep->chgCData(oldp+891,((3U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                              >> 0x12U))),2);
            tracep->chgBit(oldp+892,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                       >> 0x13U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                         >> 0x12U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                       >> 0x13U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                      >> 0x12U))))))));
            tracep->chgBit(oldp+893,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                            >> 0x13U))));
            tracep->chgCData(oldp+894,((3U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                              >> 0x13U))),2);
            tracep->chgBit(oldp+895,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                       >> 0x14U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                         >> 0x13U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                       >> 0x14U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                      >> 0x13U))))))));
            tracep->chgBit(oldp+896,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                            >> 0x14U))));
            tracep->chgCData(oldp+897,((3U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                              >> 0x14U))),2);
            tracep->chgBit(oldp+898,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                       >> 0x15U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                         >> 0x14U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                       >> 0x15U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                      >> 0x14U))))))));
            tracep->chgBit(oldp+899,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+900,((3U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                              >> 0x15U))),2);
            tracep->chgBit(oldp+901,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                       >> 0x16U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                         >> 0x15U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                       >> 0x16U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                      >> 0x15U))))))));
            tracep->chgBit(oldp+902,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                            >> 0x16U))));
            tracep->chgCData(oldp+903,((3U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                              >> 0x16U))),2);
            tracep->chgBit(oldp+904,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                       >> 0x17U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                         >> 0x16U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                       >> 0x17U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                      >> 0x16U))))))));
            tracep->chgBit(oldp+905,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                            >> 0x17U))));
            tracep->chgCData(oldp+906,((3U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                              >> 0x17U))),2);
            tracep->chgBit(oldp+907,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                       >> 0x18U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                         >> 0x17U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                       >> 0x18U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                      >> 0x17U))))))));
            tracep->chgBit(oldp+908,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                            >> 0x18U))));
            tracep->chgCData(oldp+909,((3U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                              >> 0x18U))),2);
            tracep->chgBit(oldp+910,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                       >> 0x19U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                         >> 0x18U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                       >> 0x19U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                      >> 0x18U))))))));
            tracep->chgBit(oldp+911,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                            >> 0x19U))));
            tracep->chgCData(oldp+912,((3U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                              >> 0x19U))),2);
            tracep->chgBit(oldp+913,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                       >> 0x1aU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                         >> 0x19U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                       >> 0x1aU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                      >> 0x19U))))))));
            tracep->chgBit(oldp+914,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                            >> 0x1aU))));
            tracep->chgCData(oldp+915,((3U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                              >> 0x1aU))),2);
            tracep->chgBit(oldp+916,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                       >> 0x1bU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                         >> 0x1aU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                       >> 0x1bU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                      >> 0x1aU))))))));
            tracep->chgBit(oldp+917,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                            >> 0x1bU))));
            tracep->chgCData(oldp+918,((3U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                              >> 0x1bU))),2);
            tracep->chgBit(oldp+919,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                       >> 0x1cU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                         >> 0x1bU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                       >> 0x1cU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                      >> 0x1bU))))))));
            tracep->chgBit(oldp+920,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                            >> 0x1cU))));
            tracep->chgCData(oldp+921,((3U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                              >> 0x1cU))),2);
            tracep->chgBit(oldp+922,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                       >> 0x1dU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                         >> 0x1cU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                       >> 0x1dU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                      >> 0x1cU))))))));
            tracep->chgBit(oldp+923,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                            >> 0x1dU))));
            tracep->chgCData(oldp+924,((3U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                              >> 0x1dU))),2);
            tracep->chgBit(oldp+925,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                       >> 0x1eU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                         >> 0x1dU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                       >> 0x1eU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                      >> 0x1dU))))))));
            tracep->chgBit(oldp+926,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                            >> 0x1eU))));
            tracep->chgCData(oldp+927,((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                        >> 0x1eU)),2);
            tracep->chgBit(oldp+928,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                       >> 0x1fU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                         >> 0x1eU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                       >> 0x1fU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                      >> 0x1eU))))))));
            tracep->chgBit(oldp+929,((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                      >> 0x1fU)));
            tracep->chgCData(oldp+930,((3U & ((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                               << 1U) 
                                              | (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                 >> 0x1fU)))),2);
            tracep->chgBit(oldp+931,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U]))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                         >> 0x1fU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U]))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                      >> 0x1fU))))))));
            tracep->chgBit(oldp+932,((1U & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U])));
            tracep->chgCData(oldp+933,((3U & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U])),2);
            tracep->chgBit(oldp+934,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                       >> 1U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U])))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                       >> 1U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                   & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U])))))));
            tracep->chgBit(oldp+935,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                            >> 1U))));
            tracep->chgCData(oldp+936,((3U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                              >> 1U))),2);
            tracep->chgBit(oldp+937,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                       >> 2U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                         >> 1U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                     & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U]) 
                                                    >> 2U))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                      >> 1U))))))));
            tracep->chgBit(oldp+938,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                            >> 2U))));
            tracep->chgCData(oldp+939,((3U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                              >> 2U))),2);
            tracep->chgBit(oldp+940,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                       >> 3U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                         >> 2U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                       >> 3U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                      >> 2U))))))));
            tracep->chgBit(oldp+941,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                            >> 3U))));
            tracep->chgCData(oldp+942,((3U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                              >> 3U))),2);
            tracep->chgBit(oldp+943,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                       >> 4U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                         >> 3U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                       >> 4U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                      >> 3U))))))));
            tracep->chgBit(oldp+944,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                            >> 4U))));
            tracep->chgCData(oldp+945,((3U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                              >> 4U))),2);
            tracep->chgBit(oldp+946,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                       >> 5U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                         >> 4U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                       >> 5U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                      >> 4U))))))));
            tracep->chgBit(oldp+947,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                            >> 5U))));
            tracep->chgCData(oldp+948,((3U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                              >> 5U))),2);
            tracep->chgBit(oldp+949,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                       >> 6U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                         >> 5U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                       >> 6U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                      >> 5U))))))));
            tracep->chgBit(oldp+950,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                            >> 6U))));
            tracep->chgCData(oldp+951,((3U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                              >> 6U))),2);
            tracep->chgBit(oldp+952,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                       >> 7U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                         >> 6U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                       >> 7U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                      >> 6U))))))));
            tracep->chgBit(oldp+953,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                            >> 7U))));
            tracep->chgCData(oldp+954,((3U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                              >> 7U))),2);
            tracep->chgBit(oldp+955,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                       >> 8U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                         >> 7U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                       >> 8U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                      >> 7U))))))));
            tracep->chgBit(oldp+956,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                            >> 8U))));
            tracep->chgCData(oldp+957,((3U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                              >> 8U))),2);
            tracep->chgBit(oldp+958,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                       >> 9U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                         >> 8U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                       >> 9U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                      >> 8U))))))));
            tracep->chgBit(oldp+959,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                            >> 9U))));
            tracep->chgCData(oldp+960,((3U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                              >> 9U))),2);
            tracep->chgBit(oldp+961,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                       >> 0xaU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                         >> 9U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                       >> 0xaU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                      >> 9U))))))));
            tracep->chgBit(oldp+962,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                            >> 0xaU))));
            tracep->chgCData(oldp+963,((3U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                              >> 0xaU))),2);
            tracep->chgBit(oldp+964,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                       >> 0xbU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                         >> 0xaU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                       >> 0xbU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                      >> 0xaU))))))));
            tracep->chgBit(oldp+965,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                            >> 0xbU))));
            tracep->chgCData(oldp+966,((3U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                              >> 0xbU))),2);
            tracep->chgBit(oldp+967,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                       >> 0xcU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                         >> 0xbU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                       >> 0xcU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                      >> 0xbU))))))));
            tracep->chgBit(oldp+968,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                            >> 0xcU))));
            tracep->chgCData(oldp+969,((3U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                              >> 0xcU))),2);
            tracep->chgBit(oldp+970,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                       >> 0xdU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                         >> 0xcU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                       >> 0xdU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                      >> 0xcU))))))));
            tracep->chgBit(oldp+971,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                            >> 0xdU))));
            tracep->chgCData(oldp+972,((3U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                              >> 0xdU))),2);
            tracep->chgBit(oldp+973,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                       >> 0xeU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                         >> 0xdU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                       >> 0xeU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                      >> 0xdU))))))));
            tracep->chgBit(oldp+974,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                            >> 0xeU))));
            tracep->chgCData(oldp+975,((3U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                              >> 0xeU))),2);
            tracep->chgBit(oldp+976,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                       >> 0xfU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                         >> 0xeU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                       >> 0xfU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                      >> 0xeU))))))));
            tracep->chgBit(oldp+977,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                            >> 0xfU))));
            tracep->chgCData(oldp+978,((3U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                              >> 0xfU))),2);
            tracep->chgBit(oldp+979,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                       >> 0x10U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                         >> 0xfU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                       >> 0x10U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                      >> 0xfU))))))));
            tracep->chgBit(oldp+980,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                            >> 0x10U))));
            tracep->chgCData(oldp+981,((3U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                              >> 0x10U))),2);
            tracep->chgBit(oldp+982,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                       >> 0x11U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                         >> 0x10U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                       >> 0x11U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                      >> 0x10U))))))));
            tracep->chgBit(oldp+983,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                            >> 0x11U))));
            tracep->chgCData(oldp+984,((3U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                              >> 0x11U))),2);
            tracep->chgBit(oldp+985,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                       >> 0x12U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                         >> 0x11U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                       >> 0x12U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                      >> 0x11U))))))));
            tracep->chgBit(oldp+986,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                            >> 0x12U))));
            tracep->chgCData(oldp+987,((3U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                              >> 0x12U))),2);
            tracep->chgBit(oldp+988,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                       >> 0x13U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                         >> 0x12U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                       >> 0x13U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                      >> 0x12U))))))));
            tracep->chgBit(oldp+989,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                            >> 0x13U))));
            tracep->chgCData(oldp+990,((3U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                              >> 0x13U))),2);
            tracep->chgBit(oldp+991,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                       >> 0x14U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                         >> 0x13U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                       >> 0x14U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                      >> 0x13U))))))));
            tracep->chgBit(oldp+992,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                            >> 0x14U))));
            tracep->chgCData(oldp+993,((3U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                              >> 0x14U))),2);
            tracep->chgBit(oldp+994,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                       >> 0x15U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                         >> 0x14U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                       >> 0x15U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                      >> 0x14U))))))));
            tracep->chgBit(oldp+995,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+996,((3U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                              >> 0x15U))),2);
            tracep->chgBit(oldp+997,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                       >> 0x16U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                         >> 0x15U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                       >> 0x16U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                      >> 0x15U))))))));
            tracep->chgBit(oldp+998,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                            >> 0x16U))));
            tracep->chgCData(oldp+999,((3U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                              >> 0x16U))),2);
            tracep->chgBit(oldp+1000,((1U & (~ ((((~ 
                                                   (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                     >> 3U) 
                                                    & (~ 
                                                       (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                        >> 0x17U)))) 
                                                  & (~ 
                                                     (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                       >> 1U) 
                                                      & (~ 
                                                         (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                          >> 0x16U))))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                      >> 2U) 
                                                     & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                        >> 0x17U)))) 
                                                & (~ 
                                                   ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                       >> 0x16U))))))));
            tracep->chgBit(oldp+1001,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                             >> 0x17U))));
            tracep->chgCData(oldp+1002,((3U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                               >> 0x17U))),2);
            tracep->chgBit(oldp+1003,((1U & (~ ((((~ 
                                                   (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                     >> 3U) 
                                                    & (~ 
                                                       (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                        >> 0x18U)))) 
                                                  & (~ 
                                                     (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                       >> 1U) 
                                                      & (~ 
                                                         (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                          >> 0x17U))))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                      >> 2U) 
                                                     & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                        >> 0x18U)))) 
                                                & (~ 
                                                   ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                       >> 0x17U))))))));
            tracep->chgBit(oldp+1004,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                             >> 0x18U))));
            tracep->chgCData(oldp+1005,((3U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                               >> 0x18U))),2);
            tracep->chgBit(oldp+1006,((1U & (~ ((((~ 
                                                   (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                     >> 3U) 
                                                    & (~ 
                                                       (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                        >> 0x19U)))) 
                                                  & (~ 
                                                     (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                       >> 1U) 
                                                      & (~ 
                                                         (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                          >> 0x18U))))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                      >> 2U) 
                                                     & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                        >> 0x19U)))) 
                                                & (~ 
                                                   ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                       >> 0x18U))))))));
            tracep->chgBit(oldp+1007,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                             >> 0x19U))));
            tracep->chgCData(oldp+1008,((3U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                               >> 0x19U))),2);
            tracep->chgBit(oldp+1009,((1U & (~ ((((~ 
                                                   (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                     >> 3U) 
                                                    & (~ 
                                                       (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                        >> 0x1aU)))) 
                                                  & (~ 
                                                     (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                       >> 1U) 
                                                      & (~ 
                                                         (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                          >> 0x19U))))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                      >> 2U) 
                                                     & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                        >> 0x1aU)))) 
                                                & (~ 
                                                   ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                       >> 0x19U))))))));
            tracep->chgBit(oldp+1010,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                             >> 0x1aU))));
            tracep->chgCData(oldp+1011,((3U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                               >> 0x1aU))),2);
            tracep->chgBit(oldp+1012,((1U & (~ ((((~ 
                                                   (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                     >> 3U) 
                                                    & (~ 
                                                       (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                        >> 0x1bU)))) 
                                                  & (~ 
                                                     (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                       >> 1U) 
                                                      & (~ 
                                                         (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                          >> 0x1aU))))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                      >> 2U) 
                                                     & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                        >> 0x1bU)))) 
                                                & (~ 
                                                   ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                       >> 0x1aU))))))));
            tracep->chgBit(oldp+1013,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                             >> 0x1bU))));
            tracep->chgCData(oldp+1014,((3U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                               >> 0x1bU))),2);
            tracep->chgBit(oldp+1015,((1U & (~ ((((~ 
                                                   (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                     >> 3U) 
                                                    & (~ 
                                                       (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                        >> 0x1cU)))) 
                                                  & (~ 
                                                     (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                       >> 1U) 
                                                      & (~ 
                                                         (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                          >> 0x1bU))))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                      >> 2U) 
                                                     & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                        >> 0x1cU)))) 
                                                & (~ 
                                                   ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                       >> 0x1bU))))))));
            tracep->chgBit(oldp+1016,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                             >> 0x1cU))));
            tracep->chgCData(oldp+1017,((3U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                               >> 0x1cU))),2);
            tracep->chgBit(oldp+1018,((1U & (~ ((((~ 
                                                   (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                     >> 3U) 
                                                    & (~ 
                                                       (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                        >> 0x1dU)))) 
                                                  & (~ 
                                                     (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                       >> 1U) 
                                                      & (~ 
                                                         (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                          >> 0x1cU))))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                      >> 2U) 
                                                     & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                        >> 0x1dU)))) 
                                                & (~ 
                                                   ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                       >> 0x1cU))))))));
            tracep->chgBit(oldp+1019,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                             >> 0x1dU))));
            tracep->chgCData(oldp+1020,((3U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                               >> 0x1dU))),2);
            tracep->chgBit(oldp+1021,((1U & (~ ((((~ 
                                                   (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                     >> 3U) 
                                                    & (~ 
                                                       (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                        >> 0x1eU)))) 
                                                  & (~ 
                                                     (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                       >> 1U) 
                                                      & (~ 
                                                         (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                          >> 0x1dU))))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                      >> 2U) 
                                                     & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                        >> 0x1eU)))) 
                                                & (~ 
                                                   ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                       >> 0x1dU))))))));
            tracep->chgBit(oldp+1022,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                             >> 0x1eU))));
            tracep->chgCData(oldp+1023,((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                         >> 0x1eU)),2);
            tracep->chgBit(oldp+1024,((1U & (~ ((((~ 
                                                   (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                     >> 3U) 
                                                    & (~ 
                                                       (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                        >> 0x1fU)))) 
                                                  & (~ 
                                                     (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                       >> 1U) 
                                                      & (~ 
                                                         (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                          >> 0x1eU))))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                      >> 2U) 
                                                     & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                        >> 0x1fU)))) 
                                                & (~ 
                                                   ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                       >> 0x1eU))))))));
            tracep->chgBit(oldp+1025,((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                       >> 0x1fU)));
            tracep->chgCData(oldp+1026,((3U & ((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                << 1U) 
                                               | (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                  >> 0x1fU)))),2);
            tracep->chgBit(oldp+1027,((1U & (~ ((((~ 
                                                   (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                     >> 3U) 
                                                    & (~ 
                                                       vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U]))) 
                                                  & (~ 
                                                     (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                       >> 1U) 
                                                      & (~ 
                                                         (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                          >> 0x1fU))))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                      >> 2U) 
                                                     & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U]))) 
                                                & (~ 
                                                   ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                       >> 0x1fU))))))));
            tracep->chgBit(oldp+1028,((1U & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U])));
            tracep->chgCData(oldp+1029,((3U & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U])),2);
            tracep->chgBit(oldp+1030,((1U & (~ ((((~ 
                                                   (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                     >> 3U) 
                                                    & (~ 
                                                       (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                        >> 1U)))) 
                                                  & (~ 
                                                     (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                       >> 1U) 
                                                      & (~ 
                                                         vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U])))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                      >> 2U) 
                                                     & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                        >> 1U)))) 
                                                & (~ 
                                                   ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                    & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U])))))));
            tracep->chgBit(oldp+1031,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                             >> 1U))));
            tracep->chgCData(oldp+1032,((3U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                               >> 1U))),2);
            tracep->chgBit(oldp+1033,((1U & (~ ((((~ 
                                                   (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                     >> 3U) 
                                                    & (~ 
                                                       (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                        >> 2U)))) 
                                                  & (~ 
                                                     (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                       >> 1U) 
                                                      & (~ 
                                                         (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                          >> 1U))))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                      & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U]) 
                                                     >> 2U))) 
                                                & (~ 
                                                   ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                       >> 1U))))))));
            tracep->chgBit(oldp+1034,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                             >> 2U))));
            tracep->chgCData(oldp+1035,((3U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                               >> 2U))),2);
            tracep->chgBit(oldp+1036,((1U & (~ ((((~ 
                                                   (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                     >> 3U) 
                                                    & (~ 
                                                       (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                        >> 3U)))) 
                                                  & (~ 
                                                     (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                       >> 1U) 
                                                      & (~ 
                                                         (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                          >> 2U))))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                      >> 2U) 
                                                     & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                        >> 3U)))) 
                                                & (~ 
                                                   ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                       >> 2U))))))));
            tracep->chgBit(oldp+1037,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                             >> 3U))));
            tracep->chgCData(oldp+1038,((3U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                               >> 3U))),2);
            tracep->chgBit(oldp+1039,((1U & (~ ((((~ 
                                                   (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                     >> 3U) 
                                                    & (~ 
                                                       (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                        >> 4U)))) 
                                                  & (~ 
                                                     (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                       >> 1U) 
                                                      & (~ 
                                                         (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                          >> 3U))))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                      >> 2U) 
                                                     & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                        >> 4U)))) 
                                                & (~ 
                                                   ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                       >> 3U))))))));
            tracep->chgBit(oldp+1040,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                             >> 4U))));
            tracep->chgCData(oldp+1041,((3U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                               >> 4U))),2);
            tracep->chgBit(oldp+1042,((1U & (~ ((((~ 
                                                   (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                     >> 3U) 
                                                    & (~ 
                                                       (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                        >> 5U)))) 
                                                  & (~ 
                                                     (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                       >> 1U) 
                                                      & (~ 
                                                         (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                          >> 4U))))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                      >> 2U) 
                                                     & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                        >> 5U)))) 
                                                & (~ 
                                                   ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                       >> 4U))))))));
            tracep->chgBit(oldp+1043,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                             >> 5U))));
            tracep->chgCData(oldp+1044,((3U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                               >> 5U))),2);
            tracep->chgBit(oldp+1045,((1U & (~ ((((~ 
                                                   (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                     >> 3U) 
                                                    & (~ 
                                                       (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                        >> 6U)))) 
                                                  & (~ 
                                                     (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                       >> 1U) 
                                                      & (~ 
                                                         (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                          >> 5U))))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                      >> 2U) 
                                                     & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                        >> 6U)))) 
                                                & (~ 
                                                   ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                       >> 5U))))))));
            tracep->chgBit(oldp+1046,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                             >> 6U))));
            tracep->chgCData(oldp+1047,((3U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                               >> 6U))),2);
            tracep->chgBit(oldp+1048,((1U & (~ ((((~ 
                                                   (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                     >> 3U) 
                                                    & (~ 
                                                       (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                        >> 7U)))) 
                                                  & (~ 
                                                     (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                       >> 1U) 
                                                      & (~ 
                                                         (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                          >> 6U))))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                      >> 2U) 
                                                     & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                        >> 7U)))) 
                                                & (~ 
                                                   ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                       >> 6U))))))));
            tracep->chgBit(oldp+1049,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                             >> 7U))));
            tracep->chgCData(oldp+1050,((3U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                               >> 7U))),2);
            tracep->chgBit(oldp+1051,((1U & (~ ((((~ 
                                                   (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                     >> 3U) 
                                                    & (~ 
                                                       (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                        >> 8U)))) 
                                                  & (~ 
                                                     (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                       >> 1U) 
                                                      & (~ 
                                                         (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                          >> 7U))))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                      >> 2U) 
                                                     & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                        >> 8U)))) 
                                                & (~ 
                                                   ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                       >> 7U))))))));
            tracep->chgBit(oldp+1052,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                             >> 8U))));
            tracep->chgCData(oldp+1053,((3U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                               >> 8U))),2);
            tracep->chgBit(oldp+1054,((1U & (~ ((((~ 
                                                   (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                     >> 3U) 
                                                    & (~ 
                                                       (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                        >> 9U)))) 
                                                  & (~ 
                                                     (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                       >> 1U) 
                                                      & (~ 
                                                         (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                          >> 8U))))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                      >> 2U) 
                                                     & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                        >> 9U)))) 
                                                & (~ 
                                                   ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                       >> 8U))))))));
            tracep->chgBit(oldp+1055,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                             >> 9U))));
            tracep->chgCData(oldp+1056,((3U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                               >> 9U))),2);
            tracep->chgBit(oldp+1057,((1U & (~ ((((~ 
                                                   (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                     >> 3U) 
                                                    & (~ 
                                                       (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                        >> 0xaU)))) 
                                                  & (~ 
                                                     (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                       >> 1U) 
                                                      & (~ 
                                                         (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                          >> 9U))))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                      >> 2U) 
                                                     & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                        >> 0xaU)))) 
                                                & (~ 
                                                   ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                       >> 9U))))))));
            tracep->chgBit(oldp+1058,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                             >> 0xaU))));
            tracep->chgCData(oldp+1059,((3U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                               >> 0xaU))),2);
            tracep->chgBit(oldp+1060,((1U & (~ ((((~ 
                                                   (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                     >> 3U) 
                                                    & (~ 
                                                       (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                        >> 0xbU)))) 
                                                  & (~ 
                                                     (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                       >> 1U) 
                                                      & (~ 
                                                         (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                          >> 0xaU))))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                      >> 2U) 
                                                     & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                        >> 0xbU)))) 
                                                & (~ 
                                                   ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                       >> 0xaU))))))));
            tracep->chgBit(oldp+1061,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                             >> 0xbU))));
            tracep->chgCData(oldp+1062,((3U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                               >> 0xbU))),2);
            tracep->chgBit(oldp+1063,((1U & (~ ((((~ 
                                                   (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                     >> 3U) 
                                                    & (~ 
                                                       (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                        >> 0xcU)))) 
                                                  & (~ 
                                                     (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                       >> 1U) 
                                                      & (~ 
                                                         (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                          >> 0xbU))))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                      >> 2U) 
                                                     & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                        >> 0xcU)))) 
                                                & (~ 
                                                   ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                       >> 0xbU))))))));
            tracep->chgBit(oldp+1064,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                             >> 0xcU))));
            tracep->chgCData(oldp+1065,((3U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                               >> 0xcU))),2);
            tracep->chgBit(oldp+1066,((1U & (~ ((((~ 
                                                   (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                     >> 3U) 
                                                    & (~ 
                                                       (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                        >> 0xdU)))) 
                                                  & (~ 
                                                     (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                       >> 1U) 
                                                      & (~ 
                                                         (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                          >> 0xcU))))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                      >> 2U) 
                                                     & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                        >> 0xdU)))) 
                                                & (~ 
                                                   ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                       >> 0xcU))))))));
            tracep->chgBit(oldp+1067,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                             >> 0xdU))));
            tracep->chgCData(oldp+1068,((3U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                               >> 0xdU))),2);
            tracep->chgBit(oldp+1069,((1U & (~ ((((~ 
                                                   (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                     >> 3U) 
                                                    & (~ 
                                                       (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                        >> 0xeU)))) 
                                                  & (~ 
                                                     (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                       >> 1U) 
                                                      & (~ 
                                                         (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                          >> 0xdU))))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                      >> 2U) 
                                                     & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                        >> 0xeU)))) 
                                                & (~ 
                                                   ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                       >> 0xdU))))))));
            tracep->chgBit(oldp+1070,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                             >> 0xeU))));
            tracep->chgCData(oldp+1071,((3U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                               >> 0xeU))),2);
            tracep->chgBit(oldp+1072,((1U & (~ ((((~ 
                                                   (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                     >> 3U) 
                                                    & (~ 
                                                       (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                        >> 0xfU)))) 
                                                  & (~ 
                                                     (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                       >> 1U) 
                                                      & (~ 
                                                         (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                          >> 0xeU))))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                      >> 2U) 
                                                     & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                        >> 0xfU)))) 
                                                & (~ 
                                                   ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                       >> 0xeU))))))));
            tracep->chgBit(oldp+1073,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                             >> 0xfU))));
            tracep->chgCData(oldp+1074,((3U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                               >> 0xfU))),2);
            tracep->chgBit(oldp+1075,((1U & (~ ((((~ 
                                                   (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                     >> 3U) 
                                                    & (~ 
                                                       (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                        >> 0x10U)))) 
                                                  & (~ 
                                                     (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                       >> 1U) 
                                                      & (~ 
                                                         (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                          >> 0xfU))))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                      >> 2U) 
                                                     & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                        >> 0x10U)))) 
                                                & (~ 
                                                   ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                       >> 0xfU))))))));
            tracep->chgBit(oldp+1076,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                             >> 0x10U))));
            tracep->chgCData(oldp+1077,((3U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                               >> 0x10U))),2);
            tracep->chgBit(oldp+1078,((1U & (~ ((((~ 
                                                   (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                     >> 3U) 
                                                    & (~ 
                                                       (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                        >> 0x11U)))) 
                                                  & (~ 
                                                     (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                       >> 1U) 
                                                      & (~ 
                                                         (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                          >> 0x10U))))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                      >> 2U) 
                                                     & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                        >> 0x11U)))) 
                                                & (~ 
                                                   ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                       >> 0x10U))))))));
            tracep->chgBit(oldp+1079,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                             >> 0x11U))));
            tracep->chgCData(oldp+1080,((3U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                               >> 0x11U))),2);
            tracep->chgBit(oldp+1081,((1U & (~ ((((~ 
                                                   (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                     >> 3U) 
                                                    & (~ 
                                                       (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                        >> 0x12U)))) 
                                                  & (~ 
                                                     (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                       >> 1U) 
                                                      & (~ 
                                                         (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                          >> 0x11U))))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                      >> 2U) 
                                                     & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                        >> 0x12U)))) 
                                                & (~ 
                                                   ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                       >> 0x11U))))))));
            tracep->chgBit(oldp+1082,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                             >> 0x12U))));
            tracep->chgCData(oldp+1083,((3U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                               >> 0x12U))),2);
            tracep->chgBit(oldp+1084,((1U & (~ ((((~ 
                                                   (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                     >> 3U) 
                                                    & (~ 
                                                       (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                        >> 0x13U)))) 
                                                  & (~ 
                                                     (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                       >> 1U) 
                                                      & (~ 
                                                         (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                          >> 0x12U))))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                      >> 2U) 
                                                     & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                        >> 0x13U)))) 
                                                & (~ 
                                                   ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                       >> 0x12U))))))));
            tracep->chgBit(oldp+1085,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                             >> 0x13U))));
            tracep->chgCData(oldp+1086,((3U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                               >> 0x13U))),2);
            tracep->chgBit(oldp+1087,((1U & (~ ((((~ 
                                                   (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                     >> 3U) 
                                                    & (~ 
                                                       (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                        >> 0x14U)))) 
                                                  & (~ 
                                                     (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                       >> 1U) 
                                                      & (~ 
                                                         (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                          >> 0x13U))))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                      >> 2U) 
                                                     & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                        >> 0x14U)))) 
                                                & (~ 
                                                   ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                       >> 0x13U))))))));
            tracep->chgBit(oldp+1088,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                             >> 0x14U))));
            tracep->chgCData(oldp+1089,((3U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                               >> 0x14U))),2);
            tracep->chgBit(oldp+1090,((1U & (~ ((((~ 
                                                   (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                     >> 3U) 
                                                    & (~ 
                                                       (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                        >> 0x15U)))) 
                                                  & (~ 
                                                     (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                       >> 1U) 
                                                      & (~ 
                                                         (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                          >> 0x14U))))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                      >> 2U) 
                                                     & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                        >> 0x15U)))) 
                                                & (~ 
                                                   ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                       >> 0x14U))))))));
            tracep->chgBit(oldp+1091,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1092,((3U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                               >> 0x15U))),2);
            tracep->chgBit(oldp+1093,((1U & (~ ((((~ 
                                                   (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                     >> 3U) 
                                                    & (~ 
                                                       (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                        >> 0x16U)))) 
                                                  & (~ 
                                                     (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                       >> 1U) 
                                                      & (~ 
                                                         (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                          >> 0x15U))))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                      >> 2U) 
                                                     & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                        >> 0x16U)))) 
                                                & (~ 
                                                   ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                       >> 0x15U))))))));
            tracep->chgBit(oldp+1094,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                             >> 0x16U))));
            tracep->chgCData(oldp+1095,((3U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                               >> 0x16U))),2);
            tracep->chgBit(oldp+1096,((1U & (~ ((((~ 
                                                   (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                     >> 3U) 
                                                    & (~ 
                                                       (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                        >> 0x17U)))) 
                                                  & (~ 
                                                     (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                       >> 1U) 
                                                      & (~ 
                                                         (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                          >> 0x16U))))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                      >> 2U) 
                                                     & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                        >> 0x17U)))) 
                                                & (~ 
                                                   ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                       >> 0x16U))))))));
            tracep->chgBit(oldp+1097,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                             >> 0x17U))));
            tracep->chgCData(oldp+1098,((3U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                               >> 0x17U))),2);
            tracep->chgBit(oldp+1099,((1U & (~ ((((~ 
                                                   (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                     >> 3U) 
                                                    & (~ 
                                                       (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                        >> 0x18U)))) 
                                                  & (~ 
                                                     (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                       >> 1U) 
                                                      & (~ 
                                                         (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                          >> 0x17U))))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                      >> 2U) 
                                                     & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                        >> 0x18U)))) 
                                                & (~ 
                                                   ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                       >> 0x17U))))))));
            tracep->chgBit(oldp+1100,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                             >> 0x18U))));
            tracep->chgCData(oldp+1101,((3U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                               >> 0x18U))),2);
            tracep->chgBit(oldp+1102,((1U & (~ ((((~ 
                                                   (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                     >> 3U) 
                                                    & (~ 
                                                       (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                        >> 0x19U)))) 
                                                  & (~ 
                                                     (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                       >> 1U) 
                                                      & (~ 
                                                         (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                          >> 0x18U))))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                      >> 2U) 
                                                     & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                        >> 0x19U)))) 
                                                & (~ 
                                                   ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                       >> 0x18U))))))));
            tracep->chgBit(oldp+1103,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                             >> 0x19U))));
            tracep->chgCData(oldp+1104,((3U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                               >> 0x19U))),2);
            tracep->chgBit(oldp+1105,((1U & (~ ((((~ 
                                                   (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                     >> 3U) 
                                                    & (~ 
                                                       (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                        >> 0x1aU)))) 
                                                  & (~ 
                                                     (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                       >> 1U) 
                                                      & (~ 
                                                         (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                          >> 0x19U))))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                      >> 2U) 
                                                     & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                        >> 0x1aU)))) 
                                                & (~ 
                                                   ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                       >> 0x19U))))))));
            tracep->chgBit(oldp+1106,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                             >> 0x1aU))));
            tracep->chgCData(oldp+1107,((3U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                               >> 0x1aU))),2);
            tracep->chgBit(oldp+1108,((1U & (~ ((((~ 
                                                   (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                     >> 3U) 
                                                    & (~ 
                                                       (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                        >> 0x1bU)))) 
                                                  & (~ 
                                                     (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                       >> 1U) 
                                                      & (~ 
                                                         (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                          >> 0x1aU))))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                      >> 2U) 
                                                     & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                        >> 0x1bU)))) 
                                                & (~ 
                                                   ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                       >> 0x1aU))))))));
            tracep->chgBit(oldp+1109,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                             >> 0x1bU))));
            tracep->chgCData(oldp+1110,((3U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                               >> 0x1bU))),2);
            tracep->chgBit(oldp+1111,((1U & (~ ((((~ 
                                                   (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                     >> 3U) 
                                                    & (~ 
                                                       (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                        >> 0x1cU)))) 
                                                  & (~ 
                                                     (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                       >> 1U) 
                                                      & (~ 
                                                         (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                          >> 0x1bU))))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                      >> 2U) 
                                                     & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                        >> 0x1cU)))) 
                                                & (~ 
                                                   ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                       >> 0x1bU))))))));
            tracep->chgBit(oldp+1112,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                             >> 0x1cU))));
            tracep->chgCData(oldp+1113,((3U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                               >> 0x1cU))),2);
            tracep->chgBit(oldp+1114,((1U & (~ ((((~ 
                                                   (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                     >> 3U) 
                                                    & (~ 
                                                       (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                        >> 0x1dU)))) 
                                                  & (~ 
                                                     (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                       >> 1U) 
                                                      & (~ 
                                                         (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                          >> 0x1cU))))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                      >> 2U) 
                                                     & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                        >> 0x1dU)))) 
                                                & (~ 
                                                   ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                       >> 0x1cU))))))));
            tracep->chgBit(oldp+1115,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                             >> 0x1dU))));
            tracep->chgCData(oldp+1116,((3U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                               >> 0x1dU))),2);
            tracep->chgBit(oldp+1117,((1U & (~ ((((~ 
                                                   (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                     >> 3U) 
                                                    & (~ 
                                                       (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                        >> 0x1eU)))) 
                                                  & (~ 
                                                     (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                       >> 1U) 
                                                      & (~ 
                                                         (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                          >> 0x1dU))))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                      >> 2U) 
                                                     & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                        >> 0x1eU)))) 
                                                & (~ 
                                                   ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                       >> 0x1dU))))))));
            tracep->chgBit(oldp+1118,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                             >> 0x1eU))));
            tracep->chgCData(oldp+1119,((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                         >> 0x1eU)),2);
            tracep->chgBit(oldp+1120,((1U & (~ ((((~ 
                                                   (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                     >> 3U) 
                                                    & (~ 
                                                       (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                        >> 0x1fU)))) 
                                                  & (~ 
                                                     (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                       >> 1U) 
                                                      & (~ 
                                                         (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                          >> 0x1eU))))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                      >> 2U) 
                                                     & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                        >> 0x1fU)))) 
                                                & (~ 
                                                   ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                       >> 0x1eU))))))));
            tracep->chgBit(oldp+1121,((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                       >> 0x1fU)));
            tracep->chgCData(oldp+1122,((3U & ((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                << 1U) 
                                               | (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                  >> 0x1fU)))),2);
            tracep->chgBit(oldp+1123,((1U & (~ ((((~ 
                                                   (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                     >> 3U) 
                                                    & (~ 
                                                       vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U]))) 
                                                  & (~ 
                                                     (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                       >> 1U) 
                                                      & (~ 
                                                         (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                          >> 0x1fU))))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                      >> 2U) 
                                                     & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U]))) 
                                                & (~ 
                                                   ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                       >> 0x1fU))))))));
            tracep->chgBit(oldp+1124,((1U & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U])));
            tracep->chgCData(oldp+1125,((3U & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U])),2);
            tracep->chgBit(oldp+1126,((1U & (~ ((((~ 
                                                   (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                     >> 3U) 
                                                    & (~ 
                                                       (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                        >> 1U)))) 
                                                  & (~ 
                                                     (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                       >> 1U) 
                                                      & (~ 
                                                         vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U])))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                      >> 2U) 
                                                     & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                        >> 1U)))) 
                                                & (~ 
                                                   ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                    & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U])))))));
            tracep->chgBit(oldp+1127,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                             >> 1U))));
            tracep->chgCData(oldp+1128,((3U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                               >> 1U))),2);
            tracep->chgBit(oldp+1129,((1U & (~ ((((~ 
                                                   (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                     >> 3U) 
                                                    & (~ 
                                                       (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                        >> 2U)))) 
                                                  & (~ 
                                                     (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                       >> 1U) 
                                                      & (~ 
                                                         (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                          >> 1U))))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                      & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U]) 
                                                     >> 2U))) 
                                                & (~ 
                                                   ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                       >> 1U))))))));
            tracep->chgBit(oldp+1130,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                             >> 2U))));
            tracep->chgCData(oldp+1131,((3U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                               >> 2U))),2);
            tracep->chgBit(oldp+1132,((1U & (~ ((((~ 
                                                   (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                     >> 3U) 
                                                    & (~ 
                                                       (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                        >> 3U)))) 
                                                  & (~ 
                                                     (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                       >> 1U) 
                                                      & (~ 
                                                         (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                          >> 2U))))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                      >> 2U) 
                                                     & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                        >> 3U)))) 
                                                & (~ 
                                                   ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                       >> 2U))))))));
            tracep->chgBit(oldp+1133,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                             >> 3U))));
            tracep->chgCData(oldp+1134,((3U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                               >> 3U))),2);
            tracep->chgBit(oldp+1135,((1U & (~ ((((~ 
                                                   (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                     >> 3U) 
                                                    & (~ 
                                                       (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                        >> 4U)))) 
                                                  & (~ 
                                                     (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                       >> 1U) 
                                                      & (~ 
                                                         (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                          >> 3U))))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                      >> 2U) 
                                                     & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                        >> 4U)))) 
                                                & (~ 
                                                   ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                       >> 3U))))))));
            tracep->chgBit(oldp+1136,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                             >> 4U))));
            tracep->chgCData(oldp+1137,((3U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                               >> 4U))),2);
            tracep->chgBit(oldp+1138,((1U & (~ ((((~ 
                                                   (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                     >> 3U) 
                                                    & (~ 
                                                       (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                        >> 5U)))) 
                                                  & (~ 
                                                     (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                       >> 1U) 
                                                      & (~ 
                                                         (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                          >> 4U))))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                      >> 2U) 
                                                     & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                        >> 5U)))) 
                                                & (~ 
                                                   ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                       >> 4U))))))));
            tracep->chgBit(oldp+1139,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                             >> 5U))));
            tracep->chgCData(oldp+1140,((3U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                               >> 5U))),2);
            tracep->chgBit(oldp+1141,((1U & (~ ((((~ 
                                                   (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                     >> 3U) 
                                                    & (~ 
                                                       (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                        >> 6U)))) 
                                                  & (~ 
                                                     (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                       >> 1U) 
                                                      & (~ 
                                                         (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                          >> 5U))))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                      >> 2U) 
                                                     & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                        >> 6U)))) 
                                                & (~ 
                                                   ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                       >> 5U))))))));
            tracep->chgBit(oldp+1142,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                             >> 6U))));
            tracep->chgCData(oldp+1143,((3U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                               >> 6U))),2);
            tracep->chgBit(oldp+1144,((1U & (~ ((((~ 
                                                   (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                     >> 3U) 
                                                    & (~ 
                                                       (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                        >> 7U)))) 
                                                  & (~ 
                                                     (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                       >> 1U) 
                                                      & (~ 
                                                         (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                          >> 6U))))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                      >> 2U) 
                                                     & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                        >> 7U)))) 
                                                & (~ 
                                                   ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                       >> 6U))))))));
            tracep->chgBit(oldp+1145,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                             >> 7U))));
            tracep->chgCData(oldp+1146,((3U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                               >> 7U))),2);
            tracep->chgBit(oldp+1147,((1U & (~ ((((~ 
                                                   (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                     >> 3U) 
                                                    & (~ 
                                                       (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                        >> 8U)))) 
                                                  & (~ 
                                                     (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                       >> 1U) 
                                                      & (~ 
                                                         (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                          >> 7U))))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                      >> 2U) 
                                                     & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                        >> 8U)))) 
                                                & (~ 
                                                   ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                       >> 7U))))))));
            tracep->chgBit(oldp+1148,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                             >> 8U))));
            tracep->chgCData(oldp+1149,((3U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                               >> 8U))),2);
            tracep->chgBit(oldp+1150,((1U & (~ ((((~ 
                                                   (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                     >> 3U) 
                                                    & (~ 
                                                       (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                        >> 9U)))) 
                                                  & (~ 
                                                     (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                       >> 1U) 
                                                      & (~ 
                                                         (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                          >> 8U))))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                      >> 2U) 
                                                     & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                        >> 9U)))) 
                                                & (~ 
                                                   ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                       >> 8U))))))));
            tracep->chgBit(oldp+1151,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                             >> 9U))));
            tracep->chgCData(oldp+1152,((3U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                               >> 9U))),2);
            tracep->chgBit(oldp+1153,((1U & (~ ((((~ 
                                                   (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                     >> 3U) 
                                                    & (~ 
                                                       (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                        >> 0xaU)))) 
                                                  & (~ 
                                                     (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                       >> 1U) 
                                                      & (~ 
                                                         (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                          >> 9U))))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                      >> 2U) 
                                                     & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                        >> 0xaU)))) 
                                                & (~ 
                                                   ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                       >> 9U))))))));
            tracep->chgBit(oldp+1154,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                             >> 0xaU))));
            tracep->chgCData(oldp+1155,((3U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                               >> 0xaU))),2);
            tracep->chgBit(oldp+1156,((1U & (~ ((((~ 
                                                   (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                     >> 3U) 
                                                    & (~ 
                                                       (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                        >> 0xbU)))) 
                                                  & (~ 
                                                     (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                       >> 1U) 
                                                      & (~ 
                                                         (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                          >> 0xaU))))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                      >> 2U) 
                                                     & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                        >> 0xbU)))) 
                                                & (~ 
                                                   ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                       >> 0xaU))))))));
            tracep->chgBit(oldp+1157,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                             >> 0xbU))));
            tracep->chgCData(oldp+1158,((3U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                               >> 0xbU))),2);
            tracep->chgBit(oldp+1159,((1U & (~ ((((~ 
                                                   (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                     >> 3U) 
                                                    & (~ 
                                                       (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                        >> 0xcU)))) 
                                                  & (~ 
                                                     (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                       >> 1U) 
                                                      & (~ 
                                                         (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                          >> 0xbU))))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                      >> 2U) 
                                                     & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                        >> 0xcU)))) 
                                                & (~ 
                                                   ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                       >> 0xbU))))))));
            tracep->chgBit(oldp+1160,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                             >> 0xcU))));
            tracep->chgCData(oldp+1161,((3U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                               >> 0xcU))),2);
            tracep->chgBit(oldp+1162,((1U & (~ ((((~ 
                                                   (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                     >> 3U) 
                                                    & (~ 
                                                       (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                        >> 0xdU)))) 
                                                  & (~ 
                                                     (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                       >> 1U) 
                                                      & (~ 
                                                         (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                          >> 0xcU))))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                      >> 2U) 
                                                     & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                        >> 0xdU)))) 
                                                & (~ 
                                                   ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                       >> 0xcU))))))));
            tracep->chgBit(oldp+1163,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                             >> 0xdU))));
            tracep->chgCData(oldp+1164,((3U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                               >> 0xdU))),2);
            tracep->chgBit(oldp+1165,((1U & (~ ((((~ 
                                                   (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                     >> 3U) 
                                                    & (~ 
                                                       (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                        >> 0xeU)))) 
                                                  & (~ 
                                                     (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                       >> 1U) 
                                                      & (~ 
                                                         (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                          >> 0xdU))))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                      >> 2U) 
                                                     & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                        >> 0xeU)))) 
                                                & (~ 
                                                   ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                       >> 0xdU))))))));
            tracep->chgBit(oldp+1166,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                             >> 0xeU))));
            tracep->chgCData(oldp+1167,((3U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                               >> 0xeU))),2);
            tracep->chgBit(oldp+1168,((1U & (~ ((((~ 
                                                   (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                     >> 3U) 
                                                    & (~ 
                                                       (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                        >> 0xfU)))) 
                                                  & (~ 
                                                     (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                       >> 1U) 
                                                      & (~ 
                                                         (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                          >> 0xeU))))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                      >> 2U) 
                                                     & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                        >> 0xfU)))) 
                                                & (~ 
                                                   ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                       >> 0xeU))))))));
            tracep->chgBit(oldp+1169,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                             >> 0xfU))));
            tracep->chgCData(oldp+1170,((3U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                               >> 0xfU))),2);
            tracep->chgBit(oldp+1171,((1U & (~ ((((~ 
                                                   (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                     >> 3U) 
                                                    & (~ 
                                                       (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                        >> 0x10U)))) 
                                                  & (~ 
                                                     (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                       >> 1U) 
                                                      & (~ 
                                                         (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                          >> 0xfU))))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                      >> 2U) 
                                                     & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                        >> 0x10U)))) 
                                                & (~ 
                                                   ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                       >> 0xfU))))))));
            tracep->chgBit(oldp+1172,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                             >> 0x10U))));
            tracep->chgCData(oldp+1173,((3U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                               >> 0x10U))),2);
            tracep->chgBit(oldp+1174,((1U & (~ ((((~ 
                                                   (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                     >> 3U) 
                                                    & (~ 
                                                       (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                        >> 0x11U)))) 
                                                  & (~ 
                                                     (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                       >> 1U) 
                                                      & (~ 
                                                         (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                          >> 0x10U))))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                      >> 2U) 
                                                     & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                        >> 0x11U)))) 
                                                & (~ 
                                                   ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                       >> 0x10U))))))));
            tracep->chgBit(oldp+1175,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                             >> 0x11U))));
            tracep->chgCData(oldp+1176,((3U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                               >> 0x11U))),2);
            tracep->chgBit(oldp+1177,((1U & (~ ((((~ 
                                                   (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                     >> 3U) 
                                                    & (~ 
                                                       (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                        >> 0x12U)))) 
                                                  & (~ 
                                                     (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                       >> 1U) 
                                                      & (~ 
                                                         (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                          >> 0x11U))))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                      >> 2U) 
                                                     & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                        >> 0x12U)))) 
                                                & (~ 
                                                   ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                       >> 0x11U))))))));
            tracep->chgBit(oldp+1178,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                             >> 0x12U))));
            tracep->chgCData(oldp+1179,((3U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                               >> 0x12U))),2);
            tracep->chgBit(oldp+1180,((1U & (~ ((((~ 
                                                   (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                     >> 3U) 
                                                    & (~ 
                                                       (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                        >> 0x13U)))) 
                                                  & (~ 
                                                     (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                       >> 1U) 
                                                      & (~ 
                                                         (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                          >> 0x12U))))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                      >> 2U) 
                                                     & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                        >> 0x13U)))) 
                                                & (~ 
                                                   ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                       >> 0x12U))))))));
            tracep->chgBit(oldp+1181,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                             >> 0x13U))));
            tracep->chgCData(oldp+1182,((3U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                               >> 0x13U))),2);
            tracep->chgBit(oldp+1183,((1U & (~ ((((~ 
                                                   (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                     >> 3U) 
                                                    & (~ 
                                                       (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                        >> 0x14U)))) 
                                                  & (~ 
                                                     (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                       >> 1U) 
                                                      & (~ 
                                                         (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                          >> 0x13U))))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                      >> 2U) 
                                                     & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                        >> 0x14U)))) 
                                                & (~ 
                                                   ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                       >> 0x13U))))))));
            tracep->chgBit(oldp+1184,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                             >> 0x14U))));
            tracep->chgCData(oldp+1185,((3U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                               >> 0x14U))),2);
            tracep->chgBit(oldp+1186,((1U & (~ ((((~ 
                                                   (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                     >> 3U) 
                                                    & (~ 
                                                       (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                        >> 0x15U)))) 
                                                  & (~ 
                                                     (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                       >> 1U) 
                                                      & (~ 
                                                         (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                          >> 0x14U))))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                      >> 2U) 
                                                     & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                        >> 0x15U)))) 
                                                & (~ 
                                                   ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                       >> 0x14U))))))));
            tracep->chgBit(oldp+1187,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1188,((3U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                               >> 0x15U))),2);
            tracep->chgBit(oldp+1189,((1U & (~ ((((~ 
                                                   (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                     >> 3U) 
                                                    & (~ 
                                                       (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                        >> 0x16U)))) 
                                                  & (~ 
                                                     (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                       >> 1U) 
                                                      & (~ 
                                                         (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                          >> 0x15U))))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                      >> 2U) 
                                                     & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                        >> 0x16U)))) 
                                                & (~ 
                                                   ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                       >> 0x15U))))))));
            tracep->chgBit(oldp+1190,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                             >> 0x16U))));
            tracep->chgCData(oldp+1191,((3U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                               >> 0x16U))),2);
            tracep->chgBit(oldp+1192,((1U & (~ ((((~ 
                                                   (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                     >> 3U) 
                                                    & (~ 
                                                       (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                        >> 0x17U)))) 
                                                  & (~ 
                                                     (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                       >> 1U) 
                                                      & (~ 
                                                         (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                          >> 0x16U))))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                      >> 2U) 
                                                     & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                        >> 0x17U)))) 
                                                & (~ 
                                                   ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                       >> 0x16U))))))));
            tracep->chgBit(oldp+1193,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                             >> 0x17U))));
            tracep->chgCData(oldp+1194,((3U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                               >> 0x17U))),2);
            tracep->chgBit(oldp+1195,((1U & (~ ((((~ 
                                                   (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                     >> 3U) 
                                                    & (~ 
                                                       (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                        >> 0x18U)))) 
                                                  & (~ 
                                                     (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                       >> 1U) 
                                                      & (~ 
                                                         (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                          >> 0x17U))))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                      >> 2U) 
                                                     & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                        >> 0x18U)))) 
                                                & (~ 
                                                   ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                       >> 0x17U))))))));
            tracep->chgBit(oldp+1196,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                             >> 0x18U))));
            tracep->chgCData(oldp+1197,((3U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                               >> 0x18U))),2);
            tracep->chgBit(oldp+1198,((1U & (~ ((((~ 
                                                   (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                     >> 3U) 
                                                    & (~ 
                                                       (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                        >> 0x19U)))) 
                                                  & (~ 
                                                     (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                       >> 1U) 
                                                      & (~ 
                                                         (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                          >> 0x18U))))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                      >> 2U) 
                                                     & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                        >> 0x19U)))) 
                                                & (~ 
                                                   ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                       >> 0x18U))))))));
            tracep->chgBit(oldp+1199,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                             >> 0x19U))));
            tracep->chgCData(oldp+1200,((3U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                               >> 0x19U))),2);
            tracep->chgBit(oldp+1201,((1U & (~ ((((~ 
                                                   (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                     >> 3U) 
                                                    & (~ 
                                                       (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                        >> 0x1aU)))) 
                                                  & (~ 
                                                     (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                       >> 1U) 
                                                      & (~ 
                                                         (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                          >> 0x19U))))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                      >> 2U) 
                                                     & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                        >> 0x1aU)))) 
                                                & (~ 
                                                   ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                       >> 0x19U))))))));
            tracep->chgBit(oldp+1202,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                             >> 0x1aU))));
            tracep->chgCData(oldp+1203,((3U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                               >> 0x1aU))),2);
            tracep->chgBit(oldp+1204,((1U & (~ ((((~ 
                                                   (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                     >> 3U) 
                                                    & (~ 
                                                       (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                        >> 0x1bU)))) 
                                                  & (~ 
                                                     (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                       >> 1U) 
                                                      & (~ 
                                                         (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                          >> 0x1aU))))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                      >> 2U) 
                                                     & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                        >> 0x1bU)))) 
                                                & (~ 
                                                   ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                       >> 0x1aU))))))));
            tracep->chgBit(oldp+1205,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                             >> 0x1bU))));
            tracep->chgCData(oldp+1206,((3U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                               >> 0x1bU))),2);
            tracep->chgBit(oldp+1207,((1U & (~ ((((~ 
                                                   (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                     >> 3U) 
                                                    & (~ 
                                                       (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                        >> 0x1cU)))) 
                                                  & (~ 
                                                     (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                       >> 1U) 
                                                      & (~ 
                                                         (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                          >> 0x1bU))))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                      >> 2U) 
                                                     & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                        >> 0x1cU)))) 
                                                & (~ 
                                                   ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                       >> 0x1bU))))))));
            tracep->chgBit(oldp+1208,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                             >> 0x1cU))));
            tracep->chgCData(oldp+1209,((3U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                               >> 0x1cU))),2);
            tracep->chgBit(oldp+1210,((1U & (~ ((((~ 
                                                   (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                     >> 3U) 
                                                    & (~ 
                                                       (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                        >> 0x1dU)))) 
                                                  & (~ 
                                                     (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                       >> 1U) 
                                                      & (~ 
                                                         (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                          >> 0x1cU))))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                      >> 2U) 
                                                     & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                        >> 0x1dU)))) 
                                                & (~ 
                                                   ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                       >> 0x1cU))))))));
            tracep->chgBit(oldp+1211,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                             >> 0x1dU))));
            tracep->chgCData(oldp+1212,((3U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                               >> 0x1dU))),2);
            tracep->chgBit(oldp+1213,((1U & (~ ((((~ 
                                                   (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                     >> 3U) 
                                                    & (~ 
                                                       (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                        >> 0x1eU)))) 
                                                  & (~ 
                                                     (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                       >> 1U) 
                                                      & (~ 
                                                         (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                          >> 0x1dU))))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                      >> 2U) 
                                                     & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                        >> 0x1eU)))) 
                                                & (~ 
                                                   ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                       >> 0x1dU))))))));
            tracep->chgBit(oldp+1214,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                             >> 0x1eU))));
            tracep->chgCData(oldp+1215,((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                         >> 0x1eU)),2);
            tracep->chgBit(oldp+1216,((1U & (~ ((((~ 
                                                   (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                     >> 3U) 
                                                    & (~ 
                                                       (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                        >> 0x1fU)))) 
                                                  & (~ 
                                                     (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                       >> 1U) 
                                                      & (~ 
                                                         (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                          >> 0x1eU))))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                      >> 2U) 
                                                     & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                        >> 0x1fU)))) 
                                                & (~ 
                                                   ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                       >> 0x1eU))))))));
            tracep->chgBit(oldp+1217,((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                       >> 0x1fU)));
            tracep->chgCData(oldp+1218,((3U & ((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[4U] 
                                                << 1U) 
                                               | (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                  >> 0x1fU)))),2);
            tracep->chgBit(oldp+1219,((1U & (~ ((((~ 
                                                   (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                     >> 3U) 
                                                    & (~ 
                                                       vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[4U]))) 
                                                  & (~ 
                                                     (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                       >> 1U) 
                                                      & (~ 
                                                         (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                          >> 0x1fU))))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                      >> 2U) 
                                                     & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[4U]))) 
                                                & (~ 
                                                   ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                       >> 0x1fU))))))));
            tracep->chgBit(oldp+1220,((1U & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[4U])));
            tracep->chgCData(oldp+1221,((3U & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[4U])),2);
            tracep->chgBit(oldp+1222,((1U & (~ ((((~ 
                                                   (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                     >> 3U) 
                                                    & (~ 
                                                       (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[4U] 
                                                        >> 1U)))) 
                                                  & (~ 
                                                     (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                       >> 1U) 
                                                      & (~ 
                                                         vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[4U])))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                      >> 2U) 
                                                     & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[4U] 
                                                        >> 1U)))) 
                                                & (~ 
                                                   ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                    & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[4U])))))));
            tracep->chgBit(oldp+1223,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[4U] 
                                             >> 1U))));
            tracep->chgCData(oldp+1224,((3U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[4U] 
                                               >> 1U))),2);
            tracep->chgBit(oldp+1225,((1U & (~ ((((~ 
                                                   (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                     >> 3U) 
                                                    & (~ 
                                                       (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[4U] 
                                                        >> 2U)))) 
                                                  & (~ 
                                                     (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                       >> 1U) 
                                                      & (~ 
                                                         (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[4U] 
                                                          >> 1U))))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                      & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[4U]) 
                                                     >> 2U))) 
                                                & (~ 
                                                   ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[4U] 
                                                       >> 1U))))))));
            tracep->chgBit(oldp+1226,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[4U] 
                                             >> 2U))));
            tracep->chgCData(oldp+1227,((3U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[4U] 
                                               >> 2U))),2);
            tracep->chgBit(oldp+1228,((1U & (~ ((((~ 
                                                   (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                     >> 3U) 
                                                    & (~ 
                                                       (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[4U] 
                                                        >> 3U)))) 
                                                  & (~ 
                                                     (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                       >> 1U) 
                                                      & (~ 
                                                         (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[4U] 
                                                          >> 2U))))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                      >> 2U) 
                                                     & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[4U] 
                                                        >> 3U)))) 
                                                & (~ 
                                                   ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[4U] 
                                                       >> 2U))))))));
            tracep->chgBit(oldp+1229,((1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[4U] 
                                             >> 3U))));
            tracep->chgBit(oldp+1230,((1U & ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__e_j_b_inst_reg_is) 
                                             >> 3U))));
            tracep->chgBit(oldp+1231,((1U & ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__e_j_b_inst_reg_is) 
                                             >> 4U))));
            tracep->chgBit(oldp+1232,((1U & ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__e_j_b_inst_reg_is) 
                                             >> 5U))));
            tracep->chgBit(oldp+1233,((1U & ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__e_j_b_inst_reg_is) 
                                             >> 6U))));
            tracep->chgBit(oldp+1234,((1U & ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__e_j_b_inst_reg_is) 
                                             >> 7U))));
            tracep->chgBit(oldp+1235,((1U & ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__e_j_b_inst_reg_is) 
                                             >> 8U))));
            tracep->chgBit(oldp+1236,((1U & ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__e_j_b_inst_reg_is) 
                                             >> 9U))));
            tracep->chgBit(oldp+1237,((1U & ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__e_j_b_inst_reg_is) 
                                             >> 0xaU))));
            tracep->chgCData(oldp+1238,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__set_dnpc_0__DOT__sel_nextpc),2);
            tracep->chgWData(oldp+1239,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__set_dnpc_0__DOT____Vcellinp__mux4____pinNumber3),264);
            tracep->chgWData(oldp+1248,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__set_dnpc_0__DOT__mux4__DOT__i0__DOT__pair_list[0]),66);
            tracep->chgWData(oldp+1251,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__set_dnpc_0__DOT__mux4__DOT__i0__DOT__pair_list[1]),66);
            tracep->chgWData(oldp+1254,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__set_dnpc_0__DOT__mux4__DOT__i0__DOT__pair_list[2]),66);
            tracep->chgWData(oldp+1257,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__set_dnpc_0__DOT__mux4__DOT__i0__DOT__pair_list[3]),66);
            tracep->chgCData(oldp+1260,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__set_dnpc_0__DOT__mux4__DOT__i0__DOT__key_list[0]),2);
            tracep->chgCData(oldp+1261,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__set_dnpc_0__DOT__mux4__DOT__i0__DOT__key_list[1]),2);
            tracep->chgCData(oldp+1262,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__set_dnpc_0__DOT__mux4__DOT__i0__DOT__key_list[2]),2);
            tracep->chgCData(oldp+1263,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__set_dnpc_0__DOT__mux4__DOT__i0__DOT__key_list[3]),2);
            tracep->chgQData(oldp+1264,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__set_dnpc_0__DOT__mux4__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+1266,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__set_dnpc_0__DOT__mux4__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+1268,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__set_dnpc_0__DOT__mux4__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+1270,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__set_dnpc_0__DOT__mux4__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+1272,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__set_dnpc_0__DOT__mux4__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+1274,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__set_dnpc_0__DOT__mux4__DOT__i0__DOT__hit));
            tracep->chgIData(oldp+1275,((0xffffffc0U 
                                         & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__araddr)),32);
            tracep->chgBit(oldp+1276,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__arvalid));
            tracep->chgBit(oldp+1277,(((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__use_cache)
                                        ? (1U & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__arready2))
                                        : 0U)));
            tracep->chgQData(oldp+1278,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rdata2_0),64);
            tracep->chgCData(oldp+1280,(((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__use_cache)
                                          ? (3U & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__rresp2))
                                          : 0U)),2);
            tracep->chgBit(oldp+1281,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0));
            tracep->chgBit(oldp+1282,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rlast2_0));
            tracep->chgBit(oldp+1283,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready));
            tracep->chgIData(oldp+1284,(((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__tagarray
                                          [(0x3fU & 
                                            (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__araddr 
                                             >> 6U))] 
                                          << 0xcU) 
                                         | (0xfc0U 
                                            & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__araddr))),32);
            tracep->chgBit(oldp+1285,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__awvalid));
            tracep->chgBit(oldp+1286,(((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__use_cache)
                                        ? (1U & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__awready2))
                                        : 0U)));
            tracep->chgQData(oldp+1287,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__r_wdata),64);
            tracep->chgBit(oldp+1289,((8U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__c_awlen))));
            tracep->chgBit(oldp+1290,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__wvalid));
            tracep->chgBit(oldp+1291,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__wready2_0));
            tracep->chgCData(oldp+1292,(((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__use_cache)
                                          ? (3U & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__bresp2))
                                          : 0U)),2);
            tracep->chgBit(oldp+1293,(((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__use_cache)
                                        ? (1U & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__bvalid2))
                                        : 0U)));
            tracep->chgBit(oldp+1294,(((1U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__write_state)) 
                                       & (2U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__write_state)))));
            tracep->chgIData(oldp+1295,((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result)),32);
            tracep->chgBit(oldp+1296,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_mem_read_write_0__DOT__arvalid));
            tracep->chgBit(oldp+1297,(((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__use_cache)
                                        ? 0U : (1U 
                                                & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__arready2)))));
            tracep->chgQData(oldp+1298,(((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__use_cache)
                                          ? 0ULL : vlSelf->top_test__DOT__ysyx_22050533_0__DOT__rdata2)),64);
            tracep->chgCData(oldp+1300,(((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__use_cache)
                                          ? 0U : (3U 
                                                  & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__rresp2)))),2);
            tracep->chgBit(oldp+1301,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_1));
            tracep->chgBit(oldp+1302,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rlast2_1));
            tracep->chgBit(oldp+1303,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_mem_read_write_0__DOT__rready));
            tracep->chgBit(oldp+1304,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_mem_read_write_0__DOT__awvalid));
            tracep->chgBit(oldp+1305,(((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__use_cache)
                                        ? 0U : (1U 
                                                & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__awready2)))));
            tracep->chgQData(oldp+1306,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_mem_read_write_0__DOT__wdata),64);
            tracep->chgBit(oldp+1308,((1U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_mem_read_write_0__DOT__c_awlen))));
            tracep->chgBit(oldp+1309,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_mem_read_write_0__DOT__wvalid));
            tracep->chgBit(oldp+1310,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__wready2_1));
            tracep->chgCData(oldp+1311,(((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__use_cache)
                                          ? 0U : (3U 
                                                  & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__bresp2)))),2);
            tracep->chgBit(oldp+1312,(((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__use_cache)
                                        ? 0U : (1U 
                                                & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__bvalid2)))));
            tracep->chgBit(oldp+1313,(((1U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_mem_read_write_0__DOT__write_state)) 
                                       & (2U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_mem_read_write_0__DOT__write_state)))));
            tracep->chgBit(oldp+1314,((5U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state))));
            tracep->chgBit(oldp+1315,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__use_cache));
            tracep->chgBit(oldp+1316,(((~ (((0x80000000U 
                                             <= (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result)) 
                                            & (0x87ffffffU 
                                               >= (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result))) 
                                           | ((0x80000000U 
                                               <= (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result)) 
                                              & (0x87ffffffU 
                                                 >= (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result))))) 
                                       & ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__data_ram_wen_reg_is) 
                                          | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__data_ram_ren_reg_is)))));
            tracep->chgQData(oldp+1317,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__r_rdata_ld),64);
            tracep->chgQData(oldp+1319,(((0x3fU >= 
                                          (0x38U & 
                                           (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__araddr 
                                            << 3U)))
                                          ? (((0U == 
                                               (7U 
                                                & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__araddr 
                                                   >> 3U)))
                                               ? (((QData)((IData)(
                                                                   vlSelf->top_test__DOT__io_sram4_rdata[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top_test__DOT__io_sram4_rdata[0U])))
                                               : ((1U 
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
                                          : 0ULL)),64);
            tracep->chgQData(oldp+1321,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__r_rdata_ld_device),64);
            tracep->chgQData(oldp+1323,((((QData)((IData)(
                                                          (- (IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__r_rdata_ld 
                                                                                >> 0x1fU))))))) 
                                          << 0x20U) 
                                         | (QData)((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__r_rdata_ld)))),64);
            tracep->chgQData(oldp+1325,((QData)((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__r_rdata_ld))),64);
            tracep->chgQData(oldp+1327,((((- (QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__r_rdata_ld 
                                                                         >> 0xfU)))))) 
                                          << 0x10U) 
                                         | (QData)((IData)(
                                                           (0xffffU 
                                                            & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__r_rdata_ld)))))),64);
            tracep->chgQData(oldp+1329,((QData)((IData)(
                                                        (0xffffU 
                                                         & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__r_rdata_ld))))),64);
            tracep->chgQData(oldp+1331,((((- (QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__r_rdata_ld 
                                                                         >> 7U)))))) 
                                          << 8U) | (QData)((IData)(
                                                                   (0xffU 
                                                                    & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__r_rdata_ld)))))),64);
            tracep->chgQData(oldp+1333,((QData)((IData)(
                                                        (0xffU 
                                                         & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__r_rdata_ld))))),64);
            tracep->chgBit(oldp+1335,((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__pipe2_valid) 
                                        & (~ (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__use_cache))) 
                                       & (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT____Vcellinp__ysyx_22050533_mem_read_write_0__ren) 
                                           & (3U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_mem_read_write_0__DOT__read_state))) 
                                          | ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT____Vcellinp__ysyx_22050533_mem_read_write_0__wen) 
                                             & (3U 
                                                == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_mem_read_write_0__DOT__write_state)))))));
            tracep->chgWData(oldp+1336,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3),497);
            tracep->chgWData(oldp+1352,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list[0]),71);
            tracep->chgWData(oldp+1355,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list[1]),71);
            tracep->chgWData(oldp+1358,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list[2]),71);
            tracep->chgWData(oldp+1361,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list[3]),71);
            tracep->chgWData(oldp+1364,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list[4]),71);
            tracep->chgWData(oldp+1367,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list[5]),71);
            tracep->chgWData(oldp+1370,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list[6]),71);
            tracep->chgCData(oldp+1373,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list[0]),7);
            tracep->chgCData(oldp+1374,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list[1]),7);
            tracep->chgCData(oldp+1375,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list[2]),7);
            tracep->chgCData(oldp+1376,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list[3]),7);
            tracep->chgCData(oldp+1377,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list[4]),7);
            tracep->chgCData(oldp+1378,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list[5]),7);
            tracep->chgCData(oldp+1379,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list[6]),7);
            tracep->chgQData(oldp+1380,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__mux3__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+1382,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__mux3__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+1384,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__mux3__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+1386,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__mux3__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+1388,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__mux3__DOT__i0__DOT__data_list[4]),64);
            tracep->chgQData(oldp+1390,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__mux3__DOT__i0__DOT__data_list[5]),64);
            tracep->chgQData(oldp+1392,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__mux3__DOT__i0__DOT__data_list[6]),64);
            tracep->chgQData(oldp+1394,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+1396,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__mux3__DOT__i0__DOT__hit));
            tracep->chgIData(oldp+1397,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__araddr),32);
            tracep->chgQData(oldp+1398,(((0U == (7U 
                                                 & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__araddr 
                                                    >> 3U)))
                                          ? (((QData)((IData)(
                                                              vlSelf->top_test__DOT__io_sram4_rdata[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->top_test__DOT__io_sram4_rdata[0U])))
                                          : ((1U == 
                                              (7U & 
                                               (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__araddr 
                                                >> 3U)))
                                              ? (((QData)((IData)(
                                                                  vlSelf->top_test__DOT__io_sram4_rdata[3U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->top_test__DOT__io_sram4_rdata[2U])))
                                              : ((2U 
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
                                                                        vlSelf->top_test__DOT__io_sram7_rdata[2U]))))))))))),64);
            tracep->chgCData(oldp+1400,((0x3fU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__araddr)),6);
            tracep->chgCData(oldp+1401,((0x3fU & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__araddr 
                                                  >> 6U))),6);
            tracep->chgIData(oldp+1402,((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__araddr 
                                         >> 0xcU)),20);
            tracep->chgCData(oldp+1403,((0x3fU & (IData)(
                                                         (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                          >> 6U)))),6);
            tracep->chgCData(oldp+1404,((0x3fU & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result))),6);
            tracep->chgCData(oldp+1405,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__write_state),3);
            tracep->chgCData(oldp+1406,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state),3);
            tracep->chgBit(oldp+1407,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rcache_en));
            tracep->chgBit(oldp+1408,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__wcache_en));
            tracep->chgBit(oldp+1409,((2U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state))));
            tracep->chgBit(oldp+1410,((3U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__write_state))));
            tracep->chgBit(oldp+1411,((3U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state))));
            tracep->chgCData(oldp+1412,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len),3);
            tracep->chgCData(oldp+1413,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_w_len),3);
            tracep->chgCData(oldp+1414,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__read_state),3);
            tracep->chgCData(oldp+1415,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__c_awlen),8);
            tracep->chgQData(oldp+1416,(((1U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__wmask_reg_is))
                                          ? 0xffULL
                                          : ((3U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__wmask_reg_is))
                                              ? 0xffffULL
                                              : ((0xfU 
                                                  == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__wmask_reg_is))
                                                  ? 0xffffffffULL
                                                  : 0xffffffffffffffffULL)))),64);
            tracep->chgQData(oldp+1418,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__wdata_align),64);
            tracep->chgQData(oldp+1420,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__wmask_align),64);
            tracep->chgIData(oldp+1422,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__unnamedblk1__DOT__i),32);
            tracep->chgBit(oldp+1423,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT____Vcellinp__ysyx_22050533_mem_read_write_0__ren));
            tracep->chgBit(oldp+1424,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT____Vcellinp__ysyx_22050533_mem_read_write_0__wen));
            tracep->chgBit(oldp+1425,((1U & (~ (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__use_cache)))));
            tracep->chgCData(oldp+1426,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_mem_read_write_0__DOT__d_r_len),3);
            tracep->chgCData(oldp+1427,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_mem_read_write_0__DOT__d_w_len),3);
            tracep->chgCData(oldp+1428,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_mem_read_write_0__DOT__read_state),3);
            tracep->chgBit(oldp+1429,((3U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_mem_read_write_0__DOT__read_state))));
            tracep->chgBit(oldp+1430,((3U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_mem_read_write_0__DOT__write_state))));
            tracep->chgCData(oldp+1431,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_mem_read_write_0__DOT__write_state),3);
            tracep->chgCData(oldp+1432,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_mem_read_write_0__DOT__c_awlen),8);
            tracep->chgWData(oldp+1433,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__wb0__DOT____Vcellinp__mux3____pinNumber3),201);
            tracep->chgWData(oldp+1440,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__wb0__DOT__mux3__DOT__i0__DOT__pair_list[0]),67);
            tracep->chgWData(oldp+1443,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__wb0__DOT__mux3__DOT__i0__DOT__pair_list[1]),67);
            tracep->chgWData(oldp+1446,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__wb0__DOT__mux3__DOT__i0__DOT__pair_list[2]),67);
            tracep->chgCData(oldp+1449,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__wb0__DOT__mux3__DOT__i0__DOT__key_list[0]),3);
            tracep->chgCData(oldp+1450,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__wb0__DOT__mux3__DOT__i0__DOT__key_list[1]),3);
            tracep->chgCData(oldp+1451,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__wb0__DOT__mux3__DOT__i0__DOT__key_list[2]),3);
            tracep->chgQData(oldp+1452,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__wb0__DOT__mux3__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+1454,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__wb0__DOT__mux3__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+1456,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__wb0__DOT__mux3__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+1458,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__wb0__DOT__mux3__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+1460,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__wb0__DOT__mux3__DOT__i0__DOT__hit));
            tracep->chgCData(oldp+1461,(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_arbiter_1__DOT__master_state),2);
            tracep->chgBit(oldp+1462,((1U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_arbiter_1__DOT__master_state))));
            tracep->chgBit(oldp+1463,((2U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_arbiter_1__DOT__master_state))));
            __Vtemp1435[0U] = vlSelf->top_test__DOT__sram_0__DOT__sram_0__DOT__ram
                [0U][0U];
            __Vtemp1435[1U] = vlSelf->top_test__DOT__sram_0__DOT__sram_0__DOT__ram
                [0U][1U];
            __Vtemp1435[2U] = vlSelf->top_test__DOT__sram_0__DOT__sram_0__DOT__ram
                [0U][2U];
            __Vtemp1435[3U] = vlSelf->top_test__DOT__sram_0__DOT__sram_0__DOT__ram
                [0U][3U];
            tracep->chgWData(oldp+1464,(__Vtemp1435),128);
            __Vtemp1436[0U] = vlSelf->top_test__DOT__sram_0__DOT__sram_1__DOT__ram
                [0U][0U];
            __Vtemp1436[1U] = vlSelf->top_test__DOT__sram_0__DOT__sram_1__DOT__ram
                [0U][1U];
            __Vtemp1436[2U] = vlSelf->top_test__DOT__sram_0__DOT__sram_1__DOT__ram
                [0U][2U];
            __Vtemp1436[3U] = vlSelf->top_test__DOT__sram_0__DOT__sram_1__DOT__ram
                [0U][3U];
            tracep->chgWData(oldp+1468,(__Vtemp1436),128);
            __Vtemp1437[0U] = vlSelf->top_test__DOT__sram_0__DOT__sram_2__DOT__ram
                [0U][0U];
            __Vtemp1437[1U] = vlSelf->top_test__DOT__sram_0__DOT__sram_2__DOT__ram
                [0U][1U];
            __Vtemp1437[2U] = vlSelf->top_test__DOT__sram_0__DOT__sram_2__DOT__ram
                [0U][2U];
            __Vtemp1437[3U] = vlSelf->top_test__DOT__sram_0__DOT__sram_2__DOT__ram
                [0U][3U];
            tracep->chgWData(oldp+1472,(__Vtemp1437),128);
            __Vtemp1438[0U] = vlSelf->top_test__DOT__sram_0__DOT__sram_3__DOT__ram
                [0U][0U];
            __Vtemp1438[1U] = vlSelf->top_test__DOT__sram_0__DOT__sram_3__DOT__ram
                [0U][1U];
            __Vtemp1438[2U] = vlSelf->top_test__DOT__sram_0__DOT__sram_3__DOT__ram
                [0U][2U];
            __Vtemp1438[3U] = vlSelf->top_test__DOT__sram_0__DOT__sram_3__DOT__ram
                [0U][3U];
            tracep->chgWData(oldp+1476,(__Vtemp1438),128);
            __Vtemp1439[0U] = vlSelf->top_test__DOT__sram_0__DOT__sram_4__DOT__ram
                [0U][0U];
            __Vtemp1439[1U] = vlSelf->top_test__DOT__sram_0__DOT__sram_4__DOT__ram
                [0U][1U];
            __Vtemp1439[2U] = vlSelf->top_test__DOT__sram_0__DOT__sram_4__DOT__ram
                [0U][2U];
            __Vtemp1439[3U] = vlSelf->top_test__DOT__sram_0__DOT__sram_4__DOT__ram
                [0U][3U];
            tracep->chgWData(oldp+1480,(__Vtemp1439),128);
            __Vtemp1440[0U] = vlSelf->top_test__DOT__sram_0__DOT__sram_5__DOT__ram
                [0U][0U];
            __Vtemp1440[1U] = vlSelf->top_test__DOT__sram_0__DOT__sram_5__DOT__ram
                [0U][1U];
            __Vtemp1440[2U] = vlSelf->top_test__DOT__sram_0__DOT__sram_5__DOT__ram
                [0U][2U];
            __Vtemp1440[3U] = vlSelf->top_test__DOT__sram_0__DOT__sram_5__DOT__ram
                [0U][3U];
            tracep->chgWData(oldp+1484,(__Vtemp1440),128);
            __Vtemp1441[0U] = vlSelf->top_test__DOT__sram_0__DOT__sram_6__DOT__ram
                [0U][0U];
            __Vtemp1441[1U] = vlSelf->top_test__DOT__sram_0__DOT__sram_6__DOT__ram
                [0U][1U];
            __Vtemp1441[2U] = vlSelf->top_test__DOT__sram_0__DOT__sram_6__DOT__ram
                [0U][2U];
            __Vtemp1441[3U] = vlSelf->top_test__DOT__sram_0__DOT__sram_6__DOT__ram
                [0U][3U];
            tracep->chgWData(oldp+1488,(__Vtemp1441),128);
            __Vtemp1442[0U] = vlSelf->top_test__DOT__sram_0__DOT__sram_7__DOT__ram
                [0U][0U];
            __Vtemp1442[1U] = vlSelf->top_test__DOT__sram_0__DOT__sram_7__DOT__ram
                [0U][1U];
            __Vtemp1442[2U] = vlSelf->top_test__DOT__sram_0__DOT__sram_7__DOT__ram
                [0U][2U];
            __Vtemp1442[3U] = vlSelf->top_test__DOT__sram_0__DOT__sram_7__DOT__ram
                [0U][3U];
            tracep->chgWData(oldp+1492,(__Vtemp1442),128);
        }
        tracep->chgBit(oldp+1496,(vlSelf->clock));
        tracep->chgBit(oldp+1497,(vlSelf->reset));
        tracep->chgIData(oldp+1498,(vlSelf->inst),32);
        tracep->chgQData(oldp+1499,(vlSelf->cpupc),64);
        tracep->chgBit(oldp+1501,(vlSelf->ebreak));
        tracep->chgBit(oldp+1502,(vlSelf->not_have));
        tracep->chgQData(oldp+1503,(vlSelf->dnpc),64);
        tracep->chgBit(oldp+1505,(vlSelf->inst_finish));
        tracep->chgBit(oldp+1506,(vlSelf->mem_finish));
        tracep->chgBit(oldp+1507,(vlSelf->inst_update));
        tracep->chgQData(oldp+1508,(vlSelf->dnpc_reg_wb),64);
        tracep->chgQData(oldp+1510,(vlSelf->cpupc_reg_wb),64);
        tracep->chgQData(oldp+1512,(vlSelf->cpupc_reg_finish),64);
        tracep->chgIData(oldp+1514,(vlSelf->inst_reg_wb),32);
        tracep->chgIData(oldp+1515,(((1U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_arbiter_1__DOT__master_state))
                                      ? (0xffffffc0U 
                                         & (IData)(vlSelf->cpupc))
                                      : ((2U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_arbiter_1__DOT__master_state))
                                          ? ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__use_cache)
                                              ? (0xffffffc0U 
                                                 & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__araddr)
                                              : (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result))
                                          : 0U))),32);
        tracep->chgCData(oldp+1516,((0x3fU & (IData)(
                                                     (vlSelf->cpupc 
                                                      >> 6U)))),6);
        tracep->chgBit(oldp+1517,((1U & (~ ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__rvalid1) 
                                              & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__rready)) 
                                             & ((0U 
                                                 == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__d_len)) 
                                                | (1U 
                                                   == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__d_len)))) 
                                            | ((0U 
                                                == 
                                                (7U 
                                                 & (IData)(
                                                           (vlSelf->cpupc 
                                                            >> 3U)))) 
                                               | (1U 
                                                  == 
                                                  (7U 
                                                   & (IData)(
                                                             (vlSelf->cpupc 
                                                              >> 3U))))))))));
        tracep->chgBit(oldp+1518,((1U & (~ ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__rvalid1) 
                                              & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__rready)) 
                                             & ((2U 
                                                 == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__d_len)) 
                                                | (3U 
                                                   == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__d_len)))) 
                                            | ((2U 
                                                == 
                                                (7U 
                                                 & (IData)(
                                                           (vlSelf->cpupc 
                                                            >> 3U)))) 
                                               | (3U 
                                                  == 
                                                  (7U 
                                                   & (IData)(
                                                             (vlSelf->cpupc 
                                                              >> 3U))))))))));
        tracep->chgBit(oldp+1519,((1U & (~ ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__rvalid1) 
                                              & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__rready)) 
                                             & ((4U 
                                                 == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__d_len)) 
                                                | (5U 
                                                   == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__d_len)))) 
                                            | ((4U 
                                                == 
                                                (7U 
                                                 & (IData)(
                                                           (vlSelf->cpupc 
                                                            >> 3U)))) 
                                               | (5U 
                                                  == 
                                                  (7U 
                                                   & (IData)(
                                                             (vlSelf->cpupc 
                                                              >> 3U))))))))));
        tracep->chgBit(oldp+1520,((1U & (~ ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__rvalid1) 
                                              & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__rready)) 
                                             & ((6U 
                                                 == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__d_len)) 
                                                | (7U 
                                                   == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__d_len)))) 
                                            | ((6U 
                                                == 
                                                (7U 
                                                 & (IData)(
                                                           (vlSelf->cpupc 
                                                            >> 3U)))) 
                                               | (7U 
                                                  == 
                                                  (7U 
                                                   & (IData)(
                                                             (vlSelf->cpupc 
                                                              >> 3U))))))))));
        tracep->chgBit(oldp+1521,(((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__rvalid1) 
                                     & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__rready)) 
                                    & ((0U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__d_len)) 
                                       | (1U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__d_len)))) 
                                   | ((0U == (7U & (IData)(
                                                           (vlSelf->cpupc 
                                                            >> 3U)))) 
                                      | (1U == (7U 
                                                & (IData)(
                                                          (vlSelf->cpupc 
                                                           >> 3U))))))));
        tracep->chgBit(oldp+1522,(((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__rvalid1) 
                                     & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__rready)) 
                                    & ((2U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__d_len)) 
                                       | (3U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__d_len)))) 
                                   | ((2U == (7U & (IData)(
                                                           (vlSelf->cpupc 
                                                            >> 3U)))) 
                                      | (3U == (7U 
                                                & (IData)(
                                                          (vlSelf->cpupc 
                                                           >> 3U))))))));
        tracep->chgBit(oldp+1523,(((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__rvalid1) 
                                     & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__rready)) 
                                    & ((4U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__d_len)) 
                                       | (5U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__d_len)))) 
                                   | ((4U == (7U & (IData)(
                                                           (vlSelf->cpupc 
                                                            >> 3U)))) 
                                      | (5U == (7U 
                                                & (IData)(
                                                          (vlSelf->cpupc 
                                                           >> 3U))))))));
        tracep->chgBit(oldp+1524,(((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__rvalid1) 
                                     & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__rready)) 
                                    & ((6U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__d_len)) 
                                       | (7U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__d_len)))) 
                                   | ((6U == (7U & (IData)(
                                                           (vlSelf->cpupc 
                                                            >> 3U)))) 
                                      | (7U == (7U 
                                                & (IData)(
                                                          (vlSelf->cpupc 
                                                           >> 3U))))))));
        tracep->chgIData(oldp+1525,((0xffffffc0U & (IData)(vlSelf->cpupc))),32);
        tracep->chgIData(oldp+1526,((IData)(vlSelf->cpupc)),32);
        tracep->chgCData(oldp+1527,((0x3fU & (IData)(vlSelf->cpupc))),6);
        tracep->chgIData(oldp+1528,((0xfffffU & (IData)(
                                                        (vlSelf->cpupc 
                                                         >> 0xcU)))),20);
        tracep->chgCData(oldp+1529,((0x7fU & vlSelf->inst)),7);
        tracep->chgCData(oldp+1530,((7U & (vlSelf->inst 
                                           >> 0xcU))),3);
        tracep->chgBit(oldp+1531,((0x6fU == (0x7fU 
                                             & vlSelf->inst))));
        tracep->chgBit(oldp+1532,((IData)((0x67U == 
                                           (0x707fU 
                                            & vlSelf->inst)))));
        tracep->chgBit(oldp+1533,((IData)((0x63U == 
                                           (0x707fU 
                                            & vlSelf->inst)))));
        tracep->chgBit(oldp+1534,((IData)((0x1063U 
                                           == (0x707fU 
                                               & vlSelf->inst)))));
        tracep->chgBit(oldp+1535,((IData)((0x5063U 
                                           == (0x707fU 
                                               & vlSelf->inst)))));
        tracep->chgBit(oldp+1536,((IData)((0x7063U 
                                           == (0x707fU 
                                               & vlSelf->inst)))));
        tracep->chgBit(oldp+1537,((IData)((0x6063U 
                                           == (0x707fU 
                                               & vlSelf->inst)))));
        tracep->chgBit(oldp+1538,((IData)((0x4063U 
                                           == (0x707fU 
                                               & vlSelf->inst)))));
    }
}

void Vtop_test___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    Vtop_test___024root* const __restrict vlSelf = static_cast<Vtop_test___024root*>(voidSelf);
    Vtop_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    }
}
