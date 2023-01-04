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
            tracep->chgQData(oldp+6,(vlSymsp->TOP__top__DOT__de__DOT__m10.out),64);
            tracep->chgQData(oldp+8,(vlSymsp->TOP__top__DOT__de__DOT__m9.out),64);
            tracep->chgCData(oldp+10,(vlSelf->top__DOT__de__DOT__mwmask),8);
            tracep->chgIData(oldp+11,((IData)(vlSelf->top__DOT__de__DOT__rdata)),32);
            tracep->chgCData(oldp+12,(vlSelf->top__DOT__de__DOT__call_return),2);
            tracep->chgIData(oldp+13,(vlSelf->top__DOT__de__DOT__call_return),32);
            tracep->chgCData(oldp+14,(vlSelf->top__DOT__de__DOT__Type),3);
            tracep->chgIData(oldp+15,(vlSelf->top__DOT__de__DOT__Type),32);
            tracep->chgCData(oldp+16,(vlSelf->top__DOT__de__DOT__raddr),5);
            tracep->chgQData(oldp+17,(vlSelf->top__DOT__de__DOT__src1),64);
            tracep->chgQData(oldp+19,(vlSelf->top__DOT__de__DOT__src2),64);
            tracep->chgQData(oldp+21,(vlSelf->top__DOT__de__DOT__rdata),64);
            tracep->chgQData(oldp+23,(vlSymsp->TOP__top__DOT__de__DOT__m1.out),64);
            tracep->chgQData(oldp+25,(vlSymsp->TOP__top__DOT__de__DOT__m7.out),64);
            tracep->chgCData(oldp+27,(vlSelf->top__DOT__de__DOT__waddr),5);
            tracep->chgQData(oldp+28,(vlSelf->top__DOT__de__DOT__wdata),64);
            tracep->chgQData(oldp+30,(vlSelf->top__DOT__de__DOT__addresult),64);
            tracep->chgQData(oldp+32,(vlSymsp->TOP__top__DOT__de__DOT__m4.out),64);
            tracep->chgQData(oldp+34,(vlSymsp->TOP__top__DOT__de__DOT__m5.out),64);
            tracep->chgIData(oldp+36,(vlSelf->top__DOT__de__DOT__addi),32);
            tracep->chgQData(oldp+37,(vlSelf->top__DOT__de__DOT__addauipc),64);
            tracep->chgIData(oldp+39,(vlSelf->top__DOT__de__DOT__jalr),32);
            tracep->chgIData(oldp+40,(vlSelf->top__DOT__de__DOT__sd),32);
            tracep->chgWData(oldp+41,(vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4),210);
            tracep->chgQData(oldp+48,(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[0]),35);
            tracep->chgQData(oldp+50,(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[1]),35);
            tracep->chgQData(oldp+52,(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[2]),35);
            tracep->chgQData(oldp+54,(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[3]),35);
            tracep->chgQData(oldp+56,(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[4]),35);
            tracep->chgQData(oldp+58,(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[5]),35);
            tracep->chgIData(oldp+60,(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list[0]),32);
            tracep->chgIData(oldp+61,(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list[1]),32);
            tracep->chgIData(oldp+62,(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list[2]),32);
            tracep->chgIData(oldp+63,(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list[3]),32);
            tracep->chgIData(oldp+64,(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list[4]),32);
            tracep->chgIData(oldp+65,(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list[5]),32);
            tracep->chgCData(oldp+66,(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list[0]),3);
            tracep->chgCData(oldp+67,(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list[1]),3);
            tracep->chgCData(oldp+68,(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list[2]),3);
            tracep->chgCData(oldp+69,(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list[3]),3);
            tracep->chgCData(oldp+70,(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list[4]),3);
            tracep->chgCData(oldp+71,(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list[5]),3);
            tracep->chgCData(oldp+72,(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out),3);
            tracep->chgBit(oldp+73,(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit));
            tracep->chgIData(oldp+74,(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__i),32);
            tracep->chgWData(oldp+75,(vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4),185);
            tracep->chgQData(oldp+81,(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list[0]),37);
            tracep->chgQData(oldp+83,(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list[1]),37);
            tracep->chgQData(oldp+85,(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list[2]),37);
            tracep->chgQData(oldp+87,(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list[3]),37);
            tracep->chgQData(oldp+89,(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list[4]),37);
            tracep->chgIData(oldp+91,(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list[0]),32);
            tracep->chgIData(oldp+92,(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list[1]),32);
            tracep->chgIData(oldp+93,(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list[2]),32);
            tracep->chgIData(oldp+94,(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list[3]),32);
            tracep->chgIData(oldp+95,(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list[4]),32);
            tracep->chgCData(oldp+96,(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list[0]),5);
            tracep->chgCData(oldp+97,(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list[1]),5);
            tracep->chgCData(oldp+98,(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list[2]),5);
            tracep->chgCData(oldp+99,(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list[3]),5);
            tracep->chgCData(oldp+100,(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list[4]),5);
            tracep->chgCData(oldp+101,(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out),5);
            tracep->chgBit(oldp+102,(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit));
            tracep->chgIData(oldp+103,(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__i),32);
            tracep->chgWData(oldp+104,(vlSelf->top__DOT__de__DOT____Vcellinp__m3____pinNumber4),480);
            tracep->chgWData(oldp+119,(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list[0]),96);
            tracep->chgWData(oldp+122,(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list[1]),96);
            tracep->chgWData(oldp+125,(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list[2]),96);
            tracep->chgWData(oldp+128,(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list[3]),96);
            tracep->chgWData(oldp+131,(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list[4]),96);
            tracep->chgIData(oldp+134,(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__key_list[0]),32);
            tracep->chgIData(oldp+135,(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__key_list[1]),32);
            tracep->chgIData(oldp+136,(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__key_list[2]),32);
            tracep->chgIData(oldp+137,(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__key_list[3]),32);
            tracep->chgIData(oldp+138,(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__key_list[4]),32);
            tracep->chgQData(oldp+139,(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+141,(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+143,(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+145,(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+147,(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__data_list[4]),64);
            tracep->chgQData(oldp+149,(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+151,(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__hit));
            tracep->chgIData(oldp+152,(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__i),32);
            tracep->chgCData(oldp+153,(vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__lut_out),5);
            tracep->chgBit(oldp+154,(vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__hit));
            tracep->chgIData(oldp+155,(vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__i),32);
            tracep->chgWData(oldp+156,(vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4),128);
            tracep->chgQData(oldp+160,(vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list[0]),64);
            tracep->chgQData(oldp+162,(vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list[1]),64);
            tracep->chgIData(oldp+164,(vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list[0]),32);
            tracep->chgIData(oldp+165,(vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list[1]),32);
            tracep->chgIData(oldp+166,(vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list[0]),32);
            tracep->chgIData(oldp+167,(vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list[1]),32);
            tracep->chgIData(oldp+168,(vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__lut_out),32);
            tracep->chgBit(oldp+169,(vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__hit));
            tracep->chgIData(oldp+170,(vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__i),32);
            tracep->chgQData(oldp+171,((0xffULL | ((QData)((IData)(vlSelf->top__DOT__de__DOT__sd)) 
                                                   << 8U))),40);
            tracep->chgQData(oldp+173,(vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__pair_list[0]),40);
            tracep->chgIData(oldp+175,(vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__key_list[0]),32);
            tracep->chgCData(oldp+176,(vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__data_list[0]),8);
            tracep->chgCData(oldp+177,(vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__lut_out),8);
            tracep->chgBit(oldp+178,(vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__hit));
            tracep->chgIData(oldp+179,(vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__i),32);
            tracep->chgWData(oldp+180,(vlSelf->top__DOT__de__DOT____Vcellinp__m9____pinNumber4),96);
            tracep->chgWData(oldp+183,(vlSymsp->TOP__top__DOT__de__DOT__m9.__PVT__i0__DOT__pair_list[0]),96);
            tracep->chgIData(oldp+186,(vlSymsp->TOP__top__DOT__de__DOT__m9.__PVT__i0__DOT__key_list[0]),32);
            tracep->chgQData(oldp+187,(vlSymsp->TOP__top__DOT__de__DOT__m9.__PVT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+189,(vlSymsp->TOP__top__DOT__de__DOT__m9.__PVT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+191,(vlSymsp->TOP__top__DOT__de__DOT__m9.__PVT__i0__DOT__hit));
            tracep->chgIData(oldp+192,(vlSymsp->TOP__top__DOT__de__DOT__m9.__PVT__i0__DOT__i),32);
            tracep->chgWData(oldp+193,(vlSelf->top__DOT__de__DOT____Vcellinp__m10____pinNumber4),96);
            tracep->chgWData(oldp+196,(vlSymsp->TOP__top__DOT__de__DOT__m10.__PVT__i0__DOT__pair_list[0]),96);
            tracep->chgIData(oldp+199,(vlSymsp->TOP__top__DOT__de__DOT__m10.__PVT__i0__DOT__key_list[0]),32);
            tracep->chgQData(oldp+200,(vlSymsp->TOP__top__DOT__de__DOT__m10.__PVT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+202,(vlSymsp->TOP__top__DOT__de__DOT__m10.__PVT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+204,(vlSymsp->TOP__top__DOT__de__DOT__m10.__PVT__i0__DOT__hit));
            tracep->chgIData(oldp+205,(vlSymsp->TOP__top__DOT__de__DOT__m10.__PVT__i0__DOT__i),32);
            tracep->chgWData(oldp+206,(vlSelf->top__DOT__de__DOT____Vcellinp__m4____pinNumber4),288);
            tracep->chgWData(oldp+215,(vlSymsp->TOP__top__DOT__de__DOT__m4.__PVT__i0__DOT__pair_list[0]),96);
            tracep->chgWData(oldp+218,(vlSymsp->TOP__top__DOT__de__DOT__m4.__PVT__i0__DOT__pair_list[1]),96);
            tracep->chgWData(oldp+221,(vlSymsp->TOP__top__DOT__de__DOT__m4.__PVT__i0__DOT__pair_list[2]),96);
            tracep->chgIData(oldp+224,(vlSymsp->TOP__top__DOT__de__DOT__m4.__PVT__i0__DOT__key_list[0]),32);
            tracep->chgIData(oldp+225,(vlSymsp->TOP__top__DOT__de__DOT__m4.__PVT__i0__DOT__key_list[1]),32);
            tracep->chgIData(oldp+226,(vlSymsp->TOP__top__DOT__de__DOT__m4.__PVT__i0__DOT__key_list[2]),32);
            tracep->chgQData(oldp+227,(vlSymsp->TOP__top__DOT__de__DOT__m4.__PVT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+229,(vlSymsp->TOP__top__DOT__de__DOT__m4.__PVT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+231,(vlSymsp->TOP__top__DOT__de__DOT__m4.__PVT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+233,(vlSymsp->TOP__top__DOT__de__DOT__m4.__PVT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+235,(vlSymsp->TOP__top__DOT__de__DOT__m4.__PVT__i0__DOT__hit));
            tracep->chgIData(oldp+236,(vlSymsp->TOP__top__DOT__de__DOT__m4.__PVT__i0__DOT__i),32);
            tracep->chgWData(oldp+237,(vlSelf->top__DOT__de__DOT____Vcellinp__m5____pinNumber4),288);
            tracep->chgWData(oldp+246,(vlSymsp->TOP__top__DOT__de__DOT__m5.__PVT__i0__DOT__pair_list[0]),96);
            tracep->chgWData(oldp+249,(vlSymsp->TOP__top__DOT__de__DOT__m5.__PVT__i0__DOT__pair_list[1]),96);
            tracep->chgWData(oldp+252,(vlSymsp->TOP__top__DOT__de__DOT__m5.__PVT__i0__DOT__pair_list[2]),96);
            tracep->chgIData(oldp+255,(vlSymsp->TOP__top__DOT__de__DOT__m5.__PVT__i0__DOT__key_list[0]),32);
            tracep->chgIData(oldp+256,(vlSymsp->TOP__top__DOT__de__DOT__m5.__PVT__i0__DOT__key_list[1]),32);
            tracep->chgIData(oldp+257,(vlSymsp->TOP__top__DOT__de__DOT__m5.__PVT__i0__DOT__key_list[2]),32);
            tracep->chgQData(oldp+258,(vlSymsp->TOP__top__DOT__de__DOT__m5.__PVT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+260,(vlSymsp->TOP__top__DOT__de__DOT__m5.__PVT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+262,(vlSymsp->TOP__top__DOT__de__DOT__m5.__PVT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+264,(vlSymsp->TOP__top__DOT__de__DOT__m5.__PVT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+266,(vlSymsp->TOP__top__DOT__de__DOT__m5.__PVT__i0__DOT__hit));
            tracep->chgIData(oldp+267,(vlSymsp->TOP__top__DOT__de__DOT__m5.__PVT__i0__DOT__i),32);
            tracep->chgWData(oldp+268,(vlSelf->top__DOT__de__DOT____Vcellinp__m1____pinNumber4),402);
            tracep->chgWData(oldp+281,(vlSymsp->TOP__top__DOT__de__DOT__m1.__PVT__i0__DOT__pair_list[0]),67);
            tracep->chgWData(oldp+284,(vlSymsp->TOP__top__DOT__de__DOT__m1.__PVT__i0__DOT__pair_list[1]),67);
            tracep->chgWData(oldp+287,(vlSymsp->TOP__top__DOT__de__DOT__m1.__PVT__i0__DOT__pair_list[2]),67);
            tracep->chgWData(oldp+290,(vlSymsp->TOP__top__DOT__de__DOT__m1.__PVT__i0__DOT__pair_list[3]),67);
            tracep->chgWData(oldp+293,(vlSymsp->TOP__top__DOT__de__DOT__m1.__PVT__i0__DOT__pair_list[4]),67);
            tracep->chgWData(oldp+296,(vlSymsp->TOP__top__DOT__de__DOT__m1.__PVT__i0__DOT__pair_list[5]),67);
            tracep->chgCData(oldp+299,(vlSymsp->TOP__top__DOT__de__DOT__m1.__PVT__i0__DOT__key_list[0]),3);
            tracep->chgCData(oldp+300,(vlSymsp->TOP__top__DOT__de__DOT__m1.__PVT__i0__DOT__key_list[1]),3);
            tracep->chgCData(oldp+301,(vlSymsp->TOP__top__DOT__de__DOT__m1.__PVT__i0__DOT__key_list[2]),3);
            tracep->chgCData(oldp+302,(vlSymsp->TOP__top__DOT__de__DOT__m1.__PVT__i0__DOT__key_list[3]),3);
            tracep->chgCData(oldp+303,(vlSymsp->TOP__top__DOT__de__DOT__m1.__PVT__i0__DOT__key_list[4]),3);
            tracep->chgCData(oldp+304,(vlSymsp->TOP__top__DOT__de__DOT__m1.__PVT__i0__DOT__key_list[5]),3);
            tracep->chgQData(oldp+305,(vlSymsp->TOP__top__DOT__de__DOT__m1.__PVT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+307,(vlSymsp->TOP__top__DOT__de__DOT__m1.__PVT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+309,(vlSymsp->TOP__top__DOT__de__DOT__m1.__PVT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+311,(vlSymsp->TOP__top__DOT__de__DOT__m1.__PVT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+313,(vlSymsp->TOP__top__DOT__de__DOT__m1.__PVT__i0__DOT__data_list[4]),64);
            tracep->chgQData(oldp+315,(vlSymsp->TOP__top__DOT__de__DOT__m1.__PVT__i0__DOT__data_list[5]),64);
            tracep->chgQData(oldp+317,(vlSymsp->TOP__top__DOT__de__DOT__m1.__PVT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+319,(vlSymsp->TOP__top__DOT__de__DOT__m1.__PVT__i0__DOT__hit));
            tracep->chgIData(oldp+320,(vlSymsp->TOP__top__DOT__de__DOT__m1.__PVT__i0__DOT__i),32);
            tracep->chgWData(oldp+321,(vlSelf->top__DOT__de__DOT____Vcellinp__m7____pinNumber4),402);
            tracep->chgWData(oldp+334,(vlSymsp->TOP__top__DOT__de__DOT__m7.__PVT__i0__DOT__pair_list[0]),67);
            tracep->chgWData(oldp+337,(vlSymsp->TOP__top__DOT__de__DOT__m7.__PVT__i0__DOT__pair_list[1]),67);
            tracep->chgWData(oldp+340,(vlSymsp->TOP__top__DOT__de__DOT__m7.__PVT__i0__DOT__pair_list[2]),67);
            tracep->chgWData(oldp+343,(vlSymsp->TOP__top__DOT__de__DOT__m7.__PVT__i0__DOT__pair_list[3]),67);
            tracep->chgWData(oldp+346,(vlSymsp->TOP__top__DOT__de__DOT__m7.__PVT__i0__DOT__pair_list[4]),67);
            tracep->chgWData(oldp+349,(vlSymsp->TOP__top__DOT__de__DOT__m7.__PVT__i0__DOT__pair_list[5]),67);
            tracep->chgCData(oldp+352,(vlSymsp->TOP__top__DOT__de__DOT__m7.__PVT__i0__DOT__key_list[0]),3);
            tracep->chgCData(oldp+353,(vlSymsp->TOP__top__DOT__de__DOT__m7.__PVT__i0__DOT__key_list[1]),3);
            tracep->chgCData(oldp+354,(vlSymsp->TOP__top__DOT__de__DOT__m7.__PVT__i0__DOT__key_list[2]),3);
            tracep->chgCData(oldp+355,(vlSymsp->TOP__top__DOT__de__DOT__m7.__PVT__i0__DOT__key_list[3]),3);
            tracep->chgCData(oldp+356,(vlSymsp->TOP__top__DOT__de__DOT__m7.__PVT__i0__DOT__key_list[4]),3);
            tracep->chgCData(oldp+357,(vlSymsp->TOP__top__DOT__de__DOT__m7.__PVT__i0__DOT__key_list[5]),3);
            tracep->chgQData(oldp+358,(vlSymsp->TOP__top__DOT__de__DOT__m7.__PVT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+360,(vlSymsp->TOP__top__DOT__de__DOT__m7.__PVT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+362,(vlSymsp->TOP__top__DOT__de__DOT__m7.__PVT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+364,(vlSymsp->TOP__top__DOT__de__DOT__m7.__PVT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+366,(vlSymsp->TOP__top__DOT__de__DOT__m7.__PVT__i0__DOT__data_list[4]),64);
            tracep->chgQData(oldp+368,(vlSymsp->TOP__top__DOT__de__DOT__m7.__PVT__i0__DOT__data_list[5]),64);
            tracep->chgQData(oldp+370,(vlSymsp->TOP__top__DOT__de__DOT__m7.__PVT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+372,(vlSymsp->TOP__top__DOT__de__DOT__m7.__PVT__i0__DOT__hit));
            tracep->chgIData(oldp+373,(vlSymsp->TOP__top__DOT__de__DOT__m7.__PVT__i0__DOT__i),32);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgQData(oldp+374,(vlSelf->top__DOT__de__DOT__array[0]),64);
            tracep->chgQData(oldp+376,(vlSelf->top__DOT__de__DOT__array[1]),64);
            tracep->chgQData(oldp+378,(vlSelf->top__DOT__de__DOT__array[2]),64);
            tracep->chgQData(oldp+380,(vlSelf->top__DOT__de__DOT__array[3]),64);
            tracep->chgQData(oldp+382,(vlSelf->top__DOT__de__DOT__array[4]),64);
            tracep->chgQData(oldp+384,(vlSelf->top__DOT__de__DOT__array[5]),64);
            tracep->chgQData(oldp+386,(vlSelf->top__DOT__de__DOT__array[6]),64);
            tracep->chgQData(oldp+388,(vlSelf->top__DOT__de__DOT__array[7]),64);
            tracep->chgQData(oldp+390,(vlSelf->top__DOT__de__DOT__array[8]),64);
            tracep->chgQData(oldp+392,(vlSelf->top__DOT__de__DOT__array[9]),64);
            tracep->chgQData(oldp+394,(vlSelf->top__DOT__de__DOT__array[10]),64);
            tracep->chgQData(oldp+396,(vlSelf->top__DOT__de__DOT__array[11]),64);
            tracep->chgQData(oldp+398,(vlSelf->top__DOT__de__DOT__array[12]),64);
            tracep->chgQData(oldp+400,(vlSelf->top__DOT__de__DOT__array[13]),64);
            tracep->chgQData(oldp+402,(vlSelf->top__DOT__de__DOT__array[14]),64);
            tracep->chgQData(oldp+404,(vlSelf->top__DOT__de__DOT__array[15]),64);
            tracep->chgQData(oldp+406,(vlSelf->top__DOT__de__DOT__array[16]),64);
            tracep->chgQData(oldp+408,(vlSelf->top__DOT__de__DOT__array[17]),64);
            tracep->chgQData(oldp+410,(vlSelf->top__DOT__de__DOT__array[18]),64);
            tracep->chgQData(oldp+412,(vlSelf->top__DOT__de__DOT__array[19]),64);
            tracep->chgQData(oldp+414,(vlSelf->top__DOT__de__DOT__array[20]),64);
            tracep->chgQData(oldp+416,(vlSelf->top__DOT__de__DOT__array[21]),64);
            tracep->chgQData(oldp+418,(vlSelf->top__DOT__de__DOT__array[22]),64);
            tracep->chgQData(oldp+420,(vlSelf->top__DOT__de__DOT__array[23]),64);
            tracep->chgQData(oldp+422,(vlSelf->top__DOT__de__DOT__array[24]),64);
            tracep->chgQData(oldp+424,(vlSelf->top__DOT__de__DOT__array[25]),64);
            tracep->chgQData(oldp+426,(vlSelf->top__DOT__de__DOT__array[26]),64);
            tracep->chgQData(oldp+428,(vlSelf->top__DOT__de__DOT__array[27]),64);
            tracep->chgQData(oldp+430,(vlSelf->top__DOT__de__DOT__array[28]),64);
            tracep->chgQData(oldp+432,(vlSelf->top__DOT__de__DOT__array[29]),64);
            tracep->chgQData(oldp+434,(vlSelf->top__DOT__de__DOT__array[30]),64);
            tracep->chgQData(oldp+436,(vlSelf->top__DOT__de__DOT__array[31]),64);
            tracep->chgQData(oldp+438,(vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13[0]),64);
            tracep->chgQData(oldp+440,(vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13[1]),64);
            tracep->chgQData(oldp+442,(vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13[2]),64);
            tracep->chgQData(oldp+444,(vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13[3]),64);
            tracep->chgQData(oldp+446,(vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13[4]),64);
            tracep->chgQData(oldp+448,(vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13[5]),64);
            tracep->chgQData(oldp+450,(vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13[6]),64);
            tracep->chgQData(oldp+452,(vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13[7]),64);
            tracep->chgQData(oldp+454,(vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13[8]),64);
            tracep->chgQData(oldp+456,(vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13[9]),64);
            tracep->chgQData(oldp+458,(vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13[10]),64);
            tracep->chgQData(oldp+460,(vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13[11]),64);
            tracep->chgQData(oldp+462,(vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13[12]),64);
            tracep->chgQData(oldp+464,(vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13[13]),64);
            tracep->chgQData(oldp+466,(vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13[14]),64);
            tracep->chgQData(oldp+468,(vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13[15]),64);
            tracep->chgQData(oldp+470,(vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13[16]),64);
            tracep->chgQData(oldp+472,(vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13[17]),64);
            tracep->chgQData(oldp+474,(vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13[18]),64);
            tracep->chgQData(oldp+476,(vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13[19]),64);
            tracep->chgQData(oldp+478,(vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13[20]),64);
            tracep->chgQData(oldp+480,(vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13[21]),64);
            tracep->chgQData(oldp+482,(vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13[22]),64);
            tracep->chgQData(oldp+484,(vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13[23]),64);
            tracep->chgQData(oldp+486,(vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13[24]),64);
            tracep->chgQData(oldp+488,(vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13[25]),64);
            tracep->chgQData(oldp+490,(vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13[26]),64);
            tracep->chgQData(oldp+492,(vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13[27]),64);
            tracep->chgQData(oldp+494,(vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13[28]),64);
            tracep->chgQData(oldp+496,(vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13[29]),64);
            tracep->chgQData(oldp+498,(vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13[30]),64);
            tracep->chgQData(oldp+500,(vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13[31]),64);
            tracep->chgQData(oldp+502,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[0]),64);
            tracep->chgQData(oldp+504,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[1]),64);
            tracep->chgQData(oldp+506,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[2]),64);
            tracep->chgQData(oldp+508,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[3]),64);
            tracep->chgQData(oldp+510,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[4]),64);
            tracep->chgQData(oldp+512,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[5]),64);
            tracep->chgQData(oldp+514,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[6]),64);
            tracep->chgQData(oldp+516,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[7]),64);
            tracep->chgQData(oldp+518,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[8]),64);
            tracep->chgQData(oldp+520,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[9]),64);
            tracep->chgQData(oldp+522,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[10]),64);
            tracep->chgQData(oldp+524,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[11]),64);
            tracep->chgQData(oldp+526,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[12]),64);
            tracep->chgQData(oldp+528,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[13]),64);
            tracep->chgQData(oldp+530,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[14]),64);
            tracep->chgQData(oldp+532,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[15]),64);
            tracep->chgQData(oldp+534,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[16]),64);
            tracep->chgQData(oldp+536,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[17]),64);
            tracep->chgQData(oldp+538,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[18]),64);
            tracep->chgQData(oldp+540,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[19]),64);
            tracep->chgQData(oldp+542,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[20]),64);
            tracep->chgQData(oldp+544,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[21]),64);
            tracep->chgQData(oldp+546,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[22]),64);
            tracep->chgQData(oldp+548,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[23]),64);
            tracep->chgQData(oldp+550,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[24]),64);
            tracep->chgQData(oldp+552,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[25]),64);
            tracep->chgQData(oldp+554,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[26]),64);
            tracep->chgQData(oldp+556,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[27]),64);
            tracep->chgQData(oldp+558,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[28]),64);
            tracep->chgQData(oldp+560,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[29]),64);
            tracep->chgQData(oldp+562,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[30]),64);
            tracep->chgQData(oldp+564,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[31]),64);
        }
        tracep->chgBit(oldp+566,(vlSelf->clk));
        tracep->chgBit(oldp+567,(vlSelf->rst));
        tracep->chgIData(oldp+568,(vlSelf->inst),32);
        tracep->chgIData(oldp+569,(vlSelf->cpupc),32);
        tracep->chgBit(oldp+570,((0x100073U == vlSelf->inst)));
        tracep->chgIData(oldp+571,((0x100073U == vlSelf->inst)),32);
        tracep->chgQData(oldp+572,((QData)((IData)(vlSelf->cpupc))),64);
        tracep->chgCData(oldp+574,((3U & vlSelf->inst)),2);
        tracep->chgCData(oldp+575,((0x1fU & (vlSelf->inst 
                                             >> 2U))),5);
        tracep->chgCData(oldp+576,((7U & (vlSelf->inst 
                                          >> 0xcU))),3);
        tracep->chgCData(oldp+577,((0x1fU & (vlSelf->inst 
                                             >> 0xfU))),5);
        tracep->chgCData(oldp+578,((0x1fU & (vlSelf->inst 
                                             >> 0x14U))),5);
        tracep->chgCData(oldp+579,((0x1fU & (vlSelf->inst 
                                             >> 7U))),5);
        tracep->chgIData(oldp+580,((0x17U | (0xffffff80U 
                                             & vlSelf->inst))),32);
        tracep->chgIData(oldp+581,((0xfffff000U & vlSelf->inst)),32);
        tracep->chgIData(oldp+582,((0x37U | (0xffffff80U 
                                             & vlSelf->inst))),32);
        tracep->chgQData(oldp+583,(((QData)((IData)(
                                                    (vlSelf->inst 
                                                     >> 0xcU))) 
                                    << 0xcU)),64);
        tracep->chgIData(oldp+585,((0x6fU | (0xffffff80U 
                                             & vlSelf->inst))),32);
        tracep->chgQData(oldp+586,((4ULL + (QData)((IData)(vlSelf->cpupc)))),64);
        tracep->chgIData(oldp+588,(((IData)(4U) + vlSelf->cpupc)),32);
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
