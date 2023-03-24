// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========


void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf);

Vtop___024root::Vtop___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vtop___024root___ctor_var_reset(this);
}

void Vtop___024root___configure_coverage(Vtop___024root* vlSelf, bool first);

void Vtop___024root::__Vconfigure(Vtop__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
    Vtop___024root___configure_coverage(this, first);
}

Vtop___024root::~Vtop___024root() {
}

// Coverage
void Vtop___024root::__vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
    const char* hierp, const char* pagep, const char* commentp, const char* linescovp) {
    uint32_t* count32p = countp;
    static uint32_t fake_zero_count = 0;
    if (!enable) count32p = &fake_zero_count;
    *count32p = 0;
    VL_COVER_INSERT(vlSymsp->_vm_contextp__->coveragep(), count32p,  "filename",filenamep,  "lineno",lineno,  "column",column,
        "hier",std::string(name())+hierp,  "page",pagep,  "comment",commentp,  (linescovp[0] ? "linescov" : ""), linescovp);
}

void Vtop___024root____Vdpiimwrap_top__DOT__mem0__DOT__vpmem_read_TOP(QData/*63:0*/ mraddr, QData/*63:0*/ &mrdata);
void Vtop___024root____Vdpiimwrap_top__DOT__mem0__DOT__vpmem_write_TOP(QData/*63:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ wmask, QData/*63:0*/ use_wen);

void Vtop___024root___settle__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__1\n"); );
    // Body
    if (((IData)(vlSelf->top__DOT__control_0__DOT__srliw) 
         ^ (IData)(vlSelf->top__DOT__control_0__DOT____Vtogcov__srliw))) {
        ++(vlSymsp->__Vcoverage[463]);
        vlSelf->top__DOT__control_0__DOT____Vtogcov__srliw 
            = vlSelf->top__DOT__control_0__DOT__srliw;
    }
    if (((IData)(vlSelf->top__DOT__control_0__DOT__auipc) 
         ^ (IData)(vlSelf->top__DOT__control_0__DOT____Vtogcov__auipc))) {
        ++(vlSymsp->__Vcoverage[465]);
        vlSelf->top__DOT__control_0__DOT____Vtogcov__auipc 
            = vlSelf->top__DOT__control_0__DOT__auipc;
    }
    if (((IData)(vlSelf->top__DOT__control_0__DOT__lui) 
         ^ (IData)(vlSelf->top__DOT__control_0__DOT____Vtogcov__lui))) {
        ++(vlSymsp->__Vcoverage[466]);
        vlSelf->top__DOT__control_0__DOT____Vtogcov__lui 
            = vlSelf->top__DOT__control_0__DOT__lui;
    }
    if (((IData)(vlSelf->top__DOT__control_0__DOT__jalr) 
         ^ (IData)(vlSelf->top__DOT__control_0__DOT____Vtogcov__jalr))) {
        ++(vlSymsp->__Vcoverage[468]);
        vlSelf->top__DOT__control_0__DOT____Vtogcov__jalr 
            = vlSelf->top__DOT__control_0__DOT__jalr;
    }
    if (((IData)(vlSelf->top__DOT__control_0__DOT__divuw) 
         ^ (IData)(vlSelf->top__DOT__control_0__DOT____Vtogcov__divuw))) {
        ++(vlSymsp->__Vcoverage[483]);
        vlSelf->top__DOT__control_0__DOT____Vtogcov__divuw 
            = vlSelf->top__DOT__control_0__DOT__divuw;
    }
    if (((IData)(vlSelf->top__DOT__control_0__DOT__remw) 
         ^ (IData)(vlSelf->top__DOT__control_0__DOT____Vtogcov__remw))) {
        ++(vlSymsp->__Vcoverage[488]);
        vlSelf->top__DOT__control_0__DOT____Vtogcov__remw 
            = vlSelf->top__DOT__control_0__DOT__remw;
    }
    if ((1U & vlSelf->top__DOT____Vtogcov__dnpc)) {
        ++(vlSymsp->__Vcoverage[66]);
        vlSelf->top__DOT____Vtogcov__dnpc = (0xfffffffeU 
                                             & vlSelf->top__DOT____Vtogcov__dnpc);
    }
    if ((1U & (~ (vlSelf->top__DOT____Vtogcov__dnpc 
                  >> 2U)))) {
        ++(vlSymsp->__Vcoverage[67]);
        vlSelf->top__DOT____Vtogcov__dnpc = (4U | vlSelf->top__DOT____Vtogcov__dnpc);
    }
    if (((IData)(vlSelf->clk) ^ (IData)(vlSelf->top__DOT____Vtogcov__clk))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->top__DOT____Vtogcov__clk = vlSelf->clk;
    }
    if (((IData)(vlSelf->rst) ^ (IData)(vlSelf->top__DOT____Vtogcov__rst))) {
        ++(vlSymsp->__Vcoverage[1]);
        vlSelf->top__DOT____Vtogcov__rst = vlSelf->rst;
    }
    if (((0x13U == (0x7fU & vlSelf->inst)) ^ (IData)(vlSelf->top__DOT__control_0__DOT____Vtogcov__op_0010011))) {
        ++(vlSymsp->__Vcoverage[432]);
        vlSelf->top__DOT__control_0__DOT____Vtogcov__op_0010011 
            = (0x13U == (0x7fU & vlSelf->inst));
    }
    if (((0x73U == (0x7fU & vlSelf->inst)) ^ (IData)(vlSelf->top__DOT__control_0__DOT____Vtogcov__op_1110011))) {
        ++(vlSymsp->__Vcoverage[433]);
        vlSelf->top__DOT__control_0__DOT____Vtogcov__op_1110011 
            = (0x73U == (0x7fU & vlSelf->inst));
    }
    if (((0x3bU == (0x7fU & vlSelf->inst)) ^ (IData)(vlSelf->top__DOT__control_0__DOT____Vtogcov__op_0111011))) {
        ++(vlSymsp->__Vcoverage[434]);
        vlSelf->top__DOT__control_0__DOT____Vtogcov__op_0111011 
            = (0x3bU == (0x7fU & vlSelf->inst));
    }
    if (((0x33U == (0x7fU & vlSelf->inst)) ^ (IData)(vlSelf->top__DOT__control_0__DOT____Vtogcov__op_0110011))) {
        ++(vlSymsp->__Vcoverage[435]);
        vlSelf->top__DOT__control_0__DOT____Vtogcov__op_0110011 
            = (0x33U == (0x7fU & vlSelf->inst));
    }
    if (((0x63U == (0x7fU & vlSelf->inst)) ^ (IData)(vlSelf->top__DOT__control_0__DOT____Vtogcov__op_1100011))) {
        ++(vlSymsp->__Vcoverage[436]);
        vlSelf->top__DOT__control_0__DOT____Vtogcov__op_1100011 
            = (0x63U == (0x7fU & vlSelf->inst));
    }
    if (((3U == (0x7fU & vlSelf->inst)) ^ (IData)(vlSelf->top__DOT__control_0__DOT____Vtogcov__op_0000011))) {
        ++(vlSymsp->__Vcoverage[437]);
        vlSelf->top__DOT__control_0__DOT____Vtogcov__op_0000011 
            = (3U == (0x7fU & vlSelf->inst));
    }
    if (((0x1bU == (0x7fU & vlSelf->inst)) ^ (IData)(vlSelf->top__DOT__control_0__DOT____Vtogcov__op_0011011))) {
        ++(vlSymsp->__Vcoverage[438]);
        vlSelf->top__DOT__control_0__DOT____Vtogcov__op_0011011 
            = (0x1bU == (0x7fU & vlSelf->inst));
    }
    if (((0x23U == (0x7fU & vlSelf->inst)) ^ (IData)(vlSelf->top__DOT__control_0__DOT____Vtogcov__op_0100011))) {
        ++(vlSymsp->__Vcoverage[439]);
        vlSelf->top__DOT__control_0__DOT____Vtogcov__op_0100011 
            = (0x23U == (0x7fU & vlSelf->inst));
    }
    if (((0U == (vlSelf->inst >> 0x19U)) ^ (IData)(vlSelf->top__DOT__control_0__DOT____Vtogcov__fu_7_0000000))) {
        ++(vlSymsp->__Vcoverage[440]);
        vlSelf->top__DOT__control_0__DOT____Vtogcov__fu_7_0000000 
            = (0U == (vlSelf->inst >> 0x19U));
    }
    if (((0x20U == (vlSelf->inst >> 0x19U)) ^ (IData)(vlSelf->top__DOT__control_0__DOT____Vtogcov__fu_7_0100000))) {
        ++(vlSymsp->__Vcoverage[441]);
        vlSelf->top__DOT__control_0__DOT____Vtogcov__fu_7_0100000 
            = (0x20U == (vlSelf->inst >> 0x19U));
    }
    if (((1U == (vlSelf->inst >> 0x19U)) ^ (IData)(vlSelf->top__DOT__control_0__DOT____Vtogcov__fu_7_0000001))) {
        ++(vlSymsp->__Vcoverage[442]);
        vlSelf->top__DOT__control_0__DOT____Vtogcov__fu_7_0000001 
            = (1U == (vlSelf->inst >> 0x19U));
    }
    if (((0U == (7U & (vlSelf->inst >> 0xcU))) ^ (IData)(vlSelf->top__DOT__control_0__DOT____Vtogcov__fu_3_000))) {
        ++(vlSymsp->__Vcoverage[443]);
        vlSelf->top__DOT__control_0__DOT____Vtogcov__fu_3_000 
            = (0U == (7U & (vlSelf->inst >> 0xcU)));
    }
    if (((1U == (7U & (vlSelf->inst >> 0xcU))) ^ (IData)(vlSelf->top__DOT__control_0__DOT____Vtogcov__fu_3_001))) {
        ++(vlSymsp->__Vcoverage[444]);
        vlSelf->top__DOT__control_0__DOT____Vtogcov__fu_3_001 
            = (1U == (7U & (vlSelf->inst >> 0xcU)));
    }
    if (((2U == (7U & (vlSelf->inst >> 0xcU))) ^ (IData)(vlSelf->top__DOT__control_0__DOT____Vtogcov__fu_3_010))) {
        ++(vlSymsp->__Vcoverage[445]);
        vlSelf->top__DOT__control_0__DOT____Vtogcov__fu_3_010 
            = (2U == (7U & (vlSelf->inst >> 0xcU)));
    }
    if (((3U == (7U & (vlSelf->inst >> 0xcU))) ^ (IData)(vlSelf->top__DOT__control_0__DOT____Vtogcov__fu_3_011))) {
        ++(vlSymsp->__Vcoverage[446]);
        vlSelf->top__DOT__control_0__DOT____Vtogcov__fu_3_011 
            = (3U == (7U & (vlSelf->inst >> 0xcU)));
    }
    if (((4U == (7U & (vlSelf->inst >> 0xcU))) ^ (IData)(vlSelf->top__DOT__control_0__DOT____Vtogcov__fu_3_100))) {
        ++(vlSymsp->__Vcoverage[447]);
        vlSelf->top__DOT__control_0__DOT____Vtogcov__fu_3_100 
            = (4U == (7U & (vlSelf->inst >> 0xcU)));
    }
    if (((5U == (7U & (vlSelf->inst >> 0xcU))) ^ (IData)(vlSelf->top__DOT__control_0__DOT____Vtogcov__fu_3_101))) {
        ++(vlSymsp->__Vcoverage[448]);
        vlSelf->top__DOT__control_0__DOT____Vtogcov__fu_3_101 
            = (5U == (7U & (vlSelf->inst >> 0xcU)));
    }
    if (((6U == (7U & (vlSelf->inst >> 0xcU))) ^ (IData)(vlSelf->top__DOT__control_0__DOT____Vtogcov__fu_3_110))) {
        ++(vlSymsp->__Vcoverage[449]);
        vlSelf->top__DOT__control_0__DOT____Vtogcov__fu_3_110 
            = (6U == (7U & (vlSelf->inst >> 0xcU)));
    }
    if (((7U == (7U & (vlSelf->inst >> 0xcU))) ^ (IData)(vlSelf->top__DOT__control_0__DOT____Vtogcov__fu_3_111))) {
        ++(vlSymsp->__Vcoverage[450]);
        vlSelf->top__DOT__control_0__DOT____Vtogcov__fu_3_111 
            = (7U == (7U & (vlSelf->inst >> 0xcU)));
    }
    if (((IData)((0x1073U == (0x707fU & vlSelf->inst))) 
         ^ (IData)(vlSelf->top__DOT__control_0__DOT____Vtogcov__csrrw))) {
        ++(vlSymsp->__Vcoverage[452]);
        vlSelf->top__DOT__control_0__DOT____Vtogcov__csrrw 
            = (IData)((0x1073U == (0x707fU & vlSelf->inst)));
    }
    if (((IData)((0x2073U == (0x707fU & vlSelf->inst))) 
         ^ (IData)(vlSelf->top__DOT__control_0__DOT____Vtogcov__csrrs))) {
        ++(vlSymsp->__Vcoverage[453]);
        vlSelf->top__DOT__control_0__DOT____Vtogcov__csrrs 
            = (IData)((0x2073U == (0x707fU & vlSelf->inst)));
    }
    if (((IData)((0x7013U == (0x707fU & vlSelf->inst))) 
         ^ (IData)(vlSelf->top__DOT__control_0__DOT____Vtogcov__andi))) {
        ++(vlSymsp->__Vcoverage[454]);
        vlSelf->top__DOT__control_0__DOT____Vtogcov__andi 
            = (IData)((0x7013U == (0x707fU & vlSelf->inst)));
    }
    if (((IData)((0x4013U == (0x707fU & vlSelf->inst))) 
         ^ (IData)(vlSelf->top__DOT__control_0__DOT____Vtogcov__xori))) {
        ++(vlSymsp->__Vcoverage[455]);
        vlSelf->top__DOT__control_0__DOT____Vtogcov__xori 
            = (IData)((0x4013U == (0x707fU & vlSelf->inst)));
    }
    if (((IData)((0x6013U == (0x707fU & vlSelf->inst))) 
         ^ (IData)(vlSelf->top__DOT__control_0__DOT____Vtogcov__ori))) {
        ++(vlSymsp->__Vcoverage[456]);
        vlSelf->top__DOT__control_0__DOT____Vtogcov__ori 
            = (IData)((0x6013U == (0x707fU & vlSelf->inst)));
    }
    if (((IData)(((0x103bU == (0x707fU & vlSelf->inst)) 
                  & (0U == (vlSelf->inst >> 0x19U)))) 
         ^ (IData)(vlSelf->top__DOT__control_0__DOT____Vtogcov__sllw))) {
        ++(vlSymsp->__Vcoverage[457]);
        vlSelf->top__DOT__control_0__DOT____Vtogcov__sllw 
            = (IData)(((0x103bU == (0x707fU & vlSelf->inst)) 
                       & (0U == (vlSelf->inst >> 0x19U))));
    }
    if (((IData)(((0x1033U == (0x707fU & vlSelf->inst)) 
                  & (0U == (vlSelf->inst >> 0x19U)))) 
         ^ (IData)(vlSelf->top__DOT__control_0__DOT____Vtogcov__sll))) {
        ++(vlSymsp->__Vcoverage[458]);
        vlSelf->top__DOT__control_0__DOT____Vtogcov__sll 
            = (IData)(((0x1033U == (0x707fU & vlSelf->inst)) 
                       & (0U == (vlSelf->inst >> 0x19U))));
    }
    if (((IData)(((0x503bU == (0x707fU & vlSelf->inst)) 
                  & (0U == (vlSelf->inst >> 0x19U)))) 
         ^ (IData)(vlSelf->top__DOT__control_0__DOT____Vtogcov__srlw))) {
        ++(vlSymsp->__Vcoverage[459]);
        vlSelf->top__DOT__control_0__DOT____Vtogcov__srlw 
            = (IData)(((0x503bU == (0x707fU & vlSelf->inst)) 
                       & (0U == (vlSelf->inst >> 0x19U))));
    }
    if (((IData)(((0x503bU == (0x707fU & vlSelf->inst)) 
                  & (0x20U == (vlSelf->inst >> 0x19U)))) 
         ^ (IData)(vlSelf->top__DOT__control_0__DOT____Vtogcov__sraw))) {
        ++(vlSymsp->__Vcoverage[460]);
        vlSelf->top__DOT__control_0__DOT____Vtogcov__sraw 
            = (IData)(((0x503bU == (0x707fU & vlSelf->inst)) 
                       & (0x20U == (vlSelf->inst >> 0x19U))));
    }
    if (((IData)((0x1bU == (0x707fU & vlSelf->inst))) 
         ^ (IData)(vlSelf->top__DOT__control_0__DOT____Vtogcov__addiw))) {
        ++(vlSymsp->__Vcoverage[461]);
        vlSelf->top__DOT__control_0__DOT____Vtogcov__addiw 
            = (IData)((0x1bU == (0x707fU & vlSelf->inst)));
    }
    if (((0x6fU == (0x7fU & vlSelf->inst)) ^ (IData)(vlSelf->top__DOT__control_0__DOT____Vtogcov__jal))) {
        ++(vlSymsp->__Vcoverage[467]);
        vlSelf->top__DOT__control_0__DOT____Vtogcov__jal 
            = (0x6fU == (0x7fU & vlSelf->inst));
    }
    if (((IData)((0x1003U == (0x707fU & vlSelf->inst))) 
         ^ (IData)(vlSelf->top__DOT__control_0__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[473]);
        vlSelf->top__DOT__control_0__DOT____Vtogcov__lh 
            = (IData)((0x1003U == (0x707fU & vlSelf->inst)));
    }
    if (((IData)((3U == (0x707fU & vlSelf->inst))) 
         ^ (IData)(vlSelf->top__DOT__control_0__DOT____Vtogcov__lb))) {
        ++(vlSymsp->__Vcoverage[474]);
        vlSelf->top__DOT__control_0__DOT____Vtogcov__lb 
            = (IData)((3U == (0x707fU & vlSelf->inst)));
    }
    if (((IData)((0x4003U == (0x707fU & vlSelf->inst))) 
         ^ (IData)(vlSelf->top__DOT__control_0__DOT____Vtogcov__lbu))) {
        ++(vlSymsp->__Vcoverage[475]);
        vlSelf->top__DOT__control_0__DOT____Vtogcov__lbu 
            = (IData)((0x4003U == (0x707fU & vlSelf->inst)));
    }
    if (((IData)((0x6003U == (0x707fU & vlSelf->inst))) 
         ^ (IData)(vlSelf->top__DOT__control_0__DOT____Vtogcov__lwu))) {
        ++(vlSymsp->__Vcoverage[476]);
        vlSelf->top__DOT__control_0__DOT____Vtogcov__lwu 
            = (IData)((0x6003U == (0x707fU & vlSelf->inst)));
    }
    if (((IData)((0x5003U == (0x707fU & vlSelf->inst))) 
         ^ (IData)(vlSelf->top__DOT__control_0__DOT____Vtogcov__lhu))) {
        ++(vlSymsp->__Vcoverage[477]);
        vlSelf->top__DOT__control_0__DOT____Vtogcov__lhu 
            = (IData)((0x5003U == (0x707fU & vlSelf->inst)));
    }
    if (((IData)((0x3003U == (0x707fU & vlSelf->inst))) 
         ^ (IData)(vlSelf->top__DOT__control_0__DOT____Vtogcov__ld))) {
        ++(vlSymsp->__Vcoverage[478]);
        vlSelf->top__DOT__control_0__DOT____Vtogcov__ld 
            = (IData)((0x3003U == (0x707fU & vlSelf->inst)));
    }
    if (((IData)(((0x3bU == (0x707fU & vlSelf->inst)) 
                  & (0U == (vlSelf->inst >> 0x19U)))) 
         ^ (IData)(vlSelf->top__DOT__control_0__DOT____Vtogcov__addw))) {
        ++(vlSymsp->__Vcoverage[479]);
        vlSelf->top__DOT__control_0__DOT____Vtogcov__addw 
            = (IData)(((0x3bU == (0x707fU & vlSelf->inst)) 
                       & (0U == (vlSelf->inst >> 0x19U))));
    }
    if (((IData)(((0x3bU == (0x707fU & vlSelf->inst)) 
                  & (0x20U == (vlSelf->inst >> 0x19U)))) 
         ^ (IData)(vlSelf->top__DOT__control_0__DOT____Vtogcov__subw))) {
        ++(vlSymsp->__Vcoverage[480]);
        vlSelf->top__DOT__control_0__DOT____Vtogcov__subw 
            = (IData)(((0x3bU == (0x707fU & vlSelf->inst)) 
                       & (0x20U == (vlSelf->inst >> 0x19U))));
    }
    if (((IData)(((0x3bU == (0x707fU & vlSelf->inst)) 
                  & (1U == (vlSelf->inst >> 0x19U)))) 
         ^ (IData)(vlSelf->top__DOT__control_0__DOT____Vtogcov__mulw))) {
        ++(vlSymsp->__Vcoverage[481]);
        vlSelf->top__DOT__control_0__DOT____Vtogcov__mulw 
            = (IData)(((0x3bU == (0x707fU & vlSelf->inst)) 
                       & (1U == (vlSelf->inst >> 0x19U))));
    }
    if (((IData)(((0x5033U == (0x707fU & vlSelf->inst)) 
                  & (1U == (vlSelf->inst >> 0x19U)))) 
         ^ (IData)(vlSelf->top__DOT__control_0__DOT____Vtogcov__divu))) {
        ++(vlSymsp->__Vcoverage[484]);
        vlSelf->top__DOT__control_0__DOT____Vtogcov__divu 
            = (IData)(((0x5033U == (0x707fU & vlSelf->inst)) 
                       & (1U == (vlSelf->inst >> 0x19U))));
    }
    if (((IData)(((0x4033U == (0x707fU & vlSelf->inst)) 
                  & (1U == (vlSelf->inst >> 0x19U)))) 
         ^ (IData)(vlSelf->top__DOT__control_0__DOT____Vtogcov__div))) {
        ++(vlSymsp->__Vcoverage[485]);
        vlSelf->top__DOT__control_0__DOT____Vtogcov__div 
            = (IData)(((0x4033U == (0x707fU & vlSelf->inst)) 
                       & (1U == (vlSelf->inst >> 0x19U))));
    }
    if (((IData)(((0x6033U == (0x707fU & vlSelf->inst)) 
                  & (1U == (vlSelf->inst >> 0x19U)))) 
         ^ (IData)(vlSelf->top__DOT__control_0__DOT____Vtogcov__rem))) {
        ++(vlSymsp->__Vcoverage[486]);
        vlSelf->top__DOT__control_0__DOT____Vtogcov__rem 
            = (IData)(((0x6033U == (0x707fU & vlSelf->inst)) 
                       & (1U == (vlSelf->inst >> 0x19U))));
    }
    if (((IData)(((0x33U == (0x707fU & vlSelf->inst)) 
                  & (1U == (vlSelf->inst >> 0x19U)))) 
         ^ (IData)(vlSelf->top__DOT__control_0__DOT____Vtogcov__Mul))) {
        ++(vlSymsp->__Vcoverage[489]);
        vlSelf->top__DOT__control_0__DOT____Vtogcov__Mul 
            = (IData)(((0x33U == (0x707fU & vlSelf->inst)) 
                       & (1U == (vlSelf->inst >> 0x19U))));
    }
    if (((IData)(((0x7033U == (0x707fU & vlSelf->inst)) 
                  & (0U == (vlSelf->inst >> 0x19U)))) 
         ^ (IData)(vlSelf->top__DOT__control_0__DOT____Vtogcov__And))) {
        ++(vlSymsp->__Vcoverage[490]);
        vlSelf->top__DOT__control_0__DOT____Vtogcov__And 
            = (IData)(((0x7033U == (0x707fU & vlSelf->inst)) 
                       & (0U == (vlSelf->inst >> 0x19U))));
    }
    if (((IData)(((0x4033U == (0x707fU & vlSelf->inst)) 
                  & (0U == (vlSelf->inst >> 0x19U)))) 
         ^ (IData)(vlSelf->top__DOT__control_0__DOT____Vtogcov__Xor))) {
        ++(vlSymsp->__Vcoverage[491]);
        vlSelf->top__DOT__control_0__DOT____Vtogcov__Xor 
            = (IData)(((0x4033U == (0x707fU & vlSelf->inst)) 
                       & (0U == (vlSelf->inst >> 0x19U))));
    }
    if (((IData)(((0x6033U == (0x707fU & vlSelf->inst)) 
                  & (0U == (vlSelf->inst >> 0x19U)))) 
         ^ (IData)(vlSelf->top__DOT__control_0__DOT____Vtogcov__Or))) {
        ++(vlSymsp->__Vcoverage[492]);
        vlSelf->top__DOT__control_0__DOT____Vtogcov__Or 
            = (IData)(((0x6033U == (0x707fU & vlSelf->inst)) 
                       & (0U == (vlSelf->inst >> 0x19U))));
    }
    if (((IData)(((0x3033U == (0x707fU & vlSelf->inst)) 
                  & (0U == (vlSelf->inst >> 0x19U)))) 
         ^ (IData)(vlSelf->top__DOT__control_0__DOT____Vtogcov__sltu))) {
        ++(vlSymsp->__Vcoverage[493]);
        vlSelf->top__DOT__control_0__DOT____Vtogcov__sltu 
            = (IData)(((0x3033U == (0x707fU & vlSelf->inst)) 
                       & (0U == (vlSelf->inst >> 0x19U))));
    }
    if (((IData)(((0x2033U == (0x707fU & vlSelf->inst)) 
                  & (0U == (vlSelf->inst >> 0x19U)))) 
         ^ (IData)(vlSelf->top__DOT__control_0__DOT____Vtogcov__slt))) {
        ++(vlSymsp->__Vcoverage[494]);
        vlSelf->top__DOT__control_0__DOT____Vtogcov__slt 
            = (IData)(((0x2033U == (0x707fU & vlSelf->inst)) 
                       & (0U == (vlSelf->inst >> 0x19U))));
    }
    if (((IData)(((0x33U == (0x707fU & vlSelf->inst)) 
                  & (0x20U == (vlSelf->inst >> 0x19U)))) 
         ^ (IData)(vlSelf->top__DOT__control_0__DOT____Vtogcov__sub))) {
        ++(vlSymsp->__Vcoverage[495]);
        vlSelf->top__DOT__control_0__DOT____Vtogcov__sub 
            = (IData)(((0x33U == (0x707fU & vlSelf->inst)) 
                       & (0x20U == (vlSelf->inst >> 0x19U))));
    }
    if (((IData)((0x3013U == (0x707fU & vlSelf->inst))) 
         ^ (IData)(vlSelf->top__DOT__control_0__DOT____Vtogcov__sltiu))) {
        ++(vlSymsp->__Vcoverage[496]);
        vlSelf->top__DOT__control_0__DOT____Vtogcov__sltiu 
            = (IData)((0x3013U == (0x707fU & vlSelf->inst)));
    }
    if (((IData)(((0x5013U == (0x707fU & vlSelf->inst)) 
                  & (0x20U == (vlSelf->inst >> 0x19U)))) 
         ^ (IData)(vlSelf->top__DOT__control_0__DOT____Vtogcov__srai))) {
        ++(vlSymsp->__Vcoverage[497]);
        vlSelf->top__DOT__control_0__DOT____Vtogcov__srai 
            = (IData)(((0x5013U == (0x707fU & vlSelf->inst)) 
                       & (0x20U == (vlSelf->inst >> 0x19U))));
    }
    if (((IData)((0x63U == (0x707fU & vlSelf->inst))) 
         ^ (IData)(vlSelf->top__DOT__control_0__DOT____Vtogcov__beq))) {
        ++(vlSymsp->__Vcoverage[498]);
        vlSelf->top__DOT__control_0__DOT____Vtogcov__beq 
            = (IData)((0x63U == (0x707fU & vlSelf->inst)));
    }
    if (((IData)((0x1063U == (0x707fU & vlSelf->inst))) 
         ^ (IData)(vlSelf->top__DOT__control_0__DOT____Vtogcov__bne))) {
        ++(vlSymsp->__Vcoverage[499]);
        vlSelf->top__DOT__control_0__DOT____Vtogcov__bne 
            = (IData)((0x1063U == (0x707fU & vlSelf->inst)));
    }
    if (((IData)((0x5063U == (0x707fU & vlSelf->inst))) 
         ^ (IData)(vlSelf->top__DOT__control_0__DOT____Vtogcov__bge))) {
        ++(vlSymsp->__Vcoverage[500]);
        vlSelf->top__DOT__control_0__DOT____Vtogcov__bge 
            = (IData)((0x5063U == (0x707fU & vlSelf->inst)));
    }
    if (((IData)((0x7063U == (0x707fU & vlSelf->inst))) 
         ^ (IData)(vlSelf->top__DOT__control_0__DOT____Vtogcov__bgeu))) {
        ++(vlSymsp->__Vcoverage[501]);
        vlSelf->top__DOT__control_0__DOT____Vtogcov__bgeu 
            = (IData)((0x7063U == (0x707fU & vlSelf->inst)));
    }
    if (((IData)((0x6063U == (0x707fU & vlSelf->inst))) 
         ^ (IData)(vlSelf->top__DOT__control_0__DOT____Vtogcov__bltu))) {
        ++(vlSymsp->__Vcoverage[502]);
        vlSelf->top__DOT__control_0__DOT____Vtogcov__bltu 
            = (IData)((0x6063U == (0x707fU & vlSelf->inst)));
    }
    if (((IData)((0x4063U == (0x707fU & vlSelf->inst))) 
         ^ (IData)(vlSelf->top__DOT__control_0__DOT____Vtogcov__blt))) {
        ++(vlSymsp->__Vcoverage[503]);
        vlSelf->top__DOT__control_0__DOT____Vtogcov__blt 
            = (IData)((0x4063U == (0x707fU & vlSelf->inst)));
    }
    vlSelf->top__DOT__control_0__DOT__slliw = (IData)(
                                                      ((0x501bU 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->inst)) 
                                                       & (0U 
                                                          == 
                                                          (vlSelf->inst 
                                                           >> 0x19U))));
    vlSelf->top__DOT__control_0__DOT__divw = (IData)(
                                                     ((0x503bU 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->inst)) 
                                                      & (1U 
                                                         == 
                                                         (vlSelf->inst 
                                                          >> 0x19U))));
    vlSelf->top__DOT__control_0__DOT__remu = (IData)(
                                                     ((0x603bU 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->inst)) 
                                                      & (1U 
                                                         == 
                                                         (vlSelf->inst 
                                                          >> 0x19U))));
    vlSelf->top__DOT__control_0__DOT__sraiw = (0x37U 
                                               == (0x7fU 
                                                   & vlSelf->inst));
    if ((1U & (vlSelf->inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        ++(vlSymsp->__Vcoverage[2]);
        vlSelf->top__DOT____Vtogcov__inst = ((0xfffffffeU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (1U 
                                                & vlSelf->inst));
    }
    if ((2U & (vlSelf->inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        ++(vlSymsp->__Vcoverage[3]);
        vlSelf->top__DOT____Vtogcov__inst = ((0xfffffffdU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (2U 
                                                & vlSelf->inst));
    }
    if ((4U & (vlSelf->inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        ++(vlSymsp->__Vcoverage[4]);
        vlSelf->top__DOT____Vtogcov__inst = ((0xfffffffbU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (4U 
                                                & vlSelf->inst));
    }
    if ((8U & (vlSelf->inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        ++(vlSymsp->__Vcoverage[5]);
        vlSelf->top__DOT____Vtogcov__inst = ((0xfffffff7U 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (8U 
                                                & vlSelf->inst));
    }
    if ((0x10U & (vlSelf->inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        ++(vlSymsp->__Vcoverage[6]);
        vlSelf->top__DOT____Vtogcov__inst = ((0xffffffefU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x10U 
                                                & vlSelf->inst));
    }
    if ((0x20U & (vlSelf->inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        ++(vlSymsp->__Vcoverage[7]);
        vlSelf->top__DOT____Vtogcov__inst = ((0xffffffdfU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x20U 
                                                & vlSelf->inst));
    }
    if ((0x40U & (vlSelf->inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        ++(vlSymsp->__Vcoverage[8]);
        vlSelf->top__DOT____Vtogcov__inst = ((0xffffffbfU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x40U 
                                                & vlSelf->inst));
    }
    if ((0x80U & (vlSelf->inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        ++(vlSymsp->__Vcoverage[9]);
        vlSelf->top__DOT____Vtogcov__inst = ((0xffffff7fU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x80U 
                                                & vlSelf->inst));
    }
    if ((0x100U & (vlSelf->inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        ++(vlSymsp->__Vcoverage[10]);
        vlSelf->top__DOT____Vtogcov__inst = ((0xfffffeffU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x100U 
                                                & vlSelf->inst));
    }
    if ((0x200U & (vlSelf->inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        ++(vlSymsp->__Vcoverage[11]);
        vlSelf->top__DOT____Vtogcov__inst = ((0xfffffdffU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x200U 
                                                & vlSelf->inst));
    }
    if ((0x400U & (vlSelf->inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        ++(vlSymsp->__Vcoverage[12]);
        vlSelf->top__DOT____Vtogcov__inst = ((0xfffffbffU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x400U 
                                                & vlSelf->inst));
    }
    if ((0x800U & (vlSelf->inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        ++(vlSymsp->__Vcoverage[13]);
        vlSelf->top__DOT____Vtogcov__inst = ((0xfffff7ffU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x800U 
                                                & vlSelf->inst));
    }
    if ((0x1000U & (vlSelf->inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        ++(vlSymsp->__Vcoverage[14]);
        vlSelf->top__DOT____Vtogcov__inst = ((0xffffefffU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x1000U 
                                                & vlSelf->inst));
    }
    if ((0x2000U & (vlSelf->inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        ++(vlSymsp->__Vcoverage[15]);
        vlSelf->top__DOT____Vtogcov__inst = ((0xffffdfffU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x2000U 
                                                & vlSelf->inst));
    }
    if ((0x4000U & (vlSelf->inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        ++(vlSymsp->__Vcoverage[16]);
        vlSelf->top__DOT____Vtogcov__inst = ((0xffffbfffU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x4000U 
                                                & vlSelf->inst));
    }
    if ((0x8000U & (vlSelf->inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        ++(vlSymsp->__Vcoverage[17]);
        vlSelf->top__DOT____Vtogcov__inst = ((0xffff7fffU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x8000U 
                                                & vlSelf->inst));
    }
    if ((0x10000U & (vlSelf->inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        ++(vlSymsp->__Vcoverage[18]);
        vlSelf->top__DOT____Vtogcov__inst = ((0xfffeffffU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x10000U 
                                                & vlSelf->inst));
    }
    if ((0x20000U & (vlSelf->inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        ++(vlSymsp->__Vcoverage[19]);
        vlSelf->top__DOT____Vtogcov__inst = ((0xfffdffffU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x20000U 
                                                & vlSelf->inst));
    }
    if ((0x40000U & (vlSelf->inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        ++(vlSymsp->__Vcoverage[20]);
        vlSelf->top__DOT____Vtogcov__inst = ((0xfffbffffU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x40000U 
                                                & vlSelf->inst));
    }
    if ((0x80000U & (vlSelf->inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        ++(vlSymsp->__Vcoverage[21]);
        vlSelf->top__DOT____Vtogcov__inst = ((0xfff7ffffU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x80000U 
                                                & vlSelf->inst));
    }
    if ((0x100000U & (vlSelf->inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        ++(vlSymsp->__Vcoverage[22]);
        vlSelf->top__DOT____Vtogcov__inst = ((0xffefffffU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x100000U 
                                                & vlSelf->inst));
    }
    if ((0x200000U & (vlSelf->inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        ++(vlSymsp->__Vcoverage[23]);
        vlSelf->top__DOT____Vtogcov__inst = ((0xffdfffffU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x200000U 
                                                & vlSelf->inst));
    }
    if ((0x400000U & (vlSelf->inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        ++(vlSymsp->__Vcoverage[24]);
        vlSelf->top__DOT____Vtogcov__inst = ((0xffbfffffU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x400000U 
                                                & vlSelf->inst));
    }
    if ((0x800000U & (vlSelf->inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        ++(vlSymsp->__Vcoverage[25]);
        vlSelf->top__DOT____Vtogcov__inst = ((0xff7fffffU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x800000U 
                                                & vlSelf->inst));
    }
    if ((0x1000000U & (vlSelf->inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        ++(vlSymsp->__Vcoverage[26]);
        vlSelf->top__DOT____Vtogcov__inst = ((0xfeffffffU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x1000000U 
                                                & vlSelf->inst));
    }
    if ((0x2000000U & (vlSelf->inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        ++(vlSymsp->__Vcoverage[27]);
        vlSelf->top__DOT____Vtogcov__inst = ((0xfdffffffU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x2000000U 
                                                & vlSelf->inst));
    }
    if ((0x4000000U & (vlSelf->inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        ++(vlSymsp->__Vcoverage[28]);
        vlSelf->top__DOT____Vtogcov__inst = ((0xfbffffffU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x4000000U 
                                                & vlSelf->inst));
    }
    if ((0x8000000U & (vlSelf->inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        ++(vlSymsp->__Vcoverage[29]);
        vlSelf->top__DOT____Vtogcov__inst = ((0xf7ffffffU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x8000000U 
                                                & vlSelf->inst));
    }
    if ((0x10000000U & (vlSelf->inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        ++(vlSymsp->__Vcoverage[30]);
        vlSelf->top__DOT____Vtogcov__inst = ((0xefffffffU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x10000000U 
                                                & vlSelf->inst));
    }
    if ((0x20000000U & (vlSelf->inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        ++(vlSymsp->__Vcoverage[31]);
        vlSelf->top__DOT____Vtogcov__inst = ((0xdfffffffU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x20000000U 
                                                & vlSelf->inst));
    }
    if ((0x40000000U & (vlSelf->inst ^ vlSelf->top__DOT____Vtogcov__inst))) {
        ++(vlSymsp->__Vcoverage[32]);
        vlSelf->top__DOT____Vtogcov__inst = ((0xbfffffffU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x40000000U 
                                                & vlSelf->inst));
    }
    if (((vlSelf->inst ^ vlSelf->top__DOT____Vtogcov__inst) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[33]);
        vlSelf->top__DOT____Vtogcov__inst = ((0x7fffffffU 
                                              & vlSelf->top__DOT____Vtogcov__inst) 
                                             | (0x80000000U 
                                                & vlSelf->inst));
    }
    vlSelf->top__DOT__control_0__DOT__lw = (IData)(
                                                   (0x2003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->inst)));
    ++(vlSymsp->__Vcoverage[431]);
    if ((0x40U & vlSelf->inst)) {
        if ((0x20U & vlSelf->inst)) {
            if ((0x10U & vlSelf->inst)) {
                if ((8U & vlSelf->inst)) {
                    ++(vlSymsp->__Vcoverage[430]);
                    vlSelf->top__DOT__imm = 0ULL;
                } else if ((4U & vlSelf->inst)) {
                    ++(vlSymsp->__Vcoverage[430]);
                    vlSelf->top__DOT__imm = 0ULL;
                } else if ((2U & vlSelf->inst)) {
                    if ((1U & vlSelf->inst)) {
                        ++(vlSymsp->__Vcoverage[428]);
                        vlSelf->top__DOT__imm = (((- (QData)((IData)(
                                                                     (vlSelf->inst 
                                                                      >> 0x1fU)))) 
                                                  << 0xcU) 
                                                 | (QData)((IData)(
                                                                   (vlSelf->inst 
                                                                    >> 0x14U))));
                    } else {
                        ++(vlSymsp->__Vcoverage[430]);
                        vlSelf->top__DOT__imm = 0ULL;
                    }
                } else {
                    ++(vlSymsp->__Vcoverage[430]);
                    vlSelf->top__DOT__imm = 0ULL;
                }
            } else if ((8U & vlSelf->inst)) {
                if ((4U & vlSelf->inst)) {
                    if ((2U & vlSelf->inst)) {
                        if ((1U & vlSelf->inst)) {
                            ++(vlSymsp->__Vcoverage[423]);
                            vlSelf->top__DOT__imm = 
                                (((- (QData)((IData)(
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
                                                                           >> 0x14U))))))));
                        } else {
                            ++(vlSymsp->__Vcoverage[430]);
                            vlSelf->top__DOT__imm = 0ULL;
                        }
                    } else {
                        ++(vlSymsp->__Vcoverage[430]);
                        vlSelf->top__DOT__imm = 0ULL;
                    }
                } else {
                    ++(vlSymsp->__Vcoverage[430]);
                    vlSelf->top__DOT__imm = 0ULL;
                }
            } else if ((4U & vlSelf->inst)) {
                if ((2U & vlSelf->inst)) {
                    if ((1U & vlSelf->inst)) {
                        ++(vlSymsp->__Vcoverage[425]);
                        vlSelf->top__DOT__imm = (((- (QData)((IData)(
                                                                     (vlSelf->inst 
                                                                      >> 0x1fU)))) 
                                                  << 0xcU) 
                                                 | (QData)((IData)(
                                                                   (vlSelf->inst 
                                                                    >> 0x14U))));
                    } else {
                        ++(vlSymsp->__Vcoverage[430]);
                        vlSelf->top__DOT__imm = 0ULL;
                    }
                } else {
                    ++(vlSymsp->__Vcoverage[430]);
                    vlSelf->top__DOT__imm = 0ULL;
                }
            } else if ((2U & vlSelf->inst)) {
                if ((1U & vlSelf->inst)) {
                    ++(vlSymsp->__Vcoverage[424]);
                    vlSelf->top__DOT__imm = (((- (QData)((IData)(
                                                                 (vlSelf->inst 
                                                                  >> 0x1fU)))) 
                                              << 0xdU) 
                                             | (QData)((IData)(
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
                                                                            >> 7U))))))));
                } else {
                    ++(vlSymsp->__Vcoverage[430]);
                    vlSelf->top__DOT__imm = 0ULL;
                }
            } else {
                ++(vlSymsp->__Vcoverage[430]);
                vlSelf->top__DOT__imm = 0ULL;
            }
        } else {
            ++(vlSymsp->__Vcoverage[430]);
            vlSelf->top__DOT__imm = 0ULL;
        }
    } else if ((0x20U & vlSelf->inst)) {
        if ((0x10U & vlSelf->inst)) {
            if ((8U & vlSelf->inst)) {
                ++(vlSymsp->__Vcoverage[430]);
                vlSelf->top__DOT__imm = 0ULL;
            } else if ((4U & vlSelf->inst)) {
                if ((2U & vlSelf->inst)) {
                    if ((1U & vlSelf->inst)) {
                        ++(vlSymsp->__Vcoverage[421]);
                        vlSelf->top__DOT__imm = (((QData)((IData)(
                                                                  (- (IData)(
                                                                             (vlSelf->inst 
                                                                              >> 0x1fU))))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   (0xfffff000U 
                                                                    & vlSelf->inst))));
                    } else {
                        ++(vlSymsp->__Vcoverage[430]);
                        vlSelf->top__DOT__imm = 0ULL;
                    }
                } else {
                    ++(vlSymsp->__Vcoverage[430]);
                    vlSelf->top__DOT__imm = 0ULL;
                }
            } else {
                ++(vlSymsp->__Vcoverage[430]);
                vlSelf->top__DOT__imm = 0ULL;
            }
        } else if ((8U & vlSelf->inst)) {
            ++(vlSymsp->__Vcoverage[430]);
            vlSelf->top__DOT__imm = 0ULL;
        } else if ((4U & vlSelf->inst)) {
            ++(vlSymsp->__Vcoverage[430]);
            vlSelf->top__DOT__imm = 0ULL;
        } else if ((2U & vlSelf->inst)) {
            if ((1U & vlSelf->inst)) {
                ++(vlSymsp->__Vcoverage[429]);
                vlSelf->top__DOT__imm = (((- (QData)((IData)(
                                                             (vlSelf->inst 
                                                              >> 0x1fU)))) 
                                          << 0xcU) 
                                         | (QData)((IData)(
                                                           ((0xfe0U 
                                                             & (vlSelf->inst 
                                                                >> 0x14U)) 
                                                            | (0x1fU 
                                                               & (vlSelf->inst 
                                                                  >> 7U))))));
            } else {
                ++(vlSymsp->__Vcoverage[430]);
                vlSelf->top__DOT__imm = 0ULL;
            }
        } else {
            ++(vlSymsp->__Vcoverage[430]);
            vlSelf->top__DOT__imm = 0ULL;
        }
    } else if ((0x10U & vlSelf->inst)) {
        if ((8U & vlSelf->inst)) {
            ++(vlSymsp->__Vcoverage[430]);
            vlSelf->top__DOT__imm = 0ULL;
        } else if ((4U & vlSelf->inst)) {
            if ((2U & vlSelf->inst)) {
                if ((1U & vlSelf->inst)) {
                    ++(vlSymsp->__Vcoverage[422]);
                    vlSelf->top__DOT__imm = (((QData)((IData)(
                                                              (- (IData)(
                                                                         (vlSelf->inst 
                                                                          >> 0x1fU))))) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               (0xfffff000U 
                                                                & vlSelf->inst))));
                } else {
                    ++(vlSymsp->__Vcoverage[430]);
                    vlSelf->top__DOT__imm = 0ULL;
                }
            } else {
                ++(vlSymsp->__Vcoverage[430]);
                vlSelf->top__DOT__imm = 0ULL;
            }
        } else if ((2U & vlSelf->inst)) {
            if ((1U & vlSelf->inst)) {
                ++(vlSymsp->__Vcoverage[427]);
                vlSelf->top__DOT__imm = (((- (QData)((IData)(
                                                             (vlSelf->inst 
                                                              >> 0x1fU)))) 
                                          << 0xcU) 
                                         | (QData)((IData)(
                                                           (vlSelf->inst 
                                                            >> 0x14U))));
            } else {
                ++(vlSymsp->__Vcoverage[430]);
                vlSelf->top__DOT__imm = 0ULL;
            }
        } else {
            ++(vlSymsp->__Vcoverage[430]);
            vlSelf->top__DOT__imm = 0ULL;
        }
    } else if ((8U & vlSelf->inst)) {
        ++(vlSymsp->__Vcoverage[430]);
        vlSelf->top__DOT__imm = 0ULL;
    } else if ((4U & vlSelf->inst)) {
        ++(vlSymsp->__Vcoverage[430]);
        vlSelf->top__DOT__imm = 0ULL;
    } else if ((2U & vlSelf->inst)) {
        if ((1U & vlSelf->inst)) {
            ++(vlSymsp->__Vcoverage[426]);
            vlSelf->top__DOT__imm = (((- (QData)((IData)(
                                                         (vlSelf->inst 
                                                          >> 0x1fU)))) 
                                      << 0xcU) | (QData)((IData)(
                                                                 (vlSelf->inst 
                                                                  >> 0x14U))));
        } else {
            ++(vlSymsp->__Vcoverage[430]);
            vlSelf->top__DOT__imm = 0ULL;
        }
    } else {
        ++(vlSymsp->__Vcoverage[430]);
        vlSelf->top__DOT__imm = 0ULL;
    }
    vlSelf->top__DOT__control_0__DOT__sd = (IData)(
                                                   (0x3023U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->inst)));
    vlSelf->top__DOT__control_0__DOT__sh = (IData)(
                                                   (0x1023U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->inst)));
    vlSelf->top__DOT__control_0__DOT__sb = (IData)(
                                                   (0x23U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->inst)));
    vlSelf->top__DOT__control_0__DOT__sw = (IData)(
                                                   (0x2023U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->inst)));
    vlSelf->top__DOT__control_0__DOT__addi = (IData)(
                                                     (0x67U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->inst)));
    vlSelf->top__DOT__control_0__DOT__Add = (IData)(
                                                    ((0x33U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->inst)) 
                                                     & (0U 
                                                        == 
                                                        (vlSelf->inst 
                                                         >> 0x19U))));
    if ((1U & (vlSelf->cpupc ^ vlSelf->top__DOT____Vtogcov__cpupc))) {
        ++(vlSymsp->__Vcoverage[34]);
        vlSelf->top__DOT____Vtogcov__cpupc = ((0xfffffffeU 
                                               & vlSelf->top__DOT____Vtogcov__cpupc) 
                                              | (1U 
                                                 & vlSelf->cpupc));
    }
    if ((2U & (vlSelf->cpupc ^ vlSelf->top__DOT____Vtogcov__cpupc))) {
        ++(vlSymsp->__Vcoverage[35]);
        vlSelf->top__DOT____Vtogcov__cpupc = ((0xfffffffdU 
                                               & vlSelf->top__DOT____Vtogcov__cpupc) 
                                              | (2U 
                                                 & vlSelf->cpupc));
    }
    if ((4U & (vlSelf->cpupc ^ vlSelf->top__DOT____Vtogcov__cpupc))) {
        ++(vlSymsp->__Vcoverage[36]);
        vlSelf->top__DOT____Vtogcov__cpupc = ((0xfffffffbU 
                                               & vlSelf->top__DOT____Vtogcov__cpupc) 
                                              | (4U 
                                                 & vlSelf->cpupc));
    }
    if ((8U & (vlSelf->cpupc ^ vlSelf->top__DOT____Vtogcov__cpupc))) {
        ++(vlSymsp->__Vcoverage[37]);
        vlSelf->top__DOT____Vtogcov__cpupc = ((0xfffffff7U 
                                               & vlSelf->top__DOT____Vtogcov__cpupc) 
                                              | (8U 
                                                 & vlSelf->cpupc));
    }
    if ((0x10U & (vlSelf->cpupc ^ vlSelf->top__DOT____Vtogcov__cpupc))) {
        ++(vlSymsp->__Vcoverage[38]);
        vlSelf->top__DOT____Vtogcov__cpupc = ((0xffffffefU 
                                               & vlSelf->top__DOT____Vtogcov__cpupc) 
                                              | (0x10U 
                                                 & vlSelf->cpupc));
    }
    if ((0x20U & (vlSelf->cpupc ^ vlSelf->top__DOT____Vtogcov__cpupc))) {
        ++(vlSymsp->__Vcoverage[39]);
        vlSelf->top__DOT____Vtogcov__cpupc = ((0xffffffdfU 
                                               & vlSelf->top__DOT____Vtogcov__cpupc) 
                                              | (0x20U 
                                                 & vlSelf->cpupc));
    }
    if ((0x40U & (vlSelf->cpupc ^ vlSelf->top__DOT____Vtogcov__cpupc))) {
        ++(vlSymsp->__Vcoverage[40]);
        vlSelf->top__DOT____Vtogcov__cpupc = ((0xffffffbfU 
                                               & vlSelf->top__DOT____Vtogcov__cpupc) 
                                              | (0x40U 
                                                 & vlSelf->cpupc));
    }
    if ((0x80U & (vlSelf->cpupc ^ vlSelf->top__DOT____Vtogcov__cpupc))) {
        ++(vlSymsp->__Vcoverage[41]);
        vlSelf->top__DOT____Vtogcov__cpupc = ((0xffffff7fU 
                                               & vlSelf->top__DOT____Vtogcov__cpupc) 
                                              | (0x80U 
                                                 & vlSelf->cpupc));
    }
    if ((0x100U & (vlSelf->cpupc ^ vlSelf->top__DOT____Vtogcov__cpupc))) {
        ++(vlSymsp->__Vcoverage[42]);
        vlSelf->top__DOT____Vtogcov__cpupc = ((0xfffffeffU 
                                               & vlSelf->top__DOT____Vtogcov__cpupc) 
                                              | (0x100U 
                                                 & vlSelf->cpupc));
    }
    if ((0x200U & (vlSelf->cpupc ^ vlSelf->top__DOT____Vtogcov__cpupc))) {
        ++(vlSymsp->__Vcoverage[43]);
        vlSelf->top__DOT____Vtogcov__cpupc = ((0xfffffdffU 
                                               & vlSelf->top__DOT____Vtogcov__cpupc) 
                                              | (0x200U 
                                                 & vlSelf->cpupc));
    }
    if ((0x400U & (vlSelf->cpupc ^ vlSelf->top__DOT____Vtogcov__cpupc))) {
        ++(vlSymsp->__Vcoverage[44]);
        vlSelf->top__DOT____Vtogcov__cpupc = ((0xfffffbffU 
                                               & vlSelf->top__DOT____Vtogcov__cpupc) 
                                              | (0x400U 
                                                 & vlSelf->cpupc));
    }
    if ((0x800U & (vlSelf->cpupc ^ vlSelf->top__DOT____Vtogcov__cpupc))) {
        ++(vlSymsp->__Vcoverage[45]);
        vlSelf->top__DOT____Vtogcov__cpupc = ((0xfffff7ffU 
                                               & vlSelf->top__DOT____Vtogcov__cpupc) 
                                              | (0x800U 
                                                 & vlSelf->cpupc));
    }
    if ((0x1000U & (vlSelf->cpupc ^ vlSelf->top__DOT____Vtogcov__cpupc))) {
        ++(vlSymsp->__Vcoverage[46]);
        vlSelf->top__DOT____Vtogcov__cpupc = ((0xffffefffU 
                                               & vlSelf->top__DOT____Vtogcov__cpupc) 
                                              | (0x1000U 
                                                 & vlSelf->cpupc));
    }
    if ((0x2000U & (vlSelf->cpupc ^ vlSelf->top__DOT____Vtogcov__cpupc))) {
        ++(vlSymsp->__Vcoverage[47]);
        vlSelf->top__DOT____Vtogcov__cpupc = ((0xffffdfffU 
                                               & vlSelf->top__DOT____Vtogcov__cpupc) 
                                              | (0x2000U 
                                                 & vlSelf->cpupc));
    }
    if ((0x4000U & (vlSelf->cpupc ^ vlSelf->top__DOT____Vtogcov__cpupc))) {
        ++(vlSymsp->__Vcoverage[48]);
        vlSelf->top__DOT____Vtogcov__cpupc = ((0xffffbfffU 
                                               & vlSelf->top__DOT____Vtogcov__cpupc) 
                                              | (0x4000U 
                                                 & vlSelf->cpupc));
    }
    if ((0x8000U & (vlSelf->cpupc ^ vlSelf->top__DOT____Vtogcov__cpupc))) {
        ++(vlSymsp->__Vcoverage[49]);
        vlSelf->top__DOT____Vtogcov__cpupc = ((0xffff7fffU 
                                               & vlSelf->top__DOT____Vtogcov__cpupc) 
                                              | (0x8000U 
                                                 & vlSelf->cpupc));
    }
    if ((0x10000U & (vlSelf->cpupc ^ vlSelf->top__DOT____Vtogcov__cpupc))) {
        ++(vlSymsp->__Vcoverage[50]);
        vlSelf->top__DOT____Vtogcov__cpupc = ((0xfffeffffU 
                                               & vlSelf->top__DOT____Vtogcov__cpupc) 
                                              | (0x10000U 
                                                 & vlSelf->cpupc));
    }
    if ((0x20000U & (vlSelf->cpupc ^ vlSelf->top__DOT____Vtogcov__cpupc))) {
        ++(vlSymsp->__Vcoverage[51]);
        vlSelf->top__DOT____Vtogcov__cpupc = ((0xfffdffffU 
                                               & vlSelf->top__DOT____Vtogcov__cpupc) 
                                              | (0x20000U 
                                                 & vlSelf->cpupc));
    }
    if ((0x40000U & (vlSelf->cpupc ^ vlSelf->top__DOT____Vtogcov__cpupc))) {
        ++(vlSymsp->__Vcoverage[52]);
        vlSelf->top__DOT____Vtogcov__cpupc = ((0xfffbffffU 
                                               & vlSelf->top__DOT____Vtogcov__cpupc) 
                                              | (0x40000U 
                                                 & vlSelf->cpupc));
    }
    if ((0x80000U & (vlSelf->cpupc ^ vlSelf->top__DOT____Vtogcov__cpupc))) {
        ++(vlSymsp->__Vcoverage[53]);
        vlSelf->top__DOT____Vtogcov__cpupc = ((0xfff7ffffU 
                                               & vlSelf->top__DOT____Vtogcov__cpupc) 
                                              | (0x80000U 
                                                 & vlSelf->cpupc));
    }
    if ((0x100000U & (vlSelf->cpupc ^ vlSelf->top__DOT____Vtogcov__cpupc))) {
        ++(vlSymsp->__Vcoverage[54]);
        vlSelf->top__DOT____Vtogcov__cpupc = ((0xffefffffU 
                                               & vlSelf->top__DOT____Vtogcov__cpupc) 
                                              | (0x100000U 
                                                 & vlSelf->cpupc));
    }
    if ((0x200000U & (vlSelf->cpupc ^ vlSelf->top__DOT____Vtogcov__cpupc))) {
        ++(vlSymsp->__Vcoverage[55]);
        vlSelf->top__DOT____Vtogcov__cpupc = ((0xffdfffffU 
                                               & vlSelf->top__DOT____Vtogcov__cpupc) 
                                              | (0x200000U 
                                                 & vlSelf->cpupc));
    }
    if ((0x400000U & (vlSelf->cpupc ^ vlSelf->top__DOT____Vtogcov__cpupc))) {
        ++(vlSymsp->__Vcoverage[56]);
        vlSelf->top__DOT____Vtogcov__cpupc = ((0xffbfffffU 
                                               & vlSelf->top__DOT____Vtogcov__cpupc) 
                                              | (0x400000U 
                                                 & vlSelf->cpupc));
    }
    if ((0x800000U & (vlSelf->cpupc ^ vlSelf->top__DOT____Vtogcov__cpupc))) {
        ++(vlSymsp->__Vcoverage[57]);
        vlSelf->top__DOT____Vtogcov__cpupc = ((0xff7fffffU 
                                               & vlSelf->top__DOT____Vtogcov__cpupc) 
                                              | (0x800000U 
                                                 & vlSelf->cpupc));
    }
    if ((0x1000000U & (vlSelf->cpupc ^ vlSelf->top__DOT____Vtogcov__cpupc))) {
        ++(vlSymsp->__Vcoverage[58]);
        vlSelf->top__DOT____Vtogcov__cpupc = ((0xfeffffffU 
                                               & vlSelf->top__DOT____Vtogcov__cpupc) 
                                              | (0x1000000U 
                                                 & vlSelf->cpupc));
    }
    if ((0x2000000U & (vlSelf->cpupc ^ vlSelf->top__DOT____Vtogcov__cpupc))) {
        ++(vlSymsp->__Vcoverage[59]);
        vlSelf->top__DOT____Vtogcov__cpupc = ((0xfdffffffU 
                                               & vlSelf->top__DOT____Vtogcov__cpupc) 
                                              | (0x2000000U 
                                                 & vlSelf->cpupc));
    }
    if ((0x4000000U & (vlSelf->cpupc ^ vlSelf->top__DOT____Vtogcov__cpupc))) {
        ++(vlSymsp->__Vcoverage[60]);
        vlSelf->top__DOT____Vtogcov__cpupc = ((0xfbffffffU 
                                               & vlSelf->top__DOT____Vtogcov__cpupc) 
                                              | (0x4000000U 
                                                 & vlSelf->cpupc));
    }
    if ((0x8000000U & (vlSelf->cpupc ^ vlSelf->top__DOT____Vtogcov__cpupc))) {
        ++(vlSymsp->__Vcoverage[61]);
        vlSelf->top__DOT____Vtogcov__cpupc = ((0xf7ffffffU 
                                               & vlSelf->top__DOT____Vtogcov__cpupc) 
                                              | (0x8000000U 
                                                 & vlSelf->cpupc));
    }
    if ((0x10000000U & (vlSelf->cpupc ^ vlSelf->top__DOT____Vtogcov__cpupc))) {
        ++(vlSymsp->__Vcoverage[62]);
        vlSelf->top__DOT____Vtogcov__cpupc = ((0xefffffffU 
                                               & vlSelf->top__DOT____Vtogcov__cpupc) 
                                              | (0x10000000U 
                                                 & vlSelf->cpupc));
    }
    if ((0x20000000U & (vlSelf->cpupc ^ vlSelf->top__DOT____Vtogcov__cpupc))) {
        ++(vlSymsp->__Vcoverage[63]);
        vlSelf->top__DOT____Vtogcov__cpupc = ((0xdfffffffU 
                                               & vlSelf->top__DOT____Vtogcov__cpupc) 
                                              | (0x20000000U 
                                                 & vlSelf->cpupc));
    }
    if ((0x40000000U & (vlSelf->cpupc ^ vlSelf->top__DOT____Vtogcov__cpupc))) {
        ++(vlSymsp->__Vcoverage[64]);
        vlSelf->top__DOT____Vtogcov__cpupc = ((0xbfffffffU 
                                               & vlSelf->top__DOT____Vtogcov__cpupc) 
                                              | (0x40000000U 
                                                 & vlSelf->cpupc));
    }
    if (((vlSelf->cpupc ^ vlSelf->top__DOT____Vtogcov__cpupc) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[65]);
        vlSelf->top__DOT____Vtogcov__cpupc = ((0x7fffffffU 
                                               & vlSelf->top__DOT____Vtogcov__cpupc) 
                                              | (0x80000000U 
                                                 & vlSelf->cpupc));
    }
    vlSelf->top__DOT__exe_0__DOT__src2 = vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf
        [(0x1fU & (vlSelf->inst >> 0x14U))];
    vlSelf->top__DOT__src1 = vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf
        [(0x1fU & (vlSelf->inst >> 0xfU))];
    if (((IData)(vlSelf->top__DOT__control_0__DOT__slliw) 
         ^ (IData)(vlSelf->top__DOT__control_0__DOT____Vtogcov__slliw))) {
        ++(vlSymsp->__Vcoverage[462]);
        vlSelf->top__DOT__control_0__DOT____Vtogcov__slliw 
            = vlSelf->top__DOT__control_0__DOT__slliw;
    }
    if (((IData)(vlSelf->top__DOT__control_0__DOT__divw) 
         ^ (IData)(vlSelf->top__DOT__control_0__DOT____Vtogcov__divw))) {
        ++(vlSymsp->__Vcoverage[482]);
        vlSelf->top__DOT__control_0__DOT____Vtogcov__divw 
            = vlSelf->top__DOT__control_0__DOT__divw;
    }
    if (((IData)(vlSelf->top__DOT__control_0__DOT__remu) 
         ^ (IData)(vlSelf->top__DOT__control_0__DOT____Vtogcov__remu))) {
        ++(vlSymsp->__Vcoverage[487]);
        vlSelf->top__DOT__control_0__DOT____Vtogcov__remu 
            = vlSelf->top__DOT__control_0__DOT__remu;
    }
    if (((IData)(vlSelf->top__DOT__control_0__DOT__sraiw) 
         ^ (IData)(vlSelf->top__DOT__control_0__DOT____Vtogcov__sraiw))) {
        ++(vlSymsp->__Vcoverage[464]);
        vlSelf->top__DOT__control_0__DOT____Vtogcov__sraiw 
            = vlSelf->top__DOT__control_0__DOT__sraiw;
    }
    if (((IData)(vlSelf->top__DOT__control_0__DOT__lw) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__sel_rf_res))) {
        ++(vlSymsp->__Vcoverage[151]);
        vlSelf->top__DOT____Vtogcov__sel_rf_res = vlSelf->top__DOT__control_0__DOT__lw;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__imm) ^ (IData)(vlSelf->top__DOT____Vtogcov__imm)))) {
        ++(vlSymsp->__Vcoverage[68]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xfffffffffffffffeULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | (IData)((IData)(
                                                              (1U 
                                                               & (IData)(vlSelf->top__DOT__imm)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 1U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 1U))))) {
        ++(vlSymsp->__Vcoverage[69]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xfffffffffffffffdULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 1U))))) 
                                               << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 2U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 2U))))) {
        ++(vlSymsp->__Vcoverage[70]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xfffffffffffffffbULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 2U))))) 
                                               << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 3U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 3U))))) {
        ++(vlSymsp->__Vcoverage[71]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xfffffffffffffff7ULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 3U))))) 
                                               << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 4U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 4U))))) {
        ++(vlSymsp->__Vcoverage[72]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xffffffffffffffefULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 4U))))) 
                                               << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 5U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 5U))))) {
        ++(vlSymsp->__Vcoverage[73]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xffffffffffffffdfULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 5U))))) 
                                               << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 6U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 6U))))) {
        ++(vlSymsp->__Vcoverage[74]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xffffffffffffffbfULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 6U))))) 
                                               << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 7U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 7U))))) {
        ++(vlSymsp->__Vcoverage[75]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xffffffffffffff7fULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 7U))))) 
                                               << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 8U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 8U))))) {
        ++(vlSymsp->__Vcoverage[76]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xfffffffffffffeffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 8U))))) 
                                               << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 9U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 9U))))) {
        ++(vlSymsp->__Vcoverage[77]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xfffffffffffffdffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 9U))))) 
                                               << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0xaU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[78]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xfffffffffffffbffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0xaU))))) 
                                               << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0xbU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[79]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xfffffffffffff7ffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0xbU))))) 
                                               << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0xcU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[80]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xffffffffffffefffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0xcU))))) 
                                               << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0xdU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[81]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xffffffffffffdfffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0xdU))))) 
                                               << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0xeU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[82]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xffffffffffffbfffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0xeU))))) 
                                               << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0xfU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[83]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xffffffffffff7fffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0xfU))))) 
                                               << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x10U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[84]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xfffffffffffeffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x10U))))) 
                                               << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x11U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[85]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xfffffffffffdffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x11U))))) 
                                               << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x12U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[86]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xfffffffffffbffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x12U))))) 
                                               << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x13U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[87]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xfffffffffff7ffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x13U))))) 
                                               << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x14U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[88]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xffffffffffefffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x14U))))) 
                                               << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x15U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[89]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xffffffffffdfffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x15U))))) 
                                               << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x16U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[90]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xffffffffffbfffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x16U))))) 
                                               << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x17U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[91]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xffffffffff7fffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x17U))))) 
                                               << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x18U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[92]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xfffffffffeffffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x18U))))) 
                                               << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x19U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[93]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xfffffffffdffffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x19U))))) 
                                               << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x1aU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[94]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xfffffffffbffffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x1aU))))) 
                                               << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x1bU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[95]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xfffffffff7ffffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x1bU))))) 
                                               << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x1cU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[96]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xffffffffefffffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x1cU))))) 
                                               << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x1dU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[97]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xffffffffdfffffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x1dU))))) 
                                               << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x1eU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[98]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xffffffffbfffffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x1eU))))) 
                                               << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x1fU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[99]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xffffffff7fffffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x1fU))))) 
                                               << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x20U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[100]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xfffffffeffffffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x20U))))) 
                                               << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x21U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[101]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xfffffffdffffffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x21U))))) 
                                               << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x22U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[102]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xfffffffbffffffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x22U))))) 
                                               << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x23U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[103]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xfffffff7ffffffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x23U))))) 
                                               << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x24U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[104]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xffffffefffffffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x24U))))) 
                                               << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x25U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[105]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xffffffdfffffffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x25U))))) 
                                               << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x26U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[106]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xffffffbfffffffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x26U))))) 
                                               << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x27U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[107]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xffffff7fffffffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x27U))))) 
                                               << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x28U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[108]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xfffffeffffffffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x28U))))) 
                                               << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x29U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[109]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xfffffdffffffffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x29U))))) 
                                               << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x2aU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[110]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xfffffbffffffffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x2aU))))) 
                                               << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x2bU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[111]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xfffff7ffffffffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x2bU))))) 
                                               << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x2cU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[112]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xffffefffffffffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x2cU))))) 
                                               << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x2dU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[113]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xffffdfffffffffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x2dU))))) 
                                               << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x2eU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[114]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xffffbfffffffffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x2eU))))) 
                                               << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x2fU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[115]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xffff7fffffffffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x2fU))))) 
                                               << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x30U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[116]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xfffeffffffffffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x30U))))) 
                                               << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x31U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[117]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xfffdffffffffffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x31U))))) 
                                               << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x32U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[118]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xfffbffffffffffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x32U))))) 
                                               << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x33U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[119]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xfff7ffffffffffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x33U))))) 
                                               << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x34U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[120]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xffefffffffffffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x34U))))) 
                                               << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x35U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[121]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xffdfffffffffffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x35U))))) 
                                               << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x36U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[122]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xffbfffffffffffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x36U))))) 
                                               << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x37U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[123]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xff7fffffffffffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x37U))))) 
                                               << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x38U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[124]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xfeffffffffffffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x38U))))) 
                                               << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x39U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[125]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xfdffffffffffffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x39U))))) 
                                               << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x3aU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[126]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xfbffffffffffffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x3aU))))) 
                                               << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x3bU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[127]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xf7ffffffffffffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x3bU))))) 
                                               << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x3cU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[128]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xefffffffffffffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x3cU))))) 
                                               << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x3dU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[129]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xdfffffffffffffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x3dU))))) 
                                               << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x3eU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[130]);
        vlSelf->top__DOT____Vtogcov__imm = ((0xbfffffffffffffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x3eU))))) 
                                               << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imm >> 0x3fU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__imm 
                          >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[131]);
        vlSelf->top__DOT____Vtogcov__imm = ((0x7fffffffffffffffULL 
                                             & vlSelf->top__DOT____Vtogcov__imm) 
                                            | ((QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__imm 
                                                                           >> 0x3fU))))) 
                                               << 0x3fU));
    }
    if (((IData)(vlSelf->top__DOT__control_0__DOT__sd) 
         ^ (IData)(vlSelf->top__DOT__control_0__DOT____Vtogcov__sd))) {
        ++(vlSymsp->__Vcoverage[469]);
        vlSelf->top__DOT__control_0__DOT____Vtogcov__sd 
            = vlSelf->top__DOT__control_0__DOT__sd;
    }
    if (((IData)(vlSelf->top__DOT__control_0__DOT__sh) 
         ^ (IData)(vlSelf->top__DOT__control_0__DOT____Vtogcov__sh))) {
        ++(vlSymsp->__Vcoverage[470]);
        vlSelf->top__DOT__control_0__DOT____Vtogcov__sh 
            = vlSelf->top__DOT__control_0__DOT__sh;
    }
    if (((IData)(vlSelf->top__DOT__control_0__DOT__sb) 
         ^ (IData)(vlSelf->top__DOT__control_0__DOT____Vtogcov__sb))) {
        ++(vlSymsp->__Vcoverage[472]);
        vlSelf->top__DOT__control_0__DOT____Vtogcov__sb 
            = vlSelf->top__DOT__control_0__DOT__sb;
    }
    if (((IData)(vlSelf->top__DOT__control_0__DOT__sw) 
         ^ (IData)(vlSelf->top__DOT__control_0__DOT____Vtogcov__sw))) {
        ++(vlSymsp->__Vcoverage[471]);
        vlSelf->top__DOT__control_0__DOT____Vtogcov__sw 
            = vlSelf->top__DOT__control_0__DOT__sw;
    }
    vlSelf->top__DOT__data_ram_wen = ((IData)(vlSelf->top__DOT__control_0__DOT__sd) 
                                      | (IData)(vlSelf->top__DOT__control_0__DOT__sw));
    vlSelf->top__DOT__wmask = (0xffU & ((((- (IData)((IData)(vlSelf->top__DOT__control_0__DOT__sb))) 
                                          | (0xfU & 
                                             (- (IData)((IData)(vlSelf->top__DOT__control_0__DOT__sw))))) 
                                         | (3U & (- (IData)((IData)(vlSelf->top__DOT__control_0__DOT__sh))))) 
                                        | (IData)(vlSelf->top__DOT__control_0__DOT__sb)));
    if (((IData)(vlSelf->top__DOT__control_0__DOT__addi) 
         ^ (IData)(vlSelf->top__DOT__control_0__DOT____Vtogcov__addi))) {
        ++(vlSymsp->__Vcoverage[451]);
        vlSelf->top__DOT__control_0__DOT____Vtogcov__addi 
            = vlSelf->top__DOT__control_0__DOT__addi;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__control_0__DOT__Add) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__sel_alu_src1)))) {
        ++(vlSymsp->__Vcoverage[132]);
        vlSelf->top__DOT____Vtogcov__sel_alu_src1 = 
            ((6U & (IData)(vlSelf->top__DOT____Vtogcov__sel_alu_src1)) 
             | (IData)(vlSelf->top__DOT__control_0__DOT__Add));
    }
    if ((2U & (IData)(vlSelf->top__DOT____Vtogcov__sel_alu_src1))) {
        ++(vlSymsp->__Vcoverage[133]);
        vlSelf->top__DOT____Vtogcov__sel_alu_src1 = 
            (5U & (IData)(vlSelf->top__DOT____Vtogcov__sel_alu_src1));
    }
    if ((4U & (IData)(vlSelf->top__DOT____Vtogcov__sel_alu_src1))) {
        ++(vlSymsp->__Vcoverage[134]);
        vlSelf->top__DOT____Vtogcov__sel_alu_src1 = 
            (3U & (IData)(vlSelf->top__DOT____Vtogcov__sel_alu_src1));
    }
    vlSelf->top__DOT__alu_control = (1U & (- (IData)(
                                                     ((IData)(vlSelf->top__DOT__control_0__DOT__Add) 
                                                      | (IData)(vlSelf->top__DOT__control_0__DOT__addi)))));
    vlSelf->top__DOT__sel_alu_src2 = ((1U & (- (IData)((IData)(vlSelf->top__DOT__control_0__DOT__Add)))) 
                                      | (2U & (- (IData)((IData)(vlSelf->top__DOT__control_0__DOT__addi)))));
    vlSelf->top__DOT__rf_wen = ((IData)(vlSelf->top__DOT__control_0__DOT__Add) 
                                | (IData)(vlSelf->top__DOT__control_0__DOT__addi));
    if ((1U & ((IData)(vlSelf->top__DOT__exe_0__DOT__src2) 
               ^ (IData)(vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2)))) {
        ++(vlSymsp->__Vcoverage[504]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__exe_0__DOT__src2)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__src2 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[505]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__src2 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__src2 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[506]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__src2 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__src2 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[507]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__src2 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__src2 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[508]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__src2 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__src2 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[509]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__src2 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__src2 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[510]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__src2 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__src2 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[511]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__src2 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__src2 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[512]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__src2 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__src2 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[513]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__src2 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__src2 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[514]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__src2 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__src2 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[515]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__src2 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__src2 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[516]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__src2 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__src2 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[517]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__src2 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__src2 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[518]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__src2 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__src2 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[519]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__src2 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__src2 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[520]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__src2 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__src2 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[521]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__src2 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__src2 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[522]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__src2 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__src2 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[523]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__src2 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__src2 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[524]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__src2 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__src2 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[525]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__src2 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__src2 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[526]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__src2 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__src2 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[527]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__src2 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__src2 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[528]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__src2 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__src2 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[529]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__src2 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__src2 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[530]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__src2 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__src2 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[531]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__src2 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__src2 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[532]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__src2 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__src2 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[533]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__src2 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__src2 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[534]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__src2 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__src2 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[535]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__src2 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__src2 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[536]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__src2 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__src2 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[537]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__src2 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__src2 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[538]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__src2 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__src2 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[539]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__src2 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__src2 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[540]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__src2 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__src2 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[541]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__src2 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__src2 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[542]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__src2 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__src2 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[543]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__src2 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__src2 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[544]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__src2 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__src2 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[545]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__src2 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__src2 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[546]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__src2 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__src2 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[547]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__src2 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__src2 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[548]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__src2 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__src2 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[549]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__src2 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__src2 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[550]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__src2 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__src2 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[551]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__src2 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__src2 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[552]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__src2 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__src2 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[553]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__src2 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__src2 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[554]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__src2 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__src2 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[555]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__src2 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__src2 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[556]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__src2 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__src2 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[557]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__src2 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__src2 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[558]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__src2 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__src2 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[559]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__src2 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__src2 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[560]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__src2 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__src2 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[561]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__src2 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__src2 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[562]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__src2 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__src2 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[563]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__src2 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__src2 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[564]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__src2 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__src2 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[565]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__src2 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__src2 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[566]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__src2 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__src2 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[567]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__src2 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__src1) ^ (IData)(vlSelf->top__DOT____Vtogcov__src1)))) {
        ++(vlSymsp->__Vcoverage[345]);
        vlSelf->top__DOT____Vtogcov__src1 = ((0xfffffffffffffffeULL 
                                              & vlSelf->top__DOT____Vtogcov__src1) 
                                             | (IData)((IData)(
                                                               (1U 
                                                                & (IData)(vlSelf->top__DOT__src1)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__src1 >> 1U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__src1 
                          >> 1U))))) {
        ++(vlSymsp->__Vcoverage[346]);
        vlSelf->top__DOT____Vtogcov__src1 = ((0xfffffffffffffffdULL 
                                              & vlSelf->top__DOT____Vtogcov__src1) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__src1 
                                                                            >> 1U))))) 
                                                << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__src1 >> 2U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__src1 
                          >> 2U))))) {
        ++(vlSymsp->__Vcoverage[347]);
        vlSelf->top__DOT____Vtogcov__src1 = ((0xfffffffffffffffbULL 
                                              & vlSelf->top__DOT____Vtogcov__src1) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__src1 
                                                                            >> 2U))))) 
                                                << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__src1 >> 3U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__src1 
                          >> 3U))))) {
        ++(vlSymsp->__Vcoverage[348]);
        vlSelf->top__DOT____Vtogcov__src1 = ((0xfffffffffffffff7ULL 
                                              & vlSelf->top__DOT____Vtogcov__src1) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__src1 
                                                                            >> 3U))))) 
                                                << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__src1 >> 4U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__src1 
                          >> 4U))))) {
        ++(vlSymsp->__Vcoverage[349]);
        vlSelf->top__DOT____Vtogcov__src1 = ((0xffffffffffffffefULL 
                                              & vlSelf->top__DOT____Vtogcov__src1) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__src1 
                                                                            >> 4U))))) 
                                                << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__src1 >> 5U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__src1 
                          >> 5U))))) {
        ++(vlSymsp->__Vcoverage[350]);
        vlSelf->top__DOT____Vtogcov__src1 = ((0xffffffffffffffdfULL 
                                              & vlSelf->top__DOT____Vtogcov__src1) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__src1 
                                                                            >> 5U))))) 
                                                << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__src1 >> 6U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__src1 
                          >> 6U))))) {
        ++(vlSymsp->__Vcoverage[351]);
        vlSelf->top__DOT____Vtogcov__src1 = ((0xffffffffffffffbfULL 
                                              & vlSelf->top__DOT____Vtogcov__src1) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__src1 
                                                                            >> 6U))))) 
                                                << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__src1 >> 7U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__src1 
                          >> 7U))))) {
        ++(vlSymsp->__Vcoverage[352]);
        vlSelf->top__DOT____Vtogcov__src1 = ((0xffffffffffffff7fULL 
                                              & vlSelf->top__DOT____Vtogcov__src1) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__src1 
                                                                            >> 7U))))) 
                                                << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__src1 >> 8U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__src1 
                          >> 8U))))) {
        ++(vlSymsp->__Vcoverage[353]);
        vlSelf->top__DOT____Vtogcov__src1 = ((0xfffffffffffffeffULL 
                                              & vlSelf->top__DOT____Vtogcov__src1) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__src1 
                                                                            >> 8U))))) 
                                                << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__src1 >> 9U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__src1 
                          >> 9U))))) {
        ++(vlSymsp->__Vcoverage[354]);
        vlSelf->top__DOT____Vtogcov__src1 = ((0xfffffffffffffdffULL 
                                              & vlSelf->top__DOT____Vtogcov__src1) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__src1 
                                                                            >> 9U))))) 
                                                << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__src1 >> 0xaU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__src1 
                          >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[355]);
        vlSelf->top__DOT____Vtogcov__src1 = ((0xfffffffffffffbffULL 
                                              & vlSelf->top__DOT____Vtogcov__src1) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__src1 
                                                                            >> 0xaU))))) 
                                                << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__src1 >> 0xbU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__src1 
                          >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[356]);
        vlSelf->top__DOT____Vtogcov__src1 = ((0xfffffffffffff7ffULL 
                                              & vlSelf->top__DOT____Vtogcov__src1) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__src1 
                                                                            >> 0xbU))))) 
                                                << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__src1 >> 0xcU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__src1 
                          >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[357]);
        vlSelf->top__DOT____Vtogcov__src1 = ((0xffffffffffffefffULL 
                                              & vlSelf->top__DOT____Vtogcov__src1) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__src1 
                                                                            >> 0xcU))))) 
                                                << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__src1 >> 0xdU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__src1 
                          >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[358]);
        vlSelf->top__DOT____Vtogcov__src1 = ((0xffffffffffffdfffULL 
                                              & vlSelf->top__DOT____Vtogcov__src1) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__src1 
                                                                            >> 0xdU))))) 
                                                << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__src1 >> 0xeU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__src1 
                          >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[359]);
        vlSelf->top__DOT____Vtogcov__src1 = ((0xffffffffffffbfffULL 
                                              & vlSelf->top__DOT____Vtogcov__src1) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__src1 
                                                                            >> 0xeU))))) 
                                                << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__src1 >> 0xfU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__src1 
                          >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[360]);
        vlSelf->top__DOT____Vtogcov__src1 = ((0xffffffffffff7fffULL 
                                              & vlSelf->top__DOT____Vtogcov__src1) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__src1 
                                                                            >> 0xfU))))) 
                                                << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__src1 >> 0x10U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__src1 
                          >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[361]);
        vlSelf->top__DOT____Vtogcov__src1 = ((0xfffffffffffeffffULL 
                                              & vlSelf->top__DOT____Vtogcov__src1) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__src1 
                                                                            >> 0x10U))))) 
                                                << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__src1 >> 0x11U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__src1 
                          >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[362]);
        vlSelf->top__DOT____Vtogcov__src1 = ((0xfffffffffffdffffULL 
                                              & vlSelf->top__DOT____Vtogcov__src1) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__src1 
                                                                            >> 0x11U))))) 
                                                << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__src1 >> 0x12U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__src1 
                          >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[363]);
        vlSelf->top__DOT____Vtogcov__src1 = ((0xfffffffffffbffffULL 
                                              & vlSelf->top__DOT____Vtogcov__src1) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__src1 
                                                                            >> 0x12U))))) 
                                                << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__src1 >> 0x13U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__src1 
                          >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[364]);
        vlSelf->top__DOT____Vtogcov__src1 = ((0xfffffffffff7ffffULL 
                                              & vlSelf->top__DOT____Vtogcov__src1) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__src1 
                                                                            >> 0x13U))))) 
                                                << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__src1 >> 0x14U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__src1 
                          >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[365]);
        vlSelf->top__DOT____Vtogcov__src1 = ((0xffffffffffefffffULL 
                                              & vlSelf->top__DOT____Vtogcov__src1) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__src1 
                                                                            >> 0x14U))))) 
                                                << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__src1 >> 0x15U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__src1 
                          >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[366]);
        vlSelf->top__DOT____Vtogcov__src1 = ((0xffffffffffdfffffULL 
                                              & vlSelf->top__DOT____Vtogcov__src1) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__src1 
                                                                            >> 0x15U))))) 
                                                << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__src1 >> 0x16U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__src1 
                          >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[367]);
        vlSelf->top__DOT____Vtogcov__src1 = ((0xffffffffffbfffffULL 
                                              & vlSelf->top__DOT____Vtogcov__src1) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__src1 
                                                                            >> 0x16U))))) 
                                                << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__src1 >> 0x17U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__src1 
                          >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[368]);
        vlSelf->top__DOT____Vtogcov__src1 = ((0xffffffffff7fffffULL 
                                              & vlSelf->top__DOT____Vtogcov__src1) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__src1 
                                                                            >> 0x17U))))) 
                                                << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__src1 >> 0x18U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__src1 
                          >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[369]);
        vlSelf->top__DOT____Vtogcov__src1 = ((0xfffffffffeffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__src1) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__src1 
                                                                            >> 0x18U))))) 
                                                << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__src1 >> 0x19U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__src1 
                          >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[370]);
        vlSelf->top__DOT____Vtogcov__src1 = ((0xfffffffffdffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__src1) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__src1 
                                                                            >> 0x19U))))) 
                                                << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__src1 >> 0x1aU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__src1 
                          >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[371]);
        vlSelf->top__DOT____Vtogcov__src1 = ((0xfffffffffbffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__src1) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__src1 
                                                                            >> 0x1aU))))) 
                                                << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__src1 >> 0x1bU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__src1 
                          >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[372]);
        vlSelf->top__DOT____Vtogcov__src1 = ((0xfffffffff7ffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__src1) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__src1 
                                                                            >> 0x1bU))))) 
                                                << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__src1 >> 0x1cU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__src1 
                          >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[373]);
        vlSelf->top__DOT____Vtogcov__src1 = ((0xffffffffefffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__src1) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__src1 
                                                                            >> 0x1cU))))) 
                                                << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__src1 >> 0x1dU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__src1 
                          >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[374]);
        vlSelf->top__DOT____Vtogcov__src1 = ((0xffffffffdfffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__src1) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__src1 
                                                                            >> 0x1dU))))) 
                                                << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__src1 >> 0x1eU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__src1 
                          >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[375]);
        vlSelf->top__DOT____Vtogcov__src1 = ((0xffffffffbfffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__src1) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__src1 
                                                                            >> 0x1eU))))) 
                                                << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__src1 >> 0x1fU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__src1 
                          >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[376]);
        vlSelf->top__DOT____Vtogcov__src1 = ((0xffffffff7fffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__src1) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__src1 
                                                                            >> 0x1fU))))) 
                                                << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__src1 >> 0x20U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__src1 
                          >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[377]);
        vlSelf->top__DOT____Vtogcov__src1 = ((0xfffffffeffffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__src1) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__src1 
                                                                            >> 0x20U))))) 
                                                << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__src1 >> 0x21U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__src1 
                          >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[378]);
        vlSelf->top__DOT____Vtogcov__src1 = ((0xfffffffdffffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__src1) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__src1 
                                                                            >> 0x21U))))) 
                                                << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__src1 >> 0x22U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__src1 
                          >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[379]);
        vlSelf->top__DOT____Vtogcov__src1 = ((0xfffffffbffffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__src1) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__src1 
                                                                            >> 0x22U))))) 
                                                << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__src1 >> 0x23U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__src1 
                          >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[380]);
        vlSelf->top__DOT____Vtogcov__src1 = ((0xfffffff7ffffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__src1) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__src1 
                                                                            >> 0x23U))))) 
                                                << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__src1 >> 0x24U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__src1 
                          >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[381]);
        vlSelf->top__DOT____Vtogcov__src1 = ((0xffffffefffffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__src1) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__src1 
                                                                            >> 0x24U))))) 
                                                << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__src1 >> 0x25U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__src1 
                          >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[382]);
        vlSelf->top__DOT____Vtogcov__src1 = ((0xffffffdfffffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__src1) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__src1 
                                                                            >> 0x25U))))) 
                                                << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__src1 >> 0x26U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__src1 
                          >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[383]);
        vlSelf->top__DOT____Vtogcov__src1 = ((0xffffffbfffffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__src1) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__src1 
                                                                            >> 0x26U))))) 
                                                << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__src1 >> 0x27U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__src1 
                          >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[384]);
        vlSelf->top__DOT____Vtogcov__src1 = ((0xffffff7fffffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__src1) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__src1 
                                                                            >> 0x27U))))) 
                                                << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__src1 >> 0x28U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__src1 
                          >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[385]);
        vlSelf->top__DOT____Vtogcov__src1 = ((0xfffffeffffffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__src1) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__src1 
                                                                            >> 0x28U))))) 
                                                << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__src1 >> 0x29U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__src1 
                          >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[386]);
        vlSelf->top__DOT____Vtogcov__src1 = ((0xfffffdffffffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__src1) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__src1 
                                                                            >> 0x29U))))) 
                                                << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__src1 >> 0x2aU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__src1 
                          >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[387]);
        vlSelf->top__DOT____Vtogcov__src1 = ((0xfffffbffffffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__src1) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__src1 
                                                                            >> 0x2aU))))) 
                                                << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__src1 >> 0x2bU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__src1 
                          >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[388]);
        vlSelf->top__DOT____Vtogcov__src1 = ((0xfffff7ffffffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__src1) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__src1 
                                                                            >> 0x2bU))))) 
                                                << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__src1 >> 0x2cU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__src1 
                          >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[389]);
        vlSelf->top__DOT____Vtogcov__src1 = ((0xffffefffffffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__src1) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__src1 
                                                                            >> 0x2cU))))) 
                                                << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__src1 >> 0x2dU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__src1 
                          >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[390]);
        vlSelf->top__DOT____Vtogcov__src1 = ((0xffffdfffffffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__src1) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__src1 
                                                                            >> 0x2dU))))) 
                                                << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__src1 >> 0x2eU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__src1 
                          >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[391]);
        vlSelf->top__DOT____Vtogcov__src1 = ((0xffffbfffffffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__src1) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__src1 
                                                                            >> 0x2eU))))) 
                                                << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__src1 >> 0x2fU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__src1 
                          >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[392]);
        vlSelf->top__DOT____Vtogcov__src1 = ((0xffff7fffffffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__src1) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__src1 
                                                                            >> 0x2fU))))) 
                                                << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__src1 >> 0x30U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__src1 
                          >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[393]);
        vlSelf->top__DOT____Vtogcov__src1 = ((0xfffeffffffffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__src1) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__src1 
                                                                            >> 0x30U))))) 
                                                << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__src1 >> 0x31U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__src1 
                          >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[394]);
        vlSelf->top__DOT____Vtogcov__src1 = ((0xfffdffffffffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__src1) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__src1 
                                                                            >> 0x31U))))) 
                                                << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__src1 >> 0x32U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__src1 
                          >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[395]);
        vlSelf->top__DOT____Vtogcov__src1 = ((0xfffbffffffffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__src1) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__src1 
                                                                            >> 0x32U))))) 
                                                << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__src1 >> 0x33U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__src1 
                          >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[396]);
        vlSelf->top__DOT____Vtogcov__src1 = ((0xfff7ffffffffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__src1) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__src1 
                                                                            >> 0x33U))))) 
                                                << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__src1 >> 0x34U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__src1 
                          >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[397]);
        vlSelf->top__DOT____Vtogcov__src1 = ((0xffefffffffffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__src1) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__src1 
                                                                            >> 0x34U))))) 
                                                << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__src1 >> 0x35U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__src1 
                          >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[398]);
        vlSelf->top__DOT____Vtogcov__src1 = ((0xffdfffffffffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__src1) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__src1 
                                                                            >> 0x35U))))) 
                                                << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__src1 >> 0x36U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__src1 
                          >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[399]);
        vlSelf->top__DOT____Vtogcov__src1 = ((0xffbfffffffffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__src1) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__src1 
                                                                            >> 0x36U))))) 
                                                << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__src1 >> 0x37U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__src1 
                          >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[400]);
        vlSelf->top__DOT____Vtogcov__src1 = ((0xff7fffffffffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__src1) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__src1 
                                                                            >> 0x37U))))) 
                                                << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__src1 >> 0x38U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__src1 
                          >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[401]);
        vlSelf->top__DOT____Vtogcov__src1 = ((0xfeffffffffffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__src1) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__src1 
                                                                            >> 0x38U))))) 
                                                << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__src1 >> 0x39U)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__src1 
                          >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[402]);
        vlSelf->top__DOT____Vtogcov__src1 = ((0xfdffffffffffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__src1) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__src1 
                                                                            >> 0x39U))))) 
                                                << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__src1 >> 0x3aU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__src1 
                          >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[403]);
        vlSelf->top__DOT____Vtogcov__src1 = ((0xfbffffffffffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__src1) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__src1 
                                                                            >> 0x3aU))))) 
                                                << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__src1 >> 0x3bU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__src1 
                          >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[404]);
        vlSelf->top__DOT____Vtogcov__src1 = ((0xf7ffffffffffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__src1) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__src1 
                                                                            >> 0x3bU))))) 
                                                << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__src1 >> 0x3cU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__src1 
                          >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[405]);
        vlSelf->top__DOT____Vtogcov__src1 = ((0xefffffffffffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__src1) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__src1 
                                                                            >> 0x3cU))))) 
                                                << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__src1 >> 0x3dU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__src1 
                          >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[406]);
        vlSelf->top__DOT____Vtogcov__src1 = ((0xdfffffffffffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__src1) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__src1 
                                                                            >> 0x3dU))))) 
                                                << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__src1 >> 0x3eU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__src1 
                          >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[407]);
        vlSelf->top__DOT____Vtogcov__src1 = ((0xbfffffffffffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__src1) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__src1 
                                                                            >> 0x3eU))))) 
                                                << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__src1 >> 0x3fU)) 
               ^ (IData)((vlSelf->top__DOT____Vtogcov__src1 
                          >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[408]);
        vlSelf->top__DOT____Vtogcov__src1 = ((0x7fffffffffffffffULL 
                                              & vlSelf->top__DOT____Vtogcov__src1) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__src1 
                                                                            >> 0x3fU))))) 
                                                << 0x3fU));
    }
    ++(vlSymsp->__Vcoverage[698]);
    if ((1U == (1U & (- (IData)((IData)(vlSelf->top__DOT__control_0__DOT__Add)))))) {
        ++(vlSymsp->__Vcoverage[696]);
        vlSelf->top__DOT__exe_0__DOT__alu_src1 = vlSelf->top__DOT__src1;
    } else {
        ++(vlSymsp->__Vcoverage[697]);
        vlSelf->top__DOT__exe_0__DOT__alu_src1 = 0ULL;
    }
    if (((IData)(vlSelf->top__DOT__data_ram_wen) ^ (IData)(vlSelf->top__DOT____Vtogcov__data_ram_wen))) {
        ++(vlSymsp->__Vcoverage[152]);
        vlSelf->top__DOT____Vtogcov__data_ram_wen = vlSelf->top__DOT__data_ram_wen;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__wmask) ^ (IData)(vlSelf->top__DOT____Vtogcov__wmask)))) {
        ++(vlSymsp->__Vcoverage[409]);
        vlSelf->top__DOT____Vtogcov__wmask = ((0xfeU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__wmask)) 
                                              | (1U 
                                                 & (IData)(vlSelf->top__DOT__wmask)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__wmask) ^ (IData)(vlSelf->top__DOT____Vtogcov__wmask)))) {
        ++(vlSymsp->__Vcoverage[410]);
        vlSelf->top__DOT____Vtogcov__wmask = ((0xfdU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__wmask)) 
                                              | (2U 
                                                 & (IData)(vlSelf->top__DOT__wmask)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__wmask) ^ (IData)(vlSelf->top__DOT____Vtogcov__wmask)))) {
        ++(vlSymsp->__Vcoverage[411]);
        vlSelf->top__DOT____Vtogcov__wmask = ((0xfbU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__wmask)) 
                                              | (4U 
                                                 & (IData)(vlSelf->top__DOT__wmask)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__wmask) ^ (IData)(vlSelf->top__DOT____Vtogcov__wmask)))) {
        ++(vlSymsp->__Vcoverage[412]);
        vlSelf->top__DOT____Vtogcov__wmask = ((0xf7U 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__wmask)) 
                                              | (8U 
                                                 & (IData)(vlSelf->top__DOT__wmask)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__wmask) 
                  ^ (IData)(vlSelf->top__DOT____Vtogcov__wmask)))) {
        ++(vlSymsp->__Vcoverage[413]);
        vlSelf->top__DOT____Vtogcov__wmask = ((0xefU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__wmask)) 
                                              | (0x10U 
                                                 & (IData)(vlSelf->top__DOT__wmask)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__wmask) 
                  ^ (IData)(vlSelf->top__DOT____Vtogcov__wmask)))) {
        ++(vlSymsp->__Vcoverage[414]);
        vlSelf->top__DOT____Vtogcov__wmask = ((0xdfU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__wmask)) 
                                              | (0x20U 
                                                 & (IData)(vlSelf->top__DOT__wmask)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__wmask) 
                  ^ (IData)(vlSelf->top__DOT____Vtogcov__wmask)))) {
        ++(vlSymsp->__Vcoverage[415]);
        vlSelf->top__DOT____Vtogcov__wmask = ((0xbfU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__wmask)) 
                                              | (0x40U 
                                                 & (IData)(vlSelf->top__DOT__wmask)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__wmask) 
                  ^ (IData)(vlSelf->top__DOT____Vtogcov__wmask)))) {
        ++(vlSymsp->__Vcoverage[416]);
        vlSelf->top__DOT____Vtogcov__wmask = ((0x7fU 
                                               & (IData)(vlSelf->top__DOT____Vtogcov__wmask)) 
                                              | (0x80U 
                                                 & (IData)(vlSelf->top__DOT__wmask)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__alu_control) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__alu_control)))) {
        ++(vlSymsp->__Vcoverage[138]);
        vlSelf->top__DOT____Vtogcov__alu_control = 
            ((0xffeU & (IData)(vlSelf->top__DOT____Vtogcov__alu_control)) 
             | (1U & (IData)(vlSelf->top__DOT__alu_control)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__alu_control) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__alu_control)))) {
        ++(vlSymsp->__Vcoverage[139]);
        vlSelf->top__DOT____Vtogcov__alu_control = 
            ((0xffdU & (IData)(vlSelf->top__DOT____Vtogcov__alu_control)) 
             | (2U & (IData)(vlSelf->top__DOT__alu_control)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__alu_control) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__alu_control)))) {
        ++(vlSymsp->__Vcoverage[140]);
        vlSelf->top__DOT____Vtogcov__alu_control = 
            ((0xffbU & (IData)(vlSelf->top__DOT____Vtogcov__alu_control)) 
             | (4U & (IData)(vlSelf->top__DOT__alu_control)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__alu_control) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__alu_control)))) {
        ++(vlSymsp->__Vcoverage[141]);
        vlSelf->top__DOT____Vtogcov__alu_control = 
            ((0xff7U & (IData)(vlSelf->top__DOT____Vtogcov__alu_control)) 
             | (8U & (IData)(vlSelf->top__DOT__alu_control)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__alu_control) 
                  ^ (IData)(vlSelf->top__DOT____Vtogcov__alu_control)))) {
        ++(vlSymsp->__Vcoverage[142]);
        vlSelf->top__DOT____Vtogcov__alu_control = 
            ((0xfefU & (IData)(vlSelf->top__DOT____Vtogcov__alu_control)) 
             | (0x10U & (IData)(vlSelf->top__DOT__alu_control)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__alu_control) 
                  ^ (IData)(vlSelf->top__DOT____Vtogcov__alu_control)))) {
        ++(vlSymsp->__Vcoverage[143]);
        vlSelf->top__DOT____Vtogcov__alu_control = 
            ((0xfdfU & (IData)(vlSelf->top__DOT____Vtogcov__alu_control)) 
             | (0x20U & (IData)(vlSelf->top__DOT__alu_control)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__alu_control) 
                  ^ (IData)(vlSelf->top__DOT____Vtogcov__alu_control)))) {
        ++(vlSymsp->__Vcoverage[144]);
        vlSelf->top__DOT____Vtogcov__alu_control = 
            ((0xfbfU & (IData)(vlSelf->top__DOT____Vtogcov__alu_control)) 
             | (0x40U & (IData)(vlSelf->top__DOT__alu_control)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__alu_control) 
                  ^ (IData)(vlSelf->top__DOT____Vtogcov__alu_control)))) {
        ++(vlSymsp->__Vcoverage[145]);
        vlSelf->top__DOT____Vtogcov__alu_control = 
            ((0xf7fU & (IData)(vlSelf->top__DOT____Vtogcov__alu_control)) 
             | (0x80U & (IData)(vlSelf->top__DOT__alu_control)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__alu_control) 
                   ^ (IData)(vlSelf->top__DOT____Vtogcov__alu_control)))) {
        ++(vlSymsp->__Vcoverage[146]);
        vlSelf->top__DOT____Vtogcov__alu_control = 
            ((0xeffU & (IData)(vlSelf->top__DOT____Vtogcov__alu_control)) 
             | (0x100U & (IData)(vlSelf->top__DOT__alu_control)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__alu_control) 
                   ^ (IData)(vlSelf->top__DOT____Vtogcov__alu_control)))) {
        ++(vlSymsp->__Vcoverage[147]);
        vlSelf->top__DOT____Vtogcov__alu_control = 
            ((0xdffU & (IData)(vlSelf->top__DOT____Vtogcov__alu_control)) 
             | (0x200U & (IData)(vlSelf->top__DOT__alu_control)));
    }
    if ((0x400U & ((IData)(vlSelf->top__DOT__alu_control) 
                   ^ (IData)(vlSelf->top__DOT____Vtogcov__alu_control)))) {
        ++(vlSymsp->__Vcoverage[148]);
        vlSelf->top__DOT____Vtogcov__alu_control = 
            ((0xbffU & (IData)(vlSelf->top__DOT____Vtogcov__alu_control)) 
             | (0x400U & (IData)(vlSelf->top__DOT__alu_control)));
    }
    if ((0x800U & ((IData)(vlSelf->top__DOT__alu_control) 
                   ^ (IData)(vlSelf->top__DOT____Vtogcov__alu_control)))) {
        ++(vlSymsp->__Vcoverage[149]);
        vlSelf->top__DOT____Vtogcov__alu_control = 
            ((0x7ffU & (IData)(vlSelf->top__DOT____Vtogcov__alu_control)) 
             | (0x800U & (IData)(vlSelf->top__DOT__alu_control)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__sel_alu_src2) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__sel_alu_src2)))) {
        ++(vlSymsp->__Vcoverage[135]);
        vlSelf->top__DOT____Vtogcov__sel_alu_src2 = 
            ((6U & (IData)(vlSelf->top__DOT____Vtogcov__sel_alu_src2)) 
             | (1U & (IData)(vlSelf->top__DOT__sel_alu_src2)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__sel_alu_src2) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__sel_alu_src2)))) {
        ++(vlSymsp->__Vcoverage[136]);
        vlSelf->top__DOT____Vtogcov__sel_alu_src2 = 
            ((5U & (IData)(vlSelf->top__DOT____Vtogcov__sel_alu_src2)) 
             | (2U & (IData)(vlSelf->top__DOT__sel_alu_src2)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__sel_alu_src2) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__sel_alu_src2)))) {
        ++(vlSymsp->__Vcoverage[137]);
        vlSelf->top__DOT____Vtogcov__sel_alu_src2 = 
            ((3U & (IData)(vlSelf->top__DOT____Vtogcov__sel_alu_src2)) 
             | (4U & (IData)(vlSelf->top__DOT__sel_alu_src2)));
    }
    ++(vlSymsp->__Vcoverage[701]);
    if ((1U == (IData)(vlSelf->top__DOT__sel_alu_src2))) {
        ++(vlSymsp->__Vcoverage[699]);
        vlSelf->top__DOT__exe_0__DOT__alu_src2 = vlSelf->top__DOT__exe_0__DOT__src2;
    } else {
        ++(vlSymsp->__Vcoverage[700]);
        vlSelf->top__DOT__exe_0__DOT__alu_src2 = 0ULL;
    }
    if (((IData)(vlSelf->top__DOT__rf_wen) ^ (IData)(vlSelf->top__DOT____Vtogcov__rf_wen))) {
        ++(vlSymsp->__Vcoverage[150]);
        vlSelf->top__DOT____Vtogcov__rf_wen = vlSelf->top__DOT__rf_wen;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__exe_0__DOT__alu_src1) 
               ^ (IData)(vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1)))) {
        ++(vlSymsp->__Vcoverage[568]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__exe_0__DOT__alu_src1)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[569]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[570]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[571]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[572]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[573]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[574]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[575]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[576]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[577]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[578]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[579]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[580]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[581]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[582]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[583]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[584]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[585]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[586]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[587]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[588]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[589]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[590]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[591]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[592]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[593]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[594]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[595]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[596]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[597]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[598]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[599]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[600]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[601]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[602]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[603]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[604]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[605]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[606]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[607]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[608]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[609]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[610]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[611]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[612]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[613]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[614]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[615]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[616]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[617]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[618]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[619]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[620]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[621]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[622]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[623]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[624]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[625]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[626]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[627]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[628]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[629]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[630]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[631]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__exe_0__DOT__alu_src2) 
               ^ (IData)(vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2)))) {
        ++(vlSymsp->__Vcoverage[632]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__exe_0__DOT__alu_src2)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__alu_src2 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[633]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__alu_src2 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__alu_src2 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[634]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__alu_src2 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__alu_src2 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[635]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__alu_src2 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__alu_src2 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[636]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__alu_src2 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__alu_src2 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[637]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__alu_src2 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__alu_src2 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[638]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__alu_src2 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__alu_src2 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[639]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__alu_src2 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__alu_src2 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[640]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__alu_src2 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__alu_src2 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[641]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__alu_src2 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__alu_src2 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[642]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__alu_src2 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__alu_src2 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[643]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__alu_src2 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__alu_src2 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[644]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__alu_src2 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__alu_src2 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[645]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__alu_src2 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__alu_src2 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[646]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__alu_src2 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__alu_src2 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[647]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__alu_src2 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__alu_src2 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[648]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__alu_src2 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__alu_src2 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[649]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__alu_src2 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__alu_src2 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[650]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__alu_src2 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__alu_src2 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[651]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__alu_src2 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__alu_src2 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[652]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__alu_src2 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__alu_src2 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[653]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__alu_src2 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__alu_src2 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[654]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__alu_src2 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__alu_src2 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[655]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__alu_src2 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__alu_src2 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[656]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__alu_src2 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__alu_src2 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[657]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__alu_src2 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__alu_src2 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[658]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__alu_src2 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__alu_src2 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[659]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__alu_src2 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__alu_src2 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[660]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__alu_src2 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__alu_src2 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[661]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__alu_src2 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__alu_src2 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[662]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__alu_src2 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__alu_src2 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[663]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__alu_src2 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__alu_src2 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[664]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__alu_src2 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__alu_src2 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[665]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__alu_src2 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__alu_src2 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[666]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__alu_src2 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__alu_src2 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[667]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__alu_src2 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__alu_src2 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[668]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__alu_src2 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__alu_src2 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[669]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__alu_src2 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__alu_src2 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[670]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__alu_src2 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__alu_src2 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[671]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__alu_src2 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__alu_src2 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[672]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__alu_src2 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__alu_src2 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[673]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__alu_src2 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__alu_src2 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[674]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__alu_src2 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__alu_src2 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[675]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__alu_src2 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__alu_src2 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[676]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__alu_src2 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__alu_src2 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[677]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__alu_src2 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__alu_src2 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[678]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__alu_src2 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__alu_src2 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[679]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__alu_src2 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__alu_src2 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[680]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__alu_src2 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__alu_src2 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[681]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__alu_src2 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__alu_src2 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[682]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__alu_src2 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__alu_src2 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[683]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__alu_src2 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__alu_src2 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[684]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__alu_src2 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__alu_src2 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[685]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__alu_src2 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__alu_src2 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[686]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__alu_src2 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__alu_src2 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[687]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__alu_src2 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__alu_src2 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[688]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__alu_src2 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__alu_src2 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[689]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__alu_src2 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__alu_src2 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[690]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__alu_src2 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__alu_src2 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[691]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__alu_src2 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__alu_src2 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[692]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__alu_src2 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__alu_src2 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[693]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__alu_src2 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__alu_src2 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[694]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__alu_src2 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__alu_src2 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[695]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__alu_src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__alu_src2 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    ++(vlSymsp->__Vcoverage[789]);
    if (((((((((1U == (IData)(vlSelf->top__DOT__alu_control)) 
               | (2U == (IData)(vlSelf->top__DOT__alu_control))) 
              | (4U == (IData)(vlSelf->top__DOT__alu_control))) 
             | (8U == (IData)(vlSelf->top__DOT__alu_control))) 
            | (0x10U == (IData)(vlSelf->top__DOT__alu_control))) 
           | (0x20U == (IData)(vlSelf->top__DOT__alu_control))) 
          | (0x40U == (IData)(vlSelf->top__DOT__alu_control))) 
         | (0x80U == (IData)(vlSelf->top__DOT__alu_control)))) {
        if ((1U == (IData)(vlSelf->top__DOT__alu_control))) {
            ++(vlSymsp->__Vcoverage[776]);
            vlSelf->top__DOT__alu_result = (vlSelf->top__DOT__exe_0__DOT__alu_src1 
                                            + vlSelf->top__DOT__exe_0__DOT__alu_src2);
        } else if ((2U == (IData)(vlSelf->top__DOT__alu_control))) {
            ++(vlSymsp->__Vcoverage[777]);
            vlSelf->top__DOT__alu_result = (vlSelf->top__DOT__exe_0__DOT__alu_src1 
                                            - vlSelf->top__DOT__exe_0__DOT__alu_src2);
        } else if ((4U == (IData)(vlSelf->top__DOT__alu_control))) {
            ++(vlSymsp->__Vcoverage[778]);
            vlSelf->top__DOT__alu_result = (QData)((IData)(
                                                           (vlSelf->top__DOT__exe_0__DOT__alu_src1 
                                                            > vlSelf->top__DOT__exe_0__DOT__alu_src2)));
        } else if ((8U == (IData)(vlSelf->top__DOT__alu_control))) {
            ++(vlSymsp->__Vcoverage[779]);
            vlSelf->top__DOT__alu_result = (QData)((IData)(
                                                           (0ULL 
                                                            < 
                                                            (vlSelf->top__DOT__exe_0__DOT__alu_src1 
                                                             - vlSelf->top__DOT__exe_0__DOT__alu_src2))));
        } else if ((0x10U == (IData)(vlSelf->top__DOT__alu_control))) {
            ++(vlSymsp->__Vcoverage[780]);
            vlSelf->top__DOT__alu_result = (vlSelf->top__DOT__exe_0__DOT__alu_src1 
                                            & vlSelf->top__DOT__exe_0__DOT__alu_src2);
        } else if ((0x20U == (IData)(vlSelf->top__DOT__alu_control))) {
            ++(vlSymsp->__Vcoverage[781]);
            vlSelf->top__DOT__alu_result = (~ (vlSelf->top__DOT__exe_0__DOT__alu_src1 
                                               | vlSelf->top__DOT__exe_0__DOT__alu_src2));
        } else if ((0x40U == (IData)(vlSelf->top__DOT__alu_control))) {
            ++(vlSymsp->__Vcoverage[782]);
            vlSelf->top__DOT__alu_result = (vlSelf->top__DOT__exe_0__DOT__alu_src1 
                                            | vlSelf->top__DOT__exe_0__DOT__alu_src2);
        } else {
            ++(vlSymsp->__Vcoverage[783]);
            vlSelf->top__DOT__alu_result = (vlSelf->top__DOT__exe_0__DOT__alu_src1 
                                            ^ vlSelf->top__DOT__exe_0__DOT__alu_src2);
        }
    } else if ((0x100U == (IData)(vlSelf->top__DOT__alu_control))) {
        ++(vlSymsp->__Vcoverage[784]);
        vlSelf->top__DOT__alu_result = (vlSelf->top__DOT__exe_0__DOT__alu_src2 
                                        << (0x1fU & (IData)(vlSelf->top__DOT__exe_0__DOT__alu_src1)));
    } else if ((0x200U == (IData)(vlSelf->top__DOT__alu_control))) {
        ++(vlSymsp->__Vcoverage[785]);
        vlSelf->top__DOT__alu_result = (vlSelf->top__DOT__exe_0__DOT__alu_src2 
                                        >> (0x1fU & (IData)(vlSelf->top__DOT__exe_0__DOT__alu_src1)));
    } else if ((0x400U == (IData)(vlSelf->top__DOT__alu_control))) {
        ++(vlSymsp->__Vcoverage[786]);
        vlSelf->top__DOT__alu_result = VL_SHIFTRS_QQI(64,64,5, vlSelf->top__DOT__exe_0__DOT__alu_src2, 
                                                      (0x1fU 
                                                       & (IData)(vlSelf->top__DOT__exe_0__DOT__alu_src1)));
    } else if ((0x800U == (IData)(vlSelf->top__DOT__alu_control))) {
        ++(vlSymsp->__Vcoverage[787]);
        vlSelf->top__DOT__alu_result = ((QData)((IData)(
                                                        (0xfffffU 
                                                         & (IData)(
                                                                   (vlSelf->top__DOT__exe_0__DOT__alu_src2 
                                                                    >> 0xcU))))) 
                                        << 0xcU);
    } else {
        ++(vlSymsp->__Vcoverage[788]);
        vlSelf->top__DOT__alu_result = 0ULL;
    }
    vlSelf->top__DOT__ram_addr = (vlSelf->top__DOT__exe_0__DOT__alu_src1 
                                  + vlSelf->top__DOT__exe_0__DOT__alu_src2);
    if ((1U & ((IData)(vlSelf->top__DOT__alu_result) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__alu_result)))) {
        ++(vlSymsp->__Vcoverage[153]);
        vlSelf->top__DOT____Vtogcov__alu_result = (
                                                   (0xfffffffffffffffeULL 
                                                    & vlSelf->top__DOT____Vtogcov__alu_result) 
                                                   | (IData)((IData)(
                                                                     (1U 
                                                                      & (IData)(vlSelf->top__DOT__alu_result)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_result 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__alu_result 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[154]);
        vlSelf->top__DOT____Vtogcov__alu_result = (
                                                   (0xfffffffffffffffdULL 
                                                    & vlSelf->top__DOT____Vtogcov__alu_result) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__alu_result 
                                                                                >> 1U))))) 
                                                      << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_result 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__alu_result 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[155]);
        vlSelf->top__DOT____Vtogcov__alu_result = (
                                                   (0xfffffffffffffffbULL 
                                                    & vlSelf->top__DOT____Vtogcov__alu_result) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__alu_result 
                                                                                >> 2U))))) 
                                                      << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_result 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__alu_result 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[156]);
        vlSelf->top__DOT____Vtogcov__alu_result = (
                                                   (0xfffffffffffffff7ULL 
                                                    & vlSelf->top__DOT____Vtogcov__alu_result) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__alu_result 
                                                                                >> 3U))))) 
                                                      << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_result 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__alu_result 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[157]);
        vlSelf->top__DOT____Vtogcov__alu_result = (
                                                   (0xffffffffffffffefULL 
                                                    & vlSelf->top__DOT____Vtogcov__alu_result) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__alu_result 
                                                                                >> 4U))))) 
                                                      << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_result 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__alu_result 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[158]);
        vlSelf->top__DOT____Vtogcov__alu_result = (
                                                   (0xffffffffffffffdfULL 
                                                    & vlSelf->top__DOT____Vtogcov__alu_result) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__alu_result 
                                                                                >> 5U))))) 
                                                      << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_result 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__alu_result 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[159]);
        vlSelf->top__DOT____Vtogcov__alu_result = (
                                                   (0xffffffffffffffbfULL 
                                                    & vlSelf->top__DOT____Vtogcov__alu_result) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__alu_result 
                                                                                >> 6U))))) 
                                                      << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_result 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__alu_result 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[160]);
        vlSelf->top__DOT____Vtogcov__alu_result = (
                                                   (0xffffffffffffff7fULL 
                                                    & vlSelf->top__DOT____Vtogcov__alu_result) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__alu_result 
                                                                                >> 7U))))) 
                                                      << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_result 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__alu_result 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[161]);
        vlSelf->top__DOT____Vtogcov__alu_result = (
                                                   (0xfffffffffffffeffULL 
                                                    & vlSelf->top__DOT____Vtogcov__alu_result) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__alu_result 
                                                                                >> 8U))))) 
                                                      << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_result 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__alu_result 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[162]);
        vlSelf->top__DOT____Vtogcov__alu_result = (
                                                   (0xfffffffffffffdffULL 
                                                    & vlSelf->top__DOT____Vtogcov__alu_result) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__alu_result 
                                                                                >> 9U))))) 
                                                      << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_result 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__alu_result 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[163]);
        vlSelf->top__DOT____Vtogcov__alu_result = (
                                                   (0xfffffffffffffbffULL 
                                                    & vlSelf->top__DOT____Vtogcov__alu_result) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__alu_result 
                                                                                >> 0xaU))))) 
                                                      << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_result 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__alu_result 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[164]);
        vlSelf->top__DOT____Vtogcov__alu_result = (
                                                   (0xfffffffffffff7ffULL 
                                                    & vlSelf->top__DOT____Vtogcov__alu_result) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__alu_result 
                                                                                >> 0xbU))))) 
                                                      << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_result 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__alu_result 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[165]);
        vlSelf->top__DOT____Vtogcov__alu_result = (
                                                   (0xffffffffffffefffULL 
                                                    & vlSelf->top__DOT____Vtogcov__alu_result) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__alu_result 
                                                                                >> 0xcU))))) 
                                                      << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_result 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__alu_result 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[166]);
        vlSelf->top__DOT____Vtogcov__alu_result = (
                                                   (0xffffffffffffdfffULL 
                                                    & vlSelf->top__DOT____Vtogcov__alu_result) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__alu_result 
                                                                                >> 0xdU))))) 
                                                      << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_result 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__alu_result 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[167]);
        vlSelf->top__DOT____Vtogcov__alu_result = (
                                                   (0xffffffffffffbfffULL 
                                                    & vlSelf->top__DOT____Vtogcov__alu_result) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__alu_result 
                                                                                >> 0xeU))))) 
                                                      << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_result 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__alu_result 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[168]);
        vlSelf->top__DOT____Vtogcov__alu_result = (
                                                   (0xffffffffffff7fffULL 
                                                    & vlSelf->top__DOT____Vtogcov__alu_result) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__alu_result 
                                                                                >> 0xfU))))) 
                                                      << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_result 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__alu_result 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[169]);
        vlSelf->top__DOT____Vtogcov__alu_result = (
                                                   (0xfffffffffffeffffULL 
                                                    & vlSelf->top__DOT____Vtogcov__alu_result) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__alu_result 
                                                                                >> 0x10U))))) 
                                                      << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_result 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__alu_result 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[170]);
        vlSelf->top__DOT____Vtogcov__alu_result = (
                                                   (0xfffffffffffdffffULL 
                                                    & vlSelf->top__DOT____Vtogcov__alu_result) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__alu_result 
                                                                                >> 0x11U))))) 
                                                      << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_result 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__alu_result 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[171]);
        vlSelf->top__DOT____Vtogcov__alu_result = (
                                                   (0xfffffffffffbffffULL 
                                                    & vlSelf->top__DOT____Vtogcov__alu_result) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__alu_result 
                                                                                >> 0x12U))))) 
                                                      << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_result 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__alu_result 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[172]);
        vlSelf->top__DOT____Vtogcov__alu_result = (
                                                   (0xfffffffffff7ffffULL 
                                                    & vlSelf->top__DOT____Vtogcov__alu_result) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__alu_result 
                                                                                >> 0x13U))))) 
                                                      << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_result 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__alu_result 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[173]);
        vlSelf->top__DOT____Vtogcov__alu_result = (
                                                   (0xffffffffffefffffULL 
                                                    & vlSelf->top__DOT____Vtogcov__alu_result) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__alu_result 
                                                                                >> 0x14U))))) 
                                                      << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_result 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__alu_result 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[174]);
        vlSelf->top__DOT____Vtogcov__alu_result = (
                                                   (0xffffffffffdfffffULL 
                                                    & vlSelf->top__DOT____Vtogcov__alu_result) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__alu_result 
                                                                                >> 0x15U))))) 
                                                      << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_result 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__alu_result 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[175]);
        vlSelf->top__DOT____Vtogcov__alu_result = (
                                                   (0xffffffffffbfffffULL 
                                                    & vlSelf->top__DOT____Vtogcov__alu_result) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__alu_result 
                                                                                >> 0x16U))))) 
                                                      << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_result 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__alu_result 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[176]);
        vlSelf->top__DOT____Vtogcov__alu_result = (
                                                   (0xffffffffff7fffffULL 
                                                    & vlSelf->top__DOT____Vtogcov__alu_result) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__alu_result 
                                                                                >> 0x17U))))) 
                                                      << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_result 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__alu_result 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[177]);
        vlSelf->top__DOT____Vtogcov__alu_result = (
                                                   (0xfffffffffeffffffULL 
                                                    & vlSelf->top__DOT____Vtogcov__alu_result) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__alu_result 
                                                                                >> 0x18U))))) 
                                                      << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_result 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__alu_result 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[178]);
        vlSelf->top__DOT____Vtogcov__alu_result = (
                                                   (0xfffffffffdffffffULL 
                                                    & vlSelf->top__DOT____Vtogcov__alu_result) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__alu_result 
                                                                                >> 0x19U))))) 
                                                      << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_result 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__alu_result 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[179]);
        vlSelf->top__DOT____Vtogcov__alu_result = (
                                                   (0xfffffffffbffffffULL 
                                                    & vlSelf->top__DOT____Vtogcov__alu_result) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__alu_result 
                                                                                >> 0x1aU))))) 
                                                      << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_result 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__alu_result 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[180]);
        vlSelf->top__DOT____Vtogcov__alu_result = (
                                                   (0xfffffffff7ffffffULL 
                                                    & vlSelf->top__DOT____Vtogcov__alu_result) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__alu_result 
                                                                                >> 0x1bU))))) 
                                                      << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_result 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__alu_result 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[181]);
        vlSelf->top__DOT____Vtogcov__alu_result = (
                                                   (0xffffffffefffffffULL 
                                                    & vlSelf->top__DOT____Vtogcov__alu_result) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__alu_result 
                                                                                >> 0x1cU))))) 
                                                      << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_result 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__alu_result 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[182]);
        vlSelf->top__DOT____Vtogcov__alu_result = (
                                                   (0xffffffffdfffffffULL 
                                                    & vlSelf->top__DOT____Vtogcov__alu_result) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__alu_result 
                                                                                >> 0x1dU))))) 
                                                      << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_result 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__alu_result 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[183]);
        vlSelf->top__DOT____Vtogcov__alu_result = (
                                                   (0xffffffffbfffffffULL 
                                                    & vlSelf->top__DOT____Vtogcov__alu_result) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__alu_result 
                                                                                >> 0x1eU))))) 
                                                      << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_result 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__alu_result 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[184]);
        vlSelf->top__DOT____Vtogcov__alu_result = (
                                                   (0xffffffff7fffffffULL 
                                                    & vlSelf->top__DOT____Vtogcov__alu_result) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__alu_result 
                                                                                >> 0x1fU))))) 
                                                      << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_result 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__alu_result 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[185]);
        vlSelf->top__DOT____Vtogcov__alu_result = (
                                                   (0xfffffffeffffffffULL 
                                                    & vlSelf->top__DOT____Vtogcov__alu_result) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__alu_result 
                                                                                >> 0x20U))))) 
                                                      << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_result 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__alu_result 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[186]);
        vlSelf->top__DOT____Vtogcov__alu_result = (
                                                   (0xfffffffdffffffffULL 
                                                    & vlSelf->top__DOT____Vtogcov__alu_result) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__alu_result 
                                                                                >> 0x21U))))) 
                                                      << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_result 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__alu_result 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[187]);
        vlSelf->top__DOT____Vtogcov__alu_result = (
                                                   (0xfffffffbffffffffULL 
                                                    & vlSelf->top__DOT____Vtogcov__alu_result) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__alu_result 
                                                                                >> 0x22U))))) 
                                                      << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_result 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__alu_result 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[188]);
        vlSelf->top__DOT____Vtogcov__alu_result = (
                                                   (0xfffffff7ffffffffULL 
                                                    & vlSelf->top__DOT____Vtogcov__alu_result) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__alu_result 
                                                                                >> 0x23U))))) 
                                                      << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_result 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__alu_result 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[189]);
        vlSelf->top__DOT____Vtogcov__alu_result = (
                                                   (0xffffffefffffffffULL 
                                                    & vlSelf->top__DOT____Vtogcov__alu_result) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__alu_result 
                                                                                >> 0x24U))))) 
                                                      << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_result 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__alu_result 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[190]);
        vlSelf->top__DOT____Vtogcov__alu_result = (
                                                   (0xffffffdfffffffffULL 
                                                    & vlSelf->top__DOT____Vtogcov__alu_result) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__alu_result 
                                                                                >> 0x25U))))) 
                                                      << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_result 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__alu_result 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[191]);
        vlSelf->top__DOT____Vtogcov__alu_result = (
                                                   (0xffffffbfffffffffULL 
                                                    & vlSelf->top__DOT____Vtogcov__alu_result) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__alu_result 
                                                                                >> 0x26U))))) 
                                                      << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_result 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__alu_result 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[192]);
        vlSelf->top__DOT____Vtogcov__alu_result = (
                                                   (0xffffff7fffffffffULL 
                                                    & vlSelf->top__DOT____Vtogcov__alu_result) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__alu_result 
                                                                                >> 0x27U))))) 
                                                      << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_result 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__alu_result 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[193]);
        vlSelf->top__DOT____Vtogcov__alu_result = (
                                                   (0xfffffeffffffffffULL 
                                                    & vlSelf->top__DOT____Vtogcov__alu_result) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__alu_result 
                                                                                >> 0x28U))))) 
                                                      << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_result 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__alu_result 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[194]);
        vlSelf->top__DOT____Vtogcov__alu_result = (
                                                   (0xfffffdffffffffffULL 
                                                    & vlSelf->top__DOT____Vtogcov__alu_result) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__alu_result 
                                                                                >> 0x29U))))) 
                                                      << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_result 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__alu_result 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[195]);
        vlSelf->top__DOT____Vtogcov__alu_result = (
                                                   (0xfffffbffffffffffULL 
                                                    & vlSelf->top__DOT____Vtogcov__alu_result) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__alu_result 
                                                                                >> 0x2aU))))) 
                                                      << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_result 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__alu_result 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[196]);
        vlSelf->top__DOT____Vtogcov__alu_result = (
                                                   (0xfffff7ffffffffffULL 
                                                    & vlSelf->top__DOT____Vtogcov__alu_result) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__alu_result 
                                                                                >> 0x2bU))))) 
                                                      << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_result 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__alu_result 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[197]);
        vlSelf->top__DOT____Vtogcov__alu_result = (
                                                   (0xffffefffffffffffULL 
                                                    & vlSelf->top__DOT____Vtogcov__alu_result) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__alu_result 
                                                                                >> 0x2cU))))) 
                                                      << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_result 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__alu_result 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[198]);
        vlSelf->top__DOT____Vtogcov__alu_result = (
                                                   (0xffffdfffffffffffULL 
                                                    & vlSelf->top__DOT____Vtogcov__alu_result) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__alu_result 
                                                                                >> 0x2dU))))) 
                                                      << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_result 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__alu_result 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[199]);
        vlSelf->top__DOT____Vtogcov__alu_result = (
                                                   (0xffffbfffffffffffULL 
                                                    & vlSelf->top__DOT____Vtogcov__alu_result) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__alu_result 
                                                                                >> 0x2eU))))) 
                                                      << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_result 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__alu_result 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[200]);
        vlSelf->top__DOT____Vtogcov__alu_result = (
                                                   (0xffff7fffffffffffULL 
                                                    & vlSelf->top__DOT____Vtogcov__alu_result) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__alu_result 
                                                                                >> 0x2fU))))) 
                                                      << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_result 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__alu_result 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[201]);
        vlSelf->top__DOT____Vtogcov__alu_result = (
                                                   (0xfffeffffffffffffULL 
                                                    & vlSelf->top__DOT____Vtogcov__alu_result) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__alu_result 
                                                                                >> 0x30U))))) 
                                                      << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_result 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__alu_result 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[202]);
        vlSelf->top__DOT____Vtogcov__alu_result = (
                                                   (0xfffdffffffffffffULL 
                                                    & vlSelf->top__DOT____Vtogcov__alu_result) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__alu_result 
                                                                                >> 0x31U))))) 
                                                      << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_result 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__alu_result 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[203]);
        vlSelf->top__DOT____Vtogcov__alu_result = (
                                                   (0xfffbffffffffffffULL 
                                                    & vlSelf->top__DOT____Vtogcov__alu_result) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__alu_result 
                                                                                >> 0x32U))))) 
                                                      << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_result 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__alu_result 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[204]);
        vlSelf->top__DOT____Vtogcov__alu_result = (
                                                   (0xfff7ffffffffffffULL 
                                                    & vlSelf->top__DOT____Vtogcov__alu_result) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__alu_result 
                                                                                >> 0x33U))))) 
                                                      << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_result 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__alu_result 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[205]);
        vlSelf->top__DOT____Vtogcov__alu_result = (
                                                   (0xffefffffffffffffULL 
                                                    & vlSelf->top__DOT____Vtogcov__alu_result) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__alu_result 
                                                                                >> 0x34U))))) 
                                                      << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_result 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__alu_result 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[206]);
        vlSelf->top__DOT____Vtogcov__alu_result = (
                                                   (0xffdfffffffffffffULL 
                                                    & vlSelf->top__DOT____Vtogcov__alu_result) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__alu_result 
                                                                                >> 0x35U))))) 
                                                      << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_result 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__alu_result 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[207]);
        vlSelf->top__DOT____Vtogcov__alu_result = (
                                                   (0xffbfffffffffffffULL 
                                                    & vlSelf->top__DOT____Vtogcov__alu_result) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__alu_result 
                                                                                >> 0x36U))))) 
                                                      << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_result 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__alu_result 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[208]);
        vlSelf->top__DOT____Vtogcov__alu_result = (
                                                   (0xff7fffffffffffffULL 
                                                    & vlSelf->top__DOT____Vtogcov__alu_result) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__alu_result 
                                                                                >> 0x37U))))) 
                                                      << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_result 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__alu_result 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[209]);
        vlSelf->top__DOT____Vtogcov__alu_result = (
                                                   (0xfeffffffffffffffULL 
                                                    & vlSelf->top__DOT____Vtogcov__alu_result) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__alu_result 
                                                                                >> 0x38U))))) 
                                                      << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_result 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__alu_result 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[210]);
        vlSelf->top__DOT____Vtogcov__alu_result = (
                                                   (0xfdffffffffffffffULL 
                                                    & vlSelf->top__DOT____Vtogcov__alu_result) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__alu_result 
                                                                                >> 0x39U))))) 
                                                      << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_result 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__alu_result 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[211]);
        vlSelf->top__DOT____Vtogcov__alu_result = (
                                                   (0xfbffffffffffffffULL 
                                                    & vlSelf->top__DOT____Vtogcov__alu_result) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__alu_result 
                                                                                >> 0x3aU))))) 
                                                      << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_result 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__alu_result 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[212]);
        vlSelf->top__DOT____Vtogcov__alu_result = (
                                                   (0xf7ffffffffffffffULL 
                                                    & vlSelf->top__DOT____Vtogcov__alu_result) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__alu_result 
                                                                                >> 0x3bU))))) 
                                                      << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_result 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__alu_result 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[213]);
        vlSelf->top__DOT____Vtogcov__alu_result = (
                                                   (0xefffffffffffffffULL 
                                                    & vlSelf->top__DOT____Vtogcov__alu_result) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__alu_result 
                                                                                >> 0x3cU))))) 
                                                      << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_result 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__alu_result 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[214]);
        vlSelf->top__DOT____Vtogcov__alu_result = (
                                                   (0xdfffffffffffffffULL 
                                                    & vlSelf->top__DOT____Vtogcov__alu_result) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__alu_result 
                                                                                >> 0x3dU))))) 
                                                      << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_result 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__alu_result 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[215]);
        vlSelf->top__DOT____Vtogcov__alu_result = (
                                                   (0xbfffffffffffffffULL 
                                                    & vlSelf->top__DOT____Vtogcov__alu_result) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__alu_result 
                                                                                >> 0x3eU))))) 
                                                      << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__alu_result 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__alu_result 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[216]);
        vlSelf->top__DOT____Vtogcov__alu_result = (
                                                   (0x7fffffffffffffffULL 
                                                    & vlSelf->top__DOT____Vtogcov__alu_result) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__alu_result 
                                                                                >> 0x3fU))))) 
                                                      << 0x3fU));
    }
    ++(vlSymsp->__Vcoverage[769]);
    if (vlSelf->top__DOT__control_0__DOT__lw) {
        if (vlSelf->top__DOT__control_0__DOT__lw) {
            ++(vlSymsp->__Vcoverage[767]);
            vlSelf->top__DOT__exe_0__DOT__wdata = vlSelf->top__DOT__imm;
        } else {
            ++(vlSymsp->__Vcoverage[768]);
            vlSelf->top__DOT__exe_0__DOT__wdata = 0ULL;
        }
    } else {
        ++(vlSymsp->__Vcoverage[766]);
        vlSelf->top__DOT__exe_0__DOT__wdata = vlSelf->top__DOT__alu_result;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__ram_addr) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__ram_addr)))) {
        ++(vlSymsp->__Vcoverage[217]);
        vlSelf->top__DOT____Vtogcov__ram_addr = ((0xfffffffffffffffeULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_addr) 
                                                 | (IData)((IData)(
                                                                   (1U 
                                                                    & (IData)(vlSelf->top__DOT__ram_addr)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_addr 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_addr 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[218]);
        vlSelf->top__DOT____Vtogcov__ram_addr = ((0xfffffffffffffffdULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_addr) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_addr 
                                                                                >> 1U))))) 
                                                    << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_addr 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_addr 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[219]);
        vlSelf->top__DOT____Vtogcov__ram_addr = ((0xfffffffffffffffbULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_addr) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_addr 
                                                                                >> 2U))))) 
                                                    << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_addr 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_addr 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[220]);
        vlSelf->top__DOT____Vtogcov__ram_addr = ((0xfffffffffffffff7ULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_addr) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_addr 
                                                                                >> 3U))))) 
                                                    << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_addr 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_addr 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[221]);
        vlSelf->top__DOT____Vtogcov__ram_addr = ((0xffffffffffffffefULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_addr) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_addr 
                                                                                >> 4U))))) 
                                                    << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_addr 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_addr 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[222]);
        vlSelf->top__DOT____Vtogcov__ram_addr = ((0xffffffffffffffdfULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_addr) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_addr 
                                                                                >> 5U))))) 
                                                    << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_addr 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_addr 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[223]);
        vlSelf->top__DOT____Vtogcov__ram_addr = ((0xffffffffffffffbfULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_addr) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_addr 
                                                                                >> 6U))))) 
                                                    << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_addr 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_addr 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[224]);
        vlSelf->top__DOT____Vtogcov__ram_addr = ((0xffffffffffffff7fULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_addr) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_addr 
                                                                                >> 7U))))) 
                                                    << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_addr 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_addr 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[225]);
        vlSelf->top__DOT____Vtogcov__ram_addr = ((0xfffffffffffffeffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_addr) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_addr 
                                                                                >> 8U))))) 
                                                    << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_addr 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_addr 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[226]);
        vlSelf->top__DOT____Vtogcov__ram_addr = ((0xfffffffffffffdffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_addr) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_addr 
                                                                                >> 9U))))) 
                                                    << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_addr 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_addr 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[227]);
        vlSelf->top__DOT____Vtogcov__ram_addr = ((0xfffffffffffffbffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_addr) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_addr 
                                                                                >> 0xaU))))) 
                                                    << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_addr 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_addr 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[228]);
        vlSelf->top__DOT____Vtogcov__ram_addr = ((0xfffffffffffff7ffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_addr) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_addr 
                                                                                >> 0xbU))))) 
                                                    << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_addr 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_addr 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[229]);
        vlSelf->top__DOT____Vtogcov__ram_addr = ((0xffffffffffffefffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_addr) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_addr 
                                                                                >> 0xcU))))) 
                                                    << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_addr 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_addr 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[230]);
        vlSelf->top__DOT____Vtogcov__ram_addr = ((0xffffffffffffdfffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_addr) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_addr 
                                                                                >> 0xdU))))) 
                                                    << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_addr 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_addr 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[231]);
        vlSelf->top__DOT____Vtogcov__ram_addr = ((0xffffffffffffbfffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_addr) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_addr 
                                                                                >> 0xeU))))) 
                                                    << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_addr 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_addr 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[232]);
        vlSelf->top__DOT____Vtogcov__ram_addr = ((0xffffffffffff7fffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_addr) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_addr 
                                                                                >> 0xfU))))) 
                                                    << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_addr 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_addr 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[233]);
        vlSelf->top__DOT____Vtogcov__ram_addr = ((0xfffffffffffeffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_addr) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_addr 
                                                                                >> 0x10U))))) 
                                                    << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_addr 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_addr 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[234]);
        vlSelf->top__DOT____Vtogcov__ram_addr = ((0xfffffffffffdffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_addr) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_addr 
                                                                                >> 0x11U))))) 
                                                    << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_addr 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_addr 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[235]);
        vlSelf->top__DOT____Vtogcov__ram_addr = ((0xfffffffffffbffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_addr) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_addr 
                                                                                >> 0x12U))))) 
                                                    << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_addr 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_addr 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[236]);
        vlSelf->top__DOT____Vtogcov__ram_addr = ((0xfffffffffff7ffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_addr) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_addr 
                                                                                >> 0x13U))))) 
                                                    << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_addr 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_addr 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[237]);
        vlSelf->top__DOT____Vtogcov__ram_addr = ((0xffffffffffefffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_addr) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_addr 
                                                                                >> 0x14U))))) 
                                                    << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_addr 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_addr 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[238]);
        vlSelf->top__DOT____Vtogcov__ram_addr = ((0xffffffffffdfffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_addr) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_addr 
                                                                                >> 0x15U))))) 
                                                    << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_addr 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_addr 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[239]);
        vlSelf->top__DOT____Vtogcov__ram_addr = ((0xffffffffffbfffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_addr) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_addr 
                                                                                >> 0x16U))))) 
                                                    << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_addr 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_addr 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[240]);
        vlSelf->top__DOT____Vtogcov__ram_addr = ((0xffffffffff7fffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_addr) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_addr 
                                                                                >> 0x17U))))) 
                                                    << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_addr 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_addr 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[241]);
        vlSelf->top__DOT____Vtogcov__ram_addr = ((0xfffffffffeffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_addr) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_addr 
                                                                                >> 0x18U))))) 
                                                    << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_addr 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_addr 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[242]);
        vlSelf->top__DOT____Vtogcov__ram_addr = ((0xfffffffffdffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_addr) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_addr 
                                                                                >> 0x19U))))) 
                                                    << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_addr 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_addr 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[243]);
        vlSelf->top__DOT____Vtogcov__ram_addr = ((0xfffffffffbffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_addr) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_addr 
                                                                                >> 0x1aU))))) 
                                                    << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_addr 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_addr 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[244]);
        vlSelf->top__DOT____Vtogcov__ram_addr = ((0xfffffffff7ffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_addr) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_addr 
                                                                                >> 0x1bU))))) 
                                                    << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_addr 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_addr 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[245]);
        vlSelf->top__DOT____Vtogcov__ram_addr = ((0xffffffffefffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_addr) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_addr 
                                                                                >> 0x1cU))))) 
                                                    << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_addr 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_addr 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[246]);
        vlSelf->top__DOT____Vtogcov__ram_addr = ((0xffffffffdfffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_addr) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_addr 
                                                                                >> 0x1dU))))) 
                                                    << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_addr 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_addr 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[247]);
        vlSelf->top__DOT____Vtogcov__ram_addr = ((0xffffffffbfffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_addr) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_addr 
                                                                                >> 0x1eU))))) 
                                                    << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_addr 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_addr 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[248]);
        vlSelf->top__DOT____Vtogcov__ram_addr = ((0xffffffff7fffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_addr) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_addr 
                                                                                >> 0x1fU))))) 
                                                    << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_addr 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_addr 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[249]);
        vlSelf->top__DOT____Vtogcov__ram_addr = ((0xfffffffeffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_addr) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_addr 
                                                                                >> 0x20U))))) 
                                                    << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_addr 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_addr 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[250]);
        vlSelf->top__DOT____Vtogcov__ram_addr = ((0xfffffffdffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_addr) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_addr 
                                                                                >> 0x21U))))) 
                                                    << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_addr 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_addr 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[251]);
        vlSelf->top__DOT____Vtogcov__ram_addr = ((0xfffffffbffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_addr) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_addr 
                                                                                >> 0x22U))))) 
                                                    << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_addr 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_addr 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[252]);
        vlSelf->top__DOT____Vtogcov__ram_addr = ((0xfffffff7ffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_addr) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_addr 
                                                                                >> 0x23U))))) 
                                                    << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_addr 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_addr 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[253]);
        vlSelf->top__DOT____Vtogcov__ram_addr = ((0xffffffefffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_addr) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_addr 
                                                                                >> 0x24U))))) 
                                                    << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_addr 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_addr 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[254]);
        vlSelf->top__DOT____Vtogcov__ram_addr = ((0xffffffdfffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_addr) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_addr 
                                                                                >> 0x25U))))) 
                                                    << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_addr 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_addr 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[255]);
        vlSelf->top__DOT____Vtogcov__ram_addr = ((0xffffffbfffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_addr) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_addr 
                                                                                >> 0x26U))))) 
                                                    << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_addr 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_addr 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[256]);
        vlSelf->top__DOT____Vtogcov__ram_addr = ((0xffffff7fffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_addr) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_addr 
                                                                                >> 0x27U))))) 
                                                    << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_addr 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_addr 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[257]);
        vlSelf->top__DOT____Vtogcov__ram_addr = ((0xfffffeffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_addr) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_addr 
                                                                                >> 0x28U))))) 
                                                    << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_addr 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_addr 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[258]);
        vlSelf->top__DOT____Vtogcov__ram_addr = ((0xfffffdffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_addr) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_addr 
                                                                                >> 0x29U))))) 
                                                    << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_addr 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_addr 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[259]);
        vlSelf->top__DOT____Vtogcov__ram_addr = ((0xfffffbffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_addr) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_addr 
                                                                                >> 0x2aU))))) 
                                                    << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_addr 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_addr 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[260]);
        vlSelf->top__DOT____Vtogcov__ram_addr = ((0xfffff7ffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_addr) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_addr 
                                                                                >> 0x2bU))))) 
                                                    << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_addr 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_addr 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[261]);
        vlSelf->top__DOT____Vtogcov__ram_addr = ((0xffffefffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_addr) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_addr 
                                                                                >> 0x2cU))))) 
                                                    << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_addr 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_addr 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[262]);
        vlSelf->top__DOT____Vtogcov__ram_addr = ((0xffffdfffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_addr) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_addr 
                                                                                >> 0x2dU))))) 
                                                    << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_addr 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_addr 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[263]);
        vlSelf->top__DOT____Vtogcov__ram_addr = ((0xffffbfffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_addr) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_addr 
                                                                                >> 0x2eU))))) 
                                                    << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_addr 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_addr 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[264]);
        vlSelf->top__DOT____Vtogcov__ram_addr = ((0xffff7fffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_addr) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_addr 
                                                                                >> 0x2fU))))) 
                                                    << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_addr 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_addr 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[265]);
        vlSelf->top__DOT____Vtogcov__ram_addr = ((0xfffeffffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_addr) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_addr 
                                                                                >> 0x30U))))) 
                                                    << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_addr 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_addr 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[266]);
        vlSelf->top__DOT____Vtogcov__ram_addr = ((0xfffdffffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_addr) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_addr 
                                                                                >> 0x31U))))) 
                                                    << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_addr 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_addr 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[267]);
        vlSelf->top__DOT____Vtogcov__ram_addr = ((0xfffbffffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_addr) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_addr 
                                                                                >> 0x32U))))) 
                                                    << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_addr 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_addr 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[268]);
        vlSelf->top__DOT____Vtogcov__ram_addr = ((0xfff7ffffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_addr) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_addr 
                                                                                >> 0x33U))))) 
                                                    << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_addr 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_addr 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[269]);
        vlSelf->top__DOT____Vtogcov__ram_addr = ((0xffefffffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_addr) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_addr 
                                                                                >> 0x34U))))) 
                                                    << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_addr 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_addr 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[270]);
        vlSelf->top__DOT____Vtogcov__ram_addr = ((0xffdfffffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_addr) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_addr 
                                                                                >> 0x35U))))) 
                                                    << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_addr 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_addr 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[271]);
        vlSelf->top__DOT____Vtogcov__ram_addr = ((0xffbfffffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_addr) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_addr 
                                                                                >> 0x36U))))) 
                                                    << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_addr 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_addr 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[272]);
        vlSelf->top__DOT____Vtogcov__ram_addr = ((0xff7fffffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_addr) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_addr 
                                                                                >> 0x37U))))) 
                                                    << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_addr 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_addr 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[273]);
        vlSelf->top__DOT____Vtogcov__ram_addr = ((0xfeffffffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_addr) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_addr 
                                                                                >> 0x38U))))) 
                                                    << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_addr 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_addr 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[274]);
        vlSelf->top__DOT____Vtogcov__ram_addr = ((0xfdffffffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_addr) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_addr 
                                                                                >> 0x39U))))) 
                                                    << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_addr 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_addr 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[275]);
        vlSelf->top__DOT____Vtogcov__ram_addr = ((0xfbffffffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_addr) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_addr 
                                                                                >> 0x3aU))))) 
                                                    << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_addr 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_addr 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[276]);
        vlSelf->top__DOT____Vtogcov__ram_addr = ((0xf7ffffffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_addr) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_addr 
                                                                                >> 0x3bU))))) 
                                                    << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_addr 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_addr 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[277]);
        vlSelf->top__DOT____Vtogcov__ram_addr = ((0xefffffffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_addr) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_addr 
                                                                                >> 0x3cU))))) 
                                                    << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_addr 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_addr 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[278]);
        vlSelf->top__DOT____Vtogcov__ram_addr = ((0xdfffffffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_addr) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_addr 
                                                                                >> 0x3dU))))) 
                                                    << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_addr 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_addr 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[279]);
        vlSelf->top__DOT____Vtogcov__ram_addr = ((0xbfffffffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_addr) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_addr 
                                                                                >> 0x3eU))))) 
                                                    << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_addr 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_addr 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[280]);
        vlSelf->top__DOT____Vtogcov__ram_addr = ((0x7fffffffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_addr) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_addr 
                                                                                >> 0x3fU))))) 
                                                    << 0x3fU));
    }
    Vtop___024root____Vdpiimwrap_top__DOT__mem0__DOT__vpmem_read_TOP(vlSelf->top__DOT__ram_addr, vlSelf->__Vtask_top__DOT__mem0__DOT__vpmem_read__0__mrdata);
    ++(vlSymsp->__Vcoverage[790]);
    vlSelf->top__DOT__ram_data = vlSelf->__Vtask_top__DOT__mem0__DOT__vpmem_read__0__mrdata;
    Vtop___024root____Vdpiimwrap_top__DOT__mem0__DOT__vpmem_write_TOP(vlSelf->top__DOT__ram_addr, vlSelf->top__DOT__src1, (IData)(vlSelf->top__DOT__wmask), (QData)((IData)(vlSelf->top__DOT__data_ram_wen)));
    if ((1U & ((IData)(vlSelf->top__DOT__exe_0__DOT__wdata) 
               ^ (IData)(vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata)))) {
        ++(vlSymsp->__Vcoverage[702]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__exe_0__DOT__wdata)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__wdata 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[703]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__wdata 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__wdata 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[704]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__wdata 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__wdata 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[705]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__wdata 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__wdata 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[706]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__wdata 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__wdata 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[707]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__wdata 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__wdata 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[708]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__wdata 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__wdata 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[709]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__wdata 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__wdata 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[710]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__wdata 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__wdata 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[711]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__wdata 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__wdata 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[712]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__wdata 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__wdata 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[713]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__wdata 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__wdata 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[714]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__wdata 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__wdata 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[715]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__wdata 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__wdata 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[716]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__wdata 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__wdata 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[717]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__wdata 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__wdata 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[718]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__wdata 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__wdata 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[719]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__wdata 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__wdata 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[720]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__wdata 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__wdata 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[721]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__wdata 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__wdata 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[722]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__wdata 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__wdata 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[723]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__wdata 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__wdata 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[724]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__wdata 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__wdata 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[725]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__wdata 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__wdata 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[726]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__wdata 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__wdata 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[727]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__wdata 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__wdata 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[728]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__wdata 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__wdata 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[729]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__wdata 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__wdata 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[730]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__wdata 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__wdata 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[731]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__wdata 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__wdata 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[732]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__wdata 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__wdata 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[733]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__wdata 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__wdata 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[734]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__wdata 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__wdata 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[735]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__wdata 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__wdata 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[736]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__wdata 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__wdata 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[737]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__wdata 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__wdata 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[738]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__wdata 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__wdata 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[739]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__wdata 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__wdata 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[740]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__wdata 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__wdata 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[741]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__wdata 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__wdata 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[742]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__wdata 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__wdata 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[743]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__wdata 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__wdata 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[744]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__wdata 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__wdata 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[745]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__wdata 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__wdata 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[746]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__wdata 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__wdata 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[747]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__wdata 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__wdata 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[748]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__wdata 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__wdata 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[749]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__wdata 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__wdata 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[750]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__wdata 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__wdata 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[751]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__wdata 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__wdata 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[752]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__wdata 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__wdata 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[753]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__wdata 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__wdata 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[754]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__wdata 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__wdata 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[755]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__wdata 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__wdata 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[756]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__wdata 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__wdata 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[757]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__wdata 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__wdata 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[758]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__wdata 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__wdata 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[759]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__wdata 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__wdata 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[760]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__wdata 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__wdata 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[761]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__wdata 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__wdata 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[762]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__wdata 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__wdata 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[763]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__wdata 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__wdata 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[764]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__wdata 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__exe_0__DOT__wdata 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[765]);
        vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__exe_0__DOT____Vtogcov__wdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__exe_0__DOT__wdata 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__ram_data) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__ram_data)))) {
        ++(vlSymsp->__Vcoverage[281]);
        vlSelf->top__DOT____Vtogcov__ram_data = ((0xfffffffffffffffeULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_data) 
                                                 | (IData)((IData)(
                                                                   (1U 
                                                                    & (IData)(vlSelf->top__DOT__ram_data)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_data 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_data 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[282]);
        vlSelf->top__DOT____Vtogcov__ram_data = ((0xfffffffffffffffdULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_data) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_data 
                                                                                >> 1U))))) 
                                                    << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_data 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_data 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[283]);
        vlSelf->top__DOT____Vtogcov__ram_data = ((0xfffffffffffffffbULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_data) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_data 
                                                                                >> 2U))))) 
                                                    << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_data 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_data 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[284]);
        vlSelf->top__DOT____Vtogcov__ram_data = ((0xfffffffffffffff7ULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_data) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_data 
                                                                                >> 3U))))) 
                                                    << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_data 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_data 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[285]);
        vlSelf->top__DOT____Vtogcov__ram_data = ((0xffffffffffffffefULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_data) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_data 
                                                                                >> 4U))))) 
                                                    << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_data 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_data 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[286]);
        vlSelf->top__DOT____Vtogcov__ram_data = ((0xffffffffffffffdfULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_data) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_data 
                                                                                >> 5U))))) 
                                                    << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_data 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_data 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[287]);
        vlSelf->top__DOT____Vtogcov__ram_data = ((0xffffffffffffffbfULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_data) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_data 
                                                                                >> 6U))))) 
                                                    << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_data 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_data 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[288]);
        vlSelf->top__DOT____Vtogcov__ram_data = ((0xffffffffffffff7fULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_data) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_data 
                                                                                >> 7U))))) 
                                                    << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_data 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_data 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[289]);
        vlSelf->top__DOT____Vtogcov__ram_data = ((0xfffffffffffffeffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_data) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_data 
                                                                                >> 8U))))) 
                                                    << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_data 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_data 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[290]);
        vlSelf->top__DOT____Vtogcov__ram_data = ((0xfffffffffffffdffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_data) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_data 
                                                                                >> 9U))))) 
                                                    << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_data 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_data 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[291]);
        vlSelf->top__DOT____Vtogcov__ram_data = ((0xfffffffffffffbffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_data) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_data 
                                                                                >> 0xaU))))) 
                                                    << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_data 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_data 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[292]);
        vlSelf->top__DOT____Vtogcov__ram_data = ((0xfffffffffffff7ffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_data) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_data 
                                                                                >> 0xbU))))) 
                                                    << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_data 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_data 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[293]);
        vlSelf->top__DOT____Vtogcov__ram_data = ((0xffffffffffffefffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_data) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_data 
                                                                                >> 0xcU))))) 
                                                    << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_data 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_data 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[294]);
        vlSelf->top__DOT____Vtogcov__ram_data = ((0xffffffffffffdfffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_data) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_data 
                                                                                >> 0xdU))))) 
                                                    << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_data 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_data 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[295]);
        vlSelf->top__DOT____Vtogcov__ram_data = ((0xffffffffffffbfffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_data) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_data 
                                                                                >> 0xeU))))) 
                                                    << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_data 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_data 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[296]);
        vlSelf->top__DOT____Vtogcov__ram_data = ((0xffffffffffff7fffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_data) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_data 
                                                                                >> 0xfU))))) 
                                                    << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_data 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_data 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[297]);
        vlSelf->top__DOT____Vtogcov__ram_data = ((0xfffffffffffeffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_data) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_data 
                                                                                >> 0x10U))))) 
                                                    << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_data 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_data 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[298]);
        vlSelf->top__DOT____Vtogcov__ram_data = ((0xfffffffffffdffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_data) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_data 
                                                                                >> 0x11U))))) 
                                                    << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_data 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_data 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[299]);
        vlSelf->top__DOT____Vtogcov__ram_data = ((0xfffffffffffbffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_data) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_data 
                                                                                >> 0x12U))))) 
                                                    << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_data 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_data 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[300]);
        vlSelf->top__DOT____Vtogcov__ram_data = ((0xfffffffffff7ffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_data) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_data 
                                                                                >> 0x13U))))) 
                                                    << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_data 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_data 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[301]);
        vlSelf->top__DOT____Vtogcov__ram_data = ((0xffffffffffefffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_data) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_data 
                                                                                >> 0x14U))))) 
                                                    << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_data 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_data 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[302]);
        vlSelf->top__DOT____Vtogcov__ram_data = ((0xffffffffffdfffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_data) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_data 
                                                                                >> 0x15U))))) 
                                                    << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_data 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_data 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[303]);
        vlSelf->top__DOT____Vtogcov__ram_data = ((0xffffffffffbfffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_data) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_data 
                                                                                >> 0x16U))))) 
                                                    << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_data 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_data 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[304]);
        vlSelf->top__DOT____Vtogcov__ram_data = ((0xffffffffff7fffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_data) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_data 
                                                                                >> 0x17U))))) 
                                                    << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_data 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_data 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[305]);
        vlSelf->top__DOT____Vtogcov__ram_data = ((0xfffffffffeffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_data) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_data 
                                                                                >> 0x18U))))) 
                                                    << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_data 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_data 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[306]);
        vlSelf->top__DOT____Vtogcov__ram_data = ((0xfffffffffdffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_data) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_data 
                                                                                >> 0x19U))))) 
                                                    << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_data 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_data 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[307]);
        vlSelf->top__DOT____Vtogcov__ram_data = ((0xfffffffffbffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_data) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_data 
                                                                                >> 0x1aU))))) 
                                                    << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_data 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_data 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[308]);
        vlSelf->top__DOT____Vtogcov__ram_data = ((0xfffffffff7ffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_data) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_data 
                                                                                >> 0x1bU))))) 
                                                    << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_data 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_data 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[309]);
        vlSelf->top__DOT____Vtogcov__ram_data = ((0xffffffffefffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_data) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_data 
                                                                                >> 0x1cU))))) 
                                                    << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_data 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_data 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[310]);
        vlSelf->top__DOT____Vtogcov__ram_data = ((0xffffffffdfffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_data) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_data 
                                                                                >> 0x1dU))))) 
                                                    << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_data 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_data 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[311]);
        vlSelf->top__DOT____Vtogcov__ram_data = ((0xffffffffbfffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_data) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_data 
                                                                                >> 0x1eU))))) 
                                                    << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_data 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_data 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[312]);
        vlSelf->top__DOT____Vtogcov__ram_data = ((0xffffffff7fffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_data) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_data 
                                                                                >> 0x1fU))))) 
                                                    << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_data 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_data 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[313]);
        vlSelf->top__DOT____Vtogcov__ram_data = ((0xfffffffeffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_data) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_data 
                                                                                >> 0x20U))))) 
                                                    << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_data 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_data 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[314]);
        vlSelf->top__DOT____Vtogcov__ram_data = ((0xfffffffdffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_data) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_data 
                                                                                >> 0x21U))))) 
                                                    << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_data 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_data 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[315]);
        vlSelf->top__DOT____Vtogcov__ram_data = ((0xfffffffbffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_data) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_data 
                                                                                >> 0x22U))))) 
                                                    << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_data 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_data 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[316]);
        vlSelf->top__DOT____Vtogcov__ram_data = ((0xfffffff7ffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_data) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_data 
                                                                                >> 0x23U))))) 
                                                    << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_data 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_data 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[317]);
        vlSelf->top__DOT____Vtogcov__ram_data = ((0xffffffefffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_data) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_data 
                                                                                >> 0x24U))))) 
                                                    << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_data 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_data 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[318]);
        vlSelf->top__DOT____Vtogcov__ram_data = ((0xffffffdfffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_data) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_data 
                                                                                >> 0x25U))))) 
                                                    << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_data 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_data 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[319]);
        vlSelf->top__DOT____Vtogcov__ram_data = ((0xffffffbfffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_data) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_data 
                                                                                >> 0x26U))))) 
                                                    << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_data 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_data 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[320]);
        vlSelf->top__DOT____Vtogcov__ram_data = ((0xffffff7fffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_data) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_data 
                                                                                >> 0x27U))))) 
                                                    << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_data 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_data 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[321]);
        vlSelf->top__DOT____Vtogcov__ram_data = ((0xfffffeffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_data) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_data 
                                                                                >> 0x28U))))) 
                                                    << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_data 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_data 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[322]);
        vlSelf->top__DOT____Vtogcov__ram_data = ((0xfffffdffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_data) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_data 
                                                                                >> 0x29U))))) 
                                                    << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_data 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_data 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[323]);
        vlSelf->top__DOT____Vtogcov__ram_data = ((0xfffffbffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_data) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_data 
                                                                                >> 0x2aU))))) 
                                                    << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_data 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_data 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[324]);
        vlSelf->top__DOT____Vtogcov__ram_data = ((0xfffff7ffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_data) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_data 
                                                                                >> 0x2bU))))) 
                                                    << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_data 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_data 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[325]);
        vlSelf->top__DOT____Vtogcov__ram_data = ((0xffffefffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_data) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_data 
                                                                                >> 0x2cU))))) 
                                                    << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_data 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_data 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[326]);
        vlSelf->top__DOT____Vtogcov__ram_data = ((0xffffdfffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_data) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_data 
                                                                                >> 0x2dU))))) 
                                                    << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_data 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_data 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[327]);
        vlSelf->top__DOT____Vtogcov__ram_data = ((0xffffbfffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_data) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_data 
                                                                                >> 0x2eU))))) 
                                                    << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_data 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_data 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[328]);
        vlSelf->top__DOT____Vtogcov__ram_data = ((0xffff7fffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_data) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_data 
                                                                                >> 0x2fU))))) 
                                                    << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_data 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_data 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[329]);
        vlSelf->top__DOT____Vtogcov__ram_data = ((0xfffeffffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_data) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_data 
                                                                                >> 0x30U))))) 
                                                    << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_data 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_data 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[330]);
        vlSelf->top__DOT____Vtogcov__ram_data = ((0xfffdffffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_data) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_data 
                                                                                >> 0x31U))))) 
                                                    << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_data 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_data 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[331]);
        vlSelf->top__DOT____Vtogcov__ram_data = ((0xfffbffffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_data) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_data 
                                                                                >> 0x32U))))) 
                                                    << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_data 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_data 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[332]);
        vlSelf->top__DOT____Vtogcov__ram_data = ((0xfff7ffffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_data) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_data 
                                                                                >> 0x33U))))) 
                                                    << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_data 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_data 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[333]);
        vlSelf->top__DOT____Vtogcov__ram_data = ((0xffefffffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_data) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_data 
                                                                                >> 0x34U))))) 
                                                    << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_data 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_data 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[334]);
        vlSelf->top__DOT____Vtogcov__ram_data = ((0xffdfffffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_data) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_data 
                                                                                >> 0x35U))))) 
                                                    << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_data 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_data 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[335]);
        vlSelf->top__DOT____Vtogcov__ram_data = ((0xffbfffffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_data) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_data 
                                                                                >> 0x36U))))) 
                                                    << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_data 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_data 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[336]);
        vlSelf->top__DOT____Vtogcov__ram_data = ((0xff7fffffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_data) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_data 
                                                                                >> 0x37U))))) 
                                                    << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_data 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_data 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[337]);
        vlSelf->top__DOT____Vtogcov__ram_data = ((0xfeffffffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_data) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_data 
                                                                                >> 0x38U))))) 
                                                    << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_data 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_data 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[338]);
        vlSelf->top__DOT____Vtogcov__ram_data = ((0xfdffffffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_data) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_data 
                                                                                >> 0x39U))))) 
                                                    << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_data 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_data 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[339]);
        vlSelf->top__DOT____Vtogcov__ram_data = ((0xfbffffffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_data) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_data 
                                                                                >> 0x3aU))))) 
                                                    << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_data 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_data 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[340]);
        vlSelf->top__DOT____Vtogcov__ram_data = ((0xf7ffffffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_data) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_data 
                                                                                >> 0x3bU))))) 
                                                    << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_data 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_data 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[341]);
        vlSelf->top__DOT____Vtogcov__ram_data = ((0xefffffffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_data) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_data 
                                                                                >> 0x3cU))))) 
                                                    << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_data 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_data 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[342]);
        vlSelf->top__DOT____Vtogcov__ram_data = ((0xdfffffffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_data) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_data 
                                                                                >> 0x3dU))))) 
                                                    << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_data 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_data 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[343]);
        vlSelf->top__DOT____Vtogcov__ram_data = ((0xbfffffffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_data) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_data 
                                                                                >> 0x3eU))))) 
                                                    << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__ram_data 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__ram_data 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[344]);
        vlSelf->top__DOT____Vtogcov__ram_data = ((0x7fffffffffffffffULL 
                                                  & vlSelf->top__DOT____Vtogcov__ram_data) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__ram_data 
                                                                                >> 0x3fU))))) 
                                                    << 0x3fU));
    }
}
