// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated_heavy.h"
#include "verilated_cov.h"

//==========

class Vtop__Syms;
class Vtop_VerilatedVcd;


//----------

VL_MODULE(Vtop___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN(inst,31,0);
    VL_OUT(cpupc,31,0);

    // LOCAL SIGNALS
    CData/*2:0*/ top__DOT__sel_alu_src2;
    CData/*0:0*/ top__DOT__rf_wen;
    CData/*0:0*/ top__DOT__data_ram_wen;
    CData/*7:0*/ top__DOT__wmask;
    CData/*0:0*/ top__DOT__control_0__DOT__addi;
    CData/*0:0*/ top__DOT__control_0__DOT__slliw;
    CData/*0:0*/ top__DOT__control_0__DOT__srliw;
    CData/*0:0*/ top__DOT__control_0__DOT__sraiw;
    CData/*0:0*/ top__DOT__control_0__DOT__auipc;
    CData/*0:0*/ top__DOT__control_0__DOT__lui;
    CData/*0:0*/ top__DOT__control_0__DOT__jalr;
    CData/*0:0*/ top__DOT__control_0__DOT__sd;
    CData/*0:0*/ top__DOT__control_0__DOT__sh;
    CData/*0:0*/ top__DOT__control_0__DOT__sw;
    CData/*0:0*/ top__DOT__control_0__DOT__sb;
    CData/*0:0*/ top__DOT__control_0__DOT__lw;
    CData/*0:0*/ top__DOT__control_0__DOT__divw;
    CData/*0:0*/ top__DOT__control_0__DOT__divuw;
    CData/*0:0*/ top__DOT__control_0__DOT__remu;
    CData/*0:0*/ top__DOT__control_0__DOT__remw;
    CData/*0:0*/ top__DOT__control_0__DOT__Add;
    SData/*11:0*/ top__DOT__alu_control;
    IData/*31:0*/ top__DOT__exe_0__DOT__r0__DOT__i;
    QData/*63:0*/ top__DOT__imm;
    QData/*63:0*/ top__DOT__alu_result;
    QData/*63:0*/ top__DOT__ram_addr;
    QData/*63:0*/ top__DOT__ram_data;
    QData/*63:0*/ top__DOT__src1;
    QData/*63:0*/ top__DOT__exe_0__DOT__src2;
    QData/*63:0*/ top__DOT__exe_0__DOT__alu_src1;
    QData/*63:0*/ top__DOT__exe_0__DOT__alu_src2;
    QData/*63:0*/ top__DOT__exe_0__DOT__wdata;
    VlUnpacked<QData/*63:0*/, 32> top__DOT__exe_0__DOT__r0__DOT__rf;

    // LOCAL VARIABLES
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ top__DOT____Vtogcov__clk;
        CData/*0:0*/ top__DOT____Vtogcov__rst;
        CData/*2:0*/ top__DOT____Vtogcov__sel_alu_src1;
        CData/*2:0*/ top__DOT____Vtogcov__sel_alu_src2;
        CData/*0:0*/ top__DOT____Vtogcov__rf_wen;
        CData/*0:0*/ top__DOT____Vtogcov__sel_rf_res;
        CData/*0:0*/ top__DOT____Vtogcov__data_ram_wen;
        CData/*7:0*/ top__DOT____Vtogcov__wmask;
        CData/*0:0*/ top__DOT__control_0__DOT____Vtogcov__op_0010011;
        CData/*0:0*/ top__DOT__control_0__DOT____Vtogcov__op_1110011;
        CData/*0:0*/ top__DOT__control_0__DOT____Vtogcov__op_0111011;
        CData/*0:0*/ top__DOT__control_0__DOT____Vtogcov__op_0110011;
        CData/*0:0*/ top__DOT__control_0__DOT____Vtogcov__op_1100011;
        CData/*0:0*/ top__DOT__control_0__DOT____Vtogcov__op_0000011;
        CData/*0:0*/ top__DOT__control_0__DOT____Vtogcov__op_0011011;
        CData/*0:0*/ top__DOT__control_0__DOT____Vtogcov__op_0100011;
        CData/*0:0*/ top__DOT__control_0__DOT____Vtogcov__fu_7_0000000;
        CData/*0:0*/ top__DOT__control_0__DOT____Vtogcov__fu_7_0100000;
        CData/*0:0*/ top__DOT__control_0__DOT____Vtogcov__fu_7_0000001;
        CData/*0:0*/ top__DOT__control_0__DOT____Vtogcov__fu_3_000;
        CData/*0:0*/ top__DOT__control_0__DOT____Vtogcov__fu_3_001;
        CData/*0:0*/ top__DOT__control_0__DOT____Vtogcov__fu_3_010;
        CData/*0:0*/ top__DOT__control_0__DOT____Vtogcov__fu_3_011;
        CData/*0:0*/ top__DOT__control_0__DOT____Vtogcov__fu_3_100;
        CData/*0:0*/ top__DOT__control_0__DOT____Vtogcov__fu_3_101;
        CData/*0:0*/ top__DOT__control_0__DOT____Vtogcov__fu_3_110;
        CData/*0:0*/ top__DOT__control_0__DOT____Vtogcov__fu_3_111;
        CData/*0:0*/ top__DOT__control_0__DOT____Vtogcov__addi;
        CData/*0:0*/ top__DOT__control_0__DOT____Vtogcov__csrrw;
        CData/*0:0*/ top__DOT__control_0__DOT____Vtogcov__csrrs;
        CData/*0:0*/ top__DOT__control_0__DOT____Vtogcov__andi;
        CData/*0:0*/ top__DOT__control_0__DOT____Vtogcov__xori;
        CData/*0:0*/ top__DOT__control_0__DOT____Vtogcov__ori;
        CData/*0:0*/ top__DOT__control_0__DOT____Vtogcov__sllw;
        CData/*0:0*/ top__DOT__control_0__DOT____Vtogcov__sll;
        CData/*0:0*/ top__DOT__control_0__DOT____Vtogcov__srlw;
        CData/*0:0*/ top__DOT__control_0__DOT____Vtogcov__sraw;
        CData/*0:0*/ top__DOT__control_0__DOT____Vtogcov__addiw;
        CData/*0:0*/ top__DOT__control_0__DOT____Vtogcov__slliw;
        CData/*0:0*/ top__DOT__control_0__DOT____Vtogcov__srliw;
        CData/*0:0*/ top__DOT__control_0__DOT____Vtogcov__sraiw;
        CData/*0:0*/ top__DOT__control_0__DOT____Vtogcov__auipc;
        CData/*0:0*/ top__DOT__control_0__DOT____Vtogcov__lui;
        CData/*0:0*/ top__DOT__control_0__DOT____Vtogcov__jal;
        CData/*0:0*/ top__DOT__control_0__DOT____Vtogcov__jalr;
        CData/*0:0*/ top__DOT__control_0__DOT____Vtogcov__sd;
        CData/*0:0*/ top__DOT__control_0__DOT____Vtogcov__sh;
        CData/*0:0*/ top__DOT__control_0__DOT____Vtogcov__sw;
        CData/*0:0*/ top__DOT__control_0__DOT____Vtogcov__sb;
        CData/*0:0*/ top__DOT__control_0__DOT____Vtogcov__lh;
        CData/*0:0*/ top__DOT__control_0__DOT____Vtogcov__lb;
        CData/*0:0*/ top__DOT__control_0__DOT____Vtogcov__lbu;
        CData/*0:0*/ top__DOT__control_0__DOT____Vtogcov__lwu;
        CData/*0:0*/ top__DOT__control_0__DOT____Vtogcov__lhu;
        CData/*0:0*/ top__DOT__control_0__DOT____Vtogcov__ld;
        CData/*0:0*/ top__DOT__control_0__DOT____Vtogcov__addw;
        CData/*0:0*/ top__DOT__control_0__DOT____Vtogcov__subw;
        CData/*0:0*/ top__DOT__control_0__DOT____Vtogcov__mulw;
        CData/*0:0*/ top__DOT__control_0__DOT____Vtogcov__divw;
        CData/*0:0*/ top__DOT__control_0__DOT____Vtogcov__divuw;
        CData/*0:0*/ top__DOT__control_0__DOT____Vtogcov__divu;
        CData/*0:0*/ top__DOT__control_0__DOT____Vtogcov__div;
        CData/*0:0*/ top__DOT__control_0__DOT____Vtogcov__rem;
        CData/*0:0*/ top__DOT__control_0__DOT____Vtogcov__remu;
    };
    struct {
        CData/*0:0*/ top__DOT__control_0__DOT____Vtogcov__remw;
        CData/*0:0*/ top__DOT__control_0__DOT____Vtogcov__Mul;
        CData/*0:0*/ top__DOT__control_0__DOT____Vtogcov__And;
        CData/*0:0*/ top__DOT__control_0__DOT____Vtogcov__Xor;
        CData/*0:0*/ top__DOT__control_0__DOT____Vtogcov__Or;
        CData/*0:0*/ top__DOT__control_0__DOT____Vtogcov__sltu;
        CData/*0:0*/ top__DOT__control_0__DOT____Vtogcov__slt;
        CData/*0:0*/ top__DOT__control_0__DOT____Vtogcov__sub;
        CData/*0:0*/ top__DOT__control_0__DOT____Vtogcov__sltiu;
        CData/*0:0*/ top__DOT__control_0__DOT____Vtogcov__srai;
        CData/*0:0*/ top__DOT__control_0__DOT____Vtogcov__beq;
        CData/*0:0*/ top__DOT__control_0__DOT____Vtogcov__bne;
        CData/*0:0*/ top__DOT__control_0__DOT____Vtogcov__bge;
        CData/*0:0*/ top__DOT__control_0__DOT____Vtogcov__bgeu;
        CData/*0:0*/ top__DOT__control_0__DOT____Vtogcov__bltu;
        CData/*0:0*/ top__DOT__control_0__DOT____Vtogcov__blt;
        CData/*0:0*/ __Vclklast__TOP__clk;
        SData/*11:0*/ top__DOT____Vtogcov__alu_control;
        IData/*31:0*/ top__DOT____Vtogcov__inst;
        IData/*31:0*/ top__DOT____Vtogcov__cpupc;
        IData/*31:0*/ top__DOT____Vtogcov__dnpc;
        QData/*63:0*/ top__DOT____Vtogcov__imm;
        QData/*63:0*/ top__DOT____Vtogcov__alu_result;
        QData/*63:0*/ top__DOT____Vtogcov__ram_addr;
        QData/*63:0*/ top__DOT____Vtogcov__ram_data;
        QData/*63:0*/ top__DOT____Vtogcov__src1;
        QData/*63:0*/ top__DOT__exe_0__DOT____Vtogcov__src2;
        QData/*63:0*/ top__DOT__exe_0__DOT____Vtogcov__alu_src1;
        QData/*63:0*/ top__DOT__exe_0__DOT____Vtogcov__alu_src2;
        QData/*63:0*/ top__DOT__exe_0__DOT____Vtogcov__wdata;
        QData/*63:0*/ __Vtask_top__DOT__mem0__DOT__vpmem_read__0__mrdata;
        VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    };

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;  // Symbol table
    // Coverage
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);

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
