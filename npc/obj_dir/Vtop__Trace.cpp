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
            tracep->chgCData(oldp+0,(vlSelf->top__DOT__i0__DOT__mux1__DOT__i0__DOT__pair_list[0]),4);
            tracep->chgCData(oldp+1,(vlSelf->top__DOT__i0__DOT__mux1__DOT__i0__DOT__pair_list[1]),4);
            tracep->chgCData(oldp+2,(vlSelf->top__DOT__i0__DOT__mux1__DOT__i0__DOT__pair_list[2]),4);
            tracep->chgCData(oldp+3,(vlSelf->top__DOT__i0__DOT__mux1__DOT__i0__DOT__key_list[0]),3);
            tracep->chgCData(oldp+4,(vlSelf->top__DOT__i0__DOT__mux1__DOT__i0__DOT__key_list[1]),3);
            tracep->chgCData(oldp+5,(vlSelf->top__DOT__i0__DOT__mux1__DOT__i0__DOT__key_list[2]),3);
            tracep->chgBit(oldp+6,(vlSelf->top__DOT__i0__DOT__mux1__DOT__i0__DOT__data_list[0]));
            tracep->chgBit(oldp+7,(vlSelf->top__DOT__i0__DOT__mux1__DOT__i0__DOT__data_list[1]));
            tracep->chgBit(oldp+8,(vlSelf->top__DOT__i0__DOT__mux1__DOT__i0__DOT__data_list[2]));
            tracep->chgCData(oldp+9,(vlSelf->top__DOT__i0__DOT__axi_lite_s0__DOT__mux0__DOT__i0__DOT__pair_list[0]),4);
            tracep->chgCData(oldp+10,(vlSelf->top__DOT__i0__DOT__axi_lite_s0__DOT__mux0__DOT__i0__DOT__pair_list[1]),4);
            tracep->chgCData(oldp+11,(vlSelf->top__DOT__i0__DOT__axi_lite_s0__DOT__mux0__DOT__i0__DOT__pair_list[2]),4);
            tracep->chgCData(oldp+12,(vlSelf->top__DOT__i0__DOT__axi_lite_s0__DOT__mux0__DOT__i0__DOT__key_list[0]),3);
            tracep->chgCData(oldp+13,(vlSelf->top__DOT__i0__DOT__axi_lite_s0__DOT__mux0__DOT__i0__DOT__key_list[1]),3);
            tracep->chgCData(oldp+14,(vlSelf->top__DOT__i0__DOT__axi_lite_s0__DOT__mux0__DOT__i0__DOT__key_list[2]),3);
            tracep->chgBit(oldp+15,(vlSelf->top__DOT__i0__DOT__axi_lite_s0__DOT__mux0__DOT__i0__DOT__data_list[0]));
            tracep->chgBit(oldp+16,(vlSelf->top__DOT__i0__DOT__axi_lite_s0__DOT__mux0__DOT__i0__DOT__data_list[1]));
            tracep->chgBit(oldp+17,(vlSelf->top__DOT__i0__DOT__axi_lite_s0__DOT__mux0__DOT__i0__DOT__data_list[2]));
            tracep->chgCData(oldp+18,(vlSelf->top__DOT__mem0__DOT__mux1__DOT__i0__DOT__pair_list[0]),4);
            tracep->chgCData(oldp+19,(vlSelf->top__DOT__mem0__DOT__mux1__DOT__i0__DOT__pair_list[1]),4);
            tracep->chgCData(oldp+20,(vlSelf->top__DOT__mem0__DOT__mux1__DOT__i0__DOT__pair_list[2]),4);
            tracep->chgCData(oldp+21,(vlSelf->top__DOT__mem0__DOT__mux1__DOT__i0__DOT__key_list[0]),3);
            tracep->chgCData(oldp+22,(vlSelf->top__DOT__mem0__DOT__mux1__DOT__i0__DOT__key_list[1]),3);
            tracep->chgCData(oldp+23,(vlSelf->top__DOT__mem0__DOT__mux1__DOT__i0__DOT__key_list[2]),3);
            tracep->chgBit(oldp+24,(vlSelf->top__DOT__mem0__DOT__mux1__DOT__i0__DOT__data_list[0]));
            tracep->chgBit(oldp+25,(vlSelf->top__DOT__mem0__DOT__mux1__DOT__i0__DOT__data_list[1]));
            tracep->chgBit(oldp+26,(vlSelf->top__DOT__mem0__DOT__mux1__DOT__i0__DOT__data_list[2]));
            tracep->chgCData(oldp+27,(vlSelf->top__DOT__mem0__DOT__axi_lite_s2_0__DOT__mux0__DOT__i0__DOT__pair_list[0]),4);
            tracep->chgCData(oldp+28,(vlSelf->top__DOT__mem0__DOT__axi_lite_s2_0__DOT__mux0__DOT__i0__DOT__pair_list[1]),4);
            tracep->chgCData(oldp+29,(vlSelf->top__DOT__mem0__DOT__axi_lite_s2_0__DOT__mux0__DOT__i0__DOT__key_list[0]),3);
            tracep->chgCData(oldp+30,(vlSelf->top__DOT__mem0__DOT__axi_lite_s2_0__DOT__mux0__DOT__i0__DOT__key_list[1]),3);
            tracep->chgBit(oldp+31,(vlSelf->top__DOT__mem0__DOT__axi_lite_s2_0__DOT__mux0__DOT__i0__DOT__data_list[0]));
            tracep->chgBit(oldp+32,(vlSelf->top__DOT__mem0__DOT__axi_lite_s2_0__DOT__mux0__DOT__i0__DOT__data_list[1]));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgQData(oldp+33,(vlSelf->top__DOT__c_rdata),64);
            tracep->chgCData(oldp+35,(vlSelf->top__DOT__sel_nextpc),2);
            tracep->chgQData(oldp+36,(vlSelf->top__DOT__imm),64);
            tracep->chgQData(oldp+38,(vlSelf->top__DOT__src1),64);
            tracep->chgQData(oldp+40,(vlSelf->top__DOT__src2),64);
            tracep->chgSData(oldp+42,(vlSelf->top__DOT__op_d),12);
            tracep->chgCData(oldp+43,(vlSelf->top__DOT__fu_7_d),5);
            tracep->chgCData(oldp+44,(vlSelf->top__DOT__c_raddr),2);
            tracep->chgCData(oldp+45,(vlSelf->top__DOT__e_inst),3);
            tracep->chgCData(oldp+46,(vlSelf->top__DOT__sel_alu_src1),4);
            tracep->chgCData(oldp+47,(vlSelf->top__DOT__sel_alu_src2),3);
            tracep->chgIData(oldp+48,(vlSelf->top__DOT__alu_control),17);
            tracep->chgCData(oldp+49,(vlSelf->top__DOT__sel_rf_res),3);
            tracep->chgBit(oldp+50,(vlSelf->top__DOT__data_ram_wen));
            tracep->chgCData(oldp+51,(vlSelf->top__DOT__alu_equal),3);
            tracep->chgCData(oldp+52,(vlSelf->top__DOT__l_choose),7);
            tracep->chgBit(oldp+53,(vlSelf->top__DOT__w_choose));
            tracep->chgBit(oldp+54,(vlSelf->top__DOT__control_0__DOT__csrrs));
            tracep->chgCData(oldp+55,(((IData)(vlSelf->top__DOT__control_0__DOT__sb)
                                        ? 1U : ((IData)(vlSelf->top__DOT__control_0__DOT__sh)
                                                 ? 3U
                                                 : 
                                                ((IData)(vlSelf->top__DOT__control_0__DOT__sw)
                                                  ? 0xfU
                                                  : 
                                                 ((IData)(vlSelf->top__DOT__control_0__DOT__sd)
                                                   ? 0xffU
                                                   : 0U))))),8);
            tracep->chgQData(oldp+56,(vlSelf->top__DOT__alu_result),64);
            tracep->chgQData(oldp+58,(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__adder_result),64);
            tracep->chgQData(oldp+60,(vlSelf->top__DOT__ram_data),64);
            tracep->chgQData(oldp+62,(vlSelf->top__DOT__wdata),64);
            tracep->chgQData(oldp+64,(vlSelf->top__DOT__i0__DOT__dnpc_0),64);
            tracep->chgBit(oldp+66,((0U == (IData)(vlSelf->top__DOT__i0__DOT__state))));
            tracep->chgBit(oldp+67,(vlSelf->top__DOT__i0__DOT__arready));
            tracep->chgQData(oldp+68,(vlSelf->top__DOT__i0__DOT__rdata),64);
            tracep->chgCData(oldp+70,(vlSelf->top__DOT__i0__DOT__rresp),2);
            tracep->chgBit(oldp+71,(vlSelf->top__DOT__i0__DOT__rvalid));
            tracep->chgBit(oldp+72,(vlSelf->top__DOT__i0__DOT__rready));
            tracep->chgBit(oldp+73,(((IData)(vlSelf->top__DOT__i0__DOT__rvalid) 
                                     & (IData)(vlSelf->top__DOT__i0__DOT__rready))));
            tracep->chgQData(oldp+74,(vlSelf->top__DOT__i0__DOT__r_rdata),64);
            tracep->chgCData(oldp+76,(vlSelf->top__DOT__i0__DOT__state),3);
            tracep->chgWData(oldp+77,(vlSelf->top__DOT__i0__DOT____Vcellinp__mux4____pinNumber3),264);
            tracep->chgWData(oldp+86,(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__pair_list[0]),66);
            tracep->chgWData(oldp+89,(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__pair_list[1]),66);
            tracep->chgWData(oldp+92,(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__pair_list[2]),66);
            tracep->chgWData(oldp+95,(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__pair_list[3]),66);
            tracep->chgCData(oldp+98,(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__key_list[0]),2);
            tracep->chgCData(oldp+99,(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__key_list[1]),2);
            tracep->chgCData(oldp+100,(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__key_list[2]),2);
            tracep->chgCData(oldp+101,(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__key_list[3]),2);
            tracep->chgQData(oldp+102,(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+104,(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+106,(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+108,(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+110,(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+112,(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__hit));
            tracep->chgIData(oldp+113,(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__i),32);
            tracep->chgWData(oldp+114,(vlSelf->top__DOT__i0__DOT____Vcellinp__mux5____pinNumber3),130);
            tracep->chgWData(oldp+119,(vlSelf->top__DOT__i0__DOT__mux5__DOT__i0__DOT__pair_list[0]),65);
            tracep->chgWData(oldp+122,(vlSelf->top__DOT__i0__DOT__mux5__DOT__i0__DOT__pair_list[1]),65);
            tracep->chgBit(oldp+125,(vlSelf->top__DOT__i0__DOT__mux5__DOT__i0__DOT__key_list[0]));
            tracep->chgBit(oldp+126,(vlSelf->top__DOT__i0__DOT__mux5__DOT__i0__DOT__key_list[1]));
            tracep->chgQData(oldp+127,(vlSelf->top__DOT__i0__DOT__mux5__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+129,(vlSelf->top__DOT__i0__DOT__mux5__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+131,(vlSelf->top__DOT__i0__DOT__mux5__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+133,(vlSelf->top__DOT__i0__DOT__mux5__DOT__i0__DOT__hit));
            tracep->chgIData(oldp+134,(vlSelf->top__DOT__i0__DOT__mux5__DOT__i0__DOT__i),32);
            tracep->chgBit(oldp+135,(vlSelf->top__DOT__i0__DOT__mux1__DOT__i0__DOT__lut_out));
            tracep->chgBit(oldp+136,(vlSelf->top__DOT__i0__DOT__mux1__DOT__i0__DOT__hit));
            tracep->chgIData(oldp+137,(vlSelf->top__DOT__i0__DOT__mux1__DOT__i0__DOT__i),32);
            tracep->chgIData(oldp+138,(vlSelf->top__DOT__i0__DOT__axi_lite_s0__DOT__r_araddr),32);
            tracep->chgCData(oldp+139,(vlSelf->top__DOT__i0__DOT__axi_lite_s0__DOT__state),3);
            tracep->chgBit(oldp+140,(vlSelf->top__DOT__i0__DOT__axi_lite_s0__DOT__mux0__DOT__i0__DOT__lut_out));
            tracep->chgBit(oldp+141,(vlSelf->top__DOT__i0__DOT__axi_lite_s0__DOT__mux0__DOT__i0__DOT__hit));
            tracep->chgIData(oldp+142,(vlSelf->top__DOT__i0__DOT__axi_lite_s0__DOT__mux0__DOT__i0__DOT__i),32);
            tracep->chgQData(oldp+143,(vlSelf->top__DOT__id_0__DOT__immi),64);
            tracep->chgQData(oldp+145,(vlSelf->top__DOT__id_0__DOT__immu),64);
            tracep->chgWData(oldp+147,(vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3),760);
            tracep->chgWData(oldp+171,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[0]),76);
            tracep->chgWData(oldp+174,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[1]),76);
            tracep->chgWData(oldp+177,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[2]),76);
            tracep->chgWData(oldp+180,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[3]),76);
            tracep->chgWData(oldp+183,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[4]),76);
            tracep->chgWData(oldp+186,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[5]),76);
            tracep->chgWData(oldp+189,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[6]),76);
            tracep->chgWData(oldp+192,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[7]),76);
            tracep->chgWData(oldp+195,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[8]),76);
            tracep->chgWData(oldp+198,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[9]),76);
            tracep->chgSData(oldp+201,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list[0]),12);
            tracep->chgSData(oldp+202,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list[1]),12);
            tracep->chgSData(oldp+203,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list[2]),12);
            tracep->chgSData(oldp+204,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list[3]),12);
            tracep->chgSData(oldp+205,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list[4]),12);
            tracep->chgSData(oldp+206,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list[5]),12);
            tracep->chgSData(oldp+207,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list[6]),12);
            tracep->chgSData(oldp+208,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list[7]),12);
            tracep->chgSData(oldp+209,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list[8]),12);
            tracep->chgSData(oldp+210,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list[9]),12);
            tracep->chgQData(oldp+211,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+213,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+215,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+217,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+219,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list[4]),64);
            tracep->chgQData(oldp+221,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list[5]),64);
            tracep->chgQData(oldp+223,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list[6]),64);
            tracep->chgQData(oldp+225,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list[7]),64);
            tracep->chgQData(oldp+227,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list[8]),64);
            tracep->chgQData(oldp+229,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list[9]),64);
            tracep->chgQData(oldp+231,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+233,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__hit));
            tracep->chgIData(oldp+234,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__i),32);
            tracep->chgBit(oldp+235,(vlSelf->top__DOT__control_0__DOT__addi));
            tracep->chgBit(oldp+236,(vlSelf->top__DOT__control_0__DOT__csrrw));
            tracep->chgBit(oldp+237,(vlSelf->top__DOT__control_0__DOT__andi));
            tracep->chgBit(oldp+238,(vlSelf->top__DOT__control_0__DOT__xori));
            tracep->chgBit(oldp+239,(vlSelf->top__DOT__control_0__DOT__ori));
            tracep->chgBit(oldp+240,(vlSelf->top__DOT__control_0__DOT__sll));
            tracep->chgBit(oldp+241,(vlSelf->top__DOT__control_0__DOT__srl));
            tracep->chgBit(oldp+242,(vlSelf->top__DOT__control_0__DOT__sra));
            tracep->chgBit(oldp+243,(vlSelf->top__DOT__control_0__DOT__sllw));
            tracep->chgBit(oldp+244,(vlSelf->top__DOT__control_0__DOT__srlw));
            tracep->chgBit(oldp+245,(vlSelf->top__DOT__control_0__DOT__sraw));
            tracep->chgBit(oldp+246,(vlSelf->top__DOT__control_0__DOT__addiw));
            tracep->chgBit(oldp+247,(vlSelf->top__DOT__control_0__DOT__slliw));
            tracep->chgBit(oldp+248,(vlSelf->top__DOT__control_0__DOT__srliw));
            tracep->chgBit(oldp+249,(vlSelf->top__DOT__control_0__DOT__sraiw));
            tracep->chgBit(oldp+250,((1U & ((IData)(vlSelf->top__DOT__op_d) 
                                            >> 1U))));
            tracep->chgBit(oldp+251,((1U & (IData)(vlSelf->top__DOT__op_d))));
            tracep->chgBit(oldp+252,((1U & ((IData)(vlSelf->top__DOT__op_d) 
                                            >> 2U))));
            tracep->chgBit(oldp+253,(vlSelf->top__DOT__control_0__DOT__jalr));
            tracep->chgBit(oldp+254,(vlSelf->top__DOT__control_0__DOT__sd));
            tracep->chgBit(oldp+255,(vlSelf->top__DOT__control_0__DOT__sh));
            tracep->chgBit(oldp+256,(vlSelf->top__DOT__control_0__DOT__sw));
            tracep->chgBit(oldp+257,(vlSelf->top__DOT__control_0__DOT__sb));
            tracep->chgBit(oldp+258,(vlSelf->top__DOT__control_0__DOT__lw));
            tracep->chgBit(oldp+259,(vlSelf->top__DOT__control_0__DOT__lwu));
            tracep->chgBit(oldp+260,(vlSelf->top__DOT__control_0__DOT__lh));
            tracep->chgBit(oldp+261,(vlSelf->top__DOT__control_0__DOT__lhu));
            tracep->chgBit(oldp+262,(vlSelf->top__DOT__control_0__DOT__lb));
            tracep->chgBit(oldp+263,(vlSelf->top__DOT__control_0__DOT__lbu));
            tracep->chgBit(oldp+264,(vlSelf->top__DOT__control_0__DOT__ld));
            tracep->chgBit(oldp+265,(vlSelf->top__DOT__control_0__DOT__addw));
            tracep->chgBit(oldp+266,(vlSelf->top__DOT__control_0__DOT__subw));
            tracep->chgBit(oldp+267,(vlSelf->top__DOT__control_0__DOT__mulw));
            tracep->chgBit(oldp+268,(vlSelf->top__DOT__control_0__DOT__divw));
            tracep->chgBit(oldp+269,(vlSelf->top__DOT__control_0__DOT__divuw));
            tracep->chgBit(oldp+270,(vlSelf->top__DOT__control_0__DOT__remw));
            tracep->chgBit(oldp+271,(vlSelf->top__DOT__control_0__DOT__remuw));
            tracep->chgBit(oldp+272,(vlSelf->top__DOT__control_0__DOT__divu));
            tracep->chgBit(oldp+273,(vlSelf->top__DOT__control_0__DOT__div));
            tracep->chgBit(oldp+274,(vlSelf->top__DOT__control_0__DOT__rem));
            tracep->chgBit(oldp+275,(vlSelf->top__DOT__control_0__DOT__remu));
            tracep->chgBit(oldp+276,(vlSelf->top__DOT__control_0__DOT__Add));
            tracep->chgBit(oldp+277,(vlSelf->top__DOT__control_0__DOT__Mul));
            tracep->chgBit(oldp+278,(vlSelf->top__DOT__control_0__DOT__And));
            tracep->chgBit(oldp+279,(vlSelf->top__DOT__control_0__DOT__Xor));
            tracep->chgBit(oldp+280,(vlSelf->top__DOT__control_0__DOT__Or));
            tracep->chgBit(oldp+281,(vlSelf->top__DOT__control_0__DOT__sltu));
            tracep->chgBit(oldp+282,(vlSelf->top__DOT__control_0__DOT__slt));
            tracep->chgBit(oldp+283,(vlSelf->top__DOT__control_0__DOT__sub));
            tracep->chgBit(oldp+284,(vlSelf->top__DOT__control_0__DOT__sltiu));
            tracep->chgBit(oldp+285,(vlSelf->top__DOT__control_0__DOT__srai));
            tracep->chgBit(oldp+286,(vlSelf->top__DOT__control_0__DOT__slli));
            tracep->chgBit(oldp+287,(vlSelf->top__DOT__control_0__DOT__srli));
            tracep->chgBit(oldp+288,(vlSelf->top__DOT__control_0__DOT__beq));
            tracep->chgBit(oldp+289,(vlSelf->top__DOT__control_0__DOT__bne));
            tracep->chgBit(oldp+290,(vlSelf->top__DOT__control_0__DOT__bge));
            tracep->chgBit(oldp+291,(vlSelf->top__DOT__control_0__DOT__bgeu));
            tracep->chgBit(oldp+292,(vlSelf->top__DOT__control_0__DOT__bltu));
            tracep->chgBit(oldp+293,(vlSelf->top__DOT__control_0__DOT__blt));
            tracep->chgQData(oldp+294,(vlSelf->top__DOT__exe_0__DOT__alu_src1),64);
            tracep->chgQData(oldp+296,(vlSelf->top__DOT__exe_0__DOT__alu_src2),64);
            tracep->chgQData(oldp+298,(vlSelf->top__DOT__exe_0__DOT__c_wdata),64);
            tracep->chgWData(oldp+300,(vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux1____pinNumber3),272);
            tracep->chgWData(oldp+309,(vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__pair_list[0]),68);
            tracep->chgWData(oldp+312,(vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__pair_list[1]),68);
            tracep->chgWData(oldp+315,(vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__pair_list[2]),68);
            tracep->chgWData(oldp+318,(vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__pair_list[3]),68);
            tracep->chgCData(oldp+321,(vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__key_list[0]),4);
            tracep->chgCData(oldp+322,(vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__key_list[1]),4);
            tracep->chgCData(oldp+323,(vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__key_list[2]),4);
            tracep->chgCData(oldp+324,(vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__key_list[3]),4);
            tracep->chgQData(oldp+325,(vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+327,(vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+329,(vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+331,(vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+333,(vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+335,(vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__hit));
            tracep->chgIData(oldp+336,(vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__i),32);
            tracep->chgWData(oldp+337,(vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux2____pinNumber3),201);
            tracep->chgWData(oldp+344,(vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__pair_list[0]),67);
            tracep->chgWData(oldp+347,(vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__pair_list[1]),67);
            tracep->chgWData(oldp+350,(vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__pair_list[2]),67);
            tracep->chgCData(oldp+353,(vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__key_list[0]),3);
            tracep->chgCData(oldp+354,(vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__key_list[1]),3);
            tracep->chgCData(oldp+355,(vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__key_list[2]),3);
            tracep->chgQData(oldp+356,(vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+358,(vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+360,(vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+362,(vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+364,(vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__hit));
            tracep->chgIData(oldp+365,(vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__i),32);
            tracep->chgWData(oldp+366,(vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux3____pinNumber3),130);
            tracep->chgWData(oldp+371,(vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__pair_list[0]),65);
            tracep->chgWData(oldp+374,(vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__pair_list[1]),65);
            tracep->chgBit(oldp+377,(vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__key_list[0]));
            tracep->chgBit(oldp+378,(vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__key_list[1]));
            tracep->chgQData(oldp+379,(vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+381,(vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+383,(vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+385,(vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__hit));
            tracep->chgIData(oldp+386,(vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__i),32);
            tracep->chgQData(oldp+387,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[0]),64);
            tracep->chgQData(oldp+389,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[1]),64);
            tracep->chgQData(oldp+391,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[2]),64);
            tracep->chgQData(oldp+393,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[3]),64);
            tracep->chgQData(oldp+395,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[4]),64);
            tracep->chgQData(oldp+397,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[5]),64);
            tracep->chgQData(oldp+399,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[6]),64);
            tracep->chgQData(oldp+401,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[7]),64);
            tracep->chgQData(oldp+403,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[8]),64);
            tracep->chgQData(oldp+405,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[9]),64);
            tracep->chgQData(oldp+407,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[10]),64);
            tracep->chgQData(oldp+409,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[11]),64);
            tracep->chgQData(oldp+411,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[12]),64);
            tracep->chgQData(oldp+413,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[13]),64);
            tracep->chgQData(oldp+415,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[14]),64);
            tracep->chgQData(oldp+417,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[15]),64);
            tracep->chgQData(oldp+419,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[16]),64);
            tracep->chgQData(oldp+421,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[17]),64);
            tracep->chgQData(oldp+423,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[18]),64);
            tracep->chgQData(oldp+425,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[19]),64);
            tracep->chgQData(oldp+427,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[20]),64);
            tracep->chgQData(oldp+429,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[21]),64);
            tracep->chgQData(oldp+431,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[22]),64);
            tracep->chgQData(oldp+433,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[23]),64);
            tracep->chgQData(oldp+435,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[24]),64);
            tracep->chgQData(oldp+437,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[25]),64);
            tracep->chgQData(oldp+439,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[26]),64);
            tracep->chgQData(oldp+441,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[27]),64);
            tracep->chgQData(oldp+443,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[28]),64);
            tracep->chgQData(oldp+445,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[29]),64);
            tracep->chgQData(oldp+447,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[30]),64);
            tracep->chgQData(oldp+449,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[31]),64);
            tracep->chgQData(oldp+451,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr[0]),64);
            tracep->chgQData(oldp+453,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr[1]),64);
            tracep->chgQData(oldp+455,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr[2]),64);
            tracep->chgQData(oldp+457,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr[3]),64);
            tracep->chgIData(oldp+459,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__i),32);
            tracep->chgBit(oldp+460,((1U & vlSelf->top__DOT__alu_control)));
            tracep->chgBit(oldp+461,((1U & (vlSelf->top__DOT__alu_control 
                                            >> 1U))));
            tracep->chgBit(oldp+462,((1U & (vlSelf->top__DOT__alu_control 
                                            >> 2U))));
            tracep->chgBit(oldp+463,((1U & (vlSelf->top__DOT__alu_control 
                                            >> 3U))));
            tracep->chgBit(oldp+464,((1U & (vlSelf->top__DOT__alu_control 
                                            >> 4U))));
            tracep->chgBit(oldp+465,((1U & (vlSelf->top__DOT__alu_control 
                                            >> 5U))));
            tracep->chgBit(oldp+466,((1U & (vlSelf->top__DOT__alu_control 
                                            >> 6U))));
            tracep->chgBit(oldp+467,((1U & (vlSelf->top__DOT__alu_control 
                                            >> 7U))));
            tracep->chgBit(oldp+468,((1U & (vlSelf->top__DOT__alu_control 
                                            >> 8U))));
            tracep->chgBit(oldp+469,((1U & (vlSelf->top__DOT__alu_control 
                                            >> 9U))));
            tracep->chgBit(oldp+470,((1U & (vlSelf->top__DOT__alu_control 
                                            >> 0xaU))));
            tracep->chgBit(oldp+471,((1U & (vlSelf->top__DOT__alu_control 
                                            >> 0xbU))));
            tracep->chgBit(oldp+472,((1U & (vlSelf->top__DOT__alu_control 
                                            >> 0xcU))));
            tracep->chgBit(oldp+473,((1U & (vlSelf->top__DOT__alu_control 
                                            >> 0xdU))));
            tracep->chgBit(oldp+474,((1U & (vlSelf->top__DOT__alu_control 
                                            >> 0xeU))));
            tracep->chgBit(oldp+475,((1U & (vlSelf->top__DOT__alu_control 
                                            >> 0xfU))));
            tracep->chgBit(oldp+476,((1U & (vlSelf->top__DOT__alu_control 
                                            >> 0x10U))));
            tracep->chgQData(oldp+477,(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__slt_result),64);
            tracep->chgQData(oldp+479,((QData)((IData)(
                                                       (1U 
                                                        & (~ (IData)(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__adder_cout)))))),64);
            tracep->chgQData(oldp+481,((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                                        & vlSelf->top__DOT__exe_0__DOT__alu_src2)),64);
            tracep->chgQData(oldp+483,((~ vlSelf->top__DOT__exe_0__DOT__alu2__DOT__or_result)),64);
            tracep->chgQData(oldp+485,(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__or_result),64);
            tracep->chgQData(oldp+487,((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                                        ^ vlSelf->top__DOT__exe_0__DOT__alu_src2)),64);
            tracep->chgQData(oldp+489,((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                                        << (0x3fU & (IData)(vlSelf->top__DOT__exe_0__DOT__alu_src2)))),64);
            tracep->chgQData(oldp+491,((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                                        >> (0x3fU & (IData)(vlSelf->top__DOT__exe_0__DOT__alu_src2)))),64);
            tracep->chgQData(oldp+493,(VL_SHIFTRS_QQI(64,64,6, vlSelf->top__DOT__exe_0__DOT__alu_src1, 
                                                      (0x3fU 
                                                       & (IData)(vlSelf->top__DOT__exe_0__DOT__alu_src2)))),64);
            tracep->chgQData(oldp+495,((0xfffffffffffff000ULL 
                                        & vlSelf->top__DOT__exe_0__DOT__alu_src2)),64);
            tracep->chgQData(oldp+497,((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                                        * vlSelf->top__DOT__exe_0__DOT__alu_src2)),64);
            tracep->chgQData(oldp+499,(VL_DIV_QQQ(64, vlSelf->top__DOT__exe_0__DOT__alu_src1, vlSelf->top__DOT__exe_0__DOT__alu_src2)),64);
            tracep->chgQData(oldp+501,(VL_DIVS_QQQ(64, vlSelf->top__DOT__exe_0__DOT__alu_src1, vlSelf->top__DOT__exe_0__DOT__alu_src2)),64);
            tracep->chgQData(oldp+503,(VL_MODDIV_QQQ(64, vlSelf->top__DOT__exe_0__DOT__alu_src1, vlSelf->top__DOT__exe_0__DOT__alu_src2)),64);
            tracep->chgQData(oldp+505,(VL_MODDIVS_QQQ(64, vlSelf->top__DOT__exe_0__DOT__alu_src1, vlSelf->top__DOT__exe_0__DOT__alu_src2)),64);
            tracep->chgQData(oldp+507,(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__adder_b),64);
            tracep->chgBit(oldp+509,(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__adder_cin));
            tracep->chgBit(oldp+510,(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__adder_cout));
            tracep->chgQData(oldp+511,(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__alu_result_uw),64);
            tracep->chgQData(oldp+513,((((QData)((IData)(
                                                         (- (IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__exe_0__DOT__alu2__DOT__alu_result_uw 
                                                                                >> 0x1fU))))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__alu_result_uw)))),64);
            tracep->chgWData(oldp+515,(vlSelf->top__DOT__exe_0__DOT__alu2__DOT____Vcellinp__mux1____pinNumber3),130);
            tracep->chgWData(oldp+520,(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__pair_list[0]),65);
            tracep->chgWData(oldp+523,(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__pair_list[1]),65);
            tracep->chgBit(oldp+526,(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__key_list[0]));
            tracep->chgBit(oldp+527,(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__key_list[1]));
            tracep->chgQData(oldp+528,(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+530,(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+532,(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+534,(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__hit));
            tracep->chgIData(oldp+535,(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__i),32);
            tracep->chgQData(oldp+536,(vlSelf->top__DOT__mem0__DOT__reg_rdata),64);
            tracep->chgQData(oldp+538,((((QData)((IData)(
                                                         (- (IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__mem0__DOT__reg_rdata 
                                                                                >> 0x1fU))))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->top__DOT__mem0__DOT__reg_rdata)))),64);
            tracep->chgQData(oldp+540,((QData)((IData)(vlSelf->top__DOT__mem0__DOT__reg_rdata))),64);
            tracep->chgQData(oldp+542,((((- (QData)((IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelf->top__DOT__mem0__DOT__reg_rdata 
                                                                        >> 0xfU)))))) 
                                         << 0x10U) 
                                        | (QData)((IData)(
                                                          (0xffffU 
                                                           & (IData)(vlSelf->top__DOT__mem0__DOT__reg_rdata)))))),64);
            tracep->chgQData(oldp+544,((QData)((IData)(
                                                       (0xffffU 
                                                        & (IData)(vlSelf->top__DOT__mem0__DOT__reg_rdata))))),64);
            tracep->chgQData(oldp+546,((((- (QData)((IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelf->top__DOT__mem0__DOT__reg_rdata 
                                                                        >> 7U)))))) 
                                         << 8U) | (QData)((IData)(
                                                                  (0xffU 
                                                                   & (IData)(vlSelf->top__DOT__mem0__DOT__reg_rdata)))))),64);
            tracep->chgQData(oldp+548,((QData)((IData)(
                                                       (0xffU 
                                                        & (IData)(vlSelf->top__DOT__mem0__DOT__reg_rdata))))),64);
            tracep->chgBit(oldp+550,(vlSelf->top__DOT__mem0__DOT__arvalid));
            tracep->chgBit(oldp+551,(vlSelf->top__DOT__mem0__DOT__arready));
            tracep->chgIData(oldp+552,((IData)(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__adder_result)),32);
            tracep->chgQData(oldp+553,(vlSelf->top__DOT__mem0__DOT__rdata),64);
            tracep->chgCData(oldp+555,(vlSelf->top__DOT__mem0__DOT__rresp),2);
            tracep->chgBit(oldp+556,(vlSelf->top__DOT__mem0__DOT__rvalid));
            tracep->chgBit(oldp+557,(vlSelf->top__DOT__mem0__DOT__rready));
            tracep->chgBit(oldp+558,(vlSelf->top__DOT__mem0__DOT__awvalid));
            tracep->chgBit(oldp+559,((0U == (IData)(vlSelf->top__DOT__mem0__DOT__axi_lite_s2_0__DOT__write_state))));
            tracep->chgBit(oldp+560,(vlSelf->top__DOT__mem0__DOT__wvalid));
            tracep->chgCData(oldp+561,(vlSelf->top__DOT__mem0__DOT__bresp),2);
            tracep->chgBit(oldp+562,(vlSelf->top__DOT__mem0__DOT__bvalid));
            tracep->chgBit(oldp+563,((1U == (IData)(vlSelf->top__DOT__mem0__DOT__write_state))));
            tracep->chgCData(oldp+564,(vlSelf->top__DOT__mem0__DOT__read_state),3);
            tracep->chgCData(oldp+565,(vlSelf->top__DOT__mem0__DOT__write_state),3);
            tracep->chgCData(oldp+566,(vlSelf->top__DOT__mem0__DOT__mem_state),3);
            tracep->chgWData(oldp+567,(vlSelf->top__DOT__mem0__DOT____Vcellinp__mux3____pinNumber3),497);
            tracep->chgWData(oldp+583,(vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__pair_list[0]),71);
            tracep->chgWData(oldp+586,(vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__pair_list[1]),71);
            tracep->chgWData(oldp+589,(vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__pair_list[2]),71);
            tracep->chgWData(oldp+592,(vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__pair_list[3]),71);
            tracep->chgWData(oldp+595,(vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__pair_list[4]),71);
            tracep->chgWData(oldp+598,(vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__pair_list[5]),71);
            tracep->chgWData(oldp+601,(vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__pair_list[6]),71);
            tracep->chgCData(oldp+604,(vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__key_list[0]),7);
            tracep->chgCData(oldp+605,(vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__key_list[1]),7);
            tracep->chgCData(oldp+606,(vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__key_list[2]),7);
            tracep->chgCData(oldp+607,(vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__key_list[3]),7);
            tracep->chgCData(oldp+608,(vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__key_list[4]),7);
            tracep->chgCData(oldp+609,(vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__key_list[5]),7);
            tracep->chgCData(oldp+610,(vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__key_list[6]),7);
            tracep->chgQData(oldp+611,(vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+613,(vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+615,(vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+617,(vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+619,(vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__data_list[4]),64);
            tracep->chgQData(oldp+621,(vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__data_list[5]),64);
            tracep->chgQData(oldp+623,(vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__data_list[6]),64);
            tracep->chgQData(oldp+625,(vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+627,(vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__hit));
            tracep->chgIData(oldp+628,(vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__i),32);
            tracep->chgBit(oldp+629,(vlSelf->top__DOT__mem0__DOT__mux1__DOT__i0__DOT__lut_out));
            tracep->chgBit(oldp+630,(vlSelf->top__DOT__mem0__DOT__mux1__DOT__i0__DOT__hit));
            tracep->chgIData(oldp+631,(vlSelf->top__DOT__mem0__DOT__mux1__DOT__i0__DOT__i),32);
            tracep->chgIData(oldp+632,(vlSelf->top__DOT__mem0__DOT__axi_lite_s2_0__DOT__r_araddr),32);
            tracep->chgCData(oldp+633,(vlSelf->top__DOT__mem0__DOT__axi_lite_s2_0__DOT__state),3);
            tracep->chgCData(oldp+634,(vlSelf->top__DOT__mem0__DOT__axi_lite_s2_0__DOT__write_state),3);
            tracep->chgBit(oldp+635,(vlSelf->top__DOT__mem0__DOT__axi_lite_s2_0__DOT__mux0__DOT__i0__DOT__lut_out));
            tracep->chgBit(oldp+636,(vlSelf->top__DOT__mem0__DOT__axi_lite_s2_0__DOT__mux0__DOT__i0__DOT__hit));
            tracep->chgIData(oldp+637,(vlSelf->top__DOT__mem0__DOT__axi_lite_s2_0__DOT__mux0__DOT__i0__DOT__i),32);
            tracep->chgWData(oldp+638,(vlSelf->top__DOT__wb0__DOT____Vcellinp__mux3____pinNumber3),201);
            tracep->chgWData(oldp+645,(vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__pair_list[0]),67);
            tracep->chgWData(oldp+648,(vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__pair_list[1]),67);
            tracep->chgWData(oldp+651,(vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__pair_list[2]),67);
            tracep->chgCData(oldp+654,(vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__key_list[0]),3);
            tracep->chgCData(oldp+655,(vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__key_list[1]),3);
            tracep->chgCData(oldp+656,(vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__key_list[2]),3);
            tracep->chgQData(oldp+657,(vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+659,(vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+661,(vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+663,(vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+665,(vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__hit));
            tracep->chgIData(oldp+666,(vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__i),32);
        }
        tracep->chgBit(oldp+667,(vlSelf->clk));
        tracep->chgBit(oldp+668,(vlSelf->rst));
        tracep->chgIData(oldp+669,(vlSelf->inst),32);
        tracep->chgQData(oldp+670,(vlSelf->cpupc),64);
        tracep->chgBit(oldp+672,(vlSelf->ebreak));
        tracep->chgBit(oldp+673,(vlSelf->not_have));
        tracep->chgQData(oldp+674,(vlSelf->dnpc),64);
        tracep->chgBit(oldp+676,(vlSelf->inst_finish));
        tracep->chgBit(oldp+677,(vlSelf->mem_finish));
        tracep->chgBit(oldp+678,(vlSelf->inst_update));
        tracep->chgCData(oldp+679,((0x1fU & (vlSelf->inst 
                                             >> 0xfU))),5);
        tracep->chgCData(oldp+680,((0x1fU & (vlSelf->inst 
                                             >> 0x14U))),5);
        tracep->chgCData(oldp+681,((0x1fU & (vlSelf->inst 
                                             >> 7U))),5);
        tracep->chgCData(oldp+682,((0xffU & ((IData)(1U) 
                                             << (7U 
                                                 & (vlSelf->inst 
                                                    >> 0xcU))))),8);
        tracep->chgBit(oldp+683,(((((((((((((((((((
                                                   (((((((((((((((((((((((((((((((((IData)(vlSelf->top__DOT__control_0__DOT__Add) 
                                                                                | (IData)(vlSelf->top__DOT__control_0__DOT__addi)) 
                                                                                | (IData)(vlSelf->top__DOT__control_0__DOT__ld)) 
                                                                                | ((IData)(vlSelf->top__DOT__op_d) 
                                                                                >> 2U)) 
                                                                                | (IData)(vlSelf->top__DOT__control_0__DOT__jalr)) 
                                                                               | (IData)(vlSelf->top__DOT__control_0__DOT__slt)) 
                                                                              | (IData)(vlSelf->top__DOT__control_0__DOT__sltu)) 
                                                                             | (IData)(vlSelf->top__DOT__control_0__DOT__sll)) 
                                                                            | (IData)(vlSelf->top__DOT__control_0__DOT__srl)) 
                                                                           | (IData)(vlSelf->top__DOT__control_0__DOT__sra)) 
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
                                                                | ((IData)(vlSelf->top__DOT__op_d) 
                                                                   >> 1U)) 
                                                               | (IData)(vlSelf->top__DOT__control_0__DOT__sub)) 
                                                              | (IData)(vlSelf->top__DOT__control_0__DOT__sllw)) 
                                                             | (IData)(vlSelf->top__DOT__control_0__DOT__srlw)) 
                                                            | (IData)(vlSelf->top__DOT__control_0__DOT__sraw)) 
                                                           | (IData)(vlSelf->top__DOT__control_0__DOT__addiw)) 
                                                          | (IData)(vlSelf->top__DOT__control_0__DOT__slliw)) 
                                                         | (IData)(vlSelf->top__DOT__control_0__DOT__srliw)) 
                                                        | (IData)(vlSelf->top__DOT__control_0__DOT__sraiw)) 
                                                       | (IData)(vlSelf->top__DOT__control_0__DOT__addw)) 
                                                      | (IData)(vlSelf->top__DOT__control_0__DOT__srli)) 
                                                     | (IData)(vlSelf->top__DOT__control_0__DOT__srai)) 
                                                    | (IData)(vlSelf->top__DOT__control_0__DOT__slli)) 
                                                   | (IData)(vlSelf->top__DOT__control_0__DOT__And)) 
                                                  | (IData)(vlSelf->top__DOT__control_0__DOT__Or)) 
                                                 | (IData)(vlSelf->top__DOT__control_0__DOT__mulw)) 
                                                | (IData)(vlSelf->top__DOT__control_0__DOT__divw)) 
                                               | (IData)(vlSelf->top__DOT__control_0__DOT__remw)) 
                                              | (IData)(vlSelf->top__DOT__op_d)) 
                                             | (IData)(vlSelf->top__DOT__control_0__DOT__subw)) 
                                            | (IData)(vlSelf->top__DOT__control_0__DOT__Mul)) 
                                           | (IData)(vlSelf->top__DOT__control_0__DOT__Xor)) 
                                          | (IData)(vlSelf->top__DOT__control_0__DOT__divu)) 
                                         | (IData)(vlSelf->top__DOT__control_0__DOT__divuw)) 
                                        | (IData)(vlSelf->top__DOT__control_0__DOT__rem)) 
                                       | (IData)(vlSelf->top__DOT__control_0__DOT__div)) 
                                      | (IData)(vlSelf->top__DOT__control_0__DOT__csrrs)) 
                                     | (IData)(vlSelf->top__DOT__control_0__DOT__csrrw)) 
                                    | (IData)(vlSelf->top__DOT__control_0__DOT__remu)) 
                                   | (IData)(vlSelf->top__DOT__control_0__DOT__remuw)) 
                                  & (IData)(vlSelf->mem_finish))));
        tracep->chgBit(oldp+684,((((IData)(vlSelf->top__DOT__control_0__DOT__csrrw) 
                                   | (IData)(vlSelf->top__DOT__control_0__DOT__csrrs)) 
                                  & (IData)(vlSelf->mem_finish))));
        tracep->chgBit(oldp+685,(((IData)(vlSelf->mem_finish) 
                                  & ((IData)(vlSelf->top__DOT__e_inst) 
                                     >> 1U))));
        tracep->chgIData(oldp+686,((IData)(vlSelf->cpupc)),32);
        tracep->chgCData(oldp+687,((0x7fU & vlSelf->inst)),7);
        tracep->chgCData(oldp+688,((7U & (vlSelf->inst 
                                          >> 0xcU))),3);
        tracep->chgCData(oldp+689,((vlSelf->inst >> 0x19U)),7);
        tracep->chgQData(oldp+690,((((- (QData)((IData)(
                                                        (vlSelf->inst 
                                                         >> 0x1fU)))) 
                                     << 0xcU) | (QData)((IData)(
                                                                ((0xfe0U 
                                                                  & (vlSelf->inst 
                                                                     >> 0x14U)) 
                                                                 | (0x1fU 
                                                                    & (vlSelf->inst 
                                                                       >> 7U))))))),64);
        tracep->chgQData(oldp+692,((((- (QData)((IData)(
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
                                                                             >> 7U))))))))),64);
        tracep->chgQData(oldp+694,((((- (QData)((IData)(
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
                                                                              >> 0x14U))))))))),64);
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
    }
}
