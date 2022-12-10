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
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
            tracep->chgIData(oldp+0,(vlSelf->top__DOT__de__DOT__r0__DOT__i),32);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgCData(oldp+1,(vlSelf->top__DOT__de__DOT__Type),3);
            tracep->chgQData(oldp+2,(vlSelf->top__DOT__de__DOT__src1),64);
            tracep->chgQData(oldp+4,(vlSelf->top__DOT__de__DOT__src2),64);
            tracep->chgQData(oldp+6,(vlSelf->top__DOT__de__DOT__imm),64);
            tracep->chgCData(oldp+8,(vlSelf->top__DOT__de__DOT__waddr),5);
            tracep->chgQData(oldp+9,(vlSelf->top__DOT__de__DOT__wdata),64);
            tracep->chgQData(oldp+11,(vlSelf->top__DOT__de__DOT__addidata),64);
            tracep->chgWData(oldp+13,(vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4),402);
            tracep->chgWData(oldp+26,(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[0]),67);
            tracep->chgWData(oldp+29,(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[1]),67);
            tracep->chgWData(oldp+32,(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[2]),67);
            tracep->chgWData(oldp+35,(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[3]),67);
            tracep->chgWData(oldp+38,(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[4]),67);
            tracep->chgWData(oldp+41,(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[5]),67);
            tracep->chgCData(oldp+44,(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list[0]),3);
            tracep->chgCData(oldp+45,(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list[1]),3);
            tracep->chgCData(oldp+46,(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list[2]),3);
            tracep->chgCData(oldp+47,(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list[3]),3);
            tracep->chgCData(oldp+48,(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list[4]),3);
            tracep->chgCData(oldp+49,(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list[5]),3);
            tracep->chgQData(oldp+50,(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+52,(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+54,(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+56,(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+58,(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list[4]),64);
            tracep->chgQData(oldp+60,(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list[5]),64);
            tracep->chgQData(oldp+62,(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+64,(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit));
            tracep->chgIData(oldp+65,(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__i),32);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgCData(oldp+66,(vlSelf->top__DOT__count_c),4);
            tracep->chgQData(oldp+67,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[0]),64);
            tracep->chgQData(oldp+69,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[1]),64);
            tracep->chgQData(oldp+71,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[2]),64);
            tracep->chgQData(oldp+73,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[3]),64);
            tracep->chgQData(oldp+75,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[4]),64);
            tracep->chgQData(oldp+77,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[5]),64);
            tracep->chgQData(oldp+79,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[6]),64);
            tracep->chgQData(oldp+81,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[7]),64);
            tracep->chgQData(oldp+83,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[8]),64);
            tracep->chgQData(oldp+85,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[9]),64);
            tracep->chgQData(oldp+87,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[10]),64);
            tracep->chgQData(oldp+89,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[11]),64);
            tracep->chgQData(oldp+91,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[12]),64);
            tracep->chgQData(oldp+93,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[13]),64);
            tracep->chgQData(oldp+95,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[14]),64);
            tracep->chgQData(oldp+97,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[15]),64);
            tracep->chgQData(oldp+99,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[16]),64);
            tracep->chgQData(oldp+101,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[17]),64);
            tracep->chgQData(oldp+103,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[18]),64);
            tracep->chgQData(oldp+105,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[19]),64);
            tracep->chgQData(oldp+107,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[20]),64);
            tracep->chgQData(oldp+109,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[21]),64);
            tracep->chgQData(oldp+111,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[22]),64);
            tracep->chgQData(oldp+113,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[23]),64);
            tracep->chgQData(oldp+115,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[24]),64);
            tracep->chgQData(oldp+117,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[25]),64);
            tracep->chgQData(oldp+119,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[26]),64);
            tracep->chgQData(oldp+121,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[27]),64);
            tracep->chgQData(oldp+123,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[28]),64);
            tracep->chgQData(oldp+125,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[29]),64);
            tracep->chgQData(oldp+127,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[30]),64);
            tracep->chgQData(oldp+129,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[31]),64);
        }
        tracep->chgBit(oldp+131,(vlSelf->clk));
        tracep->chgBit(oldp+132,(vlSelf->rst));
        tracep->chgIData(oldp+133,(vlSelf->inst),32);
        tracep->chgIData(oldp+134,(vlSelf->out),32);
        tracep->chgIData(oldp+135,(((IData)(4U) + vlSelf->out)),32);
        tracep->chgCData(oldp+136,((3U & vlSelf->inst)),2);
        tracep->chgCData(oldp+137,((0x1fU & (vlSelf->inst 
                                             >> 2U))),5);
        tracep->chgCData(oldp+138,((7U & (vlSelf->inst 
                                          >> 0xcU))),3);
        tracep->chgCData(oldp+139,((0x1fU & (vlSelf->inst 
                                             >> 0xfU))),5);
        tracep->chgCData(oldp+140,((0x1fU & (vlSelf->inst 
                                             >> 0x14U))),5);
        tracep->chgCData(oldp+141,((0x1fU & (vlSelf->inst 
                                             >> 7U))),5);
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
