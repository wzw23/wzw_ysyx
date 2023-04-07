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
            tracep->chgCData(oldp+0,(vlSelf->top__DOT__i0__DOT__mux0__DOT__i0__DOT__pair_list[0]),4);
            tracep->chgCData(oldp+1,(vlSelf->top__DOT__i0__DOT__mux0__DOT__i0__DOT__pair_list[1]),4);
            tracep->chgCData(oldp+2,(vlSelf->top__DOT__i0__DOT__mux0__DOT__i0__DOT__pair_list[2]),4);
            tracep->chgCData(oldp+3,(vlSelf->top__DOT__i0__DOT__mux0__DOT__i0__DOT__key_list[0]),3);
            tracep->chgCData(oldp+4,(vlSelf->top__DOT__i0__DOT__mux0__DOT__i0__DOT__key_list[1]),3);
            tracep->chgCData(oldp+5,(vlSelf->top__DOT__i0__DOT__mux0__DOT__i0__DOT__key_list[2]),3);
            tracep->chgBit(oldp+6,(vlSelf->top__DOT__i0__DOT__mux0__DOT__i0__DOT__data_list[0]));
            tracep->chgBit(oldp+7,(vlSelf->top__DOT__i0__DOT__mux0__DOT__i0__DOT__data_list[1]));
            tracep->chgBit(oldp+8,(vlSelf->top__DOT__i0__DOT__mux0__DOT__i0__DOT__data_list[2]));
            tracep->chgCData(oldp+9,(vlSelf->top__DOT__i0__DOT__mux1__DOT__i0__DOT__pair_list[0]),4);
            tracep->chgCData(oldp+10,(vlSelf->top__DOT__i0__DOT__mux1__DOT__i0__DOT__pair_list[1]),4);
            tracep->chgCData(oldp+11,(vlSelf->top__DOT__i0__DOT__mux1__DOT__i0__DOT__pair_list[2]),4);
            tracep->chgCData(oldp+12,(vlSelf->top__DOT__i0__DOT__mux1__DOT__i0__DOT__key_list[0]),3);
            tracep->chgCData(oldp+13,(vlSelf->top__DOT__i0__DOT__mux1__DOT__i0__DOT__key_list[1]),3);
            tracep->chgCData(oldp+14,(vlSelf->top__DOT__i0__DOT__mux1__DOT__i0__DOT__key_list[2]),3);
            tracep->chgBit(oldp+15,(vlSelf->top__DOT__i0__DOT__mux1__DOT__i0__DOT__data_list[0]));
            tracep->chgBit(oldp+16,(vlSelf->top__DOT__i0__DOT__mux1__DOT__i0__DOT__data_list[1]));
            tracep->chgBit(oldp+17,(vlSelf->top__DOT__i0__DOT__mux1__DOT__i0__DOT__data_list[2]));
            tracep->chgCData(oldp+18,(vlSelf->top__DOT__i0__DOT__axi_lite_s0__DOT__mux0__DOT__i0__DOT__pair_list[0]),4);
            tracep->chgCData(oldp+19,(vlSelf->top__DOT__i0__DOT__axi_lite_s0__DOT__mux0__DOT__i0__DOT__pair_list[1]),4);
            tracep->chgCData(oldp+20,(vlSelf->top__DOT__i0__DOT__axi_lite_s0__DOT__mux0__DOT__i0__DOT__key_list[0]),3);
            tracep->chgCData(oldp+21,(vlSelf->top__DOT__i0__DOT__axi_lite_s0__DOT__mux0__DOT__i0__DOT__key_list[1]),3);
            tracep->chgBit(oldp+22,(vlSelf->top__DOT__i0__DOT__axi_lite_s0__DOT__mux0__DOT__i0__DOT__data_list[0]));
            tracep->chgBit(oldp+23,(vlSelf->top__DOT__i0__DOT__axi_lite_s0__DOT__mux0__DOT__i0__DOT__data_list[1]));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgQData(oldp+24,(vlSelf->top__DOT__c_rdata),64);
            tracep->chgCData(oldp+26,(vlSelf->top__DOT__sel_nextpc),2);
            tracep->chgQData(oldp+27,(vlSelf->top__DOT__imm),64);
            tracep->chgQData(oldp+29,(vlSelf->top__DOT__src1),64);
            tracep->chgSData(oldp+31,(vlSelf->top__DOT__op_d),12);
            tracep->chgCData(oldp+32,(vlSelf->top__DOT__fu_7_d),5);
            tracep->chgCData(oldp+33,(vlSelf->top__DOT__c_raddr),2);
            tracep->chgCData(oldp+34,(vlSelf->top__DOT__e_inst),3);
            tracep->chgCData(oldp+35,(vlSelf->top__DOT__sel_alu_src1),4);
            tracep->chgCData(oldp+36,(vlSelf->top__DOT__sel_alu_src2),3);
            tracep->chgIData(oldp+37,(vlSelf->top__DOT__alu_control),17);
            tracep->chgCData(oldp+38,(vlSelf->top__DOT__sel_rf_res),3);
            tracep->chgCData(oldp+39,(vlSelf->top__DOT__alu_equal),3);
            tracep->chgCData(oldp+40,(vlSelf->top__DOT__l_choose),7);
            tracep->chgBit(oldp+41,(vlSelf->top__DOT__w_choose));
            tracep->chgBit(oldp+42,(vlSelf->top__DOT__control_0__DOT__csrrs));
            tracep->chgCData(oldp+43,(((IData)(vlSelf->top__DOT__control_0__DOT__sb)
                                        ? 1U : ((IData)(vlSelf->top__DOT__control_0__DOT__sh)
                                                 ? 3U
                                                 : 
                                                ((IData)(vlSelf->top__DOT__control_0__DOT__sw)
                                                  ? 0xfU
                                                  : 
                                                 ((IData)(vlSelf->top__DOT__control_0__DOT__sd)
                                                   ? 0xffU
                                                   : 0U))))),8);
            tracep->chgQData(oldp+44,(vlSelf->top__DOT__alu_result),64);
            tracep->chgQData(oldp+46,(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__adder_result),64);
            tracep->chgQData(oldp+48,(vlSelf->top__DOT__i0__DOT__dnpc_0),64);
            tracep->chgBit(oldp+50,(vlSelf->top__DOT__i0__DOT__arvalid));
            tracep->chgBit(oldp+51,(vlSelf->top__DOT__i0__DOT__arready));
            tracep->chgQData(oldp+52,(vlSelf->top__DOT__i0__DOT__rdata),64);
            tracep->chgCData(oldp+54,(vlSelf->top__DOT__i0__DOT__rresp),2);
            tracep->chgBit(oldp+55,(vlSelf->top__DOT__i0__DOT__rvalid));
            tracep->chgBit(oldp+56,(vlSelf->top__DOT__i0__DOT__rready));
            tracep->chgBit(oldp+57,(((IData)(vlSelf->top__DOT__i0__DOT__rvalid) 
                                     & (IData)(vlSelf->top__DOT__i0__DOT__rready))));
            tracep->chgQData(oldp+58,(vlSelf->top__DOT__i0__DOT__r_rdata),64);
            tracep->chgCData(oldp+60,(vlSelf->top__DOT__i0__DOT__state),3);
            tracep->chgWData(oldp+61,(vlSelf->top__DOT__i0__DOT____Vcellinp__mux4____pinNumber3),264);
            tracep->chgWData(oldp+70,(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__pair_list[0]),66);
            tracep->chgWData(oldp+73,(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__pair_list[1]),66);
            tracep->chgWData(oldp+76,(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__pair_list[2]),66);
            tracep->chgWData(oldp+79,(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__pair_list[3]),66);
            tracep->chgCData(oldp+82,(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__key_list[0]),2);
            tracep->chgCData(oldp+83,(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__key_list[1]),2);
            tracep->chgCData(oldp+84,(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__key_list[2]),2);
            tracep->chgCData(oldp+85,(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__key_list[3]),2);
            tracep->chgQData(oldp+86,(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+88,(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+90,(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+92,(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+94,(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+96,(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__hit));
            tracep->chgIData(oldp+97,(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__i),32);
            tracep->chgWData(oldp+98,(vlSelf->top__DOT__i0__DOT____Vcellinp__mux5____pinNumber3),130);
            tracep->chgWData(oldp+103,(vlSelf->top__DOT__i0__DOT__mux5__DOT__i0__DOT__pair_list[0]),65);
            tracep->chgWData(oldp+106,(vlSelf->top__DOT__i0__DOT__mux5__DOT__i0__DOT__pair_list[1]),65);
            tracep->chgBit(oldp+109,(vlSelf->top__DOT__i0__DOT__mux5__DOT__i0__DOT__key_list[0]));
            tracep->chgBit(oldp+110,(vlSelf->top__DOT__i0__DOT__mux5__DOT__i0__DOT__key_list[1]));
            tracep->chgQData(oldp+111,(vlSelf->top__DOT__i0__DOT__mux5__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+113,(vlSelf->top__DOT__i0__DOT__mux5__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+115,(vlSelf->top__DOT__i0__DOT__mux5__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+117,(vlSelf->top__DOT__i0__DOT__mux5__DOT__i0__DOT__hit));
            tracep->chgIData(oldp+118,(vlSelf->top__DOT__i0__DOT__mux5__DOT__i0__DOT__i),32);
            tracep->chgBit(oldp+119,(vlSelf->top__DOT__i0__DOT__mux0__DOT__i0__DOT__lut_out));
            tracep->chgBit(oldp+120,(vlSelf->top__DOT__i0__DOT__mux0__DOT__i0__DOT__hit));
            tracep->chgIData(oldp+121,(vlSelf->top__DOT__i0__DOT__mux0__DOT__i0__DOT__i),32);
            tracep->chgBit(oldp+122,(vlSelf->top__DOT__i0__DOT__mux1__DOT__i0__DOT__lut_out));
            tracep->chgBit(oldp+123,(vlSelf->top__DOT__i0__DOT__mux1__DOT__i0__DOT__hit));
            tracep->chgIData(oldp+124,(vlSelf->top__DOT__i0__DOT__mux1__DOT__i0__DOT__i),32);
            tracep->chgIData(oldp+125,(vlSelf->top__DOT__i0__DOT__axi_lite_s0__DOT__r_araddr),32);
            tracep->chgCData(oldp+126,(vlSelf->top__DOT__i0__DOT__axi_lite_s0__DOT__state),3);
            tracep->chgBit(oldp+127,(vlSelf->top__DOT__i0__DOT__axi_lite_s0__DOT__mux0__DOT__i0__DOT__lut_out));
            tracep->chgBit(oldp+128,(vlSelf->top__DOT__i0__DOT__axi_lite_s0__DOT__mux0__DOT__i0__DOT__hit));
            tracep->chgIData(oldp+129,(vlSelf->top__DOT__i0__DOT__axi_lite_s0__DOT__mux0__DOT__i0__DOT__i),32);
            tracep->chgQData(oldp+130,(vlSelf->top__DOT__id_0__DOT__immi),64);
            tracep->chgQData(oldp+132,(vlSelf->top__DOT__id_0__DOT__immu),64);
            tracep->chgWData(oldp+134,(vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3),760);
            tracep->chgWData(oldp+158,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[0]),76);
            tracep->chgWData(oldp+161,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[1]),76);
            tracep->chgWData(oldp+164,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[2]),76);
            tracep->chgWData(oldp+167,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[3]),76);
            tracep->chgWData(oldp+170,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[4]),76);
            tracep->chgWData(oldp+173,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[5]),76);
            tracep->chgWData(oldp+176,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[6]),76);
            tracep->chgWData(oldp+179,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[7]),76);
            tracep->chgWData(oldp+182,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[8]),76);
            tracep->chgWData(oldp+185,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[9]),76);
            tracep->chgSData(oldp+188,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list[0]),12);
            tracep->chgSData(oldp+189,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list[1]),12);
            tracep->chgSData(oldp+190,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list[2]),12);
            tracep->chgSData(oldp+191,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list[3]),12);
            tracep->chgSData(oldp+192,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list[4]),12);
            tracep->chgSData(oldp+193,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list[5]),12);
            tracep->chgSData(oldp+194,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list[6]),12);
            tracep->chgSData(oldp+195,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list[7]),12);
            tracep->chgSData(oldp+196,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list[8]),12);
            tracep->chgSData(oldp+197,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list[9]),12);
            tracep->chgQData(oldp+198,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+200,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+202,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+204,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+206,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list[4]),64);
            tracep->chgQData(oldp+208,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list[5]),64);
            tracep->chgQData(oldp+210,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list[6]),64);
            tracep->chgQData(oldp+212,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list[7]),64);
            tracep->chgQData(oldp+214,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list[8]),64);
            tracep->chgQData(oldp+216,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list[9]),64);
            tracep->chgQData(oldp+218,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+220,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__hit));
            tracep->chgIData(oldp+221,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__i),32);
            tracep->chgBit(oldp+222,(vlSelf->top__DOT__control_0__DOT__addi));
            tracep->chgBit(oldp+223,(vlSelf->top__DOT__control_0__DOT__csrrw));
            tracep->chgBit(oldp+224,(vlSelf->top__DOT__control_0__DOT__andi));
            tracep->chgBit(oldp+225,(vlSelf->top__DOT__control_0__DOT__xori));
            tracep->chgBit(oldp+226,(vlSelf->top__DOT__control_0__DOT__ori));
            tracep->chgBit(oldp+227,(vlSelf->top__DOT__control_0__DOT__sll));
            tracep->chgBit(oldp+228,(vlSelf->top__DOT__control_0__DOT__srl));
            tracep->chgBit(oldp+229,(vlSelf->top__DOT__control_0__DOT__sra));
            tracep->chgBit(oldp+230,(vlSelf->top__DOT__control_0__DOT__sllw));
            tracep->chgBit(oldp+231,(vlSelf->top__DOT__control_0__DOT__srlw));
            tracep->chgBit(oldp+232,(vlSelf->top__DOT__control_0__DOT__sraw));
            tracep->chgBit(oldp+233,(vlSelf->top__DOT__control_0__DOT__addiw));
            tracep->chgBit(oldp+234,(vlSelf->top__DOT__control_0__DOT__slliw));
            tracep->chgBit(oldp+235,(vlSelf->top__DOT__control_0__DOT__srliw));
            tracep->chgBit(oldp+236,(vlSelf->top__DOT__control_0__DOT__sraiw));
            tracep->chgBit(oldp+237,((1U & ((IData)(vlSelf->top__DOT__op_d) 
                                            >> 1U))));
            tracep->chgBit(oldp+238,((1U & (IData)(vlSelf->top__DOT__op_d))));
            tracep->chgBit(oldp+239,((1U & ((IData)(vlSelf->top__DOT__op_d) 
                                            >> 2U))));
            tracep->chgBit(oldp+240,(vlSelf->top__DOT__control_0__DOT__jalr));
            tracep->chgBit(oldp+241,(vlSelf->top__DOT__control_0__DOT__sd));
            tracep->chgBit(oldp+242,(vlSelf->top__DOT__control_0__DOT__sh));
            tracep->chgBit(oldp+243,(vlSelf->top__DOT__control_0__DOT__sw));
            tracep->chgBit(oldp+244,(vlSelf->top__DOT__control_0__DOT__sb));
            tracep->chgBit(oldp+245,(vlSelf->top__DOT__control_0__DOT__lw));
            tracep->chgBit(oldp+246,(vlSelf->top__DOT__control_0__DOT__lwu));
            tracep->chgBit(oldp+247,(vlSelf->top__DOT__control_0__DOT__lh));
            tracep->chgBit(oldp+248,(vlSelf->top__DOT__control_0__DOT__lhu));
            tracep->chgBit(oldp+249,(vlSelf->top__DOT__control_0__DOT__lb));
            tracep->chgBit(oldp+250,(vlSelf->top__DOT__control_0__DOT__lbu));
            tracep->chgBit(oldp+251,(vlSelf->top__DOT__control_0__DOT__ld));
            tracep->chgBit(oldp+252,(vlSelf->top__DOT__control_0__DOT__addw));
            tracep->chgBit(oldp+253,(vlSelf->top__DOT__control_0__DOT__subw));
            tracep->chgBit(oldp+254,(vlSelf->top__DOT__control_0__DOT__mulw));
            tracep->chgBit(oldp+255,(vlSelf->top__DOT__control_0__DOT__divw));
            tracep->chgBit(oldp+256,(vlSelf->top__DOT__control_0__DOT__divuw));
            tracep->chgBit(oldp+257,(vlSelf->top__DOT__control_0__DOT__remw));
            tracep->chgBit(oldp+258,(vlSelf->top__DOT__control_0__DOT__remuw));
            tracep->chgBit(oldp+259,(vlSelf->top__DOT__control_0__DOT__divu));
            tracep->chgBit(oldp+260,(vlSelf->top__DOT__control_0__DOT__div));
            tracep->chgBit(oldp+261,(vlSelf->top__DOT__control_0__DOT__rem));
            tracep->chgBit(oldp+262,(vlSelf->top__DOT__control_0__DOT__remu));
            tracep->chgBit(oldp+263,(vlSelf->top__DOT__control_0__DOT__Add));
            tracep->chgBit(oldp+264,(vlSelf->top__DOT__control_0__DOT__Mul));
            tracep->chgBit(oldp+265,(vlSelf->top__DOT__control_0__DOT__And));
            tracep->chgBit(oldp+266,(vlSelf->top__DOT__control_0__DOT__Xor));
            tracep->chgBit(oldp+267,(vlSelf->top__DOT__control_0__DOT__Or));
            tracep->chgBit(oldp+268,(vlSelf->top__DOT__control_0__DOT__sltu));
            tracep->chgBit(oldp+269,(vlSelf->top__DOT__control_0__DOT__slt));
            tracep->chgBit(oldp+270,(vlSelf->top__DOT__control_0__DOT__sub));
            tracep->chgBit(oldp+271,(vlSelf->top__DOT__control_0__DOT__sltiu));
            tracep->chgBit(oldp+272,(vlSelf->top__DOT__control_0__DOT__srai));
            tracep->chgBit(oldp+273,(vlSelf->top__DOT__control_0__DOT__slli));
            tracep->chgBit(oldp+274,(vlSelf->top__DOT__control_0__DOT__srli));
            tracep->chgBit(oldp+275,(vlSelf->top__DOT__control_0__DOT__beq));
            tracep->chgBit(oldp+276,(vlSelf->top__DOT__control_0__DOT__bne));
            tracep->chgBit(oldp+277,(vlSelf->top__DOT__control_0__DOT__bge));
            tracep->chgBit(oldp+278,(vlSelf->top__DOT__control_0__DOT__bgeu));
            tracep->chgBit(oldp+279,(vlSelf->top__DOT__control_0__DOT__bltu));
            tracep->chgBit(oldp+280,(vlSelf->top__DOT__control_0__DOT__blt));
            tracep->chgQData(oldp+281,(vlSelf->top__DOT__exe_0__DOT__alu_src1),64);
            tracep->chgQData(oldp+283,(vlSelf->top__DOT__exe_0__DOT__alu_src2),64);
            tracep->chgQData(oldp+285,(vlSelf->top__DOT__exe_0__DOT__c_wdata),64);
            tracep->chgWData(oldp+287,(vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux1____pinNumber3),272);
            tracep->chgWData(oldp+296,(vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__pair_list[0]),68);
            tracep->chgWData(oldp+299,(vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__pair_list[1]),68);
            tracep->chgWData(oldp+302,(vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__pair_list[2]),68);
            tracep->chgWData(oldp+305,(vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__pair_list[3]),68);
            tracep->chgCData(oldp+308,(vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__key_list[0]),4);
            tracep->chgCData(oldp+309,(vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__key_list[1]),4);
            tracep->chgCData(oldp+310,(vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__key_list[2]),4);
            tracep->chgCData(oldp+311,(vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__key_list[3]),4);
            tracep->chgQData(oldp+312,(vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+314,(vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+316,(vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+318,(vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+320,(vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+322,(vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__hit));
            tracep->chgIData(oldp+323,(vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__i),32);
            tracep->chgWData(oldp+324,(vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux2____pinNumber3),201);
            tracep->chgWData(oldp+331,(vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__pair_list[0]),67);
            tracep->chgWData(oldp+334,(vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__pair_list[1]),67);
            tracep->chgWData(oldp+337,(vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__pair_list[2]),67);
            tracep->chgCData(oldp+340,(vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__key_list[0]),3);
            tracep->chgCData(oldp+341,(vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__key_list[1]),3);
            tracep->chgCData(oldp+342,(vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__key_list[2]),3);
            tracep->chgQData(oldp+343,(vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+345,(vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+347,(vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+349,(vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+351,(vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__hit));
            tracep->chgIData(oldp+352,(vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__i),32);
            tracep->chgWData(oldp+353,(vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux3____pinNumber3),130);
            tracep->chgWData(oldp+358,(vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__pair_list[0]),65);
            tracep->chgWData(oldp+361,(vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__pair_list[1]),65);
            tracep->chgBit(oldp+364,(vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__key_list[0]));
            tracep->chgBit(oldp+365,(vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__key_list[1]));
            tracep->chgQData(oldp+366,(vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+368,(vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+370,(vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+372,(vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__hit));
            tracep->chgIData(oldp+373,(vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__i),32);
            tracep->chgQData(oldp+374,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[0]),64);
            tracep->chgQData(oldp+376,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[1]),64);
            tracep->chgQData(oldp+378,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[2]),64);
            tracep->chgQData(oldp+380,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[3]),64);
            tracep->chgQData(oldp+382,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[4]),64);
            tracep->chgQData(oldp+384,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[5]),64);
            tracep->chgQData(oldp+386,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[6]),64);
            tracep->chgQData(oldp+388,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[7]),64);
            tracep->chgQData(oldp+390,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[8]),64);
            tracep->chgQData(oldp+392,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[9]),64);
            tracep->chgQData(oldp+394,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[10]),64);
            tracep->chgQData(oldp+396,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[11]),64);
            tracep->chgQData(oldp+398,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[12]),64);
            tracep->chgQData(oldp+400,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[13]),64);
            tracep->chgQData(oldp+402,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[14]),64);
            tracep->chgQData(oldp+404,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[15]),64);
            tracep->chgQData(oldp+406,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[16]),64);
            tracep->chgQData(oldp+408,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[17]),64);
            tracep->chgQData(oldp+410,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[18]),64);
            tracep->chgQData(oldp+412,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[19]),64);
            tracep->chgQData(oldp+414,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[20]),64);
            tracep->chgQData(oldp+416,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[21]),64);
            tracep->chgQData(oldp+418,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[22]),64);
            tracep->chgQData(oldp+420,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[23]),64);
            tracep->chgQData(oldp+422,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[24]),64);
            tracep->chgQData(oldp+424,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[25]),64);
            tracep->chgQData(oldp+426,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[26]),64);
            tracep->chgQData(oldp+428,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[27]),64);
            tracep->chgQData(oldp+430,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[28]),64);
            tracep->chgQData(oldp+432,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[29]),64);
            tracep->chgQData(oldp+434,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[30]),64);
            tracep->chgQData(oldp+436,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[31]),64);
            tracep->chgQData(oldp+438,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr[0]),64);
            tracep->chgQData(oldp+440,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr[1]),64);
            tracep->chgQData(oldp+442,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr[2]),64);
            tracep->chgQData(oldp+444,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr[3]),64);
            tracep->chgIData(oldp+446,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__i),32);
            tracep->chgBit(oldp+447,((1U & vlSelf->top__DOT__alu_control)));
            tracep->chgBit(oldp+448,((1U & (vlSelf->top__DOT__alu_control 
                                            >> 1U))));
            tracep->chgBit(oldp+449,((1U & (vlSelf->top__DOT__alu_control 
                                            >> 2U))));
            tracep->chgBit(oldp+450,((1U & (vlSelf->top__DOT__alu_control 
                                            >> 3U))));
            tracep->chgBit(oldp+451,((1U & (vlSelf->top__DOT__alu_control 
                                            >> 4U))));
            tracep->chgBit(oldp+452,((1U & (vlSelf->top__DOT__alu_control 
                                            >> 5U))));
            tracep->chgBit(oldp+453,((1U & (vlSelf->top__DOT__alu_control 
                                            >> 6U))));
            tracep->chgBit(oldp+454,((1U & (vlSelf->top__DOT__alu_control 
                                            >> 7U))));
            tracep->chgBit(oldp+455,((1U & (vlSelf->top__DOT__alu_control 
                                            >> 8U))));
            tracep->chgBit(oldp+456,((1U & (vlSelf->top__DOT__alu_control 
                                            >> 9U))));
            tracep->chgBit(oldp+457,((1U & (vlSelf->top__DOT__alu_control 
                                            >> 0xaU))));
            tracep->chgBit(oldp+458,((1U & (vlSelf->top__DOT__alu_control 
                                            >> 0xbU))));
            tracep->chgBit(oldp+459,((1U & (vlSelf->top__DOT__alu_control 
                                            >> 0xcU))));
            tracep->chgBit(oldp+460,((1U & (vlSelf->top__DOT__alu_control 
                                            >> 0xdU))));
            tracep->chgBit(oldp+461,((1U & (vlSelf->top__DOT__alu_control 
                                            >> 0xeU))));
            tracep->chgBit(oldp+462,((1U & (vlSelf->top__DOT__alu_control 
                                            >> 0xfU))));
            tracep->chgBit(oldp+463,((1U & (vlSelf->top__DOT__alu_control 
                                            >> 0x10U))));
            tracep->chgQData(oldp+464,(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__slt_result),64);
            tracep->chgQData(oldp+466,((QData)((IData)(
                                                       (1U 
                                                        & (~ (IData)(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__adder_cout)))))),64);
            tracep->chgQData(oldp+468,((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                                        & vlSelf->top__DOT__exe_0__DOT__alu_src2)),64);
            tracep->chgQData(oldp+470,((~ vlSelf->top__DOT__exe_0__DOT__alu2__DOT__or_result)),64);
            tracep->chgQData(oldp+472,(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__or_result),64);
            tracep->chgQData(oldp+474,((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                                        ^ vlSelf->top__DOT__exe_0__DOT__alu_src2)),64);
            tracep->chgQData(oldp+476,((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                                        << (0x3fU & (IData)(vlSelf->top__DOT__exe_0__DOT__alu_src2)))),64);
            tracep->chgQData(oldp+478,((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                                        >> (0x3fU & (IData)(vlSelf->top__DOT__exe_0__DOT__alu_src2)))),64);
            tracep->chgQData(oldp+480,(VL_SHIFTRS_QQI(64,64,6, vlSelf->top__DOT__exe_0__DOT__alu_src1, 
                                                      (0x3fU 
                                                       & (IData)(vlSelf->top__DOT__exe_0__DOT__alu_src2)))),64);
            tracep->chgQData(oldp+482,((0xfffffffffffff000ULL 
                                        & vlSelf->top__DOT__exe_0__DOT__alu_src2)),64);
            tracep->chgQData(oldp+484,((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                                        * vlSelf->top__DOT__exe_0__DOT__alu_src2)),64);
            tracep->chgQData(oldp+486,(VL_DIV_QQQ(64, vlSelf->top__DOT__exe_0__DOT__alu_src1, vlSelf->top__DOT__exe_0__DOT__alu_src2)),64);
            tracep->chgQData(oldp+488,(VL_DIVS_QQQ(64, vlSelf->top__DOT__exe_0__DOT__alu_src1, vlSelf->top__DOT__exe_0__DOT__alu_src2)),64);
            tracep->chgQData(oldp+490,(VL_MODDIV_QQQ(64, vlSelf->top__DOT__exe_0__DOT__alu_src1, vlSelf->top__DOT__exe_0__DOT__alu_src2)),64);
            tracep->chgQData(oldp+492,(VL_MODDIVS_QQQ(64, vlSelf->top__DOT__exe_0__DOT__alu_src1, vlSelf->top__DOT__exe_0__DOT__alu_src2)),64);
            tracep->chgQData(oldp+494,(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__adder_b),64);
            tracep->chgBit(oldp+496,(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__adder_cin));
            tracep->chgBit(oldp+497,(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__adder_cout));
            tracep->chgQData(oldp+498,(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__alu_result_uw),64);
            tracep->chgQData(oldp+500,((((QData)((IData)(
                                                         (- (IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__exe_0__DOT__alu2__DOT__alu_result_uw 
                                                                                >> 0x1fU))))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__alu_result_uw)))),64);
            tracep->chgWData(oldp+502,(vlSelf->top__DOT__exe_0__DOT__alu2__DOT____Vcellinp__mux1____pinNumber3),130);
            tracep->chgWData(oldp+507,(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__pair_list[0]),65);
            tracep->chgWData(oldp+510,(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__pair_list[1]),65);
            tracep->chgBit(oldp+513,(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__key_list[0]));
            tracep->chgBit(oldp+514,(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__key_list[1]));
            tracep->chgQData(oldp+515,(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+517,(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+519,(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+521,(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__hit));
            tracep->chgIData(oldp+522,(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__i),32);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgQData(oldp+523,(vlSelf->top__DOT__mem0__DOT__r_rdata_ld),64);
            tracep->chgQData(oldp+525,((((QData)((IData)(
                                                         (- (IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__mem0__DOT__r_rdata_ld 
                                                                                >> 0x1fU))))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->top__DOT__mem0__DOT__r_rdata_ld)))),64);
            tracep->chgQData(oldp+527,((QData)((IData)(vlSelf->top__DOT__mem0__DOT__r_rdata_ld))),64);
            tracep->chgQData(oldp+529,((((- (QData)((IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelf->top__DOT__mem0__DOT__r_rdata_ld 
                                                                        >> 0xfU)))))) 
                                         << 0x10U) 
                                        | (QData)((IData)(
                                                          (0xffffU 
                                                           & (IData)(vlSelf->top__DOT__mem0__DOT__r_rdata_ld)))))),64);
            tracep->chgQData(oldp+531,((QData)((IData)(
                                                       (0xffffU 
                                                        & (IData)(vlSelf->top__DOT__mem0__DOT__r_rdata_ld))))),64);
            tracep->chgQData(oldp+533,((((- (QData)((IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelf->top__DOT__mem0__DOT__r_rdata_ld 
                                                                        >> 7U)))))) 
                                         << 8U) | (QData)((IData)(
                                                                  (0xffU 
                                                                   & (IData)(vlSelf->top__DOT__mem0__DOT__r_rdata_ld)))))),64);
            tracep->chgQData(oldp+535,((QData)((IData)(
                                                       (0xffU 
                                                        & (IData)(vlSelf->top__DOT__mem0__DOT__r_rdata_ld))))),64);
            tracep->chgWData(oldp+537,(vlSelf->top__DOT__mem0__DOT____Vcellinp__mux3____pinNumber3),497);
            tracep->chgWData(oldp+553,(vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__pair_list[0]),71);
            tracep->chgWData(oldp+556,(vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__pair_list[1]),71);
            tracep->chgWData(oldp+559,(vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__pair_list[2]),71);
            tracep->chgWData(oldp+562,(vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__pair_list[3]),71);
            tracep->chgWData(oldp+565,(vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__pair_list[4]),71);
            tracep->chgWData(oldp+568,(vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__pair_list[5]),71);
            tracep->chgWData(oldp+571,(vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__pair_list[6]),71);
            tracep->chgCData(oldp+574,(vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__key_list[0]),7);
            tracep->chgCData(oldp+575,(vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__key_list[1]),7);
            tracep->chgCData(oldp+576,(vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__key_list[2]),7);
            tracep->chgCData(oldp+577,(vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__key_list[3]),7);
            tracep->chgCData(oldp+578,(vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__key_list[4]),7);
            tracep->chgCData(oldp+579,(vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__key_list[5]),7);
            tracep->chgCData(oldp+580,(vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__key_list[6]),7);
            tracep->chgQData(oldp+581,(vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+583,(vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+585,(vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+587,(vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+589,(vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__data_list[4]),64);
            tracep->chgQData(oldp+591,(vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__data_list[5]),64);
            tracep->chgQData(oldp+593,(vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__data_list[6]),64);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
            tracep->chgQData(oldp+595,(vlSelf->top__DOT__ram_data),64);
            tracep->chgQData(oldp+597,(vlSelf->top__DOT__wdata),64);
            tracep->chgQData(oldp+599,(vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+601,(vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__hit));
            tracep->chgIData(oldp+602,(vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__i),32);
            tracep->chgWData(oldp+603,(vlSelf->top__DOT__wb0__DOT____Vcellinp__mux3____pinNumber3),201);
            tracep->chgWData(oldp+610,(vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__pair_list[0]),67);
            tracep->chgWData(oldp+613,(vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__pair_list[1]),67);
            tracep->chgWData(oldp+616,(vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__pair_list[2]),67);
            tracep->chgCData(oldp+619,(vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__key_list[0]),3);
            tracep->chgCData(oldp+620,(vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__key_list[1]),3);
            tracep->chgCData(oldp+621,(vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__key_list[2]),3);
            tracep->chgQData(oldp+622,(vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+624,(vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+626,(vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+628,(vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+630,(vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__hit));
            tracep->chgIData(oldp+631,(vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__i),32);
        }
        tracep->chgBit(oldp+632,(vlSelf->clk));
        tracep->chgBit(oldp+633,(vlSelf->rst));
        tracep->chgIData(oldp+634,(vlSelf->inst),32);
        tracep->chgQData(oldp+635,(vlSelf->cpupc),64);
        tracep->chgBit(oldp+637,(vlSelf->ebreak));
        tracep->chgBit(oldp+638,(vlSelf->not_have));
        tracep->chgQData(oldp+639,(vlSelf->dnpc),64);
        tracep->chgBit(oldp+641,(vlSelf->inst_finish));
        tracep->chgBit(oldp+642,(vlSelf->inst_update));
        tracep->chgQData(oldp+643,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf
                                   [(0x1fU & (vlSelf->inst 
                                              >> 0x14U))]),64);
        tracep->chgCData(oldp+645,((0x1fU & (vlSelf->inst 
                                             >> 0xfU))),5);
        tracep->chgCData(oldp+646,((0x1fU & (vlSelf->inst 
                                             >> 0x14U))),5);
        tracep->chgCData(oldp+647,((0x1fU & (vlSelf->inst 
                                             >> 7U))),5);
        tracep->chgCData(oldp+648,((0xffU & ((IData)(1U) 
                                             << (7U 
                                                 & (vlSelf->inst 
                                                    >> 0xcU))))),8);
        tracep->chgBit(oldp+649,(((((((((((((((((((
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
                                  & (IData)(vlSelf->inst_update))));
        tracep->chgBit(oldp+650,(((((((IData)(vlSelf->top__DOT__control_0__DOT__sd) 
                                      | (IData)(vlSelf->top__DOT__control_0__DOT__sb)) 
                                     | (IData)(vlSelf->top__DOT__control_0__DOT__sh)) 
                                    | (IData)(vlSelf->top__DOT__control_0__DOT__sw)) 
                                   | (IData)(vlSelf->top__DOT__control_0__DOT__sb)) 
                                  & (IData)(vlSelf->inst_update))));
        tracep->chgBit(oldp+651,((((IData)(vlSelf->top__DOT__control_0__DOT__csrrw) 
                                   | (IData)(vlSelf->top__DOT__control_0__DOT__csrrs)) 
                                  & (IData)(vlSelf->inst_update))));
        tracep->chgBit(oldp+652,(((IData)(vlSelf->inst_update) 
                                  & ((IData)(vlSelf->top__DOT__e_inst) 
                                     >> 1U))));
        tracep->chgIData(oldp+653,((IData)(vlSelf->cpupc)),32);
        tracep->chgCData(oldp+654,((0x7fU & vlSelf->inst)),7);
        tracep->chgCData(oldp+655,((7U & (vlSelf->inst 
                                          >> 0xcU))),3);
        tracep->chgCData(oldp+656,((vlSelf->inst >> 0x19U)),7);
        tracep->chgQData(oldp+657,((((- (QData)((IData)(
                                                        (vlSelf->inst 
                                                         >> 0x1fU)))) 
                                     << 0xcU) | (QData)((IData)(
                                                                ((0xfe0U 
                                                                  & (vlSelf->inst 
                                                                     >> 0x14U)) 
                                                                 | (0x1fU 
                                                                    & (vlSelf->inst 
                                                                       >> 7U))))))),64);
        tracep->chgQData(oldp+659,((((- (QData)((IData)(
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
        tracep->chgQData(oldp+661,((((- (QData)((IData)(
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
        vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    }
}
