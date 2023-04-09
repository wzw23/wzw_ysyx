// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vtop__Syms;
class Vtop_VerilatedVcd;


//----------

VL_MODULE(Vtop___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_OUT8(ebreak,0,0);
    VL_OUT8(not_have,0,0);
    VL_OUT8(inst_finish,0,0);
    VL_OUT8(mem_finish,0,0);
    VL_OUT8(inst_update,0,0);
    VL_OUT(inst,31,0);
    VL_OUT64(cpupc,63,0);
    VL_OUT64(dnpc,63,0);

    // LOCAL SIGNALS
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*1:0*/ top__DOT__sel_nextpc;
        CData/*4:0*/ top__DOT__fu_7_d;
        CData/*1:0*/ top__DOT__c_raddr;
        CData/*2:0*/ top__DOT__e_inst;
        CData/*3:0*/ top__DOT__sel_alu_src1;
        CData/*2:0*/ top__DOT__sel_alu_src2;
        CData/*2:0*/ top__DOT__sel_rf_res;
        CData/*0:0*/ top__DOT__data_ram_wen;
        CData/*2:0*/ top__DOT__alu_equal;
        CData/*6:0*/ top__DOT__l_choose;
        CData/*0:0*/ top__DOT__w_choose;
        CData/*0:0*/ top__DOT__i0__DOT__arvalid;
        CData/*0:0*/ top__DOT__i0__DOT__arready;
        CData/*1:0*/ top__DOT__i0__DOT__rresp;
        CData/*0:0*/ top__DOT__i0__DOT__rvalid;
        CData/*0:0*/ top__DOT__i0__DOT__rready;
        CData/*2:0*/ top__DOT__i0__DOT__state;
        CData/*0:0*/ top__DOT__i0__DOT__mux4__DOT__i0__DOT__hit;
        CData/*0:0*/ top__DOT__i0__DOT__mux5__DOT__i0__DOT__hit;
        CData/*0:0*/ top__DOT__i0__DOT__mux0__DOT__i0__DOT__lut_out;
        CData/*0:0*/ top__DOT__i0__DOT__mux0__DOT__i0__DOT__hit;
        CData/*0:0*/ top__DOT__i0__DOT__mux1__DOT__i0__DOT__lut_out;
        CData/*0:0*/ top__DOT__i0__DOT__mux1__DOT__i0__DOT__hit;
        CData/*2:0*/ top__DOT__i0__DOT__axi_lite_s0__DOT__state;
        CData/*0:0*/ top__DOT__i0__DOT__axi_lite_s0__DOT__mux0__DOT__i0__DOT__lut_out;
        CData/*0:0*/ top__DOT__i0__DOT__axi_lite_s0__DOT__mux0__DOT__i0__DOT__hit;
        CData/*0:0*/ top__DOT__id_0__DOT__mux0__DOT__i0__DOT__hit;
        CData/*0:0*/ top__DOT__control_0__DOT__addi;
        CData/*0:0*/ top__DOT__control_0__DOT__csrrw;
        CData/*0:0*/ top__DOT__control_0__DOT__csrrs;
        CData/*0:0*/ top__DOT__control_0__DOT__andi;
        CData/*0:0*/ top__DOT__control_0__DOT__xori;
        CData/*0:0*/ top__DOT__control_0__DOT__ori;
        CData/*0:0*/ top__DOT__control_0__DOT__sll;
        CData/*0:0*/ top__DOT__control_0__DOT__srl;
        CData/*0:0*/ top__DOT__control_0__DOT__sra;
        CData/*0:0*/ top__DOT__control_0__DOT__sllw;
        CData/*0:0*/ top__DOT__control_0__DOT__srlw;
        CData/*0:0*/ top__DOT__control_0__DOT__sraw;
        CData/*0:0*/ top__DOT__control_0__DOT__addiw;
        CData/*0:0*/ top__DOT__control_0__DOT__slliw;
        CData/*0:0*/ top__DOT__control_0__DOT__srliw;
        CData/*0:0*/ top__DOT__control_0__DOT__sraiw;
        CData/*0:0*/ top__DOT__control_0__DOT__jalr;
        CData/*0:0*/ top__DOT__control_0__DOT__sd;
        CData/*0:0*/ top__DOT__control_0__DOT__sh;
        CData/*0:0*/ top__DOT__control_0__DOT__sw;
        CData/*0:0*/ top__DOT__control_0__DOT__sb;
        CData/*0:0*/ top__DOT__control_0__DOT__lw;
        CData/*0:0*/ top__DOT__control_0__DOT__lwu;
        CData/*0:0*/ top__DOT__control_0__DOT__lh;
        CData/*0:0*/ top__DOT__control_0__DOT__lhu;
        CData/*0:0*/ top__DOT__control_0__DOT__lb;
        CData/*0:0*/ top__DOT__control_0__DOT__lbu;
        CData/*0:0*/ top__DOT__control_0__DOT__ld;
        CData/*0:0*/ top__DOT__control_0__DOT__addw;
        CData/*0:0*/ top__DOT__control_0__DOT__subw;
        CData/*0:0*/ top__DOT__control_0__DOT__mulw;
        CData/*0:0*/ top__DOT__control_0__DOT__divw;
        CData/*0:0*/ top__DOT__control_0__DOT__divuw;
        CData/*0:0*/ top__DOT__control_0__DOT__remw;
        CData/*0:0*/ top__DOT__control_0__DOT__remuw;
        CData/*0:0*/ top__DOT__control_0__DOT__divu;
        CData/*0:0*/ top__DOT__control_0__DOT__div;
    };
    struct {
        CData/*0:0*/ top__DOT__control_0__DOT__rem;
        CData/*0:0*/ top__DOT__control_0__DOT__remu;
        CData/*0:0*/ top__DOT__control_0__DOT__Add;
        CData/*0:0*/ top__DOT__control_0__DOT__Mul;
        CData/*0:0*/ top__DOT__control_0__DOT__And;
        CData/*0:0*/ top__DOT__control_0__DOT__Xor;
        CData/*0:0*/ top__DOT__control_0__DOT__Or;
        CData/*0:0*/ top__DOT__control_0__DOT__sltu;
        CData/*0:0*/ top__DOT__control_0__DOT__slt;
        CData/*0:0*/ top__DOT__control_0__DOT__sub;
        CData/*0:0*/ top__DOT__control_0__DOT__sltiu;
        CData/*0:0*/ top__DOT__control_0__DOT__srai;
        CData/*0:0*/ top__DOT__control_0__DOT__slli;
        CData/*0:0*/ top__DOT__control_0__DOT__srli;
        CData/*0:0*/ top__DOT__control_0__DOT__beq;
        CData/*0:0*/ top__DOT__control_0__DOT__bne;
        CData/*0:0*/ top__DOT__control_0__DOT__bge;
        CData/*0:0*/ top__DOT__control_0__DOT__bgeu;
        CData/*0:0*/ top__DOT__control_0__DOT__bltu;
        CData/*0:0*/ top__DOT__control_0__DOT__blt;
        CData/*0:0*/ top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__hit;
        CData/*0:0*/ top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__hit;
        CData/*0:0*/ top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__hit;
        CData/*0:0*/ top__DOT__exe_0__DOT__alu2__DOT__adder_cin;
        CData/*0:0*/ top__DOT__exe_0__DOT__alu2__DOT__adder_cout;
        CData/*0:0*/ top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__hit;
        CData/*0:0*/ top__DOT__mem0__DOT__arvalid;
        CData/*0:0*/ top__DOT__mem0__DOT__arready;
        CData/*1:0*/ top__DOT__mem0__DOT__rresp;
        CData/*0:0*/ top__DOT__mem0__DOT__rvalid;
        CData/*0:0*/ top__DOT__mem0__DOT__rready;
        CData/*0:0*/ top__DOT__mem0__DOT__awvalid;
        CData/*0:0*/ top__DOT__mem0__DOT__wvalid;
        CData/*1:0*/ top__DOT__mem0__DOT__bresp;
        CData/*0:0*/ top__DOT__mem0__DOT__bvalid;
        CData/*2:0*/ top__DOT__mem0__DOT__read_state;
        CData/*2:0*/ top__DOT__mem0__DOT__write_state;
        CData/*2:0*/ top__DOT__mem0__DOT__mem_state;
        CData/*0:0*/ top__DOT__mem0__DOT__mux3__DOT__i0__DOT__hit;
        CData/*0:0*/ top__DOT__mem0__DOT__mux1__DOT__i0__DOT__lut_out;
        CData/*0:0*/ top__DOT__mem0__DOT__mux1__DOT__i0__DOT__hit;
        CData/*2:0*/ top__DOT__mem0__DOT__axi_lite_s2_0__DOT__state;
        CData/*2:0*/ top__DOT__mem0__DOT__axi_lite_s2_0__DOT__write_state;
        CData/*0:0*/ top__DOT__mem0__DOT__axi_lite_s2_0__DOT__mux0__DOT__i0__DOT__lut_out;
        CData/*0:0*/ top__DOT__mem0__DOT__axi_lite_s2_0__DOT__mux0__DOT__i0__DOT__hit;
        CData/*0:0*/ top__DOT__wb0__DOT__mux3__DOT__i0__DOT__hit;
        SData/*11:0*/ top__DOT__op_d;
        IData/*16:0*/ top__DOT__alu_control;
        IData/*31:0*/ top__DOT__i0__DOT__mux4__DOT__i0__DOT__i;
        IData/*31:0*/ top__DOT__i0__DOT__mux5__DOT__i0__DOT__i;
        IData/*31:0*/ top__DOT__i0__DOT__mux0__DOT__i0__DOT__i;
        IData/*31:0*/ top__DOT__i0__DOT__mux1__DOT__i0__DOT__i;
        IData/*31:0*/ top__DOT__i0__DOT__axi_lite_s0__DOT__r_araddr;
        IData/*31:0*/ top__DOT__i0__DOT__axi_lite_s0__DOT__mux0__DOT__i0__DOT__i;
        IData/*31:0*/ top__DOT__id_0__DOT__mux0__DOT__i0__DOT__i;
        IData/*31:0*/ top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__i;
        IData/*31:0*/ top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__i;
        IData/*31:0*/ top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__i;
        IData/*31:0*/ top__DOT__exe_0__DOT__r0__DOT__i;
        IData/*31:0*/ top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__i;
        IData/*31:0*/ top__DOT__mem0__DOT__mux3__DOT__i0__DOT__i;
        IData/*31:0*/ top__DOT__mem0__DOT__mux1__DOT__i0__DOT__i;
        IData/*31:0*/ top__DOT__mem0__DOT__axi_lite_s2_0__DOT__r_araddr;
        IData/*31:0*/ top__DOT__mem0__DOT__axi_lite_s2_0__DOT__mux0__DOT__i0__DOT__i;
    };
    struct {
        IData/*31:0*/ top__DOT__wb0__DOT__mux3__DOT__i0__DOT__i;
        QData/*63:0*/ top__DOT__c_rdata;
        QData/*63:0*/ top__DOT__imm;
        QData/*63:0*/ top__DOT__src1;
        QData/*63:0*/ top__DOT__src2;
        QData/*63:0*/ top__DOT__alu_result;
        QData/*63:0*/ top__DOT__ram_data;
        QData/*63:0*/ top__DOT__wdata;
        QData/*63:0*/ top__DOT__i0__DOT__dnpc_0;
        QData/*63:0*/ top__DOT__i0__DOT__rdata;
        QData/*63:0*/ top__DOT__i0__DOT__r_rdata;
        QData/*63:0*/ top__DOT__i0__DOT__mux4__DOT__i0__DOT__lut_out;
        QData/*63:0*/ top__DOT__i0__DOT__mux5__DOT__i0__DOT__lut_out;
        QData/*63:0*/ top__DOT__id_0__DOT__immi;
        QData/*63:0*/ top__DOT__id_0__DOT__immu;
        QData/*63:0*/ top__DOT__id_0__DOT__mux0__DOT__i0__DOT__lut_out;
        QData/*63:0*/ top__DOT__exe_0__DOT__alu_src1;
        QData/*63:0*/ top__DOT__exe_0__DOT__alu_src2;
        QData/*63:0*/ top__DOT__exe_0__DOT__c_wdata;
        QData/*63:0*/ top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__lut_out;
        QData/*63:0*/ top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__lut_out;
        QData/*63:0*/ top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__lut_out;
        QData/*63:0*/ top__DOT__exe_0__DOT__alu2__DOT__slt_result;
        QData/*63:0*/ top__DOT__exe_0__DOT__alu2__DOT__or_result;
        QData/*63:0*/ top__DOT__exe_0__DOT__alu2__DOT__adder_b;
        QData/*63:0*/ top__DOT__exe_0__DOT__alu2__DOT__adder_result;
        QData/*63:0*/ top__DOT__exe_0__DOT__alu2__DOT__alu_result_uw;
        QData/*63:0*/ top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__lut_out;
        QData/*63:0*/ top__DOT__mem0__DOT__rdata;
        QData/*63:0*/ top__DOT__mem0__DOT__reg_rdata;
        QData/*63:0*/ top__DOT__mem0__DOT__mux3__DOT__i0__DOT__lut_out;
        QData/*63:0*/ top__DOT__wb0__DOT__mux3__DOT__i0__DOT__lut_out;
        VlUnpacked<VlWide<3>/*65:0*/, 4> top__DOT__i0__DOT__mux4__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*1:0*/, 4> top__DOT__i0__DOT__mux4__DOT__i0__DOT__key_list;
        VlUnpacked<QData/*63:0*/, 4> top__DOT__i0__DOT__mux4__DOT__i0__DOT__data_list;
        VlUnpacked<VlWide<3>/*64:0*/, 2> top__DOT__i0__DOT__mux5__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*0:0*/, 2> top__DOT__i0__DOT__mux5__DOT__i0__DOT__key_list;
        VlUnpacked<QData/*63:0*/, 2> top__DOT__i0__DOT__mux5__DOT__i0__DOT__data_list;
        VlUnpacked<CData/*3:0*/, 3> top__DOT__i0__DOT__mux0__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*2:0*/, 3> top__DOT__i0__DOT__mux0__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*0:0*/, 3> top__DOT__i0__DOT__mux0__DOT__i0__DOT__data_list;
        VlUnpacked<CData/*3:0*/, 3> top__DOT__i0__DOT__mux1__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*2:0*/, 3> top__DOT__i0__DOT__mux1__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*0:0*/, 3> top__DOT__i0__DOT__mux1__DOT__i0__DOT__data_list;
        VlUnpacked<CData/*3:0*/, 3> top__DOT__i0__DOT__axi_lite_s0__DOT__mux0__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*2:0*/, 3> top__DOT__i0__DOT__axi_lite_s0__DOT__mux0__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*0:0*/, 3> top__DOT__i0__DOT__axi_lite_s0__DOT__mux0__DOT__i0__DOT__data_list;
        VlUnpacked<VlWide<3>/*75:0*/, 10> top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list;
        VlUnpacked<SData/*11:0*/, 10> top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list;
        VlUnpacked<QData/*63:0*/, 10> top__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list;
        VlUnpacked<VlWide<3>/*67:0*/, 4> top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*3:0*/, 4> top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__key_list;
        VlUnpacked<QData/*63:0*/, 4> top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__data_list;
        VlUnpacked<VlWide<3>/*66:0*/, 3> top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*2:0*/, 3> top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__key_list;
        VlUnpacked<QData/*63:0*/, 3> top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__data_list;
        VlUnpacked<VlWide<3>/*64:0*/, 2> top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*0:0*/, 2> top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__key_list;
        VlUnpacked<QData/*63:0*/, 2> top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__data_list;
        VlUnpacked<QData/*63:0*/, 32> top__DOT__exe_0__DOT__r0__DOT__rf;
        VlUnpacked<QData/*63:0*/, 4> top__DOT__exe_0__DOT__r0__DOT__csr;
        VlUnpacked<VlWide<3>/*64:0*/, 2> top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*0:0*/, 2> top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__key_list;
        VlUnpacked<QData/*63:0*/, 2> top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__data_list;
    };
    struct {
        VlUnpacked<VlWide<3>/*70:0*/, 7> top__DOT__mem0__DOT__mux3__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*6:0*/, 7> top__DOT__mem0__DOT__mux3__DOT__i0__DOT__key_list;
        VlUnpacked<QData/*63:0*/, 7> top__DOT__mem0__DOT__mux3__DOT__i0__DOT__data_list;
        VlUnpacked<CData/*3:0*/, 3> top__DOT__mem0__DOT__mux1__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*2:0*/, 3> top__DOT__mem0__DOT__mux1__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*0:0*/, 3> top__DOT__mem0__DOT__mux1__DOT__i0__DOT__data_list;
        VlUnpacked<CData/*3:0*/, 2> top__DOT__mem0__DOT__axi_lite_s2_0__DOT__mux0__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*2:0*/, 2> top__DOT__mem0__DOT__axi_lite_s2_0__DOT__mux0__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*0:0*/, 2> top__DOT__mem0__DOT__axi_lite_s2_0__DOT__mux0__DOT__i0__DOT__data_list;
        VlUnpacked<VlWide<3>/*66:0*/, 3> top__DOT__wb0__DOT__mux3__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*2:0*/, 3> top__DOT__wb0__DOT__mux3__DOT__i0__DOT__key_list;
        VlUnpacked<QData/*63:0*/, 3> top__DOT__wb0__DOT__mux3__DOT__i0__DOT__data_list;
    };

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk;
    VlWide<9>/*263:0*/ top__DOT__i0__DOT____Vcellinp__mux4____pinNumber3;
    VlWide<5>/*129:0*/ top__DOT__i0__DOT____Vcellinp__mux5____pinNumber3;
    VlWide<24>/*759:0*/ top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3;
    VlWide<9>/*271:0*/ top__DOT__exe_0__DOT____Vcellinp__mux1____pinNumber3;
    VlWide<7>/*200:0*/ top__DOT__exe_0__DOT____Vcellinp__mux2____pinNumber3;
    VlWide<5>/*129:0*/ top__DOT__exe_0__DOT____Vcellinp__mux3____pinNumber3;
    VlWide<5>/*129:0*/ top__DOT__exe_0__DOT__alu2__DOT____Vcellinp__mux1____pinNumber3;
    VlWide<16>/*496:0*/ top__DOT__mem0__DOT____Vcellinp__mux3____pinNumber3;
    VlWide<7>/*200:0*/ top__DOT__wb0__DOT____Vcellinp__mux3____pinNumber3;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtop___024root);  ///< Copying not allowed
  public:
    Vtop___024root(const char* name);
    ~Vtop___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vtop__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
