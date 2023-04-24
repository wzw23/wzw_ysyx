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
            tracep->chgBit(oldp+9,(vlSelf->top__DOT__i0__DOT__icache0__DOT__arvalid));
            tracep->chgBit(oldp+10,(((1U == (IData)(vlSelf->top__DOT__arbiter_1__DOT__master_state))
                                      ? (IData)((0U 
                                                 == (IData)(vlSelf->top__DOT__arbiter_1__DOT__axi_full_s2_0__DOT__state)))
                                      : 0U)));
            tracep->chgQData(oldp+11,(((1U == (IData)(vlSelf->top__DOT__arbiter_1__DOT__master_state))
                                        ? vlSelf->top__DOT__arbiter_1__DOT__rdata
                                        : 0ULL)),64);
            tracep->chgCData(oldp+13,(((1U == (IData)(vlSelf->top__DOT__arbiter_1__DOT__master_state))
                                        ? (3U & (IData)(vlSelf->top__DOT__arbiter_1__DOT__rresp))
                                        : 0U)),2);
            tracep->chgBit(oldp+14,(vlSelf->top__DOT__rvalid1));
            tracep->chgBit(oldp+15,(vlSelf->top__DOT__rlast1));
            tracep->chgBit(oldp+16,(vlSelf->top__DOT__i0__DOT__icache0__DOT__rready));
            tracep->chgIData(oldp+17,((0xffffffc0U 
                                       & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__araddr)),32);
            tracep->chgBit(oldp+18,(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__arvalid));
            tracep->chgBit(oldp+19,(((2U == (IData)(vlSelf->top__DOT__arbiter_1__DOT__master_state))
                                      ? (IData)((0U 
                                                 == (IData)(vlSelf->top__DOT__arbiter_1__DOT__axi_full_s2_0__DOT__state)))
                                      : 0U)));
            tracep->chgQData(oldp+20,(((2U == (IData)(vlSelf->top__DOT__arbiter_1__DOT__master_state))
                                        ? vlSelf->top__DOT__arbiter_1__DOT__rdata
                                        : 0ULL)),64);
            tracep->chgCData(oldp+22,(((2U == (IData)(vlSelf->top__DOT__arbiter_1__DOT__master_state))
                                        ? (3U & (IData)(vlSelf->top__DOT__arbiter_1__DOT__rresp))
                                        : 0U)),2);
            tracep->chgBit(oldp+23,(vlSelf->top__DOT__rvalid2));
            tracep->chgBit(oldp+24,(vlSelf->top__DOT__rlast2));
            tracep->chgBit(oldp+25,(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rready));
            tracep->chgIData(oldp+26,(((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__tagarray
                                        [(0x3fU & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__araddr 
                                                   >> 6U))] 
                                        << 0xcU) | 
                                       (0xfc0U & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__araddr))),32);
            tracep->chgBit(oldp+27,(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__awvalid));
            tracep->chgBit(oldp+28,(((2U == (IData)(vlSelf->top__DOT__arbiter_1__DOT__master_state))
                                      ? (IData)((0U 
                                                 == (IData)(vlSelf->top__DOT__arbiter_1__DOT__axi_full_s2_0__DOT__write_state)))
                                      : 0U)));
            tracep->chgQData(oldp+29,(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata),64);
            tracep->chgBit(oldp+31,((8U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__c_awlen))));
            tracep->chgBit(oldp+32,(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__wvalid));
            tracep->chgBit(oldp+33,(vlSelf->top__DOT__wready2));
            tracep->chgCData(oldp+34,(((2U == (IData)(vlSelf->top__DOT__arbiter_1__DOT__master_state))
                                        ? (3U & (IData)(vlSelf->top__DOT__arbiter_1__DOT__bresp))
                                        : 0U)),2);
            tracep->chgBit(oldp+35,(((2U == (IData)(vlSelf->top__DOT__arbiter_1__DOT__master_state))
                                      ? (IData)((2U 
                                                 == (IData)(vlSelf->top__DOT__arbiter_1__DOT__axi_full_s2_0__DOT__write_state)))
                                      : 0U)));
            tracep->chgBit(oldp+36,(((1U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__write_state)) 
                                     & (2U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__write_state)))));
            tracep->chgSData(oldp+37,(vlSelf->top__DOT__op_d),12);
            tracep->chgCData(oldp+38,(vlSelf->top__DOT__fu_7_d),5);
            tracep->chgCData(oldp+39,(vlSelf->top__DOT__c_raddr),2);
            tracep->chgCData(oldp+40,(vlSelf->top__DOT__e_inst),3);
            tracep->chgCData(oldp+41,(vlSelf->top__DOT__sel_alu_src1),4);
            tracep->chgCData(oldp+42,(vlSelf->top__DOT__sel_alu_src2),3);
            tracep->chgIData(oldp+43,(vlSelf->top__DOT__alu_control),17);
            tracep->chgCData(oldp+44,(vlSelf->top__DOT__sel_rf_res),3);
            tracep->chgBit(oldp+45,(vlSelf->top__DOT__data_ram_en));
            tracep->chgBit(oldp+46,(vlSelf->top__DOT__data_ram_wen));
            tracep->chgCData(oldp+47,(vlSelf->top__DOT__alu_equal),3);
            tracep->chgCData(oldp+48,(vlSelf->top__DOT__l_choose),7);
            tracep->chgBit(oldp+49,(vlSelf->top__DOT__w_choose));
            tracep->chgBit(oldp+50,(vlSelf->top__DOT__control_1__DOT__csrrs));
            tracep->chgCData(oldp+51,(vlSelf->top__DOT__wmask),8);
            tracep->chgQData(oldp+52,(vlSelf->top__DOT__alu_result),64);
            tracep->chgQData(oldp+54,(vlSelf->top__DOT__exe_1__DOT__alu2__DOT__adder_result),64);
            tracep->chgQData(oldp+56,(vlSelf->top__DOT__ram_data),64);
            tracep->chgQData(oldp+58,(vlSelf->top__DOT__wdata),64);
            tracep->chgQData(oldp+60,(vlSelf->top__DOT__i0__DOT__dnpc_0),64);
            tracep->chgQData(oldp+62,(vlSelf->top__DOT__i0__DOT__rdata_u),64);
            tracep->chgWData(oldp+64,(vlSelf->top__DOT__i0__DOT____Vcellinp__mux4____pinNumber3),264);
            tracep->chgWData(oldp+73,(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__pair_list[0]),66);
            tracep->chgWData(oldp+76,(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__pair_list[1]),66);
            tracep->chgWData(oldp+79,(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__pair_list[2]),66);
            tracep->chgWData(oldp+82,(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__pair_list[3]),66);
            tracep->chgCData(oldp+85,(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__key_list[0]),2);
            tracep->chgCData(oldp+86,(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__key_list[1]),2);
            tracep->chgCData(oldp+87,(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__key_list[2]),2);
            tracep->chgCData(oldp+88,(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__key_list[3]),2);
            tracep->chgQData(oldp+89,(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+91,(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+93,(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+95,(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+97,(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+99,(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__hit));
            tracep->chgWData(oldp+100,(vlSelf->top__DOT__i0__DOT____Vcellinp__mux5____pinNumber3),130);
            tracep->chgWData(oldp+105,(vlSelf->top__DOT__i0__DOT__mux5__DOT__i0__DOT__pair_list[0]),65);
            tracep->chgWData(oldp+108,(vlSelf->top__DOT__i0__DOT__mux5__DOT__i0__DOT__pair_list[1]),65);
            tracep->chgBit(oldp+111,(vlSelf->top__DOT__i0__DOT__mux5__DOT__i0__DOT__key_list[0]));
            tracep->chgBit(oldp+112,(vlSelf->top__DOT__i0__DOT__mux5__DOT__i0__DOT__key_list[1]));
            tracep->chgQData(oldp+113,(vlSelf->top__DOT__i0__DOT__mux5__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+115,(vlSelf->top__DOT__i0__DOT__mux5__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+117,(vlSelf->top__DOT__i0__DOT__mux5__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+119,(vlSelf->top__DOT__i0__DOT__mux5__DOT__i0__DOT__hit));
            tracep->chgCData(oldp+120,(vlSelf->top__DOT__i0__DOT__icache0__DOT__cache_state),3);
            tracep->chgCData(oldp+121,(vlSelf->top__DOT__i0__DOT__icache0__DOT__d_len),3);
            tracep->chgCData(oldp+122,(vlSelf->top__DOT__i0__DOT__icache0__DOT__state),3);
            tracep->chgIData(oldp+123,(vlSelf->top__DOT__i0__DOT__icache0__DOT__unnamedblk1__DOT__i),32);
            tracep->chgQData(oldp+124,(vlSelf->top__DOT__id_1__DOT__immi),64);
            tracep->chgQData(oldp+126,(vlSelf->top__DOT__id_1__DOT__immu),64);
            tracep->chgWData(oldp+128,(vlSelf->top__DOT__id_1__DOT____Vcellinp__mux0____pinNumber3),760);
            tracep->chgWData(oldp+152,(vlSelf->top__DOT__id_1__DOT__mux0__DOT__i0__DOT__pair_list[0]),76);
            tracep->chgWData(oldp+155,(vlSelf->top__DOT__id_1__DOT__mux0__DOT__i0__DOT__pair_list[1]),76);
            tracep->chgWData(oldp+158,(vlSelf->top__DOT__id_1__DOT__mux0__DOT__i0__DOT__pair_list[2]),76);
            tracep->chgWData(oldp+161,(vlSelf->top__DOT__id_1__DOT__mux0__DOT__i0__DOT__pair_list[3]),76);
            tracep->chgWData(oldp+164,(vlSelf->top__DOT__id_1__DOT__mux0__DOT__i0__DOT__pair_list[4]),76);
            tracep->chgWData(oldp+167,(vlSelf->top__DOT__id_1__DOT__mux0__DOT__i0__DOT__pair_list[5]),76);
            tracep->chgWData(oldp+170,(vlSelf->top__DOT__id_1__DOT__mux0__DOT__i0__DOT__pair_list[6]),76);
            tracep->chgWData(oldp+173,(vlSelf->top__DOT__id_1__DOT__mux0__DOT__i0__DOT__pair_list[7]),76);
            tracep->chgWData(oldp+176,(vlSelf->top__DOT__id_1__DOT__mux0__DOT__i0__DOT__pair_list[8]),76);
            tracep->chgWData(oldp+179,(vlSelf->top__DOT__id_1__DOT__mux0__DOT__i0__DOT__pair_list[9]),76);
            tracep->chgSData(oldp+182,(vlSelf->top__DOT__id_1__DOT__mux0__DOT__i0__DOT__key_list[0]),12);
            tracep->chgSData(oldp+183,(vlSelf->top__DOT__id_1__DOT__mux0__DOT__i0__DOT__key_list[1]),12);
            tracep->chgSData(oldp+184,(vlSelf->top__DOT__id_1__DOT__mux0__DOT__i0__DOT__key_list[2]),12);
            tracep->chgSData(oldp+185,(vlSelf->top__DOT__id_1__DOT__mux0__DOT__i0__DOT__key_list[3]),12);
            tracep->chgSData(oldp+186,(vlSelf->top__DOT__id_1__DOT__mux0__DOT__i0__DOT__key_list[4]),12);
            tracep->chgSData(oldp+187,(vlSelf->top__DOT__id_1__DOT__mux0__DOT__i0__DOT__key_list[5]),12);
            tracep->chgSData(oldp+188,(vlSelf->top__DOT__id_1__DOT__mux0__DOT__i0__DOT__key_list[6]),12);
            tracep->chgSData(oldp+189,(vlSelf->top__DOT__id_1__DOT__mux0__DOT__i0__DOT__key_list[7]),12);
            tracep->chgSData(oldp+190,(vlSelf->top__DOT__id_1__DOT__mux0__DOT__i0__DOT__key_list[8]),12);
            tracep->chgSData(oldp+191,(vlSelf->top__DOT__id_1__DOT__mux0__DOT__i0__DOT__key_list[9]),12);
            tracep->chgQData(oldp+192,(vlSelf->top__DOT__id_1__DOT__mux0__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+194,(vlSelf->top__DOT__id_1__DOT__mux0__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+196,(vlSelf->top__DOT__id_1__DOT__mux0__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+198,(vlSelf->top__DOT__id_1__DOT__mux0__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+200,(vlSelf->top__DOT__id_1__DOT__mux0__DOT__i0__DOT__data_list[4]),64);
            tracep->chgQData(oldp+202,(vlSelf->top__DOT__id_1__DOT__mux0__DOT__i0__DOT__data_list[5]),64);
            tracep->chgQData(oldp+204,(vlSelf->top__DOT__id_1__DOT__mux0__DOT__i0__DOT__data_list[6]),64);
            tracep->chgQData(oldp+206,(vlSelf->top__DOT__id_1__DOT__mux0__DOT__i0__DOT__data_list[7]),64);
            tracep->chgQData(oldp+208,(vlSelf->top__DOT__id_1__DOT__mux0__DOT__i0__DOT__data_list[8]),64);
            tracep->chgQData(oldp+210,(vlSelf->top__DOT__id_1__DOT__mux0__DOT__i0__DOT__data_list[9]),64);
            tracep->chgQData(oldp+212,(vlSelf->top__DOT__id_1__DOT__mux0__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+214,(vlSelf->top__DOT__id_1__DOT__mux0__DOT__i0__DOT__hit));
            tracep->chgBit(oldp+215,(vlSelf->top__DOT__control_1__DOT__addi));
            tracep->chgBit(oldp+216,(vlSelf->top__DOT__control_1__DOT__csrrw));
            tracep->chgBit(oldp+217,(vlSelf->top__DOT__control_1__DOT__andi));
            tracep->chgBit(oldp+218,(vlSelf->top__DOT__control_1__DOT__xori));
            tracep->chgBit(oldp+219,(vlSelf->top__DOT__control_1__DOT__ori));
            tracep->chgBit(oldp+220,(vlSelf->top__DOT__control_1__DOT__sll));
            tracep->chgBit(oldp+221,(vlSelf->top__DOT__control_1__DOT__srl));
            tracep->chgBit(oldp+222,(vlSelf->top__DOT__control_1__DOT__sra));
            tracep->chgBit(oldp+223,(vlSelf->top__DOT__control_1__DOT__sllw));
            tracep->chgBit(oldp+224,(vlSelf->top__DOT__control_1__DOT__srlw));
            tracep->chgBit(oldp+225,(vlSelf->top__DOT__control_1__DOT__sraw));
            tracep->chgBit(oldp+226,(vlSelf->top__DOT__control_1__DOT__addiw));
            tracep->chgBit(oldp+227,(vlSelf->top__DOT__control_1__DOT__slliw));
            tracep->chgBit(oldp+228,(vlSelf->top__DOT__control_1__DOT__srliw));
            tracep->chgBit(oldp+229,(vlSelf->top__DOT__control_1__DOT__sraiw));
            tracep->chgBit(oldp+230,((1U & ((IData)(vlSelf->top__DOT__op_d) 
                                            >> 1U))));
            tracep->chgBit(oldp+231,((1U & (IData)(vlSelf->top__DOT__op_d))));
            tracep->chgBit(oldp+232,((1U & ((IData)(vlSelf->top__DOT__op_d) 
                                            >> 2U))));
            tracep->chgBit(oldp+233,(vlSelf->top__DOT__control_1__DOT__jalr));
            tracep->chgBit(oldp+234,(vlSelf->top__DOT__control_1__DOT__sd));
            tracep->chgBit(oldp+235,(vlSelf->top__DOT__control_1__DOT__sh));
            tracep->chgBit(oldp+236,(vlSelf->top__DOT__control_1__DOT__sw));
            tracep->chgBit(oldp+237,(vlSelf->top__DOT__control_1__DOT__sb));
            tracep->chgBit(oldp+238,(vlSelf->top__DOT__control_1__DOT__lw));
            tracep->chgBit(oldp+239,(vlSelf->top__DOT__control_1__DOT__lwu));
            tracep->chgBit(oldp+240,(vlSelf->top__DOT__control_1__DOT__lh));
            tracep->chgBit(oldp+241,(vlSelf->top__DOT__control_1__DOT__lhu));
            tracep->chgBit(oldp+242,(vlSelf->top__DOT__control_1__DOT__lb));
            tracep->chgBit(oldp+243,(vlSelf->top__DOT__control_1__DOT__lbu));
            tracep->chgBit(oldp+244,(vlSelf->top__DOT__control_1__DOT__ld));
            tracep->chgBit(oldp+245,(vlSelf->top__DOT__control_1__DOT__addw));
            tracep->chgBit(oldp+246,(vlSelf->top__DOT__control_1__DOT__subw));
            tracep->chgBit(oldp+247,(vlSelf->top__DOT__control_1__DOT__mulw));
            tracep->chgBit(oldp+248,(vlSelf->top__DOT__control_1__DOT__divw));
            tracep->chgBit(oldp+249,(vlSelf->top__DOT__control_1__DOT__divuw));
            tracep->chgBit(oldp+250,(vlSelf->top__DOT__control_1__DOT__remw));
            tracep->chgBit(oldp+251,(vlSelf->top__DOT__control_1__DOT__remuw));
            tracep->chgBit(oldp+252,(vlSelf->top__DOT__control_1__DOT__divu));
            tracep->chgBit(oldp+253,(vlSelf->top__DOT__control_1__DOT__div));
            tracep->chgBit(oldp+254,(vlSelf->top__DOT__control_1__DOT__rem));
            tracep->chgBit(oldp+255,(vlSelf->top__DOT__control_1__DOT__remu));
            tracep->chgBit(oldp+256,(vlSelf->top__DOT__control_1__DOT__Add));
            tracep->chgBit(oldp+257,(vlSelf->top__DOT__control_1__DOT__Mul));
            tracep->chgBit(oldp+258,(vlSelf->top__DOT__control_1__DOT__And));
            tracep->chgBit(oldp+259,(vlSelf->top__DOT__control_1__DOT__Xor));
            tracep->chgBit(oldp+260,(vlSelf->top__DOT__control_1__DOT__Or));
            tracep->chgBit(oldp+261,(vlSelf->top__DOT__control_1__DOT__sltu));
            tracep->chgBit(oldp+262,(vlSelf->top__DOT__control_1__DOT__slt));
            tracep->chgBit(oldp+263,(vlSelf->top__DOT__control_1__DOT__sub));
            tracep->chgBit(oldp+264,(vlSelf->top__DOT__control_1__DOT__sltiu));
            tracep->chgBit(oldp+265,(vlSelf->top__DOT__control_1__DOT__srai));
            tracep->chgBit(oldp+266,(vlSelf->top__DOT__control_1__DOT__slli));
            tracep->chgBit(oldp+267,(vlSelf->top__DOT__control_1__DOT__srli));
            tracep->chgBit(oldp+268,(vlSelf->top__DOT__control_1__DOT__beq));
            tracep->chgBit(oldp+269,(vlSelf->top__DOT__control_1__DOT__bne));
            tracep->chgBit(oldp+270,(vlSelf->top__DOT__control_1__DOT__bge));
            tracep->chgBit(oldp+271,(vlSelf->top__DOT__control_1__DOT__bgeu));
            tracep->chgBit(oldp+272,(vlSelf->top__DOT__control_1__DOT__bltu));
            tracep->chgBit(oldp+273,(vlSelf->top__DOT__control_1__DOT__blt));
            tracep->chgQData(oldp+274,(vlSelf->top__DOT__exe_1__DOT__alu_src1),64);
            tracep->chgQData(oldp+276,(vlSelf->top__DOT__exe_1__DOT__alu_src2),64);
            tracep->chgQData(oldp+278,(vlSelf->top__DOT__exe_1__DOT__c_wdata),64);
            tracep->chgWData(oldp+280,(vlSelf->top__DOT__exe_1__DOT____Vcellinp__mux1____pinNumber3),272);
            tracep->chgWData(oldp+289,(vlSelf->top__DOT__exe_1__DOT__mux1__DOT__i0__DOT__pair_list[0]),68);
            tracep->chgWData(oldp+292,(vlSelf->top__DOT__exe_1__DOT__mux1__DOT__i0__DOT__pair_list[1]),68);
            tracep->chgWData(oldp+295,(vlSelf->top__DOT__exe_1__DOT__mux1__DOT__i0__DOT__pair_list[2]),68);
            tracep->chgWData(oldp+298,(vlSelf->top__DOT__exe_1__DOT__mux1__DOT__i0__DOT__pair_list[3]),68);
            tracep->chgCData(oldp+301,(vlSelf->top__DOT__exe_1__DOT__mux1__DOT__i0__DOT__key_list[0]),4);
            tracep->chgCData(oldp+302,(vlSelf->top__DOT__exe_1__DOT__mux1__DOT__i0__DOT__key_list[1]),4);
            tracep->chgCData(oldp+303,(vlSelf->top__DOT__exe_1__DOT__mux1__DOT__i0__DOT__key_list[2]),4);
            tracep->chgCData(oldp+304,(vlSelf->top__DOT__exe_1__DOT__mux1__DOT__i0__DOT__key_list[3]),4);
            tracep->chgQData(oldp+305,(vlSelf->top__DOT__exe_1__DOT__mux1__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+307,(vlSelf->top__DOT__exe_1__DOT__mux1__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+309,(vlSelf->top__DOT__exe_1__DOT__mux1__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+311,(vlSelf->top__DOT__exe_1__DOT__mux1__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+313,(vlSelf->top__DOT__exe_1__DOT__mux1__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+315,(vlSelf->top__DOT__exe_1__DOT__mux1__DOT__i0__DOT__hit));
            tracep->chgWData(oldp+316,(vlSelf->top__DOT__exe_1__DOT____Vcellinp__mux2____pinNumber3),201);
            tracep->chgWData(oldp+323,(vlSelf->top__DOT__exe_1__DOT__mux2__DOT__i0__DOT__pair_list[0]),67);
            tracep->chgWData(oldp+326,(vlSelf->top__DOT__exe_1__DOT__mux2__DOT__i0__DOT__pair_list[1]),67);
            tracep->chgWData(oldp+329,(vlSelf->top__DOT__exe_1__DOT__mux2__DOT__i0__DOT__pair_list[2]),67);
            tracep->chgCData(oldp+332,(vlSelf->top__DOT__exe_1__DOT__mux2__DOT__i0__DOT__key_list[0]),3);
            tracep->chgCData(oldp+333,(vlSelf->top__DOT__exe_1__DOT__mux2__DOT__i0__DOT__key_list[1]),3);
            tracep->chgCData(oldp+334,(vlSelf->top__DOT__exe_1__DOT__mux2__DOT__i0__DOT__key_list[2]),3);
            tracep->chgQData(oldp+335,(vlSelf->top__DOT__exe_1__DOT__mux2__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+337,(vlSelf->top__DOT__exe_1__DOT__mux2__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+339,(vlSelf->top__DOT__exe_1__DOT__mux2__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+341,(vlSelf->top__DOT__exe_1__DOT__mux2__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+343,(vlSelf->top__DOT__exe_1__DOT__mux2__DOT__i0__DOT__hit));
            tracep->chgWData(oldp+344,(vlSelf->top__DOT__exe_1__DOT____Vcellinp__mux3____pinNumber3),130);
            tracep->chgWData(oldp+349,(vlSelf->top__DOT__exe_1__DOT__mux3__DOT__i0__DOT__pair_list[0]),65);
            tracep->chgWData(oldp+352,(vlSelf->top__DOT__exe_1__DOT__mux3__DOT__i0__DOT__pair_list[1]),65);
            tracep->chgBit(oldp+355,(vlSelf->top__DOT__exe_1__DOT__mux3__DOT__i0__DOT__key_list[0]));
            tracep->chgBit(oldp+356,(vlSelf->top__DOT__exe_1__DOT__mux3__DOT__i0__DOT__key_list[1]));
            tracep->chgQData(oldp+357,(vlSelf->top__DOT__exe_1__DOT__mux3__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+359,(vlSelf->top__DOT__exe_1__DOT__mux3__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+361,(vlSelf->top__DOT__exe_1__DOT__mux3__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+363,(vlSelf->top__DOT__exe_1__DOT__mux3__DOT__i0__DOT__hit));
            tracep->chgQData(oldp+364,(vlSelf->top__DOT__exe_1__DOT__r0__DOT__rf[0]),64);
            tracep->chgQData(oldp+366,(vlSelf->top__DOT__exe_1__DOT__r0__DOT__rf[1]),64);
            tracep->chgQData(oldp+368,(vlSelf->top__DOT__exe_1__DOT__r0__DOT__rf[2]),64);
            tracep->chgQData(oldp+370,(vlSelf->top__DOT__exe_1__DOT__r0__DOT__rf[3]),64);
            tracep->chgQData(oldp+372,(vlSelf->top__DOT__exe_1__DOT__r0__DOT__rf[4]),64);
            tracep->chgQData(oldp+374,(vlSelf->top__DOT__exe_1__DOT__r0__DOT__rf[5]),64);
            tracep->chgQData(oldp+376,(vlSelf->top__DOT__exe_1__DOT__r0__DOT__rf[6]),64);
            tracep->chgQData(oldp+378,(vlSelf->top__DOT__exe_1__DOT__r0__DOT__rf[7]),64);
            tracep->chgQData(oldp+380,(vlSelf->top__DOT__exe_1__DOT__r0__DOT__rf[8]),64);
            tracep->chgQData(oldp+382,(vlSelf->top__DOT__exe_1__DOT__r0__DOT__rf[9]),64);
            tracep->chgQData(oldp+384,(vlSelf->top__DOT__exe_1__DOT__r0__DOT__rf[10]),64);
            tracep->chgQData(oldp+386,(vlSelf->top__DOT__exe_1__DOT__r0__DOT__rf[11]),64);
            tracep->chgQData(oldp+388,(vlSelf->top__DOT__exe_1__DOT__r0__DOT__rf[12]),64);
            tracep->chgQData(oldp+390,(vlSelf->top__DOT__exe_1__DOT__r0__DOT__rf[13]),64);
            tracep->chgQData(oldp+392,(vlSelf->top__DOT__exe_1__DOT__r0__DOT__rf[14]),64);
            tracep->chgQData(oldp+394,(vlSelf->top__DOT__exe_1__DOT__r0__DOT__rf[15]),64);
            tracep->chgQData(oldp+396,(vlSelf->top__DOT__exe_1__DOT__r0__DOT__rf[16]),64);
            tracep->chgQData(oldp+398,(vlSelf->top__DOT__exe_1__DOT__r0__DOT__rf[17]),64);
            tracep->chgQData(oldp+400,(vlSelf->top__DOT__exe_1__DOT__r0__DOT__rf[18]),64);
            tracep->chgQData(oldp+402,(vlSelf->top__DOT__exe_1__DOT__r0__DOT__rf[19]),64);
            tracep->chgQData(oldp+404,(vlSelf->top__DOT__exe_1__DOT__r0__DOT__rf[20]),64);
            tracep->chgQData(oldp+406,(vlSelf->top__DOT__exe_1__DOT__r0__DOT__rf[21]),64);
            tracep->chgQData(oldp+408,(vlSelf->top__DOT__exe_1__DOT__r0__DOT__rf[22]),64);
            tracep->chgQData(oldp+410,(vlSelf->top__DOT__exe_1__DOT__r0__DOT__rf[23]),64);
            tracep->chgQData(oldp+412,(vlSelf->top__DOT__exe_1__DOT__r0__DOT__rf[24]),64);
            tracep->chgQData(oldp+414,(vlSelf->top__DOT__exe_1__DOT__r0__DOT__rf[25]),64);
            tracep->chgQData(oldp+416,(vlSelf->top__DOT__exe_1__DOT__r0__DOT__rf[26]),64);
            tracep->chgQData(oldp+418,(vlSelf->top__DOT__exe_1__DOT__r0__DOT__rf[27]),64);
            tracep->chgQData(oldp+420,(vlSelf->top__DOT__exe_1__DOT__r0__DOT__rf[28]),64);
            tracep->chgQData(oldp+422,(vlSelf->top__DOT__exe_1__DOT__r0__DOT__rf[29]),64);
            tracep->chgQData(oldp+424,(vlSelf->top__DOT__exe_1__DOT__r0__DOT__rf[30]),64);
            tracep->chgQData(oldp+426,(vlSelf->top__DOT__exe_1__DOT__r0__DOT__rf[31]),64);
            tracep->chgQData(oldp+428,(vlSelf->top__DOT__exe_1__DOT__r0__DOT__csr[0]),64);
            tracep->chgQData(oldp+430,(vlSelf->top__DOT__exe_1__DOT__r0__DOT__csr[1]),64);
            tracep->chgQData(oldp+432,(vlSelf->top__DOT__exe_1__DOT__r0__DOT__csr[2]),64);
            tracep->chgQData(oldp+434,(vlSelf->top__DOT__exe_1__DOT__r0__DOT__csr[3]),64);
            tracep->chgIData(oldp+436,(vlSelf->top__DOT__exe_1__DOT__r0__DOT__i),32);
            tracep->chgBit(oldp+437,((1U & vlSelf->top__DOT__alu_control)));
            tracep->chgBit(oldp+438,((1U & (vlSelf->top__DOT__alu_control 
                                            >> 1U))));
            tracep->chgBit(oldp+439,((1U & (vlSelf->top__DOT__alu_control 
                                            >> 2U))));
            tracep->chgBit(oldp+440,((1U & (vlSelf->top__DOT__alu_control 
                                            >> 3U))));
            tracep->chgBit(oldp+441,((1U & (vlSelf->top__DOT__alu_control 
                                            >> 4U))));
            tracep->chgBit(oldp+442,((1U & (vlSelf->top__DOT__alu_control 
                                            >> 5U))));
            tracep->chgBit(oldp+443,((1U & (vlSelf->top__DOT__alu_control 
                                            >> 6U))));
            tracep->chgBit(oldp+444,((1U & (vlSelf->top__DOT__alu_control 
                                            >> 7U))));
            tracep->chgBit(oldp+445,((1U & (vlSelf->top__DOT__alu_control 
                                            >> 8U))));
            tracep->chgBit(oldp+446,((1U & (vlSelf->top__DOT__alu_control 
                                            >> 9U))));
            tracep->chgBit(oldp+447,((1U & (vlSelf->top__DOT__alu_control 
                                            >> 0xaU))));
            tracep->chgBit(oldp+448,((1U & (vlSelf->top__DOT__alu_control 
                                            >> 0xbU))));
            tracep->chgBit(oldp+449,((1U & (vlSelf->top__DOT__alu_control 
                                            >> 0xcU))));
            tracep->chgBit(oldp+450,((1U & (vlSelf->top__DOT__alu_control 
                                            >> 0xdU))));
            tracep->chgBit(oldp+451,((1U & (vlSelf->top__DOT__alu_control 
                                            >> 0xeU))));
            tracep->chgBit(oldp+452,((1U & (vlSelf->top__DOT__alu_control 
                                            >> 0xfU))));
            tracep->chgBit(oldp+453,((1U & (vlSelf->top__DOT__alu_control 
                                            >> 0x10U))));
            tracep->chgQData(oldp+454,(vlSelf->top__DOT__exe_1__DOT__alu2__DOT__slt_result),64);
            tracep->chgQData(oldp+456,((QData)((IData)(
                                                       (1U 
                                                        & (~ (IData)(vlSelf->top__DOT__exe_1__DOT__alu2__DOT__adder_cout)))))),64);
            tracep->chgQData(oldp+458,((vlSelf->top__DOT__exe_1__DOT__alu_src1 
                                        & vlSelf->top__DOT__exe_1__DOT__alu_src2)),64);
            tracep->chgQData(oldp+460,((~ vlSelf->top__DOT__exe_1__DOT__alu2__DOT__or_result)),64);
            tracep->chgQData(oldp+462,(vlSelf->top__DOT__exe_1__DOT__alu2__DOT__or_result),64);
            tracep->chgQData(oldp+464,((vlSelf->top__DOT__exe_1__DOT__alu_src1 
                                        ^ vlSelf->top__DOT__exe_1__DOT__alu_src2)),64);
            tracep->chgQData(oldp+466,((vlSelf->top__DOT__exe_1__DOT__alu_src1 
                                        << (0x3fU & (IData)(vlSelf->top__DOT__exe_1__DOT__alu_src2)))),64);
            tracep->chgQData(oldp+468,((vlSelf->top__DOT__exe_1__DOT__alu_src1 
                                        >> (0x3fU & (IData)(vlSelf->top__DOT__exe_1__DOT__alu_src2)))),64);
            tracep->chgQData(oldp+470,(VL_SHIFTRS_QQI(64,64,6, vlSelf->top__DOT__exe_1__DOT__alu_src1, 
                                                      (0x3fU 
                                                       & (IData)(vlSelf->top__DOT__exe_1__DOT__alu_src2)))),64);
            tracep->chgQData(oldp+472,((0xfffffffffffff000ULL 
                                        & vlSelf->top__DOT__exe_1__DOT__alu_src2)),64);
            tracep->chgQData(oldp+474,((vlSelf->top__DOT__exe_1__DOT__alu_src1 
                                        * vlSelf->top__DOT__exe_1__DOT__alu_src2)),64);
            tracep->chgQData(oldp+476,(VL_DIV_QQQ(64, vlSelf->top__DOT__exe_1__DOT__alu_src1, vlSelf->top__DOT__exe_1__DOT__alu_src2)),64);
            tracep->chgQData(oldp+478,(VL_DIVS_QQQ(64, vlSelf->top__DOT__exe_1__DOT__alu_src1, vlSelf->top__DOT__exe_1__DOT__alu_src2)),64);
            tracep->chgQData(oldp+480,(VL_MODDIV_QQQ(64, vlSelf->top__DOT__exe_1__DOT__alu_src1, vlSelf->top__DOT__exe_1__DOT__alu_src2)),64);
            tracep->chgQData(oldp+482,(VL_MODDIVS_QQQ(64, vlSelf->top__DOT__exe_1__DOT__alu_src1, vlSelf->top__DOT__exe_1__DOT__alu_src2)),64);
            tracep->chgQData(oldp+484,(vlSelf->top__DOT__exe_1__DOT__alu2__DOT__adder_b),64);
            tracep->chgBit(oldp+486,(vlSelf->top__DOT__exe_1__DOT__alu2__DOT__adder_cin));
            tracep->chgBit(oldp+487,(vlSelf->top__DOT__exe_1__DOT__alu2__DOT__adder_cout));
            tracep->chgQData(oldp+488,(vlSelf->top__DOT__exe_1__DOT__alu2__DOT__alu_result_uw),64);
            tracep->chgQData(oldp+490,((((QData)((IData)(
                                                         (- (IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__exe_1__DOT__alu2__DOT__alu_result_uw 
                                                                                >> 0x1fU))))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->top__DOT__exe_1__DOT__alu2__DOT__alu_result_uw)))),64);
            tracep->chgWData(oldp+492,(vlSelf->top__DOT__exe_1__DOT__alu2__DOT____Vcellinp__mux1____pinNumber3),130);
            tracep->chgWData(oldp+497,(vlSelf->top__DOT__exe_1__DOT__alu2__DOT__mux1__DOT__i0__DOT__pair_list[0]),65);
            tracep->chgWData(oldp+500,(vlSelf->top__DOT__exe_1__DOT__alu2__DOT__mux1__DOT__i0__DOT__pair_list[1]),65);
            tracep->chgBit(oldp+503,(vlSelf->top__DOT__exe_1__DOT__alu2__DOT__mux1__DOT__i0__DOT__key_list[0]));
            tracep->chgBit(oldp+504,(vlSelf->top__DOT__exe_1__DOT__alu2__DOT__mux1__DOT__i0__DOT__key_list[1]));
            tracep->chgQData(oldp+505,(vlSelf->top__DOT__exe_1__DOT__alu2__DOT__mux1__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+507,(vlSelf->top__DOT__exe_1__DOT__alu2__DOT__mux1__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+509,(vlSelf->top__DOT__exe_1__DOT__alu2__DOT__mux1__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+511,(vlSelf->top__DOT__exe_1__DOT__alu2__DOT__mux1__DOT__i0__DOT__hit));
            tracep->chgBit(oldp+512,((5U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__cache_state))));
            tracep->chgBit(oldp+513,(vlSelf->top__DOT__mem_2__DOT__use_cache));
            tracep->chgQData(oldp+514,(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld),64);
            tracep->chgQData(oldp+516,(((0x3fU >= (0x38U 
                                                   & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__araddr 
                                                      << 3U)))
                                         ? (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                                            [(0x3fU 
                                              & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__araddr 
                                                 >> 6U))]
                                            [(7U & 
                                              (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__araddr 
                                               >> 3U))] 
                                            >> (0x38U 
                                                & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__araddr 
                                                   << 3U)))
                                         : 0ULL)),64);
            tracep->chgQData(oldp+518,(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld_device),64);
            tracep->chgQData(oldp+520,((((QData)((IData)(
                                                         (- (IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                                                                                >> 0x1fU))))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))),64);
            tracep->chgQData(oldp+522,((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld))),64);
            tracep->chgQData(oldp+524,((((- (QData)((IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                                                                        >> 0xfU)))))) 
                                         << 0x10U) 
                                        | (QData)((IData)(
                                                          (0xffffU 
                                                           & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))))),64);
            tracep->chgQData(oldp+526,((QData)((IData)(
                                                       (0xffffU 
                                                        & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld))))),64);
            tracep->chgQData(oldp+528,((((- (QData)((IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                                                                        >> 7U)))))) 
                                         << 8U) | (QData)((IData)(
                                                                  (0xffU 
                                                                   & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))))),64);
            tracep->chgQData(oldp+530,((QData)((IData)(
                                                       (0xffU 
                                                        & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld))))),64);
            tracep->chgWData(oldp+532,(vlSelf->top__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3),497);
            tracep->chgWData(oldp+548,(vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list[0]),71);
            tracep->chgWData(oldp+551,(vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list[1]),71);
            tracep->chgWData(oldp+554,(vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list[2]),71);
            tracep->chgWData(oldp+557,(vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list[3]),71);
            tracep->chgWData(oldp+560,(vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list[4]),71);
            tracep->chgWData(oldp+563,(vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list[5]),71);
            tracep->chgWData(oldp+566,(vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list[6]),71);
            tracep->chgCData(oldp+569,(vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list[0]),7);
            tracep->chgCData(oldp+570,(vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list[1]),7);
            tracep->chgCData(oldp+571,(vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list[2]),7);
            tracep->chgCData(oldp+572,(vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list[3]),7);
            tracep->chgCData(oldp+573,(vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list[4]),7);
            tracep->chgCData(oldp+574,(vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list[5]),7);
            tracep->chgCData(oldp+575,(vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list[6]),7);
            tracep->chgQData(oldp+576,(vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+578,(vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+580,(vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+582,(vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+584,(vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__data_list[4]),64);
            tracep->chgQData(oldp+586,(vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__data_list[5]),64);
            tracep->chgQData(oldp+588,(vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__data_list[6]),64);
            tracep->chgQData(oldp+590,(vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+592,(vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__hit));
            tracep->chgIData(oldp+593,((IData)(vlSelf->top__DOT__exe_1__DOT__alu2__DOT__adder_result)),32);
            tracep->chgIData(oldp+594,(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__araddr),32);
            tracep->chgQData(oldp+595,(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                                       [(0x3fU & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__araddr 
                                                  >> 6U))]
                                       [(7U & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__araddr 
                                               >> 3U))]),64);
            tracep->chgCData(oldp+597,((0x3fU & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__araddr)),6);
            tracep->chgCData(oldp+598,((0x3fU & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__araddr 
                                                 >> 6U))),6);
            tracep->chgIData(oldp+599,((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__araddr 
                                        >> 0xcU)),20);
            tracep->chgCData(oldp+600,((0x3fU & (IData)(
                                                        (vlSelf->top__DOT__exe_1__DOT__alu2__DOT__adder_result 
                                                         >> 6U)))),6);
            tracep->chgCData(oldp+601,((0x3fU & (IData)(vlSelf->top__DOT__exe_1__DOT__alu2__DOT__adder_result))),6);
            tracep->chgIData(oldp+602,((0xfffffU & (IData)(
                                                           (vlSelf->top__DOT__exe_1__DOT__alu2__DOT__adder_result 
                                                            >> 0xcU)))),20);
            tracep->chgCData(oldp+603,(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__cache_state),3);
            tracep->chgBit(oldp+604,(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rcache_en));
            tracep->chgBit(oldp+605,(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__wcache_en));
            tracep->chgBit(oldp+606,((2U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__cache_state))));
            tracep->chgBit(oldp+607,((3U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__write_state))));
            tracep->chgBit(oldp+608,((3U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__read_state))));
            tracep->chgBit(oldp+609,((3U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__cache_state))));
            tracep->chgCData(oldp+610,(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__d_r_len),3);
            tracep->chgCData(oldp+611,(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__d_w_len),3);
            tracep->chgCData(oldp+612,(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__read_state),3);
            tracep->chgCData(oldp+613,(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__write_state),3);
            tracep->chgCData(oldp+614,(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__c_awlen),8);
            tracep->chgQData(oldp+615,(((1U == (IData)(vlSelf->top__DOT__wmask))
                                         ? 0xffULL : 
                                        ((3U == (IData)(vlSelf->top__DOT__wmask))
                                          ? 0xffffULL
                                          : ((0xfU 
                                              == (IData)(vlSelf->top__DOT__wmask))
                                              ? 0xffffffffULL
                                              : 0xffffffffffffffffULL)))),64);
            tracep->chgQData(oldp+617,(((0x3fU >= (0x38U 
                                                   & ((IData)(vlSelf->top__DOT__exe_1__DOT__alu2__DOT__adder_result) 
                                                      << 3U)))
                                         ? (vlSelf->top__DOT__src2 
                                            << (0x38U 
                                                & ((IData)(vlSelf->top__DOT__exe_1__DOT__alu2__DOT__adder_result) 
                                                   << 3U)))
                                         : 0ULL)),64);
            tracep->chgQData(oldp+619,(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__wmask_align),64);
            tracep->chgQData(oldp+621,(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                                       [0x38U][3U]),64);
            tracep->chgIData(oldp+623,(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__tagarray
                                       [0U]),22);
            tracep->chgIData(oldp+624,(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__unnamedblk1__DOT__i),32);
            tracep->chgIData(oldp+625,(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__unnamedblk2__DOT__i),32);
            tracep->chgIData(oldp+626,(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j),32);
            tracep->chgBit(oldp+627,(vlSelf->top__DOT__mem_2__DOT____Vcellinp__mem_read_write_0__ren));
            tracep->chgBit(oldp+628,(vlSelf->top__DOT__mem_2__DOT____Vcellinp__mem_read_write_0__wen));
            tracep->chgBit(oldp+629,((1U & (~ (IData)(vlSelf->top__DOT__mem_2__DOT__use_cache)))));
            tracep->chgBit(oldp+630,(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__rvalid));
            tracep->chgBit(oldp+631,(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__rready));
            tracep->chgBit(oldp+632,((0U == (IData)(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__axi_full_s2_1__DOT__state))));
            tracep->chgBit(oldp+633,(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__arvalid));
            tracep->chgBit(oldp+634,((1U == (IData)(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__axi_full_s2_1__DOT__c_arlen))));
            tracep->chgCData(oldp+635,(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__d_r_len),3);
            tracep->chgCData(oldp+636,(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__d_w_len),3);
            tracep->chgCData(oldp+637,(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__rresp),2);
            tracep->chgQData(oldp+638,(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__rdata_axi),64);
            tracep->chgCData(oldp+640,(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__read_state),3);
            tracep->chgBit(oldp+641,((3U == (IData)(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__read_state))));
            tracep->chgBit(oldp+642,((3U == (IData)(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__write_state))));
            tracep->chgCData(oldp+643,(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__write_state),3);
            tracep->chgBit(oldp+644,((0U == (IData)(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__axi_full_s2_1__DOT__write_state))));
            tracep->chgBit(oldp+645,((1U == (IData)(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__c_awlen))));
            tracep->chgBit(oldp+646,(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__wready));
            tracep->chgCData(oldp+647,(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__bresp),2);
            tracep->chgBit(oldp+648,(((1U == (IData)(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__write_state)) 
                                      & (2U == (IData)(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__write_state)))));
            tracep->chgBit(oldp+649,((2U == (IData)(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__axi_full_s2_1__DOT__write_state))));
            tracep->chgBit(oldp+650,(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__awvalid));
            tracep->chgBit(oldp+651,(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__wvalid));
            tracep->chgQData(oldp+652,(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__wdata),64);
            tracep->chgCData(oldp+654,(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__c_awlen),8);
            tracep->chgIData(oldp+655,(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__axi_full_s2_1__DOT__r_araddr),32);
            tracep->chgCData(oldp+656,(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__axi_full_s2_1__DOT__c_arlen),8);
            tracep->chgIData(oldp+657,(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__axi_full_s2_1__DOT__r_awaddr),32);
            tracep->chgBit(oldp+658,(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__axi_full_s2_1__DOT__testwrite));
            tracep->chgCData(oldp+659,(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__axi_full_s2_1__DOT__state),3);
            tracep->chgCData(oldp+660,(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__axi_full_s2_1__DOT__write_state),3);
            tracep->chgWData(oldp+661,(vlSelf->top__DOT__wb0__DOT____Vcellinp__mux3____pinNumber3),201);
            tracep->chgWData(oldp+668,(vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__pair_list[0]),67);
            tracep->chgWData(oldp+671,(vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__pair_list[1]),67);
            tracep->chgWData(oldp+674,(vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__pair_list[2]),67);
            tracep->chgCData(oldp+677,(vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__key_list[0]),3);
            tracep->chgCData(oldp+678,(vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__key_list[1]),3);
            tracep->chgCData(oldp+679,(vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__key_list[2]),3);
            tracep->chgQData(oldp+680,(vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+682,(vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+684,(vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+686,(vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+688,(vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__hit));
            tracep->chgCData(oldp+689,(vlSelf->top__DOT__arbiter_1__DOT__master_state),2);
            tracep->chgBit(oldp+690,((1U == (IData)(vlSelf->top__DOT__arbiter_1__DOT__master_state))));
            tracep->chgBit(oldp+691,((2U == (IData)(vlSelf->top__DOT__arbiter_1__DOT__master_state))));
            tracep->chgBit(oldp+692,(vlSelf->top__DOT__arbiter_1__DOT__arvalid));
            tracep->chgBit(oldp+693,((0U == (IData)(vlSelf->top__DOT__arbiter_1__DOT__axi_full_s2_0__DOT__state))));
            tracep->chgCData(oldp+694,(((1U == (IData)(vlSelf->top__DOT__arbiter_1__DOT__master_state))
                                         ? 1U : ((2U 
                                                  == (IData)(vlSelf->top__DOT__arbiter_1__DOT__master_state))
                                                  ? 1U
                                                  : 0U))),2);
            tracep->chgCData(oldp+695,(vlSelf->top__DOT__arbiter_1__DOT__arlen),8);
            tracep->chgCData(oldp+696,(((1U == (IData)(vlSelf->top__DOT__arbiter_1__DOT__master_state))
                                         ? 3U : ((2U 
                                                  == (IData)(vlSelf->top__DOT__arbiter_1__DOT__master_state))
                                                  ? 3U
                                                  : 0U))),3);
            tracep->chgQData(oldp+697,(vlSelf->top__DOT__arbiter_1__DOT__rdata),64);
            tracep->chgCData(oldp+699,(vlSelf->top__DOT__arbiter_1__DOT__rresp),2);
            tracep->chgBit(oldp+700,((1U & ((1U == (IData)(vlSelf->top__DOT__arbiter_1__DOT__master_state))
                                             ? (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__rready)
                                             : ((2U 
                                                 == (IData)(vlSelf->top__DOT__arbiter_1__DOT__master_state))
                                                 ? (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rready)
                                                 : 0U)))));
            tracep->chgBit(oldp+701,(vlSelf->top__DOT__arbiter_1__DOT__rvalid));
            tracep->chgBit(oldp+702,(vlSelf->top__DOT__arbiter_1__DOT__rlast));
            tracep->chgIData(oldp+703,(((2U == (IData)(vlSelf->top__DOT__arbiter_1__DOT__master_state))
                                         ? ((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__tagarray
                                             [(0x3fU 
                                               & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__araddr 
                                                  >> 6U))] 
                                             << 0xcU) 
                                            | (0xfc0U 
                                               & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__araddr))
                                         : 0U)),32);
            tracep->chgBit(oldp+704,((0U == (IData)(vlSelf->top__DOT__arbiter_1__DOT__axi_full_s2_0__DOT__write_state))));
            tracep->chgBit(oldp+705,(vlSelf->top__DOT__arbiter_1__DOT__awvalid));
            tracep->chgCData(oldp+706,(((2U == (IData)(vlSelf->top__DOT__arbiter_1__DOT__master_state))
                                         ? 1U : 0U)),2);
            tracep->chgCData(oldp+707,(((2U == (IData)(vlSelf->top__DOT__arbiter_1__DOT__master_state))
                                         ? 8U : 0U)),8);
            tracep->chgBit(oldp+708,(vlSelf->top__DOT__arbiter_1__DOT__wlast));
            tracep->chgBit(oldp+709,(vlSelf->top__DOT__arbiter_1__DOT__wready));
            tracep->chgBit(oldp+710,(vlSelf->top__DOT__arbiter_1__DOT__wvalid));
            tracep->chgQData(oldp+711,(((2U == (IData)(vlSelf->top__DOT__arbiter_1__DOT__master_state))
                                         ? vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata
                                         : 0ULL)),64);
            tracep->chgCData(oldp+713,(((2U == (IData)(vlSelf->top__DOT__arbiter_1__DOT__master_state))
                                         ? 0xffU : 0U)),8);
            tracep->chgCData(oldp+714,(vlSelf->top__DOT__arbiter_1__DOT__bresp),2);
            tracep->chgBit(oldp+715,((2U == (IData)(vlSelf->top__DOT__arbiter_1__DOT__axi_full_s2_0__DOT__write_state))));
            tracep->chgBit(oldp+716,(((2U == (IData)(vlSelf->top__DOT__arbiter_1__DOT__master_state))
                                       ? (1U & ((1U 
                                                 == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__write_state)) 
                                                & (2U 
                                                   == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__write_state))))
                                       : 0U)));
            tracep->chgIData(oldp+717,(vlSelf->top__DOT__arbiter_1__DOT__axi_full_s2_0__DOT__r_araddr),32);
            tracep->chgCData(oldp+718,(vlSelf->top__DOT__arbiter_1__DOT__axi_full_s2_0__DOT__c_arlen),8);
            tracep->chgIData(oldp+719,(vlSelf->top__DOT__arbiter_1__DOT__axi_full_s2_0__DOT__r_awaddr),32);
            tracep->chgBit(oldp+720,(vlSelf->top__DOT__arbiter_1__DOT__axi_full_s2_0__DOT__testwrite));
            tracep->chgCData(oldp+721,(vlSelf->top__DOT__arbiter_1__DOT__axi_full_s2_0__DOT__state),3);
            tracep->chgCData(oldp+722,(vlSelf->top__DOT__arbiter_1__DOT__axi_full_s2_0__DOT__write_state),3);
        }
        tracep->chgBit(oldp+723,(vlSelf->clk));
        tracep->chgBit(oldp+724,(vlSelf->rst));
        tracep->chgIData(oldp+725,(vlSelf->inst),32);
        tracep->chgQData(oldp+726,(vlSelf->cpupc),64);
        tracep->chgBit(oldp+728,(vlSelf->ebreak));
        tracep->chgBit(oldp+729,(vlSelf->not_have));
        tracep->chgQData(oldp+730,(vlSelf->dnpc),64);
        tracep->chgBit(oldp+732,(vlSelf->inst_finish));
        tracep->chgBit(oldp+733,(vlSelf->mem_finish));
        tracep->chgBit(oldp+734,(vlSelf->inst_update));
        tracep->chgIData(oldp+735,((0xffffffc0U & (IData)(vlSelf->cpupc))),32);
        tracep->chgCData(oldp+736,((0x1fU & (vlSelf->inst 
                                             >> 0xfU))),5);
        tracep->chgCData(oldp+737,((0x1fU & (vlSelf->inst 
                                             >> 0x14U))),5);
        tracep->chgCData(oldp+738,((0x1fU & (vlSelf->inst 
                                             >> 7U))),5);
        tracep->chgCData(oldp+739,((0xffU & ((IData)(1U) 
                                             << (7U 
                                                 & (vlSelf->inst 
                                                    >> 0xcU))))),8);
        tracep->chgBit(oldp+740,(((((((((((((((((((
                                                   (((((((((((((((((((((((((((((((((IData)(vlSelf->top__DOT__control_1__DOT__Add) 
                                                                                | (IData)(vlSelf->top__DOT__control_1__DOT__addi)) 
                                                                                | (IData)(vlSelf->top__DOT__control_1__DOT__ld)) 
                                                                                | ((IData)(vlSelf->top__DOT__op_d) 
                                                                                >> 2U)) 
                                                                                | (IData)(vlSelf->top__DOT__control_1__DOT__jalr)) 
                                                                               | (IData)(vlSelf->top__DOT__control_1__DOT__slt)) 
                                                                              | (IData)(vlSelf->top__DOT__control_1__DOT__sltu)) 
                                                                             | (IData)(vlSelf->top__DOT__control_1__DOT__sll)) 
                                                                            | (IData)(vlSelf->top__DOT__control_1__DOT__srl)) 
                                                                           | (IData)(vlSelf->top__DOT__control_1__DOT__sra)) 
                                                                          | (IData)(vlSelf->top__DOT__control_1__DOT__sltiu)) 
                                                                         | (IData)(vlSelf->top__DOT__control_1__DOT__andi)) 
                                                                        | (IData)(vlSelf->top__DOT__control_1__DOT__ori)) 
                                                                       | (IData)(vlSelf->top__DOT__control_1__DOT__xori)) 
                                                                      | (IData)(vlSelf->top__DOT__control_1__DOT__lw)) 
                                                                     | (IData)(vlSelf->top__DOT__control_1__DOT__lwu)) 
                                                                    | (IData)(vlSelf->top__DOT__control_1__DOT__lh)) 
                                                                   | (IData)(vlSelf->top__DOT__control_1__DOT__lhu)) 
                                                                  | (IData)(vlSelf->top__DOT__control_1__DOT__lb)) 
                                                                 | (IData)(vlSelf->top__DOT__control_1__DOT__lbu)) 
                                                                | ((IData)(vlSelf->top__DOT__op_d) 
                                                                   >> 1U)) 
                                                               | (IData)(vlSelf->top__DOT__control_1__DOT__sub)) 
                                                              | (IData)(vlSelf->top__DOT__control_1__DOT__sllw)) 
                                                             | (IData)(vlSelf->top__DOT__control_1__DOT__srlw)) 
                                                            | (IData)(vlSelf->top__DOT__control_1__DOT__sraw)) 
                                                           | (IData)(vlSelf->top__DOT__control_1__DOT__addiw)) 
                                                          | (IData)(vlSelf->top__DOT__control_1__DOT__slliw)) 
                                                         | (IData)(vlSelf->top__DOT__control_1__DOT__srliw)) 
                                                        | (IData)(vlSelf->top__DOT__control_1__DOT__sraiw)) 
                                                       | (IData)(vlSelf->top__DOT__control_1__DOT__addw)) 
                                                      | (IData)(vlSelf->top__DOT__control_1__DOT__srli)) 
                                                     | (IData)(vlSelf->top__DOT__control_1__DOT__srai)) 
                                                    | (IData)(vlSelf->top__DOT__control_1__DOT__slli)) 
                                                   | (IData)(vlSelf->top__DOT__control_1__DOT__And)) 
                                                  | (IData)(vlSelf->top__DOT__control_1__DOT__Or)) 
                                                 | (IData)(vlSelf->top__DOT__control_1__DOT__mulw)) 
                                                | (IData)(vlSelf->top__DOT__control_1__DOT__divw)) 
                                               | (IData)(vlSelf->top__DOT__control_1__DOT__remw)) 
                                              | (IData)(vlSelf->top__DOT__op_d)) 
                                             | (IData)(vlSelf->top__DOT__control_1__DOT__subw)) 
                                            | (IData)(vlSelf->top__DOT__control_1__DOT__Mul)) 
                                           | (IData)(vlSelf->top__DOT__control_1__DOT__Xor)) 
                                          | (IData)(vlSelf->top__DOT__control_1__DOT__divu)) 
                                         | (IData)(vlSelf->top__DOT__control_1__DOT__divuw)) 
                                        | (IData)(vlSelf->top__DOT__control_1__DOT__rem)) 
                                       | (IData)(vlSelf->top__DOT__control_1__DOT__div)) 
                                      | (IData)(vlSelf->top__DOT__control_1__DOT__csrrs)) 
                                     | (IData)(vlSelf->top__DOT__control_1__DOT__csrrw)) 
                                    | (IData)(vlSelf->top__DOT__control_1__DOT__remu)) 
                                   | (IData)(vlSelf->top__DOT__control_1__DOT__remuw)) 
                                  & (IData)(vlSelf->mem_finish))));
        tracep->chgBit(oldp+741,((((IData)(vlSelf->top__DOT__control_1__DOT__csrrw) 
                                   | (IData)(vlSelf->top__DOT__control_1__DOT__csrrs)) 
                                  & (IData)(vlSelf->mem_finish))));
        tracep->chgBit(oldp+742,(((IData)(vlSelf->mem_finish) 
                                  & ((IData)(vlSelf->top__DOT__e_inst) 
                                     >> 1U))));
        tracep->chgIData(oldp+743,((IData)(vlSelf->cpupc)),32);
        tracep->chgCData(oldp+744,((0x3fU & (IData)(vlSelf->cpupc))),6);
        tracep->chgCData(oldp+745,((0x3fU & (IData)(
                                                    (vlSelf->cpupc 
                                                     >> 6U)))),6);
        tracep->chgIData(oldp+746,((0xfffffU & (IData)(
                                                       (vlSelf->cpupc 
                                                        >> 0xcU)))),20);
        tracep->chgCData(oldp+747,((0x7fU & vlSelf->inst)),7);
        tracep->chgCData(oldp+748,((7U & (vlSelf->inst 
                                          >> 0xcU))),3);
        tracep->chgCData(oldp+749,((vlSelf->inst >> 0x19U)),7);
        tracep->chgQData(oldp+750,((((- (QData)((IData)(
                                                        (vlSelf->inst 
                                                         >> 0x1fU)))) 
                                     << 0xcU) | (QData)((IData)(
                                                                ((0xfe0U 
                                                                  & (vlSelf->inst 
                                                                     >> 0x14U)) 
                                                                 | (0x1fU 
                                                                    & (vlSelf->inst 
                                                                       >> 7U))))))),64);
        tracep->chgQData(oldp+752,((((- (QData)((IData)(
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
        tracep->chgQData(oldp+754,((((- (QData)((IData)(
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
        tracep->chgBit(oldp+756,((((IData)(vlSelf->inst_update) 
                                   & (~ (IData)(vlSelf->top__DOT__mem_2__DOT__use_cache))) 
                                  & ((((IData)(vlSelf->top__DOT__mem_2__DOT____Vcellinp__mem_read_write_0__ren) 
                                       & (3U == (IData)(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__read_state))) 
                                      | ((IData)(vlSelf->top__DOT__mem_2__DOT____Vcellinp__mem_read_write_0__wen) 
                                         & (3U == (IData)(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__write_state)))) 
                                     | ((~ (IData)(vlSelf->top__DOT__mem_2__DOT____Vcellinp__mem_read_write_0__ren)) 
                                        & (~ (IData)(vlSelf->top__DOT__mem_2__DOT____Vcellinp__mem_read_write_0__wen)))))));
        tracep->chgIData(oldp+757,(((1U == (IData)(vlSelf->top__DOT__arbiter_1__DOT__master_state))
                                     ? (0xffffffc0U 
                                        & (IData)(vlSelf->cpupc))
                                     : ((2U == (IData)(vlSelf->top__DOT__arbiter_1__DOT__master_state))
                                         ? (0xffffffc0U 
                                            & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__araddr)
                                         : 0U))),32);
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
