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
            tracep->chgQData(oldp+1,(vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list[0]),37);
            tracep->chgIData(oldp+3,(vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list[0]),32);
            tracep->chgCData(oldp+4,(vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__data_list[0]),5);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgIData(oldp+5,(vlSelf->top__DOT__dnpc),32);
            tracep->chgIData(oldp+6,((IData)(vlSelf->top__DOT__de__DOT__rdata)),32);
            tracep->chgCData(oldp+7,(vlSelf->top__DOT__de__DOT__call_return),2);
            tracep->chgIData(oldp+8,(vlSelf->top__DOT__de__DOT__call_return),32);
            tracep->chgCData(oldp+9,(vlSelf->top__DOT__de__DOT__Type),3);
            tracep->chgCData(oldp+10,(vlSelf->top__DOT__de__DOT__raddr),5);
            tracep->chgQData(oldp+11,(vlSelf->top__DOT__de__DOT__src1),64);
            tracep->chgQData(oldp+13,(vlSelf->top__DOT__de__DOT__src2),64);
            tracep->chgQData(oldp+15,(vlSelf->top__DOT__de__DOT__rdata),64);
            tracep->chgQData(oldp+17,(vlSymsp->TOP__top__DOT__de__DOT__m1.out),64);
            tracep->chgQData(oldp+19,(vlSymsp->TOP__top__DOT__de__DOT__m7.out),64);
            tracep->chgCData(oldp+21,(vlSelf->top__DOT__de__DOT__waddr),5);
            tracep->chgQData(oldp+22,(vlSelf->top__DOT__de__DOT__wdata),64);
            tracep->chgQData(oldp+24,(vlSelf->top__DOT__de__DOT__addresult),64);
            tracep->chgQData(oldp+26,(vlSymsp->TOP__top__DOT__de__DOT__m4.out),64);
            tracep->chgQData(oldp+28,(vlSymsp->TOP__top__DOT__de__DOT__m5.out),64);
            tracep->chgIData(oldp+30,(vlSelf->top__DOT__de__DOT__addi),32);
            tracep->chgQData(oldp+31,(vlSelf->top__DOT__de__DOT__addauipc),64);
            tracep->chgIData(oldp+33,(vlSelf->top__DOT__de__DOT__jalr),32);
            tracep->chgWData(oldp+34,(vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4),175);
            tracep->chgQData(oldp+40,(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[0]),35);
            tracep->chgQData(oldp+42,(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[1]),35);
            tracep->chgQData(oldp+44,(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[2]),35);
            tracep->chgQData(oldp+46,(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[3]),35);
            tracep->chgQData(oldp+48,(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[4]),35);
            tracep->chgIData(oldp+50,(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list[0]),32);
            tracep->chgIData(oldp+51,(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list[1]),32);
            tracep->chgIData(oldp+52,(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list[2]),32);
            tracep->chgIData(oldp+53,(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list[3]),32);
            tracep->chgIData(oldp+54,(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list[4]),32);
            tracep->chgCData(oldp+55,(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list[0]),3);
            tracep->chgCData(oldp+56,(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list[1]),3);
            tracep->chgCData(oldp+57,(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list[2]),3);
            tracep->chgCData(oldp+58,(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list[3]),3);
            tracep->chgCData(oldp+59,(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list[4]),3);
            tracep->chgCData(oldp+60,(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out),3);
            tracep->chgBit(oldp+61,(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit));
            tracep->chgIData(oldp+62,(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__i),32);
            tracep->chgWData(oldp+63,(vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4),185);
            tracep->chgQData(oldp+69,(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list[0]),37);
            tracep->chgQData(oldp+71,(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list[1]),37);
            tracep->chgQData(oldp+73,(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list[2]),37);
            tracep->chgQData(oldp+75,(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list[3]),37);
            tracep->chgQData(oldp+77,(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list[4]),37);
            tracep->chgIData(oldp+79,(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list[0]),32);
            tracep->chgIData(oldp+80,(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list[1]),32);
            tracep->chgIData(oldp+81,(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list[2]),32);
            tracep->chgIData(oldp+82,(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list[3]),32);
            tracep->chgIData(oldp+83,(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list[4]),32);
            tracep->chgCData(oldp+84,(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list[0]),5);
            tracep->chgCData(oldp+85,(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list[1]),5);
            tracep->chgCData(oldp+86,(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list[2]),5);
            tracep->chgCData(oldp+87,(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list[3]),5);
            tracep->chgCData(oldp+88,(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list[4]),5);
            tracep->chgCData(oldp+89,(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out),5);
            tracep->chgBit(oldp+90,(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit));
            tracep->chgIData(oldp+91,(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__i),32);
            tracep->chgWData(oldp+92,(vlSelf->top__DOT__de__DOT____Vcellinp__m3____pinNumber4),480);
            tracep->chgWData(oldp+107,(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list[0]),96);
            tracep->chgWData(oldp+110,(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list[1]),96);
            tracep->chgWData(oldp+113,(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list[2]),96);
            tracep->chgWData(oldp+116,(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list[3]),96);
            tracep->chgWData(oldp+119,(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list[4]),96);
            tracep->chgIData(oldp+122,(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__key_list[0]),32);
            tracep->chgIData(oldp+123,(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__key_list[1]),32);
            tracep->chgIData(oldp+124,(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__key_list[2]),32);
            tracep->chgIData(oldp+125,(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__key_list[3]),32);
            tracep->chgIData(oldp+126,(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__key_list[4]),32);
            tracep->chgQData(oldp+127,(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+129,(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+131,(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+133,(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+135,(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__data_list[4]),64);
            tracep->chgQData(oldp+137,(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+139,(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__hit));
            tracep->chgIData(oldp+140,(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__i),32);
            tracep->chgCData(oldp+141,(vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__lut_out),5);
            tracep->chgBit(oldp+142,(vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__hit));
            tracep->chgIData(oldp+143,(vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__i),32);
            tracep->chgWData(oldp+144,(vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4),128);
            tracep->chgQData(oldp+148,(vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list[0]),64);
            tracep->chgQData(oldp+150,(vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list[1]),64);
            tracep->chgIData(oldp+152,(vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list[0]),32);
            tracep->chgIData(oldp+153,(vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list[1]),32);
            tracep->chgIData(oldp+154,(vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list[0]),32);
            tracep->chgIData(oldp+155,(vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list[1]),32);
            tracep->chgIData(oldp+156,(vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__lut_out),32);
            tracep->chgBit(oldp+157,(vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__hit));
            tracep->chgIData(oldp+158,(vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__i),32);
            tracep->chgWData(oldp+159,(vlSelf->top__DOT__de__DOT____Vcellinp__m4____pinNumber4),192);
            tracep->chgWData(oldp+165,(vlSymsp->TOP__top__DOT__de__DOT__m4.__PVT__i0__DOT__pair_list[0]),96);
            tracep->chgWData(oldp+168,(vlSymsp->TOP__top__DOT__de__DOT__m4.__PVT__i0__DOT__pair_list[1]),96);
            tracep->chgIData(oldp+171,(vlSymsp->TOP__top__DOT__de__DOT__m4.__PVT__i0__DOT__key_list[0]),32);
            tracep->chgIData(oldp+172,(vlSymsp->TOP__top__DOT__de__DOT__m4.__PVT__i0__DOT__key_list[1]),32);
            tracep->chgQData(oldp+173,(vlSymsp->TOP__top__DOT__de__DOT__m4.__PVT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+175,(vlSymsp->TOP__top__DOT__de__DOT__m4.__PVT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+177,(vlSymsp->TOP__top__DOT__de__DOT__m4.__PVT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+179,(vlSymsp->TOP__top__DOT__de__DOT__m4.__PVT__i0__DOT__hit));
            tracep->chgIData(oldp+180,(vlSymsp->TOP__top__DOT__de__DOT__m4.__PVT__i0__DOT__i),32);
            tracep->chgWData(oldp+181,(vlSelf->top__DOT__de__DOT____Vcellinp__m5____pinNumber4),192);
            tracep->chgWData(oldp+187,(vlSymsp->TOP__top__DOT__de__DOT__m5.__PVT__i0__DOT__pair_list[0]),96);
            tracep->chgWData(oldp+190,(vlSymsp->TOP__top__DOT__de__DOT__m5.__PVT__i0__DOT__pair_list[1]),96);
            tracep->chgIData(oldp+193,(vlSymsp->TOP__top__DOT__de__DOT__m5.__PVT__i0__DOT__key_list[0]),32);
            tracep->chgIData(oldp+194,(vlSymsp->TOP__top__DOT__de__DOT__m5.__PVT__i0__DOT__key_list[1]),32);
            tracep->chgQData(oldp+195,(vlSymsp->TOP__top__DOT__de__DOT__m5.__PVT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+197,(vlSymsp->TOP__top__DOT__de__DOT__m5.__PVT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+199,(vlSymsp->TOP__top__DOT__de__DOT__m5.__PVT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+201,(vlSymsp->TOP__top__DOT__de__DOT__m5.__PVT__i0__DOT__hit));
            tracep->chgIData(oldp+202,(vlSymsp->TOP__top__DOT__de__DOT__m5.__PVT__i0__DOT__i),32);
            tracep->chgWData(oldp+203,(vlSelf->top__DOT__de__DOT____Vcellinp__m1____pinNumber4),402);
            tracep->chgWData(oldp+216,(vlSymsp->TOP__top__DOT__de__DOT__m1.__PVT__i0__DOT__pair_list[0]),67);
            tracep->chgWData(oldp+219,(vlSymsp->TOP__top__DOT__de__DOT__m1.__PVT__i0__DOT__pair_list[1]),67);
            tracep->chgWData(oldp+222,(vlSymsp->TOP__top__DOT__de__DOT__m1.__PVT__i0__DOT__pair_list[2]),67);
            tracep->chgWData(oldp+225,(vlSymsp->TOP__top__DOT__de__DOT__m1.__PVT__i0__DOT__pair_list[3]),67);
            tracep->chgWData(oldp+228,(vlSymsp->TOP__top__DOT__de__DOT__m1.__PVT__i0__DOT__pair_list[4]),67);
            tracep->chgWData(oldp+231,(vlSymsp->TOP__top__DOT__de__DOT__m1.__PVT__i0__DOT__pair_list[5]),67);
            tracep->chgCData(oldp+234,(vlSymsp->TOP__top__DOT__de__DOT__m1.__PVT__i0__DOT__key_list[0]),3);
            tracep->chgCData(oldp+235,(vlSymsp->TOP__top__DOT__de__DOT__m1.__PVT__i0__DOT__key_list[1]),3);
            tracep->chgCData(oldp+236,(vlSymsp->TOP__top__DOT__de__DOT__m1.__PVT__i0__DOT__key_list[2]),3);
            tracep->chgCData(oldp+237,(vlSymsp->TOP__top__DOT__de__DOT__m1.__PVT__i0__DOT__key_list[3]),3);
            tracep->chgCData(oldp+238,(vlSymsp->TOP__top__DOT__de__DOT__m1.__PVT__i0__DOT__key_list[4]),3);
            tracep->chgCData(oldp+239,(vlSymsp->TOP__top__DOT__de__DOT__m1.__PVT__i0__DOT__key_list[5]),3);
            tracep->chgQData(oldp+240,(vlSymsp->TOP__top__DOT__de__DOT__m1.__PVT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+242,(vlSymsp->TOP__top__DOT__de__DOT__m1.__PVT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+244,(vlSymsp->TOP__top__DOT__de__DOT__m1.__PVT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+246,(vlSymsp->TOP__top__DOT__de__DOT__m1.__PVT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+248,(vlSymsp->TOP__top__DOT__de__DOT__m1.__PVT__i0__DOT__data_list[4]),64);
            tracep->chgQData(oldp+250,(vlSymsp->TOP__top__DOT__de__DOT__m1.__PVT__i0__DOT__data_list[5]),64);
            tracep->chgQData(oldp+252,(vlSymsp->TOP__top__DOT__de__DOT__m1.__PVT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+254,(vlSymsp->TOP__top__DOT__de__DOT__m1.__PVT__i0__DOT__hit));
            tracep->chgIData(oldp+255,(vlSymsp->TOP__top__DOT__de__DOT__m1.__PVT__i0__DOT__i),32);
            tracep->chgWData(oldp+256,(vlSelf->top__DOT__de__DOT____Vcellinp__m7____pinNumber4),402);
            tracep->chgWData(oldp+269,(vlSymsp->TOP__top__DOT__de__DOT__m7.__PVT__i0__DOT__pair_list[0]),67);
            tracep->chgWData(oldp+272,(vlSymsp->TOP__top__DOT__de__DOT__m7.__PVT__i0__DOT__pair_list[1]),67);
            tracep->chgWData(oldp+275,(vlSymsp->TOP__top__DOT__de__DOT__m7.__PVT__i0__DOT__pair_list[2]),67);
            tracep->chgWData(oldp+278,(vlSymsp->TOP__top__DOT__de__DOT__m7.__PVT__i0__DOT__pair_list[3]),67);
            tracep->chgWData(oldp+281,(vlSymsp->TOP__top__DOT__de__DOT__m7.__PVT__i0__DOT__pair_list[4]),67);
            tracep->chgWData(oldp+284,(vlSymsp->TOP__top__DOT__de__DOT__m7.__PVT__i0__DOT__pair_list[5]),67);
            tracep->chgCData(oldp+287,(vlSymsp->TOP__top__DOT__de__DOT__m7.__PVT__i0__DOT__key_list[0]),3);
            tracep->chgCData(oldp+288,(vlSymsp->TOP__top__DOT__de__DOT__m7.__PVT__i0__DOT__key_list[1]),3);
            tracep->chgCData(oldp+289,(vlSymsp->TOP__top__DOT__de__DOT__m7.__PVT__i0__DOT__key_list[2]),3);
            tracep->chgCData(oldp+290,(vlSymsp->TOP__top__DOT__de__DOT__m7.__PVT__i0__DOT__key_list[3]),3);
            tracep->chgCData(oldp+291,(vlSymsp->TOP__top__DOT__de__DOT__m7.__PVT__i0__DOT__key_list[4]),3);
            tracep->chgCData(oldp+292,(vlSymsp->TOP__top__DOT__de__DOT__m7.__PVT__i0__DOT__key_list[5]),3);
            tracep->chgQData(oldp+293,(vlSymsp->TOP__top__DOT__de__DOT__m7.__PVT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+295,(vlSymsp->TOP__top__DOT__de__DOT__m7.__PVT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+297,(vlSymsp->TOP__top__DOT__de__DOT__m7.__PVT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+299,(vlSymsp->TOP__top__DOT__de__DOT__m7.__PVT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+301,(vlSymsp->TOP__top__DOT__de__DOT__m7.__PVT__i0__DOT__data_list[4]),64);
            tracep->chgQData(oldp+303,(vlSymsp->TOP__top__DOT__de__DOT__m7.__PVT__i0__DOT__data_list[5]),64);
            tracep->chgQData(oldp+305,(vlSymsp->TOP__top__DOT__de__DOT__m7.__PVT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+307,(vlSymsp->TOP__top__DOT__de__DOT__m7.__PVT__i0__DOT__hit));
            tracep->chgIData(oldp+308,(vlSymsp->TOP__top__DOT__de__DOT__m7.__PVT__i0__DOT__i),32);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgCData(oldp+309,(vlSelf->top__DOT__count_c),6);
            tracep->chgQData(oldp+310,(vlSelf->top__DOT__de__DOT__array[0]),64);
            tracep->chgQData(oldp+312,(vlSelf->top__DOT__de__DOT__array[1]),64);
            tracep->chgQData(oldp+314,(vlSelf->top__DOT__de__DOT__array[2]),64);
            tracep->chgQData(oldp+316,(vlSelf->top__DOT__de__DOT__array[3]),64);
            tracep->chgQData(oldp+318,(vlSelf->top__DOT__de__DOT__array[4]),64);
            tracep->chgQData(oldp+320,(vlSelf->top__DOT__de__DOT__array[5]),64);
            tracep->chgQData(oldp+322,(vlSelf->top__DOT__de__DOT__array[6]),64);
            tracep->chgQData(oldp+324,(vlSelf->top__DOT__de__DOT__array[7]),64);
            tracep->chgQData(oldp+326,(vlSelf->top__DOT__de__DOT__array[8]),64);
            tracep->chgQData(oldp+328,(vlSelf->top__DOT__de__DOT__array[9]),64);
            tracep->chgQData(oldp+330,(vlSelf->top__DOT__de__DOT__array[10]),64);
            tracep->chgQData(oldp+332,(vlSelf->top__DOT__de__DOT__array[11]),64);
            tracep->chgQData(oldp+334,(vlSelf->top__DOT__de__DOT__array[12]),64);
            tracep->chgQData(oldp+336,(vlSelf->top__DOT__de__DOT__array[13]),64);
            tracep->chgQData(oldp+338,(vlSelf->top__DOT__de__DOT__array[14]),64);
            tracep->chgQData(oldp+340,(vlSelf->top__DOT__de__DOT__array[15]),64);
            tracep->chgQData(oldp+342,(vlSelf->top__DOT__de__DOT__array[16]),64);
            tracep->chgQData(oldp+344,(vlSelf->top__DOT__de__DOT__array[17]),64);
            tracep->chgQData(oldp+346,(vlSelf->top__DOT__de__DOT__array[18]),64);
            tracep->chgQData(oldp+348,(vlSelf->top__DOT__de__DOT__array[19]),64);
            tracep->chgQData(oldp+350,(vlSelf->top__DOT__de__DOT__array[20]),64);
            tracep->chgQData(oldp+352,(vlSelf->top__DOT__de__DOT__array[21]),64);
            tracep->chgQData(oldp+354,(vlSelf->top__DOT__de__DOT__array[22]),64);
            tracep->chgQData(oldp+356,(vlSelf->top__DOT__de__DOT__array[23]),64);
            tracep->chgQData(oldp+358,(vlSelf->top__DOT__de__DOT__array[24]),64);
            tracep->chgQData(oldp+360,(vlSelf->top__DOT__de__DOT__array[25]),64);
            tracep->chgQData(oldp+362,(vlSelf->top__DOT__de__DOT__array[26]),64);
            tracep->chgQData(oldp+364,(vlSelf->top__DOT__de__DOT__array[27]),64);
            tracep->chgQData(oldp+366,(vlSelf->top__DOT__de__DOT__array[28]),64);
            tracep->chgQData(oldp+368,(vlSelf->top__DOT__de__DOT__array[29]),64);
            tracep->chgQData(oldp+370,(vlSelf->top__DOT__de__DOT__array[30]),64);
            tracep->chgQData(oldp+372,(vlSelf->top__DOT__de__DOT__array[31]),64);
            tracep->chgQData(oldp+374,(vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13[0]),64);
            tracep->chgQData(oldp+376,(vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13[1]),64);
            tracep->chgQData(oldp+378,(vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13[2]),64);
            tracep->chgQData(oldp+380,(vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13[3]),64);
            tracep->chgQData(oldp+382,(vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13[4]),64);
            tracep->chgQData(oldp+384,(vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13[5]),64);
            tracep->chgQData(oldp+386,(vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13[6]),64);
            tracep->chgQData(oldp+388,(vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13[7]),64);
            tracep->chgQData(oldp+390,(vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13[8]),64);
            tracep->chgQData(oldp+392,(vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13[9]),64);
            tracep->chgQData(oldp+394,(vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13[10]),64);
            tracep->chgQData(oldp+396,(vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13[11]),64);
            tracep->chgQData(oldp+398,(vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13[12]),64);
            tracep->chgQData(oldp+400,(vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13[13]),64);
            tracep->chgQData(oldp+402,(vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13[14]),64);
            tracep->chgQData(oldp+404,(vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13[15]),64);
            tracep->chgQData(oldp+406,(vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13[16]),64);
            tracep->chgQData(oldp+408,(vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13[17]),64);
            tracep->chgQData(oldp+410,(vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13[18]),64);
            tracep->chgQData(oldp+412,(vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13[19]),64);
            tracep->chgQData(oldp+414,(vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13[20]),64);
            tracep->chgQData(oldp+416,(vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13[21]),64);
            tracep->chgQData(oldp+418,(vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13[22]),64);
            tracep->chgQData(oldp+420,(vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13[23]),64);
            tracep->chgQData(oldp+422,(vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13[24]),64);
            tracep->chgQData(oldp+424,(vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13[25]),64);
            tracep->chgQData(oldp+426,(vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13[26]),64);
            tracep->chgQData(oldp+428,(vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13[27]),64);
            tracep->chgQData(oldp+430,(vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13[28]),64);
            tracep->chgQData(oldp+432,(vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13[29]),64);
            tracep->chgQData(oldp+434,(vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13[30]),64);
            tracep->chgQData(oldp+436,(vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13[31]),64);
            tracep->chgQData(oldp+438,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[0]),64);
            tracep->chgQData(oldp+440,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[1]),64);
            tracep->chgQData(oldp+442,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[2]),64);
            tracep->chgQData(oldp+444,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[3]),64);
            tracep->chgQData(oldp+446,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[4]),64);
            tracep->chgQData(oldp+448,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[5]),64);
            tracep->chgQData(oldp+450,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[6]),64);
            tracep->chgQData(oldp+452,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[7]),64);
            tracep->chgQData(oldp+454,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[8]),64);
            tracep->chgQData(oldp+456,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[9]),64);
            tracep->chgQData(oldp+458,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[10]),64);
            tracep->chgQData(oldp+460,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[11]),64);
            tracep->chgQData(oldp+462,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[12]),64);
            tracep->chgQData(oldp+464,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[13]),64);
            tracep->chgQData(oldp+466,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[14]),64);
            tracep->chgQData(oldp+468,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[15]),64);
            tracep->chgQData(oldp+470,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[16]),64);
            tracep->chgQData(oldp+472,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[17]),64);
            tracep->chgQData(oldp+474,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[18]),64);
            tracep->chgQData(oldp+476,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[19]),64);
            tracep->chgQData(oldp+478,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[20]),64);
            tracep->chgQData(oldp+480,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[21]),64);
            tracep->chgQData(oldp+482,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[22]),64);
            tracep->chgQData(oldp+484,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[23]),64);
            tracep->chgQData(oldp+486,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[24]),64);
            tracep->chgQData(oldp+488,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[25]),64);
            tracep->chgQData(oldp+490,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[26]),64);
            tracep->chgQData(oldp+492,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[27]),64);
            tracep->chgQData(oldp+494,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[28]),64);
            tracep->chgQData(oldp+496,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[29]),64);
            tracep->chgQData(oldp+498,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[30]),64);
            tracep->chgQData(oldp+500,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[31]),64);
        }
        tracep->chgBit(oldp+502,(vlSelf->clk));
        tracep->chgBit(oldp+503,(vlSelf->rst));
        tracep->chgIData(oldp+504,(vlSelf->inst),32);
        tracep->chgIData(oldp+505,(vlSelf->cpupc),32);
        tracep->chgBit(oldp+506,((0x100073U == vlSelf->inst)));
        tracep->chgIData(oldp+507,((0x100073U == vlSelf->inst)),32);
        tracep->chgQData(oldp+508,((QData)((IData)(vlSelf->cpupc))),64);
        tracep->chgCData(oldp+510,((3U & vlSelf->inst)),2);
        tracep->chgCData(oldp+511,((0x1fU & (vlSelf->inst 
                                             >> 2U))),5);
        tracep->chgCData(oldp+512,((7U & (vlSelf->inst 
                                          >> 0xcU))),3);
        tracep->chgCData(oldp+513,((0x1fU & (vlSelf->inst 
                                             >> 0xfU))),5);
        tracep->chgCData(oldp+514,((0x1fU & (vlSelf->inst 
                                             >> 0x14U))),5);
        tracep->chgCData(oldp+515,((0x1fU & (vlSelf->inst 
                                             >> 7U))),5);
        tracep->chgIData(oldp+516,((0x17U | (0xffffff80U 
                                             & vlSelf->inst))),32);
        tracep->chgIData(oldp+517,((0xfffff000U & vlSelf->inst)),32);
        tracep->chgIData(oldp+518,((0x37U | (0xffffff80U 
                                             & vlSelf->inst))),32);
        tracep->chgQData(oldp+519,(((QData)((IData)(
                                                    (vlSelf->inst 
                                                     >> 0xcU))) 
                                    << 0xcU)),64);
        tracep->chgIData(oldp+521,((0x6fU | (0xffffff80U 
                                             & vlSelf->inst))),32);
        tracep->chgQData(oldp+522,((4ULL + (QData)((IData)(vlSelf->cpupc)))),64);
        tracep->chgIData(oldp+524,(((IData)(4U) + vlSelf->cpupc)),32);
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
