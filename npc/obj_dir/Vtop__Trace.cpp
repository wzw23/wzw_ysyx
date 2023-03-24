// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__traceChgSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep);

void Vtop___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vtop___024root* const __restrict vlSelf = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vtop___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vtop___024root__traceChgSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgQData(oldp+0,(vlSelf->top__DOT__imm),64);
            tracep->chgCData(oldp+2,((1U & (- (IData)((IData)(vlSelf->top__DOT__control_0__DOT__Add))))),3);
            tracep->chgCData(oldp+3,(vlSelf->top__DOT__sel_alu_src2),3);
            tracep->chgSData(oldp+4,(vlSelf->top__DOT__alu_control),12);
            tracep->chgBit(oldp+5,(vlSelf->top__DOT__rf_wen));
            tracep->chgBit(oldp+6,(vlSelf->top__DOT__control_0__DOT__lw));
            tracep->chgBit(oldp+7,(vlSelf->top__DOT__data_ram_wen));
            tracep->chgQData(oldp+8,(vlSelf->top__DOT__alu_result),64);
            tracep->chgQData(oldp+10,(vlSelf->top__DOT__ram_addr),64);
            tracep->chgQData(oldp+12,(vlSelf->top__DOT__ram_data),64);
            tracep->chgQData(oldp+14,(vlSelf->top__DOT__src1),64);
            tracep->chgCData(oldp+16,(vlSelf->top__DOT__wmask),8);
            tracep->chgBit(oldp+17,(vlSelf->top__DOT__control_0__DOT__addi));
            tracep->chgBit(oldp+18,(vlSelf->top__DOT__control_0__DOT__slliw));
            tracep->chgBit(oldp+19,(vlSelf->top__DOT__control_0__DOT__sraiw));
            tracep->chgBit(oldp+20,(vlSelf->top__DOT__control_0__DOT__sd));
            tracep->chgBit(oldp+21,(vlSelf->top__DOT__control_0__DOT__sh));
            tracep->chgBit(oldp+22,(vlSelf->top__DOT__control_0__DOT__sw));
            tracep->chgBit(oldp+23,(vlSelf->top__DOT__control_0__DOT__sb));
            tracep->chgBit(oldp+24,(vlSelf->top__DOT__control_0__DOT__divw));
            tracep->chgBit(oldp+25,(vlSelf->top__DOT__control_0__DOT__remu));
            tracep->chgBit(oldp+26,(vlSelf->top__DOT__control_0__DOT__Add));
            tracep->chgQData(oldp+27,(vlSelf->top__DOT__exe_0__DOT__src2),64);
            tracep->chgQData(oldp+29,(vlSelf->top__DOT__exe_0__DOT__alu_src1),64);
            tracep->chgQData(oldp+31,(vlSelf->top__DOT__exe_0__DOT__alu_src2),64);
            tracep->chgQData(oldp+33,(vlSelf->top__DOT__exe_0__DOT__wdata),64);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgQData(oldp+35,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[0]),64);
            tracep->chgQData(oldp+37,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[1]),64);
            tracep->chgQData(oldp+39,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[2]),64);
            tracep->chgQData(oldp+41,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[3]),64);
            tracep->chgQData(oldp+43,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[4]),64);
            tracep->chgQData(oldp+45,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[5]),64);
            tracep->chgQData(oldp+47,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[6]),64);
            tracep->chgQData(oldp+49,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[7]),64);
            tracep->chgQData(oldp+51,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[8]),64);
            tracep->chgQData(oldp+53,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[9]),64);
            tracep->chgQData(oldp+55,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[10]),64);
            tracep->chgQData(oldp+57,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[11]),64);
            tracep->chgQData(oldp+59,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[12]),64);
            tracep->chgQData(oldp+61,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[13]),64);
            tracep->chgQData(oldp+63,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[14]),64);
            tracep->chgQData(oldp+65,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[15]),64);
            tracep->chgQData(oldp+67,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[16]),64);
            tracep->chgQData(oldp+69,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[17]),64);
            tracep->chgQData(oldp+71,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[18]),64);
            tracep->chgQData(oldp+73,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[19]),64);
            tracep->chgQData(oldp+75,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[20]),64);
            tracep->chgQData(oldp+77,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[21]),64);
            tracep->chgQData(oldp+79,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[22]),64);
            tracep->chgQData(oldp+81,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[23]),64);
            tracep->chgQData(oldp+83,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[24]),64);
            tracep->chgQData(oldp+85,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[25]),64);
            tracep->chgQData(oldp+87,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[26]),64);
            tracep->chgQData(oldp+89,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[27]),64);
            tracep->chgQData(oldp+91,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[28]),64);
            tracep->chgQData(oldp+93,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[29]),64);
            tracep->chgQData(oldp+95,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[30]),64);
            tracep->chgQData(oldp+97,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[31]),64);
            tracep->chgIData(oldp+99,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__i),32);
        }
        tracep->chgBit(oldp+100,(vlSelf->clk));
        tracep->chgBit(oldp+101,(vlSelf->rst));
        tracep->chgIData(oldp+102,(vlSelf->inst),32);
        tracep->chgIData(oldp+103,(vlSelf->cpupc),32);
        tracep->chgCData(oldp+104,((0x1fU & (vlSelf->inst 
                                             >> 0xfU))),5);
        tracep->chgCData(oldp+105,((0x1fU & (vlSelf->inst 
                                             >> 0x14U))),5);
        tracep->chgCData(oldp+106,((0x1fU & (vlSelf->inst 
                                             >> 7U))),5);
        tracep->chgCData(oldp+107,((0x7fU & vlSelf->inst)),7);
        tracep->chgCData(oldp+108,((vlSelf->inst >> 0x19U)),7);
        tracep->chgCData(oldp+109,((7U & (vlSelf->inst 
                                          >> 0xcU))),3);
        tracep->chgBit(oldp+110,((0x13U == (0x7fU & vlSelf->inst))));
        tracep->chgBit(oldp+111,((0x73U == (0x7fU & vlSelf->inst))));
        tracep->chgBit(oldp+112,((0x3bU == (0x7fU & vlSelf->inst))));
        tracep->chgBit(oldp+113,((0x33U == (0x7fU & vlSelf->inst))));
        tracep->chgBit(oldp+114,((0x63U == (0x7fU & vlSelf->inst))));
        tracep->chgBit(oldp+115,((3U == (0x7fU & vlSelf->inst))));
        tracep->chgBit(oldp+116,((0x1bU == (0x7fU & vlSelf->inst))));
        tracep->chgBit(oldp+117,((0x23U == (0x7fU & vlSelf->inst))));
        tracep->chgBit(oldp+118,((0U == (vlSelf->inst 
                                         >> 0x19U))));
        tracep->chgBit(oldp+119,((0x20U == (vlSelf->inst 
                                            >> 0x19U))));
        tracep->chgBit(oldp+120,((1U == (vlSelf->inst 
                                         >> 0x19U))));
        tracep->chgBit(oldp+121,((0U == (7U & (vlSelf->inst 
                                               >> 0xcU)))));
        tracep->chgBit(oldp+122,((1U == (7U & (vlSelf->inst 
                                               >> 0xcU)))));
        tracep->chgBit(oldp+123,((2U == (7U & (vlSelf->inst 
                                               >> 0xcU)))));
        tracep->chgBit(oldp+124,((3U == (7U & (vlSelf->inst 
                                               >> 0xcU)))));
        tracep->chgBit(oldp+125,((4U == (7U & (vlSelf->inst 
                                               >> 0xcU)))));
        tracep->chgBit(oldp+126,((5U == (7U & (vlSelf->inst 
                                               >> 0xcU)))));
        tracep->chgBit(oldp+127,((6U == (7U & (vlSelf->inst 
                                               >> 0xcU)))));
        tracep->chgBit(oldp+128,((7U == (7U & (vlSelf->inst 
                                               >> 0xcU)))));
        tracep->chgBit(oldp+129,((IData)((0x1073U == 
                                          (0x707fU 
                                           & vlSelf->inst)))));
        tracep->chgBit(oldp+130,((IData)((0x2073U == 
                                          (0x707fU 
                                           & vlSelf->inst)))));
        tracep->chgBit(oldp+131,((IData)((0x7013U == 
                                          (0x707fU 
                                           & vlSelf->inst)))));
        tracep->chgBit(oldp+132,((IData)((0x4013U == 
                                          (0x707fU 
                                           & vlSelf->inst)))));
        tracep->chgBit(oldp+133,((IData)((0x6013U == 
                                          (0x707fU 
                                           & vlSelf->inst)))));
        tracep->chgBit(oldp+134,((IData)(((0x103bU 
                                           == (0x707fU 
                                               & vlSelf->inst)) 
                                          & (0U == 
                                             (vlSelf->inst 
                                              >> 0x19U))))));
        tracep->chgBit(oldp+135,((IData)(((0x1033U 
                                           == (0x707fU 
                                               & vlSelf->inst)) 
                                          & (0U == 
                                             (vlSelf->inst 
                                              >> 0x19U))))));
        tracep->chgBit(oldp+136,((IData)(((0x503bU 
                                           == (0x707fU 
                                               & vlSelf->inst)) 
                                          & (0U == 
                                             (vlSelf->inst 
                                              >> 0x19U))))));
        tracep->chgBit(oldp+137,((IData)(((0x503bU 
                                           == (0x707fU 
                                               & vlSelf->inst)) 
                                          & (0x20U 
                                             == (vlSelf->inst 
                                                 >> 0x19U))))));
        tracep->chgBit(oldp+138,((IData)((0x1bU == 
                                          (0x707fU 
                                           & vlSelf->inst)))));
        tracep->chgBit(oldp+139,((0x6fU == (0x7fU & vlSelf->inst))));
        tracep->chgBit(oldp+140,((IData)((0x1003U == 
                                          (0x707fU 
                                           & vlSelf->inst)))));
        tracep->chgBit(oldp+141,((IData)((3U == (0x707fU 
                                                 & vlSelf->inst)))));
        tracep->chgBit(oldp+142,((IData)((0x4003U == 
                                          (0x707fU 
                                           & vlSelf->inst)))));
        tracep->chgBit(oldp+143,((IData)((0x6003U == 
                                          (0x707fU 
                                           & vlSelf->inst)))));
        tracep->chgBit(oldp+144,((IData)((0x5003U == 
                                          (0x707fU 
                                           & vlSelf->inst)))));
        tracep->chgBit(oldp+145,((IData)((0x3003U == 
                                          (0x707fU 
                                           & vlSelf->inst)))));
        tracep->chgBit(oldp+146,((IData)(((0x3bU == 
                                           (0x707fU 
                                            & vlSelf->inst)) 
                                          & (0U == 
                                             (vlSelf->inst 
                                              >> 0x19U))))));
        tracep->chgBit(oldp+147,((IData)(((0x3bU == 
                                           (0x707fU 
                                            & vlSelf->inst)) 
                                          & (0x20U 
                                             == (vlSelf->inst 
                                                 >> 0x19U))))));
        tracep->chgBit(oldp+148,((IData)(((0x3bU == 
                                           (0x707fU 
                                            & vlSelf->inst)) 
                                          & (1U == 
                                             (vlSelf->inst 
                                              >> 0x19U))))));
        tracep->chgBit(oldp+149,((IData)(((0x5033U 
                                           == (0x707fU 
                                               & vlSelf->inst)) 
                                          & (1U == 
                                             (vlSelf->inst 
                                              >> 0x19U))))));
        tracep->chgBit(oldp+150,((IData)(((0x4033U 
                                           == (0x707fU 
                                               & vlSelf->inst)) 
                                          & (1U == 
                                             (vlSelf->inst 
                                              >> 0x19U))))));
        tracep->chgBit(oldp+151,((IData)(((0x6033U 
                                           == (0x707fU 
                                               & vlSelf->inst)) 
                                          & (1U == 
                                             (vlSelf->inst 
                                              >> 0x19U))))));
        tracep->chgBit(oldp+152,((IData)(((0x33U == 
                                           (0x707fU 
                                            & vlSelf->inst)) 
                                          & (1U == 
                                             (vlSelf->inst 
                                              >> 0x19U))))));
        tracep->chgBit(oldp+153,((IData)(((0x7033U 
                                           == (0x707fU 
                                               & vlSelf->inst)) 
                                          & (0U == 
                                             (vlSelf->inst 
                                              >> 0x19U))))));
        tracep->chgBit(oldp+154,((IData)(((0x4033U 
                                           == (0x707fU 
                                               & vlSelf->inst)) 
                                          & (0U == 
                                             (vlSelf->inst 
                                              >> 0x19U))))));
        tracep->chgBit(oldp+155,((IData)(((0x6033U 
                                           == (0x707fU 
                                               & vlSelf->inst)) 
                                          & (0U == 
                                             (vlSelf->inst 
                                              >> 0x19U))))));
        tracep->chgBit(oldp+156,((IData)(((0x3033U 
                                           == (0x707fU 
                                               & vlSelf->inst)) 
                                          & (0U == 
                                             (vlSelf->inst 
                                              >> 0x19U))))));
        tracep->chgBit(oldp+157,((IData)(((0x2033U 
                                           == (0x707fU 
                                               & vlSelf->inst)) 
                                          & (0U == 
                                             (vlSelf->inst 
                                              >> 0x19U))))));
        tracep->chgBit(oldp+158,((IData)(((0x33U == 
                                           (0x707fU 
                                            & vlSelf->inst)) 
                                          & (0x20U 
                                             == (vlSelf->inst 
                                                 >> 0x19U))))));
        tracep->chgBit(oldp+159,((IData)((0x3013U == 
                                          (0x707fU 
                                           & vlSelf->inst)))));
        tracep->chgBit(oldp+160,((IData)(((0x5013U 
                                           == (0x707fU 
                                               & vlSelf->inst)) 
                                          & (0x20U 
                                             == (vlSelf->inst 
                                                 >> 0x19U))))));
        tracep->chgBit(oldp+161,((IData)((0x63U == 
                                          (0x707fU 
                                           & vlSelf->inst)))));
        tracep->chgBit(oldp+162,((IData)((0x1063U == 
                                          (0x707fU 
                                           & vlSelf->inst)))));
        tracep->chgBit(oldp+163,((IData)((0x5063U == 
                                          (0x707fU 
                                           & vlSelf->inst)))));
        tracep->chgBit(oldp+164,((IData)((0x7063U == 
                                          (0x707fU 
                                           & vlSelf->inst)))));
        tracep->chgBit(oldp+165,((IData)((0x6063U == 
                                          (0x707fU 
                                           & vlSelf->inst)))));
        tracep->chgBit(oldp+166,((IData)((0x4063U == 
                                          (0x707fU 
                                           & vlSelf->inst)))));
    }
}

void Vtop___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    Vtop___024root* const __restrict vlSelf = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    }
}
