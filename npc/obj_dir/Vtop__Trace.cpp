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
            tracep->chgQData(oldp+0,(vlSelf->top__DOT__c_rdata),64);
            tracep->chgCData(oldp+2,(vlSelf->top__DOT__sel_nextpc),2);
            tracep->chgQData(oldp+3,(vlSelf->top__DOT__imm),64);
            tracep->chgQData(oldp+5,(vlSelf->top__DOT__src1),64);
            tracep->chgQData(oldp+7,(vlSelf->top__DOT__src2),64);
            tracep->chgSData(oldp+9,(vlSelf->top__DOT__op_d),12);
            tracep->chgCData(oldp+10,(vlSelf->top__DOT__fu_7_d),5);
            tracep->chgCData(oldp+11,(vlSelf->top__DOT__c_raddr),2);
            tracep->chgCData(oldp+12,(vlSelf->top__DOT__e_inst),3);
            tracep->chgCData(oldp+13,(vlSelf->top__DOT__sel_alu_src1),4);
            tracep->chgCData(oldp+14,(vlSelf->top__DOT__sel_alu_src2),3);
            tracep->chgIData(oldp+15,(vlSelf->top__DOT__alu_control),17);
            tracep->chgCData(oldp+16,(vlSelf->top__DOT__sel_rf_res),3);
            tracep->chgBit(oldp+17,((((((((IData)(vlSelf->top__DOT__control_0__DOT__ld) 
                                          | (IData)(vlSelf->top__DOT__control_0__DOT__lw)) 
                                         | (IData)(vlSelf->top__DOT__control_0__DOT__lwu)) 
                                        | (IData)(vlSelf->top__DOT__control_0__DOT__lh)) 
                                       | (IData)(vlSelf->top__DOT__control_0__DOT__lhu)) 
                                      | (IData)(vlSelf->top__DOT__control_0__DOT__lb)) 
                                     | (IData)(vlSelf->top__DOT__control_0__DOT__lbu))));
            tracep->chgBit(oldp+18,(vlSelf->top__DOT__data_ram_wen));
            tracep->chgCData(oldp+19,(vlSelf->top__DOT__alu_equal),3);
            tracep->chgCData(oldp+20,(vlSelf->top__DOT__l_choose),7);
            tracep->chgBit(oldp+21,(vlSelf->top__DOT__w_choose));
            tracep->chgBit(oldp+22,(vlSelf->top__DOT__control_0__DOT__csrrs));
            tracep->chgCData(oldp+23,(vlSelf->top__DOT__wmask),8);
            tracep->chgQData(oldp+24,(vlSelf->top__DOT__alu_result),64);
            tracep->chgQData(oldp+26,(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__adder_result),64);
            tracep->chgQData(oldp+28,(vlSelf->top__DOT__ram_data),64);
            tracep->chgQData(oldp+30,(vlSelf->top__DOT__wdata),64);
            tracep->chgQData(oldp+32,(vlSelf->top__DOT__i0__DOT__dnpc_0),64);
            tracep->chgQData(oldp+34,(vlSelf->top__DOT__i0__DOT__rdata_u),64);
            tracep->chgWData(oldp+36,(vlSelf->top__DOT__i0__DOT____Vcellinp__mux4____pinNumber3),264);
            tracep->chgWData(oldp+45,(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__pair_list[0]),66);
            tracep->chgWData(oldp+48,(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__pair_list[1]),66);
            tracep->chgWData(oldp+51,(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__pair_list[2]),66);
            tracep->chgWData(oldp+54,(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__pair_list[3]),66);
            tracep->chgCData(oldp+57,(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__key_list[0]),2);
            tracep->chgCData(oldp+58,(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__key_list[1]),2);
            tracep->chgCData(oldp+59,(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__key_list[2]),2);
            tracep->chgCData(oldp+60,(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__key_list[3]),2);
            tracep->chgQData(oldp+61,(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+63,(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+65,(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+67,(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+69,(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+71,(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__hit));
            tracep->chgIData(oldp+72,(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__i),32);
            tracep->chgWData(oldp+73,(vlSelf->top__DOT__i0__DOT____Vcellinp__mux5____pinNumber3),130);
            tracep->chgWData(oldp+78,(vlSelf->top__DOT__i0__DOT__mux5__DOT__i0__DOT__pair_list[0]),65);
            tracep->chgWData(oldp+81,(vlSelf->top__DOT__i0__DOT__mux5__DOT__i0__DOT__pair_list[1]),65);
            tracep->chgBit(oldp+84,(vlSelf->top__DOT__i0__DOT__mux5__DOT__i0__DOT__key_list[0]));
            tracep->chgBit(oldp+85,(vlSelf->top__DOT__i0__DOT__mux5__DOT__i0__DOT__key_list[1]));
            tracep->chgQData(oldp+86,(vlSelf->top__DOT__i0__DOT__mux5__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+88,(vlSelf->top__DOT__i0__DOT__mux5__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+90,(vlSelf->top__DOT__i0__DOT__mux5__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+92,(vlSelf->top__DOT__i0__DOT__mux5__DOT__i0__DOT__hit));
            tracep->chgIData(oldp+93,(vlSelf->top__DOT__i0__DOT__mux5__DOT__i0__DOT__i),32);
            tracep->chgQData(oldp+94,(vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi),64);
            tracep->chgCData(oldp+96,(vlSelf->top__DOT__i0__DOT__icache0__DOT__cache_state),3);
            tracep->chgBit(oldp+97,(vlSelf->top__DOT__i0__DOT__icache0__DOT__rvalid));
            tracep->chgBit(oldp+98,(vlSelf->top__DOT__i0__DOT__icache0__DOT__rready));
            tracep->chgBit(oldp+99,((0U == (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__state))));
            tracep->chgBit(oldp+100,((8U == (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__c_arlen))));
            tracep->chgCData(oldp+101,(vlSelf->top__DOT__i0__DOT__icache0__DOT__d_len),3);
            tracep->chgCData(oldp+102,(vlSelf->top__DOT__i0__DOT__icache0__DOT__state),3);
            tracep->chgBit(oldp+103,(vlSelf->top__DOT__i0__DOT__icache0__DOT__arvalid));
            tracep->chgCData(oldp+104,(vlSelf->top__DOT__i0__DOT__icache0__DOT__rresp),2);
            tracep->chgIData(oldp+105,(vlSelf->top__DOT__i0__DOT__icache0__DOT__unnamedblk1__DOT__i),32);
            tracep->chgIData(oldp+106,(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__r_araddr),32);
            tracep->chgCData(oldp+107,(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__c_arlen),8);
            tracep->chgCData(oldp+108,(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__state),3);
            tracep->chgQData(oldp+109,(vlSelf->top__DOT__id_0__DOT__immi),64);
            tracep->chgQData(oldp+111,(vlSelf->top__DOT__id_0__DOT__immu),64);
            tracep->chgWData(oldp+113,(vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3),760);
            tracep->chgWData(oldp+137,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[0]),76);
            tracep->chgWData(oldp+140,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[1]),76);
            tracep->chgWData(oldp+143,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[2]),76);
            tracep->chgWData(oldp+146,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[3]),76);
            tracep->chgWData(oldp+149,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[4]),76);
            tracep->chgWData(oldp+152,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[5]),76);
            tracep->chgWData(oldp+155,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[6]),76);
            tracep->chgWData(oldp+158,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[7]),76);
            tracep->chgWData(oldp+161,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[8]),76);
            tracep->chgWData(oldp+164,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[9]),76);
            tracep->chgSData(oldp+167,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list[0]),12);
            tracep->chgSData(oldp+168,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list[1]),12);
            tracep->chgSData(oldp+169,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list[2]),12);
            tracep->chgSData(oldp+170,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list[3]),12);
            tracep->chgSData(oldp+171,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list[4]),12);
            tracep->chgSData(oldp+172,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list[5]),12);
            tracep->chgSData(oldp+173,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list[6]),12);
            tracep->chgSData(oldp+174,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list[7]),12);
            tracep->chgSData(oldp+175,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list[8]),12);
            tracep->chgSData(oldp+176,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list[9]),12);
            tracep->chgQData(oldp+177,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+179,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+181,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+183,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+185,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list[4]),64);
            tracep->chgQData(oldp+187,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list[5]),64);
            tracep->chgQData(oldp+189,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list[6]),64);
            tracep->chgQData(oldp+191,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list[7]),64);
            tracep->chgQData(oldp+193,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list[8]),64);
            tracep->chgQData(oldp+195,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list[9]),64);
            tracep->chgQData(oldp+197,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+199,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__hit));
            tracep->chgIData(oldp+200,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__i),32);
            tracep->chgBit(oldp+201,(vlSelf->top__DOT__control_0__DOT__addi));
            tracep->chgBit(oldp+202,(vlSelf->top__DOT__control_0__DOT__csrrw));
            tracep->chgBit(oldp+203,(vlSelf->top__DOT__control_0__DOT__andi));
            tracep->chgBit(oldp+204,(vlSelf->top__DOT__control_0__DOT__xori));
            tracep->chgBit(oldp+205,(vlSelf->top__DOT__control_0__DOT__ori));
            tracep->chgBit(oldp+206,(vlSelf->top__DOT__control_0__DOT__sll));
            tracep->chgBit(oldp+207,(vlSelf->top__DOT__control_0__DOT__srl));
            tracep->chgBit(oldp+208,(vlSelf->top__DOT__control_0__DOT__sra));
            tracep->chgBit(oldp+209,(vlSelf->top__DOT__control_0__DOT__sllw));
            tracep->chgBit(oldp+210,(vlSelf->top__DOT__control_0__DOT__srlw));
            tracep->chgBit(oldp+211,(vlSelf->top__DOT__control_0__DOT__sraw));
            tracep->chgBit(oldp+212,(vlSelf->top__DOT__control_0__DOT__addiw));
            tracep->chgBit(oldp+213,(vlSelf->top__DOT__control_0__DOT__slliw));
            tracep->chgBit(oldp+214,(vlSelf->top__DOT__control_0__DOT__srliw));
            tracep->chgBit(oldp+215,(vlSelf->top__DOT__control_0__DOT__sraiw));
            tracep->chgBit(oldp+216,((1U & ((IData)(vlSelf->top__DOT__op_d) 
                                            >> 1U))));
            tracep->chgBit(oldp+217,((1U & (IData)(vlSelf->top__DOT__op_d))));
            tracep->chgBit(oldp+218,((1U & ((IData)(vlSelf->top__DOT__op_d) 
                                            >> 2U))));
            tracep->chgBit(oldp+219,(vlSelf->top__DOT__control_0__DOT__jalr));
            tracep->chgBit(oldp+220,(vlSelf->top__DOT__control_0__DOT__sd));
            tracep->chgBit(oldp+221,(vlSelf->top__DOT__control_0__DOT__sh));
            tracep->chgBit(oldp+222,(vlSelf->top__DOT__control_0__DOT__sw));
            tracep->chgBit(oldp+223,(vlSelf->top__DOT__control_0__DOT__sb));
            tracep->chgBit(oldp+224,(vlSelf->top__DOT__control_0__DOT__lw));
            tracep->chgBit(oldp+225,(vlSelf->top__DOT__control_0__DOT__lwu));
            tracep->chgBit(oldp+226,(vlSelf->top__DOT__control_0__DOT__lh));
            tracep->chgBit(oldp+227,(vlSelf->top__DOT__control_0__DOT__lhu));
            tracep->chgBit(oldp+228,(vlSelf->top__DOT__control_0__DOT__lb));
            tracep->chgBit(oldp+229,(vlSelf->top__DOT__control_0__DOT__lbu));
            tracep->chgBit(oldp+230,(vlSelf->top__DOT__control_0__DOT__ld));
            tracep->chgBit(oldp+231,(vlSelf->top__DOT__control_0__DOT__addw));
            tracep->chgBit(oldp+232,(vlSelf->top__DOT__control_0__DOT__subw));
            tracep->chgBit(oldp+233,(vlSelf->top__DOT__control_0__DOT__mulw));
            tracep->chgBit(oldp+234,(vlSelf->top__DOT__control_0__DOT__divw));
            tracep->chgBit(oldp+235,(vlSelf->top__DOT__control_0__DOT__divuw));
            tracep->chgBit(oldp+236,(vlSelf->top__DOT__control_0__DOT__remw));
            tracep->chgBit(oldp+237,(vlSelf->top__DOT__control_0__DOT__remuw));
            tracep->chgBit(oldp+238,(vlSelf->top__DOT__control_0__DOT__divu));
            tracep->chgBit(oldp+239,(vlSelf->top__DOT__control_0__DOT__div));
            tracep->chgBit(oldp+240,(vlSelf->top__DOT__control_0__DOT__rem));
            tracep->chgBit(oldp+241,(vlSelf->top__DOT__control_0__DOT__remu));
            tracep->chgBit(oldp+242,(vlSelf->top__DOT__control_0__DOT__Add));
            tracep->chgBit(oldp+243,(vlSelf->top__DOT__control_0__DOT__Mul));
            tracep->chgBit(oldp+244,(vlSelf->top__DOT__control_0__DOT__And));
            tracep->chgBit(oldp+245,(vlSelf->top__DOT__control_0__DOT__Xor));
            tracep->chgBit(oldp+246,(vlSelf->top__DOT__control_0__DOT__Or));
            tracep->chgBit(oldp+247,(vlSelf->top__DOT__control_0__DOT__sltu));
            tracep->chgBit(oldp+248,(vlSelf->top__DOT__control_0__DOT__slt));
            tracep->chgBit(oldp+249,(vlSelf->top__DOT__control_0__DOT__sub));
            tracep->chgBit(oldp+250,(vlSelf->top__DOT__control_0__DOT__sltiu));
            tracep->chgBit(oldp+251,(vlSelf->top__DOT__control_0__DOT__srai));
            tracep->chgBit(oldp+252,(vlSelf->top__DOT__control_0__DOT__slli));
            tracep->chgBit(oldp+253,(vlSelf->top__DOT__control_0__DOT__srli));
            tracep->chgBit(oldp+254,(vlSelf->top__DOT__control_0__DOT__beq));
            tracep->chgBit(oldp+255,(vlSelf->top__DOT__control_0__DOT__bne));
            tracep->chgBit(oldp+256,(vlSelf->top__DOT__control_0__DOT__bge));
            tracep->chgBit(oldp+257,(vlSelf->top__DOT__control_0__DOT__bgeu));
            tracep->chgBit(oldp+258,(vlSelf->top__DOT__control_0__DOT__bltu));
            tracep->chgBit(oldp+259,(vlSelf->top__DOT__control_0__DOT__blt));
            tracep->chgQData(oldp+260,(vlSelf->top__DOT__exe_0__DOT__alu_src1),64);
            tracep->chgQData(oldp+262,(vlSelf->top__DOT__exe_0__DOT__alu_src2),64);
            tracep->chgQData(oldp+264,(vlSelf->top__DOT__exe_0__DOT__c_wdata),64);
            tracep->chgWData(oldp+266,(vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux1____pinNumber3),272);
            tracep->chgWData(oldp+275,(vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__pair_list[0]),68);
            tracep->chgWData(oldp+278,(vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__pair_list[1]),68);
            tracep->chgWData(oldp+281,(vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__pair_list[2]),68);
            tracep->chgWData(oldp+284,(vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__pair_list[3]),68);
            tracep->chgCData(oldp+287,(vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__key_list[0]),4);
            tracep->chgCData(oldp+288,(vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__key_list[1]),4);
            tracep->chgCData(oldp+289,(vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__key_list[2]),4);
            tracep->chgCData(oldp+290,(vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__key_list[3]),4);
            tracep->chgQData(oldp+291,(vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+293,(vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+295,(vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+297,(vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+299,(vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+301,(vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__hit));
            tracep->chgIData(oldp+302,(vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__i),32);
            tracep->chgWData(oldp+303,(vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux2____pinNumber3),201);
            tracep->chgWData(oldp+310,(vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__pair_list[0]),67);
            tracep->chgWData(oldp+313,(vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__pair_list[1]),67);
            tracep->chgWData(oldp+316,(vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__pair_list[2]),67);
            tracep->chgCData(oldp+319,(vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__key_list[0]),3);
            tracep->chgCData(oldp+320,(vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__key_list[1]),3);
            tracep->chgCData(oldp+321,(vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__key_list[2]),3);
            tracep->chgQData(oldp+322,(vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+324,(vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+326,(vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+328,(vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+330,(vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__hit));
            tracep->chgIData(oldp+331,(vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__i),32);
            tracep->chgWData(oldp+332,(vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux3____pinNumber3),130);
            tracep->chgWData(oldp+337,(vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__pair_list[0]),65);
            tracep->chgWData(oldp+340,(vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__pair_list[1]),65);
            tracep->chgBit(oldp+343,(vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__key_list[0]));
            tracep->chgBit(oldp+344,(vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__key_list[1]));
            tracep->chgQData(oldp+345,(vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+347,(vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+349,(vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+351,(vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__hit));
            tracep->chgIData(oldp+352,(vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__i),32);
            tracep->chgQData(oldp+353,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[0]),64);
            tracep->chgQData(oldp+355,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[1]),64);
            tracep->chgQData(oldp+357,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[2]),64);
            tracep->chgQData(oldp+359,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[3]),64);
            tracep->chgQData(oldp+361,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[4]),64);
            tracep->chgQData(oldp+363,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[5]),64);
            tracep->chgQData(oldp+365,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[6]),64);
            tracep->chgQData(oldp+367,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[7]),64);
            tracep->chgQData(oldp+369,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[8]),64);
            tracep->chgQData(oldp+371,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[9]),64);
            tracep->chgQData(oldp+373,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[10]),64);
            tracep->chgQData(oldp+375,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[11]),64);
            tracep->chgQData(oldp+377,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[12]),64);
            tracep->chgQData(oldp+379,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[13]),64);
            tracep->chgQData(oldp+381,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[14]),64);
            tracep->chgQData(oldp+383,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[15]),64);
            tracep->chgQData(oldp+385,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[16]),64);
            tracep->chgQData(oldp+387,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[17]),64);
            tracep->chgQData(oldp+389,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[18]),64);
            tracep->chgQData(oldp+391,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[19]),64);
            tracep->chgQData(oldp+393,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[20]),64);
            tracep->chgQData(oldp+395,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[21]),64);
            tracep->chgQData(oldp+397,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[22]),64);
            tracep->chgQData(oldp+399,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[23]),64);
            tracep->chgQData(oldp+401,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[24]),64);
            tracep->chgQData(oldp+403,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[25]),64);
            tracep->chgQData(oldp+405,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[26]),64);
            tracep->chgQData(oldp+407,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[27]),64);
            tracep->chgQData(oldp+409,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[28]),64);
            tracep->chgQData(oldp+411,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[29]),64);
            tracep->chgQData(oldp+413,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[30]),64);
            tracep->chgQData(oldp+415,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[31]),64);
            tracep->chgQData(oldp+417,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr[0]),64);
            tracep->chgQData(oldp+419,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr[1]),64);
            tracep->chgQData(oldp+421,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr[2]),64);
            tracep->chgQData(oldp+423,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr[3]),64);
            tracep->chgIData(oldp+425,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__i),32);
            tracep->chgBit(oldp+426,((1U & vlSelf->top__DOT__alu_control)));
            tracep->chgBit(oldp+427,((1U & (vlSelf->top__DOT__alu_control 
                                            >> 1U))));
            tracep->chgBit(oldp+428,((1U & (vlSelf->top__DOT__alu_control 
                                            >> 2U))));
            tracep->chgBit(oldp+429,((1U & (vlSelf->top__DOT__alu_control 
                                            >> 3U))));
            tracep->chgBit(oldp+430,((1U & (vlSelf->top__DOT__alu_control 
                                            >> 4U))));
            tracep->chgBit(oldp+431,((1U & (vlSelf->top__DOT__alu_control 
                                            >> 5U))));
            tracep->chgBit(oldp+432,((1U & (vlSelf->top__DOT__alu_control 
                                            >> 6U))));
            tracep->chgBit(oldp+433,((1U & (vlSelf->top__DOT__alu_control 
                                            >> 7U))));
            tracep->chgBit(oldp+434,((1U & (vlSelf->top__DOT__alu_control 
                                            >> 8U))));
            tracep->chgBit(oldp+435,((1U & (vlSelf->top__DOT__alu_control 
                                            >> 9U))));
            tracep->chgBit(oldp+436,((1U & (vlSelf->top__DOT__alu_control 
                                            >> 0xaU))));
            tracep->chgBit(oldp+437,((1U & (vlSelf->top__DOT__alu_control 
                                            >> 0xbU))));
            tracep->chgBit(oldp+438,((1U & (vlSelf->top__DOT__alu_control 
                                            >> 0xcU))));
            tracep->chgBit(oldp+439,((1U & (vlSelf->top__DOT__alu_control 
                                            >> 0xdU))));
            tracep->chgBit(oldp+440,((1U & (vlSelf->top__DOT__alu_control 
                                            >> 0xeU))));
            tracep->chgBit(oldp+441,((1U & (vlSelf->top__DOT__alu_control 
                                            >> 0xfU))));
            tracep->chgBit(oldp+442,((1U & (vlSelf->top__DOT__alu_control 
                                            >> 0x10U))));
            tracep->chgQData(oldp+443,(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__slt_result),64);
            tracep->chgQData(oldp+445,((QData)((IData)(
                                                       (1U 
                                                        & (~ (IData)(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__adder_cout)))))),64);
            tracep->chgQData(oldp+447,((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                                        & vlSelf->top__DOT__exe_0__DOT__alu_src2)),64);
            tracep->chgQData(oldp+449,((~ vlSelf->top__DOT__exe_0__DOT__alu2__DOT__or_result)),64);
            tracep->chgQData(oldp+451,(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__or_result),64);
            tracep->chgQData(oldp+453,((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                                        ^ vlSelf->top__DOT__exe_0__DOT__alu_src2)),64);
            tracep->chgQData(oldp+455,((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                                        << (0x3fU & (IData)(vlSelf->top__DOT__exe_0__DOT__alu_src2)))),64);
            tracep->chgQData(oldp+457,((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                                        >> (0x3fU & (IData)(vlSelf->top__DOT__exe_0__DOT__alu_src2)))),64);
            tracep->chgQData(oldp+459,(VL_SHIFTRS_QQI(64,64,6, vlSelf->top__DOT__exe_0__DOT__alu_src1, 
                                                      (0x3fU 
                                                       & (IData)(vlSelf->top__DOT__exe_0__DOT__alu_src2)))),64);
            tracep->chgQData(oldp+461,((0xfffffffffffff000ULL 
                                        & vlSelf->top__DOT__exe_0__DOT__alu_src2)),64);
            tracep->chgQData(oldp+463,((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                                        * vlSelf->top__DOT__exe_0__DOT__alu_src2)),64);
            tracep->chgQData(oldp+465,(VL_DIV_QQQ(64, vlSelf->top__DOT__exe_0__DOT__alu_src1, vlSelf->top__DOT__exe_0__DOT__alu_src2)),64);
            tracep->chgQData(oldp+467,(VL_DIVS_QQQ(64, vlSelf->top__DOT__exe_0__DOT__alu_src1, vlSelf->top__DOT__exe_0__DOT__alu_src2)),64);
            tracep->chgQData(oldp+469,(VL_MODDIV_QQQ(64, vlSelf->top__DOT__exe_0__DOT__alu_src1, vlSelf->top__DOT__exe_0__DOT__alu_src2)),64);
            tracep->chgQData(oldp+471,(VL_MODDIVS_QQQ(64, vlSelf->top__DOT__exe_0__DOT__alu_src1, vlSelf->top__DOT__exe_0__DOT__alu_src2)),64);
            tracep->chgQData(oldp+473,(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__adder_b),64);
            tracep->chgBit(oldp+475,(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__adder_cin));
            tracep->chgBit(oldp+476,(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__adder_cout));
            tracep->chgQData(oldp+477,(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__alu_result_uw),64);
            tracep->chgQData(oldp+479,((((QData)((IData)(
                                                         (- (IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__exe_0__DOT__alu2__DOT__alu_result_uw 
                                                                                >> 0x1fU))))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__alu_result_uw)))),64);
            tracep->chgWData(oldp+481,(vlSelf->top__DOT__exe_0__DOT__alu2__DOT____Vcellinp__mux1____pinNumber3),130);
            tracep->chgWData(oldp+486,(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__pair_list[0]),65);
            tracep->chgWData(oldp+489,(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__pair_list[1]),65);
            tracep->chgBit(oldp+492,(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__key_list[0]));
            tracep->chgBit(oldp+493,(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__key_list[1]));
            tracep->chgQData(oldp+494,(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+496,(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+498,(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+500,(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__hit));
            tracep->chgIData(oldp+501,(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__i),32);
            tracep->chgBit(oldp+502,((5U == (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__cache_state))));
            tracep->chgBit(oldp+503,(vlSelf->top__DOT__mem1__DOT__use_cache));
            tracep->chgQData(oldp+504,(vlSelf->top__DOT__mem1__DOT__r_rdata_ld),64);
            tracep->chgQData(oldp+506,(((0x3fU >= (0x38U 
                                                   & (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__araddr 
                                                      << 3U)))
                                         ? (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray
                                            [(0x3fU 
                                              & (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__araddr 
                                                 >> 6U))]
                                            [(7U & 
                                              (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__araddr 
                                               >> 3U))] 
                                            >> (0x38U 
                                                & (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__araddr 
                                                   << 3U)))
                                         : 0ULL)),64);
            tracep->chgQData(oldp+508,(vlSelf->top__DOT__mem1__DOT__r_rdata_ld_device),64);
            tracep->chgQData(oldp+510,((((QData)((IData)(
                                                         (- (IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__mem1__DOT__r_rdata_ld 
                                                                                >> 0x1fU))))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))),64);
            tracep->chgQData(oldp+512,((QData)((IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld))),64);
            tracep->chgQData(oldp+514,((((- (QData)((IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelf->top__DOT__mem1__DOT__r_rdata_ld 
                                                                        >> 0xfU)))))) 
                                         << 0x10U) 
                                        | (QData)((IData)(
                                                          (0xffffU 
                                                           & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))))),64);
            tracep->chgQData(oldp+516,((QData)((IData)(
                                                       (0xffffU 
                                                        & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld))))),64);
            tracep->chgQData(oldp+518,((((- (QData)((IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelf->top__DOT__mem1__DOT__r_rdata_ld 
                                                                        >> 7U)))))) 
                                         << 8U) | (QData)((IData)(
                                                                  (0xffU 
                                                                   & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld)))))),64);
            tracep->chgQData(oldp+520,((QData)((IData)(
                                                       (0xffU 
                                                        & (IData)(vlSelf->top__DOT__mem1__DOT__r_rdata_ld))))),64);
            tracep->chgWData(oldp+522,(vlSelf->top__DOT__mem1__DOT____Vcellinp__mux3____pinNumber3),497);
            tracep->chgWData(oldp+538,(vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__pair_list[0]),71);
            tracep->chgWData(oldp+541,(vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__pair_list[1]),71);
            tracep->chgWData(oldp+544,(vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__pair_list[2]),71);
            tracep->chgWData(oldp+547,(vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__pair_list[3]),71);
            tracep->chgWData(oldp+550,(vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__pair_list[4]),71);
            tracep->chgWData(oldp+553,(vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__pair_list[5]),71);
            tracep->chgWData(oldp+556,(vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__pair_list[6]),71);
            tracep->chgCData(oldp+559,(vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__key_list[0]),7);
            tracep->chgCData(oldp+560,(vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__key_list[1]),7);
            tracep->chgCData(oldp+561,(vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__key_list[2]),7);
            tracep->chgCData(oldp+562,(vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__key_list[3]),7);
            tracep->chgCData(oldp+563,(vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__key_list[4]),7);
            tracep->chgCData(oldp+564,(vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__key_list[5]),7);
            tracep->chgCData(oldp+565,(vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__key_list[6]),7);
            tracep->chgQData(oldp+566,(vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+568,(vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+570,(vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+572,(vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+574,(vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__data_list[4]),64);
            tracep->chgQData(oldp+576,(vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__data_list[5]),64);
            tracep->chgQData(oldp+578,(vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__data_list[6]),64);
            tracep->chgQData(oldp+580,(vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+582,(vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__hit));
            tracep->chgIData(oldp+583,(vlSelf->top__DOT__mem1__DOT__mux3__DOT__i0__DOT__i),32);
            tracep->chgIData(oldp+584,((IData)(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__adder_result)),32);
            tracep->chgIData(oldp+585,(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__araddr),32);
            tracep->chgQData(oldp+586,(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray
                                       [(0x3fU & (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__araddr 
                                                  >> 6U))]
                                       [(7U & (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__araddr 
                                               >> 3U))]),64);
            tracep->chgCData(oldp+588,((0x3fU & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__araddr)),6);
            tracep->chgCData(oldp+589,((0x3fU & (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__araddr 
                                                 >> 6U))),6);
            tracep->chgIData(oldp+590,((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__araddr 
                                        >> 0xcU)),20);
            tracep->chgCData(oldp+591,((0x3fU & (IData)(
                                                        (vlSelf->top__DOT__exe_0__DOT__alu2__DOT__adder_result 
                                                         >> 6U)))),6);
            tracep->chgCData(oldp+592,((0x3fU & (IData)(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__adder_result))),6);
            tracep->chgIData(oldp+593,((0xfffffU & (IData)(
                                                           (vlSelf->top__DOT__exe_0__DOT__alu2__DOT__adder_result 
                                                            >> 0xcU)))),20);
            tracep->chgQData(oldp+594,(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rdata_axi),64);
            tracep->chgBit(oldp+596,((8U == (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__c_arlen))));
            tracep->chgCData(oldp+597,(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__cache_state),3);
            tracep->chgBit(oldp+598,(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rcache_en));
            tracep->chgBit(oldp+599,(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__wcache_en));
            tracep->chgBit(oldp+600,((2U == (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__cache_state))));
            tracep->chgBit(oldp+601,((3U == (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__write_state))));
            tracep->chgBit(oldp+602,((3U == (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__read_state))));
            tracep->chgBit(oldp+603,((3U == (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__cache_state))));
            tracep->chgIData(oldp+604,((0xffffffc0U 
                                        & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__araddr)),32);
            tracep->chgIData(oldp+605,(((vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__tagarray
                                         [(0x3fU & 
                                           (vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__araddr 
                                            >> 6U))] 
                                         << 0xcU) | 
                                        (0xfc0U & vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__araddr))),32);
            tracep->chgBit(oldp+606,(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rvalid));
            tracep->chgBit(oldp+607,(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rready));
            tracep->chgBit(oldp+608,((0U == (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__state))));
            tracep->chgBit(oldp+609,(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__arvalid));
            tracep->chgCData(oldp+610,(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__d_r_len),3);
            tracep->chgCData(oldp+611,(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__d_w_len),3);
            tracep->chgCData(oldp+612,(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__rresp),2);
            tracep->chgCData(oldp+613,(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__read_state),3);
            tracep->chgCData(oldp+614,(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__write_state),3);
            tracep->chgBit(oldp+615,((0U == (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__write_state))));
            tracep->chgBit(oldp+616,((8U == (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__c_awlen))));
            tracep->chgBit(oldp+617,(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__wready));
            tracep->chgCData(oldp+618,(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__bresp),2);
            tracep->chgBit(oldp+619,(((1U == (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__write_state)) 
                                      & (2U == (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__write_state)))));
            tracep->chgBit(oldp+620,((2U == (IData)(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__write_state))));
            tracep->chgBit(oldp+621,(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__awvalid));
            tracep->chgBit(oldp+622,(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__wvalid));
            tracep->chgQData(oldp+623,(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__r_wdata),64);
            tracep->chgCData(oldp+625,(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__c_awlen),8);
            tracep->chgQData(oldp+626,(((1U == (IData)(vlSelf->top__DOT__wmask))
                                         ? 0xffULL : 
                                        ((3U == (IData)(vlSelf->top__DOT__wmask))
                                          ? 0xffffULL
                                          : ((0xfU 
                                              == (IData)(vlSelf->top__DOT__wmask))
                                              ? 0xffffffffULL
                                              : 0xffffffffffffffffULL)))),64);
            tracep->chgQData(oldp+628,(((0x3fU >= (0x38U 
                                                   & ((IData)(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__adder_result) 
                                                      << 3U)))
                                         ? (vlSelf->top__DOT__src2 
                                            << (0x38U 
                                                & ((IData)(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__adder_result) 
                                                   << 3U)))
                                         : 0ULL)),64);
            tracep->chgQData(oldp+630,(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__wmask_align),64);
            tracep->chgQData(oldp+632,(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__dataarray
                                       [0x38U][3U]),64);
            tracep->chgIData(oldp+634,(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__tagarray
                                       [0U]),22);
            tracep->chgIData(oldp+635,(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__unnamedblk1__DOT__i),32);
            tracep->chgIData(oldp+636,(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__unnamedblk2__DOT__i),32);
            tracep->chgIData(oldp+637,(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j),32);
            tracep->chgIData(oldp+638,(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr),32);
            tracep->chgCData(oldp+639,(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__c_arlen),8);
            tracep->chgIData(oldp+640,(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr),32);
            tracep->chgBit(oldp+641,(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__testwrite));
            tracep->chgCData(oldp+642,(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__state),3);
            tracep->chgCData(oldp+643,(vlSelf->top__DOT__mem1__DOT__dcache_0__DOT__axi_full_s2_0__DOT__write_state),3);
            tracep->chgWData(oldp+644,(vlSelf->top__DOT__wb0__DOT____Vcellinp__mux3____pinNumber3),201);
            tracep->chgWData(oldp+651,(vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__pair_list[0]),67);
            tracep->chgWData(oldp+654,(vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__pair_list[1]),67);
            tracep->chgWData(oldp+657,(vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__pair_list[2]),67);
            tracep->chgCData(oldp+660,(vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__key_list[0]),3);
            tracep->chgCData(oldp+661,(vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__key_list[1]),3);
            tracep->chgCData(oldp+662,(vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__key_list[2]),3);
            tracep->chgQData(oldp+663,(vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+665,(vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+667,(vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+669,(vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+671,(vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__hit));
            tracep->chgIData(oldp+672,(vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__i),32);
        }
        tracep->chgBit(oldp+673,(vlSelf->clk));
        tracep->chgBit(oldp+674,(vlSelf->rst));
        tracep->chgIData(oldp+675,(vlSelf->inst),32);
        tracep->chgQData(oldp+676,(vlSelf->cpupc),64);
        tracep->chgBit(oldp+678,(vlSelf->ebreak));
        tracep->chgBit(oldp+679,(vlSelf->not_have));
        tracep->chgQData(oldp+680,(vlSelf->dnpc),64);
        tracep->chgBit(oldp+682,(vlSelf->inst_finish));
        tracep->chgBit(oldp+683,(vlSelf->mem_finish));
        tracep->chgBit(oldp+684,(vlSelf->inst_update));
        tracep->chgCData(oldp+685,((0x1fU & (vlSelf->inst 
                                             >> 0xfU))),5);
        tracep->chgCData(oldp+686,((0x1fU & (vlSelf->inst 
                                             >> 0x14U))),5);
        tracep->chgCData(oldp+687,((0x1fU & (vlSelf->inst 
                                             >> 7U))),5);
        tracep->chgCData(oldp+688,((0xffU & ((IData)(1U) 
                                             << (7U 
                                                 & (vlSelf->inst 
                                                    >> 0xcU))))),8);
        tracep->chgBit(oldp+689,(((((((((((((((((((
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
        tracep->chgBit(oldp+690,((((IData)(vlSelf->top__DOT__control_0__DOT__csrrw) 
                                   | (IData)(vlSelf->top__DOT__control_0__DOT__csrrs)) 
                                  & (IData)(vlSelf->mem_finish))));
        tracep->chgBit(oldp+691,(((IData)(vlSelf->mem_finish) 
                                  & ((IData)(vlSelf->top__DOT__e_inst) 
                                     >> 1U))));
        tracep->chgIData(oldp+692,((IData)(vlSelf->cpupc)),32);
        tracep->chgCData(oldp+693,((0x3fU & (IData)(vlSelf->cpupc))),6);
        tracep->chgCData(oldp+694,((0x3fU & (IData)(
                                                    (vlSelf->cpupc 
                                                     >> 6U)))),6);
        tracep->chgIData(oldp+695,((0xfffffU & (IData)(
                                                       (vlSelf->cpupc 
                                                        >> 0xcU)))),20);
        tracep->chgIData(oldp+696,((0xffffffc0U & (IData)(vlSelf->cpupc))),32);
        tracep->chgCData(oldp+697,((0x7fU & vlSelf->inst)),7);
        tracep->chgCData(oldp+698,((7U & (vlSelf->inst 
                                          >> 0xcU))),3);
        tracep->chgCData(oldp+699,((vlSelf->inst >> 0x19U)),7);
        tracep->chgQData(oldp+700,((((- (QData)((IData)(
                                                        (vlSelf->inst 
                                                         >> 0x1fU)))) 
                                     << 0xcU) | (QData)((IData)(
                                                                ((0xfe0U 
                                                                  & (vlSelf->inst 
                                                                     >> 0x14U)) 
                                                                 | (0x1fU 
                                                                    & (vlSelf->inst 
                                                                       >> 7U))))))),64);
        tracep->chgQData(oldp+702,((((- (QData)((IData)(
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
        tracep->chgQData(oldp+704,((((- (QData)((IData)(
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
        tracep->chgBit(oldp+706,(((~ (IData)(vlSelf->top__DOT__mem1__DOT__use_cache)) 
                                  & (IData)(vlSelf->inst_update))));
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
