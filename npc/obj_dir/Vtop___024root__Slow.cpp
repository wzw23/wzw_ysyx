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

void Vtop___024root___settle__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__1\n"); );
    // Variables
    VlWide<4>/*127:0*/ __Vtemp5;
    VlWide<8>/*255:0*/ __Vtemp6;
    VlWide<9>/*287:0*/ __Vtemp7;
    VlWide<13>/*415:0*/ __Vtemp10;
    // Body
    if ((1U & (~ (IData)(vlSelf->top__DOT__i0__DOT__i0__DOT____Vtogcov__wen)))) {
        ++(vlSymsp->__Vcoverage[98]);
        vlSelf->top__DOT__i0__DOT__i0__DOT____Vtogcov__wen = 1U;
    }
    if ((8U & vlSelf->top__DOT__de__DOT____Vtogcov__auipc)) {
        ++(vlSymsp->__Vcoverage[2369]);
        vlSelf->top__DOT__de__DOT____Vtogcov__auipc 
            = (0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__auipc);
    }
    vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list[0U] = 0x2000e6aULL;
    if (((IData)(vlSelf->clk) ^ (IData)(vlSelf->top__DOT____Vtogcov__clk))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->top__DOT____Vtogcov__clk = vlSelf->clk;
    }
    if (((IData)(vlSelf->rst) ^ (IData)(vlSelf->top__DOT____Vtogcov__rst))) {
        ++(vlSymsp->__Vcoverage[1]);
        vlSelf->top__DOT____Vtogcov__rst = vlSelf->rst;
    }
    if (((0x100073U == vlSelf->inst) ^ (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__state))) {
        ++(vlSymsp->__Vcoverage[369]);
        vlSelf->top__DOT__de__DOT____Vtogcov__state 
            = (0x100073U == vlSelf->inst);
    }
    if ((2U & ((0x100073U == vlSelf->inst) ^ vlSelf->top__DOT__de__DOT____Vtogcov__return_state))) {
        ++(vlSymsp->__Vcoverage[370]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_state 
            = ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__return_state) 
               | (2U & (0x100073U == vlSelf->inst)));
    }
    if ((4U & ((0x100073U == vlSelf->inst) ^ vlSelf->top__DOT__de__DOT____Vtogcov__return_state))) {
        ++(vlSymsp->__Vcoverage[371]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_state 
            = ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__return_state) 
               | (4U & (0x100073U == vlSelf->inst)));
    }
    if ((8U & ((0x100073U == vlSelf->inst) ^ vlSelf->top__DOT__de__DOT____Vtogcov__return_state))) {
        ++(vlSymsp->__Vcoverage[372]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_state 
            = ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__return_state) 
               | (8U & (0x100073U == vlSelf->inst)));
    }
    if ((0x10U & ((0x100073U == vlSelf->inst) ^ vlSelf->top__DOT__de__DOT____Vtogcov__return_state))) {
        ++(vlSymsp->__Vcoverage[373]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_state 
            = ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__return_state) 
               | (0x10U & (0x100073U == vlSelf->inst)));
    }
    if ((0x20U & ((0x100073U == vlSelf->inst) ^ vlSelf->top__DOT__de__DOT____Vtogcov__return_state))) {
        ++(vlSymsp->__Vcoverage[374]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_state 
            = ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__return_state) 
               | (0x20U & (0x100073U == vlSelf->inst)));
    }
    if ((0x40U & ((0x100073U == vlSelf->inst) ^ vlSelf->top__DOT__de__DOT____Vtogcov__return_state))) {
        ++(vlSymsp->__Vcoverage[375]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_state 
            = ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__return_state) 
               | (0x40U & (0x100073U == vlSelf->inst)));
    }
    if ((0x80U & ((0x100073U == vlSelf->inst) ^ vlSelf->top__DOT__de__DOT____Vtogcov__return_state))) {
        ++(vlSymsp->__Vcoverage[376]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_state 
            = ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__return_state) 
               | (0x80U & (0x100073U == vlSelf->inst)));
    }
    if ((0x100U & ((0x100073U == vlSelf->inst) ^ vlSelf->top__DOT__de__DOT____Vtogcov__return_state))) {
        ++(vlSymsp->__Vcoverage[377]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_state 
            = ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__return_state) 
               | (0x100U & (0x100073U == vlSelf->inst)));
    }
    if ((0x200U & ((0x100073U == vlSelf->inst) ^ vlSelf->top__DOT__de__DOT____Vtogcov__return_state))) {
        ++(vlSymsp->__Vcoverage[378]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_state 
            = ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__return_state) 
               | (0x200U & (0x100073U == vlSelf->inst)));
    }
    if ((0x400U & ((0x100073U == vlSelf->inst) ^ vlSelf->top__DOT__de__DOT____Vtogcov__return_state))) {
        ++(vlSymsp->__Vcoverage[379]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_state 
            = ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__return_state) 
               | (0x400U & (0x100073U == vlSelf->inst)));
    }
    if ((0x800U & ((0x100073U == vlSelf->inst) ^ vlSelf->top__DOT__de__DOT____Vtogcov__return_state))) {
        ++(vlSymsp->__Vcoverage[380]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_state 
            = ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__return_state) 
               | (0x800U & (0x100073U == vlSelf->inst)));
    }
    if ((0x1000U & ((0x100073U == vlSelf->inst) ^ vlSelf->top__DOT__de__DOT____Vtogcov__return_state))) {
        ++(vlSymsp->__Vcoverage[381]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_state 
            = ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__return_state) 
               | (0x1000U & (0x100073U == vlSelf->inst)));
    }
    if ((0x2000U & ((0x100073U == vlSelf->inst) ^ vlSelf->top__DOT__de__DOT____Vtogcov__return_state))) {
        ++(vlSymsp->__Vcoverage[382]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_state 
            = ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__return_state) 
               | (0x2000U & (0x100073U == vlSelf->inst)));
    }
    if ((0x4000U & ((0x100073U == vlSelf->inst) ^ vlSelf->top__DOT__de__DOT____Vtogcov__return_state))) {
        ++(vlSymsp->__Vcoverage[383]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_state 
            = ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__return_state) 
               | (0x4000U & (0x100073U == vlSelf->inst)));
    }
    if ((0x8000U & ((0x100073U == vlSelf->inst) ^ vlSelf->top__DOT__de__DOT____Vtogcov__return_state))) {
        ++(vlSymsp->__Vcoverage[384]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_state 
            = ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__return_state) 
               | (0x8000U & (0x100073U == vlSelf->inst)));
    }
    if ((0x10000U & ((0x100073U == vlSelf->inst) ^ vlSelf->top__DOT__de__DOT____Vtogcov__return_state))) {
        ++(vlSymsp->__Vcoverage[385]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_state 
            = ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__return_state) 
               | (0x10000U & (0x100073U == vlSelf->inst)));
    }
    if ((0x20000U & ((0x100073U == vlSelf->inst) ^ vlSelf->top__DOT__de__DOT____Vtogcov__return_state))) {
        ++(vlSymsp->__Vcoverage[386]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_state 
            = ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__return_state) 
               | (0x20000U & (0x100073U == vlSelf->inst)));
    }
    if ((0x40000U & ((0x100073U == vlSelf->inst) ^ vlSelf->top__DOT__de__DOT____Vtogcov__return_state))) {
        ++(vlSymsp->__Vcoverage[387]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_state 
            = ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__return_state) 
               | (0x40000U & (0x100073U == vlSelf->inst)));
    }
    if ((0x80000U & ((0x100073U == vlSelf->inst) ^ vlSelf->top__DOT__de__DOT____Vtogcov__return_state))) {
        ++(vlSymsp->__Vcoverage[388]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_state 
            = ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__return_state) 
               | (0x80000U & (0x100073U == vlSelf->inst)));
    }
    if ((0x100000U & ((0x100073U == vlSelf->inst) ^ vlSelf->top__DOT__de__DOT____Vtogcov__return_state))) {
        ++(vlSymsp->__Vcoverage[389]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_state 
            = ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__return_state) 
               | (0x100000U & (0x100073U == vlSelf->inst)));
    }
    if ((0x200000U & ((0x100073U == vlSelf->inst) ^ vlSelf->top__DOT__de__DOT____Vtogcov__return_state))) {
        ++(vlSymsp->__Vcoverage[390]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_state 
            = ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__return_state) 
               | (0x200000U & (0x100073U == vlSelf->inst)));
    }
    if ((0x400000U & ((0x100073U == vlSelf->inst) ^ vlSelf->top__DOT__de__DOT____Vtogcov__return_state))) {
        ++(vlSymsp->__Vcoverage[391]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_state 
            = ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__return_state) 
               | (0x400000U & (0x100073U == vlSelf->inst)));
    }
    if ((0x800000U & ((0x100073U == vlSelf->inst) ^ vlSelf->top__DOT__de__DOT____Vtogcov__return_state))) {
        ++(vlSymsp->__Vcoverage[392]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_state 
            = ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__return_state) 
               | (0x800000U & (0x100073U == vlSelf->inst)));
    }
    if ((0x1000000U & ((0x100073U == vlSelf->inst) 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__return_state))) {
        ++(vlSymsp->__Vcoverage[393]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_state 
            = ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__return_state) 
               | (0x1000000U & (0x100073U == vlSelf->inst)));
    }
    if ((0x2000000U & ((0x100073U == vlSelf->inst) 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__return_state))) {
        ++(vlSymsp->__Vcoverage[394]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_state 
            = ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__return_state) 
               | (0x2000000U & (0x100073U == vlSelf->inst)));
    }
    if ((0x4000000U & ((0x100073U == vlSelf->inst) 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__return_state))) {
        ++(vlSymsp->__Vcoverage[395]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_state 
            = ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__return_state) 
               | (0x4000000U & (0x100073U == vlSelf->inst)));
    }
    if ((0x8000000U & ((0x100073U == vlSelf->inst) 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__return_state))) {
        ++(vlSymsp->__Vcoverage[396]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_state 
            = ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__return_state) 
               | (0x8000000U & (0x100073U == vlSelf->inst)));
    }
    if ((0x10000000U & ((0x100073U == vlSelf->inst) 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__return_state))) {
        ++(vlSymsp->__Vcoverage[397]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_state 
            = ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__return_state) 
               | (0x10000000U & (0x100073U == vlSelf->inst)));
    }
    if ((0x20000000U & ((0x100073U == vlSelf->inst) 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__return_state))) {
        ++(vlSymsp->__Vcoverage[398]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_state 
            = ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__return_state) 
               | (0x20000000U & (0x100073U == vlSelf->inst)));
    }
    if ((0x40000000U & ((0x100073U == vlSelf->inst) 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__return_state))) {
        ++(vlSymsp->__Vcoverage[399]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_state 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__return_state) 
               | (0x40000000U & (0x100073U == vlSelf->inst)));
    }
    if ((((0x100073U == vlSelf->inst) ^ vlSelf->top__DOT__de__DOT____Vtogcov__return_state) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[400]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_state 
            = ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__return_state) 
               | (0x80000000U & (0x100073U == vlSelf->inst)));
    }
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
    vlSelf->top__DOT__de__DOT__luimid = (((QData)((IData)(
                                                          (- (IData)(
                                                                     (vlSelf->inst 
                                                                      >> 0x1fU))))) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           (0xfffff000U 
                                                            & vlSelf->inst))));
    vlSelf->top__DOT__de__DOT__addauipc = (((QData)((IData)(
                                                            (- (IData)(
                                                                       (vlSelf->inst 
                                                                        >> 0x1fU))))) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             (0xfffff000U 
                                                              & vlSelf->inst))));
    __Vtemp5[2U] = (((IData)((((QData)((IData)((vlSelf->inst 
                                                >> 0x1fU))) 
                               << 0xcU) | (QData)((IData)(
                                                          ((0x800U 
                                                            & (vlSelf->inst 
                                                               << 4U)) 
                                                           | ((0x7e0U 
                                                               & (vlSelf->inst 
                                                                  >> 0x14U)) 
                                                              | (0x1eU 
                                                                 & (vlSelf->inst 
                                                                    >> 7U)))))))) 
                     >> 9U) | ((IData)(((((QData)((IData)(
                                                          (vlSelf->inst 
                                                           >> 0x1fU))) 
                                          << 0xcU) 
                                         | (QData)((IData)(
                                                           ((0x800U 
                                                             & (vlSelf->inst 
                                                                << 4U)) 
                                                            | ((0x7e0U 
                                                                & (vlSelf->inst 
                                                                   >> 0x14U)) 
                                                               | (0x1eU 
                                                                  & (vlSelf->inst 
                                                                     >> 7U))))))) 
                                        >> 0x20U)) 
                               << 0x17U));
    __Vtemp6[4U] = ((0x7fffffU & ((IData)((((QData)((IData)(
                                                            (vlSelf->inst 
                                                             >> 0x19U))) 
                                            << 5U) 
                                           | (QData)((IData)(
                                                             (0x1fU 
                                                              & (vlSelf->inst 
                                                                 >> 7U)))))) 
                                  >> 6U)) | ((0x3800000U 
                                              & ((IData)(
                                                         (((QData)((IData)(
                                                                           (vlSelf->inst 
                                                                            >> 0x19U))) 
                                                           << 5U) 
                                                          | (QData)((IData)(
                                                                            (0x1fU 
                                                                             & (vlSelf->inst 
                                                                                >> 7U)))))) 
                                                 >> 6U)) 
                                             | ((IData)(
                                                        ((((QData)((IData)(
                                                                           (vlSelf->inst 
                                                                            >> 0x19U))) 
                                                           << 5U) 
                                                          | (QData)((IData)(
                                                                            (0x1fU 
                                                                             & (vlSelf->inst 
                                                                                >> 7U))))) 
                                                         >> 0x20U)) 
                                                << 0x1aU)));
    __Vtemp6[5U] = (0x8000000U | ((0x7fffffU & ((IData)(
                                                        ((((QData)((IData)(
                                                                           (vlSelf->inst 
                                                                            >> 0x19U))) 
                                                           << 5U) 
                                                          | (QData)((IData)(
                                                                            (0x1fU 
                                                                             & (vlSelf->inst 
                                                                                >> 7U))))) 
                                                         >> 0x20U)) 
                                                >> 6U)) 
                                  | (((IData)((QData)((IData)(
                                                              (vlSelf->inst 
                                                               >> 0x14U)))) 
                                      << 0x1dU) | (0x3800000U 
                                                   & ((IData)(
                                                              ((((QData)((IData)(
                                                                                (vlSelf->inst 
                                                                                >> 0x19U))) 
                                                                 << 5U) 
                                                                | (QData)((IData)(
                                                                                (0x1fU 
                                                                                & (vlSelf->inst 
                                                                                >> 7U))))) 
                                                               >> 0x20U)) 
                                                      >> 6U)))));
    __Vtemp6[6U] = ((0x7fffffU & ((IData)((QData)((IData)(
                                                          (vlSelf->inst 
                                                           >> 0x14U)))) 
                                  >> 3U)) | ((0x3800000U 
                                              & ((IData)((QData)((IData)(
                                                                         (vlSelf->inst 
                                                                          >> 0x14U)))) 
                                                 >> 3U)) 
                                             | ((0x1c000000U 
                                                 & ((IData)((QData)((IData)(
                                                                            (vlSelf->inst 
                                                                             >> 0x14U)))) 
                                                    >> 3U)) 
                                                | ((IData)(
                                                           ((QData)((IData)(
                                                                            (vlSelf->inst 
                                                                             >> 0x14U))) 
                                                            >> 0x20U)) 
                                                   << 0x1dU))));
    __Vtemp6[7U] = (0x20000000U | ((0x7fffffU & ((IData)(
                                                         ((QData)((IData)(
                                                                          (vlSelf->inst 
                                                                           >> 0x14U))) 
                                                          >> 0x20U)) 
                                                 >> 3U)) 
                                   | ((0x3800000U & 
                                       ((IData)(((QData)((IData)(
                                                                 (vlSelf->inst 
                                                                  >> 0x14U))) 
                                                 >> 0x20U)) 
                                        >> 3U)) | (0x1c000000U 
                                                   & ((IData)(
                                                              ((QData)((IData)(
                                                                               (vlSelf->inst 
                                                                                >> 0x14U))) 
                                                               >> 0x20U)) 
                                                      >> 3U)))));
    __Vtemp7[3U] = ((__Vtemp5[2U] >> 0x11U) | (0xffff8000U 
                                               & ((IData)(
                                                          ((((QData)((IData)(
                                                                             (vlSelf->inst 
                                                                              >> 0x1fU))) 
                                                             << 0xcU) 
                                                            | (QData)((IData)(
                                                                              ((0x800U 
                                                                                & (vlSelf->inst 
                                                                                << 4U)) 
                                                                               | ((0x7e0U 
                                                                                & (vlSelf->inst 
                                                                                >> 0x14U)) 
                                                                                | (0x1eU 
                                                                                & (vlSelf->inst 
                                                                                >> 7U))))))) 
                                                           >> 0x20U)) 
                                                  << 6U)));
    __Vtemp7[4U] = (0xc0U | (((0x7e00U & ((IData)((
                                                   ((QData)((IData)(
                                                                    (vlSelf->inst 
                                                                     >> 0x19U))) 
                                                    << 5U) 
                                                   | (QData)((IData)(
                                                                     (0x1fU 
                                                                      & (vlSelf->inst 
                                                                         >> 7U)))))) 
                                          << 9U)) | 
                              ((IData)(((((QData)((IData)(
                                                          (vlSelf->inst 
                                                           >> 0x1fU))) 
                                          << 0xcU) 
                                         | (QData)((IData)(
                                                           ((0x800U 
                                                             & (vlSelf->inst 
                                                                << 4U)) 
                                                            | ((0x7e0U 
                                                                & (vlSelf->inst 
                                                                   >> 0x14U)) 
                                                               | (0x1eU 
                                                                  & (vlSelf->inst 
                                                                     >> 7U))))))) 
                                        >> 0x20U)) 
                               >> 0x1aU)) | (__Vtemp6[4U] 
                                             << 0xfU)));
    __Vtemp10[5U] = ((7U & ((IData)((0x40000000000000ULL 
                                     | (QData)((IData)(
                                                       (vlSelf->inst 
                                                        >> 0xcU))))) 
                            >> 0xeU)) | ((0x3fff8U 
                                          & ((IData)(
                                                     (0x40000000000000ULL 
                                                      | (QData)((IData)(
                                                                        (vlSelf->inst 
                                                                         >> 0xcU))))) 
                                             >> 0xeU)) 
                                         | ((IData)(
                                                    ((0x40000000000000ULL 
                                                      | (QData)((IData)(
                                                                        (vlSelf->inst 
                                                                         >> 0xcU)))) 
                                                     >> 0x20U)) 
                                            << 0x12U)));
    __Vtemp10[6U] = ((7U & ((IData)(((0x40000000000000ULL 
                                      | (QData)((IData)(
                                                        (vlSelf->inst 
                                                         >> 0xcU)))) 
                                     >> 0x20U)) >> 0xeU)) 
                     | (((0x3fe00U & ((IData)((((QData)((IData)(
                                                                (vlSelf->inst 
                                                                 >> 0x1fU))) 
                                                << 0xcU) 
                                               | (QData)((IData)(
                                                                 ((0x800U 
                                                                   & (vlSelf->inst 
                                                                      << 4U)) 
                                                                  | ((0x7e0U 
                                                                      & (vlSelf->inst 
                                                                         >> 0x14U)) 
                                                                     | (0x1eU 
                                                                        & (vlSelf->inst 
                                                                           >> 7U)))))))) 
                                      << 9U)) | (0x3fff8U 
                                                 & ((IData)(
                                                            ((0x40000000000000ULL 
                                                              | (QData)((IData)(
                                                                                (vlSelf->inst 
                                                                                >> 0xcU)))) 
                                                             >> 0x20U)) 
                                                    >> 0xeU))) 
                        | (__Vtemp5[2U] << 0x12U)));
    vlSelf->top__DOT__de__DOT____Vcellinp__m1____pinNumber4[0U] = 0U;
    vlSelf->top__DOT__de__DOT____Vcellinp__m1____pinNumber4[1U] = 0U;
    vlSelf->top__DOT__de__DOT____Vcellinp__m1____pinNumber4[2U] 
        = (7U | ((IData)((((QData)((IData)((vlSelf->inst 
                                            >> 0x1fU))) 
                           << 0x14U) | (QData)((IData)(
                                                       ((0xff000U 
                                                         & vlSelf->inst) 
                                                        | ((0x800U 
                                                            & (vlSelf->inst 
                                                               >> 9U)) 
                                                           | (0x7feU 
                                                              & (vlSelf->inst 
                                                                 >> 0x14U)))))))) 
                 << 3U));
    vlSelf->top__DOT__de__DOT____Vcellinp__m1____pinNumber4[3U] 
        = (((IData)((((QData)((IData)((vlSelf->inst 
                                       >> 0x1fU))) 
                      << 0x14U) | (QData)((IData)((
                                                   (0xff000U 
                                                    & vlSelf->inst) 
                                                   | ((0x800U 
                                                       & (vlSelf->inst 
                                                          >> 9U)) 
                                                      | (0x7feU 
                                                         & (vlSelf->inst 
                                                            >> 0x14U)))))))) 
            >> 0x1dU) | ((IData)(((((QData)((IData)(
                                                    (vlSelf->inst 
                                                     >> 0x1fU))) 
                                    << 0x14U) | (QData)((IData)(
                                                                ((0xff000U 
                                                                  & vlSelf->inst) 
                                                                 | ((0x800U 
                                                                     & (vlSelf->inst 
                                                                        >> 9U)) 
                                                                    | (0x7feU 
                                                                       & (vlSelf->inst 
                                                                          >> 0x14U))))))) 
                                  >> 0x20U)) << 3U));
    vlSelf->top__DOT__de__DOT____Vcellinp__m1____pinNumber4[4U] 
        = (0x28U | (((IData)((0x40000000000000ULL | (QData)((IData)(
                                                                    (vlSelf->inst 
                                                                     >> 0xcU))))) 
                     << 0x12U) | ((IData)(((((QData)((IData)(
                                                             (vlSelf->inst 
                                                              >> 0x1fU))) 
                                             << 0x14U) 
                                            | (QData)((IData)(
                                                              ((0xff000U 
                                                                & vlSelf->inst) 
                                                               | ((0x800U 
                                                                   & (vlSelf->inst 
                                                                      >> 9U)) 
                                                                  | (0x7feU 
                                                                     & (vlSelf->inst 
                                                                        >> 0x14U))))))) 
                                           >> 0x20U)) 
                                  >> 0x1dU)));
    vlSelf->top__DOT__de__DOT____Vcellinp__m1____pinNumber4[5U] 
        = __Vtemp10[5U];
    vlSelf->top__DOT__de__DOT____Vcellinp__m1____pinNumber4[6U] 
        = __Vtemp10[6U];
    vlSelf->top__DOT__de__DOT____Vcellinp__m1____pinNumber4[7U] 
        = ((7U & (__Vtemp5[2U] >> 0xeU)) | (__Vtemp7[3U] 
                                            << 3U));
    vlSelf->top__DOT__de__DOT____Vcellinp__m1____pinNumber4[8U] 
        = ((__Vtemp7[3U] >> 0x1dU) | (__Vtemp7[4U] 
                                      << 3U));
    vlSelf->top__DOT__de__DOT____Vcellinp__m1____pinNumber4[9U] 
        = ((__Vtemp7[4U] >> 0x1dU) | ((0x3fff8U & (
                                                   __Vtemp6[4U] 
                                                   >> 0xeU)) 
                                      | (__Vtemp6[5U] 
                                         << 0x12U)));
    vlSelf->top__DOT__de__DOT____Vcellinp__m1____pinNumber4[0xaU] 
        = ((7U & (__Vtemp6[5U] >> 0xeU)) | ((0x3fff8U 
                                             & (__Vtemp6[5U] 
                                                >> 0xeU)) 
                                            | (__Vtemp6[6U] 
                                               << 0x12U)));
    vlSelf->top__DOT__de__DOT____Vcellinp__m1____pinNumber4[0xbU] 
        = ((7U & (__Vtemp6[6U] >> 0xeU)) | ((0x3fff8U 
                                             & (__Vtemp6[6U] 
                                                >> 0xeU)) 
                                            | (__Vtemp6[7U] 
                                               << 0x12U)));
    vlSelf->top__DOT__de__DOT____Vcellinp__m1____pinNumber4[0xcU] 
        = ((7U & (__Vtemp6[7U] >> 0xeU)) | (0x3fff8U 
                                            & (__Vtemp6[7U] 
                                               >> 0xeU)));
    vlSelf->top__DOT__de__DOT__sraw = (0x4000503bU 
                                       | (0x1ff8f80U 
                                          & vlSelf->inst));
    vlSelf->top__DOT__de__DOT__jalr = (0x67U | (0xffff8f80U 
                                                & vlSelf->inst));
    vlSelf->top__DOT__de__DOT__addi = (0x13U | (0xffff8f80U 
                                                & vlSelf->inst));
    vlSelf->top__DOT__de__DOT__andi = (0x7013U | (0xffff8f80U 
                                                  & vlSelf->inst));
    vlSelf->top__DOT__de__DOT__xori = (0x4013U | (0xffff8f80U 
                                                  & vlSelf->inst));
    vlSelf->top__DOT__de__DOT__ori = (0x6013U | (0xffff8f80U 
                                                 & vlSelf->inst));
    vlSelf->top__DOT__de__DOT__sllw = (0x103bU | (0x1ff8f80U 
                                                  & vlSelf->inst));
    vlSelf->top__DOT__de__DOT__sll = (0x1033U | (0x1ff8f80U 
                                                 & vlSelf->inst));
    vlSelf->top__DOT__de__DOT__srlw = (0x503bU | (0x1ff8f80U 
                                                  & vlSelf->inst));
    vlSelf->top__DOT__de__DOT__addiw = (0x1bU | (0xffff8f80U 
                                                 & vlSelf->inst));
    vlSelf->top__DOT__de__DOT__slliw = (0x101bU | (0x1ff8f80U 
                                                   & vlSelf->inst));
    vlSelf->top__DOT__de__DOT__srliw = (0x501bU | (0x1ff8f80U 
                                                   & vlSelf->inst));
    vlSelf->top__DOT__de__DOT__sraiw = (0x4000501bU 
                                        | (0x1ff8f80U 
                                           & vlSelf->inst));
    vlSelf->top__DOT__de__DOT__addw = (0x3bU | (0x1ff8f80U 
                                                & vlSelf->inst));
    vlSelf->top__DOT__de__DOT__subw = (0x4000003bU 
                                       | (0x1ff8f80U 
                                          & vlSelf->inst));
    vlSelf->top__DOT__de__DOT__mulw = (0x200003bU | 
                                       (0x1ff8f80U 
                                        & vlSelf->inst));
    vlSelf->top__DOT__de__DOT__divw = (0x200403bU | 
                                       (0x1ff8f80U 
                                        & vlSelf->inst));
    vlSelf->top__DOT__de__DOT__divuw = (0x200503bU 
                                        | (0x1ff8f80U 
                                           & vlSelf->inst));
    vlSelf->top__DOT__de__DOT__div = (0x2005033U | 
                                      (0x1ff8f80U & vlSelf->inst));
    vlSelf->top__DOT__de__DOT__remw = (0x200603bU | 
                                       (0x1ff8f80U 
                                        & vlSelf->inst));
    vlSelf->top__DOT__de__DOT__Add = (0x33U | (0x1ff8f80U 
                                               & vlSelf->inst));
    vlSelf->top__DOT__de__DOT__Mul = (0x2000033U | 
                                      (0x1ff8f80U & vlSelf->inst));
    vlSelf->top__DOT__de__DOT__And = (0x7033U | (0x1ff8f80U 
                                                 & vlSelf->inst));
    vlSelf->top__DOT__de__DOT__Xor = (0x4033U | (0x1ff8f80U 
                                                 & vlSelf->inst));
    vlSelf->top__DOT__de__DOT__Or = (0x6033U | (0x1ff8f80U 
                                                & vlSelf->inst));
    vlSelf->top__DOT__de__DOT__sltu = (0x3033U | (0x1ff8f80U 
                                                  & vlSelf->inst));
    vlSelf->top__DOT__de__DOT__slt = (0x2033U | (0x1ff8f80U 
                                                 & vlSelf->inst));
    vlSelf->top__DOT__de__DOT__sub = (0x40000033U | 
                                      (0x1ff8f80U & vlSelf->inst));
    vlSelf->top__DOT__de__DOT__sltiu = (0x3013U | (0xffff8f80U 
                                                   & vlSelf->inst));
    vlSelf->top__DOT__de__DOT__srai = (0x40005013U 
                                       | (0x3ff8f80U 
                                          & vlSelf->inst));
    vlSelf->top__DOT__de__DOT__slli = (0x1013U | (0x3ff8f80U 
                                                  & vlSelf->inst));
    vlSelf->top__DOT__de__DOT__srli = (0x5013U | (0x3ff8f80U 
                                                  & vlSelf->inst));
    vlSelf->top__DOT__de__DOT__beq = (0x63U | (0xffff8f80U 
                                               & vlSelf->inst));
    vlSelf->top__DOT__de__DOT__bne = (0x1063U | (0xffff8f80U 
                                                 & vlSelf->inst));
    vlSelf->top__DOT__de__DOT__bge = (0x5063U | (0xffff8f80U 
                                                 & vlSelf->inst));
    vlSelf->top__DOT__de__DOT__bgeu = (0x7063U | (0xffff8f80U 
                                                  & vlSelf->inst));
    vlSelf->top__DOT__de__DOT__bltu = (0x6063U | (0xffff8f80U 
                                                  & vlSelf->inst));
    vlSelf->top__DOT__de__DOT__blt = (0x4063U | (0xffff8f80U 
                                                 & vlSelf->inst));
    vlSelf->top__DOT__de__DOT__sd = (0x3023U | (0xffff8f80U 
                                                & vlSelf->inst));
    vlSelf->top__DOT__de__DOT__sh = (0x1023U | (0xffff8f80U 
                                                & vlSelf->inst));
    vlSelf->top__DOT__de__DOT__sw = (0x2023U | (0xffff8f80U 
                                                & vlSelf->inst));
    vlSelf->top__DOT__de__DOT__sb = (0x23U | (0xffff8f80U 
                                              & vlSelf->inst));
    vlSelf->top__DOT__de__DOT__lw = (0x2003U | (0xffff8f80U 
                                                & vlSelf->inst));
    vlSelf->top__DOT__de__DOT__lh = (0x1003U | (0xffff8f80U 
                                                & vlSelf->inst));
    vlSelf->top__DOT__de__DOT__lb = (3U | (0xffff8f80U 
                                           & vlSelf->inst));
    vlSelf->top__DOT__de__DOT__lbu = (0x4003U | (0xffff8f80U 
                                                 & vlSelf->inst));
    vlSelf->top__DOT__de__DOT__lwu = (0x6003U | (0xffff8f80U 
                                                 & vlSelf->inst));
    vlSelf->top__DOT__de__DOT__lhu = (0x5003U | (0xffff8f80U 
                                                 & vlSelf->inst));
    vlSelf->top__DOT__de__DOT__ld = (0x3003U | (0xffff8f80U 
                                                & vlSelf->inst));
    if ((2U & (((IData)(4U) + vlSelf->cpupc) ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out))) {
        ++(vlSymsp->__Vcoverage[4290]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out 
            = ((0xfffffffdU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out) 
               | (2U & ((IData)(4U) + vlSelf->cpupc)));
    }
    if ((4U & (((IData)(4U) + vlSelf->cpupc) ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out))) {
        ++(vlSymsp->__Vcoverage[4291]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out 
            = ((0xfffffffbU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out) 
               | (4U & ((IData)(4U) + vlSelf->cpupc)));
    }
    if ((8U & (((IData)(4U) + vlSelf->cpupc) ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out))) {
        ++(vlSymsp->__Vcoverage[4292]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out 
            = ((0xfffffff7U & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out) 
               | (8U & ((IData)(4U) + vlSelf->cpupc)));
    }
    if ((0x10U & (((IData)(4U) + vlSelf->cpupc) ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out))) {
        ++(vlSymsp->__Vcoverage[4293]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out 
            = ((0xffffffefU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out) 
               | (0x10U & ((IData)(4U) + vlSelf->cpupc)));
    }
    if ((0x20U & (((IData)(4U) + vlSelf->cpupc) ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out))) {
        ++(vlSymsp->__Vcoverage[4294]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out 
            = ((0xffffffdfU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out) 
               | (0x20U & ((IData)(4U) + vlSelf->cpupc)));
    }
    if ((0x40U & (((IData)(4U) + vlSelf->cpupc) ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out))) {
        ++(vlSymsp->__Vcoverage[4295]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out 
            = ((0xffffffbfU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out) 
               | (0x40U & ((IData)(4U) + vlSelf->cpupc)));
    }
    if ((0x80U & (((IData)(4U) + vlSelf->cpupc) ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out))) {
        ++(vlSymsp->__Vcoverage[4296]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out 
            = ((0xffffff7fU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out) 
               | (0x80U & ((IData)(4U) + vlSelf->cpupc)));
    }
    if ((0x100U & (((IData)(4U) + vlSelf->cpupc) ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out))) {
        ++(vlSymsp->__Vcoverage[4297]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out 
            = ((0xfffffeffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out) 
               | (0x100U & ((IData)(4U) + vlSelf->cpupc)));
    }
    if ((0x200U & (((IData)(4U) + vlSelf->cpupc) ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out))) {
        ++(vlSymsp->__Vcoverage[4298]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out 
            = ((0xfffffdffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out) 
               | (0x200U & ((IData)(4U) + vlSelf->cpupc)));
    }
    if ((0x400U & (((IData)(4U) + vlSelf->cpupc) ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out))) {
        ++(vlSymsp->__Vcoverage[4299]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out 
            = ((0xfffffbffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out) 
               | (0x400U & ((IData)(4U) + vlSelf->cpupc)));
    }
    if ((0x800U & (((IData)(4U) + vlSelf->cpupc) ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out))) {
        ++(vlSymsp->__Vcoverage[4300]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out 
            = ((0xfffff7ffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out) 
               | (0x800U & ((IData)(4U) + vlSelf->cpupc)));
    }
    if ((0x1000U & (((IData)(4U) + vlSelf->cpupc) ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out))) {
        ++(vlSymsp->__Vcoverage[4301]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out 
            = ((0xffffefffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out) 
               | (0x1000U & ((IData)(4U) + vlSelf->cpupc)));
    }
    if ((0x2000U & (((IData)(4U) + vlSelf->cpupc) ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out))) {
        ++(vlSymsp->__Vcoverage[4302]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out 
            = ((0xffffdfffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out) 
               | (0x2000U & ((IData)(4U) + vlSelf->cpupc)));
    }
    if ((0x4000U & (((IData)(4U) + vlSelf->cpupc) ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out))) {
        ++(vlSymsp->__Vcoverage[4303]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out 
            = ((0xffffbfffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out) 
               | (0x4000U & ((IData)(4U) + vlSelf->cpupc)));
    }
    if ((0x8000U & (((IData)(4U) + vlSelf->cpupc) ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out))) {
        ++(vlSymsp->__Vcoverage[4304]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out 
            = ((0xffff7fffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out) 
               | (0x8000U & ((IData)(4U) + vlSelf->cpupc)));
    }
    if ((0x10000U & (((IData)(4U) + vlSelf->cpupc) 
                     ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out))) {
        ++(vlSymsp->__Vcoverage[4305]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out 
            = ((0xfffeffffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out) 
               | (0x10000U & ((IData)(4U) + vlSelf->cpupc)));
    }
    if ((0x20000U & (((IData)(4U) + vlSelf->cpupc) 
                     ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out))) {
        ++(vlSymsp->__Vcoverage[4306]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out 
            = ((0xfffdffffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out) 
               | (0x20000U & ((IData)(4U) + vlSelf->cpupc)));
    }
    if ((0x40000U & (((IData)(4U) + vlSelf->cpupc) 
                     ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out))) {
        ++(vlSymsp->__Vcoverage[4307]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out 
            = ((0xfffbffffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out) 
               | (0x40000U & ((IData)(4U) + vlSelf->cpupc)));
    }
    if ((0x80000U & (((IData)(4U) + vlSelf->cpupc) 
                     ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out))) {
        ++(vlSymsp->__Vcoverage[4308]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out 
            = ((0xfff7ffffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out) 
               | (0x80000U & ((IData)(4U) + vlSelf->cpupc)));
    }
    if ((0x100000U & (((IData)(4U) + vlSelf->cpupc) 
                      ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out))) {
        ++(vlSymsp->__Vcoverage[4309]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out 
            = ((0xffefffffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out) 
               | (0x100000U & ((IData)(4U) + vlSelf->cpupc)));
    }
    if ((0x200000U & (((IData)(4U) + vlSelf->cpupc) 
                      ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out))) {
        ++(vlSymsp->__Vcoverage[4310]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out 
            = ((0xffdfffffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out) 
               | (0x200000U & ((IData)(4U) + vlSelf->cpupc)));
    }
    if ((0x400000U & (((IData)(4U) + vlSelf->cpupc) 
                      ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out))) {
        ++(vlSymsp->__Vcoverage[4311]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out 
            = ((0xffbfffffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out) 
               | (0x400000U & ((IData)(4U) + vlSelf->cpupc)));
    }
    if ((0x800000U & (((IData)(4U) + vlSelf->cpupc) 
                      ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out))) {
        ++(vlSymsp->__Vcoverage[4312]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out 
            = ((0xff7fffffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out) 
               | (0x800000U & ((IData)(4U) + vlSelf->cpupc)));
    }
    if ((0x1000000U & (((IData)(4U) + vlSelf->cpupc) 
                       ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out))) {
        ++(vlSymsp->__Vcoverage[4313]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out 
            = ((0xfeffffffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out) 
               | (0x1000000U & ((IData)(4U) + vlSelf->cpupc)));
    }
    if ((0x2000000U & (((IData)(4U) + vlSelf->cpupc) 
                       ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out))) {
        ++(vlSymsp->__Vcoverage[4314]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out 
            = ((0xfdffffffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out) 
               | (0x2000000U & ((IData)(4U) + vlSelf->cpupc)));
    }
    if ((0x4000000U & (((IData)(4U) + vlSelf->cpupc) 
                       ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out))) {
        ++(vlSymsp->__Vcoverage[4315]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out 
            = ((0xfbffffffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out) 
               | (0x4000000U & ((IData)(4U) + vlSelf->cpupc)));
    }
    if ((0x8000000U & (((IData)(4U) + vlSelf->cpupc) 
                       ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out))) {
        ++(vlSymsp->__Vcoverage[4316]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out 
            = ((0xf7ffffffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out) 
               | (0x8000000U & ((IData)(4U) + vlSelf->cpupc)));
    }
    if ((0x10000000U & (((IData)(4U) + vlSelf->cpupc) 
                        ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out))) {
        ++(vlSymsp->__Vcoverage[4317]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out 
            = ((0xefffffffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out) 
               | (0x10000000U & ((IData)(4U) + vlSelf->cpupc)));
    }
    if ((0x20000000U & (((IData)(4U) + vlSelf->cpupc) 
                        ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out))) {
        ++(vlSymsp->__Vcoverage[4318]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out 
            = ((0xdfffffffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out) 
               | (0x20000000U & ((IData)(4U) + vlSelf->cpupc)));
    }
    if ((0x40000000U & (((IData)(4U) + vlSelf->cpupc) 
                        ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out))) {
        ++(vlSymsp->__Vcoverage[4319]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out) 
               | (0x40000000U & ((IData)(4U) + vlSelf->cpupc)));
    }
    if (((((IData)(4U) + vlSelf->cpupc) ^ vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[4320]);
        vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out 
            = ((0x7fffffffU & vlSelf->top__DOT__de__DOT__m6__DOT____Vtogcov__default_out) 
               | (0x80000000U & ((IData)(4U) + vlSelf->cpupc)));
    }
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
    if ((1U & ((IData)(((4ULL + (QData)((IData)(vlSelf->cpupc))) 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[2498]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__de__DOT____Vtogcov__jalpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + (QData)((IData)(vlSelf->cpupc))) 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)(((4ULL + (QData)((IData)(vlSelf->cpupc))) 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[2499]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__de__DOT____Vtogcov__jalpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + (QData)((IData)(vlSelf->cpupc))) 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)(((4ULL + (QData)((IData)(vlSelf->cpupc))) 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[2500]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__de__DOT____Vtogcov__jalpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + (QData)((IData)(vlSelf->cpupc))) 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)(((4ULL + (QData)((IData)(vlSelf->cpupc))) 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[2501]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__de__DOT____Vtogcov__jalpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + (QData)((IData)(vlSelf->cpupc))) 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)(((4ULL + (QData)((IData)(vlSelf->cpupc))) 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[2502]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__de__DOT____Vtogcov__jalpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + (QData)((IData)(vlSelf->cpupc))) 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)(((4ULL + (QData)((IData)(vlSelf->cpupc))) 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[2503]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__de__DOT____Vtogcov__jalpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + (QData)((IData)(vlSelf->cpupc))) 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)(((4ULL + (QData)((IData)(vlSelf->cpupc))) 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[2504]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__de__DOT____Vtogcov__jalpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + (QData)((IData)(vlSelf->cpupc))) 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)(((4ULL + (QData)((IData)(vlSelf->cpupc))) 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[2505]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__de__DOT____Vtogcov__jalpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + (QData)((IData)(vlSelf->cpupc))) 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)(((4ULL + (QData)((IData)(vlSelf->cpupc))) 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[2506]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__de__DOT____Vtogcov__jalpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + (QData)((IData)(vlSelf->cpupc))) 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)(((4ULL + (QData)((IData)(vlSelf->cpupc))) 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[2507]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__de__DOT____Vtogcov__jalpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + (QData)((IData)(vlSelf->cpupc))) 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)(((4ULL + (QData)((IData)(vlSelf->cpupc))) 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[2508]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__de__DOT____Vtogcov__jalpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + (QData)((IData)(vlSelf->cpupc))) 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)(((4ULL + (QData)((IData)(vlSelf->cpupc))) 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[2509]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__de__DOT____Vtogcov__jalpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + (QData)((IData)(vlSelf->cpupc))) 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)(((4ULL + (QData)((IData)(vlSelf->cpupc))) 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[2510]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__de__DOT____Vtogcov__jalpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + (QData)((IData)(vlSelf->cpupc))) 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)(((4ULL + (QData)((IData)(vlSelf->cpupc))) 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[2511]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__de__DOT____Vtogcov__jalpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + (QData)((IData)(vlSelf->cpupc))) 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)(((4ULL + (QData)((IData)(vlSelf->cpupc))) 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[2512]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__de__DOT____Vtogcov__jalpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + (QData)((IData)(vlSelf->cpupc))) 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)(((4ULL + (QData)((IData)(vlSelf->cpupc))) 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[2513]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__jalpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + (QData)((IData)(vlSelf->cpupc))) 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)(((4ULL + (QData)((IData)(vlSelf->cpupc))) 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[2514]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__jalpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + (QData)((IData)(vlSelf->cpupc))) 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)(((4ULL + (QData)((IData)(vlSelf->cpupc))) 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[2515]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__jalpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + (QData)((IData)(vlSelf->cpupc))) 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)(((4ULL + (QData)((IData)(vlSelf->cpupc))) 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[2516]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__jalpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + (QData)((IData)(vlSelf->cpupc))) 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)(((4ULL + (QData)((IData)(vlSelf->cpupc))) 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[2517]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__jalpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + (QData)((IData)(vlSelf->cpupc))) 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)(((4ULL + (QData)((IData)(vlSelf->cpupc))) 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[2518]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__jalpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + (QData)((IData)(vlSelf->cpupc))) 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)(((4ULL + (QData)((IData)(vlSelf->cpupc))) 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[2519]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__jalpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + (QData)((IData)(vlSelf->cpupc))) 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)(((4ULL + (QData)((IData)(vlSelf->cpupc))) 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[2520]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__jalpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + (QData)((IData)(vlSelf->cpupc))) 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)(((4ULL + (QData)((IData)(vlSelf->cpupc))) 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[2521]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__jalpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + (QData)((IData)(vlSelf->cpupc))) 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)(((4ULL + (QData)((IData)(vlSelf->cpupc))) 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[2522]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__jalpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + (QData)((IData)(vlSelf->cpupc))) 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)(((4ULL + (QData)((IData)(vlSelf->cpupc))) 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[2523]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__jalpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + (QData)((IData)(vlSelf->cpupc))) 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)(((4ULL + (QData)((IData)(vlSelf->cpupc))) 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[2524]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__jalpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + (QData)((IData)(vlSelf->cpupc))) 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)(((4ULL + (QData)((IData)(vlSelf->cpupc))) 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[2525]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__jalpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + (QData)((IData)(vlSelf->cpupc))) 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)(((4ULL + (QData)((IData)(vlSelf->cpupc))) 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[2526]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__jalpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + (QData)((IData)(vlSelf->cpupc))) 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)(((4ULL + (QData)((IData)(vlSelf->cpupc))) 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[2527]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__jalpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + (QData)((IData)(vlSelf->cpupc))) 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)(((4ULL + (QData)((IData)(vlSelf->cpupc))) 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[2528]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__jalpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + (QData)((IData)(vlSelf->cpupc))) 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)(((4ULL + (QData)((IData)(vlSelf->cpupc))) 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[2529]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__jalpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + (QData)((IData)(vlSelf->cpupc))) 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)(((4ULL + (QData)((IData)(vlSelf->cpupc))) 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[2530]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__jalpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + (QData)((IData)(vlSelf->cpupc))) 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)(((4ULL + (QData)((IData)(vlSelf->cpupc))) 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[2531]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__jalpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + (QData)((IData)(vlSelf->cpupc))) 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)(((4ULL + (QData)((IData)(vlSelf->cpupc))) 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[2532]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__jalpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + (QData)((IData)(vlSelf->cpupc))) 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)(((4ULL + (QData)((IData)(vlSelf->cpupc))) 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[2533]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__jalpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + (QData)((IData)(vlSelf->cpupc))) 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)(((4ULL + (QData)((IData)(vlSelf->cpupc))) 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[2534]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__jalpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + (QData)((IData)(vlSelf->cpupc))) 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)(((4ULL + (QData)((IData)(vlSelf->cpupc))) 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[2535]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__jalpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + (QData)((IData)(vlSelf->cpupc))) 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)(((4ULL + (QData)((IData)(vlSelf->cpupc))) 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[2536]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__jalpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + (QData)((IData)(vlSelf->cpupc))) 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)(((4ULL + (QData)((IData)(vlSelf->cpupc))) 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[2537]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__jalpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + (QData)((IData)(vlSelf->cpupc))) 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)(((4ULL + (QData)((IData)(vlSelf->cpupc))) 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[2538]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__jalpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + (QData)((IData)(vlSelf->cpupc))) 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)(((4ULL + (QData)((IData)(vlSelf->cpupc))) 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[2539]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__jalpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + (QData)((IData)(vlSelf->cpupc))) 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)(((4ULL + (QData)((IData)(vlSelf->cpupc))) 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[2540]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__jalpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + (QData)((IData)(vlSelf->cpupc))) 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)(((4ULL + (QData)((IData)(vlSelf->cpupc))) 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[2541]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__jalpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + (QData)((IData)(vlSelf->cpupc))) 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)(((4ULL + (QData)((IData)(vlSelf->cpupc))) 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[2542]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__jalpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + (QData)((IData)(vlSelf->cpupc))) 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)(((4ULL + (QData)((IData)(vlSelf->cpupc))) 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[2543]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__jalpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + (QData)((IData)(vlSelf->cpupc))) 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)(((4ULL + (QData)((IData)(vlSelf->cpupc))) 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[2544]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__jalpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + (QData)((IData)(vlSelf->cpupc))) 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)(((4ULL + (QData)((IData)(vlSelf->cpupc))) 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[2545]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__jalpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + (QData)((IData)(vlSelf->cpupc))) 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)(((4ULL + (QData)((IData)(vlSelf->cpupc))) 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[2546]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__jalpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + (QData)((IData)(vlSelf->cpupc))) 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)(((4ULL + (QData)((IData)(vlSelf->cpupc))) 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[2547]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__jalpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + (QData)((IData)(vlSelf->cpupc))) 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)(((4ULL + (QData)((IData)(vlSelf->cpupc))) 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[2548]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__jalpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + (QData)((IData)(vlSelf->cpupc))) 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)(((4ULL + (QData)((IData)(vlSelf->cpupc))) 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[2549]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__jalpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + (QData)((IData)(vlSelf->cpupc))) 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)(((4ULL + (QData)((IData)(vlSelf->cpupc))) 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[2550]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__jalpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + (QData)((IData)(vlSelf->cpupc))) 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)(((4ULL + (QData)((IData)(vlSelf->cpupc))) 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[2551]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__jalpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + (QData)((IData)(vlSelf->cpupc))) 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)(((4ULL + (QData)((IData)(vlSelf->cpupc))) 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[2552]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__jalpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + (QData)((IData)(vlSelf->cpupc))) 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)(((4ULL + (QData)((IData)(vlSelf->cpupc))) 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[2553]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__jalpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + (QData)((IData)(vlSelf->cpupc))) 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)(((4ULL + (QData)((IData)(vlSelf->cpupc))) 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[2554]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__jalpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + (QData)((IData)(vlSelf->cpupc))) 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)(((4ULL + (QData)((IData)(vlSelf->cpupc))) 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[2555]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__jalpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + (QData)((IData)(vlSelf->cpupc))) 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)(((4ULL + (QData)((IData)(vlSelf->cpupc))) 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[2556]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__jalpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + (QData)((IData)(vlSelf->cpupc))) 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)(((4ULL + (QData)((IData)(vlSelf->cpupc))) 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[2557]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__jalpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + (QData)((IData)(vlSelf->cpupc))) 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)(((4ULL + (QData)((IData)(vlSelf->cpupc))) 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[2558]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__jalpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + (QData)((IData)(vlSelf->cpupc))) 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)(((4ULL + (QData)((IData)(vlSelf->cpupc))) 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[2559]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__jalpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + (QData)((IData)(vlSelf->cpupc))) 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)(((4ULL + (QData)((IData)(vlSelf->cpupc))) 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[2560]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalpc 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__jalpc) 
               | ((QData)((IData)((1U & (IData)(((4ULL 
                                                  + (QData)((IData)(vlSelf->cpupc))) 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)((QData)((IData)(vlSelf->cpupc))) 
               ^ (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__upc)))) {
        ++(vlSymsp->__Vcoverage[503]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xfffffffffffffffeULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | (IData)((IData)((1U & (IData)((QData)((IData)(vlSelf->cpupc)))))));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[504]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xfffffffffffffffdULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 1U))))) 
                << 1U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[505]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xfffffffffffffffbULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 2U))))) 
                << 2U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[506]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xfffffffffffffff7ULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 3U))))) 
                << 3U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[507]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xffffffffffffffefULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 4U))))) 
                << 4U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[508]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xffffffffffffffdfULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 5U))))) 
                << 5U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[509]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xffffffffffffffbfULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 6U))))) 
                << 6U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[510]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xffffffffffffff7fULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 7U))))) 
                << 7U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[511]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xfffffffffffffeffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 8U))))) 
                << 8U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[512]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xfffffffffffffdffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 9U))))) 
                << 9U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[513]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xfffffffffffffbffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0xaU))))) 
                << 0xaU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[514]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xfffffffffffff7ffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0xbU))))) 
                << 0xbU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[515]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xffffffffffffefffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0xcU))))) 
                << 0xcU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[516]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xffffffffffffdfffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0xdU))))) 
                << 0xdU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[517]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xffffffffffffbfffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0xeU))))) 
                << 0xeU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[518]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xffffffffffff7fffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0xfU))))) 
                << 0xfU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[519]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xfffffffffffeffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x10U))))) 
                << 0x10U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[520]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xfffffffffffdffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x11U))))) 
                << 0x11U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[521]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xfffffffffffbffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x12U))))) 
                << 0x12U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[522]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xfffffffffff7ffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x13U))))) 
                << 0x13U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[523]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xffffffffffefffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x14U))))) 
                << 0x14U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[524]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xffffffffffdfffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x15U))))) 
                << 0x15U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[525]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xffffffffffbfffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x16U))))) 
                << 0x16U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[526]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xffffffffff7fffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x17U))))) 
                << 0x17U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[527]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xfffffffffeffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x18U))))) 
                << 0x18U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[528]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xfffffffffdffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x19U))))) 
                << 0x19U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[529]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xfffffffffbffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x1aU))))) 
                << 0x1aU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[530]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xfffffffff7ffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x1bU))))) 
                << 0x1bU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[531]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xffffffffefffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x1cU))))) 
                << 0x1cU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[532]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xffffffffdfffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x1dU))))) 
                << 0x1dU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[533]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xffffffffbfffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x1eU))))) 
                << 0x1eU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[534]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xffffffff7fffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x1fU))))) 
                << 0x1fU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[535]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xfffffffeffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x20U))))) 
                << 0x20U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[536]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xfffffffdffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x21U))))) 
                << 0x21U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[537]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xfffffffbffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x22U))))) 
                << 0x22U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[538]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xfffffff7ffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x23U))))) 
                << 0x23U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[539]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xffffffefffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x24U))))) 
                << 0x24U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[540]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xffffffdfffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x25U))))) 
                << 0x25U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[541]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xffffffbfffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x26U))))) 
                << 0x26U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[542]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xffffff7fffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x27U))))) 
                << 0x27U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[543]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xfffffeffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x28U))))) 
                << 0x28U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[544]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xfffffdffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x29U))))) 
                << 0x29U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[545]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xfffffbffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x2aU))))) 
                << 0x2aU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[546]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xfffff7ffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x2bU))))) 
                << 0x2bU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[547]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xffffefffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x2cU))))) 
                << 0x2cU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[548]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xffffdfffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x2dU))))) 
                << 0x2dU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[549]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xffffbfffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x2eU))))) 
                << 0x2eU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[550]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xffff7fffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x2fU))))) 
                << 0x2fU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[551]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xfffeffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x30U))))) 
                << 0x30U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[552]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xfffdffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x31U))))) 
                << 0x31U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[553]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xfffbffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x32U))))) 
                << 0x32U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[554]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xfff7ffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x33U))))) 
                << 0x33U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[555]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xffefffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x34U))))) 
                << 0x34U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[556]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xffdfffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x35U))))) 
                << 0x35U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[557]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xffbfffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x36U))))) 
                << 0x36U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[558]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xff7fffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x37U))))) 
                << 0x37U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[559]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xfeffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x38U))))) 
                << 0x38U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[560]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xfdffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x39U))))) 
                << 0x39U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[561]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xfbffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x3aU))))) 
                << 0x3aU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[562]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xf7ffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x3bU))))) 
                << 0x3bU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[563]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xefffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x3cU))))) 
                << 0x3cU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[564]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xdfffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x3dU))))) 
                << 0x3dU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[565]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0xbfffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x3eU))))) 
                << 0x3eU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->cpupc)) 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__upc 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[566]);
        vlSelf->top__DOT__de__DOT____Vtogcov__upc = 
            ((0x7fffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__upc) 
             | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                               >> 0x3fU))))) 
                << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                       [0U]) ^ (IData)(vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                                       [0U])))) {
        ++(vlSymsp->__Vcoverage[4206]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0x1ffffffffeULL & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | (IData)((IData)((1U & (IData)(
                                                      vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                                                      [0U])))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                        [0U] >> 1U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                                                [0U] 
                                                >> 1U))))) {
        ++(vlSymsp->__Vcoverage[4207]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0x1ffffffffdULL & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 1U))))) 
                         << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                        [0U] >> 2U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                                                [0U] 
                                                >> 2U))))) {
        ++(vlSymsp->__Vcoverage[4208]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0x1ffffffffbULL & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 2U))))) 
                         << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                        [0U] >> 3U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                                                [0U] 
                                                >> 3U))))) {
        ++(vlSymsp->__Vcoverage[4209]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0x1ffffffff7ULL & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 3U))))) 
                         << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                        [0U] >> 4U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                                                [0U] 
                                                >> 4U))))) {
        ++(vlSymsp->__Vcoverage[4210]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0x1fffffffefULL & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 4U))))) 
                         << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                        [0U] >> 5U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                                                [0U] 
                                                >> 5U))))) {
        ++(vlSymsp->__Vcoverage[4211]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0x1fffffffdfULL & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 5U))))) 
                         << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                        [0U] >> 6U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                                                [0U] 
                                                >> 6U))))) {
        ++(vlSymsp->__Vcoverage[4212]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0x1fffffffbfULL & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 6U))))) 
                         << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                        [0U] >> 7U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                                                [0U] 
                                                >> 7U))))) {
        ++(vlSymsp->__Vcoverage[4213]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0x1fffffff7fULL & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 7U))))) 
                         << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                        [0U] >> 8U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                                                [0U] 
                                                >> 8U))))) {
        ++(vlSymsp->__Vcoverage[4214]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0x1ffffffeffULL & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 8U))))) 
                         << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                        [0U] >> 9U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                                                [0U] 
                                                >> 9U))))) {
        ++(vlSymsp->__Vcoverage[4215]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0x1ffffffdffULL & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 9U))))) 
                         << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                        [0U] >> 0xaU)) ^ (IData)((vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                                                  [0U] 
                                                  >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[4216]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0x1ffffffbffULL & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 0xaU))))) 
                         << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                        [0U] >> 0xbU)) ^ (IData)((vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                                                  [0U] 
                                                  >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[4217]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0x1ffffff7ffULL & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 0xbU))))) 
                         << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                        [0U] >> 0xcU)) ^ (IData)((vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                                                  [0U] 
                                                  >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[4218]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0x1fffffefffULL & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 0xcU))))) 
                         << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                        [0U] >> 0xdU)) ^ (IData)((vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                                                  [0U] 
                                                  >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[4219]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0x1fffffdfffULL & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 0xdU))))) 
                         << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                        [0U] >> 0xeU)) ^ (IData)((vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                                                  [0U] 
                                                  >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[4220]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0x1fffffbfffULL & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 0xeU))))) 
                         << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                        [0U] >> 0xfU)) ^ (IData)((vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                                                  [0U] 
                                                  >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[4221]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0x1fffff7fffULL & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 0xfU))))) 
                         << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                        [0U] >> 0x10U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[4222]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0x1ffffeffffULL & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 0x10U))))) 
                         << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                        [0U] >> 0x11U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[4223]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0x1ffffdffffULL & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 0x11U))))) 
                         << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                        [0U] >> 0x12U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[4224]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0x1ffffbffffULL & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 0x12U))))) 
                         << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                        [0U] >> 0x13U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[4225]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0x1ffff7ffffULL & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 0x13U))))) 
                         << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                        [0U] >> 0x14U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[4226]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0x1fffefffffULL & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 0x14U))))) 
                         << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                        [0U] >> 0x15U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[4227]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0x1fffdfffffULL & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 0x15U))))) 
                         << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                        [0U] >> 0x16U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[4228]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0x1fffbfffffULL & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 0x16U))))) 
                         << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                        [0U] >> 0x17U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[4229]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0x1fff7fffffULL & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 0x17U))))) 
                         << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                        [0U] >> 0x18U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[4230]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0x1ffeffffffULL & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 0x18U))))) 
                         << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                        [0U] >> 0x19U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[4231]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0x1ffdffffffULL & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 0x19U))))) 
                         << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                        [0U] >> 0x1aU)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[4232]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0x1ffbffffffULL & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 0x1aU))))) 
                         << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                        [0U] >> 0x1bU)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[4233]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0x1ff7ffffffULL & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 0x1bU))))) 
                         << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                        [0U] >> 0x1cU)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[4234]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0x1fefffffffULL & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 0x1cU))))) 
                         << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                        [0U] >> 0x1dU)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[4235]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0x1fdfffffffULL & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 0x1dU))))) 
                         << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                        [0U] >> 0x1eU)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[4236]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0x1fbfffffffULL & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 0x1eU))))) 
                         << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                        [0U] >> 0x1fU)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[4237]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0x1f7fffffffULL & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 0x1fU))))) 
                         << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                        [0U] >> 0x20U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[4238]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0x1effffffffULL & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 0x20U))))) 
                         << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                        [0U] >> 0x21U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[4239]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0x1dffffffffULL & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 0x21U))))) 
                         << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                        [0U] >> 0x22U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[4240]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0x1bffffffffULL & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 0x22U))))) 
                         << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                        [0U] >> 0x23U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[4241]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0x17ffffffffULL & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 0x23U))))) 
                         << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                        [0U] >> 0x24U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[4242]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0xfffffffffULL & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 0x24U))))) 
                         << 0x24U));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                       [0U]) ^ (IData)(vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                                       [0U])))) {
        ++(vlSymsp->__Vcoverage[4206]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0x1ffffffffeULL & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | (IData)((IData)((1U & (IData)(
                                                      vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                                                      [0U])))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                        [0U] >> 1U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                                                [0U] 
                                                >> 1U))))) {
        ++(vlSymsp->__Vcoverage[4207]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0x1ffffffffdULL & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 1U))))) 
                         << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                        [0U] >> 2U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                                                [0U] 
                                                >> 2U))))) {
        ++(vlSymsp->__Vcoverage[4208]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0x1ffffffffbULL & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 2U))))) 
                         << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                        [0U] >> 3U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                                                [0U] 
                                                >> 3U))))) {
        ++(vlSymsp->__Vcoverage[4209]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0x1ffffffff7ULL & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 3U))))) 
                         << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                        [0U] >> 4U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                                                [0U] 
                                                >> 4U))))) {
        ++(vlSymsp->__Vcoverage[4210]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0x1fffffffefULL & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 4U))))) 
                         << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                        [0U] >> 5U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                                                [0U] 
                                                >> 5U))))) {
        ++(vlSymsp->__Vcoverage[4211]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0x1fffffffdfULL & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 5U))))) 
                         << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                        [0U] >> 6U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                                                [0U] 
                                                >> 6U))))) {
        ++(vlSymsp->__Vcoverage[4212]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0x1fffffffbfULL & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 6U))))) 
                         << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                        [0U] >> 7U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                                                [0U] 
                                                >> 7U))))) {
        ++(vlSymsp->__Vcoverage[4213]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0x1fffffff7fULL & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 7U))))) 
                         << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                        [0U] >> 8U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                                                [0U] 
                                                >> 8U))))) {
        ++(vlSymsp->__Vcoverage[4214]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0x1ffffffeffULL & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 8U))))) 
                         << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                        [0U] >> 9U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                                                [0U] 
                                                >> 9U))))) {
        ++(vlSymsp->__Vcoverage[4215]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0x1ffffffdffULL & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 9U))))) 
                         << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                        [0U] >> 0xaU)) ^ (IData)((vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                                                  [0U] 
                                                  >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[4216]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0x1ffffffbffULL & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 0xaU))))) 
                         << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                        [0U] >> 0xbU)) ^ (IData)((vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                                                  [0U] 
                                                  >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[4217]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0x1ffffff7ffULL & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 0xbU))))) 
                         << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                        [0U] >> 0xcU)) ^ (IData)((vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                                                  [0U] 
                                                  >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[4218]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0x1fffffefffULL & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 0xcU))))) 
                         << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                        [0U] >> 0xdU)) ^ (IData)((vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                                                  [0U] 
                                                  >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[4219]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0x1fffffdfffULL & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 0xdU))))) 
                         << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                        [0U] >> 0xeU)) ^ (IData)((vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                                                  [0U] 
                                                  >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[4220]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0x1fffffbfffULL & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 0xeU))))) 
                         << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                        [0U] >> 0xfU)) ^ (IData)((vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                                                  [0U] 
                                                  >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[4221]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0x1fffff7fffULL & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 0xfU))))) 
                         << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                        [0U] >> 0x10U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[4222]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0x1ffffeffffULL & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 0x10U))))) 
                         << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                        [0U] >> 0x11U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[4223]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0x1ffffdffffULL & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 0x11U))))) 
                         << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                        [0U] >> 0x12U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[4224]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0x1ffffbffffULL & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 0x12U))))) 
                         << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                        [0U] >> 0x13U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[4225]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0x1ffff7ffffULL & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 0x13U))))) 
                         << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                        [0U] >> 0x14U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[4226]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0x1fffefffffULL & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 0x14U))))) 
                         << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                        [0U] >> 0x15U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[4227]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0x1fffdfffffULL & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 0x15U))))) 
                         << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                        [0U] >> 0x16U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[4228]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0x1fffbfffffULL & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 0x16U))))) 
                         << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                        [0U] >> 0x17U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[4229]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0x1fff7fffffULL & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 0x17U))))) 
                         << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                        [0U] >> 0x18U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[4230]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0x1ffeffffffULL & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 0x18U))))) 
                         << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                        [0U] >> 0x19U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[4231]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0x1ffdffffffULL & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 0x19U))))) 
                         << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                        [0U] >> 0x1aU)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[4232]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0x1ffbffffffULL & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 0x1aU))))) 
                         << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                        [0U] >> 0x1bU)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[4233]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0x1ff7ffffffULL & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 0x1bU))))) 
                         << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                        [0U] >> 0x1cU)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[4234]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0x1fefffffffULL & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 0x1cU))))) 
                         << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                        [0U] >> 0x1dU)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[4235]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0x1fdfffffffULL & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 0x1dU))))) 
                         << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                        [0U] >> 0x1eU)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[4236]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0x1fbfffffffULL & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 0x1eU))))) 
                         << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                        [0U] >> 0x1fU)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[4237]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0x1f7fffffffULL & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 0x1fU))))) 
                         << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                        [0U] >> 0x20U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[4238]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0x1effffffffULL & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 0x20U))))) 
                         << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                        [0U] >> 0x21U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[4239]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0x1dffffffffULL & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 0x21U))))) 
                         << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                        [0U] >> 0x22U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[4240]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0x1bffffffffULL & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 0x22U))))) 
                         << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                        [0U] >> 0x23U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[4241]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0x17ffffffffULL & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 0x23U))))) 
                         << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                        [0U] >> 0x24U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[4242]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0xfffffffffULL & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 0x24U))))) 
                         << 0x24U));
    }
    vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__data_list[0U] 
        = (0x1fU & (IData)(vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                           [0U]));
    vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__data_list[0U] 
        = (0x1fU & (IData)(vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                           [0U]));
    vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list[0U] 
        = (IData)((vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                   [0U] >> 5U));
    vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list[0U] 
        = (IData)((vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list
                   [0U] >> 5U));
    if ((1U & ((IData)(vlSelf->top__DOT__de__DOT__luimid) 
               ^ (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__luimid)))) {
        ++(vlSymsp->__Vcoverage[2434]);
        vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__de__DOT____Vtogcov__luimid) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__de__DOT__luimid)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__luimid 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[2435]);
        vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__de__DOT____Vtogcov__luimid) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__luimid 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__luimid 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[2436]);
        vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__de__DOT____Vtogcov__luimid) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__luimid 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__luimid 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[2437]);
        vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__de__DOT____Vtogcov__luimid) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__luimid 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__luimid 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[2438]);
        vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__de__DOT____Vtogcov__luimid) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__luimid 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__luimid 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[2439]);
        vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__de__DOT____Vtogcov__luimid) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__luimid 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__luimid 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[2440]);
        vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__de__DOT____Vtogcov__luimid) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__luimid 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__luimid 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[2441]);
        vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__de__DOT____Vtogcov__luimid) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__luimid 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__luimid 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[2442]);
        vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__de__DOT____Vtogcov__luimid) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__luimid 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__luimid 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[2443]);
        vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__de__DOT____Vtogcov__luimid) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__luimid 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__luimid 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[2444]);
        vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__de__DOT____Vtogcov__luimid) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__luimid 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__luimid 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[2445]);
        vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__de__DOT____Vtogcov__luimid) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__luimid 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__luimid 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[2446]);
        vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__de__DOT____Vtogcov__luimid) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__luimid 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__luimid 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[2447]);
        vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__de__DOT____Vtogcov__luimid) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__luimid 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__luimid 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[2448]);
        vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__de__DOT____Vtogcov__luimid) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__luimid 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__luimid 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[2449]);
        vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__de__DOT____Vtogcov__luimid) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__luimid 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__luimid 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[2450]);
        vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__luimid) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__luimid 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__luimid 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[2451]);
        vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__luimid) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__luimid 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__luimid 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[2452]);
        vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__luimid) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__luimid 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__luimid 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[2453]);
        vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__luimid) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__luimid 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__luimid 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[2454]);
        vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__luimid) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__luimid 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__luimid 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[2455]);
        vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__luimid) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__luimid 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__luimid 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[2456]);
        vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__luimid) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__luimid 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__luimid 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[2457]);
        vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__luimid) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__luimid 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__luimid 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[2458]);
        vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__luimid) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__luimid 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__luimid 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[2459]);
        vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__luimid) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__luimid 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__luimid 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[2460]);
        vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__luimid) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__luimid 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__luimid 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[2461]);
        vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__luimid) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__luimid 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__luimid 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[2462]);
        vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__luimid) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__luimid 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__luimid 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[2463]);
        vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__luimid) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__luimid 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__luimid 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[2464]);
        vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__luimid) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__luimid 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__luimid 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[2465]);
        vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__luimid) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__luimid 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__luimid 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[2466]);
        vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__luimid) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__luimid 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__luimid 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[2467]);
        vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__luimid) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__luimid 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__luimid 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[2468]);
        vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__luimid) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__luimid 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__luimid 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[2469]);
        vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__luimid) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__luimid 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__luimid 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[2470]);
        vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__luimid) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__luimid 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__luimid 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[2471]);
        vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__luimid) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__luimid 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__luimid 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[2472]);
        vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__luimid) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__luimid 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__luimid 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[2473]);
        vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__luimid) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__luimid 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__luimid 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[2474]);
        vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__luimid) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__luimid 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__luimid 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[2475]);
        vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__luimid) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__luimid 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__luimid 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[2476]);
        vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__luimid) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__luimid 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__luimid 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[2477]);
        vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__luimid) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__luimid 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__luimid 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[2478]);
        vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__luimid) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__luimid 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__luimid 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[2479]);
        vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__luimid) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__luimid 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__luimid 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[2480]);
        vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__luimid) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__luimid 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__luimid 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[2481]);
        vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__luimid) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__luimid 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__luimid 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[2482]);
        vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__luimid) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__luimid 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__luimid 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[2483]);
        vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__luimid) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__luimid 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__luimid 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[2484]);
        vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__luimid) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__luimid 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__luimid 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[2485]);
        vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__luimid) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__luimid 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__luimid 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[2486]);
        vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__luimid) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__luimid 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__luimid 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[2487]);
        vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__luimid) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__luimid 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__luimid 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[2488]);
        vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__luimid) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__luimid 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__luimid 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[2489]);
        vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__luimid) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__luimid 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__luimid 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[2490]);
        vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__luimid) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__luimid 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__luimid 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[2491]);
        vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__luimid) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__luimid 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__luimid 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[2492]);
        vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__luimid) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__luimid 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__luimid 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[2493]);
        vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__luimid) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__luimid 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__luimid 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[2494]);
        vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__luimid) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__luimid 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__luimid 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[2495]);
        vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__luimid) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__luimid 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__luimid 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[2496]);
        vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__luimid) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__luimid 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__luimid 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[2497]);
        vlSelf->top__DOT__de__DOT____Vtogcov__luimid 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__luimid) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__luimid 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__de__DOT__addauipc) 
               ^ (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__addauipc)))) {
        ++(vlSymsp->__Vcoverage[2370]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__de__DOT____Vtogcov__addauipc) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__de__DOT__addauipc)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addauipc 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[2371]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__de__DOT____Vtogcov__addauipc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addauipc 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addauipc 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[2372]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__de__DOT____Vtogcov__addauipc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addauipc 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addauipc 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[2373]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__de__DOT____Vtogcov__addauipc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addauipc 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addauipc 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[2374]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__de__DOT____Vtogcov__addauipc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addauipc 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addauipc 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[2375]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__de__DOT____Vtogcov__addauipc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addauipc 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addauipc 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[2376]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__de__DOT____Vtogcov__addauipc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addauipc 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addauipc 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[2377]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__de__DOT____Vtogcov__addauipc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addauipc 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addauipc 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[2378]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addauipc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addauipc 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addauipc 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[2379]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addauipc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addauipc 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addauipc 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[2380]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addauipc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addauipc 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addauipc 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[2381]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addauipc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addauipc 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addauipc 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[2382]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addauipc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addauipc 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addauipc 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[2383]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addauipc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addauipc 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addauipc 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[2384]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addauipc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addauipc 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addauipc 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[2385]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addauipc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addauipc 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addauipc 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[2386]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addauipc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addauipc 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addauipc 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[2387]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addauipc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addauipc 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addauipc 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[2388]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addauipc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addauipc 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addauipc 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[2389]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addauipc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addauipc 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addauipc 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[2390]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addauipc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addauipc 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addauipc 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[2391]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addauipc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addauipc 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addauipc 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[2392]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addauipc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addauipc 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addauipc 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[2393]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addauipc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addauipc 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addauipc 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[2394]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addauipc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addauipc 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addauipc 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[2395]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addauipc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addauipc 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addauipc 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[2396]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addauipc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addauipc 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addauipc 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[2397]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addauipc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addauipc 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addauipc 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[2398]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addauipc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addauipc 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addauipc 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[2399]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addauipc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addauipc 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addauipc 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[2400]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addauipc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addauipc 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addauipc 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[2401]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addauipc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addauipc 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addauipc 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[2402]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addauipc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addauipc 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addauipc 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[2403]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addauipc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addauipc 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addauipc 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[2404]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addauipc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addauipc 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addauipc 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[2405]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addauipc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addauipc 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addauipc 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[2406]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addauipc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addauipc 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addauipc 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[2407]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addauipc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addauipc 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addauipc 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[2408]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addauipc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addauipc 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addauipc 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[2409]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addauipc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addauipc 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addauipc 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[2410]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addauipc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addauipc 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addauipc 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[2411]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addauipc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addauipc 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addauipc 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[2412]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addauipc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addauipc 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addauipc 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[2413]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addauipc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addauipc 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addauipc 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[2414]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addauipc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addauipc 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addauipc 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[2415]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addauipc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addauipc 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addauipc 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[2416]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addauipc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addauipc 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addauipc 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[2417]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addauipc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addauipc 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addauipc 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[2418]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addauipc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addauipc 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addauipc 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[2419]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addauipc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addauipc 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addauipc 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[2420]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addauipc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addauipc 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addauipc 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[2421]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addauipc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addauipc 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addauipc 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[2422]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addauipc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addauipc 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addauipc 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[2423]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addauipc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addauipc 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addauipc 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[2424]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addauipc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addauipc 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addauipc 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[2425]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addauipc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addauipc 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addauipc 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[2426]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addauipc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addauipc 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addauipc 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[2427]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addauipc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addauipc 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addauipc 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[2428]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addauipc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addauipc 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addauipc 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[2429]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addauipc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addauipc 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addauipc 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[2430]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addauipc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addauipc 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addauipc 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[2431]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addauipc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addauipc 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addauipc 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[2432]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addauipc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addauipc 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__addauipc 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[2433]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addauipc 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__addauipc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__addauipc 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__sraw ^ vlSelf->top__DOT__de__DOT____Vtogcov__sraw))) {
        ++(vlSymsp->__Vcoverage[2177]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sraw 
            = ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__sraw) 
               | (1U & vlSelf->top__DOT__de__DOT__sraw));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__sraw ^ vlSelf->top__DOT__de__DOT____Vtogcov__sraw))) {
        ++(vlSymsp->__Vcoverage[2178]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sraw 
            = ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__sraw) 
               | (2U & vlSelf->top__DOT__de__DOT__sraw));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__sraw ^ vlSelf->top__DOT__de__DOT____Vtogcov__sraw))) {
        ++(vlSymsp->__Vcoverage[2179]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sraw 
            = ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__sraw) 
               | (4U & vlSelf->top__DOT__de__DOT__sraw));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__sraw ^ vlSelf->top__DOT__de__DOT____Vtogcov__sraw))) {
        ++(vlSymsp->__Vcoverage[2180]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sraw 
            = ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__sraw) 
               | (8U & vlSelf->top__DOT__de__DOT__sraw));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__sraw ^ vlSelf->top__DOT__de__DOT____Vtogcov__sraw))) {
        ++(vlSymsp->__Vcoverage[2181]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sraw 
            = ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__sraw) 
               | (0x10U & vlSelf->top__DOT__de__DOT__sraw));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__sraw ^ vlSelf->top__DOT__de__DOT____Vtogcov__sraw))) {
        ++(vlSymsp->__Vcoverage[2182]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sraw 
            = ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__sraw) 
               | (0x20U & vlSelf->top__DOT__de__DOT__sraw));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__sraw ^ vlSelf->top__DOT__de__DOT____Vtogcov__sraw))) {
        ++(vlSymsp->__Vcoverage[2183]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sraw 
            = ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__sraw) 
               | (0x40U & vlSelf->top__DOT__de__DOT__sraw));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__sraw ^ vlSelf->top__DOT__de__DOT____Vtogcov__sraw))) {
        ++(vlSymsp->__Vcoverage[2184]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sraw 
            = ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__sraw) 
               | (0x80U & vlSelf->top__DOT__de__DOT__sraw));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__sraw 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__sraw))) {
        ++(vlSymsp->__Vcoverage[2185]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sraw 
            = ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__sraw) 
               | (0x100U & vlSelf->top__DOT__de__DOT__sraw));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__sraw 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__sraw))) {
        ++(vlSymsp->__Vcoverage[2186]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sraw 
            = ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__sraw) 
               | (0x200U & vlSelf->top__DOT__de__DOT__sraw));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__sraw 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__sraw))) {
        ++(vlSymsp->__Vcoverage[2187]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sraw 
            = ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__sraw) 
               | (0x400U & vlSelf->top__DOT__de__DOT__sraw));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__sraw 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__sraw))) {
        ++(vlSymsp->__Vcoverage[2188]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sraw 
            = ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__sraw) 
               | (0x800U & vlSelf->top__DOT__de__DOT__sraw));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__sraw 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__sraw))) {
        ++(vlSymsp->__Vcoverage[2189]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sraw 
            = ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__sraw) 
               | (0x1000U & vlSelf->top__DOT__de__DOT__sraw));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__sraw 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__sraw))) {
        ++(vlSymsp->__Vcoverage[2190]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sraw 
            = ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__sraw) 
               | (0x2000U & vlSelf->top__DOT__de__DOT__sraw));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__sraw 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__sraw))) {
        ++(vlSymsp->__Vcoverage[2191]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sraw 
            = ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__sraw) 
               | (0x4000U & vlSelf->top__DOT__de__DOT__sraw));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__sraw 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__sraw))) {
        ++(vlSymsp->__Vcoverage[2192]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sraw 
            = ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__sraw) 
               | (0x8000U & vlSelf->top__DOT__de__DOT__sraw));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__sraw 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sraw))) {
        ++(vlSymsp->__Vcoverage[2193]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sraw 
            = ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sraw) 
               | (0x10000U & vlSelf->top__DOT__de__DOT__sraw));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__sraw 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sraw))) {
        ++(vlSymsp->__Vcoverage[2194]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sraw 
            = ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sraw) 
               | (0x20000U & vlSelf->top__DOT__de__DOT__sraw));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__sraw 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sraw))) {
        ++(vlSymsp->__Vcoverage[2195]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sraw 
            = ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sraw) 
               | (0x40000U & vlSelf->top__DOT__de__DOT__sraw));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__sraw 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sraw))) {
        ++(vlSymsp->__Vcoverage[2196]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sraw 
            = ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sraw) 
               | (0x80000U & vlSelf->top__DOT__de__DOT__sraw));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__sraw 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sraw))) {
        ++(vlSymsp->__Vcoverage[2197]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sraw 
            = ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sraw) 
               | (0x100000U & vlSelf->top__DOT__de__DOT__sraw));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__sraw 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sraw))) {
        ++(vlSymsp->__Vcoverage[2198]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sraw 
            = ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sraw) 
               | (0x200000U & vlSelf->top__DOT__de__DOT__sraw));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__sraw 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sraw))) {
        ++(vlSymsp->__Vcoverage[2199]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sraw 
            = ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sraw) 
               | (0x400000U & vlSelf->top__DOT__de__DOT__sraw));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__sraw 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sraw))) {
        ++(vlSymsp->__Vcoverage[2200]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sraw 
            = ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sraw) 
               | (0x800000U & vlSelf->top__DOT__de__DOT__sraw));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__sraw 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sraw))) {
        ++(vlSymsp->__Vcoverage[2201]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sraw 
            = ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sraw) 
               | (0x1000000U & vlSelf->top__DOT__de__DOT__sraw));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__sraw 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sraw))) {
        ++(vlSymsp->__Vcoverage[2202]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sraw 
            = ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sraw) 
               | (0x2000000U & vlSelf->top__DOT__de__DOT__sraw));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__sraw 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sraw))) {
        ++(vlSymsp->__Vcoverage[2203]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sraw 
            = ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sraw) 
               | (0x4000000U & vlSelf->top__DOT__de__DOT__sraw));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__sraw 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sraw))) {
        ++(vlSymsp->__Vcoverage[2204]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sraw 
            = ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sraw) 
               | (0x8000000U & vlSelf->top__DOT__de__DOT__sraw));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__sraw 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__sraw))) {
        ++(vlSymsp->__Vcoverage[2205]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sraw 
            = ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sraw) 
               | (0x10000000U & vlSelf->top__DOT__de__DOT__sraw));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__sraw 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__sraw))) {
        ++(vlSymsp->__Vcoverage[2206]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sraw 
            = ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sraw) 
               | (0x20000000U & vlSelf->top__DOT__de__DOT__sraw));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__sraw 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__sraw))) {
        ++(vlSymsp->__Vcoverage[2207]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sraw 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sraw) 
               | (0x40000000U & vlSelf->top__DOT__de__DOT__sraw));
    }
    if (((vlSelf->top__DOT__de__DOT__sraw ^ vlSelf->top__DOT__de__DOT____Vtogcov__sraw) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2208]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sraw 
            = ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sraw) 
               | (0x80000000U & vlSelf->top__DOT__de__DOT__sraw));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__jalr ^ vlSelf->top__DOT__de__DOT____Vtogcov__jalr))) {
        ++(vlSymsp->__Vcoverage[2561]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalr 
            = ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__jalr) 
               | (1U & vlSelf->top__DOT__de__DOT__jalr));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__jalr ^ vlSelf->top__DOT__de__DOT____Vtogcov__jalr))) {
        ++(vlSymsp->__Vcoverage[2562]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalr 
            = ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__jalr) 
               | (2U & vlSelf->top__DOT__de__DOT__jalr));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__jalr ^ vlSelf->top__DOT__de__DOT____Vtogcov__jalr))) {
        ++(vlSymsp->__Vcoverage[2563]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalr 
            = ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__jalr) 
               | (4U & vlSelf->top__DOT__de__DOT__jalr));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__jalr ^ vlSelf->top__DOT__de__DOT____Vtogcov__jalr))) {
        ++(vlSymsp->__Vcoverage[2564]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalr 
            = ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__jalr) 
               | (8U & vlSelf->top__DOT__de__DOT__jalr));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__jalr ^ vlSelf->top__DOT__de__DOT____Vtogcov__jalr))) {
        ++(vlSymsp->__Vcoverage[2565]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalr 
            = ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__jalr) 
               | (0x10U & vlSelf->top__DOT__de__DOT__jalr));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__jalr ^ vlSelf->top__DOT__de__DOT____Vtogcov__jalr))) {
        ++(vlSymsp->__Vcoverage[2566]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalr 
            = ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__jalr) 
               | (0x20U & vlSelf->top__DOT__de__DOT__jalr));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__jalr ^ vlSelf->top__DOT__de__DOT____Vtogcov__jalr))) {
        ++(vlSymsp->__Vcoverage[2567]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalr 
            = ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__jalr) 
               | (0x40U & vlSelf->top__DOT__de__DOT__jalr));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__jalr ^ vlSelf->top__DOT__de__DOT____Vtogcov__jalr))) {
        ++(vlSymsp->__Vcoverage[2568]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalr 
            = ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__jalr) 
               | (0x80U & vlSelf->top__DOT__de__DOT__jalr));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__jalr 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__jalr))) {
        ++(vlSymsp->__Vcoverage[2569]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalr 
            = ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__jalr) 
               | (0x100U & vlSelf->top__DOT__de__DOT__jalr));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__jalr 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__jalr))) {
        ++(vlSymsp->__Vcoverage[2570]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalr 
            = ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__jalr) 
               | (0x200U & vlSelf->top__DOT__de__DOT__jalr));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__jalr 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__jalr))) {
        ++(vlSymsp->__Vcoverage[2571]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalr 
            = ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__jalr) 
               | (0x400U & vlSelf->top__DOT__de__DOT__jalr));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__jalr 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__jalr))) {
        ++(vlSymsp->__Vcoverage[2572]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalr 
            = ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__jalr) 
               | (0x800U & vlSelf->top__DOT__de__DOT__jalr));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__jalr 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__jalr))) {
        ++(vlSymsp->__Vcoverage[2573]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalr 
            = ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__jalr) 
               | (0x1000U & vlSelf->top__DOT__de__DOT__jalr));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__jalr 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__jalr))) {
        ++(vlSymsp->__Vcoverage[2574]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalr 
            = ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__jalr) 
               | (0x2000U & vlSelf->top__DOT__de__DOT__jalr));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__jalr 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__jalr))) {
        ++(vlSymsp->__Vcoverage[2575]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalr 
            = ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__jalr) 
               | (0x4000U & vlSelf->top__DOT__de__DOT__jalr));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__jalr 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__jalr))) {
        ++(vlSymsp->__Vcoverage[2576]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalr 
            = ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__jalr) 
               | (0x8000U & vlSelf->top__DOT__de__DOT__jalr));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__jalr 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__jalr))) {
        ++(vlSymsp->__Vcoverage[2577]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalr 
            = ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__jalr) 
               | (0x10000U & vlSelf->top__DOT__de__DOT__jalr));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__jalr 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__jalr))) {
        ++(vlSymsp->__Vcoverage[2578]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalr 
            = ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__jalr) 
               | (0x20000U & vlSelf->top__DOT__de__DOT__jalr));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__jalr 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__jalr))) {
        ++(vlSymsp->__Vcoverage[2579]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalr 
            = ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__jalr) 
               | (0x40000U & vlSelf->top__DOT__de__DOT__jalr));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__jalr 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__jalr))) {
        ++(vlSymsp->__Vcoverage[2580]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalr 
            = ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__jalr) 
               | (0x80000U & vlSelf->top__DOT__de__DOT__jalr));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__jalr 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__jalr))) {
        ++(vlSymsp->__Vcoverage[2581]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalr 
            = ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__jalr) 
               | (0x100000U & vlSelf->top__DOT__de__DOT__jalr));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__jalr 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__jalr))) {
        ++(vlSymsp->__Vcoverage[2582]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalr 
            = ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__jalr) 
               | (0x200000U & vlSelf->top__DOT__de__DOT__jalr));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__jalr 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__jalr))) {
        ++(vlSymsp->__Vcoverage[2583]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalr 
            = ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__jalr) 
               | (0x400000U & vlSelf->top__DOT__de__DOT__jalr));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__jalr 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__jalr))) {
        ++(vlSymsp->__Vcoverage[2584]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalr 
            = ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__jalr) 
               | (0x800000U & vlSelf->top__DOT__de__DOT__jalr));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__jalr 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__jalr))) {
        ++(vlSymsp->__Vcoverage[2585]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalr 
            = ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__jalr) 
               | (0x1000000U & vlSelf->top__DOT__de__DOT__jalr));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__jalr 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__jalr))) {
        ++(vlSymsp->__Vcoverage[2586]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalr 
            = ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__jalr) 
               | (0x2000000U & vlSelf->top__DOT__de__DOT__jalr));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__jalr 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__jalr))) {
        ++(vlSymsp->__Vcoverage[2587]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalr 
            = ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__jalr) 
               | (0x4000000U & vlSelf->top__DOT__de__DOT__jalr));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__jalr 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__jalr))) {
        ++(vlSymsp->__Vcoverage[2588]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalr 
            = ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__jalr) 
               | (0x8000000U & vlSelf->top__DOT__de__DOT__jalr));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__jalr 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__jalr))) {
        ++(vlSymsp->__Vcoverage[2589]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalr 
            = ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__jalr) 
               | (0x10000000U & vlSelf->top__DOT__de__DOT__jalr));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__jalr 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__jalr))) {
        ++(vlSymsp->__Vcoverage[2590]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalr 
            = ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__jalr) 
               | (0x20000000U & vlSelf->top__DOT__de__DOT__jalr));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__jalr 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__jalr))) {
        ++(vlSymsp->__Vcoverage[2591]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalr 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__jalr) 
               | (0x40000000U & vlSelf->top__DOT__de__DOT__jalr));
    }
    if (((vlSelf->top__DOT__de__DOT__jalr ^ vlSelf->top__DOT__de__DOT____Vtogcov__jalr) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2592]);
        vlSelf->top__DOT__de__DOT____Vtogcov__jalr 
            = ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__jalr) 
               | (0x80000000U & vlSelf->top__DOT__de__DOT__jalr));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__addi ^ vlSelf->top__DOT__de__DOT____Vtogcov__addi))) {
        ++(vlSymsp->__Vcoverage[1953]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addi 
            = ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__addi) 
               | (1U & vlSelf->top__DOT__de__DOT__addi));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__addi ^ vlSelf->top__DOT__de__DOT____Vtogcov__addi))) {
        ++(vlSymsp->__Vcoverage[1954]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addi 
            = ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__addi) 
               | (2U & vlSelf->top__DOT__de__DOT__addi));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__addi ^ vlSelf->top__DOT__de__DOT____Vtogcov__addi))) {
        ++(vlSymsp->__Vcoverage[1955]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addi 
            = ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__addi) 
               | (4U & vlSelf->top__DOT__de__DOT__addi));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__addi ^ vlSelf->top__DOT__de__DOT____Vtogcov__addi))) {
        ++(vlSymsp->__Vcoverage[1956]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addi 
            = ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__addi) 
               | (8U & vlSelf->top__DOT__de__DOT__addi));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__addi ^ vlSelf->top__DOT__de__DOT____Vtogcov__addi))) {
        ++(vlSymsp->__Vcoverage[1957]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addi 
            = ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__addi) 
               | (0x10U & vlSelf->top__DOT__de__DOT__addi));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__addi ^ vlSelf->top__DOT__de__DOT____Vtogcov__addi))) {
        ++(vlSymsp->__Vcoverage[1958]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addi 
            = ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__addi) 
               | (0x20U & vlSelf->top__DOT__de__DOT__addi));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__addi ^ vlSelf->top__DOT__de__DOT____Vtogcov__addi))) {
        ++(vlSymsp->__Vcoverage[1959]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addi 
            = ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__addi) 
               | (0x40U & vlSelf->top__DOT__de__DOT__addi));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__addi ^ vlSelf->top__DOT__de__DOT____Vtogcov__addi))) {
        ++(vlSymsp->__Vcoverage[1960]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addi 
            = ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__addi) 
               | (0x80U & vlSelf->top__DOT__de__DOT__addi));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__addi 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__addi))) {
        ++(vlSymsp->__Vcoverage[1961]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addi 
            = ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__addi) 
               | (0x100U & vlSelf->top__DOT__de__DOT__addi));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__addi 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__addi))) {
        ++(vlSymsp->__Vcoverage[1962]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addi 
            = ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__addi) 
               | (0x200U & vlSelf->top__DOT__de__DOT__addi));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__addi 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__addi))) {
        ++(vlSymsp->__Vcoverage[1963]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addi 
            = ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__addi) 
               | (0x400U & vlSelf->top__DOT__de__DOT__addi));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__addi 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__addi))) {
        ++(vlSymsp->__Vcoverage[1964]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addi 
            = ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__addi) 
               | (0x800U & vlSelf->top__DOT__de__DOT__addi));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__addi 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__addi))) {
        ++(vlSymsp->__Vcoverage[1965]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addi 
            = ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__addi) 
               | (0x1000U & vlSelf->top__DOT__de__DOT__addi));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__addi 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__addi))) {
        ++(vlSymsp->__Vcoverage[1966]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addi 
            = ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__addi) 
               | (0x2000U & vlSelf->top__DOT__de__DOT__addi));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__addi 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__addi))) {
        ++(vlSymsp->__Vcoverage[1967]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addi 
            = ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__addi) 
               | (0x4000U & vlSelf->top__DOT__de__DOT__addi));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__addi 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__addi))) {
        ++(vlSymsp->__Vcoverage[1968]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addi 
            = ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__addi) 
               | (0x8000U & vlSelf->top__DOT__de__DOT__addi));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__addi 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__addi))) {
        ++(vlSymsp->__Vcoverage[1969]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addi 
            = ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__addi) 
               | (0x10000U & vlSelf->top__DOT__de__DOT__addi));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__addi 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__addi))) {
        ++(vlSymsp->__Vcoverage[1970]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addi 
            = ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__addi) 
               | (0x20000U & vlSelf->top__DOT__de__DOT__addi));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__addi 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__addi))) {
        ++(vlSymsp->__Vcoverage[1971]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addi 
            = ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__addi) 
               | (0x40000U & vlSelf->top__DOT__de__DOT__addi));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__addi 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__addi))) {
        ++(vlSymsp->__Vcoverage[1972]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addi 
            = ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__addi) 
               | (0x80000U & vlSelf->top__DOT__de__DOT__addi));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__addi 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__addi))) {
        ++(vlSymsp->__Vcoverage[1973]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addi 
            = ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__addi) 
               | (0x100000U & vlSelf->top__DOT__de__DOT__addi));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__addi 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__addi))) {
        ++(vlSymsp->__Vcoverage[1974]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addi 
            = ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__addi) 
               | (0x200000U & vlSelf->top__DOT__de__DOT__addi));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__addi 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__addi))) {
        ++(vlSymsp->__Vcoverage[1975]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addi 
            = ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__addi) 
               | (0x400000U & vlSelf->top__DOT__de__DOT__addi));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__addi 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__addi))) {
        ++(vlSymsp->__Vcoverage[1976]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addi 
            = ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__addi) 
               | (0x800000U & vlSelf->top__DOT__de__DOT__addi));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__addi 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__addi))) {
        ++(vlSymsp->__Vcoverage[1977]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addi 
            = ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__addi) 
               | (0x1000000U & vlSelf->top__DOT__de__DOT__addi));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__addi 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__addi))) {
        ++(vlSymsp->__Vcoverage[1978]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addi 
            = ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__addi) 
               | (0x2000000U & vlSelf->top__DOT__de__DOT__addi));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__addi 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__addi))) {
        ++(vlSymsp->__Vcoverage[1979]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addi 
            = ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__addi) 
               | (0x4000000U & vlSelf->top__DOT__de__DOT__addi));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__addi 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__addi))) {
        ++(vlSymsp->__Vcoverage[1980]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addi 
            = ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__addi) 
               | (0x8000000U & vlSelf->top__DOT__de__DOT__addi));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__addi 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__addi))) {
        ++(vlSymsp->__Vcoverage[1981]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addi 
            = ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__addi) 
               | (0x10000000U & vlSelf->top__DOT__de__DOT__addi));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__addi 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__addi))) {
        ++(vlSymsp->__Vcoverage[1982]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addi 
            = ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__addi) 
               | (0x20000000U & vlSelf->top__DOT__de__DOT__addi));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__addi 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__addi))) {
        ++(vlSymsp->__Vcoverage[1983]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addi 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__addi) 
               | (0x40000000U & vlSelf->top__DOT__de__DOT__addi));
    }
    if (((vlSelf->top__DOT__de__DOT__addi ^ vlSelf->top__DOT__de__DOT____Vtogcov__addi) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[1984]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addi 
            = ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__addi) 
               | (0x80000000U & vlSelf->top__DOT__de__DOT__addi));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__andi ^ vlSelf->top__DOT__de__DOT____Vtogcov__andi))) {
        ++(vlSymsp->__Vcoverage[1985]);
        vlSelf->top__DOT__de__DOT____Vtogcov__andi 
            = ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__andi) 
               | (1U & vlSelf->top__DOT__de__DOT__andi));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__andi ^ vlSelf->top__DOT__de__DOT____Vtogcov__andi))) {
        ++(vlSymsp->__Vcoverage[1986]);
        vlSelf->top__DOT__de__DOT____Vtogcov__andi 
            = ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__andi) 
               | (2U & vlSelf->top__DOT__de__DOT__andi));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__andi ^ vlSelf->top__DOT__de__DOT____Vtogcov__andi))) {
        ++(vlSymsp->__Vcoverage[1987]);
        vlSelf->top__DOT__de__DOT____Vtogcov__andi 
            = ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__andi) 
               | (4U & vlSelf->top__DOT__de__DOT__andi));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__andi ^ vlSelf->top__DOT__de__DOT____Vtogcov__andi))) {
        ++(vlSymsp->__Vcoverage[1988]);
        vlSelf->top__DOT__de__DOT____Vtogcov__andi 
            = ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__andi) 
               | (8U & vlSelf->top__DOT__de__DOT__andi));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__andi ^ vlSelf->top__DOT__de__DOT____Vtogcov__andi))) {
        ++(vlSymsp->__Vcoverage[1989]);
        vlSelf->top__DOT__de__DOT____Vtogcov__andi 
            = ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__andi) 
               | (0x10U & vlSelf->top__DOT__de__DOT__andi));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__andi ^ vlSelf->top__DOT__de__DOT____Vtogcov__andi))) {
        ++(vlSymsp->__Vcoverage[1990]);
        vlSelf->top__DOT__de__DOT____Vtogcov__andi 
            = ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__andi) 
               | (0x20U & vlSelf->top__DOT__de__DOT__andi));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__andi ^ vlSelf->top__DOT__de__DOT____Vtogcov__andi))) {
        ++(vlSymsp->__Vcoverage[1991]);
        vlSelf->top__DOT__de__DOT____Vtogcov__andi 
            = ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__andi) 
               | (0x40U & vlSelf->top__DOT__de__DOT__andi));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__andi ^ vlSelf->top__DOT__de__DOT____Vtogcov__andi))) {
        ++(vlSymsp->__Vcoverage[1992]);
        vlSelf->top__DOT__de__DOT____Vtogcov__andi 
            = ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__andi) 
               | (0x80U & vlSelf->top__DOT__de__DOT__andi));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__andi 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__andi))) {
        ++(vlSymsp->__Vcoverage[1993]);
        vlSelf->top__DOT__de__DOT____Vtogcov__andi 
            = ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__andi) 
               | (0x100U & vlSelf->top__DOT__de__DOT__andi));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__andi 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__andi))) {
        ++(vlSymsp->__Vcoverage[1994]);
        vlSelf->top__DOT__de__DOT____Vtogcov__andi 
            = ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__andi) 
               | (0x200U & vlSelf->top__DOT__de__DOT__andi));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__andi 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__andi))) {
        ++(vlSymsp->__Vcoverage[1995]);
        vlSelf->top__DOT__de__DOT____Vtogcov__andi 
            = ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__andi) 
               | (0x400U & vlSelf->top__DOT__de__DOT__andi));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__andi 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__andi))) {
        ++(vlSymsp->__Vcoverage[1996]);
        vlSelf->top__DOT__de__DOT____Vtogcov__andi 
            = ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__andi) 
               | (0x800U & vlSelf->top__DOT__de__DOT__andi));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__andi 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__andi))) {
        ++(vlSymsp->__Vcoverage[1997]);
        vlSelf->top__DOT__de__DOT____Vtogcov__andi 
            = ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__andi) 
               | (0x1000U & vlSelf->top__DOT__de__DOT__andi));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__andi 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__andi))) {
        ++(vlSymsp->__Vcoverage[1998]);
        vlSelf->top__DOT__de__DOT____Vtogcov__andi 
            = ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__andi) 
               | (0x2000U & vlSelf->top__DOT__de__DOT__andi));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__andi 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__andi))) {
        ++(vlSymsp->__Vcoverage[1999]);
        vlSelf->top__DOT__de__DOT____Vtogcov__andi 
            = ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__andi) 
               | (0x4000U & vlSelf->top__DOT__de__DOT__andi));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__andi 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__andi))) {
        ++(vlSymsp->__Vcoverage[2000]);
        vlSelf->top__DOT__de__DOT____Vtogcov__andi 
            = ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__andi) 
               | (0x8000U & vlSelf->top__DOT__de__DOT__andi));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__andi 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__andi))) {
        ++(vlSymsp->__Vcoverage[2001]);
        vlSelf->top__DOT__de__DOT____Vtogcov__andi 
            = ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__andi) 
               | (0x10000U & vlSelf->top__DOT__de__DOT__andi));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__andi 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__andi))) {
        ++(vlSymsp->__Vcoverage[2002]);
        vlSelf->top__DOT__de__DOT____Vtogcov__andi 
            = ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__andi) 
               | (0x20000U & vlSelf->top__DOT__de__DOT__andi));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__andi 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__andi))) {
        ++(vlSymsp->__Vcoverage[2003]);
        vlSelf->top__DOT__de__DOT____Vtogcov__andi 
            = ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__andi) 
               | (0x40000U & vlSelf->top__DOT__de__DOT__andi));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__andi 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__andi))) {
        ++(vlSymsp->__Vcoverage[2004]);
        vlSelf->top__DOT__de__DOT____Vtogcov__andi 
            = ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__andi) 
               | (0x80000U & vlSelf->top__DOT__de__DOT__andi));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__andi 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__andi))) {
        ++(vlSymsp->__Vcoverage[2005]);
        vlSelf->top__DOT__de__DOT____Vtogcov__andi 
            = ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__andi) 
               | (0x100000U & vlSelf->top__DOT__de__DOT__andi));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__andi 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__andi))) {
        ++(vlSymsp->__Vcoverage[2006]);
        vlSelf->top__DOT__de__DOT____Vtogcov__andi 
            = ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__andi) 
               | (0x200000U & vlSelf->top__DOT__de__DOT__andi));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__andi 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__andi))) {
        ++(vlSymsp->__Vcoverage[2007]);
        vlSelf->top__DOT__de__DOT____Vtogcov__andi 
            = ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__andi) 
               | (0x400000U & vlSelf->top__DOT__de__DOT__andi));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__andi 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__andi))) {
        ++(vlSymsp->__Vcoverage[2008]);
        vlSelf->top__DOT__de__DOT____Vtogcov__andi 
            = ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__andi) 
               | (0x800000U & vlSelf->top__DOT__de__DOT__andi));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__andi 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__andi))) {
        ++(vlSymsp->__Vcoverage[2009]);
        vlSelf->top__DOT__de__DOT____Vtogcov__andi 
            = ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__andi) 
               | (0x1000000U & vlSelf->top__DOT__de__DOT__andi));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__andi 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__andi))) {
        ++(vlSymsp->__Vcoverage[2010]);
        vlSelf->top__DOT__de__DOT____Vtogcov__andi 
            = ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__andi) 
               | (0x2000000U & vlSelf->top__DOT__de__DOT__andi));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__andi 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__andi))) {
        ++(vlSymsp->__Vcoverage[2011]);
        vlSelf->top__DOT__de__DOT____Vtogcov__andi 
            = ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__andi) 
               | (0x4000000U & vlSelf->top__DOT__de__DOT__andi));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__andi 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__andi))) {
        ++(vlSymsp->__Vcoverage[2012]);
        vlSelf->top__DOT__de__DOT____Vtogcov__andi 
            = ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__andi) 
               | (0x8000000U & vlSelf->top__DOT__de__DOT__andi));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__andi 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__andi))) {
        ++(vlSymsp->__Vcoverage[2013]);
        vlSelf->top__DOT__de__DOT____Vtogcov__andi 
            = ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__andi) 
               | (0x10000000U & vlSelf->top__DOT__de__DOT__andi));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__andi 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__andi))) {
        ++(vlSymsp->__Vcoverage[2014]);
        vlSelf->top__DOT__de__DOT____Vtogcov__andi 
            = ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__andi) 
               | (0x20000000U & vlSelf->top__DOT__de__DOT__andi));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__andi 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__andi))) {
        ++(vlSymsp->__Vcoverage[2015]);
        vlSelf->top__DOT__de__DOT____Vtogcov__andi 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__andi) 
               | (0x40000000U & vlSelf->top__DOT__de__DOT__andi));
    }
    if (((vlSelf->top__DOT__de__DOT__andi ^ vlSelf->top__DOT__de__DOT____Vtogcov__andi) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2016]);
        vlSelf->top__DOT__de__DOT____Vtogcov__andi 
            = ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__andi) 
               | (0x80000000U & vlSelf->top__DOT__de__DOT__andi));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__xori ^ vlSelf->top__DOT__de__DOT____Vtogcov__xori))) {
        ++(vlSymsp->__Vcoverage[2017]);
        vlSelf->top__DOT__de__DOT____Vtogcov__xori 
            = ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__xori) 
               | (1U & vlSelf->top__DOT__de__DOT__xori));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__xori ^ vlSelf->top__DOT__de__DOT____Vtogcov__xori))) {
        ++(vlSymsp->__Vcoverage[2018]);
        vlSelf->top__DOT__de__DOT____Vtogcov__xori 
            = ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__xori) 
               | (2U & vlSelf->top__DOT__de__DOT__xori));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__xori ^ vlSelf->top__DOT__de__DOT____Vtogcov__xori))) {
        ++(vlSymsp->__Vcoverage[2019]);
        vlSelf->top__DOT__de__DOT____Vtogcov__xori 
            = ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__xori) 
               | (4U & vlSelf->top__DOT__de__DOT__xori));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__xori ^ vlSelf->top__DOT__de__DOT____Vtogcov__xori))) {
        ++(vlSymsp->__Vcoverage[2020]);
        vlSelf->top__DOT__de__DOT____Vtogcov__xori 
            = ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__xori) 
               | (8U & vlSelf->top__DOT__de__DOT__xori));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__xori ^ vlSelf->top__DOT__de__DOT____Vtogcov__xori))) {
        ++(vlSymsp->__Vcoverage[2021]);
        vlSelf->top__DOT__de__DOT____Vtogcov__xori 
            = ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__xori) 
               | (0x10U & vlSelf->top__DOT__de__DOT__xori));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__xori ^ vlSelf->top__DOT__de__DOT____Vtogcov__xori))) {
        ++(vlSymsp->__Vcoverage[2022]);
        vlSelf->top__DOT__de__DOT____Vtogcov__xori 
            = ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__xori) 
               | (0x20U & vlSelf->top__DOT__de__DOT__xori));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__xori ^ vlSelf->top__DOT__de__DOT____Vtogcov__xori))) {
        ++(vlSymsp->__Vcoverage[2023]);
        vlSelf->top__DOT__de__DOT____Vtogcov__xori 
            = ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__xori) 
               | (0x40U & vlSelf->top__DOT__de__DOT__xori));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__xori ^ vlSelf->top__DOT__de__DOT____Vtogcov__xori))) {
        ++(vlSymsp->__Vcoverage[2024]);
        vlSelf->top__DOT__de__DOT____Vtogcov__xori 
            = ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__xori) 
               | (0x80U & vlSelf->top__DOT__de__DOT__xori));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__xori 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__xori))) {
        ++(vlSymsp->__Vcoverage[2025]);
        vlSelf->top__DOT__de__DOT____Vtogcov__xori 
            = ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__xori) 
               | (0x100U & vlSelf->top__DOT__de__DOT__xori));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__xori 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__xori))) {
        ++(vlSymsp->__Vcoverage[2026]);
        vlSelf->top__DOT__de__DOT____Vtogcov__xori 
            = ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__xori) 
               | (0x200U & vlSelf->top__DOT__de__DOT__xori));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__xori 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__xori))) {
        ++(vlSymsp->__Vcoverage[2027]);
        vlSelf->top__DOT__de__DOT____Vtogcov__xori 
            = ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__xori) 
               | (0x400U & vlSelf->top__DOT__de__DOT__xori));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__xori 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__xori))) {
        ++(vlSymsp->__Vcoverage[2028]);
        vlSelf->top__DOT__de__DOT____Vtogcov__xori 
            = ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__xori) 
               | (0x800U & vlSelf->top__DOT__de__DOT__xori));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__xori 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__xori))) {
        ++(vlSymsp->__Vcoverage[2029]);
        vlSelf->top__DOT__de__DOT____Vtogcov__xori 
            = ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__xori) 
               | (0x1000U & vlSelf->top__DOT__de__DOT__xori));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__xori 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__xori))) {
        ++(vlSymsp->__Vcoverage[2030]);
        vlSelf->top__DOT__de__DOT____Vtogcov__xori 
            = ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__xori) 
               | (0x2000U & vlSelf->top__DOT__de__DOT__xori));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__xori 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__xori))) {
        ++(vlSymsp->__Vcoverage[2031]);
        vlSelf->top__DOT__de__DOT____Vtogcov__xori 
            = ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__xori) 
               | (0x4000U & vlSelf->top__DOT__de__DOT__xori));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__xori 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__xori))) {
        ++(vlSymsp->__Vcoverage[2032]);
        vlSelf->top__DOT__de__DOT____Vtogcov__xori 
            = ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__xori) 
               | (0x8000U & vlSelf->top__DOT__de__DOT__xori));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__xori 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__xori))) {
        ++(vlSymsp->__Vcoverage[2033]);
        vlSelf->top__DOT__de__DOT____Vtogcov__xori 
            = ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__xori) 
               | (0x10000U & vlSelf->top__DOT__de__DOT__xori));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__xori 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__xori))) {
        ++(vlSymsp->__Vcoverage[2034]);
        vlSelf->top__DOT__de__DOT____Vtogcov__xori 
            = ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__xori) 
               | (0x20000U & vlSelf->top__DOT__de__DOT__xori));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__xori 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__xori))) {
        ++(vlSymsp->__Vcoverage[2035]);
        vlSelf->top__DOT__de__DOT____Vtogcov__xori 
            = ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__xori) 
               | (0x40000U & vlSelf->top__DOT__de__DOT__xori));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__xori 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__xori))) {
        ++(vlSymsp->__Vcoverage[2036]);
        vlSelf->top__DOT__de__DOT____Vtogcov__xori 
            = ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__xori) 
               | (0x80000U & vlSelf->top__DOT__de__DOT__xori));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__xori 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__xori))) {
        ++(vlSymsp->__Vcoverage[2037]);
        vlSelf->top__DOT__de__DOT____Vtogcov__xori 
            = ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__xori) 
               | (0x100000U & vlSelf->top__DOT__de__DOT__xori));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__xori 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__xori))) {
        ++(vlSymsp->__Vcoverage[2038]);
        vlSelf->top__DOT__de__DOT____Vtogcov__xori 
            = ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__xori) 
               | (0x200000U & vlSelf->top__DOT__de__DOT__xori));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__xori 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__xori))) {
        ++(vlSymsp->__Vcoverage[2039]);
        vlSelf->top__DOT__de__DOT____Vtogcov__xori 
            = ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__xori) 
               | (0x400000U & vlSelf->top__DOT__de__DOT__xori));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__xori 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__xori))) {
        ++(vlSymsp->__Vcoverage[2040]);
        vlSelf->top__DOT__de__DOT____Vtogcov__xori 
            = ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__xori) 
               | (0x800000U & vlSelf->top__DOT__de__DOT__xori));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__xori 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__xori))) {
        ++(vlSymsp->__Vcoverage[2041]);
        vlSelf->top__DOT__de__DOT____Vtogcov__xori 
            = ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__xori) 
               | (0x1000000U & vlSelf->top__DOT__de__DOT__xori));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__xori 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__xori))) {
        ++(vlSymsp->__Vcoverage[2042]);
        vlSelf->top__DOT__de__DOT____Vtogcov__xori 
            = ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__xori) 
               | (0x2000000U & vlSelf->top__DOT__de__DOT__xori));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__xori 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__xori))) {
        ++(vlSymsp->__Vcoverage[2043]);
        vlSelf->top__DOT__de__DOT____Vtogcov__xori 
            = ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__xori) 
               | (0x4000000U & vlSelf->top__DOT__de__DOT__xori));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__xori 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__xori))) {
        ++(vlSymsp->__Vcoverage[2044]);
        vlSelf->top__DOT__de__DOT____Vtogcov__xori 
            = ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__xori) 
               | (0x8000000U & vlSelf->top__DOT__de__DOT__xori));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__xori 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__xori))) {
        ++(vlSymsp->__Vcoverage[2045]);
        vlSelf->top__DOT__de__DOT____Vtogcov__xori 
            = ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__xori) 
               | (0x10000000U & vlSelf->top__DOT__de__DOT__xori));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__xori 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__xori))) {
        ++(vlSymsp->__Vcoverage[2046]);
        vlSelf->top__DOT__de__DOT____Vtogcov__xori 
            = ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__xori) 
               | (0x20000000U & vlSelf->top__DOT__de__DOT__xori));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__xori 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__xori))) {
        ++(vlSymsp->__Vcoverage[2047]);
        vlSelf->top__DOT__de__DOT____Vtogcov__xori 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__xori) 
               | (0x40000000U & vlSelf->top__DOT__de__DOT__xori));
    }
    if (((vlSelf->top__DOT__de__DOT__xori ^ vlSelf->top__DOT__de__DOT____Vtogcov__xori) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2048]);
        vlSelf->top__DOT__de__DOT____Vtogcov__xori 
            = ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__xori) 
               | (0x80000000U & vlSelf->top__DOT__de__DOT__xori));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__ori ^ vlSelf->top__DOT__de__DOT____Vtogcov__ori))) {
        ++(vlSymsp->__Vcoverage[2049]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ori = 
            ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__ori) 
             | (1U & vlSelf->top__DOT__de__DOT__ori));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__ori ^ vlSelf->top__DOT__de__DOT____Vtogcov__ori))) {
        ++(vlSymsp->__Vcoverage[2050]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ori = 
            ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__ori) 
             | (2U & vlSelf->top__DOT__de__DOT__ori));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__ori ^ vlSelf->top__DOT__de__DOT____Vtogcov__ori))) {
        ++(vlSymsp->__Vcoverage[2051]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ori = 
            ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__ori) 
             | (4U & vlSelf->top__DOT__de__DOT__ori));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__ori ^ vlSelf->top__DOT__de__DOT____Vtogcov__ori))) {
        ++(vlSymsp->__Vcoverage[2052]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ori = 
            ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__ori) 
             | (8U & vlSelf->top__DOT__de__DOT__ori));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__ori ^ vlSelf->top__DOT__de__DOT____Vtogcov__ori))) {
        ++(vlSymsp->__Vcoverage[2053]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ori = 
            ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__ori) 
             | (0x10U & vlSelf->top__DOT__de__DOT__ori));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__ori ^ vlSelf->top__DOT__de__DOT____Vtogcov__ori))) {
        ++(vlSymsp->__Vcoverage[2054]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ori = 
            ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__ori) 
             | (0x20U & vlSelf->top__DOT__de__DOT__ori));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__ori ^ vlSelf->top__DOT__de__DOT____Vtogcov__ori))) {
        ++(vlSymsp->__Vcoverage[2055]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ori = 
            ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__ori) 
             | (0x40U & vlSelf->top__DOT__de__DOT__ori));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__ori ^ vlSelf->top__DOT__de__DOT____Vtogcov__ori))) {
        ++(vlSymsp->__Vcoverage[2056]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ori = 
            ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__ori) 
             | (0x80U & vlSelf->top__DOT__de__DOT__ori));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__ori ^ vlSelf->top__DOT__de__DOT____Vtogcov__ori))) {
        ++(vlSymsp->__Vcoverage[2057]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ori = 
            ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__ori) 
             | (0x100U & vlSelf->top__DOT__de__DOT__ori));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__ori ^ vlSelf->top__DOT__de__DOT____Vtogcov__ori))) {
        ++(vlSymsp->__Vcoverage[2058]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ori = 
            ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__ori) 
             | (0x200U & vlSelf->top__DOT__de__DOT__ori));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__ori ^ vlSelf->top__DOT__de__DOT____Vtogcov__ori))) {
        ++(vlSymsp->__Vcoverage[2059]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ori = 
            ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__ori) 
             | (0x400U & vlSelf->top__DOT__de__DOT__ori));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__ori ^ vlSelf->top__DOT__de__DOT____Vtogcov__ori))) {
        ++(vlSymsp->__Vcoverage[2060]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ori = 
            ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__ori) 
             | (0x800U & vlSelf->top__DOT__de__DOT__ori));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__ori 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__ori))) {
        ++(vlSymsp->__Vcoverage[2061]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ori = 
            ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__ori) 
             | (0x1000U & vlSelf->top__DOT__de__DOT__ori));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__ori 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__ori))) {
        ++(vlSymsp->__Vcoverage[2062]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ori = 
            ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__ori) 
             | (0x2000U & vlSelf->top__DOT__de__DOT__ori));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__ori 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__ori))) {
        ++(vlSymsp->__Vcoverage[2063]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ori = 
            ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__ori) 
             | (0x4000U & vlSelf->top__DOT__de__DOT__ori));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__ori 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__ori))) {
        ++(vlSymsp->__Vcoverage[2064]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ori = 
            ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__ori) 
             | (0x8000U & vlSelf->top__DOT__de__DOT__ori));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__ori 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__ori))) {
        ++(vlSymsp->__Vcoverage[2065]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ori = 
            ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__ori) 
             | (0x10000U & vlSelf->top__DOT__de__DOT__ori));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__ori 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__ori))) {
        ++(vlSymsp->__Vcoverage[2066]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ori = 
            ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__ori) 
             | (0x20000U & vlSelf->top__DOT__de__DOT__ori));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__ori 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__ori))) {
        ++(vlSymsp->__Vcoverage[2067]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ori = 
            ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__ori) 
             | (0x40000U & vlSelf->top__DOT__de__DOT__ori));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__ori 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__ori))) {
        ++(vlSymsp->__Vcoverage[2068]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ori = 
            ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__ori) 
             | (0x80000U & vlSelf->top__DOT__de__DOT__ori));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__ori 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__ori))) {
        ++(vlSymsp->__Vcoverage[2069]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ori = 
            ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__ori) 
             | (0x100000U & vlSelf->top__DOT__de__DOT__ori));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__ori 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__ori))) {
        ++(vlSymsp->__Vcoverage[2070]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ori = 
            ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__ori) 
             | (0x200000U & vlSelf->top__DOT__de__DOT__ori));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__ori 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__ori))) {
        ++(vlSymsp->__Vcoverage[2071]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ori = 
            ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__ori) 
             | (0x400000U & vlSelf->top__DOT__de__DOT__ori));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__ori 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__ori))) {
        ++(vlSymsp->__Vcoverage[2072]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ori = 
            ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__ori) 
             | (0x800000U & vlSelf->top__DOT__de__DOT__ori));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__ori 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__ori))) {
        ++(vlSymsp->__Vcoverage[2073]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ori = 
            ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__ori) 
             | (0x1000000U & vlSelf->top__DOT__de__DOT__ori));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__ori 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__ori))) {
        ++(vlSymsp->__Vcoverage[2074]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ori = 
            ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__ori) 
             | (0x2000000U & vlSelf->top__DOT__de__DOT__ori));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__ori 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__ori))) {
        ++(vlSymsp->__Vcoverage[2075]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ori = 
            ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__ori) 
             | (0x4000000U & vlSelf->top__DOT__de__DOT__ori));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__ori 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__ori))) {
        ++(vlSymsp->__Vcoverage[2076]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ori = 
            ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__ori) 
             | (0x8000000U & vlSelf->top__DOT__de__DOT__ori));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__ori 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__ori))) {
        ++(vlSymsp->__Vcoverage[2077]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ori = 
            ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__ori) 
             | (0x10000000U & vlSelf->top__DOT__de__DOT__ori));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__ori 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__ori))) {
        ++(vlSymsp->__Vcoverage[2078]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ori = 
            ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__ori) 
             | (0x20000000U & vlSelf->top__DOT__de__DOT__ori));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__ori 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__ori))) {
        ++(vlSymsp->__Vcoverage[2079]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ori = 
            ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__ori) 
             | (0x40000000U & vlSelf->top__DOT__de__DOT__ori));
    }
    if (((vlSelf->top__DOT__de__DOT__ori ^ vlSelf->top__DOT__de__DOT____Vtogcov__ori) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2080]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ori = 
            ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__ori) 
             | (0x80000000U & vlSelf->top__DOT__de__DOT__ori));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__sllw ^ vlSelf->top__DOT__de__DOT____Vtogcov__sllw))) {
        ++(vlSymsp->__Vcoverage[2081]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sllw 
            = ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__sllw) 
               | (1U & vlSelf->top__DOT__de__DOT__sllw));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__sllw ^ vlSelf->top__DOT__de__DOT____Vtogcov__sllw))) {
        ++(vlSymsp->__Vcoverage[2082]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sllw 
            = ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__sllw) 
               | (2U & vlSelf->top__DOT__de__DOT__sllw));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__sllw ^ vlSelf->top__DOT__de__DOT____Vtogcov__sllw))) {
        ++(vlSymsp->__Vcoverage[2083]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sllw 
            = ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__sllw) 
               | (4U & vlSelf->top__DOT__de__DOT__sllw));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__sllw ^ vlSelf->top__DOT__de__DOT____Vtogcov__sllw))) {
        ++(vlSymsp->__Vcoverage[2084]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sllw 
            = ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__sllw) 
               | (8U & vlSelf->top__DOT__de__DOT__sllw));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__sllw ^ vlSelf->top__DOT__de__DOT____Vtogcov__sllw))) {
        ++(vlSymsp->__Vcoverage[2085]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sllw 
            = ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__sllw) 
               | (0x10U & vlSelf->top__DOT__de__DOT__sllw));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__sllw ^ vlSelf->top__DOT__de__DOT____Vtogcov__sllw))) {
        ++(vlSymsp->__Vcoverage[2086]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sllw 
            = ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__sllw) 
               | (0x20U & vlSelf->top__DOT__de__DOT__sllw));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__sllw ^ vlSelf->top__DOT__de__DOT____Vtogcov__sllw))) {
        ++(vlSymsp->__Vcoverage[2087]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sllw 
            = ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__sllw) 
               | (0x40U & vlSelf->top__DOT__de__DOT__sllw));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__sllw ^ vlSelf->top__DOT__de__DOT____Vtogcov__sllw))) {
        ++(vlSymsp->__Vcoverage[2088]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sllw 
            = ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__sllw) 
               | (0x80U & vlSelf->top__DOT__de__DOT__sllw));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__sllw 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__sllw))) {
        ++(vlSymsp->__Vcoverage[2089]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sllw 
            = ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__sllw) 
               | (0x100U & vlSelf->top__DOT__de__DOT__sllw));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__sllw 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__sllw))) {
        ++(vlSymsp->__Vcoverage[2090]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sllw 
            = ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__sllw) 
               | (0x200U & vlSelf->top__DOT__de__DOT__sllw));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__sllw 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__sllw))) {
        ++(vlSymsp->__Vcoverage[2091]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sllw 
            = ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__sllw) 
               | (0x400U & vlSelf->top__DOT__de__DOT__sllw));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__sllw 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__sllw))) {
        ++(vlSymsp->__Vcoverage[2092]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sllw 
            = ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__sllw) 
               | (0x800U & vlSelf->top__DOT__de__DOT__sllw));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__sllw 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__sllw))) {
        ++(vlSymsp->__Vcoverage[2093]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sllw 
            = ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__sllw) 
               | (0x1000U & vlSelf->top__DOT__de__DOT__sllw));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__sllw 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__sllw))) {
        ++(vlSymsp->__Vcoverage[2094]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sllw 
            = ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__sllw) 
               | (0x2000U & vlSelf->top__DOT__de__DOT__sllw));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__sllw 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__sllw))) {
        ++(vlSymsp->__Vcoverage[2095]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sllw 
            = ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__sllw) 
               | (0x4000U & vlSelf->top__DOT__de__DOT__sllw));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__sllw 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__sllw))) {
        ++(vlSymsp->__Vcoverage[2096]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sllw 
            = ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__sllw) 
               | (0x8000U & vlSelf->top__DOT__de__DOT__sllw));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__sllw 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sllw))) {
        ++(vlSymsp->__Vcoverage[2097]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sllw 
            = ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sllw) 
               | (0x10000U & vlSelf->top__DOT__de__DOT__sllw));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__sllw 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sllw))) {
        ++(vlSymsp->__Vcoverage[2098]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sllw 
            = ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sllw) 
               | (0x20000U & vlSelf->top__DOT__de__DOT__sllw));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__sllw 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sllw))) {
        ++(vlSymsp->__Vcoverage[2099]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sllw 
            = ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sllw) 
               | (0x40000U & vlSelf->top__DOT__de__DOT__sllw));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__sllw 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sllw))) {
        ++(vlSymsp->__Vcoverage[2100]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sllw 
            = ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sllw) 
               | (0x80000U & vlSelf->top__DOT__de__DOT__sllw));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__sllw 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sllw))) {
        ++(vlSymsp->__Vcoverage[2101]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sllw 
            = ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sllw) 
               | (0x100000U & vlSelf->top__DOT__de__DOT__sllw));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__sllw 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sllw))) {
        ++(vlSymsp->__Vcoverage[2102]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sllw 
            = ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sllw) 
               | (0x200000U & vlSelf->top__DOT__de__DOT__sllw));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__sllw 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sllw))) {
        ++(vlSymsp->__Vcoverage[2103]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sllw 
            = ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sllw) 
               | (0x400000U & vlSelf->top__DOT__de__DOT__sllw));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__sllw 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sllw))) {
        ++(vlSymsp->__Vcoverage[2104]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sllw 
            = ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sllw) 
               | (0x800000U & vlSelf->top__DOT__de__DOT__sllw));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__sllw 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sllw))) {
        ++(vlSymsp->__Vcoverage[2105]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sllw 
            = ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sllw) 
               | (0x1000000U & vlSelf->top__DOT__de__DOT__sllw));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__sllw 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sllw))) {
        ++(vlSymsp->__Vcoverage[2106]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sllw 
            = ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sllw) 
               | (0x2000000U & vlSelf->top__DOT__de__DOT__sllw));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__sllw 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sllw))) {
        ++(vlSymsp->__Vcoverage[2107]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sllw 
            = ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sllw) 
               | (0x4000000U & vlSelf->top__DOT__de__DOT__sllw));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__sllw 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sllw))) {
        ++(vlSymsp->__Vcoverage[2108]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sllw 
            = ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sllw) 
               | (0x8000000U & vlSelf->top__DOT__de__DOT__sllw));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__sllw 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__sllw))) {
        ++(vlSymsp->__Vcoverage[2109]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sllw 
            = ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sllw) 
               | (0x10000000U & vlSelf->top__DOT__de__DOT__sllw));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__sllw 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__sllw))) {
        ++(vlSymsp->__Vcoverage[2110]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sllw 
            = ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sllw) 
               | (0x20000000U & vlSelf->top__DOT__de__DOT__sllw));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__sllw 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__sllw))) {
        ++(vlSymsp->__Vcoverage[2111]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sllw 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sllw) 
               | (0x40000000U & vlSelf->top__DOT__de__DOT__sllw));
    }
    if (((vlSelf->top__DOT__de__DOT__sllw ^ vlSelf->top__DOT__de__DOT____Vtogcov__sllw) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2112]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sllw 
            = ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sllw) 
               | (0x80000000U & vlSelf->top__DOT__de__DOT__sllw));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__sll ^ vlSelf->top__DOT__de__DOT____Vtogcov__sll))) {
        ++(vlSymsp->__Vcoverage[2113]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sll = 
            ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__sll) 
             | (1U & vlSelf->top__DOT__de__DOT__sll));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__sll ^ vlSelf->top__DOT__de__DOT____Vtogcov__sll))) {
        ++(vlSymsp->__Vcoverage[2114]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sll = 
            ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__sll) 
             | (2U & vlSelf->top__DOT__de__DOT__sll));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__sll ^ vlSelf->top__DOT__de__DOT____Vtogcov__sll))) {
        ++(vlSymsp->__Vcoverage[2115]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sll = 
            ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__sll) 
             | (4U & vlSelf->top__DOT__de__DOT__sll));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__sll ^ vlSelf->top__DOT__de__DOT____Vtogcov__sll))) {
        ++(vlSymsp->__Vcoverage[2116]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sll = 
            ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__sll) 
             | (8U & vlSelf->top__DOT__de__DOT__sll));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__sll ^ vlSelf->top__DOT__de__DOT____Vtogcov__sll))) {
        ++(vlSymsp->__Vcoverage[2117]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sll = 
            ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__sll) 
             | (0x10U & vlSelf->top__DOT__de__DOT__sll));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__sll ^ vlSelf->top__DOT__de__DOT____Vtogcov__sll))) {
        ++(vlSymsp->__Vcoverage[2118]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sll = 
            ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__sll) 
             | (0x20U & vlSelf->top__DOT__de__DOT__sll));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__sll ^ vlSelf->top__DOT__de__DOT____Vtogcov__sll))) {
        ++(vlSymsp->__Vcoverage[2119]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sll = 
            ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__sll) 
             | (0x40U & vlSelf->top__DOT__de__DOT__sll));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__sll ^ vlSelf->top__DOT__de__DOT____Vtogcov__sll))) {
        ++(vlSymsp->__Vcoverage[2120]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sll = 
            ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__sll) 
             | (0x80U & vlSelf->top__DOT__de__DOT__sll));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__sll ^ vlSelf->top__DOT__de__DOT____Vtogcov__sll))) {
        ++(vlSymsp->__Vcoverage[2121]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sll = 
            ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__sll) 
             | (0x100U & vlSelf->top__DOT__de__DOT__sll));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__sll ^ vlSelf->top__DOT__de__DOT____Vtogcov__sll))) {
        ++(vlSymsp->__Vcoverage[2122]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sll = 
            ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__sll) 
             | (0x200U & vlSelf->top__DOT__de__DOT__sll));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__sll ^ vlSelf->top__DOT__de__DOT____Vtogcov__sll))) {
        ++(vlSymsp->__Vcoverage[2123]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sll = 
            ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__sll) 
             | (0x400U & vlSelf->top__DOT__de__DOT__sll));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__sll ^ vlSelf->top__DOT__de__DOT____Vtogcov__sll))) {
        ++(vlSymsp->__Vcoverage[2124]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sll = 
            ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__sll) 
             | (0x800U & vlSelf->top__DOT__de__DOT__sll));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__sll 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__sll))) {
        ++(vlSymsp->__Vcoverage[2125]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sll = 
            ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__sll) 
             | (0x1000U & vlSelf->top__DOT__de__DOT__sll));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__sll 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__sll))) {
        ++(vlSymsp->__Vcoverage[2126]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sll = 
            ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__sll) 
             | (0x2000U & vlSelf->top__DOT__de__DOT__sll));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__sll 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__sll))) {
        ++(vlSymsp->__Vcoverage[2127]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sll = 
            ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__sll) 
             | (0x4000U & vlSelf->top__DOT__de__DOT__sll));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__sll 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__sll))) {
        ++(vlSymsp->__Vcoverage[2128]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sll = 
            ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__sll) 
             | (0x8000U & vlSelf->top__DOT__de__DOT__sll));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__sll 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sll))) {
        ++(vlSymsp->__Vcoverage[2129]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sll = 
            ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sll) 
             | (0x10000U & vlSelf->top__DOT__de__DOT__sll));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__sll 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sll))) {
        ++(vlSymsp->__Vcoverage[2130]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sll = 
            ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sll) 
             | (0x20000U & vlSelf->top__DOT__de__DOT__sll));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__sll 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sll))) {
        ++(vlSymsp->__Vcoverage[2131]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sll = 
            ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sll) 
             | (0x40000U & vlSelf->top__DOT__de__DOT__sll));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__sll 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sll))) {
        ++(vlSymsp->__Vcoverage[2132]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sll = 
            ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sll) 
             | (0x80000U & vlSelf->top__DOT__de__DOT__sll));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__sll 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sll))) {
        ++(vlSymsp->__Vcoverage[2133]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sll = 
            ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sll) 
             | (0x100000U & vlSelf->top__DOT__de__DOT__sll));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__sll 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sll))) {
        ++(vlSymsp->__Vcoverage[2134]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sll = 
            ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sll) 
             | (0x200000U & vlSelf->top__DOT__de__DOT__sll));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__sll 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sll))) {
        ++(vlSymsp->__Vcoverage[2135]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sll = 
            ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sll) 
             | (0x400000U & vlSelf->top__DOT__de__DOT__sll));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__sll 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sll))) {
        ++(vlSymsp->__Vcoverage[2136]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sll = 
            ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sll) 
             | (0x800000U & vlSelf->top__DOT__de__DOT__sll));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__sll 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sll))) {
        ++(vlSymsp->__Vcoverage[2137]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sll = 
            ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sll) 
             | (0x1000000U & vlSelf->top__DOT__de__DOT__sll));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__sll 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sll))) {
        ++(vlSymsp->__Vcoverage[2138]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sll = 
            ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sll) 
             | (0x2000000U & vlSelf->top__DOT__de__DOT__sll));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__sll 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sll))) {
        ++(vlSymsp->__Vcoverage[2139]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sll = 
            ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sll) 
             | (0x4000000U & vlSelf->top__DOT__de__DOT__sll));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__sll 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sll))) {
        ++(vlSymsp->__Vcoverage[2140]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sll = 
            ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sll) 
             | (0x8000000U & vlSelf->top__DOT__de__DOT__sll));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__sll 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__sll))) {
        ++(vlSymsp->__Vcoverage[2141]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sll = 
            ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sll) 
             | (0x10000000U & vlSelf->top__DOT__de__DOT__sll));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__sll 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__sll))) {
        ++(vlSymsp->__Vcoverage[2142]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sll = 
            ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sll) 
             | (0x20000000U & vlSelf->top__DOT__de__DOT__sll));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__sll 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__sll))) {
        ++(vlSymsp->__Vcoverage[2143]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sll = 
            ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sll) 
             | (0x40000000U & vlSelf->top__DOT__de__DOT__sll));
    }
    if (((vlSelf->top__DOT__de__DOT__sll ^ vlSelf->top__DOT__de__DOT____Vtogcov__sll) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2144]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sll = 
            ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sll) 
             | (0x80000000U & vlSelf->top__DOT__de__DOT__sll));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__srlw ^ vlSelf->top__DOT__de__DOT____Vtogcov__srlw))) {
        ++(vlSymsp->__Vcoverage[2145]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srlw 
            = ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__srlw) 
               | (1U & vlSelf->top__DOT__de__DOT__srlw));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__srlw ^ vlSelf->top__DOT__de__DOT____Vtogcov__srlw))) {
        ++(vlSymsp->__Vcoverage[2146]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srlw 
            = ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__srlw) 
               | (2U & vlSelf->top__DOT__de__DOT__srlw));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__srlw ^ vlSelf->top__DOT__de__DOT____Vtogcov__srlw))) {
        ++(vlSymsp->__Vcoverage[2147]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srlw 
            = ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__srlw) 
               | (4U & vlSelf->top__DOT__de__DOT__srlw));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__srlw ^ vlSelf->top__DOT__de__DOT____Vtogcov__srlw))) {
        ++(vlSymsp->__Vcoverage[2148]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srlw 
            = ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__srlw) 
               | (8U & vlSelf->top__DOT__de__DOT__srlw));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__srlw ^ vlSelf->top__DOT__de__DOT____Vtogcov__srlw))) {
        ++(vlSymsp->__Vcoverage[2149]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srlw 
            = ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__srlw) 
               | (0x10U & vlSelf->top__DOT__de__DOT__srlw));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__srlw ^ vlSelf->top__DOT__de__DOT____Vtogcov__srlw))) {
        ++(vlSymsp->__Vcoverage[2150]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srlw 
            = ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__srlw) 
               | (0x20U & vlSelf->top__DOT__de__DOT__srlw));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__srlw ^ vlSelf->top__DOT__de__DOT____Vtogcov__srlw))) {
        ++(vlSymsp->__Vcoverage[2151]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srlw 
            = ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__srlw) 
               | (0x40U & vlSelf->top__DOT__de__DOT__srlw));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__srlw ^ vlSelf->top__DOT__de__DOT____Vtogcov__srlw))) {
        ++(vlSymsp->__Vcoverage[2152]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srlw 
            = ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__srlw) 
               | (0x80U & vlSelf->top__DOT__de__DOT__srlw));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__srlw 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__srlw))) {
        ++(vlSymsp->__Vcoverage[2153]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srlw 
            = ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__srlw) 
               | (0x100U & vlSelf->top__DOT__de__DOT__srlw));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__srlw 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__srlw))) {
        ++(vlSymsp->__Vcoverage[2154]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srlw 
            = ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__srlw) 
               | (0x200U & vlSelf->top__DOT__de__DOT__srlw));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__srlw 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__srlw))) {
        ++(vlSymsp->__Vcoverage[2155]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srlw 
            = ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__srlw) 
               | (0x400U & vlSelf->top__DOT__de__DOT__srlw));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__srlw 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__srlw))) {
        ++(vlSymsp->__Vcoverage[2156]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srlw 
            = ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__srlw) 
               | (0x800U & vlSelf->top__DOT__de__DOT__srlw));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__srlw 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__srlw))) {
        ++(vlSymsp->__Vcoverage[2157]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srlw 
            = ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__srlw) 
               | (0x1000U & vlSelf->top__DOT__de__DOT__srlw));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__srlw 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__srlw))) {
        ++(vlSymsp->__Vcoverage[2158]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srlw 
            = ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__srlw) 
               | (0x2000U & vlSelf->top__DOT__de__DOT__srlw));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__srlw 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__srlw))) {
        ++(vlSymsp->__Vcoverage[2159]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srlw 
            = ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__srlw) 
               | (0x4000U & vlSelf->top__DOT__de__DOT__srlw));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__srlw 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__srlw))) {
        ++(vlSymsp->__Vcoverage[2160]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srlw 
            = ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__srlw) 
               | (0x8000U & vlSelf->top__DOT__de__DOT__srlw));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__srlw 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__srlw))) {
        ++(vlSymsp->__Vcoverage[2161]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srlw 
            = ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srlw) 
               | (0x10000U & vlSelf->top__DOT__de__DOT__srlw));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__srlw 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__srlw))) {
        ++(vlSymsp->__Vcoverage[2162]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srlw 
            = ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srlw) 
               | (0x20000U & vlSelf->top__DOT__de__DOT__srlw));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__srlw 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__srlw))) {
        ++(vlSymsp->__Vcoverage[2163]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srlw 
            = ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srlw) 
               | (0x40000U & vlSelf->top__DOT__de__DOT__srlw));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__srlw 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__srlw))) {
        ++(vlSymsp->__Vcoverage[2164]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srlw 
            = ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srlw) 
               | (0x80000U & vlSelf->top__DOT__de__DOT__srlw));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__srlw 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__srlw))) {
        ++(vlSymsp->__Vcoverage[2165]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srlw 
            = ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srlw) 
               | (0x100000U & vlSelf->top__DOT__de__DOT__srlw));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__srlw 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__srlw))) {
        ++(vlSymsp->__Vcoverage[2166]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srlw 
            = ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srlw) 
               | (0x200000U & vlSelf->top__DOT__de__DOT__srlw));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__srlw 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__srlw))) {
        ++(vlSymsp->__Vcoverage[2167]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srlw 
            = ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srlw) 
               | (0x400000U & vlSelf->top__DOT__de__DOT__srlw));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__srlw 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__srlw))) {
        ++(vlSymsp->__Vcoverage[2168]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srlw 
            = ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srlw) 
               | (0x800000U & vlSelf->top__DOT__de__DOT__srlw));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__srlw 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__srlw))) {
        ++(vlSymsp->__Vcoverage[2169]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srlw 
            = ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srlw) 
               | (0x1000000U & vlSelf->top__DOT__de__DOT__srlw));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__srlw 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__srlw))) {
        ++(vlSymsp->__Vcoverage[2170]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srlw 
            = ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srlw) 
               | (0x2000000U & vlSelf->top__DOT__de__DOT__srlw));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__srlw 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__srlw))) {
        ++(vlSymsp->__Vcoverage[2171]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srlw 
            = ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srlw) 
               | (0x4000000U & vlSelf->top__DOT__de__DOT__srlw));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__srlw 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__srlw))) {
        ++(vlSymsp->__Vcoverage[2172]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srlw 
            = ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srlw) 
               | (0x8000000U & vlSelf->top__DOT__de__DOT__srlw));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__srlw 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__srlw))) {
        ++(vlSymsp->__Vcoverage[2173]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srlw 
            = ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srlw) 
               | (0x10000000U & vlSelf->top__DOT__de__DOT__srlw));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__srlw 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__srlw))) {
        ++(vlSymsp->__Vcoverage[2174]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srlw 
            = ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srlw) 
               | (0x20000000U & vlSelf->top__DOT__de__DOT__srlw));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__srlw 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__srlw))) {
        ++(vlSymsp->__Vcoverage[2175]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srlw 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srlw) 
               | (0x40000000U & vlSelf->top__DOT__de__DOT__srlw));
    }
    if (((vlSelf->top__DOT__de__DOT__srlw ^ vlSelf->top__DOT__de__DOT____Vtogcov__srlw) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2176]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srlw 
            = ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srlw) 
               | (0x80000000U & vlSelf->top__DOT__de__DOT__srlw));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__addiw ^ vlSelf->top__DOT__de__DOT____Vtogcov__addiw))) {
        ++(vlSymsp->__Vcoverage[2241]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addiw 
            = ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__addiw) 
               | (1U & vlSelf->top__DOT__de__DOT__addiw));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__addiw ^ vlSelf->top__DOT__de__DOT____Vtogcov__addiw))) {
        ++(vlSymsp->__Vcoverage[2242]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addiw 
            = ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__addiw) 
               | (2U & vlSelf->top__DOT__de__DOT__addiw));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__addiw ^ vlSelf->top__DOT__de__DOT____Vtogcov__addiw))) {
        ++(vlSymsp->__Vcoverage[2243]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addiw 
            = ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__addiw) 
               | (4U & vlSelf->top__DOT__de__DOT__addiw));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__addiw ^ vlSelf->top__DOT__de__DOT____Vtogcov__addiw))) {
        ++(vlSymsp->__Vcoverage[2244]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addiw 
            = ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__addiw) 
               | (8U & vlSelf->top__DOT__de__DOT__addiw));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__addiw 
                  ^ vlSelf->top__DOT__de__DOT____Vtogcov__addiw))) {
        ++(vlSymsp->__Vcoverage[2245]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addiw 
            = ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__addiw) 
               | (0x10U & vlSelf->top__DOT__de__DOT__addiw));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__addiw 
                  ^ vlSelf->top__DOT__de__DOT____Vtogcov__addiw))) {
        ++(vlSymsp->__Vcoverage[2246]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addiw 
            = ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__addiw) 
               | (0x20U & vlSelf->top__DOT__de__DOT__addiw));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__addiw 
                  ^ vlSelf->top__DOT__de__DOT____Vtogcov__addiw))) {
        ++(vlSymsp->__Vcoverage[2247]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addiw 
            = ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__addiw) 
               | (0x40U & vlSelf->top__DOT__de__DOT__addiw));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__addiw 
                  ^ vlSelf->top__DOT__de__DOT____Vtogcov__addiw))) {
        ++(vlSymsp->__Vcoverage[2248]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addiw 
            = ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__addiw) 
               | (0x80U & vlSelf->top__DOT__de__DOT__addiw));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__addiw 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__addiw))) {
        ++(vlSymsp->__Vcoverage[2249]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addiw 
            = ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__addiw) 
               | (0x100U & vlSelf->top__DOT__de__DOT__addiw));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__addiw 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__addiw))) {
        ++(vlSymsp->__Vcoverage[2250]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addiw 
            = ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__addiw) 
               | (0x200U & vlSelf->top__DOT__de__DOT__addiw));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__addiw 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__addiw))) {
        ++(vlSymsp->__Vcoverage[2251]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addiw 
            = ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__addiw) 
               | (0x400U & vlSelf->top__DOT__de__DOT__addiw));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__addiw 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__addiw))) {
        ++(vlSymsp->__Vcoverage[2252]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addiw 
            = ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__addiw) 
               | (0x800U & vlSelf->top__DOT__de__DOT__addiw));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__addiw 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__addiw))) {
        ++(vlSymsp->__Vcoverage[2253]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addiw 
            = ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__addiw) 
               | (0x1000U & vlSelf->top__DOT__de__DOT__addiw));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__addiw 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__addiw))) {
        ++(vlSymsp->__Vcoverage[2254]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addiw 
            = ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__addiw) 
               | (0x2000U & vlSelf->top__DOT__de__DOT__addiw));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__addiw 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__addiw))) {
        ++(vlSymsp->__Vcoverage[2255]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addiw 
            = ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__addiw) 
               | (0x4000U & vlSelf->top__DOT__de__DOT__addiw));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__addiw 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__addiw))) {
        ++(vlSymsp->__Vcoverage[2256]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addiw 
            = ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__addiw) 
               | (0x8000U & vlSelf->top__DOT__de__DOT__addiw));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__addiw 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__addiw))) {
        ++(vlSymsp->__Vcoverage[2257]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addiw 
            = ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__addiw) 
               | (0x10000U & vlSelf->top__DOT__de__DOT__addiw));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__addiw 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__addiw))) {
        ++(vlSymsp->__Vcoverage[2258]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addiw 
            = ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__addiw) 
               | (0x20000U & vlSelf->top__DOT__de__DOT__addiw));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__addiw 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__addiw))) {
        ++(vlSymsp->__Vcoverage[2259]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addiw 
            = ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__addiw) 
               | (0x40000U & vlSelf->top__DOT__de__DOT__addiw));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__addiw 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__addiw))) {
        ++(vlSymsp->__Vcoverage[2260]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addiw 
            = ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__addiw) 
               | (0x80000U & vlSelf->top__DOT__de__DOT__addiw));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__addiw 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__addiw))) {
        ++(vlSymsp->__Vcoverage[2261]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addiw 
            = ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__addiw) 
               | (0x100000U & vlSelf->top__DOT__de__DOT__addiw));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__addiw 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__addiw))) {
        ++(vlSymsp->__Vcoverage[2262]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addiw 
            = ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__addiw) 
               | (0x200000U & vlSelf->top__DOT__de__DOT__addiw));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__addiw 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__addiw))) {
        ++(vlSymsp->__Vcoverage[2263]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addiw 
            = ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__addiw) 
               | (0x400000U & vlSelf->top__DOT__de__DOT__addiw));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__addiw 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__addiw))) {
        ++(vlSymsp->__Vcoverage[2264]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addiw 
            = ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__addiw) 
               | (0x800000U & vlSelf->top__DOT__de__DOT__addiw));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__addiw 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__addiw))) {
        ++(vlSymsp->__Vcoverage[2265]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addiw 
            = ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__addiw) 
               | (0x1000000U & vlSelf->top__DOT__de__DOT__addiw));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__addiw 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__addiw))) {
        ++(vlSymsp->__Vcoverage[2266]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addiw 
            = ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__addiw) 
               | (0x2000000U & vlSelf->top__DOT__de__DOT__addiw));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__addiw 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__addiw))) {
        ++(vlSymsp->__Vcoverage[2267]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addiw 
            = ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__addiw) 
               | (0x4000000U & vlSelf->top__DOT__de__DOT__addiw));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__addiw 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__addiw))) {
        ++(vlSymsp->__Vcoverage[2268]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addiw 
            = ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__addiw) 
               | (0x8000000U & vlSelf->top__DOT__de__DOT__addiw));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__addiw 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__addiw))) {
        ++(vlSymsp->__Vcoverage[2269]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addiw 
            = ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__addiw) 
               | (0x10000000U & vlSelf->top__DOT__de__DOT__addiw));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__addiw 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__addiw))) {
        ++(vlSymsp->__Vcoverage[2270]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addiw 
            = ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__addiw) 
               | (0x20000000U & vlSelf->top__DOT__de__DOT__addiw));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__addiw 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__addiw))) {
        ++(vlSymsp->__Vcoverage[2271]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addiw 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__addiw) 
               | (0x40000000U & vlSelf->top__DOT__de__DOT__addiw));
    }
    if (((vlSelf->top__DOT__de__DOT__addiw ^ vlSelf->top__DOT__de__DOT____Vtogcov__addiw) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2272]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addiw 
            = ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__addiw) 
               | (0x80000000U & vlSelf->top__DOT__de__DOT__addiw));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__slliw ^ vlSelf->top__DOT__de__DOT____Vtogcov__slliw))) {
        ++(vlSymsp->__Vcoverage[2273]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slliw 
            = ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__slliw) 
               | (1U & vlSelf->top__DOT__de__DOT__slliw));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__slliw ^ vlSelf->top__DOT__de__DOT____Vtogcov__slliw))) {
        ++(vlSymsp->__Vcoverage[2274]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slliw 
            = ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__slliw) 
               | (2U & vlSelf->top__DOT__de__DOT__slliw));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__slliw ^ vlSelf->top__DOT__de__DOT____Vtogcov__slliw))) {
        ++(vlSymsp->__Vcoverage[2275]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slliw 
            = ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__slliw) 
               | (4U & vlSelf->top__DOT__de__DOT__slliw));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__slliw ^ vlSelf->top__DOT__de__DOT____Vtogcov__slliw))) {
        ++(vlSymsp->__Vcoverage[2276]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slliw 
            = ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__slliw) 
               | (8U & vlSelf->top__DOT__de__DOT__slliw));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__slliw 
                  ^ vlSelf->top__DOT__de__DOT____Vtogcov__slliw))) {
        ++(vlSymsp->__Vcoverage[2277]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slliw 
            = ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__slliw) 
               | (0x10U & vlSelf->top__DOT__de__DOT__slliw));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__slliw 
                  ^ vlSelf->top__DOT__de__DOT____Vtogcov__slliw))) {
        ++(vlSymsp->__Vcoverage[2278]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slliw 
            = ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__slliw) 
               | (0x20U & vlSelf->top__DOT__de__DOT__slliw));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__slliw 
                  ^ vlSelf->top__DOT__de__DOT____Vtogcov__slliw))) {
        ++(vlSymsp->__Vcoverage[2279]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slliw 
            = ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__slliw) 
               | (0x40U & vlSelf->top__DOT__de__DOT__slliw));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__slliw 
                  ^ vlSelf->top__DOT__de__DOT____Vtogcov__slliw))) {
        ++(vlSymsp->__Vcoverage[2280]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slliw 
            = ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__slliw) 
               | (0x80U & vlSelf->top__DOT__de__DOT__slliw));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__slliw 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__slliw))) {
        ++(vlSymsp->__Vcoverage[2281]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slliw 
            = ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__slliw) 
               | (0x100U & vlSelf->top__DOT__de__DOT__slliw));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__slliw 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__slliw))) {
        ++(vlSymsp->__Vcoverage[2282]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slliw 
            = ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__slliw) 
               | (0x200U & vlSelf->top__DOT__de__DOT__slliw));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__slliw 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__slliw))) {
        ++(vlSymsp->__Vcoverage[2283]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slliw 
            = ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__slliw) 
               | (0x400U & vlSelf->top__DOT__de__DOT__slliw));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__slliw 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__slliw))) {
        ++(vlSymsp->__Vcoverage[2284]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slliw 
            = ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__slliw) 
               | (0x800U & vlSelf->top__DOT__de__DOT__slliw));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__slliw 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__slliw))) {
        ++(vlSymsp->__Vcoverage[2285]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slliw 
            = ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__slliw) 
               | (0x1000U & vlSelf->top__DOT__de__DOT__slliw));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__slliw 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__slliw))) {
        ++(vlSymsp->__Vcoverage[2286]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slliw 
            = ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__slliw) 
               | (0x2000U & vlSelf->top__DOT__de__DOT__slliw));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__slliw 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__slliw))) {
        ++(vlSymsp->__Vcoverage[2287]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slliw 
            = ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__slliw) 
               | (0x4000U & vlSelf->top__DOT__de__DOT__slliw));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__slliw 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__slliw))) {
        ++(vlSymsp->__Vcoverage[2288]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slliw 
            = ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__slliw) 
               | (0x8000U & vlSelf->top__DOT__de__DOT__slliw));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__slliw 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__slliw))) {
        ++(vlSymsp->__Vcoverage[2289]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slliw 
            = ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slliw) 
               | (0x10000U & vlSelf->top__DOT__de__DOT__slliw));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__slliw 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__slliw))) {
        ++(vlSymsp->__Vcoverage[2290]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slliw 
            = ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slliw) 
               | (0x20000U & vlSelf->top__DOT__de__DOT__slliw));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__slliw 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__slliw))) {
        ++(vlSymsp->__Vcoverage[2291]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slliw 
            = ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slliw) 
               | (0x40000U & vlSelf->top__DOT__de__DOT__slliw));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__slliw 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__slliw))) {
        ++(vlSymsp->__Vcoverage[2292]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slliw 
            = ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slliw) 
               | (0x80000U & vlSelf->top__DOT__de__DOT__slliw));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__slliw 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__slliw))) {
        ++(vlSymsp->__Vcoverage[2293]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slliw 
            = ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slliw) 
               | (0x100000U & vlSelf->top__DOT__de__DOT__slliw));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__slliw 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__slliw))) {
        ++(vlSymsp->__Vcoverage[2294]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slliw 
            = ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slliw) 
               | (0x200000U & vlSelf->top__DOT__de__DOT__slliw));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__slliw 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__slliw))) {
        ++(vlSymsp->__Vcoverage[2295]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slliw 
            = ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slliw) 
               | (0x400000U & vlSelf->top__DOT__de__DOT__slliw));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__slliw 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__slliw))) {
        ++(vlSymsp->__Vcoverage[2296]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slliw 
            = ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slliw) 
               | (0x800000U & vlSelf->top__DOT__de__DOT__slliw));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__slliw 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__slliw))) {
        ++(vlSymsp->__Vcoverage[2297]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slliw 
            = ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slliw) 
               | (0x1000000U & vlSelf->top__DOT__de__DOT__slliw));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__slliw 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__slliw))) {
        ++(vlSymsp->__Vcoverage[2298]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slliw 
            = ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slliw) 
               | (0x2000000U & vlSelf->top__DOT__de__DOT__slliw));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__slliw 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__slliw))) {
        ++(vlSymsp->__Vcoverage[2299]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slliw 
            = ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slliw) 
               | (0x4000000U & vlSelf->top__DOT__de__DOT__slliw));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__slliw 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__slliw))) {
        ++(vlSymsp->__Vcoverage[2300]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slliw 
            = ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slliw) 
               | (0x8000000U & vlSelf->top__DOT__de__DOT__slliw));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__slliw 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__slliw))) {
        ++(vlSymsp->__Vcoverage[2301]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slliw 
            = ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slliw) 
               | (0x10000000U & vlSelf->top__DOT__de__DOT__slliw));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__slliw 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__slliw))) {
        ++(vlSymsp->__Vcoverage[2302]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slliw 
            = ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slliw) 
               | (0x20000000U & vlSelf->top__DOT__de__DOT__slliw));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__slliw 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__slliw))) {
        ++(vlSymsp->__Vcoverage[2303]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slliw 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slliw) 
               | (0x40000000U & vlSelf->top__DOT__de__DOT__slliw));
    }
    if (((vlSelf->top__DOT__de__DOT__slliw ^ vlSelf->top__DOT__de__DOT____Vtogcov__slliw) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2304]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slliw 
            = ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slliw) 
               | (0x80000000U & vlSelf->top__DOT__de__DOT__slliw));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__srliw ^ vlSelf->top__DOT__de__DOT____Vtogcov__srliw))) {
        ++(vlSymsp->__Vcoverage[2305]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srliw 
            = ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__srliw) 
               | (1U & vlSelf->top__DOT__de__DOT__srliw));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__srliw ^ vlSelf->top__DOT__de__DOT____Vtogcov__srliw))) {
        ++(vlSymsp->__Vcoverage[2306]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srliw 
            = ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__srliw) 
               | (2U & vlSelf->top__DOT__de__DOT__srliw));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__srliw ^ vlSelf->top__DOT__de__DOT____Vtogcov__srliw))) {
        ++(vlSymsp->__Vcoverage[2307]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srliw 
            = ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__srliw) 
               | (4U & vlSelf->top__DOT__de__DOT__srliw));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__srliw ^ vlSelf->top__DOT__de__DOT____Vtogcov__srliw))) {
        ++(vlSymsp->__Vcoverage[2308]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srliw 
            = ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__srliw) 
               | (8U & vlSelf->top__DOT__de__DOT__srliw));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__srliw 
                  ^ vlSelf->top__DOT__de__DOT____Vtogcov__srliw))) {
        ++(vlSymsp->__Vcoverage[2309]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srliw 
            = ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__srliw) 
               | (0x10U & vlSelf->top__DOT__de__DOT__srliw));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__srliw 
                  ^ vlSelf->top__DOT__de__DOT____Vtogcov__srliw))) {
        ++(vlSymsp->__Vcoverage[2310]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srliw 
            = ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__srliw) 
               | (0x20U & vlSelf->top__DOT__de__DOT__srliw));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__srliw 
                  ^ vlSelf->top__DOT__de__DOT____Vtogcov__srliw))) {
        ++(vlSymsp->__Vcoverage[2311]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srliw 
            = ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__srliw) 
               | (0x40U & vlSelf->top__DOT__de__DOT__srliw));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__srliw 
                  ^ vlSelf->top__DOT__de__DOT____Vtogcov__srliw))) {
        ++(vlSymsp->__Vcoverage[2312]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srliw 
            = ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__srliw) 
               | (0x80U & vlSelf->top__DOT__de__DOT__srliw));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__srliw 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__srliw))) {
        ++(vlSymsp->__Vcoverage[2313]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srliw 
            = ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__srliw) 
               | (0x100U & vlSelf->top__DOT__de__DOT__srliw));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__srliw 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__srliw))) {
        ++(vlSymsp->__Vcoverage[2314]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srliw 
            = ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__srliw) 
               | (0x200U & vlSelf->top__DOT__de__DOT__srliw));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__srliw 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__srliw))) {
        ++(vlSymsp->__Vcoverage[2315]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srliw 
            = ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__srliw) 
               | (0x400U & vlSelf->top__DOT__de__DOT__srliw));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__srliw 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__srliw))) {
        ++(vlSymsp->__Vcoverage[2316]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srliw 
            = ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__srliw) 
               | (0x800U & vlSelf->top__DOT__de__DOT__srliw));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__srliw 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__srliw))) {
        ++(vlSymsp->__Vcoverage[2317]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srliw 
            = ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__srliw) 
               | (0x1000U & vlSelf->top__DOT__de__DOT__srliw));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__srliw 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__srliw))) {
        ++(vlSymsp->__Vcoverage[2318]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srliw 
            = ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__srliw) 
               | (0x2000U & vlSelf->top__DOT__de__DOT__srliw));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__srliw 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__srliw))) {
        ++(vlSymsp->__Vcoverage[2319]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srliw 
            = ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__srliw) 
               | (0x4000U & vlSelf->top__DOT__de__DOT__srliw));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__srliw 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__srliw))) {
        ++(vlSymsp->__Vcoverage[2320]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srliw 
            = ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__srliw) 
               | (0x8000U & vlSelf->top__DOT__de__DOT__srliw));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__srliw 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__srliw))) {
        ++(vlSymsp->__Vcoverage[2321]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srliw 
            = ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srliw) 
               | (0x10000U & vlSelf->top__DOT__de__DOT__srliw));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__srliw 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__srliw))) {
        ++(vlSymsp->__Vcoverage[2322]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srliw 
            = ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srliw) 
               | (0x20000U & vlSelf->top__DOT__de__DOT__srliw));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__srliw 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__srliw))) {
        ++(vlSymsp->__Vcoverage[2323]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srliw 
            = ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srliw) 
               | (0x40000U & vlSelf->top__DOT__de__DOT__srliw));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__srliw 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__srliw))) {
        ++(vlSymsp->__Vcoverage[2324]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srliw 
            = ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srliw) 
               | (0x80000U & vlSelf->top__DOT__de__DOT__srliw));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__srliw 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__srliw))) {
        ++(vlSymsp->__Vcoverage[2325]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srliw 
            = ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srliw) 
               | (0x100000U & vlSelf->top__DOT__de__DOT__srliw));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__srliw 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__srliw))) {
        ++(vlSymsp->__Vcoverage[2326]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srliw 
            = ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srliw) 
               | (0x200000U & vlSelf->top__DOT__de__DOT__srliw));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__srliw 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__srliw))) {
        ++(vlSymsp->__Vcoverage[2327]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srliw 
            = ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srliw) 
               | (0x400000U & vlSelf->top__DOT__de__DOT__srliw));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__srliw 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__srliw))) {
        ++(vlSymsp->__Vcoverage[2328]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srliw 
            = ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srliw) 
               | (0x800000U & vlSelf->top__DOT__de__DOT__srliw));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__srliw 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__srliw))) {
        ++(vlSymsp->__Vcoverage[2329]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srliw 
            = ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srliw) 
               | (0x1000000U & vlSelf->top__DOT__de__DOT__srliw));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__srliw 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__srliw))) {
        ++(vlSymsp->__Vcoverage[2330]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srliw 
            = ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srliw) 
               | (0x2000000U & vlSelf->top__DOT__de__DOT__srliw));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__srliw 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__srliw))) {
        ++(vlSymsp->__Vcoverage[2331]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srliw 
            = ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srliw) 
               | (0x4000000U & vlSelf->top__DOT__de__DOT__srliw));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__srliw 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__srliw))) {
        ++(vlSymsp->__Vcoverage[2332]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srliw 
            = ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srliw) 
               | (0x8000000U & vlSelf->top__DOT__de__DOT__srliw));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__srliw 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__srliw))) {
        ++(vlSymsp->__Vcoverage[2333]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srliw 
            = ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srliw) 
               | (0x10000000U & vlSelf->top__DOT__de__DOT__srliw));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__srliw 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__srliw))) {
        ++(vlSymsp->__Vcoverage[2334]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srliw 
            = ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srliw) 
               | (0x20000000U & vlSelf->top__DOT__de__DOT__srliw));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__srliw 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__srliw))) {
        ++(vlSymsp->__Vcoverage[2335]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srliw 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srliw) 
               | (0x40000000U & vlSelf->top__DOT__de__DOT__srliw));
    }
    if (((vlSelf->top__DOT__de__DOT__srliw ^ vlSelf->top__DOT__de__DOT____Vtogcov__srliw) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2336]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srliw 
            = ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srliw) 
               | (0x80000000U & vlSelf->top__DOT__de__DOT__srliw));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__sraiw ^ vlSelf->top__DOT__de__DOT____Vtogcov__sraiw))) {
        ++(vlSymsp->__Vcoverage[2337]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sraiw 
            = ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__sraiw) 
               | (1U & vlSelf->top__DOT__de__DOT__sraiw));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__sraiw ^ vlSelf->top__DOT__de__DOT____Vtogcov__sraiw))) {
        ++(vlSymsp->__Vcoverage[2338]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sraiw 
            = ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__sraiw) 
               | (2U & vlSelf->top__DOT__de__DOT__sraiw));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__sraiw ^ vlSelf->top__DOT__de__DOT____Vtogcov__sraiw))) {
        ++(vlSymsp->__Vcoverage[2339]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sraiw 
            = ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__sraiw) 
               | (4U & vlSelf->top__DOT__de__DOT__sraiw));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__sraiw ^ vlSelf->top__DOT__de__DOT____Vtogcov__sraiw))) {
        ++(vlSymsp->__Vcoverage[2340]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sraiw 
            = ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__sraiw) 
               | (8U & vlSelf->top__DOT__de__DOT__sraiw));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__sraiw 
                  ^ vlSelf->top__DOT__de__DOT____Vtogcov__sraiw))) {
        ++(vlSymsp->__Vcoverage[2341]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sraiw 
            = ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__sraiw) 
               | (0x10U & vlSelf->top__DOT__de__DOT__sraiw));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__sraiw 
                  ^ vlSelf->top__DOT__de__DOT____Vtogcov__sraiw))) {
        ++(vlSymsp->__Vcoverage[2342]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sraiw 
            = ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__sraiw) 
               | (0x20U & vlSelf->top__DOT__de__DOT__sraiw));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__sraiw 
                  ^ vlSelf->top__DOT__de__DOT____Vtogcov__sraiw))) {
        ++(vlSymsp->__Vcoverage[2343]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sraiw 
            = ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__sraiw) 
               | (0x40U & vlSelf->top__DOT__de__DOT__sraiw));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__sraiw 
                  ^ vlSelf->top__DOT__de__DOT____Vtogcov__sraiw))) {
        ++(vlSymsp->__Vcoverage[2344]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sraiw 
            = ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__sraiw) 
               | (0x80U & vlSelf->top__DOT__de__DOT__sraiw));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__sraiw 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__sraiw))) {
        ++(vlSymsp->__Vcoverage[2345]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sraiw 
            = ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__sraiw) 
               | (0x100U & vlSelf->top__DOT__de__DOT__sraiw));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__sraiw 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__sraiw))) {
        ++(vlSymsp->__Vcoverage[2346]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sraiw 
            = ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__sraiw) 
               | (0x200U & vlSelf->top__DOT__de__DOT__sraiw));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__sraiw 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__sraiw))) {
        ++(vlSymsp->__Vcoverage[2347]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sraiw 
            = ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__sraiw) 
               | (0x400U & vlSelf->top__DOT__de__DOT__sraiw));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__sraiw 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__sraiw))) {
        ++(vlSymsp->__Vcoverage[2348]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sraiw 
            = ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__sraiw) 
               | (0x800U & vlSelf->top__DOT__de__DOT__sraiw));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__sraiw 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__sraiw))) {
        ++(vlSymsp->__Vcoverage[2349]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sraiw 
            = ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__sraiw) 
               | (0x1000U & vlSelf->top__DOT__de__DOT__sraiw));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__sraiw 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__sraiw))) {
        ++(vlSymsp->__Vcoverage[2350]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sraiw 
            = ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__sraiw) 
               | (0x2000U & vlSelf->top__DOT__de__DOT__sraiw));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__sraiw 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__sraiw))) {
        ++(vlSymsp->__Vcoverage[2351]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sraiw 
            = ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__sraiw) 
               | (0x4000U & vlSelf->top__DOT__de__DOT__sraiw));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__sraiw 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__sraiw))) {
        ++(vlSymsp->__Vcoverage[2352]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sraiw 
            = ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__sraiw) 
               | (0x8000U & vlSelf->top__DOT__de__DOT__sraiw));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__sraiw 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sraiw))) {
        ++(vlSymsp->__Vcoverage[2353]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sraiw 
            = ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sraiw) 
               | (0x10000U & vlSelf->top__DOT__de__DOT__sraiw));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__sraiw 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sraiw))) {
        ++(vlSymsp->__Vcoverage[2354]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sraiw 
            = ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sraiw) 
               | (0x20000U & vlSelf->top__DOT__de__DOT__sraiw));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__sraiw 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sraiw))) {
        ++(vlSymsp->__Vcoverage[2355]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sraiw 
            = ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sraiw) 
               | (0x40000U & vlSelf->top__DOT__de__DOT__sraiw));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__sraiw 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sraiw))) {
        ++(vlSymsp->__Vcoverage[2356]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sraiw 
            = ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sraiw) 
               | (0x80000U & vlSelf->top__DOT__de__DOT__sraiw));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__sraiw 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sraiw))) {
        ++(vlSymsp->__Vcoverage[2357]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sraiw 
            = ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sraiw) 
               | (0x100000U & vlSelf->top__DOT__de__DOT__sraiw));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__sraiw 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sraiw))) {
        ++(vlSymsp->__Vcoverage[2358]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sraiw 
            = ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sraiw) 
               | (0x200000U & vlSelf->top__DOT__de__DOT__sraiw));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__sraiw 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sraiw))) {
        ++(vlSymsp->__Vcoverage[2359]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sraiw 
            = ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sraiw) 
               | (0x400000U & vlSelf->top__DOT__de__DOT__sraiw));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__sraiw 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sraiw))) {
        ++(vlSymsp->__Vcoverage[2360]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sraiw 
            = ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sraiw) 
               | (0x800000U & vlSelf->top__DOT__de__DOT__sraiw));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__sraiw 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sraiw))) {
        ++(vlSymsp->__Vcoverage[2361]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sraiw 
            = ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sraiw) 
               | (0x1000000U & vlSelf->top__DOT__de__DOT__sraiw));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__sraiw 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sraiw))) {
        ++(vlSymsp->__Vcoverage[2362]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sraiw 
            = ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sraiw) 
               | (0x2000000U & vlSelf->top__DOT__de__DOT__sraiw));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__sraiw 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sraiw))) {
        ++(vlSymsp->__Vcoverage[2363]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sraiw 
            = ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sraiw) 
               | (0x4000000U & vlSelf->top__DOT__de__DOT__sraiw));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__sraiw 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sraiw))) {
        ++(vlSymsp->__Vcoverage[2364]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sraiw 
            = ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sraiw) 
               | (0x8000000U & vlSelf->top__DOT__de__DOT__sraiw));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__sraiw 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__sraiw))) {
        ++(vlSymsp->__Vcoverage[2365]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sraiw 
            = ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sraiw) 
               | (0x10000000U & vlSelf->top__DOT__de__DOT__sraiw));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__sraiw 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__sraiw))) {
        ++(vlSymsp->__Vcoverage[2366]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sraiw 
            = ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sraiw) 
               | (0x20000000U & vlSelf->top__DOT__de__DOT__sraiw));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__sraiw 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__sraiw))) {
        ++(vlSymsp->__Vcoverage[2367]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sraiw 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sraiw) 
               | (0x40000000U & vlSelf->top__DOT__de__DOT__sraiw));
    }
    if (((vlSelf->top__DOT__de__DOT__sraiw ^ vlSelf->top__DOT__de__DOT____Vtogcov__sraiw) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2368]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sraiw 
            = ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sraiw) 
               | (0x80000000U & vlSelf->top__DOT__de__DOT__sraiw));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__addw ^ vlSelf->top__DOT__de__DOT____Vtogcov__addw))) {
        ++(vlSymsp->__Vcoverage[2945]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addw 
            = ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__addw) 
               | (1U & vlSelf->top__DOT__de__DOT__addw));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__addw ^ vlSelf->top__DOT__de__DOT____Vtogcov__addw))) {
        ++(vlSymsp->__Vcoverage[2946]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addw 
            = ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__addw) 
               | (2U & vlSelf->top__DOT__de__DOT__addw));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__addw ^ vlSelf->top__DOT__de__DOT____Vtogcov__addw))) {
        ++(vlSymsp->__Vcoverage[2947]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addw 
            = ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__addw) 
               | (4U & vlSelf->top__DOT__de__DOT__addw));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__addw ^ vlSelf->top__DOT__de__DOT____Vtogcov__addw))) {
        ++(vlSymsp->__Vcoverage[2948]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addw 
            = ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__addw) 
               | (8U & vlSelf->top__DOT__de__DOT__addw));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__addw ^ vlSelf->top__DOT__de__DOT____Vtogcov__addw))) {
        ++(vlSymsp->__Vcoverage[2949]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addw 
            = ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__addw) 
               | (0x10U & vlSelf->top__DOT__de__DOT__addw));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__addw ^ vlSelf->top__DOT__de__DOT____Vtogcov__addw))) {
        ++(vlSymsp->__Vcoverage[2950]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addw 
            = ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__addw) 
               | (0x20U & vlSelf->top__DOT__de__DOT__addw));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__addw ^ vlSelf->top__DOT__de__DOT____Vtogcov__addw))) {
        ++(vlSymsp->__Vcoverage[2951]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addw 
            = ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__addw) 
               | (0x40U & vlSelf->top__DOT__de__DOT__addw));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__addw ^ vlSelf->top__DOT__de__DOT____Vtogcov__addw))) {
        ++(vlSymsp->__Vcoverage[2952]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addw 
            = ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__addw) 
               | (0x80U & vlSelf->top__DOT__de__DOT__addw));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__addw 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__addw))) {
        ++(vlSymsp->__Vcoverage[2953]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addw 
            = ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__addw) 
               | (0x100U & vlSelf->top__DOT__de__DOT__addw));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__addw 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__addw))) {
        ++(vlSymsp->__Vcoverage[2954]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addw 
            = ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__addw) 
               | (0x200U & vlSelf->top__DOT__de__DOT__addw));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__addw 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__addw))) {
        ++(vlSymsp->__Vcoverage[2955]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addw 
            = ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__addw) 
               | (0x400U & vlSelf->top__DOT__de__DOT__addw));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__addw 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__addw))) {
        ++(vlSymsp->__Vcoverage[2956]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addw 
            = ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__addw) 
               | (0x800U & vlSelf->top__DOT__de__DOT__addw));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__addw 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__addw))) {
        ++(vlSymsp->__Vcoverage[2957]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addw 
            = ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__addw) 
               | (0x1000U & vlSelf->top__DOT__de__DOT__addw));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__addw 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__addw))) {
        ++(vlSymsp->__Vcoverage[2958]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addw 
            = ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__addw) 
               | (0x2000U & vlSelf->top__DOT__de__DOT__addw));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__addw 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__addw))) {
        ++(vlSymsp->__Vcoverage[2959]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addw 
            = ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__addw) 
               | (0x4000U & vlSelf->top__DOT__de__DOT__addw));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__addw 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__addw))) {
        ++(vlSymsp->__Vcoverage[2960]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addw 
            = ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__addw) 
               | (0x8000U & vlSelf->top__DOT__de__DOT__addw));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__addw 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__addw))) {
        ++(vlSymsp->__Vcoverage[2961]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addw 
            = ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__addw) 
               | (0x10000U & vlSelf->top__DOT__de__DOT__addw));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__addw 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__addw))) {
        ++(vlSymsp->__Vcoverage[2962]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addw 
            = ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__addw) 
               | (0x20000U & vlSelf->top__DOT__de__DOT__addw));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__addw 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__addw))) {
        ++(vlSymsp->__Vcoverage[2963]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addw 
            = ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__addw) 
               | (0x40000U & vlSelf->top__DOT__de__DOT__addw));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__addw 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__addw))) {
        ++(vlSymsp->__Vcoverage[2964]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addw 
            = ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__addw) 
               | (0x80000U & vlSelf->top__DOT__de__DOT__addw));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__addw 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__addw))) {
        ++(vlSymsp->__Vcoverage[2965]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addw 
            = ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__addw) 
               | (0x100000U & vlSelf->top__DOT__de__DOT__addw));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__addw 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__addw))) {
        ++(vlSymsp->__Vcoverage[2966]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addw 
            = ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__addw) 
               | (0x200000U & vlSelf->top__DOT__de__DOT__addw));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__addw 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__addw))) {
        ++(vlSymsp->__Vcoverage[2967]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addw 
            = ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__addw) 
               | (0x400000U & vlSelf->top__DOT__de__DOT__addw));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__addw 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__addw))) {
        ++(vlSymsp->__Vcoverage[2968]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addw 
            = ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__addw) 
               | (0x800000U & vlSelf->top__DOT__de__DOT__addw));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__addw 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__addw))) {
        ++(vlSymsp->__Vcoverage[2969]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addw 
            = ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__addw) 
               | (0x1000000U & vlSelf->top__DOT__de__DOT__addw));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__addw 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__addw))) {
        ++(vlSymsp->__Vcoverage[2970]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addw 
            = ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__addw) 
               | (0x2000000U & vlSelf->top__DOT__de__DOT__addw));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__addw 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__addw))) {
        ++(vlSymsp->__Vcoverage[2971]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addw 
            = ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__addw) 
               | (0x4000000U & vlSelf->top__DOT__de__DOT__addw));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__addw 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__addw))) {
        ++(vlSymsp->__Vcoverage[2972]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addw 
            = ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__addw) 
               | (0x8000000U & vlSelf->top__DOT__de__DOT__addw));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__addw 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__addw))) {
        ++(vlSymsp->__Vcoverage[2973]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addw 
            = ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__addw) 
               | (0x10000000U & vlSelf->top__DOT__de__DOT__addw));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__addw 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__addw))) {
        ++(vlSymsp->__Vcoverage[2974]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addw 
            = ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__addw) 
               | (0x20000000U & vlSelf->top__DOT__de__DOT__addw));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__addw 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__addw))) {
        ++(vlSymsp->__Vcoverage[2975]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addw 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__addw) 
               | (0x40000000U & vlSelf->top__DOT__de__DOT__addw));
    }
    if (((vlSelf->top__DOT__de__DOT__addw ^ vlSelf->top__DOT__de__DOT____Vtogcov__addw) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2976]);
        vlSelf->top__DOT__de__DOT____Vtogcov__addw 
            = ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__addw) 
               | (0x80000000U & vlSelf->top__DOT__de__DOT__addw));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__subw ^ vlSelf->top__DOT__de__DOT____Vtogcov__subw))) {
        ++(vlSymsp->__Vcoverage[2977]);
        vlSelf->top__DOT__de__DOT____Vtogcov__subw 
            = ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__subw) 
               | (1U & vlSelf->top__DOT__de__DOT__subw));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__subw ^ vlSelf->top__DOT__de__DOT____Vtogcov__subw))) {
        ++(vlSymsp->__Vcoverage[2978]);
        vlSelf->top__DOT__de__DOT____Vtogcov__subw 
            = ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__subw) 
               | (2U & vlSelf->top__DOT__de__DOT__subw));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__subw ^ vlSelf->top__DOT__de__DOT____Vtogcov__subw))) {
        ++(vlSymsp->__Vcoverage[2979]);
        vlSelf->top__DOT__de__DOT____Vtogcov__subw 
            = ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__subw) 
               | (4U & vlSelf->top__DOT__de__DOT__subw));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__subw ^ vlSelf->top__DOT__de__DOT____Vtogcov__subw))) {
        ++(vlSymsp->__Vcoverage[2980]);
        vlSelf->top__DOT__de__DOT____Vtogcov__subw 
            = ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__subw) 
               | (8U & vlSelf->top__DOT__de__DOT__subw));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__subw ^ vlSelf->top__DOT__de__DOT____Vtogcov__subw))) {
        ++(vlSymsp->__Vcoverage[2981]);
        vlSelf->top__DOT__de__DOT____Vtogcov__subw 
            = ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__subw) 
               | (0x10U & vlSelf->top__DOT__de__DOT__subw));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__subw ^ vlSelf->top__DOT__de__DOT____Vtogcov__subw))) {
        ++(vlSymsp->__Vcoverage[2982]);
        vlSelf->top__DOT__de__DOT____Vtogcov__subw 
            = ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__subw) 
               | (0x20U & vlSelf->top__DOT__de__DOT__subw));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__subw ^ vlSelf->top__DOT__de__DOT____Vtogcov__subw))) {
        ++(vlSymsp->__Vcoverage[2983]);
        vlSelf->top__DOT__de__DOT____Vtogcov__subw 
            = ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__subw) 
               | (0x40U & vlSelf->top__DOT__de__DOT__subw));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__subw ^ vlSelf->top__DOT__de__DOT____Vtogcov__subw))) {
        ++(vlSymsp->__Vcoverage[2984]);
        vlSelf->top__DOT__de__DOT____Vtogcov__subw 
            = ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__subw) 
               | (0x80U & vlSelf->top__DOT__de__DOT__subw));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__subw 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__subw))) {
        ++(vlSymsp->__Vcoverage[2985]);
        vlSelf->top__DOT__de__DOT____Vtogcov__subw 
            = ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__subw) 
               | (0x100U & vlSelf->top__DOT__de__DOT__subw));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__subw 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__subw))) {
        ++(vlSymsp->__Vcoverage[2986]);
        vlSelf->top__DOT__de__DOT____Vtogcov__subw 
            = ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__subw) 
               | (0x200U & vlSelf->top__DOT__de__DOT__subw));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__subw 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__subw))) {
        ++(vlSymsp->__Vcoverage[2987]);
        vlSelf->top__DOT__de__DOT____Vtogcov__subw 
            = ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__subw) 
               | (0x400U & vlSelf->top__DOT__de__DOT__subw));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__subw 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__subw))) {
        ++(vlSymsp->__Vcoverage[2988]);
        vlSelf->top__DOT__de__DOT____Vtogcov__subw 
            = ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__subw) 
               | (0x800U & vlSelf->top__DOT__de__DOT__subw));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__subw 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__subw))) {
        ++(vlSymsp->__Vcoverage[2989]);
        vlSelf->top__DOT__de__DOT____Vtogcov__subw 
            = ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__subw) 
               | (0x1000U & vlSelf->top__DOT__de__DOT__subw));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__subw 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__subw))) {
        ++(vlSymsp->__Vcoverage[2990]);
        vlSelf->top__DOT__de__DOT____Vtogcov__subw 
            = ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__subw) 
               | (0x2000U & vlSelf->top__DOT__de__DOT__subw));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__subw 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__subw))) {
        ++(vlSymsp->__Vcoverage[2991]);
        vlSelf->top__DOT__de__DOT____Vtogcov__subw 
            = ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__subw) 
               | (0x4000U & vlSelf->top__DOT__de__DOT__subw));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__subw 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__subw))) {
        ++(vlSymsp->__Vcoverage[2992]);
        vlSelf->top__DOT__de__DOT____Vtogcov__subw 
            = ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__subw) 
               | (0x8000U & vlSelf->top__DOT__de__DOT__subw));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__subw 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__subw))) {
        ++(vlSymsp->__Vcoverage[2993]);
        vlSelf->top__DOT__de__DOT____Vtogcov__subw 
            = ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__subw) 
               | (0x10000U & vlSelf->top__DOT__de__DOT__subw));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__subw 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__subw))) {
        ++(vlSymsp->__Vcoverage[2994]);
        vlSelf->top__DOT__de__DOT____Vtogcov__subw 
            = ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__subw) 
               | (0x20000U & vlSelf->top__DOT__de__DOT__subw));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__subw 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__subw))) {
        ++(vlSymsp->__Vcoverage[2995]);
        vlSelf->top__DOT__de__DOT____Vtogcov__subw 
            = ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__subw) 
               | (0x40000U & vlSelf->top__DOT__de__DOT__subw));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__subw 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__subw))) {
        ++(vlSymsp->__Vcoverage[2996]);
        vlSelf->top__DOT__de__DOT____Vtogcov__subw 
            = ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__subw) 
               | (0x80000U & vlSelf->top__DOT__de__DOT__subw));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__subw 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__subw))) {
        ++(vlSymsp->__Vcoverage[2997]);
        vlSelf->top__DOT__de__DOT____Vtogcov__subw 
            = ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__subw) 
               | (0x100000U & vlSelf->top__DOT__de__DOT__subw));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__subw 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__subw))) {
        ++(vlSymsp->__Vcoverage[2998]);
        vlSelf->top__DOT__de__DOT____Vtogcov__subw 
            = ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__subw) 
               | (0x200000U & vlSelf->top__DOT__de__DOT__subw));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__subw 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__subw))) {
        ++(vlSymsp->__Vcoverage[2999]);
        vlSelf->top__DOT__de__DOT____Vtogcov__subw 
            = ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__subw) 
               | (0x400000U & vlSelf->top__DOT__de__DOT__subw));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__subw 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__subw))) {
        ++(vlSymsp->__Vcoverage[3000]);
        vlSelf->top__DOT__de__DOT____Vtogcov__subw 
            = ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__subw) 
               | (0x800000U & vlSelf->top__DOT__de__DOT__subw));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__subw 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__subw))) {
        ++(vlSymsp->__Vcoverage[3001]);
        vlSelf->top__DOT__de__DOT____Vtogcov__subw 
            = ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__subw) 
               | (0x1000000U & vlSelf->top__DOT__de__DOT__subw));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__subw 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__subw))) {
        ++(vlSymsp->__Vcoverage[3002]);
        vlSelf->top__DOT__de__DOT____Vtogcov__subw 
            = ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__subw) 
               | (0x2000000U & vlSelf->top__DOT__de__DOT__subw));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__subw 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__subw))) {
        ++(vlSymsp->__Vcoverage[3003]);
        vlSelf->top__DOT__de__DOT____Vtogcov__subw 
            = ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__subw) 
               | (0x4000000U & vlSelf->top__DOT__de__DOT__subw));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__subw 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__subw))) {
        ++(vlSymsp->__Vcoverage[3004]);
        vlSelf->top__DOT__de__DOT____Vtogcov__subw 
            = ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__subw) 
               | (0x8000000U & vlSelf->top__DOT__de__DOT__subw));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__subw 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__subw))) {
        ++(vlSymsp->__Vcoverage[3005]);
        vlSelf->top__DOT__de__DOT____Vtogcov__subw 
            = ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__subw) 
               | (0x10000000U & vlSelf->top__DOT__de__DOT__subw));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__subw 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__subw))) {
        ++(vlSymsp->__Vcoverage[3006]);
        vlSelf->top__DOT__de__DOT____Vtogcov__subw 
            = ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__subw) 
               | (0x20000000U & vlSelf->top__DOT__de__DOT__subw));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__subw 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__subw))) {
        ++(vlSymsp->__Vcoverage[3007]);
        vlSelf->top__DOT__de__DOT____Vtogcov__subw 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__subw) 
               | (0x40000000U & vlSelf->top__DOT__de__DOT__subw));
    }
    if (((vlSelf->top__DOT__de__DOT__subw ^ vlSelf->top__DOT__de__DOT____Vtogcov__subw) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3008]);
        vlSelf->top__DOT__de__DOT____Vtogcov__subw 
            = ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__subw) 
               | (0x80000000U & vlSelf->top__DOT__de__DOT__subw));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__mulw ^ vlSelf->top__DOT__de__DOT____Vtogcov__mulw))) {
        ++(vlSymsp->__Vcoverage[3009]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mulw 
            = ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__mulw) 
               | (1U & vlSelf->top__DOT__de__DOT__mulw));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__mulw ^ vlSelf->top__DOT__de__DOT____Vtogcov__mulw))) {
        ++(vlSymsp->__Vcoverage[3010]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mulw 
            = ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__mulw) 
               | (2U & vlSelf->top__DOT__de__DOT__mulw));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__mulw ^ vlSelf->top__DOT__de__DOT____Vtogcov__mulw))) {
        ++(vlSymsp->__Vcoverage[3011]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mulw 
            = ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__mulw) 
               | (4U & vlSelf->top__DOT__de__DOT__mulw));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__mulw ^ vlSelf->top__DOT__de__DOT____Vtogcov__mulw))) {
        ++(vlSymsp->__Vcoverage[3012]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mulw 
            = ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__mulw) 
               | (8U & vlSelf->top__DOT__de__DOT__mulw));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__mulw ^ vlSelf->top__DOT__de__DOT____Vtogcov__mulw))) {
        ++(vlSymsp->__Vcoverage[3013]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mulw 
            = ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__mulw) 
               | (0x10U & vlSelf->top__DOT__de__DOT__mulw));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__mulw ^ vlSelf->top__DOT__de__DOT____Vtogcov__mulw))) {
        ++(vlSymsp->__Vcoverage[3014]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mulw 
            = ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__mulw) 
               | (0x20U & vlSelf->top__DOT__de__DOT__mulw));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__mulw ^ vlSelf->top__DOT__de__DOT____Vtogcov__mulw))) {
        ++(vlSymsp->__Vcoverage[3015]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mulw 
            = ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__mulw) 
               | (0x40U & vlSelf->top__DOT__de__DOT__mulw));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__mulw ^ vlSelf->top__DOT__de__DOT____Vtogcov__mulw))) {
        ++(vlSymsp->__Vcoverage[3016]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mulw 
            = ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__mulw) 
               | (0x80U & vlSelf->top__DOT__de__DOT__mulw));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__mulw 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__mulw))) {
        ++(vlSymsp->__Vcoverage[3017]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mulw 
            = ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__mulw) 
               | (0x100U & vlSelf->top__DOT__de__DOT__mulw));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__mulw 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__mulw))) {
        ++(vlSymsp->__Vcoverage[3018]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mulw 
            = ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__mulw) 
               | (0x200U & vlSelf->top__DOT__de__DOT__mulw));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__mulw 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__mulw))) {
        ++(vlSymsp->__Vcoverage[3019]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mulw 
            = ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__mulw) 
               | (0x400U & vlSelf->top__DOT__de__DOT__mulw));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__mulw 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__mulw))) {
        ++(vlSymsp->__Vcoverage[3020]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mulw 
            = ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__mulw) 
               | (0x800U & vlSelf->top__DOT__de__DOT__mulw));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__mulw 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__mulw))) {
        ++(vlSymsp->__Vcoverage[3021]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mulw 
            = ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__mulw) 
               | (0x1000U & vlSelf->top__DOT__de__DOT__mulw));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__mulw 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__mulw))) {
        ++(vlSymsp->__Vcoverage[3022]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mulw 
            = ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__mulw) 
               | (0x2000U & vlSelf->top__DOT__de__DOT__mulw));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__mulw 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__mulw))) {
        ++(vlSymsp->__Vcoverage[3023]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mulw 
            = ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__mulw) 
               | (0x4000U & vlSelf->top__DOT__de__DOT__mulw));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__mulw 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__mulw))) {
        ++(vlSymsp->__Vcoverage[3024]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mulw 
            = ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__mulw) 
               | (0x8000U & vlSelf->top__DOT__de__DOT__mulw));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__mulw 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__mulw))) {
        ++(vlSymsp->__Vcoverage[3025]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mulw 
            = ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__mulw) 
               | (0x10000U & vlSelf->top__DOT__de__DOT__mulw));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__mulw 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__mulw))) {
        ++(vlSymsp->__Vcoverage[3026]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mulw 
            = ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__mulw) 
               | (0x20000U & vlSelf->top__DOT__de__DOT__mulw));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__mulw 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__mulw))) {
        ++(vlSymsp->__Vcoverage[3027]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mulw 
            = ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__mulw) 
               | (0x40000U & vlSelf->top__DOT__de__DOT__mulw));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__mulw 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__mulw))) {
        ++(vlSymsp->__Vcoverage[3028]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mulw 
            = ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__mulw) 
               | (0x80000U & vlSelf->top__DOT__de__DOT__mulw));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__mulw 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__mulw))) {
        ++(vlSymsp->__Vcoverage[3029]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mulw 
            = ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__mulw) 
               | (0x100000U & vlSelf->top__DOT__de__DOT__mulw));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__mulw 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__mulw))) {
        ++(vlSymsp->__Vcoverage[3030]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mulw 
            = ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__mulw) 
               | (0x200000U & vlSelf->top__DOT__de__DOT__mulw));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__mulw 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__mulw))) {
        ++(vlSymsp->__Vcoverage[3031]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mulw 
            = ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__mulw) 
               | (0x400000U & vlSelf->top__DOT__de__DOT__mulw));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__mulw 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__mulw))) {
        ++(vlSymsp->__Vcoverage[3032]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mulw 
            = ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__mulw) 
               | (0x800000U & vlSelf->top__DOT__de__DOT__mulw));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__mulw 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__mulw))) {
        ++(vlSymsp->__Vcoverage[3033]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mulw 
            = ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__mulw) 
               | (0x1000000U & vlSelf->top__DOT__de__DOT__mulw));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__mulw 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__mulw))) {
        ++(vlSymsp->__Vcoverage[3034]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mulw 
            = ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__mulw) 
               | (0x2000000U & vlSelf->top__DOT__de__DOT__mulw));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__mulw 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__mulw))) {
        ++(vlSymsp->__Vcoverage[3035]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mulw 
            = ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__mulw) 
               | (0x4000000U & vlSelf->top__DOT__de__DOT__mulw));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__mulw 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__mulw))) {
        ++(vlSymsp->__Vcoverage[3036]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mulw 
            = ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__mulw) 
               | (0x8000000U & vlSelf->top__DOT__de__DOT__mulw));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__mulw 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__mulw))) {
        ++(vlSymsp->__Vcoverage[3037]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mulw 
            = ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__mulw) 
               | (0x10000000U & vlSelf->top__DOT__de__DOT__mulw));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__mulw 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__mulw))) {
        ++(vlSymsp->__Vcoverage[3038]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mulw 
            = ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__mulw) 
               | (0x20000000U & vlSelf->top__DOT__de__DOT__mulw));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__mulw 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__mulw))) {
        ++(vlSymsp->__Vcoverage[3039]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mulw 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__mulw) 
               | (0x40000000U & vlSelf->top__DOT__de__DOT__mulw));
    }
    if (((vlSelf->top__DOT__de__DOT__mulw ^ vlSelf->top__DOT__de__DOT____Vtogcov__mulw) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3040]);
        vlSelf->top__DOT__de__DOT____Vtogcov__mulw 
            = ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__mulw) 
               | (0x80000000U & vlSelf->top__DOT__de__DOT__mulw));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__divw ^ vlSelf->top__DOT__de__DOT____Vtogcov__divw))) {
        ++(vlSymsp->__Vcoverage[3041]);
        vlSelf->top__DOT__de__DOT____Vtogcov__divw 
            = ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__divw) 
               | (1U & vlSelf->top__DOT__de__DOT__divw));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__divw ^ vlSelf->top__DOT__de__DOT____Vtogcov__divw))) {
        ++(vlSymsp->__Vcoverage[3042]);
        vlSelf->top__DOT__de__DOT____Vtogcov__divw 
            = ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__divw) 
               | (2U & vlSelf->top__DOT__de__DOT__divw));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__divw ^ vlSelf->top__DOT__de__DOT____Vtogcov__divw))) {
        ++(vlSymsp->__Vcoverage[3043]);
        vlSelf->top__DOT__de__DOT____Vtogcov__divw 
            = ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__divw) 
               | (4U & vlSelf->top__DOT__de__DOT__divw));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__divw ^ vlSelf->top__DOT__de__DOT____Vtogcov__divw))) {
        ++(vlSymsp->__Vcoverage[3044]);
        vlSelf->top__DOT__de__DOT____Vtogcov__divw 
            = ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__divw) 
               | (8U & vlSelf->top__DOT__de__DOT__divw));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__divw ^ vlSelf->top__DOT__de__DOT____Vtogcov__divw))) {
        ++(vlSymsp->__Vcoverage[3045]);
        vlSelf->top__DOT__de__DOT____Vtogcov__divw 
            = ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__divw) 
               | (0x10U & vlSelf->top__DOT__de__DOT__divw));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__divw ^ vlSelf->top__DOT__de__DOT____Vtogcov__divw))) {
        ++(vlSymsp->__Vcoverage[3046]);
        vlSelf->top__DOT__de__DOT____Vtogcov__divw 
            = ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__divw) 
               | (0x20U & vlSelf->top__DOT__de__DOT__divw));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__divw ^ vlSelf->top__DOT__de__DOT____Vtogcov__divw))) {
        ++(vlSymsp->__Vcoverage[3047]);
        vlSelf->top__DOT__de__DOT____Vtogcov__divw 
            = ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__divw) 
               | (0x40U & vlSelf->top__DOT__de__DOT__divw));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__divw ^ vlSelf->top__DOT__de__DOT____Vtogcov__divw))) {
        ++(vlSymsp->__Vcoverage[3048]);
        vlSelf->top__DOT__de__DOT____Vtogcov__divw 
            = ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__divw) 
               | (0x80U & vlSelf->top__DOT__de__DOT__divw));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__divw 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__divw))) {
        ++(vlSymsp->__Vcoverage[3049]);
        vlSelf->top__DOT__de__DOT____Vtogcov__divw 
            = ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__divw) 
               | (0x100U & vlSelf->top__DOT__de__DOT__divw));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__divw 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__divw))) {
        ++(vlSymsp->__Vcoverage[3050]);
        vlSelf->top__DOT__de__DOT____Vtogcov__divw 
            = ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__divw) 
               | (0x200U & vlSelf->top__DOT__de__DOT__divw));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__divw 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__divw))) {
        ++(vlSymsp->__Vcoverage[3051]);
        vlSelf->top__DOT__de__DOT____Vtogcov__divw 
            = ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__divw) 
               | (0x400U & vlSelf->top__DOT__de__DOT__divw));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__divw 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__divw))) {
        ++(vlSymsp->__Vcoverage[3052]);
        vlSelf->top__DOT__de__DOT____Vtogcov__divw 
            = ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__divw) 
               | (0x800U & vlSelf->top__DOT__de__DOT__divw));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__divw 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__divw))) {
        ++(vlSymsp->__Vcoverage[3053]);
        vlSelf->top__DOT__de__DOT____Vtogcov__divw 
            = ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__divw) 
               | (0x1000U & vlSelf->top__DOT__de__DOT__divw));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__divw 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__divw))) {
        ++(vlSymsp->__Vcoverage[3054]);
        vlSelf->top__DOT__de__DOT____Vtogcov__divw 
            = ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__divw) 
               | (0x2000U & vlSelf->top__DOT__de__DOT__divw));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__divw 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__divw))) {
        ++(vlSymsp->__Vcoverage[3055]);
        vlSelf->top__DOT__de__DOT____Vtogcov__divw 
            = ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__divw) 
               | (0x4000U & vlSelf->top__DOT__de__DOT__divw));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__divw 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__divw))) {
        ++(vlSymsp->__Vcoverage[3056]);
        vlSelf->top__DOT__de__DOT____Vtogcov__divw 
            = ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__divw) 
               | (0x8000U & vlSelf->top__DOT__de__DOT__divw));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__divw 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__divw))) {
        ++(vlSymsp->__Vcoverage[3057]);
        vlSelf->top__DOT__de__DOT____Vtogcov__divw 
            = ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__divw) 
               | (0x10000U & vlSelf->top__DOT__de__DOT__divw));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__divw 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__divw))) {
        ++(vlSymsp->__Vcoverage[3058]);
        vlSelf->top__DOT__de__DOT____Vtogcov__divw 
            = ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__divw) 
               | (0x20000U & vlSelf->top__DOT__de__DOT__divw));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__divw 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__divw))) {
        ++(vlSymsp->__Vcoverage[3059]);
        vlSelf->top__DOT__de__DOT____Vtogcov__divw 
            = ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__divw) 
               | (0x40000U & vlSelf->top__DOT__de__DOT__divw));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__divw 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__divw))) {
        ++(vlSymsp->__Vcoverage[3060]);
        vlSelf->top__DOT__de__DOT____Vtogcov__divw 
            = ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__divw) 
               | (0x80000U & vlSelf->top__DOT__de__DOT__divw));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__divw 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__divw))) {
        ++(vlSymsp->__Vcoverage[3061]);
        vlSelf->top__DOT__de__DOT____Vtogcov__divw 
            = ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__divw) 
               | (0x100000U & vlSelf->top__DOT__de__DOT__divw));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__divw 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__divw))) {
        ++(vlSymsp->__Vcoverage[3062]);
        vlSelf->top__DOT__de__DOT____Vtogcov__divw 
            = ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__divw) 
               | (0x200000U & vlSelf->top__DOT__de__DOT__divw));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__divw 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__divw))) {
        ++(vlSymsp->__Vcoverage[3063]);
        vlSelf->top__DOT__de__DOT____Vtogcov__divw 
            = ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__divw) 
               | (0x400000U & vlSelf->top__DOT__de__DOT__divw));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__divw 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__divw))) {
        ++(vlSymsp->__Vcoverage[3064]);
        vlSelf->top__DOT__de__DOT____Vtogcov__divw 
            = ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__divw) 
               | (0x800000U & vlSelf->top__DOT__de__DOT__divw));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__divw 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__divw))) {
        ++(vlSymsp->__Vcoverage[3065]);
        vlSelf->top__DOT__de__DOT____Vtogcov__divw 
            = ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__divw) 
               | (0x1000000U & vlSelf->top__DOT__de__DOT__divw));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__divw 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__divw))) {
        ++(vlSymsp->__Vcoverage[3066]);
        vlSelf->top__DOT__de__DOT____Vtogcov__divw 
            = ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__divw) 
               | (0x2000000U & vlSelf->top__DOT__de__DOT__divw));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__divw 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__divw))) {
        ++(vlSymsp->__Vcoverage[3067]);
        vlSelf->top__DOT__de__DOT____Vtogcov__divw 
            = ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__divw) 
               | (0x4000000U & vlSelf->top__DOT__de__DOT__divw));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__divw 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__divw))) {
        ++(vlSymsp->__Vcoverage[3068]);
        vlSelf->top__DOT__de__DOT____Vtogcov__divw 
            = ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__divw) 
               | (0x8000000U & vlSelf->top__DOT__de__DOT__divw));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__divw 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__divw))) {
        ++(vlSymsp->__Vcoverage[3069]);
        vlSelf->top__DOT__de__DOT____Vtogcov__divw 
            = ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__divw) 
               | (0x10000000U & vlSelf->top__DOT__de__DOT__divw));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__divw 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__divw))) {
        ++(vlSymsp->__Vcoverage[3070]);
        vlSelf->top__DOT__de__DOT____Vtogcov__divw 
            = ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__divw) 
               | (0x20000000U & vlSelf->top__DOT__de__DOT__divw));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__divw 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__divw))) {
        ++(vlSymsp->__Vcoverage[3071]);
        vlSelf->top__DOT__de__DOT____Vtogcov__divw 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__divw) 
               | (0x40000000U & vlSelf->top__DOT__de__DOT__divw));
    }
    if (((vlSelf->top__DOT__de__DOT__divw ^ vlSelf->top__DOT__de__DOT____Vtogcov__divw) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3072]);
        vlSelf->top__DOT__de__DOT____Vtogcov__divw 
            = ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__divw) 
               | (0x80000000U & vlSelf->top__DOT__de__DOT__divw));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__divuw ^ vlSelf->top__DOT__de__DOT____Vtogcov__divuw))) {
        ++(vlSymsp->__Vcoverage[3073]);
        vlSelf->top__DOT__de__DOT____Vtogcov__divuw 
            = ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__divuw) 
               | (1U & vlSelf->top__DOT__de__DOT__divuw));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__divuw ^ vlSelf->top__DOT__de__DOT____Vtogcov__divuw))) {
        ++(vlSymsp->__Vcoverage[3074]);
        vlSelf->top__DOT__de__DOT____Vtogcov__divuw 
            = ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__divuw) 
               | (2U & vlSelf->top__DOT__de__DOT__divuw));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__divuw ^ vlSelf->top__DOT__de__DOT____Vtogcov__divuw))) {
        ++(vlSymsp->__Vcoverage[3075]);
        vlSelf->top__DOT__de__DOT____Vtogcov__divuw 
            = ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__divuw) 
               | (4U & vlSelf->top__DOT__de__DOT__divuw));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__divuw ^ vlSelf->top__DOT__de__DOT____Vtogcov__divuw))) {
        ++(vlSymsp->__Vcoverage[3076]);
        vlSelf->top__DOT__de__DOT____Vtogcov__divuw 
            = ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__divuw) 
               | (8U & vlSelf->top__DOT__de__DOT__divuw));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__divuw 
                  ^ vlSelf->top__DOT__de__DOT____Vtogcov__divuw))) {
        ++(vlSymsp->__Vcoverage[3077]);
        vlSelf->top__DOT__de__DOT____Vtogcov__divuw 
            = ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__divuw) 
               | (0x10U & vlSelf->top__DOT__de__DOT__divuw));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__divuw 
                  ^ vlSelf->top__DOT__de__DOT____Vtogcov__divuw))) {
        ++(vlSymsp->__Vcoverage[3078]);
        vlSelf->top__DOT__de__DOT____Vtogcov__divuw 
            = ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__divuw) 
               | (0x20U & vlSelf->top__DOT__de__DOT__divuw));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__divuw 
                  ^ vlSelf->top__DOT__de__DOT____Vtogcov__divuw))) {
        ++(vlSymsp->__Vcoverage[3079]);
        vlSelf->top__DOT__de__DOT____Vtogcov__divuw 
            = ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__divuw) 
               | (0x40U & vlSelf->top__DOT__de__DOT__divuw));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__divuw 
                  ^ vlSelf->top__DOT__de__DOT____Vtogcov__divuw))) {
        ++(vlSymsp->__Vcoverage[3080]);
        vlSelf->top__DOT__de__DOT____Vtogcov__divuw 
            = ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__divuw) 
               | (0x80U & vlSelf->top__DOT__de__DOT__divuw));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__divuw 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__divuw))) {
        ++(vlSymsp->__Vcoverage[3081]);
        vlSelf->top__DOT__de__DOT____Vtogcov__divuw 
            = ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__divuw) 
               | (0x100U & vlSelf->top__DOT__de__DOT__divuw));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__divuw 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__divuw))) {
        ++(vlSymsp->__Vcoverage[3082]);
        vlSelf->top__DOT__de__DOT____Vtogcov__divuw 
            = ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__divuw) 
               | (0x200U & vlSelf->top__DOT__de__DOT__divuw));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__divuw 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__divuw))) {
        ++(vlSymsp->__Vcoverage[3083]);
        vlSelf->top__DOT__de__DOT____Vtogcov__divuw 
            = ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__divuw) 
               | (0x400U & vlSelf->top__DOT__de__DOT__divuw));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__divuw 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__divuw))) {
        ++(vlSymsp->__Vcoverage[3084]);
        vlSelf->top__DOT__de__DOT____Vtogcov__divuw 
            = ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__divuw) 
               | (0x800U & vlSelf->top__DOT__de__DOT__divuw));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__divuw 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__divuw))) {
        ++(vlSymsp->__Vcoverage[3085]);
        vlSelf->top__DOT__de__DOT____Vtogcov__divuw 
            = ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__divuw) 
               | (0x1000U & vlSelf->top__DOT__de__DOT__divuw));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__divuw 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__divuw))) {
        ++(vlSymsp->__Vcoverage[3086]);
        vlSelf->top__DOT__de__DOT____Vtogcov__divuw 
            = ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__divuw) 
               | (0x2000U & vlSelf->top__DOT__de__DOT__divuw));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__divuw 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__divuw))) {
        ++(vlSymsp->__Vcoverage[3087]);
        vlSelf->top__DOT__de__DOT____Vtogcov__divuw 
            = ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__divuw) 
               | (0x4000U & vlSelf->top__DOT__de__DOT__divuw));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__divuw 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__divuw))) {
        ++(vlSymsp->__Vcoverage[3088]);
        vlSelf->top__DOT__de__DOT____Vtogcov__divuw 
            = ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__divuw) 
               | (0x8000U & vlSelf->top__DOT__de__DOT__divuw));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__divuw 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__divuw))) {
        ++(vlSymsp->__Vcoverage[3089]);
        vlSelf->top__DOT__de__DOT____Vtogcov__divuw 
            = ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__divuw) 
               | (0x10000U & vlSelf->top__DOT__de__DOT__divuw));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__divuw 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__divuw))) {
        ++(vlSymsp->__Vcoverage[3090]);
        vlSelf->top__DOT__de__DOT____Vtogcov__divuw 
            = ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__divuw) 
               | (0x20000U & vlSelf->top__DOT__de__DOT__divuw));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__divuw 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__divuw))) {
        ++(vlSymsp->__Vcoverage[3091]);
        vlSelf->top__DOT__de__DOT____Vtogcov__divuw 
            = ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__divuw) 
               | (0x40000U & vlSelf->top__DOT__de__DOT__divuw));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__divuw 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__divuw))) {
        ++(vlSymsp->__Vcoverage[3092]);
        vlSelf->top__DOT__de__DOT____Vtogcov__divuw 
            = ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__divuw) 
               | (0x80000U & vlSelf->top__DOT__de__DOT__divuw));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__divuw 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__divuw))) {
        ++(vlSymsp->__Vcoverage[3093]);
        vlSelf->top__DOT__de__DOT____Vtogcov__divuw 
            = ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__divuw) 
               | (0x100000U & vlSelf->top__DOT__de__DOT__divuw));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__divuw 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__divuw))) {
        ++(vlSymsp->__Vcoverage[3094]);
        vlSelf->top__DOT__de__DOT____Vtogcov__divuw 
            = ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__divuw) 
               | (0x200000U & vlSelf->top__DOT__de__DOT__divuw));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__divuw 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__divuw))) {
        ++(vlSymsp->__Vcoverage[3095]);
        vlSelf->top__DOT__de__DOT____Vtogcov__divuw 
            = ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__divuw) 
               | (0x400000U & vlSelf->top__DOT__de__DOT__divuw));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__divuw 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__divuw))) {
        ++(vlSymsp->__Vcoverage[3096]);
        vlSelf->top__DOT__de__DOT____Vtogcov__divuw 
            = ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__divuw) 
               | (0x800000U & vlSelf->top__DOT__de__DOT__divuw));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__divuw 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__divuw))) {
        ++(vlSymsp->__Vcoverage[3097]);
        vlSelf->top__DOT__de__DOT____Vtogcov__divuw 
            = ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__divuw) 
               | (0x1000000U & vlSelf->top__DOT__de__DOT__divuw));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__divuw 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__divuw))) {
        ++(vlSymsp->__Vcoverage[3098]);
        vlSelf->top__DOT__de__DOT____Vtogcov__divuw 
            = ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__divuw) 
               | (0x2000000U & vlSelf->top__DOT__de__DOT__divuw));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__divuw 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__divuw))) {
        ++(vlSymsp->__Vcoverage[3099]);
        vlSelf->top__DOT__de__DOT____Vtogcov__divuw 
            = ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__divuw) 
               | (0x4000000U & vlSelf->top__DOT__de__DOT__divuw));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__divuw 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__divuw))) {
        ++(vlSymsp->__Vcoverage[3100]);
        vlSelf->top__DOT__de__DOT____Vtogcov__divuw 
            = ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__divuw) 
               | (0x8000000U & vlSelf->top__DOT__de__DOT__divuw));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__divuw 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__divuw))) {
        ++(vlSymsp->__Vcoverage[3101]);
        vlSelf->top__DOT__de__DOT____Vtogcov__divuw 
            = ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__divuw) 
               | (0x10000000U & vlSelf->top__DOT__de__DOT__divuw));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__divuw 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__divuw))) {
        ++(vlSymsp->__Vcoverage[3102]);
        vlSelf->top__DOT__de__DOT____Vtogcov__divuw 
            = ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__divuw) 
               | (0x20000000U & vlSelf->top__DOT__de__DOT__divuw));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__divuw 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__divuw))) {
        ++(vlSymsp->__Vcoverage[3103]);
        vlSelf->top__DOT__de__DOT____Vtogcov__divuw 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__divuw) 
               | (0x40000000U & vlSelf->top__DOT__de__DOT__divuw));
    }
    if (((vlSelf->top__DOT__de__DOT__divuw ^ vlSelf->top__DOT__de__DOT____Vtogcov__divuw) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3104]);
        vlSelf->top__DOT__de__DOT____Vtogcov__divuw 
            = ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__divuw) 
               | (0x80000000U & vlSelf->top__DOT__de__DOT__divuw));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__div ^ vlSelf->top__DOT__de__DOT____Vtogcov__div))) {
        ++(vlSymsp->__Vcoverage[3105]);
        vlSelf->top__DOT__de__DOT____Vtogcov__div = 
            ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__div) 
             | (1U & vlSelf->top__DOT__de__DOT__div));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__div ^ vlSelf->top__DOT__de__DOT____Vtogcov__div))) {
        ++(vlSymsp->__Vcoverage[3106]);
        vlSelf->top__DOT__de__DOT____Vtogcov__div = 
            ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__div) 
             | (2U & vlSelf->top__DOT__de__DOT__div));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__div ^ vlSelf->top__DOT__de__DOT____Vtogcov__div))) {
        ++(vlSymsp->__Vcoverage[3107]);
        vlSelf->top__DOT__de__DOT____Vtogcov__div = 
            ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__div) 
             | (4U & vlSelf->top__DOT__de__DOT__div));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__div ^ vlSelf->top__DOT__de__DOT____Vtogcov__div))) {
        ++(vlSymsp->__Vcoverage[3108]);
        vlSelf->top__DOT__de__DOT____Vtogcov__div = 
            ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__div) 
             | (8U & vlSelf->top__DOT__de__DOT__div));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__div ^ vlSelf->top__DOT__de__DOT____Vtogcov__div))) {
        ++(vlSymsp->__Vcoverage[3109]);
        vlSelf->top__DOT__de__DOT____Vtogcov__div = 
            ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__div) 
             | (0x10U & vlSelf->top__DOT__de__DOT__div));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__div ^ vlSelf->top__DOT__de__DOT____Vtogcov__div))) {
        ++(vlSymsp->__Vcoverage[3110]);
        vlSelf->top__DOT__de__DOT____Vtogcov__div = 
            ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__div) 
             | (0x20U & vlSelf->top__DOT__de__DOT__div));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__div ^ vlSelf->top__DOT__de__DOT____Vtogcov__div))) {
        ++(vlSymsp->__Vcoverage[3111]);
        vlSelf->top__DOT__de__DOT____Vtogcov__div = 
            ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__div) 
             | (0x40U & vlSelf->top__DOT__de__DOT__div));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__div ^ vlSelf->top__DOT__de__DOT____Vtogcov__div))) {
        ++(vlSymsp->__Vcoverage[3112]);
        vlSelf->top__DOT__de__DOT____Vtogcov__div = 
            ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__div) 
             | (0x80U & vlSelf->top__DOT__de__DOT__div));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__div ^ vlSelf->top__DOT__de__DOT____Vtogcov__div))) {
        ++(vlSymsp->__Vcoverage[3113]);
        vlSelf->top__DOT__de__DOT____Vtogcov__div = 
            ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__div) 
             | (0x100U & vlSelf->top__DOT__de__DOT__div));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__div ^ vlSelf->top__DOT__de__DOT____Vtogcov__div))) {
        ++(vlSymsp->__Vcoverage[3114]);
        vlSelf->top__DOT__de__DOT____Vtogcov__div = 
            ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__div) 
             | (0x200U & vlSelf->top__DOT__de__DOT__div));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__div ^ vlSelf->top__DOT__de__DOT____Vtogcov__div))) {
        ++(vlSymsp->__Vcoverage[3115]);
        vlSelf->top__DOT__de__DOT____Vtogcov__div = 
            ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__div) 
             | (0x400U & vlSelf->top__DOT__de__DOT__div));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__div ^ vlSelf->top__DOT__de__DOT____Vtogcov__div))) {
        ++(vlSymsp->__Vcoverage[3116]);
        vlSelf->top__DOT__de__DOT____Vtogcov__div = 
            ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__div) 
             | (0x800U & vlSelf->top__DOT__de__DOT__div));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__div 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__div))) {
        ++(vlSymsp->__Vcoverage[3117]);
        vlSelf->top__DOT__de__DOT____Vtogcov__div = 
            ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__div) 
             | (0x1000U & vlSelf->top__DOT__de__DOT__div));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__div 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__div))) {
        ++(vlSymsp->__Vcoverage[3118]);
        vlSelf->top__DOT__de__DOT____Vtogcov__div = 
            ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__div) 
             | (0x2000U & vlSelf->top__DOT__de__DOT__div));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__div 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__div))) {
        ++(vlSymsp->__Vcoverage[3119]);
        vlSelf->top__DOT__de__DOT____Vtogcov__div = 
            ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__div) 
             | (0x4000U & vlSelf->top__DOT__de__DOT__div));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__div 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__div))) {
        ++(vlSymsp->__Vcoverage[3120]);
        vlSelf->top__DOT__de__DOT____Vtogcov__div = 
            ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__div) 
             | (0x8000U & vlSelf->top__DOT__de__DOT__div));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__div 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__div))) {
        ++(vlSymsp->__Vcoverage[3121]);
        vlSelf->top__DOT__de__DOT____Vtogcov__div = 
            ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__div) 
             | (0x10000U & vlSelf->top__DOT__de__DOT__div));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__div 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__div))) {
        ++(vlSymsp->__Vcoverage[3122]);
        vlSelf->top__DOT__de__DOT____Vtogcov__div = 
            ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__div) 
             | (0x20000U & vlSelf->top__DOT__de__DOT__div));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__div 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__div))) {
        ++(vlSymsp->__Vcoverage[3123]);
        vlSelf->top__DOT__de__DOT____Vtogcov__div = 
            ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__div) 
             | (0x40000U & vlSelf->top__DOT__de__DOT__div));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__div 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__div))) {
        ++(vlSymsp->__Vcoverage[3124]);
        vlSelf->top__DOT__de__DOT____Vtogcov__div = 
            ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__div) 
             | (0x80000U & vlSelf->top__DOT__de__DOT__div));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__div 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__div))) {
        ++(vlSymsp->__Vcoverage[3125]);
        vlSelf->top__DOT__de__DOT____Vtogcov__div = 
            ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__div) 
             | (0x100000U & vlSelf->top__DOT__de__DOT__div));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__div 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__div))) {
        ++(vlSymsp->__Vcoverage[3126]);
        vlSelf->top__DOT__de__DOT____Vtogcov__div = 
            ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__div) 
             | (0x200000U & vlSelf->top__DOT__de__DOT__div));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__div 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__div))) {
        ++(vlSymsp->__Vcoverage[3127]);
        vlSelf->top__DOT__de__DOT____Vtogcov__div = 
            ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__div) 
             | (0x400000U & vlSelf->top__DOT__de__DOT__div));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__div 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__div))) {
        ++(vlSymsp->__Vcoverage[3128]);
        vlSelf->top__DOT__de__DOT____Vtogcov__div = 
            ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__div) 
             | (0x800000U & vlSelf->top__DOT__de__DOT__div));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__div 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__div))) {
        ++(vlSymsp->__Vcoverage[3129]);
        vlSelf->top__DOT__de__DOT____Vtogcov__div = 
            ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__div) 
             | (0x1000000U & vlSelf->top__DOT__de__DOT__div));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__div 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__div))) {
        ++(vlSymsp->__Vcoverage[3130]);
        vlSelf->top__DOT__de__DOT____Vtogcov__div = 
            ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__div) 
             | (0x2000000U & vlSelf->top__DOT__de__DOT__div));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__div 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__div))) {
        ++(vlSymsp->__Vcoverage[3131]);
        vlSelf->top__DOT__de__DOT____Vtogcov__div = 
            ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__div) 
             | (0x4000000U & vlSelf->top__DOT__de__DOT__div));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__div 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__div))) {
        ++(vlSymsp->__Vcoverage[3132]);
        vlSelf->top__DOT__de__DOT____Vtogcov__div = 
            ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__div) 
             | (0x8000000U & vlSelf->top__DOT__de__DOT__div));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__div 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__div))) {
        ++(vlSymsp->__Vcoverage[3133]);
        vlSelf->top__DOT__de__DOT____Vtogcov__div = 
            ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__div) 
             | (0x10000000U & vlSelf->top__DOT__de__DOT__div));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__div 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__div))) {
        ++(vlSymsp->__Vcoverage[3134]);
        vlSelf->top__DOT__de__DOT____Vtogcov__div = 
            ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__div) 
             | (0x20000000U & vlSelf->top__DOT__de__DOT__div));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__div 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__div))) {
        ++(vlSymsp->__Vcoverage[3135]);
        vlSelf->top__DOT__de__DOT____Vtogcov__div = 
            ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__div) 
             | (0x40000000U & vlSelf->top__DOT__de__DOT__div));
    }
    if (((vlSelf->top__DOT__de__DOT__div ^ vlSelf->top__DOT__de__DOT____Vtogcov__div) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3136]);
        vlSelf->top__DOT__de__DOT____Vtogcov__div = 
            ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__div) 
             | (0x80000000U & vlSelf->top__DOT__de__DOT__div));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__remw ^ vlSelf->top__DOT__de__DOT____Vtogcov__remw))) {
        ++(vlSymsp->__Vcoverage[3137]);
        vlSelf->top__DOT__de__DOT____Vtogcov__remw 
            = ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__remw) 
               | (1U & vlSelf->top__DOT__de__DOT__remw));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__remw ^ vlSelf->top__DOT__de__DOT____Vtogcov__remw))) {
        ++(vlSymsp->__Vcoverage[3138]);
        vlSelf->top__DOT__de__DOT____Vtogcov__remw 
            = ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__remw) 
               | (2U & vlSelf->top__DOT__de__DOT__remw));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__remw ^ vlSelf->top__DOT__de__DOT____Vtogcov__remw))) {
        ++(vlSymsp->__Vcoverage[3139]);
        vlSelf->top__DOT__de__DOT____Vtogcov__remw 
            = ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__remw) 
               | (4U & vlSelf->top__DOT__de__DOT__remw));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__remw ^ vlSelf->top__DOT__de__DOT____Vtogcov__remw))) {
        ++(vlSymsp->__Vcoverage[3140]);
        vlSelf->top__DOT__de__DOT____Vtogcov__remw 
            = ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__remw) 
               | (8U & vlSelf->top__DOT__de__DOT__remw));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__remw ^ vlSelf->top__DOT__de__DOT____Vtogcov__remw))) {
        ++(vlSymsp->__Vcoverage[3141]);
        vlSelf->top__DOT__de__DOT____Vtogcov__remw 
            = ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__remw) 
               | (0x10U & vlSelf->top__DOT__de__DOT__remw));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__remw ^ vlSelf->top__DOT__de__DOT____Vtogcov__remw))) {
        ++(vlSymsp->__Vcoverage[3142]);
        vlSelf->top__DOT__de__DOT____Vtogcov__remw 
            = ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__remw) 
               | (0x20U & vlSelf->top__DOT__de__DOT__remw));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__remw ^ vlSelf->top__DOT__de__DOT____Vtogcov__remw))) {
        ++(vlSymsp->__Vcoverage[3143]);
        vlSelf->top__DOT__de__DOT____Vtogcov__remw 
            = ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__remw) 
               | (0x40U & vlSelf->top__DOT__de__DOT__remw));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__remw ^ vlSelf->top__DOT__de__DOT____Vtogcov__remw))) {
        ++(vlSymsp->__Vcoverage[3144]);
        vlSelf->top__DOT__de__DOT____Vtogcov__remw 
            = ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__remw) 
               | (0x80U & vlSelf->top__DOT__de__DOT__remw));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__remw 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__remw))) {
        ++(vlSymsp->__Vcoverage[3145]);
        vlSelf->top__DOT__de__DOT____Vtogcov__remw 
            = ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__remw) 
               | (0x100U & vlSelf->top__DOT__de__DOT__remw));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__remw 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__remw))) {
        ++(vlSymsp->__Vcoverage[3146]);
        vlSelf->top__DOT__de__DOT____Vtogcov__remw 
            = ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__remw) 
               | (0x200U & vlSelf->top__DOT__de__DOT__remw));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__remw 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__remw))) {
        ++(vlSymsp->__Vcoverage[3147]);
        vlSelf->top__DOT__de__DOT____Vtogcov__remw 
            = ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__remw) 
               | (0x400U & vlSelf->top__DOT__de__DOT__remw));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__remw 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__remw))) {
        ++(vlSymsp->__Vcoverage[3148]);
        vlSelf->top__DOT__de__DOT____Vtogcov__remw 
            = ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__remw) 
               | (0x800U & vlSelf->top__DOT__de__DOT__remw));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__remw 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__remw))) {
        ++(vlSymsp->__Vcoverage[3149]);
        vlSelf->top__DOT__de__DOT____Vtogcov__remw 
            = ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__remw) 
               | (0x1000U & vlSelf->top__DOT__de__DOT__remw));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__remw 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__remw))) {
        ++(vlSymsp->__Vcoverage[3150]);
        vlSelf->top__DOT__de__DOT____Vtogcov__remw 
            = ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__remw) 
               | (0x2000U & vlSelf->top__DOT__de__DOT__remw));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__remw 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__remw))) {
        ++(vlSymsp->__Vcoverage[3151]);
        vlSelf->top__DOT__de__DOT____Vtogcov__remw 
            = ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__remw) 
               | (0x4000U & vlSelf->top__DOT__de__DOT__remw));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__remw 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__remw))) {
        ++(vlSymsp->__Vcoverage[3152]);
        vlSelf->top__DOT__de__DOT____Vtogcov__remw 
            = ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__remw) 
               | (0x8000U & vlSelf->top__DOT__de__DOT__remw));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__remw 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__remw))) {
        ++(vlSymsp->__Vcoverage[3153]);
        vlSelf->top__DOT__de__DOT____Vtogcov__remw 
            = ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__remw) 
               | (0x10000U & vlSelf->top__DOT__de__DOT__remw));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__remw 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__remw))) {
        ++(vlSymsp->__Vcoverage[3154]);
        vlSelf->top__DOT__de__DOT____Vtogcov__remw 
            = ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__remw) 
               | (0x20000U & vlSelf->top__DOT__de__DOT__remw));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__remw 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__remw))) {
        ++(vlSymsp->__Vcoverage[3155]);
        vlSelf->top__DOT__de__DOT____Vtogcov__remw 
            = ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__remw) 
               | (0x40000U & vlSelf->top__DOT__de__DOT__remw));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__remw 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__remw))) {
        ++(vlSymsp->__Vcoverage[3156]);
        vlSelf->top__DOT__de__DOT____Vtogcov__remw 
            = ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__remw) 
               | (0x80000U & vlSelf->top__DOT__de__DOT__remw));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__remw 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__remw))) {
        ++(vlSymsp->__Vcoverage[3157]);
        vlSelf->top__DOT__de__DOT____Vtogcov__remw 
            = ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__remw) 
               | (0x100000U & vlSelf->top__DOT__de__DOT__remw));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__remw 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__remw))) {
        ++(vlSymsp->__Vcoverage[3158]);
        vlSelf->top__DOT__de__DOT____Vtogcov__remw 
            = ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__remw) 
               | (0x200000U & vlSelf->top__DOT__de__DOT__remw));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__remw 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__remw))) {
        ++(vlSymsp->__Vcoverage[3159]);
        vlSelf->top__DOT__de__DOT____Vtogcov__remw 
            = ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__remw) 
               | (0x400000U & vlSelf->top__DOT__de__DOT__remw));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__remw 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__remw))) {
        ++(vlSymsp->__Vcoverage[3160]);
        vlSelf->top__DOT__de__DOT____Vtogcov__remw 
            = ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__remw) 
               | (0x800000U & vlSelf->top__DOT__de__DOT__remw));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__remw 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__remw))) {
        ++(vlSymsp->__Vcoverage[3161]);
        vlSelf->top__DOT__de__DOT____Vtogcov__remw 
            = ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__remw) 
               | (0x1000000U & vlSelf->top__DOT__de__DOT__remw));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__remw 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__remw))) {
        ++(vlSymsp->__Vcoverage[3162]);
        vlSelf->top__DOT__de__DOT____Vtogcov__remw 
            = ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__remw) 
               | (0x2000000U & vlSelf->top__DOT__de__DOT__remw));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__remw 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__remw))) {
        ++(vlSymsp->__Vcoverage[3163]);
        vlSelf->top__DOT__de__DOT____Vtogcov__remw 
            = ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__remw) 
               | (0x4000000U & vlSelf->top__DOT__de__DOT__remw));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__remw 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__remw))) {
        ++(vlSymsp->__Vcoverage[3164]);
        vlSelf->top__DOT__de__DOT____Vtogcov__remw 
            = ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__remw) 
               | (0x8000000U & vlSelf->top__DOT__de__DOT__remw));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__remw 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__remw))) {
        ++(vlSymsp->__Vcoverage[3165]);
        vlSelf->top__DOT__de__DOT____Vtogcov__remw 
            = ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__remw) 
               | (0x10000000U & vlSelf->top__DOT__de__DOT__remw));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__remw 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__remw))) {
        ++(vlSymsp->__Vcoverage[3166]);
        vlSelf->top__DOT__de__DOT____Vtogcov__remw 
            = ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__remw) 
               | (0x20000000U & vlSelf->top__DOT__de__DOT__remw));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__remw 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__remw))) {
        ++(vlSymsp->__Vcoverage[3167]);
        vlSelf->top__DOT__de__DOT____Vtogcov__remw 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__remw) 
               | (0x40000000U & vlSelf->top__DOT__de__DOT__remw));
    }
    if (((vlSelf->top__DOT__de__DOT__remw ^ vlSelf->top__DOT__de__DOT____Vtogcov__remw) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3168]);
        vlSelf->top__DOT__de__DOT____Vtogcov__remw 
            = ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__remw) 
               | (0x80000000U & vlSelf->top__DOT__de__DOT__remw));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__Add ^ vlSelf->top__DOT__de__DOT____Vtogcov__Add))) {
        ++(vlSymsp->__Vcoverage[3169]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Add = 
            ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__Add) 
             | (1U & vlSelf->top__DOT__de__DOT__Add));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__Add ^ vlSelf->top__DOT__de__DOT____Vtogcov__Add))) {
        ++(vlSymsp->__Vcoverage[3170]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Add = 
            ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__Add) 
             | (2U & vlSelf->top__DOT__de__DOT__Add));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__Add ^ vlSelf->top__DOT__de__DOT____Vtogcov__Add))) {
        ++(vlSymsp->__Vcoverage[3171]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Add = 
            ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__Add) 
             | (4U & vlSelf->top__DOT__de__DOT__Add));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__Add ^ vlSelf->top__DOT__de__DOT____Vtogcov__Add))) {
        ++(vlSymsp->__Vcoverage[3172]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Add = 
            ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__Add) 
             | (8U & vlSelf->top__DOT__de__DOT__Add));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__Add ^ vlSelf->top__DOT__de__DOT____Vtogcov__Add))) {
        ++(vlSymsp->__Vcoverage[3173]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Add = 
            ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__Add) 
             | (0x10U & vlSelf->top__DOT__de__DOT__Add));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__Add ^ vlSelf->top__DOT__de__DOT____Vtogcov__Add))) {
        ++(vlSymsp->__Vcoverage[3174]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Add = 
            ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__Add) 
             | (0x20U & vlSelf->top__DOT__de__DOT__Add));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__Add ^ vlSelf->top__DOT__de__DOT____Vtogcov__Add))) {
        ++(vlSymsp->__Vcoverage[3175]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Add = 
            ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__Add) 
             | (0x40U & vlSelf->top__DOT__de__DOT__Add));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__Add ^ vlSelf->top__DOT__de__DOT____Vtogcov__Add))) {
        ++(vlSymsp->__Vcoverage[3176]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Add = 
            ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__Add) 
             | (0x80U & vlSelf->top__DOT__de__DOT__Add));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__Add ^ vlSelf->top__DOT__de__DOT____Vtogcov__Add))) {
        ++(vlSymsp->__Vcoverage[3177]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Add = 
            ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__Add) 
             | (0x100U & vlSelf->top__DOT__de__DOT__Add));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__Add ^ vlSelf->top__DOT__de__DOT____Vtogcov__Add))) {
        ++(vlSymsp->__Vcoverage[3178]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Add = 
            ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__Add) 
             | (0x200U & vlSelf->top__DOT__de__DOT__Add));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__Add ^ vlSelf->top__DOT__de__DOT____Vtogcov__Add))) {
        ++(vlSymsp->__Vcoverage[3179]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Add = 
            ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__Add) 
             | (0x400U & vlSelf->top__DOT__de__DOT__Add));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__Add ^ vlSelf->top__DOT__de__DOT____Vtogcov__Add))) {
        ++(vlSymsp->__Vcoverage[3180]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Add = 
            ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__Add) 
             | (0x800U & vlSelf->top__DOT__de__DOT__Add));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__Add 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__Add))) {
        ++(vlSymsp->__Vcoverage[3181]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Add = 
            ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__Add) 
             | (0x1000U & vlSelf->top__DOT__de__DOT__Add));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__Add 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__Add))) {
        ++(vlSymsp->__Vcoverage[3182]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Add = 
            ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__Add) 
             | (0x2000U & vlSelf->top__DOT__de__DOT__Add));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__Add 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__Add))) {
        ++(vlSymsp->__Vcoverage[3183]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Add = 
            ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__Add) 
             | (0x4000U & vlSelf->top__DOT__de__DOT__Add));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__Add 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__Add))) {
        ++(vlSymsp->__Vcoverage[3184]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Add = 
            ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__Add) 
             | (0x8000U & vlSelf->top__DOT__de__DOT__Add));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__Add 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__Add))) {
        ++(vlSymsp->__Vcoverage[3185]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Add = 
            ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Add) 
             | (0x10000U & vlSelf->top__DOT__de__DOT__Add));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__Add 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__Add))) {
        ++(vlSymsp->__Vcoverage[3186]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Add = 
            ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Add) 
             | (0x20000U & vlSelf->top__DOT__de__DOT__Add));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__Add 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__Add))) {
        ++(vlSymsp->__Vcoverage[3187]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Add = 
            ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Add) 
             | (0x40000U & vlSelf->top__DOT__de__DOT__Add));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__Add 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__Add))) {
        ++(vlSymsp->__Vcoverage[3188]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Add = 
            ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Add) 
             | (0x80000U & vlSelf->top__DOT__de__DOT__Add));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__Add 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__Add))) {
        ++(vlSymsp->__Vcoverage[3189]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Add = 
            ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Add) 
             | (0x100000U & vlSelf->top__DOT__de__DOT__Add));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__Add 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__Add))) {
        ++(vlSymsp->__Vcoverage[3190]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Add = 
            ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Add) 
             | (0x200000U & vlSelf->top__DOT__de__DOT__Add));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__Add 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__Add))) {
        ++(vlSymsp->__Vcoverage[3191]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Add = 
            ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Add) 
             | (0x400000U & vlSelf->top__DOT__de__DOT__Add));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__Add 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__Add))) {
        ++(vlSymsp->__Vcoverage[3192]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Add = 
            ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Add) 
             | (0x800000U & vlSelf->top__DOT__de__DOT__Add));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__Add 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__Add))) {
        ++(vlSymsp->__Vcoverage[3193]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Add = 
            ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Add) 
             | (0x1000000U & vlSelf->top__DOT__de__DOT__Add));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__Add 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__Add))) {
        ++(vlSymsp->__Vcoverage[3194]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Add = 
            ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Add) 
             | (0x2000000U & vlSelf->top__DOT__de__DOT__Add));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__Add 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__Add))) {
        ++(vlSymsp->__Vcoverage[3195]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Add = 
            ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Add) 
             | (0x4000000U & vlSelf->top__DOT__de__DOT__Add));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__Add 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__Add))) {
        ++(vlSymsp->__Vcoverage[3196]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Add = 
            ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Add) 
             | (0x8000000U & vlSelf->top__DOT__de__DOT__Add));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__Add 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__Add))) {
        ++(vlSymsp->__Vcoverage[3197]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Add = 
            ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Add) 
             | (0x10000000U & vlSelf->top__DOT__de__DOT__Add));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__Add 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__Add))) {
        ++(vlSymsp->__Vcoverage[3198]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Add = 
            ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Add) 
             | (0x20000000U & vlSelf->top__DOT__de__DOT__Add));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__Add 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__Add))) {
        ++(vlSymsp->__Vcoverage[3199]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Add = 
            ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Add) 
             | (0x40000000U & vlSelf->top__DOT__de__DOT__Add));
    }
    if (((vlSelf->top__DOT__de__DOT__Add ^ vlSelf->top__DOT__de__DOT____Vtogcov__Add) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3200]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Add = 
            ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Add) 
             | (0x80000000U & vlSelf->top__DOT__de__DOT__Add));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__Mul ^ vlSelf->top__DOT__de__DOT____Vtogcov__Mul))) {
        ++(vlSymsp->__Vcoverage[3201]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Mul = 
            ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__Mul) 
             | (1U & vlSelf->top__DOT__de__DOT__Mul));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__Mul ^ vlSelf->top__DOT__de__DOT____Vtogcov__Mul))) {
        ++(vlSymsp->__Vcoverage[3202]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Mul = 
            ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__Mul) 
             | (2U & vlSelf->top__DOT__de__DOT__Mul));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__Mul ^ vlSelf->top__DOT__de__DOT____Vtogcov__Mul))) {
        ++(vlSymsp->__Vcoverage[3203]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Mul = 
            ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__Mul) 
             | (4U & vlSelf->top__DOT__de__DOT__Mul));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__Mul ^ vlSelf->top__DOT__de__DOT____Vtogcov__Mul))) {
        ++(vlSymsp->__Vcoverage[3204]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Mul = 
            ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__Mul) 
             | (8U & vlSelf->top__DOT__de__DOT__Mul));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__Mul ^ vlSelf->top__DOT__de__DOT____Vtogcov__Mul))) {
        ++(vlSymsp->__Vcoverage[3205]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Mul = 
            ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__Mul) 
             | (0x10U & vlSelf->top__DOT__de__DOT__Mul));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__Mul ^ vlSelf->top__DOT__de__DOT____Vtogcov__Mul))) {
        ++(vlSymsp->__Vcoverage[3206]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Mul = 
            ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__Mul) 
             | (0x20U & vlSelf->top__DOT__de__DOT__Mul));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__Mul ^ vlSelf->top__DOT__de__DOT____Vtogcov__Mul))) {
        ++(vlSymsp->__Vcoverage[3207]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Mul = 
            ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__Mul) 
             | (0x40U & vlSelf->top__DOT__de__DOT__Mul));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__Mul ^ vlSelf->top__DOT__de__DOT____Vtogcov__Mul))) {
        ++(vlSymsp->__Vcoverage[3208]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Mul = 
            ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__Mul) 
             | (0x80U & vlSelf->top__DOT__de__DOT__Mul));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__Mul ^ vlSelf->top__DOT__de__DOT____Vtogcov__Mul))) {
        ++(vlSymsp->__Vcoverage[3209]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Mul = 
            ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__Mul) 
             | (0x100U & vlSelf->top__DOT__de__DOT__Mul));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__Mul ^ vlSelf->top__DOT__de__DOT____Vtogcov__Mul))) {
        ++(vlSymsp->__Vcoverage[3210]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Mul = 
            ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__Mul) 
             | (0x200U & vlSelf->top__DOT__de__DOT__Mul));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__Mul ^ vlSelf->top__DOT__de__DOT____Vtogcov__Mul))) {
        ++(vlSymsp->__Vcoverage[3211]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Mul = 
            ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__Mul) 
             | (0x400U & vlSelf->top__DOT__de__DOT__Mul));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__Mul ^ vlSelf->top__DOT__de__DOT____Vtogcov__Mul))) {
        ++(vlSymsp->__Vcoverage[3212]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Mul = 
            ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__Mul) 
             | (0x800U & vlSelf->top__DOT__de__DOT__Mul));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__Mul 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__Mul))) {
        ++(vlSymsp->__Vcoverage[3213]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Mul = 
            ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__Mul) 
             | (0x1000U & vlSelf->top__DOT__de__DOT__Mul));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__Mul 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__Mul))) {
        ++(vlSymsp->__Vcoverage[3214]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Mul = 
            ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__Mul) 
             | (0x2000U & vlSelf->top__DOT__de__DOT__Mul));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__Mul 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__Mul))) {
        ++(vlSymsp->__Vcoverage[3215]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Mul = 
            ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__Mul) 
             | (0x4000U & vlSelf->top__DOT__de__DOT__Mul));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__Mul 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__Mul))) {
        ++(vlSymsp->__Vcoverage[3216]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Mul = 
            ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__Mul) 
             | (0x8000U & vlSelf->top__DOT__de__DOT__Mul));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__Mul 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__Mul))) {
        ++(vlSymsp->__Vcoverage[3217]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Mul = 
            ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Mul) 
             | (0x10000U & vlSelf->top__DOT__de__DOT__Mul));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__Mul 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__Mul))) {
        ++(vlSymsp->__Vcoverage[3218]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Mul = 
            ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Mul) 
             | (0x20000U & vlSelf->top__DOT__de__DOT__Mul));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__Mul 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__Mul))) {
        ++(vlSymsp->__Vcoverage[3219]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Mul = 
            ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Mul) 
             | (0x40000U & vlSelf->top__DOT__de__DOT__Mul));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__Mul 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__Mul))) {
        ++(vlSymsp->__Vcoverage[3220]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Mul = 
            ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Mul) 
             | (0x80000U & vlSelf->top__DOT__de__DOT__Mul));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__Mul 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__Mul))) {
        ++(vlSymsp->__Vcoverage[3221]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Mul = 
            ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Mul) 
             | (0x100000U & vlSelf->top__DOT__de__DOT__Mul));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__Mul 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__Mul))) {
        ++(vlSymsp->__Vcoverage[3222]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Mul = 
            ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Mul) 
             | (0x200000U & vlSelf->top__DOT__de__DOT__Mul));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__Mul 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__Mul))) {
        ++(vlSymsp->__Vcoverage[3223]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Mul = 
            ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Mul) 
             | (0x400000U & vlSelf->top__DOT__de__DOT__Mul));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__Mul 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__Mul))) {
        ++(vlSymsp->__Vcoverage[3224]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Mul = 
            ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Mul) 
             | (0x800000U & vlSelf->top__DOT__de__DOT__Mul));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__Mul 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__Mul))) {
        ++(vlSymsp->__Vcoverage[3225]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Mul = 
            ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Mul) 
             | (0x1000000U & vlSelf->top__DOT__de__DOT__Mul));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__Mul 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__Mul))) {
        ++(vlSymsp->__Vcoverage[3226]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Mul = 
            ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Mul) 
             | (0x2000000U & vlSelf->top__DOT__de__DOT__Mul));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__Mul 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__Mul))) {
        ++(vlSymsp->__Vcoverage[3227]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Mul = 
            ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Mul) 
             | (0x4000000U & vlSelf->top__DOT__de__DOT__Mul));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__Mul 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__Mul))) {
        ++(vlSymsp->__Vcoverage[3228]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Mul = 
            ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Mul) 
             | (0x8000000U & vlSelf->top__DOT__de__DOT__Mul));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__Mul 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__Mul))) {
        ++(vlSymsp->__Vcoverage[3229]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Mul = 
            ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Mul) 
             | (0x10000000U & vlSelf->top__DOT__de__DOT__Mul));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__Mul 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__Mul))) {
        ++(vlSymsp->__Vcoverage[3230]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Mul = 
            ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Mul) 
             | (0x20000000U & vlSelf->top__DOT__de__DOT__Mul));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__Mul 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__Mul))) {
        ++(vlSymsp->__Vcoverage[3231]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Mul = 
            ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Mul) 
             | (0x40000000U & vlSelf->top__DOT__de__DOT__Mul));
    }
    if (((vlSelf->top__DOT__de__DOT__Mul ^ vlSelf->top__DOT__de__DOT____Vtogcov__Mul) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3232]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Mul = 
            ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Mul) 
             | (0x80000000U & vlSelf->top__DOT__de__DOT__Mul));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__And ^ vlSelf->top__DOT__de__DOT____Vtogcov__And))) {
        ++(vlSymsp->__Vcoverage[3233]);
        vlSelf->top__DOT__de__DOT____Vtogcov__And = 
            ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__And) 
             | (1U & vlSelf->top__DOT__de__DOT__And));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__And ^ vlSelf->top__DOT__de__DOT____Vtogcov__And))) {
        ++(vlSymsp->__Vcoverage[3234]);
        vlSelf->top__DOT__de__DOT____Vtogcov__And = 
            ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__And) 
             | (2U & vlSelf->top__DOT__de__DOT__And));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__And ^ vlSelf->top__DOT__de__DOT____Vtogcov__And))) {
        ++(vlSymsp->__Vcoverage[3235]);
        vlSelf->top__DOT__de__DOT____Vtogcov__And = 
            ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__And) 
             | (4U & vlSelf->top__DOT__de__DOT__And));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__And ^ vlSelf->top__DOT__de__DOT____Vtogcov__And))) {
        ++(vlSymsp->__Vcoverage[3236]);
        vlSelf->top__DOT__de__DOT____Vtogcov__And = 
            ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__And) 
             | (8U & vlSelf->top__DOT__de__DOT__And));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__And ^ vlSelf->top__DOT__de__DOT____Vtogcov__And))) {
        ++(vlSymsp->__Vcoverage[3237]);
        vlSelf->top__DOT__de__DOT____Vtogcov__And = 
            ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__And) 
             | (0x10U & vlSelf->top__DOT__de__DOT__And));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__And ^ vlSelf->top__DOT__de__DOT____Vtogcov__And))) {
        ++(vlSymsp->__Vcoverage[3238]);
        vlSelf->top__DOT__de__DOT____Vtogcov__And = 
            ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__And) 
             | (0x20U & vlSelf->top__DOT__de__DOT__And));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__And ^ vlSelf->top__DOT__de__DOT____Vtogcov__And))) {
        ++(vlSymsp->__Vcoverage[3239]);
        vlSelf->top__DOT__de__DOT____Vtogcov__And = 
            ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__And) 
             | (0x40U & vlSelf->top__DOT__de__DOT__And));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__And ^ vlSelf->top__DOT__de__DOT____Vtogcov__And))) {
        ++(vlSymsp->__Vcoverage[3240]);
        vlSelf->top__DOT__de__DOT____Vtogcov__And = 
            ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__And) 
             | (0x80U & vlSelf->top__DOT__de__DOT__And));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__And ^ vlSelf->top__DOT__de__DOT____Vtogcov__And))) {
        ++(vlSymsp->__Vcoverage[3241]);
        vlSelf->top__DOT__de__DOT____Vtogcov__And = 
            ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__And) 
             | (0x100U & vlSelf->top__DOT__de__DOT__And));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__And ^ vlSelf->top__DOT__de__DOT____Vtogcov__And))) {
        ++(vlSymsp->__Vcoverage[3242]);
        vlSelf->top__DOT__de__DOT____Vtogcov__And = 
            ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__And) 
             | (0x200U & vlSelf->top__DOT__de__DOT__And));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__And ^ vlSelf->top__DOT__de__DOT____Vtogcov__And))) {
        ++(vlSymsp->__Vcoverage[3243]);
        vlSelf->top__DOT__de__DOT____Vtogcov__And = 
            ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__And) 
             | (0x400U & vlSelf->top__DOT__de__DOT__And));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__And ^ vlSelf->top__DOT__de__DOT____Vtogcov__And))) {
        ++(vlSymsp->__Vcoverage[3244]);
        vlSelf->top__DOT__de__DOT____Vtogcov__And = 
            ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__And) 
             | (0x800U & vlSelf->top__DOT__de__DOT__And));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__And 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__And))) {
        ++(vlSymsp->__Vcoverage[3245]);
        vlSelf->top__DOT__de__DOT____Vtogcov__And = 
            ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__And) 
             | (0x1000U & vlSelf->top__DOT__de__DOT__And));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__And 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__And))) {
        ++(vlSymsp->__Vcoverage[3246]);
        vlSelf->top__DOT__de__DOT____Vtogcov__And = 
            ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__And) 
             | (0x2000U & vlSelf->top__DOT__de__DOT__And));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__And 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__And))) {
        ++(vlSymsp->__Vcoverage[3247]);
        vlSelf->top__DOT__de__DOT____Vtogcov__And = 
            ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__And) 
             | (0x4000U & vlSelf->top__DOT__de__DOT__And));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__And 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__And))) {
        ++(vlSymsp->__Vcoverage[3248]);
        vlSelf->top__DOT__de__DOT____Vtogcov__And = 
            ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__And) 
             | (0x8000U & vlSelf->top__DOT__de__DOT__And));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__And 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__And))) {
        ++(vlSymsp->__Vcoverage[3249]);
        vlSelf->top__DOT__de__DOT____Vtogcov__And = 
            ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__And) 
             | (0x10000U & vlSelf->top__DOT__de__DOT__And));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__And 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__And))) {
        ++(vlSymsp->__Vcoverage[3250]);
        vlSelf->top__DOT__de__DOT____Vtogcov__And = 
            ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__And) 
             | (0x20000U & vlSelf->top__DOT__de__DOT__And));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__And 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__And))) {
        ++(vlSymsp->__Vcoverage[3251]);
        vlSelf->top__DOT__de__DOT____Vtogcov__And = 
            ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__And) 
             | (0x40000U & vlSelf->top__DOT__de__DOT__And));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__And 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__And))) {
        ++(vlSymsp->__Vcoverage[3252]);
        vlSelf->top__DOT__de__DOT____Vtogcov__And = 
            ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__And) 
             | (0x80000U & vlSelf->top__DOT__de__DOT__And));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__And 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__And))) {
        ++(vlSymsp->__Vcoverage[3253]);
        vlSelf->top__DOT__de__DOT____Vtogcov__And = 
            ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__And) 
             | (0x100000U & vlSelf->top__DOT__de__DOT__And));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__And 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__And))) {
        ++(vlSymsp->__Vcoverage[3254]);
        vlSelf->top__DOT__de__DOT____Vtogcov__And = 
            ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__And) 
             | (0x200000U & vlSelf->top__DOT__de__DOT__And));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__And 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__And))) {
        ++(vlSymsp->__Vcoverage[3255]);
        vlSelf->top__DOT__de__DOT____Vtogcov__And = 
            ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__And) 
             | (0x400000U & vlSelf->top__DOT__de__DOT__And));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__And 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__And))) {
        ++(vlSymsp->__Vcoverage[3256]);
        vlSelf->top__DOT__de__DOT____Vtogcov__And = 
            ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__And) 
             | (0x800000U & vlSelf->top__DOT__de__DOT__And));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__And 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__And))) {
        ++(vlSymsp->__Vcoverage[3257]);
        vlSelf->top__DOT__de__DOT____Vtogcov__And = 
            ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__And) 
             | (0x1000000U & vlSelf->top__DOT__de__DOT__And));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__And 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__And))) {
        ++(vlSymsp->__Vcoverage[3258]);
        vlSelf->top__DOT__de__DOT____Vtogcov__And = 
            ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__And) 
             | (0x2000000U & vlSelf->top__DOT__de__DOT__And));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__And 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__And))) {
        ++(vlSymsp->__Vcoverage[3259]);
        vlSelf->top__DOT__de__DOT____Vtogcov__And = 
            ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__And) 
             | (0x4000000U & vlSelf->top__DOT__de__DOT__And));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__And 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__And))) {
        ++(vlSymsp->__Vcoverage[3260]);
        vlSelf->top__DOT__de__DOT____Vtogcov__And = 
            ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__And) 
             | (0x8000000U & vlSelf->top__DOT__de__DOT__And));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__And 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__And))) {
        ++(vlSymsp->__Vcoverage[3261]);
        vlSelf->top__DOT__de__DOT____Vtogcov__And = 
            ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__And) 
             | (0x10000000U & vlSelf->top__DOT__de__DOT__And));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__And 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__And))) {
        ++(vlSymsp->__Vcoverage[3262]);
        vlSelf->top__DOT__de__DOT____Vtogcov__And = 
            ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__And) 
             | (0x20000000U & vlSelf->top__DOT__de__DOT__And));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__And 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__And))) {
        ++(vlSymsp->__Vcoverage[3263]);
        vlSelf->top__DOT__de__DOT____Vtogcov__And = 
            ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__And) 
             | (0x40000000U & vlSelf->top__DOT__de__DOT__And));
    }
    if (((vlSelf->top__DOT__de__DOT__And ^ vlSelf->top__DOT__de__DOT____Vtogcov__And) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3264]);
        vlSelf->top__DOT__de__DOT____Vtogcov__And = 
            ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__And) 
             | (0x80000000U & vlSelf->top__DOT__de__DOT__And));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__Xor ^ vlSelf->top__DOT__de__DOT____Vtogcov__Xor))) {
        ++(vlSymsp->__Vcoverage[3265]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Xor = 
            ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__Xor) 
             | (1U & vlSelf->top__DOT__de__DOT__Xor));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__Xor ^ vlSelf->top__DOT__de__DOT____Vtogcov__Xor))) {
        ++(vlSymsp->__Vcoverage[3266]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Xor = 
            ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__Xor) 
             | (2U & vlSelf->top__DOT__de__DOT__Xor));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__Xor ^ vlSelf->top__DOT__de__DOT____Vtogcov__Xor))) {
        ++(vlSymsp->__Vcoverage[3267]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Xor = 
            ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__Xor) 
             | (4U & vlSelf->top__DOT__de__DOT__Xor));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__Xor ^ vlSelf->top__DOT__de__DOT____Vtogcov__Xor))) {
        ++(vlSymsp->__Vcoverage[3268]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Xor = 
            ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__Xor) 
             | (8U & vlSelf->top__DOT__de__DOT__Xor));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__Xor ^ vlSelf->top__DOT__de__DOT____Vtogcov__Xor))) {
        ++(vlSymsp->__Vcoverage[3269]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Xor = 
            ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__Xor) 
             | (0x10U & vlSelf->top__DOT__de__DOT__Xor));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__Xor ^ vlSelf->top__DOT__de__DOT____Vtogcov__Xor))) {
        ++(vlSymsp->__Vcoverage[3270]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Xor = 
            ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__Xor) 
             | (0x20U & vlSelf->top__DOT__de__DOT__Xor));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__Xor ^ vlSelf->top__DOT__de__DOT____Vtogcov__Xor))) {
        ++(vlSymsp->__Vcoverage[3271]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Xor = 
            ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__Xor) 
             | (0x40U & vlSelf->top__DOT__de__DOT__Xor));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__Xor ^ vlSelf->top__DOT__de__DOT____Vtogcov__Xor))) {
        ++(vlSymsp->__Vcoverage[3272]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Xor = 
            ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__Xor) 
             | (0x80U & vlSelf->top__DOT__de__DOT__Xor));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__Xor ^ vlSelf->top__DOT__de__DOT____Vtogcov__Xor))) {
        ++(vlSymsp->__Vcoverage[3273]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Xor = 
            ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__Xor) 
             | (0x100U & vlSelf->top__DOT__de__DOT__Xor));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__Xor ^ vlSelf->top__DOT__de__DOT____Vtogcov__Xor))) {
        ++(vlSymsp->__Vcoverage[3274]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Xor = 
            ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__Xor) 
             | (0x200U & vlSelf->top__DOT__de__DOT__Xor));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__Xor ^ vlSelf->top__DOT__de__DOT____Vtogcov__Xor))) {
        ++(vlSymsp->__Vcoverage[3275]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Xor = 
            ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__Xor) 
             | (0x400U & vlSelf->top__DOT__de__DOT__Xor));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__Xor ^ vlSelf->top__DOT__de__DOT____Vtogcov__Xor))) {
        ++(vlSymsp->__Vcoverage[3276]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Xor = 
            ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__Xor) 
             | (0x800U & vlSelf->top__DOT__de__DOT__Xor));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__Xor 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__Xor))) {
        ++(vlSymsp->__Vcoverage[3277]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Xor = 
            ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__Xor) 
             | (0x1000U & vlSelf->top__DOT__de__DOT__Xor));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__Xor 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__Xor))) {
        ++(vlSymsp->__Vcoverage[3278]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Xor = 
            ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__Xor) 
             | (0x2000U & vlSelf->top__DOT__de__DOT__Xor));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__Xor 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__Xor))) {
        ++(vlSymsp->__Vcoverage[3279]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Xor = 
            ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__Xor) 
             | (0x4000U & vlSelf->top__DOT__de__DOT__Xor));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__Xor 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__Xor))) {
        ++(vlSymsp->__Vcoverage[3280]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Xor = 
            ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__Xor) 
             | (0x8000U & vlSelf->top__DOT__de__DOT__Xor));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__Xor 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__Xor))) {
        ++(vlSymsp->__Vcoverage[3281]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Xor = 
            ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Xor) 
             | (0x10000U & vlSelf->top__DOT__de__DOT__Xor));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__Xor 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__Xor))) {
        ++(vlSymsp->__Vcoverage[3282]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Xor = 
            ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Xor) 
             | (0x20000U & vlSelf->top__DOT__de__DOT__Xor));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__Xor 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__Xor))) {
        ++(vlSymsp->__Vcoverage[3283]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Xor = 
            ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Xor) 
             | (0x40000U & vlSelf->top__DOT__de__DOT__Xor));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__Xor 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__Xor))) {
        ++(vlSymsp->__Vcoverage[3284]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Xor = 
            ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Xor) 
             | (0x80000U & vlSelf->top__DOT__de__DOT__Xor));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__Xor 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__Xor))) {
        ++(vlSymsp->__Vcoverage[3285]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Xor = 
            ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Xor) 
             | (0x100000U & vlSelf->top__DOT__de__DOT__Xor));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__Xor 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__Xor))) {
        ++(vlSymsp->__Vcoverage[3286]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Xor = 
            ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Xor) 
             | (0x200000U & vlSelf->top__DOT__de__DOT__Xor));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__Xor 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__Xor))) {
        ++(vlSymsp->__Vcoverage[3287]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Xor = 
            ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Xor) 
             | (0x400000U & vlSelf->top__DOT__de__DOT__Xor));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__Xor 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__Xor))) {
        ++(vlSymsp->__Vcoverage[3288]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Xor = 
            ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Xor) 
             | (0x800000U & vlSelf->top__DOT__de__DOT__Xor));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__Xor 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__Xor))) {
        ++(vlSymsp->__Vcoverage[3289]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Xor = 
            ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Xor) 
             | (0x1000000U & vlSelf->top__DOT__de__DOT__Xor));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__Xor 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__Xor))) {
        ++(vlSymsp->__Vcoverage[3290]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Xor = 
            ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Xor) 
             | (0x2000000U & vlSelf->top__DOT__de__DOT__Xor));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__Xor 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__Xor))) {
        ++(vlSymsp->__Vcoverage[3291]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Xor = 
            ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Xor) 
             | (0x4000000U & vlSelf->top__DOT__de__DOT__Xor));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__Xor 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__Xor))) {
        ++(vlSymsp->__Vcoverage[3292]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Xor = 
            ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Xor) 
             | (0x8000000U & vlSelf->top__DOT__de__DOT__Xor));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__Xor 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__Xor))) {
        ++(vlSymsp->__Vcoverage[3293]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Xor = 
            ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Xor) 
             | (0x10000000U & vlSelf->top__DOT__de__DOT__Xor));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__Xor 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__Xor))) {
        ++(vlSymsp->__Vcoverage[3294]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Xor = 
            ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Xor) 
             | (0x20000000U & vlSelf->top__DOT__de__DOT__Xor));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__Xor 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__Xor))) {
        ++(vlSymsp->__Vcoverage[3295]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Xor = 
            ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Xor) 
             | (0x40000000U & vlSelf->top__DOT__de__DOT__Xor));
    }
    if (((vlSelf->top__DOT__de__DOT__Xor ^ vlSelf->top__DOT__de__DOT____Vtogcov__Xor) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3296]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Xor = 
            ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Xor) 
             | (0x80000000U & vlSelf->top__DOT__de__DOT__Xor));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__Or ^ vlSelf->top__DOT__de__DOT____Vtogcov__Or))) {
        ++(vlSymsp->__Vcoverage[3297]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Or = 
            ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__Or) 
             | (1U & vlSelf->top__DOT__de__DOT__Or));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__Or ^ vlSelf->top__DOT__de__DOT____Vtogcov__Or))) {
        ++(vlSymsp->__Vcoverage[3298]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Or = 
            ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__Or) 
             | (2U & vlSelf->top__DOT__de__DOT__Or));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__Or ^ vlSelf->top__DOT__de__DOT____Vtogcov__Or))) {
        ++(vlSymsp->__Vcoverage[3299]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Or = 
            ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__Or) 
             | (4U & vlSelf->top__DOT__de__DOT__Or));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__Or ^ vlSelf->top__DOT__de__DOT____Vtogcov__Or))) {
        ++(vlSymsp->__Vcoverage[3300]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Or = 
            ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__Or) 
             | (8U & vlSelf->top__DOT__de__DOT__Or));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__Or ^ vlSelf->top__DOT__de__DOT____Vtogcov__Or))) {
        ++(vlSymsp->__Vcoverage[3301]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Or = 
            ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__Or) 
             | (0x10U & vlSelf->top__DOT__de__DOT__Or));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__Or ^ vlSelf->top__DOT__de__DOT____Vtogcov__Or))) {
        ++(vlSymsp->__Vcoverage[3302]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Or = 
            ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__Or) 
             | (0x20U & vlSelf->top__DOT__de__DOT__Or));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__Or ^ vlSelf->top__DOT__de__DOT____Vtogcov__Or))) {
        ++(vlSymsp->__Vcoverage[3303]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Or = 
            ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__Or) 
             | (0x40U & vlSelf->top__DOT__de__DOT__Or));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__Or ^ vlSelf->top__DOT__de__DOT____Vtogcov__Or))) {
        ++(vlSymsp->__Vcoverage[3304]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Or = 
            ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__Or) 
             | (0x80U & vlSelf->top__DOT__de__DOT__Or));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__Or ^ vlSelf->top__DOT__de__DOT____Vtogcov__Or))) {
        ++(vlSymsp->__Vcoverage[3305]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Or = 
            ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__Or) 
             | (0x100U & vlSelf->top__DOT__de__DOT__Or));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__Or ^ vlSelf->top__DOT__de__DOT____Vtogcov__Or))) {
        ++(vlSymsp->__Vcoverage[3306]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Or = 
            ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__Or) 
             | (0x200U & vlSelf->top__DOT__de__DOT__Or));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__Or ^ vlSelf->top__DOT__de__DOT____Vtogcov__Or))) {
        ++(vlSymsp->__Vcoverage[3307]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Or = 
            ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__Or) 
             | (0x400U & vlSelf->top__DOT__de__DOT__Or));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__Or ^ vlSelf->top__DOT__de__DOT____Vtogcov__Or))) {
        ++(vlSymsp->__Vcoverage[3308]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Or = 
            ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__Or) 
             | (0x800U & vlSelf->top__DOT__de__DOT__Or));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__Or ^ vlSelf->top__DOT__de__DOT____Vtogcov__Or))) {
        ++(vlSymsp->__Vcoverage[3309]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Or = 
            ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__Or) 
             | (0x1000U & vlSelf->top__DOT__de__DOT__Or));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__Or ^ vlSelf->top__DOT__de__DOT____Vtogcov__Or))) {
        ++(vlSymsp->__Vcoverage[3310]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Or = 
            ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__Or) 
             | (0x2000U & vlSelf->top__DOT__de__DOT__Or));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__Or ^ vlSelf->top__DOT__de__DOT____Vtogcov__Or))) {
        ++(vlSymsp->__Vcoverage[3311]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Or = 
            ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__Or) 
             | (0x4000U & vlSelf->top__DOT__de__DOT__Or));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__Or ^ vlSelf->top__DOT__de__DOT____Vtogcov__Or))) {
        ++(vlSymsp->__Vcoverage[3312]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Or = 
            ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__Or) 
             | (0x8000U & vlSelf->top__DOT__de__DOT__Or));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__Or 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__Or))) {
        ++(vlSymsp->__Vcoverage[3313]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Or = 
            ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Or) 
             | (0x10000U & vlSelf->top__DOT__de__DOT__Or));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__Or 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__Or))) {
        ++(vlSymsp->__Vcoverage[3314]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Or = 
            ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Or) 
             | (0x20000U & vlSelf->top__DOT__de__DOT__Or));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__Or 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__Or))) {
        ++(vlSymsp->__Vcoverage[3315]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Or = 
            ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Or) 
             | (0x40000U & vlSelf->top__DOT__de__DOT__Or));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__Or 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__Or))) {
        ++(vlSymsp->__Vcoverage[3316]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Or = 
            ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Or) 
             | (0x80000U & vlSelf->top__DOT__de__DOT__Or));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__Or 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__Or))) {
        ++(vlSymsp->__Vcoverage[3317]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Or = 
            ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Or) 
             | (0x100000U & vlSelf->top__DOT__de__DOT__Or));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__Or 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__Or))) {
        ++(vlSymsp->__Vcoverage[3318]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Or = 
            ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Or) 
             | (0x200000U & vlSelf->top__DOT__de__DOT__Or));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__Or 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__Or))) {
        ++(vlSymsp->__Vcoverage[3319]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Or = 
            ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Or) 
             | (0x400000U & vlSelf->top__DOT__de__DOT__Or));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__Or 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__Or))) {
        ++(vlSymsp->__Vcoverage[3320]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Or = 
            ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Or) 
             | (0x800000U & vlSelf->top__DOT__de__DOT__Or));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__Or 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__Or))) {
        ++(vlSymsp->__Vcoverage[3321]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Or = 
            ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Or) 
             | (0x1000000U & vlSelf->top__DOT__de__DOT__Or));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__Or 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__Or))) {
        ++(vlSymsp->__Vcoverage[3322]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Or = 
            ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Or) 
             | (0x2000000U & vlSelf->top__DOT__de__DOT__Or));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__Or 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__Or))) {
        ++(vlSymsp->__Vcoverage[3323]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Or = 
            ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Or) 
             | (0x4000000U & vlSelf->top__DOT__de__DOT__Or));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__Or 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__Or))) {
        ++(vlSymsp->__Vcoverage[3324]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Or = 
            ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Or) 
             | (0x8000000U & vlSelf->top__DOT__de__DOT__Or));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__Or 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__Or))) {
        ++(vlSymsp->__Vcoverage[3325]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Or = 
            ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Or) 
             | (0x10000000U & vlSelf->top__DOT__de__DOT__Or));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__Or 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__Or))) {
        ++(vlSymsp->__Vcoverage[3326]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Or = 
            ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Or) 
             | (0x20000000U & vlSelf->top__DOT__de__DOT__Or));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__Or 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__Or))) {
        ++(vlSymsp->__Vcoverage[3327]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Or = 
            ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Or) 
             | (0x40000000U & vlSelf->top__DOT__de__DOT__Or));
    }
    if (((vlSelf->top__DOT__de__DOT__Or ^ vlSelf->top__DOT__de__DOT____Vtogcov__Or) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3328]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Or = 
            ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Or) 
             | (0x80000000U & vlSelf->top__DOT__de__DOT__Or));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__sltu ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltu))) {
        ++(vlSymsp->__Vcoverage[3329]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltu 
            = ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__sltu) 
               | (1U & vlSelf->top__DOT__de__DOT__sltu));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__sltu ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltu))) {
        ++(vlSymsp->__Vcoverage[3330]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltu 
            = ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__sltu) 
               | (2U & vlSelf->top__DOT__de__DOT__sltu));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__sltu ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltu))) {
        ++(vlSymsp->__Vcoverage[3331]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltu 
            = ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__sltu) 
               | (4U & vlSelf->top__DOT__de__DOT__sltu));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__sltu ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltu))) {
        ++(vlSymsp->__Vcoverage[3332]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltu 
            = ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__sltu) 
               | (8U & vlSelf->top__DOT__de__DOT__sltu));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__sltu ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltu))) {
        ++(vlSymsp->__Vcoverage[3333]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltu 
            = ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__sltu) 
               | (0x10U & vlSelf->top__DOT__de__DOT__sltu));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__sltu ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltu))) {
        ++(vlSymsp->__Vcoverage[3334]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltu 
            = ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__sltu) 
               | (0x20U & vlSelf->top__DOT__de__DOT__sltu));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__sltu ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltu))) {
        ++(vlSymsp->__Vcoverage[3335]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltu 
            = ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__sltu) 
               | (0x40U & vlSelf->top__DOT__de__DOT__sltu));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__sltu ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltu))) {
        ++(vlSymsp->__Vcoverage[3336]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltu 
            = ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__sltu) 
               | (0x80U & vlSelf->top__DOT__de__DOT__sltu));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__sltu 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltu))) {
        ++(vlSymsp->__Vcoverage[3337]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltu 
            = ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltu) 
               | (0x100U & vlSelf->top__DOT__de__DOT__sltu));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__sltu 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltu))) {
        ++(vlSymsp->__Vcoverage[3338]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltu 
            = ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltu) 
               | (0x200U & vlSelf->top__DOT__de__DOT__sltu));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__sltu 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltu))) {
        ++(vlSymsp->__Vcoverage[3339]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltu 
            = ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltu) 
               | (0x400U & vlSelf->top__DOT__de__DOT__sltu));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__sltu 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltu))) {
        ++(vlSymsp->__Vcoverage[3340]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltu 
            = ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltu) 
               | (0x800U & vlSelf->top__DOT__de__DOT__sltu));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__sltu 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltu))) {
        ++(vlSymsp->__Vcoverage[3341]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltu 
            = ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltu) 
               | (0x1000U & vlSelf->top__DOT__de__DOT__sltu));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__sltu 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltu))) {
        ++(vlSymsp->__Vcoverage[3342]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltu 
            = ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltu) 
               | (0x2000U & vlSelf->top__DOT__de__DOT__sltu));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__sltu 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltu))) {
        ++(vlSymsp->__Vcoverage[3343]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltu 
            = ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltu) 
               | (0x4000U & vlSelf->top__DOT__de__DOT__sltu));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__sltu 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltu))) {
        ++(vlSymsp->__Vcoverage[3344]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltu 
            = ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltu) 
               | (0x8000U & vlSelf->top__DOT__de__DOT__sltu));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__sltu 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltu))) {
        ++(vlSymsp->__Vcoverage[3345]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltu 
            = ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltu) 
               | (0x10000U & vlSelf->top__DOT__de__DOT__sltu));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__sltu 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltu))) {
        ++(vlSymsp->__Vcoverage[3346]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltu 
            = ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltu) 
               | (0x20000U & vlSelf->top__DOT__de__DOT__sltu));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__sltu 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltu))) {
        ++(vlSymsp->__Vcoverage[3347]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltu 
            = ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltu) 
               | (0x40000U & vlSelf->top__DOT__de__DOT__sltu));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__sltu 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltu))) {
        ++(vlSymsp->__Vcoverage[3348]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltu 
            = ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltu) 
               | (0x80000U & vlSelf->top__DOT__de__DOT__sltu));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__sltu 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltu))) {
        ++(vlSymsp->__Vcoverage[3349]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltu 
            = ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltu) 
               | (0x100000U & vlSelf->top__DOT__de__DOT__sltu));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__sltu 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltu))) {
        ++(vlSymsp->__Vcoverage[3350]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltu 
            = ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltu) 
               | (0x200000U & vlSelf->top__DOT__de__DOT__sltu));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__sltu 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltu))) {
        ++(vlSymsp->__Vcoverage[3351]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltu 
            = ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltu) 
               | (0x400000U & vlSelf->top__DOT__de__DOT__sltu));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__sltu 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltu))) {
        ++(vlSymsp->__Vcoverage[3352]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltu 
            = ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltu) 
               | (0x800000U & vlSelf->top__DOT__de__DOT__sltu));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__sltu 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltu))) {
        ++(vlSymsp->__Vcoverage[3353]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltu 
            = ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltu) 
               | (0x1000000U & vlSelf->top__DOT__de__DOT__sltu));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__sltu 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltu))) {
        ++(vlSymsp->__Vcoverage[3354]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltu 
            = ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltu) 
               | (0x2000000U & vlSelf->top__DOT__de__DOT__sltu));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__sltu 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltu))) {
        ++(vlSymsp->__Vcoverage[3355]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltu 
            = ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltu) 
               | (0x4000000U & vlSelf->top__DOT__de__DOT__sltu));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__sltu 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltu))) {
        ++(vlSymsp->__Vcoverage[3356]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltu 
            = ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltu) 
               | (0x8000000U & vlSelf->top__DOT__de__DOT__sltu));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__sltu 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltu))) {
        ++(vlSymsp->__Vcoverage[3357]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltu 
            = ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltu) 
               | (0x10000000U & vlSelf->top__DOT__de__DOT__sltu));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__sltu 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltu))) {
        ++(vlSymsp->__Vcoverage[3358]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltu 
            = ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltu) 
               | (0x20000000U & vlSelf->top__DOT__de__DOT__sltu));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__sltu 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltu))) {
        ++(vlSymsp->__Vcoverage[3359]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltu 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltu) 
               | (0x40000000U & vlSelf->top__DOT__de__DOT__sltu));
    }
    if (((vlSelf->top__DOT__de__DOT__sltu ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltu) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3360]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltu 
            = ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltu) 
               | (0x80000000U & vlSelf->top__DOT__de__DOT__sltu));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__slt ^ vlSelf->top__DOT__de__DOT____Vtogcov__slt))) {
        ++(vlSymsp->__Vcoverage[3361]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slt = 
            ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__slt) 
             | (1U & vlSelf->top__DOT__de__DOT__slt));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__slt ^ vlSelf->top__DOT__de__DOT____Vtogcov__slt))) {
        ++(vlSymsp->__Vcoverage[3362]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slt = 
            ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__slt) 
             | (2U & vlSelf->top__DOT__de__DOT__slt));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__slt ^ vlSelf->top__DOT__de__DOT____Vtogcov__slt))) {
        ++(vlSymsp->__Vcoverage[3363]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slt = 
            ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__slt) 
             | (4U & vlSelf->top__DOT__de__DOT__slt));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__slt ^ vlSelf->top__DOT__de__DOT____Vtogcov__slt))) {
        ++(vlSymsp->__Vcoverage[3364]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slt = 
            ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__slt) 
             | (8U & vlSelf->top__DOT__de__DOT__slt));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__slt ^ vlSelf->top__DOT__de__DOT____Vtogcov__slt))) {
        ++(vlSymsp->__Vcoverage[3365]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slt = 
            ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__slt) 
             | (0x10U & vlSelf->top__DOT__de__DOT__slt));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__slt ^ vlSelf->top__DOT__de__DOT____Vtogcov__slt))) {
        ++(vlSymsp->__Vcoverage[3366]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slt = 
            ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__slt) 
             | (0x20U & vlSelf->top__DOT__de__DOT__slt));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__slt ^ vlSelf->top__DOT__de__DOT____Vtogcov__slt))) {
        ++(vlSymsp->__Vcoverage[3367]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slt = 
            ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__slt) 
             | (0x40U & vlSelf->top__DOT__de__DOT__slt));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__slt ^ vlSelf->top__DOT__de__DOT____Vtogcov__slt))) {
        ++(vlSymsp->__Vcoverage[3368]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slt = 
            ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__slt) 
             | (0x80U & vlSelf->top__DOT__de__DOT__slt));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__slt ^ vlSelf->top__DOT__de__DOT____Vtogcov__slt))) {
        ++(vlSymsp->__Vcoverage[3369]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slt = 
            ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__slt) 
             | (0x100U & vlSelf->top__DOT__de__DOT__slt));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__slt ^ vlSelf->top__DOT__de__DOT____Vtogcov__slt))) {
        ++(vlSymsp->__Vcoverage[3370]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slt = 
            ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__slt) 
             | (0x200U & vlSelf->top__DOT__de__DOT__slt));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__slt ^ vlSelf->top__DOT__de__DOT____Vtogcov__slt))) {
        ++(vlSymsp->__Vcoverage[3371]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slt = 
            ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__slt) 
             | (0x400U & vlSelf->top__DOT__de__DOT__slt));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__slt ^ vlSelf->top__DOT__de__DOT____Vtogcov__slt))) {
        ++(vlSymsp->__Vcoverage[3372]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slt = 
            ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__slt) 
             | (0x800U & vlSelf->top__DOT__de__DOT__slt));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__slt 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__slt))) {
        ++(vlSymsp->__Vcoverage[3373]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slt = 
            ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__slt) 
             | (0x1000U & vlSelf->top__DOT__de__DOT__slt));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__slt 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__slt))) {
        ++(vlSymsp->__Vcoverage[3374]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slt = 
            ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__slt) 
             | (0x2000U & vlSelf->top__DOT__de__DOT__slt));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__slt 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__slt))) {
        ++(vlSymsp->__Vcoverage[3375]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slt = 
            ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__slt) 
             | (0x4000U & vlSelf->top__DOT__de__DOT__slt));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__slt 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__slt))) {
        ++(vlSymsp->__Vcoverage[3376]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slt = 
            ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__slt) 
             | (0x8000U & vlSelf->top__DOT__de__DOT__slt));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__slt 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__slt))) {
        ++(vlSymsp->__Vcoverage[3377]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slt = 
            ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slt) 
             | (0x10000U & vlSelf->top__DOT__de__DOT__slt));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__slt 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__slt))) {
        ++(vlSymsp->__Vcoverage[3378]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slt = 
            ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slt) 
             | (0x20000U & vlSelf->top__DOT__de__DOT__slt));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__slt 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__slt))) {
        ++(vlSymsp->__Vcoverage[3379]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slt = 
            ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slt) 
             | (0x40000U & vlSelf->top__DOT__de__DOT__slt));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__slt 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__slt))) {
        ++(vlSymsp->__Vcoverage[3380]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slt = 
            ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slt) 
             | (0x80000U & vlSelf->top__DOT__de__DOT__slt));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__slt 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__slt))) {
        ++(vlSymsp->__Vcoverage[3381]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slt = 
            ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slt) 
             | (0x100000U & vlSelf->top__DOT__de__DOT__slt));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__slt 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__slt))) {
        ++(vlSymsp->__Vcoverage[3382]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slt = 
            ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slt) 
             | (0x200000U & vlSelf->top__DOT__de__DOT__slt));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__slt 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__slt))) {
        ++(vlSymsp->__Vcoverage[3383]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slt = 
            ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slt) 
             | (0x400000U & vlSelf->top__DOT__de__DOT__slt));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__slt 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__slt))) {
        ++(vlSymsp->__Vcoverage[3384]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slt = 
            ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slt) 
             | (0x800000U & vlSelf->top__DOT__de__DOT__slt));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__slt 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__slt))) {
        ++(vlSymsp->__Vcoverage[3385]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slt = 
            ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slt) 
             | (0x1000000U & vlSelf->top__DOT__de__DOT__slt));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__slt 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__slt))) {
        ++(vlSymsp->__Vcoverage[3386]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slt = 
            ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slt) 
             | (0x2000000U & vlSelf->top__DOT__de__DOT__slt));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__slt 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__slt))) {
        ++(vlSymsp->__Vcoverage[3387]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slt = 
            ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slt) 
             | (0x4000000U & vlSelf->top__DOT__de__DOT__slt));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__slt 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__slt))) {
        ++(vlSymsp->__Vcoverage[3388]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slt = 
            ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slt) 
             | (0x8000000U & vlSelf->top__DOT__de__DOT__slt));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__slt 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__slt))) {
        ++(vlSymsp->__Vcoverage[3389]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slt = 
            ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slt) 
             | (0x10000000U & vlSelf->top__DOT__de__DOT__slt));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__slt 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__slt))) {
        ++(vlSymsp->__Vcoverage[3390]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slt = 
            ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slt) 
             | (0x20000000U & vlSelf->top__DOT__de__DOT__slt));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__slt 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__slt))) {
        ++(vlSymsp->__Vcoverage[3391]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slt = 
            ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slt) 
             | (0x40000000U & vlSelf->top__DOT__de__DOT__slt));
    }
    if (((vlSelf->top__DOT__de__DOT__slt ^ vlSelf->top__DOT__de__DOT____Vtogcov__slt) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3392]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slt = 
            ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slt) 
             | (0x80000000U & vlSelf->top__DOT__de__DOT__slt));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__sub ^ vlSelf->top__DOT__de__DOT____Vtogcov__sub))) {
        ++(vlSymsp->__Vcoverage[3393]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sub = 
            ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__sub) 
             | (1U & vlSelf->top__DOT__de__DOT__sub));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__sub ^ vlSelf->top__DOT__de__DOT____Vtogcov__sub))) {
        ++(vlSymsp->__Vcoverage[3394]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sub = 
            ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__sub) 
             | (2U & vlSelf->top__DOT__de__DOT__sub));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__sub ^ vlSelf->top__DOT__de__DOT____Vtogcov__sub))) {
        ++(vlSymsp->__Vcoverage[3395]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sub = 
            ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__sub) 
             | (4U & vlSelf->top__DOT__de__DOT__sub));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__sub ^ vlSelf->top__DOT__de__DOT____Vtogcov__sub))) {
        ++(vlSymsp->__Vcoverage[3396]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sub = 
            ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__sub) 
             | (8U & vlSelf->top__DOT__de__DOT__sub));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__sub ^ vlSelf->top__DOT__de__DOT____Vtogcov__sub))) {
        ++(vlSymsp->__Vcoverage[3397]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sub = 
            ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__sub) 
             | (0x10U & vlSelf->top__DOT__de__DOT__sub));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__sub ^ vlSelf->top__DOT__de__DOT____Vtogcov__sub))) {
        ++(vlSymsp->__Vcoverage[3398]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sub = 
            ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__sub) 
             | (0x20U & vlSelf->top__DOT__de__DOT__sub));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__sub ^ vlSelf->top__DOT__de__DOT____Vtogcov__sub))) {
        ++(vlSymsp->__Vcoverage[3399]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sub = 
            ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__sub) 
             | (0x40U & vlSelf->top__DOT__de__DOT__sub));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__sub ^ vlSelf->top__DOT__de__DOT____Vtogcov__sub))) {
        ++(vlSymsp->__Vcoverage[3400]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sub = 
            ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__sub) 
             | (0x80U & vlSelf->top__DOT__de__DOT__sub));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__sub ^ vlSelf->top__DOT__de__DOT____Vtogcov__sub))) {
        ++(vlSymsp->__Vcoverage[3401]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sub = 
            ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__sub) 
             | (0x100U & vlSelf->top__DOT__de__DOT__sub));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__sub ^ vlSelf->top__DOT__de__DOT____Vtogcov__sub))) {
        ++(vlSymsp->__Vcoverage[3402]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sub = 
            ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__sub) 
             | (0x200U & vlSelf->top__DOT__de__DOT__sub));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__sub ^ vlSelf->top__DOT__de__DOT____Vtogcov__sub))) {
        ++(vlSymsp->__Vcoverage[3403]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sub = 
            ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__sub) 
             | (0x400U & vlSelf->top__DOT__de__DOT__sub));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__sub ^ vlSelf->top__DOT__de__DOT____Vtogcov__sub))) {
        ++(vlSymsp->__Vcoverage[3404]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sub = 
            ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__sub) 
             | (0x800U & vlSelf->top__DOT__de__DOT__sub));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__sub 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__sub))) {
        ++(vlSymsp->__Vcoverage[3405]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sub = 
            ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__sub) 
             | (0x1000U & vlSelf->top__DOT__de__DOT__sub));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__sub 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__sub))) {
        ++(vlSymsp->__Vcoverage[3406]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sub = 
            ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__sub) 
             | (0x2000U & vlSelf->top__DOT__de__DOT__sub));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__sub 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__sub))) {
        ++(vlSymsp->__Vcoverage[3407]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sub = 
            ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__sub) 
             | (0x4000U & vlSelf->top__DOT__de__DOT__sub));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__sub 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__sub))) {
        ++(vlSymsp->__Vcoverage[3408]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sub = 
            ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__sub) 
             | (0x8000U & vlSelf->top__DOT__de__DOT__sub));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__sub 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sub))) {
        ++(vlSymsp->__Vcoverage[3409]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sub = 
            ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sub) 
             | (0x10000U & vlSelf->top__DOT__de__DOT__sub));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__sub 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sub))) {
        ++(vlSymsp->__Vcoverage[3410]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sub = 
            ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sub) 
             | (0x20000U & vlSelf->top__DOT__de__DOT__sub));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__sub 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sub))) {
        ++(vlSymsp->__Vcoverage[3411]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sub = 
            ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sub) 
             | (0x40000U & vlSelf->top__DOT__de__DOT__sub));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__sub 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sub))) {
        ++(vlSymsp->__Vcoverage[3412]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sub = 
            ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sub) 
             | (0x80000U & vlSelf->top__DOT__de__DOT__sub));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__sub 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sub))) {
        ++(vlSymsp->__Vcoverage[3413]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sub = 
            ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sub) 
             | (0x100000U & vlSelf->top__DOT__de__DOT__sub));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__sub 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sub))) {
        ++(vlSymsp->__Vcoverage[3414]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sub = 
            ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sub) 
             | (0x200000U & vlSelf->top__DOT__de__DOT__sub));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__sub 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sub))) {
        ++(vlSymsp->__Vcoverage[3415]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sub = 
            ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sub) 
             | (0x400000U & vlSelf->top__DOT__de__DOT__sub));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__sub 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sub))) {
        ++(vlSymsp->__Vcoverage[3416]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sub = 
            ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sub) 
             | (0x800000U & vlSelf->top__DOT__de__DOT__sub));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__sub 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sub))) {
        ++(vlSymsp->__Vcoverage[3417]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sub = 
            ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sub) 
             | (0x1000000U & vlSelf->top__DOT__de__DOT__sub));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__sub 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sub))) {
        ++(vlSymsp->__Vcoverage[3418]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sub = 
            ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sub) 
             | (0x2000000U & vlSelf->top__DOT__de__DOT__sub));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__sub 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sub))) {
        ++(vlSymsp->__Vcoverage[3419]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sub = 
            ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sub) 
             | (0x4000000U & vlSelf->top__DOT__de__DOT__sub));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__sub 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sub))) {
        ++(vlSymsp->__Vcoverage[3420]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sub = 
            ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sub) 
             | (0x8000000U & vlSelf->top__DOT__de__DOT__sub));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__sub 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__sub))) {
        ++(vlSymsp->__Vcoverage[3421]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sub = 
            ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sub) 
             | (0x10000000U & vlSelf->top__DOT__de__DOT__sub));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__sub 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__sub))) {
        ++(vlSymsp->__Vcoverage[3422]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sub = 
            ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sub) 
             | (0x20000000U & vlSelf->top__DOT__de__DOT__sub));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__sub 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__sub))) {
        ++(vlSymsp->__Vcoverage[3423]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sub = 
            ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sub) 
             | (0x40000000U & vlSelf->top__DOT__de__DOT__sub));
    }
    if (((vlSelf->top__DOT__de__DOT__sub ^ vlSelf->top__DOT__de__DOT____Vtogcov__sub) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3424]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sub = 
            ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sub) 
             | (0x80000000U & vlSelf->top__DOT__de__DOT__sub));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__sltiu ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltiu))) {
        ++(vlSymsp->__Vcoverage[3425]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltiu 
            = ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__sltiu) 
               | (1U & vlSelf->top__DOT__de__DOT__sltiu));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__sltiu ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltiu))) {
        ++(vlSymsp->__Vcoverage[3426]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltiu 
            = ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__sltiu) 
               | (2U & vlSelf->top__DOT__de__DOT__sltiu));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__sltiu ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltiu))) {
        ++(vlSymsp->__Vcoverage[3427]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltiu 
            = ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__sltiu) 
               | (4U & vlSelf->top__DOT__de__DOT__sltiu));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__sltiu ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltiu))) {
        ++(vlSymsp->__Vcoverage[3428]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltiu 
            = ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__sltiu) 
               | (8U & vlSelf->top__DOT__de__DOT__sltiu));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__sltiu 
                  ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltiu))) {
        ++(vlSymsp->__Vcoverage[3429]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltiu 
            = ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__sltiu) 
               | (0x10U & vlSelf->top__DOT__de__DOT__sltiu));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__sltiu 
                  ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltiu))) {
        ++(vlSymsp->__Vcoverage[3430]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltiu 
            = ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__sltiu) 
               | (0x20U & vlSelf->top__DOT__de__DOT__sltiu));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__sltiu 
                  ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltiu))) {
        ++(vlSymsp->__Vcoverage[3431]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltiu 
            = ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__sltiu) 
               | (0x40U & vlSelf->top__DOT__de__DOT__sltiu));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__sltiu 
                  ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltiu))) {
        ++(vlSymsp->__Vcoverage[3432]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltiu 
            = ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__sltiu) 
               | (0x80U & vlSelf->top__DOT__de__DOT__sltiu));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__sltiu 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltiu))) {
        ++(vlSymsp->__Vcoverage[3433]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltiu 
            = ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltiu) 
               | (0x100U & vlSelf->top__DOT__de__DOT__sltiu));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__sltiu 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltiu))) {
        ++(vlSymsp->__Vcoverage[3434]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltiu 
            = ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltiu) 
               | (0x200U & vlSelf->top__DOT__de__DOT__sltiu));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__sltiu 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltiu))) {
        ++(vlSymsp->__Vcoverage[3435]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltiu 
            = ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltiu) 
               | (0x400U & vlSelf->top__DOT__de__DOT__sltiu));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__sltiu 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltiu))) {
        ++(vlSymsp->__Vcoverage[3436]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltiu 
            = ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltiu) 
               | (0x800U & vlSelf->top__DOT__de__DOT__sltiu));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__sltiu 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltiu))) {
        ++(vlSymsp->__Vcoverage[3437]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltiu 
            = ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltiu) 
               | (0x1000U & vlSelf->top__DOT__de__DOT__sltiu));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__sltiu 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltiu))) {
        ++(vlSymsp->__Vcoverage[3438]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltiu 
            = ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltiu) 
               | (0x2000U & vlSelf->top__DOT__de__DOT__sltiu));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__sltiu 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltiu))) {
        ++(vlSymsp->__Vcoverage[3439]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltiu 
            = ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltiu) 
               | (0x4000U & vlSelf->top__DOT__de__DOT__sltiu));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__sltiu 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltiu))) {
        ++(vlSymsp->__Vcoverage[3440]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltiu 
            = ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltiu) 
               | (0x8000U & vlSelf->top__DOT__de__DOT__sltiu));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__sltiu 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltiu))) {
        ++(vlSymsp->__Vcoverage[3441]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltiu 
            = ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltiu) 
               | (0x10000U & vlSelf->top__DOT__de__DOT__sltiu));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__sltiu 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltiu))) {
        ++(vlSymsp->__Vcoverage[3442]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltiu 
            = ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltiu) 
               | (0x20000U & vlSelf->top__DOT__de__DOT__sltiu));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__sltiu 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltiu))) {
        ++(vlSymsp->__Vcoverage[3443]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltiu 
            = ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltiu) 
               | (0x40000U & vlSelf->top__DOT__de__DOT__sltiu));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__sltiu 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltiu))) {
        ++(vlSymsp->__Vcoverage[3444]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltiu 
            = ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltiu) 
               | (0x80000U & vlSelf->top__DOT__de__DOT__sltiu));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__sltiu 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltiu))) {
        ++(vlSymsp->__Vcoverage[3445]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltiu 
            = ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltiu) 
               | (0x100000U & vlSelf->top__DOT__de__DOT__sltiu));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__sltiu 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltiu))) {
        ++(vlSymsp->__Vcoverage[3446]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltiu 
            = ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltiu) 
               | (0x200000U & vlSelf->top__DOT__de__DOT__sltiu));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__sltiu 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltiu))) {
        ++(vlSymsp->__Vcoverage[3447]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltiu 
            = ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltiu) 
               | (0x400000U & vlSelf->top__DOT__de__DOT__sltiu));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__sltiu 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltiu))) {
        ++(vlSymsp->__Vcoverage[3448]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltiu 
            = ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltiu) 
               | (0x800000U & vlSelf->top__DOT__de__DOT__sltiu));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__sltiu 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltiu))) {
        ++(vlSymsp->__Vcoverage[3449]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltiu 
            = ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltiu) 
               | (0x1000000U & vlSelf->top__DOT__de__DOT__sltiu));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__sltiu 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltiu))) {
        ++(vlSymsp->__Vcoverage[3450]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltiu 
            = ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltiu) 
               | (0x2000000U & vlSelf->top__DOT__de__DOT__sltiu));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__sltiu 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltiu))) {
        ++(vlSymsp->__Vcoverage[3451]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltiu 
            = ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltiu) 
               | (0x4000000U & vlSelf->top__DOT__de__DOT__sltiu));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__sltiu 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltiu))) {
        ++(vlSymsp->__Vcoverage[3452]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltiu 
            = ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltiu) 
               | (0x8000000U & vlSelf->top__DOT__de__DOT__sltiu));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__sltiu 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltiu))) {
        ++(vlSymsp->__Vcoverage[3453]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltiu 
            = ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltiu) 
               | (0x10000000U & vlSelf->top__DOT__de__DOT__sltiu));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__sltiu 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltiu))) {
        ++(vlSymsp->__Vcoverage[3454]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltiu 
            = ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltiu) 
               | (0x20000000U & vlSelf->top__DOT__de__DOT__sltiu));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__sltiu 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltiu))) {
        ++(vlSymsp->__Vcoverage[3455]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltiu 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltiu) 
               | (0x40000000U & vlSelf->top__DOT__de__DOT__sltiu));
    }
    if (((vlSelf->top__DOT__de__DOT__sltiu ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltiu) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3456]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltiu 
            = ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltiu) 
               | (0x80000000U & vlSelf->top__DOT__de__DOT__sltiu));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__srai ^ vlSelf->top__DOT__de__DOT____Vtogcov__srai))) {
        ++(vlSymsp->__Vcoverage[3457]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srai 
            = ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__srai) 
               | (1U & vlSelf->top__DOT__de__DOT__srai));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__srai ^ vlSelf->top__DOT__de__DOT____Vtogcov__srai))) {
        ++(vlSymsp->__Vcoverage[3458]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srai 
            = ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__srai) 
               | (2U & vlSelf->top__DOT__de__DOT__srai));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__srai ^ vlSelf->top__DOT__de__DOT____Vtogcov__srai))) {
        ++(vlSymsp->__Vcoverage[3459]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srai 
            = ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__srai) 
               | (4U & vlSelf->top__DOT__de__DOT__srai));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__srai ^ vlSelf->top__DOT__de__DOT____Vtogcov__srai))) {
        ++(vlSymsp->__Vcoverage[3460]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srai 
            = ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__srai) 
               | (8U & vlSelf->top__DOT__de__DOT__srai));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__srai ^ vlSelf->top__DOT__de__DOT____Vtogcov__srai))) {
        ++(vlSymsp->__Vcoverage[3461]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srai 
            = ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__srai) 
               | (0x10U & vlSelf->top__DOT__de__DOT__srai));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__srai ^ vlSelf->top__DOT__de__DOT____Vtogcov__srai))) {
        ++(vlSymsp->__Vcoverage[3462]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srai 
            = ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__srai) 
               | (0x20U & vlSelf->top__DOT__de__DOT__srai));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__srai ^ vlSelf->top__DOT__de__DOT____Vtogcov__srai))) {
        ++(vlSymsp->__Vcoverage[3463]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srai 
            = ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__srai) 
               | (0x40U & vlSelf->top__DOT__de__DOT__srai));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__srai ^ vlSelf->top__DOT__de__DOT____Vtogcov__srai))) {
        ++(vlSymsp->__Vcoverage[3464]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srai 
            = ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__srai) 
               | (0x80U & vlSelf->top__DOT__de__DOT__srai));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__srai 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__srai))) {
        ++(vlSymsp->__Vcoverage[3465]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srai 
            = ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__srai) 
               | (0x100U & vlSelf->top__DOT__de__DOT__srai));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__srai 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__srai))) {
        ++(vlSymsp->__Vcoverage[3466]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srai 
            = ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__srai) 
               | (0x200U & vlSelf->top__DOT__de__DOT__srai));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__srai 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__srai))) {
        ++(vlSymsp->__Vcoverage[3467]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srai 
            = ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__srai) 
               | (0x400U & vlSelf->top__DOT__de__DOT__srai));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__srai 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__srai))) {
        ++(vlSymsp->__Vcoverage[3468]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srai 
            = ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__srai) 
               | (0x800U & vlSelf->top__DOT__de__DOT__srai));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__srai 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__srai))) {
        ++(vlSymsp->__Vcoverage[3469]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srai 
            = ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__srai) 
               | (0x1000U & vlSelf->top__DOT__de__DOT__srai));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__srai 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__srai))) {
        ++(vlSymsp->__Vcoverage[3470]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srai 
            = ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__srai) 
               | (0x2000U & vlSelf->top__DOT__de__DOT__srai));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__srai 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__srai))) {
        ++(vlSymsp->__Vcoverage[3471]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srai 
            = ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__srai) 
               | (0x4000U & vlSelf->top__DOT__de__DOT__srai));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__srai 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__srai))) {
        ++(vlSymsp->__Vcoverage[3472]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srai 
            = ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__srai) 
               | (0x8000U & vlSelf->top__DOT__de__DOT__srai));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__srai 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__srai))) {
        ++(vlSymsp->__Vcoverage[3473]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srai 
            = ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srai) 
               | (0x10000U & vlSelf->top__DOT__de__DOT__srai));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__srai 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__srai))) {
        ++(vlSymsp->__Vcoverage[3474]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srai 
            = ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srai) 
               | (0x20000U & vlSelf->top__DOT__de__DOT__srai));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__srai 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__srai))) {
        ++(vlSymsp->__Vcoverage[3475]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srai 
            = ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srai) 
               | (0x40000U & vlSelf->top__DOT__de__DOT__srai));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__srai 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__srai))) {
        ++(vlSymsp->__Vcoverage[3476]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srai 
            = ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srai) 
               | (0x80000U & vlSelf->top__DOT__de__DOT__srai));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__srai 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__srai))) {
        ++(vlSymsp->__Vcoverage[3477]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srai 
            = ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srai) 
               | (0x100000U & vlSelf->top__DOT__de__DOT__srai));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__srai 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__srai))) {
        ++(vlSymsp->__Vcoverage[3478]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srai 
            = ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srai) 
               | (0x200000U & vlSelf->top__DOT__de__DOT__srai));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__srai 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__srai))) {
        ++(vlSymsp->__Vcoverage[3479]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srai 
            = ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srai) 
               | (0x400000U & vlSelf->top__DOT__de__DOT__srai));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__srai 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__srai))) {
        ++(vlSymsp->__Vcoverage[3480]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srai 
            = ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srai) 
               | (0x800000U & vlSelf->top__DOT__de__DOT__srai));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__srai 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__srai))) {
        ++(vlSymsp->__Vcoverage[3481]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srai 
            = ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srai) 
               | (0x1000000U & vlSelf->top__DOT__de__DOT__srai));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__srai 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__srai))) {
        ++(vlSymsp->__Vcoverage[3482]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srai 
            = ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srai) 
               | (0x2000000U & vlSelf->top__DOT__de__DOT__srai));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__srai 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__srai))) {
        ++(vlSymsp->__Vcoverage[3483]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srai 
            = ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srai) 
               | (0x4000000U & vlSelf->top__DOT__de__DOT__srai));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__srai 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__srai))) {
        ++(vlSymsp->__Vcoverage[3484]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srai 
            = ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srai) 
               | (0x8000000U & vlSelf->top__DOT__de__DOT__srai));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__srai 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__srai))) {
        ++(vlSymsp->__Vcoverage[3485]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srai 
            = ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srai) 
               | (0x10000000U & vlSelf->top__DOT__de__DOT__srai));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__srai 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__srai))) {
        ++(vlSymsp->__Vcoverage[3486]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srai 
            = ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srai) 
               | (0x20000000U & vlSelf->top__DOT__de__DOT__srai));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__srai 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__srai))) {
        ++(vlSymsp->__Vcoverage[3487]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srai 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srai) 
               | (0x40000000U & vlSelf->top__DOT__de__DOT__srai));
    }
    if (((vlSelf->top__DOT__de__DOT__srai ^ vlSelf->top__DOT__de__DOT____Vtogcov__srai) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3488]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srai 
            = ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srai) 
               | (0x80000000U & vlSelf->top__DOT__de__DOT__srai));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__slli ^ vlSelf->top__DOT__de__DOT____Vtogcov__slli))) {
        ++(vlSymsp->__Vcoverage[3489]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slli 
            = ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__slli) 
               | (1U & vlSelf->top__DOT__de__DOT__slli));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__slli ^ vlSelf->top__DOT__de__DOT____Vtogcov__slli))) {
        ++(vlSymsp->__Vcoverage[3490]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slli 
            = ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__slli) 
               | (2U & vlSelf->top__DOT__de__DOT__slli));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__slli ^ vlSelf->top__DOT__de__DOT____Vtogcov__slli))) {
        ++(vlSymsp->__Vcoverage[3491]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slli 
            = ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__slli) 
               | (4U & vlSelf->top__DOT__de__DOT__slli));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__slli ^ vlSelf->top__DOT__de__DOT____Vtogcov__slli))) {
        ++(vlSymsp->__Vcoverage[3492]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slli 
            = ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__slli) 
               | (8U & vlSelf->top__DOT__de__DOT__slli));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__slli ^ vlSelf->top__DOT__de__DOT____Vtogcov__slli))) {
        ++(vlSymsp->__Vcoverage[3493]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slli 
            = ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__slli) 
               | (0x10U & vlSelf->top__DOT__de__DOT__slli));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__slli ^ vlSelf->top__DOT__de__DOT____Vtogcov__slli))) {
        ++(vlSymsp->__Vcoverage[3494]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slli 
            = ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__slli) 
               | (0x20U & vlSelf->top__DOT__de__DOT__slli));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__slli ^ vlSelf->top__DOT__de__DOT____Vtogcov__slli))) {
        ++(vlSymsp->__Vcoverage[3495]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slli 
            = ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__slli) 
               | (0x40U & vlSelf->top__DOT__de__DOT__slli));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__slli ^ vlSelf->top__DOT__de__DOT____Vtogcov__slli))) {
        ++(vlSymsp->__Vcoverage[3496]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slli 
            = ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__slli) 
               | (0x80U & vlSelf->top__DOT__de__DOT__slli));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__slli 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__slli))) {
        ++(vlSymsp->__Vcoverage[3497]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slli 
            = ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__slli) 
               | (0x100U & vlSelf->top__DOT__de__DOT__slli));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__slli 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__slli))) {
        ++(vlSymsp->__Vcoverage[3498]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slli 
            = ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__slli) 
               | (0x200U & vlSelf->top__DOT__de__DOT__slli));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__slli 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__slli))) {
        ++(vlSymsp->__Vcoverage[3499]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slli 
            = ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__slli) 
               | (0x400U & vlSelf->top__DOT__de__DOT__slli));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__slli 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__slli))) {
        ++(vlSymsp->__Vcoverage[3500]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slli 
            = ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__slli) 
               | (0x800U & vlSelf->top__DOT__de__DOT__slli));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__slli 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__slli))) {
        ++(vlSymsp->__Vcoverage[3501]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slli 
            = ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__slli) 
               | (0x1000U & vlSelf->top__DOT__de__DOT__slli));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__slli 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__slli))) {
        ++(vlSymsp->__Vcoverage[3502]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slli 
            = ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__slli) 
               | (0x2000U & vlSelf->top__DOT__de__DOT__slli));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__slli 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__slli))) {
        ++(vlSymsp->__Vcoverage[3503]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slli 
            = ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__slli) 
               | (0x4000U & vlSelf->top__DOT__de__DOT__slli));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__slli 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__slli))) {
        ++(vlSymsp->__Vcoverage[3504]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slli 
            = ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__slli) 
               | (0x8000U & vlSelf->top__DOT__de__DOT__slli));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__slli 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__slli))) {
        ++(vlSymsp->__Vcoverage[3505]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slli 
            = ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slli) 
               | (0x10000U & vlSelf->top__DOT__de__DOT__slli));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__slli 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__slli))) {
        ++(vlSymsp->__Vcoverage[3506]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slli 
            = ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slli) 
               | (0x20000U & vlSelf->top__DOT__de__DOT__slli));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__slli 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__slli))) {
        ++(vlSymsp->__Vcoverage[3507]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slli 
            = ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slli) 
               | (0x40000U & vlSelf->top__DOT__de__DOT__slli));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__slli 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__slli))) {
        ++(vlSymsp->__Vcoverage[3508]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slli 
            = ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slli) 
               | (0x80000U & vlSelf->top__DOT__de__DOT__slli));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__slli 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__slli))) {
        ++(vlSymsp->__Vcoverage[3509]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slli 
            = ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slli) 
               | (0x100000U & vlSelf->top__DOT__de__DOT__slli));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__slli 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__slli))) {
        ++(vlSymsp->__Vcoverage[3510]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slli 
            = ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slli) 
               | (0x200000U & vlSelf->top__DOT__de__DOT__slli));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__slli 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__slli))) {
        ++(vlSymsp->__Vcoverage[3511]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slli 
            = ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slli) 
               | (0x400000U & vlSelf->top__DOT__de__DOT__slli));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__slli 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__slli))) {
        ++(vlSymsp->__Vcoverage[3512]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slli 
            = ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slli) 
               | (0x800000U & vlSelf->top__DOT__de__DOT__slli));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__slli 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__slli))) {
        ++(vlSymsp->__Vcoverage[3513]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slli 
            = ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slli) 
               | (0x1000000U & vlSelf->top__DOT__de__DOT__slli));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__slli 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__slli))) {
        ++(vlSymsp->__Vcoverage[3514]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slli 
            = ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slli) 
               | (0x2000000U & vlSelf->top__DOT__de__DOT__slli));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__slli 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__slli))) {
        ++(vlSymsp->__Vcoverage[3515]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slli 
            = ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slli) 
               | (0x4000000U & vlSelf->top__DOT__de__DOT__slli));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__slli 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__slli))) {
        ++(vlSymsp->__Vcoverage[3516]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slli 
            = ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slli) 
               | (0x8000000U & vlSelf->top__DOT__de__DOT__slli));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__slli 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__slli))) {
        ++(vlSymsp->__Vcoverage[3517]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slli 
            = ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slli) 
               | (0x10000000U & vlSelf->top__DOT__de__DOT__slli));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__slli 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__slli))) {
        ++(vlSymsp->__Vcoverage[3518]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slli 
            = ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slli) 
               | (0x20000000U & vlSelf->top__DOT__de__DOT__slli));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__slli 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__slli))) {
        ++(vlSymsp->__Vcoverage[3519]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slli 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slli) 
               | (0x40000000U & vlSelf->top__DOT__de__DOT__slli));
    }
    if (((vlSelf->top__DOT__de__DOT__slli ^ vlSelf->top__DOT__de__DOT____Vtogcov__slli) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3520]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slli 
            = ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slli) 
               | (0x80000000U & vlSelf->top__DOT__de__DOT__slli));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__srli ^ vlSelf->top__DOT__de__DOT____Vtogcov__srli))) {
        ++(vlSymsp->__Vcoverage[3521]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srli 
            = ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__srli) 
               | (1U & vlSelf->top__DOT__de__DOT__srli));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__srli ^ vlSelf->top__DOT__de__DOT____Vtogcov__srli))) {
        ++(vlSymsp->__Vcoverage[3522]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srli 
            = ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__srli) 
               | (2U & vlSelf->top__DOT__de__DOT__srli));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__srli ^ vlSelf->top__DOT__de__DOT____Vtogcov__srli))) {
        ++(vlSymsp->__Vcoverage[3523]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srli 
            = ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__srli) 
               | (4U & vlSelf->top__DOT__de__DOT__srli));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__srli ^ vlSelf->top__DOT__de__DOT____Vtogcov__srli))) {
        ++(vlSymsp->__Vcoverage[3524]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srli 
            = ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__srli) 
               | (8U & vlSelf->top__DOT__de__DOT__srli));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__srli ^ vlSelf->top__DOT__de__DOT____Vtogcov__srli))) {
        ++(vlSymsp->__Vcoverage[3525]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srli 
            = ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__srli) 
               | (0x10U & vlSelf->top__DOT__de__DOT__srli));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__srli ^ vlSelf->top__DOT__de__DOT____Vtogcov__srli))) {
        ++(vlSymsp->__Vcoverage[3526]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srli 
            = ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__srli) 
               | (0x20U & vlSelf->top__DOT__de__DOT__srli));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__srli ^ vlSelf->top__DOT__de__DOT____Vtogcov__srli))) {
        ++(vlSymsp->__Vcoverage[3527]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srli 
            = ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__srli) 
               | (0x40U & vlSelf->top__DOT__de__DOT__srli));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__srli ^ vlSelf->top__DOT__de__DOT____Vtogcov__srli))) {
        ++(vlSymsp->__Vcoverage[3528]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srli 
            = ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__srli) 
               | (0x80U & vlSelf->top__DOT__de__DOT__srli));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__srli 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__srli))) {
        ++(vlSymsp->__Vcoverage[3529]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srli 
            = ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__srli) 
               | (0x100U & vlSelf->top__DOT__de__DOT__srli));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__srli 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__srli))) {
        ++(vlSymsp->__Vcoverage[3530]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srli 
            = ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__srli) 
               | (0x200U & vlSelf->top__DOT__de__DOT__srli));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__srli 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__srli))) {
        ++(vlSymsp->__Vcoverage[3531]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srli 
            = ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__srli) 
               | (0x400U & vlSelf->top__DOT__de__DOT__srli));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__srli 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__srli))) {
        ++(vlSymsp->__Vcoverage[3532]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srli 
            = ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__srli) 
               | (0x800U & vlSelf->top__DOT__de__DOT__srli));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__srli 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__srli))) {
        ++(vlSymsp->__Vcoverage[3533]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srli 
            = ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__srli) 
               | (0x1000U & vlSelf->top__DOT__de__DOT__srli));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__srli 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__srli))) {
        ++(vlSymsp->__Vcoverage[3534]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srli 
            = ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__srli) 
               | (0x2000U & vlSelf->top__DOT__de__DOT__srli));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__srli 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__srli))) {
        ++(vlSymsp->__Vcoverage[3535]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srli 
            = ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__srli) 
               | (0x4000U & vlSelf->top__DOT__de__DOT__srli));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__srli 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__srli))) {
        ++(vlSymsp->__Vcoverage[3536]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srli 
            = ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__srli) 
               | (0x8000U & vlSelf->top__DOT__de__DOT__srli));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__srli 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__srli))) {
        ++(vlSymsp->__Vcoverage[3537]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srli 
            = ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srli) 
               | (0x10000U & vlSelf->top__DOT__de__DOT__srli));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__srli 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__srli))) {
        ++(vlSymsp->__Vcoverage[3538]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srli 
            = ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srli) 
               | (0x20000U & vlSelf->top__DOT__de__DOT__srli));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__srli 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__srli))) {
        ++(vlSymsp->__Vcoverage[3539]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srli 
            = ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srli) 
               | (0x40000U & vlSelf->top__DOT__de__DOT__srli));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__srli 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__srli))) {
        ++(vlSymsp->__Vcoverage[3540]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srli 
            = ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srli) 
               | (0x80000U & vlSelf->top__DOT__de__DOT__srli));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__srli 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__srli))) {
        ++(vlSymsp->__Vcoverage[3541]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srli 
            = ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srli) 
               | (0x100000U & vlSelf->top__DOT__de__DOT__srli));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__srli 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__srli))) {
        ++(vlSymsp->__Vcoverage[3542]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srli 
            = ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srli) 
               | (0x200000U & vlSelf->top__DOT__de__DOT__srli));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__srli 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__srli))) {
        ++(vlSymsp->__Vcoverage[3543]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srli 
            = ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srli) 
               | (0x400000U & vlSelf->top__DOT__de__DOT__srli));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__srli 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__srli))) {
        ++(vlSymsp->__Vcoverage[3544]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srli 
            = ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srli) 
               | (0x800000U & vlSelf->top__DOT__de__DOT__srli));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__srli 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__srli))) {
        ++(vlSymsp->__Vcoverage[3545]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srli 
            = ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srli) 
               | (0x1000000U & vlSelf->top__DOT__de__DOT__srli));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__srli 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__srli))) {
        ++(vlSymsp->__Vcoverage[3546]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srli 
            = ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srli) 
               | (0x2000000U & vlSelf->top__DOT__de__DOT__srli));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__srli 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__srli))) {
        ++(vlSymsp->__Vcoverage[3547]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srli 
            = ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srli) 
               | (0x4000000U & vlSelf->top__DOT__de__DOT__srli));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__srli 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__srli))) {
        ++(vlSymsp->__Vcoverage[3548]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srli 
            = ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srli) 
               | (0x8000000U & vlSelf->top__DOT__de__DOT__srli));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__srli 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__srli))) {
        ++(vlSymsp->__Vcoverage[3549]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srli 
            = ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srli) 
               | (0x10000000U & vlSelf->top__DOT__de__DOT__srli));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__srli 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__srli))) {
        ++(vlSymsp->__Vcoverage[3550]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srli 
            = ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srli) 
               | (0x20000000U & vlSelf->top__DOT__de__DOT__srli));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__srli 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__srli))) {
        ++(vlSymsp->__Vcoverage[3551]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srli 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srli) 
               | (0x40000000U & vlSelf->top__DOT__de__DOT__srli));
    }
    if (((vlSelf->top__DOT__de__DOT__srli ^ vlSelf->top__DOT__de__DOT____Vtogcov__srli) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3552]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srli 
            = ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srli) 
               | (0x80000000U & vlSelf->top__DOT__de__DOT__srli));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__beq ^ vlSelf->top__DOT__de__DOT____Vtogcov__beq))) {
        ++(vlSymsp->__Vcoverage[3553]);
        vlSelf->top__DOT__de__DOT____Vtogcov__beq = 
            ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__beq) 
             | (1U & vlSelf->top__DOT__de__DOT__beq));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__beq ^ vlSelf->top__DOT__de__DOT____Vtogcov__beq))) {
        ++(vlSymsp->__Vcoverage[3554]);
        vlSelf->top__DOT__de__DOT____Vtogcov__beq = 
            ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__beq) 
             | (2U & vlSelf->top__DOT__de__DOT__beq));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__beq ^ vlSelf->top__DOT__de__DOT____Vtogcov__beq))) {
        ++(vlSymsp->__Vcoverage[3555]);
        vlSelf->top__DOT__de__DOT____Vtogcov__beq = 
            ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__beq) 
             | (4U & vlSelf->top__DOT__de__DOT__beq));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__beq ^ vlSelf->top__DOT__de__DOT____Vtogcov__beq))) {
        ++(vlSymsp->__Vcoverage[3556]);
        vlSelf->top__DOT__de__DOT____Vtogcov__beq = 
            ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__beq) 
             | (8U & vlSelf->top__DOT__de__DOT__beq));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__beq ^ vlSelf->top__DOT__de__DOT____Vtogcov__beq))) {
        ++(vlSymsp->__Vcoverage[3557]);
        vlSelf->top__DOT__de__DOT____Vtogcov__beq = 
            ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__beq) 
             | (0x10U & vlSelf->top__DOT__de__DOT__beq));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__beq ^ vlSelf->top__DOT__de__DOT____Vtogcov__beq))) {
        ++(vlSymsp->__Vcoverage[3558]);
        vlSelf->top__DOT__de__DOT____Vtogcov__beq = 
            ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__beq) 
             | (0x20U & vlSelf->top__DOT__de__DOT__beq));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__beq ^ vlSelf->top__DOT__de__DOT____Vtogcov__beq))) {
        ++(vlSymsp->__Vcoverage[3559]);
        vlSelf->top__DOT__de__DOT____Vtogcov__beq = 
            ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__beq) 
             | (0x40U & vlSelf->top__DOT__de__DOT__beq));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__beq ^ vlSelf->top__DOT__de__DOT____Vtogcov__beq))) {
        ++(vlSymsp->__Vcoverage[3560]);
        vlSelf->top__DOT__de__DOT____Vtogcov__beq = 
            ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__beq) 
             | (0x80U & vlSelf->top__DOT__de__DOT__beq));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__beq ^ vlSelf->top__DOT__de__DOT____Vtogcov__beq))) {
        ++(vlSymsp->__Vcoverage[3561]);
        vlSelf->top__DOT__de__DOT____Vtogcov__beq = 
            ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__beq) 
             | (0x100U & vlSelf->top__DOT__de__DOT__beq));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__beq ^ vlSelf->top__DOT__de__DOT____Vtogcov__beq))) {
        ++(vlSymsp->__Vcoverage[3562]);
        vlSelf->top__DOT__de__DOT____Vtogcov__beq = 
            ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__beq) 
             | (0x200U & vlSelf->top__DOT__de__DOT__beq));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__beq ^ vlSelf->top__DOT__de__DOT____Vtogcov__beq))) {
        ++(vlSymsp->__Vcoverage[3563]);
        vlSelf->top__DOT__de__DOT____Vtogcov__beq = 
            ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__beq) 
             | (0x400U & vlSelf->top__DOT__de__DOT__beq));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__beq ^ vlSelf->top__DOT__de__DOT____Vtogcov__beq))) {
        ++(vlSymsp->__Vcoverage[3564]);
        vlSelf->top__DOT__de__DOT____Vtogcov__beq = 
            ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__beq) 
             | (0x800U & vlSelf->top__DOT__de__DOT__beq));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__beq 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__beq))) {
        ++(vlSymsp->__Vcoverage[3565]);
        vlSelf->top__DOT__de__DOT____Vtogcov__beq = 
            ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__beq) 
             | (0x1000U & vlSelf->top__DOT__de__DOT__beq));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__beq 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__beq))) {
        ++(vlSymsp->__Vcoverage[3566]);
        vlSelf->top__DOT__de__DOT____Vtogcov__beq = 
            ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__beq) 
             | (0x2000U & vlSelf->top__DOT__de__DOT__beq));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__beq 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__beq))) {
        ++(vlSymsp->__Vcoverage[3567]);
        vlSelf->top__DOT__de__DOT____Vtogcov__beq = 
            ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__beq) 
             | (0x4000U & vlSelf->top__DOT__de__DOT__beq));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__beq 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__beq))) {
        ++(vlSymsp->__Vcoverage[3568]);
        vlSelf->top__DOT__de__DOT____Vtogcov__beq = 
            ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__beq) 
             | (0x8000U & vlSelf->top__DOT__de__DOT__beq));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__beq 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__beq))) {
        ++(vlSymsp->__Vcoverage[3569]);
        vlSelf->top__DOT__de__DOT____Vtogcov__beq = 
            ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__beq) 
             | (0x10000U & vlSelf->top__DOT__de__DOT__beq));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__beq 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__beq))) {
        ++(vlSymsp->__Vcoverage[3570]);
        vlSelf->top__DOT__de__DOT____Vtogcov__beq = 
            ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__beq) 
             | (0x20000U & vlSelf->top__DOT__de__DOT__beq));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__beq 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__beq))) {
        ++(vlSymsp->__Vcoverage[3571]);
        vlSelf->top__DOT__de__DOT____Vtogcov__beq = 
            ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__beq) 
             | (0x40000U & vlSelf->top__DOT__de__DOT__beq));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__beq 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__beq))) {
        ++(vlSymsp->__Vcoverage[3572]);
        vlSelf->top__DOT__de__DOT____Vtogcov__beq = 
            ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__beq) 
             | (0x80000U & vlSelf->top__DOT__de__DOT__beq));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__beq 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__beq))) {
        ++(vlSymsp->__Vcoverage[3573]);
        vlSelf->top__DOT__de__DOT____Vtogcov__beq = 
            ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__beq) 
             | (0x100000U & vlSelf->top__DOT__de__DOT__beq));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__beq 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__beq))) {
        ++(vlSymsp->__Vcoverage[3574]);
        vlSelf->top__DOT__de__DOT____Vtogcov__beq = 
            ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__beq) 
             | (0x200000U & vlSelf->top__DOT__de__DOT__beq));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__beq 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__beq))) {
        ++(vlSymsp->__Vcoverage[3575]);
        vlSelf->top__DOT__de__DOT____Vtogcov__beq = 
            ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__beq) 
             | (0x400000U & vlSelf->top__DOT__de__DOT__beq));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__beq 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__beq))) {
        ++(vlSymsp->__Vcoverage[3576]);
        vlSelf->top__DOT__de__DOT____Vtogcov__beq = 
            ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__beq) 
             | (0x800000U & vlSelf->top__DOT__de__DOT__beq));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__beq 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__beq))) {
        ++(vlSymsp->__Vcoverage[3577]);
        vlSelf->top__DOT__de__DOT____Vtogcov__beq = 
            ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__beq) 
             | (0x1000000U & vlSelf->top__DOT__de__DOT__beq));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__beq 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__beq))) {
        ++(vlSymsp->__Vcoverage[3578]);
        vlSelf->top__DOT__de__DOT____Vtogcov__beq = 
            ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__beq) 
             | (0x2000000U & vlSelf->top__DOT__de__DOT__beq));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__beq 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__beq))) {
        ++(vlSymsp->__Vcoverage[3579]);
        vlSelf->top__DOT__de__DOT____Vtogcov__beq = 
            ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__beq) 
             | (0x4000000U & vlSelf->top__DOT__de__DOT__beq));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__beq 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__beq))) {
        ++(vlSymsp->__Vcoverage[3580]);
        vlSelf->top__DOT__de__DOT____Vtogcov__beq = 
            ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__beq) 
             | (0x8000000U & vlSelf->top__DOT__de__DOT__beq));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__beq 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__beq))) {
        ++(vlSymsp->__Vcoverage[3581]);
        vlSelf->top__DOT__de__DOT____Vtogcov__beq = 
            ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__beq) 
             | (0x10000000U & vlSelf->top__DOT__de__DOT__beq));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__beq 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__beq))) {
        ++(vlSymsp->__Vcoverage[3582]);
        vlSelf->top__DOT__de__DOT____Vtogcov__beq = 
            ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__beq) 
             | (0x20000000U & vlSelf->top__DOT__de__DOT__beq));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__beq 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__beq))) {
        ++(vlSymsp->__Vcoverage[3583]);
        vlSelf->top__DOT__de__DOT____Vtogcov__beq = 
            ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__beq) 
             | (0x40000000U & vlSelf->top__DOT__de__DOT__beq));
    }
    if (((vlSelf->top__DOT__de__DOT__beq ^ vlSelf->top__DOT__de__DOT____Vtogcov__beq) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3584]);
        vlSelf->top__DOT__de__DOT____Vtogcov__beq = 
            ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__beq) 
             | (0x80000000U & vlSelf->top__DOT__de__DOT__beq));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__bne ^ vlSelf->top__DOT__de__DOT____Vtogcov__bne))) {
        ++(vlSymsp->__Vcoverage[3585]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bne = 
            ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__bne) 
             | (1U & vlSelf->top__DOT__de__DOT__bne));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__bne ^ vlSelf->top__DOT__de__DOT____Vtogcov__bne))) {
        ++(vlSymsp->__Vcoverage[3586]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bne = 
            ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__bne) 
             | (2U & vlSelf->top__DOT__de__DOT__bne));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__bne ^ vlSelf->top__DOT__de__DOT____Vtogcov__bne))) {
        ++(vlSymsp->__Vcoverage[3587]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bne = 
            ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__bne) 
             | (4U & vlSelf->top__DOT__de__DOT__bne));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__bne ^ vlSelf->top__DOT__de__DOT____Vtogcov__bne))) {
        ++(vlSymsp->__Vcoverage[3588]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bne = 
            ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__bne) 
             | (8U & vlSelf->top__DOT__de__DOT__bne));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__bne ^ vlSelf->top__DOT__de__DOT____Vtogcov__bne))) {
        ++(vlSymsp->__Vcoverage[3589]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bne = 
            ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__bne) 
             | (0x10U & vlSelf->top__DOT__de__DOT__bne));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__bne ^ vlSelf->top__DOT__de__DOT____Vtogcov__bne))) {
        ++(vlSymsp->__Vcoverage[3590]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bne = 
            ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__bne) 
             | (0x20U & vlSelf->top__DOT__de__DOT__bne));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__bne ^ vlSelf->top__DOT__de__DOT____Vtogcov__bne))) {
        ++(vlSymsp->__Vcoverage[3591]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bne = 
            ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__bne) 
             | (0x40U & vlSelf->top__DOT__de__DOT__bne));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__bne ^ vlSelf->top__DOT__de__DOT____Vtogcov__bne))) {
        ++(vlSymsp->__Vcoverage[3592]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bne = 
            ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__bne) 
             | (0x80U & vlSelf->top__DOT__de__DOT__bne));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__bne ^ vlSelf->top__DOT__de__DOT____Vtogcov__bne))) {
        ++(vlSymsp->__Vcoverage[3593]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bne = 
            ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__bne) 
             | (0x100U & vlSelf->top__DOT__de__DOT__bne));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__bne ^ vlSelf->top__DOT__de__DOT____Vtogcov__bne))) {
        ++(vlSymsp->__Vcoverage[3594]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bne = 
            ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__bne) 
             | (0x200U & vlSelf->top__DOT__de__DOT__bne));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__bne ^ vlSelf->top__DOT__de__DOT____Vtogcov__bne))) {
        ++(vlSymsp->__Vcoverage[3595]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bne = 
            ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__bne) 
             | (0x400U & vlSelf->top__DOT__de__DOT__bne));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__bne ^ vlSelf->top__DOT__de__DOT____Vtogcov__bne))) {
        ++(vlSymsp->__Vcoverage[3596]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bne = 
            ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__bne) 
             | (0x800U & vlSelf->top__DOT__de__DOT__bne));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__bne 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__bne))) {
        ++(vlSymsp->__Vcoverage[3597]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bne = 
            ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__bne) 
             | (0x1000U & vlSelf->top__DOT__de__DOT__bne));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__bne 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__bne))) {
        ++(vlSymsp->__Vcoverage[3598]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bne = 
            ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__bne) 
             | (0x2000U & vlSelf->top__DOT__de__DOT__bne));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__bne 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__bne))) {
        ++(vlSymsp->__Vcoverage[3599]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bne = 
            ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__bne) 
             | (0x4000U & vlSelf->top__DOT__de__DOT__bne));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__bne 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__bne))) {
        ++(vlSymsp->__Vcoverage[3600]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bne = 
            ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__bne) 
             | (0x8000U & vlSelf->top__DOT__de__DOT__bne));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__bne 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__bne))) {
        ++(vlSymsp->__Vcoverage[3601]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bne = 
            ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bne) 
             | (0x10000U & vlSelf->top__DOT__de__DOT__bne));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__bne 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__bne))) {
        ++(vlSymsp->__Vcoverage[3602]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bne = 
            ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bne) 
             | (0x20000U & vlSelf->top__DOT__de__DOT__bne));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__bne 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__bne))) {
        ++(vlSymsp->__Vcoverage[3603]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bne = 
            ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bne) 
             | (0x40000U & vlSelf->top__DOT__de__DOT__bne));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__bne 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__bne))) {
        ++(vlSymsp->__Vcoverage[3604]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bne = 
            ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bne) 
             | (0x80000U & vlSelf->top__DOT__de__DOT__bne));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__bne 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__bne))) {
        ++(vlSymsp->__Vcoverage[3605]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bne = 
            ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bne) 
             | (0x100000U & vlSelf->top__DOT__de__DOT__bne));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__bne 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__bne))) {
        ++(vlSymsp->__Vcoverage[3606]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bne = 
            ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bne) 
             | (0x200000U & vlSelf->top__DOT__de__DOT__bne));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__bne 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__bne))) {
        ++(vlSymsp->__Vcoverage[3607]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bne = 
            ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bne) 
             | (0x400000U & vlSelf->top__DOT__de__DOT__bne));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__bne 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__bne))) {
        ++(vlSymsp->__Vcoverage[3608]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bne = 
            ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bne) 
             | (0x800000U & vlSelf->top__DOT__de__DOT__bne));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__bne 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__bne))) {
        ++(vlSymsp->__Vcoverage[3609]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bne = 
            ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bne) 
             | (0x1000000U & vlSelf->top__DOT__de__DOT__bne));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__bne 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__bne))) {
        ++(vlSymsp->__Vcoverage[3610]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bne = 
            ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bne) 
             | (0x2000000U & vlSelf->top__DOT__de__DOT__bne));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__bne 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__bne))) {
        ++(vlSymsp->__Vcoverage[3611]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bne = 
            ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bne) 
             | (0x4000000U & vlSelf->top__DOT__de__DOT__bne));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__bne 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__bne))) {
        ++(vlSymsp->__Vcoverage[3612]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bne = 
            ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bne) 
             | (0x8000000U & vlSelf->top__DOT__de__DOT__bne));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__bne 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__bne))) {
        ++(vlSymsp->__Vcoverage[3613]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bne = 
            ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bne) 
             | (0x10000000U & vlSelf->top__DOT__de__DOT__bne));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__bne 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__bne))) {
        ++(vlSymsp->__Vcoverage[3614]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bne = 
            ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bne) 
             | (0x20000000U & vlSelf->top__DOT__de__DOT__bne));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__bne 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__bne))) {
        ++(vlSymsp->__Vcoverage[3615]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bne = 
            ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bne) 
             | (0x40000000U & vlSelf->top__DOT__de__DOT__bne));
    }
    if (((vlSelf->top__DOT__de__DOT__bne ^ vlSelf->top__DOT__de__DOT____Vtogcov__bne) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3616]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bne = 
            ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bne) 
             | (0x80000000U & vlSelf->top__DOT__de__DOT__bne));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__bge ^ vlSelf->top__DOT__de__DOT____Vtogcov__bge))) {
        ++(vlSymsp->__Vcoverage[3617]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bge = 
            ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__bge) 
             | (1U & vlSelf->top__DOT__de__DOT__bge));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__bge ^ vlSelf->top__DOT__de__DOT____Vtogcov__bge))) {
        ++(vlSymsp->__Vcoverage[3618]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bge = 
            ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__bge) 
             | (2U & vlSelf->top__DOT__de__DOT__bge));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__bge ^ vlSelf->top__DOT__de__DOT____Vtogcov__bge))) {
        ++(vlSymsp->__Vcoverage[3619]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bge = 
            ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__bge) 
             | (4U & vlSelf->top__DOT__de__DOT__bge));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__bge ^ vlSelf->top__DOT__de__DOT____Vtogcov__bge))) {
        ++(vlSymsp->__Vcoverage[3620]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bge = 
            ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__bge) 
             | (8U & vlSelf->top__DOT__de__DOT__bge));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__bge ^ vlSelf->top__DOT__de__DOT____Vtogcov__bge))) {
        ++(vlSymsp->__Vcoverage[3621]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bge = 
            ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__bge) 
             | (0x10U & vlSelf->top__DOT__de__DOT__bge));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__bge ^ vlSelf->top__DOT__de__DOT____Vtogcov__bge))) {
        ++(vlSymsp->__Vcoverage[3622]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bge = 
            ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__bge) 
             | (0x20U & vlSelf->top__DOT__de__DOT__bge));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__bge ^ vlSelf->top__DOT__de__DOT____Vtogcov__bge))) {
        ++(vlSymsp->__Vcoverage[3623]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bge = 
            ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__bge) 
             | (0x40U & vlSelf->top__DOT__de__DOT__bge));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__bge ^ vlSelf->top__DOT__de__DOT____Vtogcov__bge))) {
        ++(vlSymsp->__Vcoverage[3624]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bge = 
            ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__bge) 
             | (0x80U & vlSelf->top__DOT__de__DOT__bge));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__bge ^ vlSelf->top__DOT__de__DOT____Vtogcov__bge))) {
        ++(vlSymsp->__Vcoverage[3625]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bge = 
            ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__bge) 
             | (0x100U & vlSelf->top__DOT__de__DOT__bge));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__bge ^ vlSelf->top__DOT__de__DOT____Vtogcov__bge))) {
        ++(vlSymsp->__Vcoverage[3626]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bge = 
            ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__bge) 
             | (0x200U & vlSelf->top__DOT__de__DOT__bge));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__bge ^ vlSelf->top__DOT__de__DOT____Vtogcov__bge))) {
        ++(vlSymsp->__Vcoverage[3627]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bge = 
            ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__bge) 
             | (0x400U & vlSelf->top__DOT__de__DOT__bge));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__bge ^ vlSelf->top__DOT__de__DOT____Vtogcov__bge))) {
        ++(vlSymsp->__Vcoverage[3628]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bge = 
            ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__bge) 
             | (0x800U & vlSelf->top__DOT__de__DOT__bge));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__bge 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__bge))) {
        ++(vlSymsp->__Vcoverage[3629]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bge = 
            ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__bge) 
             | (0x1000U & vlSelf->top__DOT__de__DOT__bge));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__bge 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__bge))) {
        ++(vlSymsp->__Vcoverage[3630]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bge = 
            ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__bge) 
             | (0x2000U & vlSelf->top__DOT__de__DOT__bge));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__bge 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__bge))) {
        ++(vlSymsp->__Vcoverage[3631]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bge = 
            ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__bge) 
             | (0x4000U & vlSelf->top__DOT__de__DOT__bge));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__bge 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__bge))) {
        ++(vlSymsp->__Vcoverage[3632]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bge = 
            ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__bge) 
             | (0x8000U & vlSelf->top__DOT__de__DOT__bge));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__bge 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__bge))) {
        ++(vlSymsp->__Vcoverage[3633]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bge = 
            ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bge) 
             | (0x10000U & vlSelf->top__DOT__de__DOT__bge));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__bge 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__bge))) {
        ++(vlSymsp->__Vcoverage[3634]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bge = 
            ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bge) 
             | (0x20000U & vlSelf->top__DOT__de__DOT__bge));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__bge 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__bge))) {
        ++(vlSymsp->__Vcoverage[3635]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bge = 
            ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bge) 
             | (0x40000U & vlSelf->top__DOT__de__DOT__bge));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__bge 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__bge))) {
        ++(vlSymsp->__Vcoverage[3636]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bge = 
            ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bge) 
             | (0x80000U & vlSelf->top__DOT__de__DOT__bge));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__bge 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__bge))) {
        ++(vlSymsp->__Vcoverage[3637]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bge = 
            ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bge) 
             | (0x100000U & vlSelf->top__DOT__de__DOT__bge));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__bge 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__bge))) {
        ++(vlSymsp->__Vcoverage[3638]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bge = 
            ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bge) 
             | (0x200000U & vlSelf->top__DOT__de__DOT__bge));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__bge 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__bge))) {
        ++(vlSymsp->__Vcoverage[3639]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bge = 
            ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bge) 
             | (0x400000U & vlSelf->top__DOT__de__DOT__bge));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__bge 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__bge))) {
        ++(vlSymsp->__Vcoverage[3640]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bge = 
            ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bge) 
             | (0x800000U & vlSelf->top__DOT__de__DOT__bge));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__bge 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__bge))) {
        ++(vlSymsp->__Vcoverage[3641]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bge = 
            ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bge) 
             | (0x1000000U & vlSelf->top__DOT__de__DOT__bge));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__bge 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__bge))) {
        ++(vlSymsp->__Vcoverage[3642]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bge = 
            ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bge) 
             | (0x2000000U & vlSelf->top__DOT__de__DOT__bge));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__bge 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__bge))) {
        ++(vlSymsp->__Vcoverage[3643]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bge = 
            ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bge) 
             | (0x4000000U & vlSelf->top__DOT__de__DOT__bge));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__bge 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__bge))) {
        ++(vlSymsp->__Vcoverage[3644]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bge = 
            ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bge) 
             | (0x8000000U & vlSelf->top__DOT__de__DOT__bge));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__bge 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__bge))) {
        ++(vlSymsp->__Vcoverage[3645]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bge = 
            ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bge) 
             | (0x10000000U & vlSelf->top__DOT__de__DOT__bge));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__bge 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__bge))) {
        ++(vlSymsp->__Vcoverage[3646]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bge = 
            ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bge) 
             | (0x20000000U & vlSelf->top__DOT__de__DOT__bge));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__bge 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__bge))) {
        ++(vlSymsp->__Vcoverage[3647]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bge = 
            ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bge) 
             | (0x40000000U & vlSelf->top__DOT__de__DOT__bge));
    }
    if (((vlSelf->top__DOT__de__DOT__bge ^ vlSelf->top__DOT__de__DOT____Vtogcov__bge) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3648]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bge = 
            ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bge) 
             | (0x80000000U & vlSelf->top__DOT__de__DOT__bge));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__bgeu ^ vlSelf->top__DOT__de__DOT____Vtogcov__bgeu))) {
        ++(vlSymsp->__Vcoverage[3649]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bgeu 
            = ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__bgeu) 
               | (1U & vlSelf->top__DOT__de__DOT__bgeu));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__bgeu ^ vlSelf->top__DOT__de__DOT____Vtogcov__bgeu))) {
        ++(vlSymsp->__Vcoverage[3650]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bgeu 
            = ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__bgeu) 
               | (2U & vlSelf->top__DOT__de__DOT__bgeu));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__bgeu ^ vlSelf->top__DOT__de__DOT____Vtogcov__bgeu))) {
        ++(vlSymsp->__Vcoverage[3651]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bgeu 
            = ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__bgeu) 
               | (4U & vlSelf->top__DOT__de__DOT__bgeu));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__bgeu ^ vlSelf->top__DOT__de__DOT____Vtogcov__bgeu))) {
        ++(vlSymsp->__Vcoverage[3652]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bgeu 
            = ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__bgeu) 
               | (8U & vlSelf->top__DOT__de__DOT__bgeu));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__bgeu ^ vlSelf->top__DOT__de__DOT____Vtogcov__bgeu))) {
        ++(vlSymsp->__Vcoverage[3653]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bgeu 
            = ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__bgeu) 
               | (0x10U & vlSelf->top__DOT__de__DOT__bgeu));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__bgeu ^ vlSelf->top__DOT__de__DOT____Vtogcov__bgeu))) {
        ++(vlSymsp->__Vcoverage[3654]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bgeu 
            = ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__bgeu) 
               | (0x20U & vlSelf->top__DOT__de__DOT__bgeu));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__bgeu ^ vlSelf->top__DOT__de__DOT____Vtogcov__bgeu))) {
        ++(vlSymsp->__Vcoverage[3655]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bgeu 
            = ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__bgeu) 
               | (0x40U & vlSelf->top__DOT__de__DOT__bgeu));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__bgeu ^ vlSelf->top__DOT__de__DOT____Vtogcov__bgeu))) {
        ++(vlSymsp->__Vcoverage[3656]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bgeu 
            = ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__bgeu) 
               | (0x80U & vlSelf->top__DOT__de__DOT__bgeu));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__bgeu 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__bgeu))) {
        ++(vlSymsp->__Vcoverage[3657]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bgeu 
            = ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__bgeu) 
               | (0x100U & vlSelf->top__DOT__de__DOT__bgeu));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__bgeu 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__bgeu))) {
        ++(vlSymsp->__Vcoverage[3658]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bgeu 
            = ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__bgeu) 
               | (0x200U & vlSelf->top__DOT__de__DOT__bgeu));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__bgeu 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__bgeu))) {
        ++(vlSymsp->__Vcoverage[3659]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bgeu 
            = ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__bgeu) 
               | (0x400U & vlSelf->top__DOT__de__DOT__bgeu));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__bgeu 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__bgeu))) {
        ++(vlSymsp->__Vcoverage[3660]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bgeu 
            = ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__bgeu) 
               | (0x800U & vlSelf->top__DOT__de__DOT__bgeu));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__bgeu 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__bgeu))) {
        ++(vlSymsp->__Vcoverage[3661]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bgeu 
            = ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__bgeu) 
               | (0x1000U & vlSelf->top__DOT__de__DOT__bgeu));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__bgeu 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__bgeu))) {
        ++(vlSymsp->__Vcoverage[3662]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bgeu 
            = ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__bgeu) 
               | (0x2000U & vlSelf->top__DOT__de__DOT__bgeu));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__bgeu 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__bgeu))) {
        ++(vlSymsp->__Vcoverage[3663]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bgeu 
            = ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__bgeu) 
               | (0x4000U & vlSelf->top__DOT__de__DOT__bgeu));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__bgeu 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__bgeu))) {
        ++(vlSymsp->__Vcoverage[3664]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bgeu 
            = ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__bgeu) 
               | (0x8000U & vlSelf->top__DOT__de__DOT__bgeu));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__bgeu 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__bgeu))) {
        ++(vlSymsp->__Vcoverage[3665]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bgeu 
            = ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bgeu) 
               | (0x10000U & vlSelf->top__DOT__de__DOT__bgeu));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__bgeu 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__bgeu))) {
        ++(vlSymsp->__Vcoverage[3666]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bgeu 
            = ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bgeu) 
               | (0x20000U & vlSelf->top__DOT__de__DOT__bgeu));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__bgeu 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__bgeu))) {
        ++(vlSymsp->__Vcoverage[3667]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bgeu 
            = ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bgeu) 
               | (0x40000U & vlSelf->top__DOT__de__DOT__bgeu));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__bgeu 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__bgeu))) {
        ++(vlSymsp->__Vcoverage[3668]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bgeu 
            = ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bgeu) 
               | (0x80000U & vlSelf->top__DOT__de__DOT__bgeu));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__bgeu 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__bgeu))) {
        ++(vlSymsp->__Vcoverage[3669]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bgeu 
            = ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bgeu) 
               | (0x100000U & vlSelf->top__DOT__de__DOT__bgeu));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__bgeu 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__bgeu))) {
        ++(vlSymsp->__Vcoverage[3670]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bgeu 
            = ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bgeu) 
               | (0x200000U & vlSelf->top__DOT__de__DOT__bgeu));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__bgeu 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__bgeu))) {
        ++(vlSymsp->__Vcoverage[3671]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bgeu 
            = ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bgeu) 
               | (0x400000U & vlSelf->top__DOT__de__DOT__bgeu));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__bgeu 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__bgeu))) {
        ++(vlSymsp->__Vcoverage[3672]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bgeu 
            = ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bgeu) 
               | (0x800000U & vlSelf->top__DOT__de__DOT__bgeu));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__bgeu 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__bgeu))) {
        ++(vlSymsp->__Vcoverage[3673]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bgeu 
            = ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bgeu) 
               | (0x1000000U & vlSelf->top__DOT__de__DOT__bgeu));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__bgeu 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__bgeu))) {
        ++(vlSymsp->__Vcoverage[3674]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bgeu 
            = ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bgeu) 
               | (0x2000000U & vlSelf->top__DOT__de__DOT__bgeu));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__bgeu 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__bgeu))) {
        ++(vlSymsp->__Vcoverage[3675]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bgeu 
            = ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bgeu) 
               | (0x4000000U & vlSelf->top__DOT__de__DOT__bgeu));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__bgeu 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__bgeu))) {
        ++(vlSymsp->__Vcoverage[3676]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bgeu 
            = ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bgeu) 
               | (0x8000000U & vlSelf->top__DOT__de__DOT__bgeu));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__bgeu 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__bgeu))) {
        ++(vlSymsp->__Vcoverage[3677]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bgeu 
            = ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bgeu) 
               | (0x10000000U & vlSelf->top__DOT__de__DOT__bgeu));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__bgeu 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__bgeu))) {
        ++(vlSymsp->__Vcoverage[3678]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bgeu 
            = ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bgeu) 
               | (0x20000000U & vlSelf->top__DOT__de__DOT__bgeu));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__bgeu 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__bgeu))) {
        ++(vlSymsp->__Vcoverage[3679]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bgeu 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bgeu) 
               | (0x40000000U & vlSelf->top__DOT__de__DOT__bgeu));
    }
    if (((vlSelf->top__DOT__de__DOT__bgeu ^ vlSelf->top__DOT__de__DOT____Vtogcov__bgeu) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3680]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bgeu 
            = ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bgeu) 
               | (0x80000000U & vlSelf->top__DOT__de__DOT__bgeu));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__bltu ^ vlSelf->top__DOT__de__DOT____Vtogcov__bltu))) {
        ++(vlSymsp->__Vcoverage[3681]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bltu 
            = ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__bltu) 
               | (1U & vlSelf->top__DOT__de__DOT__bltu));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__bltu ^ vlSelf->top__DOT__de__DOT____Vtogcov__bltu))) {
        ++(vlSymsp->__Vcoverage[3682]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bltu 
            = ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__bltu) 
               | (2U & vlSelf->top__DOT__de__DOT__bltu));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__bltu ^ vlSelf->top__DOT__de__DOT____Vtogcov__bltu))) {
        ++(vlSymsp->__Vcoverage[3683]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bltu 
            = ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__bltu) 
               | (4U & vlSelf->top__DOT__de__DOT__bltu));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__bltu ^ vlSelf->top__DOT__de__DOT____Vtogcov__bltu))) {
        ++(vlSymsp->__Vcoverage[3684]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bltu 
            = ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__bltu) 
               | (8U & vlSelf->top__DOT__de__DOT__bltu));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__bltu ^ vlSelf->top__DOT__de__DOT____Vtogcov__bltu))) {
        ++(vlSymsp->__Vcoverage[3685]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bltu 
            = ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__bltu) 
               | (0x10U & vlSelf->top__DOT__de__DOT__bltu));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__bltu ^ vlSelf->top__DOT__de__DOT____Vtogcov__bltu))) {
        ++(vlSymsp->__Vcoverage[3686]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bltu 
            = ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__bltu) 
               | (0x20U & vlSelf->top__DOT__de__DOT__bltu));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__bltu ^ vlSelf->top__DOT__de__DOT____Vtogcov__bltu))) {
        ++(vlSymsp->__Vcoverage[3687]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bltu 
            = ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__bltu) 
               | (0x40U & vlSelf->top__DOT__de__DOT__bltu));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__bltu ^ vlSelf->top__DOT__de__DOT____Vtogcov__bltu))) {
        ++(vlSymsp->__Vcoverage[3688]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bltu 
            = ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__bltu) 
               | (0x80U & vlSelf->top__DOT__de__DOT__bltu));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__bltu 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__bltu))) {
        ++(vlSymsp->__Vcoverage[3689]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bltu 
            = ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__bltu) 
               | (0x100U & vlSelf->top__DOT__de__DOT__bltu));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__bltu 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__bltu))) {
        ++(vlSymsp->__Vcoverage[3690]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bltu 
            = ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__bltu) 
               | (0x200U & vlSelf->top__DOT__de__DOT__bltu));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__bltu 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__bltu))) {
        ++(vlSymsp->__Vcoverage[3691]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bltu 
            = ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__bltu) 
               | (0x400U & vlSelf->top__DOT__de__DOT__bltu));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__bltu 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__bltu))) {
        ++(vlSymsp->__Vcoverage[3692]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bltu 
            = ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__bltu) 
               | (0x800U & vlSelf->top__DOT__de__DOT__bltu));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__bltu 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__bltu))) {
        ++(vlSymsp->__Vcoverage[3693]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bltu 
            = ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__bltu) 
               | (0x1000U & vlSelf->top__DOT__de__DOT__bltu));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__bltu 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__bltu))) {
        ++(vlSymsp->__Vcoverage[3694]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bltu 
            = ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__bltu) 
               | (0x2000U & vlSelf->top__DOT__de__DOT__bltu));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__bltu 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__bltu))) {
        ++(vlSymsp->__Vcoverage[3695]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bltu 
            = ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__bltu) 
               | (0x4000U & vlSelf->top__DOT__de__DOT__bltu));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__bltu 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__bltu))) {
        ++(vlSymsp->__Vcoverage[3696]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bltu 
            = ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__bltu) 
               | (0x8000U & vlSelf->top__DOT__de__DOT__bltu));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__bltu 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__bltu))) {
        ++(vlSymsp->__Vcoverage[3697]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bltu 
            = ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bltu) 
               | (0x10000U & vlSelf->top__DOT__de__DOT__bltu));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__bltu 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__bltu))) {
        ++(vlSymsp->__Vcoverage[3698]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bltu 
            = ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bltu) 
               | (0x20000U & vlSelf->top__DOT__de__DOT__bltu));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__bltu 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__bltu))) {
        ++(vlSymsp->__Vcoverage[3699]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bltu 
            = ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bltu) 
               | (0x40000U & vlSelf->top__DOT__de__DOT__bltu));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__bltu 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__bltu))) {
        ++(vlSymsp->__Vcoverage[3700]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bltu 
            = ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bltu) 
               | (0x80000U & vlSelf->top__DOT__de__DOT__bltu));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__bltu 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__bltu))) {
        ++(vlSymsp->__Vcoverage[3701]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bltu 
            = ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bltu) 
               | (0x100000U & vlSelf->top__DOT__de__DOT__bltu));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__bltu 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__bltu))) {
        ++(vlSymsp->__Vcoverage[3702]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bltu 
            = ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bltu) 
               | (0x200000U & vlSelf->top__DOT__de__DOT__bltu));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__bltu 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__bltu))) {
        ++(vlSymsp->__Vcoverage[3703]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bltu 
            = ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bltu) 
               | (0x400000U & vlSelf->top__DOT__de__DOT__bltu));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__bltu 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__bltu))) {
        ++(vlSymsp->__Vcoverage[3704]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bltu 
            = ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bltu) 
               | (0x800000U & vlSelf->top__DOT__de__DOT__bltu));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__bltu 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__bltu))) {
        ++(vlSymsp->__Vcoverage[3705]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bltu 
            = ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bltu) 
               | (0x1000000U & vlSelf->top__DOT__de__DOT__bltu));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__bltu 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__bltu))) {
        ++(vlSymsp->__Vcoverage[3706]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bltu 
            = ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bltu) 
               | (0x2000000U & vlSelf->top__DOT__de__DOT__bltu));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__bltu 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__bltu))) {
        ++(vlSymsp->__Vcoverage[3707]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bltu 
            = ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bltu) 
               | (0x4000000U & vlSelf->top__DOT__de__DOT__bltu));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__bltu 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__bltu))) {
        ++(vlSymsp->__Vcoverage[3708]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bltu 
            = ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bltu) 
               | (0x8000000U & vlSelf->top__DOT__de__DOT__bltu));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__bltu 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__bltu))) {
        ++(vlSymsp->__Vcoverage[3709]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bltu 
            = ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bltu) 
               | (0x10000000U & vlSelf->top__DOT__de__DOT__bltu));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__bltu 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__bltu))) {
        ++(vlSymsp->__Vcoverage[3710]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bltu 
            = ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bltu) 
               | (0x20000000U & vlSelf->top__DOT__de__DOT__bltu));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__bltu 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__bltu))) {
        ++(vlSymsp->__Vcoverage[3711]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bltu 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bltu) 
               | (0x40000000U & vlSelf->top__DOT__de__DOT__bltu));
    }
    if (((vlSelf->top__DOT__de__DOT__bltu ^ vlSelf->top__DOT__de__DOT____Vtogcov__bltu) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3712]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bltu 
            = ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bltu) 
               | (0x80000000U & vlSelf->top__DOT__de__DOT__bltu));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__blt ^ vlSelf->top__DOT__de__DOT____Vtogcov__blt))) {
        ++(vlSymsp->__Vcoverage[3713]);
        vlSelf->top__DOT__de__DOT____Vtogcov__blt = 
            ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__blt) 
             | (1U & vlSelf->top__DOT__de__DOT__blt));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__blt ^ vlSelf->top__DOT__de__DOT____Vtogcov__blt))) {
        ++(vlSymsp->__Vcoverage[3714]);
        vlSelf->top__DOT__de__DOT____Vtogcov__blt = 
            ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__blt) 
             | (2U & vlSelf->top__DOT__de__DOT__blt));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__blt ^ vlSelf->top__DOT__de__DOT____Vtogcov__blt))) {
        ++(vlSymsp->__Vcoverage[3715]);
        vlSelf->top__DOT__de__DOT____Vtogcov__blt = 
            ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__blt) 
             | (4U & vlSelf->top__DOT__de__DOT__blt));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__blt ^ vlSelf->top__DOT__de__DOT____Vtogcov__blt))) {
        ++(vlSymsp->__Vcoverage[3716]);
        vlSelf->top__DOT__de__DOT____Vtogcov__blt = 
            ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__blt) 
             | (8U & vlSelf->top__DOT__de__DOT__blt));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__blt ^ vlSelf->top__DOT__de__DOT____Vtogcov__blt))) {
        ++(vlSymsp->__Vcoverage[3717]);
        vlSelf->top__DOT__de__DOT____Vtogcov__blt = 
            ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__blt) 
             | (0x10U & vlSelf->top__DOT__de__DOT__blt));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__blt ^ vlSelf->top__DOT__de__DOT____Vtogcov__blt))) {
        ++(vlSymsp->__Vcoverage[3718]);
        vlSelf->top__DOT__de__DOT____Vtogcov__blt = 
            ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__blt) 
             | (0x20U & vlSelf->top__DOT__de__DOT__blt));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__blt ^ vlSelf->top__DOT__de__DOT____Vtogcov__blt))) {
        ++(vlSymsp->__Vcoverage[3719]);
        vlSelf->top__DOT__de__DOT____Vtogcov__blt = 
            ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__blt) 
             | (0x40U & vlSelf->top__DOT__de__DOT__blt));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__blt ^ vlSelf->top__DOT__de__DOT____Vtogcov__blt))) {
        ++(vlSymsp->__Vcoverage[3720]);
        vlSelf->top__DOT__de__DOT____Vtogcov__blt = 
            ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__blt) 
             | (0x80U & vlSelf->top__DOT__de__DOT__blt));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__blt ^ vlSelf->top__DOT__de__DOT____Vtogcov__blt))) {
        ++(vlSymsp->__Vcoverage[3721]);
        vlSelf->top__DOT__de__DOT____Vtogcov__blt = 
            ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__blt) 
             | (0x100U & vlSelf->top__DOT__de__DOT__blt));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__blt ^ vlSelf->top__DOT__de__DOT____Vtogcov__blt))) {
        ++(vlSymsp->__Vcoverage[3722]);
        vlSelf->top__DOT__de__DOT____Vtogcov__blt = 
            ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__blt) 
             | (0x200U & vlSelf->top__DOT__de__DOT__blt));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__blt ^ vlSelf->top__DOT__de__DOT____Vtogcov__blt))) {
        ++(vlSymsp->__Vcoverage[3723]);
        vlSelf->top__DOT__de__DOT____Vtogcov__blt = 
            ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__blt) 
             | (0x400U & vlSelf->top__DOT__de__DOT__blt));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__blt ^ vlSelf->top__DOT__de__DOT____Vtogcov__blt))) {
        ++(vlSymsp->__Vcoverage[3724]);
        vlSelf->top__DOT__de__DOT____Vtogcov__blt = 
            ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__blt) 
             | (0x800U & vlSelf->top__DOT__de__DOT__blt));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__blt 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__blt))) {
        ++(vlSymsp->__Vcoverage[3725]);
        vlSelf->top__DOT__de__DOT____Vtogcov__blt = 
            ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__blt) 
             | (0x1000U & vlSelf->top__DOT__de__DOT__blt));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__blt 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__blt))) {
        ++(vlSymsp->__Vcoverage[3726]);
        vlSelf->top__DOT__de__DOT____Vtogcov__blt = 
            ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__blt) 
             | (0x2000U & vlSelf->top__DOT__de__DOT__blt));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__blt 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__blt))) {
        ++(vlSymsp->__Vcoverage[3727]);
        vlSelf->top__DOT__de__DOT____Vtogcov__blt = 
            ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__blt) 
             | (0x4000U & vlSelf->top__DOT__de__DOT__blt));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__blt 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__blt))) {
        ++(vlSymsp->__Vcoverage[3728]);
        vlSelf->top__DOT__de__DOT____Vtogcov__blt = 
            ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__blt) 
             | (0x8000U & vlSelf->top__DOT__de__DOT__blt));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__blt 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__blt))) {
        ++(vlSymsp->__Vcoverage[3729]);
        vlSelf->top__DOT__de__DOT____Vtogcov__blt = 
            ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__blt) 
             | (0x10000U & vlSelf->top__DOT__de__DOT__blt));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__blt 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__blt))) {
        ++(vlSymsp->__Vcoverage[3730]);
        vlSelf->top__DOT__de__DOT____Vtogcov__blt = 
            ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__blt) 
             | (0x20000U & vlSelf->top__DOT__de__DOT__blt));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__blt 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__blt))) {
        ++(vlSymsp->__Vcoverage[3731]);
        vlSelf->top__DOT__de__DOT____Vtogcov__blt = 
            ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__blt) 
             | (0x40000U & vlSelf->top__DOT__de__DOT__blt));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__blt 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__blt))) {
        ++(vlSymsp->__Vcoverage[3732]);
        vlSelf->top__DOT__de__DOT____Vtogcov__blt = 
            ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__blt) 
             | (0x80000U & vlSelf->top__DOT__de__DOT__blt));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__blt 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__blt))) {
        ++(vlSymsp->__Vcoverage[3733]);
        vlSelf->top__DOT__de__DOT____Vtogcov__blt = 
            ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__blt) 
             | (0x100000U & vlSelf->top__DOT__de__DOT__blt));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__blt 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__blt))) {
        ++(vlSymsp->__Vcoverage[3734]);
        vlSelf->top__DOT__de__DOT____Vtogcov__blt = 
            ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__blt) 
             | (0x200000U & vlSelf->top__DOT__de__DOT__blt));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__blt 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__blt))) {
        ++(vlSymsp->__Vcoverage[3735]);
        vlSelf->top__DOT__de__DOT____Vtogcov__blt = 
            ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__blt) 
             | (0x400000U & vlSelf->top__DOT__de__DOT__blt));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__blt 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__blt))) {
        ++(vlSymsp->__Vcoverage[3736]);
        vlSelf->top__DOT__de__DOT____Vtogcov__blt = 
            ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__blt) 
             | (0x800000U & vlSelf->top__DOT__de__DOT__blt));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__blt 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__blt))) {
        ++(vlSymsp->__Vcoverage[3737]);
        vlSelf->top__DOT__de__DOT____Vtogcov__blt = 
            ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__blt) 
             | (0x1000000U & vlSelf->top__DOT__de__DOT__blt));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__blt 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__blt))) {
        ++(vlSymsp->__Vcoverage[3738]);
        vlSelf->top__DOT__de__DOT____Vtogcov__blt = 
            ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__blt) 
             | (0x2000000U & vlSelf->top__DOT__de__DOT__blt));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__blt 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__blt))) {
        ++(vlSymsp->__Vcoverage[3739]);
        vlSelf->top__DOT__de__DOT____Vtogcov__blt = 
            ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__blt) 
             | (0x4000000U & vlSelf->top__DOT__de__DOT__blt));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__blt 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__blt))) {
        ++(vlSymsp->__Vcoverage[3740]);
        vlSelf->top__DOT__de__DOT____Vtogcov__blt = 
            ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__blt) 
             | (0x8000000U & vlSelf->top__DOT__de__DOT__blt));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__blt 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__blt))) {
        ++(vlSymsp->__Vcoverage[3741]);
        vlSelf->top__DOT__de__DOT____Vtogcov__blt = 
            ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__blt) 
             | (0x10000000U & vlSelf->top__DOT__de__DOT__blt));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__blt 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__blt))) {
        ++(vlSymsp->__Vcoverage[3742]);
        vlSelf->top__DOT__de__DOT____Vtogcov__blt = 
            ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__blt) 
             | (0x20000000U & vlSelf->top__DOT__de__DOT__blt));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__blt 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__blt))) {
        ++(vlSymsp->__Vcoverage[3743]);
        vlSelf->top__DOT__de__DOT____Vtogcov__blt = 
            ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__blt) 
             | (0x40000000U & vlSelf->top__DOT__de__DOT__blt));
    }
    if (((vlSelf->top__DOT__de__DOT__blt ^ vlSelf->top__DOT__de__DOT____Vtogcov__blt) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3744]);
        vlSelf->top__DOT__de__DOT____Vtogcov__blt = 
            ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__blt) 
             | (0x80000000U & vlSelf->top__DOT__de__DOT__blt));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__sd ^ vlSelf->top__DOT__de__DOT____Vtogcov__sd))) {
        ++(vlSymsp->__Vcoverage[2593]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sd = 
            ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__sd) 
             | (1U & vlSelf->top__DOT__de__DOT__sd));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__sd ^ vlSelf->top__DOT__de__DOT____Vtogcov__sd))) {
        ++(vlSymsp->__Vcoverage[2594]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sd = 
            ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__sd) 
             | (2U & vlSelf->top__DOT__de__DOT__sd));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__sd ^ vlSelf->top__DOT__de__DOT____Vtogcov__sd))) {
        ++(vlSymsp->__Vcoverage[2595]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sd = 
            ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__sd) 
             | (4U & vlSelf->top__DOT__de__DOT__sd));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__sd ^ vlSelf->top__DOT__de__DOT____Vtogcov__sd))) {
        ++(vlSymsp->__Vcoverage[2596]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sd = 
            ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__sd) 
             | (8U & vlSelf->top__DOT__de__DOT__sd));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__sd ^ vlSelf->top__DOT__de__DOT____Vtogcov__sd))) {
        ++(vlSymsp->__Vcoverage[2597]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sd = 
            ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__sd) 
             | (0x10U & vlSelf->top__DOT__de__DOT__sd));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__sd ^ vlSelf->top__DOT__de__DOT____Vtogcov__sd))) {
        ++(vlSymsp->__Vcoverage[2598]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sd = 
            ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__sd) 
             | (0x20U & vlSelf->top__DOT__de__DOT__sd));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__sd ^ vlSelf->top__DOT__de__DOT____Vtogcov__sd))) {
        ++(vlSymsp->__Vcoverage[2599]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sd = 
            ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__sd) 
             | (0x40U & vlSelf->top__DOT__de__DOT__sd));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__sd ^ vlSelf->top__DOT__de__DOT____Vtogcov__sd))) {
        ++(vlSymsp->__Vcoverage[2600]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sd = 
            ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__sd) 
             | (0x80U & vlSelf->top__DOT__de__DOT__sd));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__sd ^ vlSelf->top__DOT__de__DOT____Vtogcov__sd))) {
        ++(vlSymsp->__Vcoverage[2601]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sd = 
            ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__sd) 
             | (0x100U & vlSelf->top__DOT__de__DOT__sd));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__sd ^ vlSelf->top__DOT__de__DOT____Vtogcov__sd))) {
        ++(vlSymsp->__Vcoverage[2602]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sd = 
            ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__sd) 
             | (0x200U & vlSelf->top__DOT__de__DOT__sd));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__sd ^ vlSelf->top__DOT__de__DOT____Vtogcov__sd))) {
        ++(vlSymsp->__Vcoverage[2603]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sd = 
            ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__sd) 
             | (0x400U & vlSelf->top__DOT__de__DOT__sd));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__sd ^ vlSelf->top__DOT__de__DOT____Vtogcov__sd))) {
        ++(vlSymsp->__Vcoverage[2604]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sd = 
            ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__sd) 
             | (0x800U & vlSelf->top__DOT__de__DOT__sd));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__sd ^ vlSelf->top__DOT__de__DOT____Vtogcov__sd))) {
        ++(vlSymsp->__Vcoverage[2605]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sd = 
            ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__sd) 
             | (0x1000U & vlSelf->top__DOT__de__DOT__sd));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__sd ^ vlSelf->top__DOT__de__DOT____Vtogcov__sd))) {
        ++(vlSymsp->__Vcoverage[2606]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sd = 
            ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__sd) 
             | (0x2000U & vlSelf->top__DOT__de__DOT__sd));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__sd ^ vlSelf->top__DOT__de__DOT____Vtogcov__sd))) {
        ++(vlSymsp->__Vcoverage[2607]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sd = 
            ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__sd) 
             | (0x4000U & vlSelf->top__DOT__de__DOT__sd));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__sd ^ vlSelf->top__DOT__de__DOT____Vtogcov__sd))) {
        ++(vlSymsp->__Vcoverage[2608]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sd = 
            ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__sd) 
             | (0x8000U & vlSelf->top__DOT__de__DOT__sd));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__sd 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sd))) {
        ++(vlSymsp->__Vcoverage[2609]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sd = 
            ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sd) 
             | (0x10000U & vlSelf->top__DOT__de__DOT__sd));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__sd 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sd))) {
        ++(vlSymsp->__Vcoverage[2610]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sd = 
            ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sd) 
             | (0x20000U & vlSelf->top__DOT__de__DOT__sd));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__sd 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sd))) {
        ++(vlSymsp->__Vcoverage[2611]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sd = 
            ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sd) 
             | (0x40000U & vlSelf->top__DOT__de__DOT__sd));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__sd 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sd))) {
        ++(vlSymsp->__Vcoverage[2612]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sd = 
            ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sd) 
             | (0x80000U & vlSelf->top__DOT__de__DOT__sd));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__sd 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sd))) {
        ++(vlSymsp->__Vcoverage[2613]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sd = 
            ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sd) 
             | (0x100000U & vlSelf->top__DOT__de__DOT__sd));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__sd 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sd))) {
        ++(vlSymsp->__Vcoverage[2614]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sd = 
            ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sd) 
             | (0x200000U & vlSelf->top__DOT__de__DOT__sd));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__sd 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sd))) {
        ++(vlSymsp->__Vcoverage[2615]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sd = 
            ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sd) 
             | (0x400000U & vlSelf->top__DOT__de__DOT__sd));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__sd 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sd))) {
        ++(vlSymsp->__Vcoverage[2616]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sd = 
            ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sd) 
             | (0x800000U & vlSelf->top__DOT__de__DOT__sd));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__sd 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sd))) {
        ++(vlSymsp->__Vcoverage[2617]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sd = 
            ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sd) 
             | (0x1000000U & vlSelf->top__DOT__de__DOT__sd));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__sd 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sd))) {
        ++(vlSymsp->__Vcoverage[2618]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sd = 
            ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sd) 
             | (0x2000000U & vlSelf->top__DOT__de__DOT__sd));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__sd 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sd))) {
        ++(vlSymsp->__Vcoverage[2619]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sd = 
            ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sd) 
             | (0x4000000U & vlSelf->top__DOT__de__DOT__sd));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__sd 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sd))) {
        ++(vlSymsp->__Vcoverage[2620]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sd = 
            ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sd) 
             | (0x8000000U & vlSelf->top__DOT__de__DOT__sd));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__sd 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__sd))) {
        ++(vlSymsp->__Vcoverage[2621]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sd = 
            ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sd) 
             | (0x10000000U & vlSelf->top__DOT__de__DOT__sd));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__sd 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__sd))) {
        ++(vlSymsp->__Vcoverage[2622]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sd = 
            ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sd) 
             | (0x20000000U & vlSelf->top__DOT__de__DOT__sd));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__sd 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__sd))) {
        ++(vlSymsp->__Vcoverage[2623]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sd = 
            ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sd) 
             | (0x40000000U & vlSelf->top__DOT__de__DOT__sd));
    }
    if (((vlSelf->top__DOT__de__DOT__sd ^ vlSelf->top__DOT__de__DOT____Vtogcov__sd) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2624]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sd = 
            ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sd) 
             | (0x80000000U & vlSelf->top__DOT__de__DOT__sd));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__sh ^ vlSelf->top__DOT__de__DOT____Vtogcov__sh))) {
        ++(vlSymsp->__Vcoverage[2625]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sh = 
            ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__sh) 
             | (1U & vlSelf->top__DOT__de__DOT__sh));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__sh ^ vlSelf->top__DOT__de__DOT____Vtogcov__sh))) {
        ++(vlSymsp->__Vcoverage[2626]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sh = 
            ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__sh) 
             | (2U & vlSelf->top__DOT__de__DOT__sh));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__sh ^ vlSelf->top__DOT__de__DOT____Vtogcov__sh))) {
        ++(vlSymsp->__Vcoverage[2627]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sh = 
            ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__sh) 
             | (4U & vlSelf->top__DOT__de__DOT__sh));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__sh ^ vlSelf->top__DOT__de__DOT____Vtogcov__sh))) {
        ++(vlSymsp->__Vcoverage[2628]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sh = 
            ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__sh) 
             | (8U & vlSelf->top__DOT__de__DOT__sh));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__sh ^ vlSelf->top__DOT__de__DOT____Vtogcov__sh))) {
        ++(vlSymsp->__Vcoverage[2629]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sh = 
            ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__sh) 
             | (0x10U & vlSelf->top__DOT__de__DOT__sh));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__sh ^ vlSelf->top__DOT__de__DOT____Vtogcov__sh))) {
        ++(vlSymsp->__Vcoverage[2630]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sh = 
            ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__sh) 
             | (0x20U & vlSelf->top__DOT__de__DOT__sh));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__sh ^ vlSelf->top__DOT__de__DOT____Vtogcov__sh))) {
        ++(vlSymsp->__Vcoverage[2631]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sh = 
            ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__sh) 
             | (0x40U & vlSelf->top__DOT__de__DOT__sh));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__sh ^ vlSelf->top__DOT__de__DOT____Vtogcov__sh))) {
        ++(vlSymsp->__Vcoverage[2632]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sh = 
            ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__sh) 
             | (0x80U & vlSelf->top__DOT__de__DOT__sh));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__sh ^ vlSelf->top__DOT__de__DOT____Vtogcov__sh))) {
        ++(vlSymsp->__Vcoverage[2633]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sh = 
            ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__sh) 
             | (0x100U & vlSelf->top__DOT__de__DOT__sh));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__sh ^ vlSelf->top__DOT__de__DOT____Vtogcov__sh))) {
        ++(vlSymsp->__Vcoverage[2634]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sh = 
            ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__sh) 
             | (0x200U & vlSelf->top__DOT__de__DOT__sh));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__sh ^ vlSelf->top__DOT__de__DOT____Vtogcov__sh))) {
        ++(vlSymsp->__Vcoverage[2635]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sh = 
            ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__sh) 
             | (0x400U & vlSelf->top__DOT__de__DOT__sh));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__sh ^ vlSelf->top__DOT__de__DOT____Vtogcov__sh))) {
        ++(vlSymsp->__Vcoverage[2636]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sh = 
            ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__sh) 
             | (0x800U & vlSelf->top__DOT__de__DOT__sh));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__sh ^ vlSelf->top__DOT__de__DOT____Vtogcov__sh))) {
        ++(vlSymsp->__Vcoverage[2637]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sh = 
            ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__sh) 
             | (0x1000U & vlSelf->top__DOT__de__DOT__sh));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__sh ^ vlSelf->top__DOT__de__DOT____Vtogcov__sh))) {
        ++(vlSymsp->__Vcoverage[2638]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sh = 
            ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__sh) 
             | (0x2000U & vlSelf->top__DOT__de__DOT__sh));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__sh ^ vlSelf->top__DOT__de__DOT____Vtogcov__sh))) {
        ++(vlSymsp->__Vcoverage[2639]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sh = 
            ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__sh) 
             | (0x4000U & vlSelf->top__DOT__de__DOT__sh));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__sh ^ vlSelf->top__DOT__de__DOT____Vtogcov__sh))) {
        ++(vlSymsp->__Vcoverage[2640]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sh = 
            ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__sh) 
             | (0x8000U & vlSelf->top__DOT__de__DOT__sh));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__sh 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sh))) {
        ++(vlSymsp->__Vcoverage[2641]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sh = 
            ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sh) 
             | (0x10000U & vlSelf->top__DOT__de__DOT__sh));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__sh 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sh))) {
        ++(vlSymsp->__Vcoverage[2642]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sh = 
            ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sh) 
             | (0x20000U & vlSelf->top__DOT__de__DOT__sh));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__sh 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sh))) {
        ++(vlSymsp->__Vcoverage[2643]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sh = 
            ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sh) 
             | (0x40000U & vlSelf->top__DOT__de__DOT__sh));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__sh 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sh))) {
        ++(vlSymsp->__Vcoverage[2644]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sh = 
            ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sh) 
             | (0x80000U & vlSelf->top__DOT__de__DOT__sh));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__sh 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sh))) {
        ++(vlSymsp->__Vcoverage[2645]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sh = 
            ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sh) 
             | (0x100000U & vlSelf->top__DOT__de__DOT__sh));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__sh 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sh))) {
        ++(vlSymsp->__Vcoverage[2646]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sh = 
            ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sh) 
             | (0x200000U & vlSelf->top__DOT__de__DOT__sh));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__sh 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sh))) {
        ++(vlSymsp->__Vcoverage[2647]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sh = 
            ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sh) 
             | (0x400000U & vlSelf->top__DOT__de__DOT__sh));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__sh 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sh))) {
        ++(vlSymsp->__Vcoverage[2648]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sh = 
            ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sh) 
             | (0x800000U & vlSelf->top__DOT__de__DOT__sh));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__sh 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sh))) {
        ++(vlSymsp->__Vcoverage[2649]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sh = 
            ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sh) 
             | (0x1000000U & vlSelf->top__DOT__de__DOT__sh));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__sh 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sh))) {
        ++(vlSymsp->__Vcoverage[2650]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sh = 
            ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sh) 
             | (0x2000000U & vlSelf->top__DOT__de__DOT__sh));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__sh 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sh))) {
        ++(vlSymsp->__Vcoverage[2651]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sh = 
            ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sh) 
             | (0x4000000U & vlSelf->top__DOT__de__DOT__sh));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__sh 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sh))) {
        ++(vlSymsp->__Vcoverage[2652]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sh = 
            ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sh) 
             | (0x8000000U & vlSelf->top__DOT__de__DOT__sh));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__sh 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__sh))) {
        ++(vlSymsp->__Vcoverage[2653]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sh = 
            ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sh) 
             | (0x10000000U & vlSelf->top__DOT__de__DOT__sh));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__sh 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__sh))) {
        ++(vlSymsp->__Vcoverage[2654]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sh = 
            ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sh) 
             | (0x20000000U & vlSelf->top__DOT__de__DOT__sh));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__sh 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__sh))) {
        ++(vlSymsp->__Vcoverage[2655]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sh = 
            ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sh) 
             | (0x40000000U & vlSelf->top__DOT__de__DOT__sh));
    }
    if (((vlSelf->top__DOT__de__DOT__sh ^ vlSelf->top__DOT__de__DOT____Vtogcov__sh) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2656]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sh = 
            ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sh) 
             | (0x80000000U & vlSelf->top__DOT__de__DOT__sh));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__sw ^ vlSelf->top__DOT__de__DOT____Vtogcov__sw))) {
        ++(vlSymsp->__Vcoverage[2657]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sw = 
            ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__sw) 
             | (1U & vlSelf->top__DOT__de__DOT__sw));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__sw ^ vlSelf->top__DOT__de__DOT____Vtogcov__sw))) {
        ++(vlSymsp->__Vcoverage[2658]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sw = 
            ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__sw) 
             | (2U & vlSelf->top__DOT__de__DOT__sw));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__sw ^ vlSelf->top__DOT__de__DOT____Vtogcov__sw))) {
        ++(vlSymsp->__Vcoverage[2659]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sw = 
            ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__sw) 
             | (4U & vlSelf->top__DOT__de__DOT__sw));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__sw ^ vlSelf->top__DOT__de__DOT____Vtogcov__sw))) {
        ++(vlSymsp->__Vcoverage[2660]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sw = 
            ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__sw) 
             | (8U & vlSelf->top__DOT__de__DOT__sw));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__sw ^ vlSelf->top__DOT__de__DOT____Vtogcov__sw))) {
        ++(vlSymsp->__Vcoverage[2661]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sw = 
            ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__sw) 
             | (0x10U & vlSelf->top__DOT__de__DOT__sw));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__sw ^ vlSelf->top__DOT__de__DOT____Vtogcov__sw))) {
        ++(vlSymsp->__Vcoverage[2662]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sw = 
            ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__sw) 
             | (0x20U & vlSelf->top__DOT__de__DOT__sw));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__sw ^ vlSelf->top__DOT__de__DOT____Vtogcov__sw))) {
        ++(vlSymsp->__Vcoverage[2663]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sw = 
            ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__sw) 
             | (0x40U & vlSelf->top__DOT__de__DOT__sw));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__sw ^ vlSelf->top__DOT__de__DOT____Vtogcov__sw))) {
        ++(vlSymsp->__Vcoverage[2664]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sw = 
            ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__sw) 
             | (0x80U & vlSelf->top__DOT__de__DOT__sw));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__sw ^ vlSelf->top__DOT__de__DOT____Vtogcov__sw))) {
        ++(vlSymsp->__Vcoverage[2665]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sw = 
            ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__sw) 
             | (0x100U & vlSelf->top__DOT__de__DOT__sw));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__sw ^ vlSelf->top__DOT__de__DOT____Vtogcov__sw))) {
        ++(vlSymsp->__Vcoverage[2666]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sw = 
            ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__sw) 
             | (0x200U & vlSelf->top__DOT__de__DOT__sw));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__sw ^ vlSelf->top__DOT__de__DOT____Vtogcov__sw))) {
        ++(vlSymsp->__Vcoverage[2667]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sw = 
            ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__sw) 
             | (0x400U & vlSelf->top__DOT__de__DOT__sw));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__sw ^ vlSelf->top__DOT__de__DOT____Vtogcov__sw))) {
        ++(vlSymsp->__Vcoverage[2668]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sw = 
            ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__sw) 
             | (0x800U & vlSelf->top__DOT__de__DOT__sw));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__sw ^ vlSelf->top__DOT__de__DOT____Vtogcov__sw))) {
        ++(vlSymsp->__Vcoverage[2669]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sw = 
            ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__sw) 
             | (0x1000U & vlSelf->top__DOT__de__DOT__sw));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__sw ^ vlSelf->top__DOT__de__DOT____Vtogcov__sw))) {
        ++(vlSymsp->__Vcoverage[2670]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sw = 
            ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__sw) 
             | (0x2000U & vlSelf->top__DOT__de__DOT__sw));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__sw ^ vlSelf->top__DOT__de__DOT____Vtogcov__sw))) {
        ++(vlSymsp->__Vcoverage[2671]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sw = 
            ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__sw) 
             | (0x4000U & vlSelf->top__DOT__de__DOT__sw));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__sw ^ vlSelf->top__DOT__de__DOT____Vtogcov__sw))) {
        ++(vlSymsp->__Vcoverage[2672]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sw = 
            ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__sw) 
             | (0x8000U & vlSelf->top__DOT__de__DOT__sw));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__sw 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sw))) {
        ++(vlSymsp->__Vcoverage[2673]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sw = 
            ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sw) 
             | (0x10000U & vlSelf->top__DOT__de__DOT__sw));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__sw 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sw))) {
        ++(vlSymsp->__Vcoverage[2674]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sw = 
            ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sw) 
             | (0x20000U & vlSelf->top__DOT__de__DOT__sw));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__sw 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sw))) {
        ++(vlSymsp->__Vcoverage[2675]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sw = 
            ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sw) 
             | (0x40000U & vlSelf->top__DOT__de__DOT__sw));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__sw 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sw))) {
        ++(vlSymsp->__Vcoverage[2676]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sw = 
            ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sw) 
             | (0x80000U & vlSelf->top__DOT__de__DOT__sw));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__sw 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sw))) {
        ++(vlSymsp->__Vcoverage[2677]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sw = 
            ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sw) 
             | (0x100000U & vlSelf->top__DOT__de__DOT__sw));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__sw 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sw))) {
        ++(vlSymsp->__Vcoverage[2678]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sw = 
            ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sw) 
             | (0x200000U & vlSelf->top__DOT__de__DOT__sw));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__sw 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sw))) {
        ++(vlSymsp->__Vcoverage[2679]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sw = 
            ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sw) 
             | (0x400000U & vlSelf->top__DOT__de__DOT__sw));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__sw 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sw))) {
        ++(vlSymsp->__Vcoverage[2680]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sw = 
            ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sw) 
             | (0x800000U & vlSelf->top__DOT__de__DOT__sw));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__sw 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sw))) {
        ++(vlSymsp->__Vcoverage[2681]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sw = 
            ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sw) 
             | (0x1000000U & vlSelf->top__DOT__de__DOT__sw));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__sw 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sw))) {
        ++(vlSymsp->__Vcoverage[2682]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sw = 
            ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sw) 
             | (0x2000000U & vlSelf->top__DOT__de__DOT__sw));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__sw 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sw))) {
        ++(vlSymsp->__Vcoverage[2683]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sw = 
            ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sw) 
             | (0x4000000U & vlSelf->top__DOT__de__DOT__sw));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__sw 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sw))) {
        ++(vlSymsp->__Vcoverage[2684]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sw = 
            ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sw) 
             | (0x8000000U & vlSelf->top__DOT__de__DOT__sw));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__sw 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__sw))) {
        ++(vlSymsp->__Vcoverage[2685]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sw = 
            ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sw) 
             | (0x10000000U & vlSelf->top__DOT__de__DOT__sw));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__sw 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__sw))) {
        ++(vlSymsp->__Vcoverage[2686]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sw = 
            ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sw) 
             | (0x20000000U & vlSelf->top__DOT__de__DOT__sw));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__sw 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__sw))) {
        ++(vlSymsp->__Vcoverage[2687]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sw = 
            ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sw) 
             | (0x40000000U & vlSelf->top__DOT__de__DOT__sw));
    }
    if (((vlSelf->top__DOT__de__DOT__sw ^ vlSelf->top__DOT__de__DOT____Vtogcov__sw) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2688]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sw = 
            ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sw) 
             | (0x80000000U & vlSelf->top__DOT__de__DOT__sw));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__sb ^ vlSelf->top__DOT__de__DOT____Vtogcov__sb))) {
        ++(vlSymsp->__Vcoverage[2689]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sb = 
            ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__sb) 
             | (1U & vlSelf->top__DOT__de__DOT__sb));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__sb ^ vlSelf->top__DOT__de__DOT____Vtogcov__sb))) {
        ++(vlSymsp->__Vcoverage[2690]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sb = 
            ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__sb) 
             | (2U & vlSelf->top__DOT__de__DOT__sb));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__sb ^ vlSelf->top__DOT__de__DOT____Vtogcov__sb))) {
        ++(vlSymsp->__Vcoverage[2691]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sb = 
            ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__sb) 
             | (4U & vlSelf->top__DOT__de__DOT__sb));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__sb ^ vlSelf->top__DOT__de__DOT____Vtogcov__sb))) {
        ++(vlSymsp->__Vcoverage[2692]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sb = 
            ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__sb) 
             | (8U & vlSelf->top__DOT__de__DOT__sb));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__sb ^ vlSelf->top__DOT__de__DOT____Vtogcov__sb))) {
        ++(vlSymsp->__Vcoverage[2693]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sb = 
            ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__sb) 
             | (0x10U & vlSelf->top__DOT__de__DOT__sb));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__sb ^ vlSelf->top__DOT__de__DOT____Vtogcov__sb))) {
        ++(vlSymsp->__Vcoverage[2694]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sb = 
            ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__sb) 
             | (0x20U & vlSelf->top__DOT__de__DOT__sb));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__sb ^ vlSelf->top__DOT__de__DOT____Vtogcov__sb))) {
        ++(vlSymsp->__Vcoverage[2695]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sb = 
            ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__sb) 
             | (0x40U & vlSelf->top__DOT__de__DOT__sb));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__sb ^ vlSelf->top__DOT__de__DOT____Vtogcov__sb))) {
        ++(vlSymsp->__Vcoverage[2696]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sb = 
            ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__sb) 
             | (0x80U & vlSelf->top__DOT__de__DOT__sb));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__sb ^ vlSelf->top__DOT__de__DOT____Vtogcov__sb))) {
        ++(vlSymsp->__Vcoverage[2697]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sb = 
            ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__sb) 
             | (0x100U & vlSelf->top__DOT__de__DOT__sb));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__sb ^ vlSelf->top__DOT__de__DOT____Vtogcov__sb))) {
        ++(vlSymsp->__Vcoverage[2698]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sb = 
            ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__sb) 
             | (0x200U & vlSelf->top__DOT__de__DOT__sb));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__sb ^ vlSelf->top__DOT__de__DOT____Vtogcov__sb))) {
        ++(vlSymsp->__Vcoverage[2699]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sb = 
            ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__sb) 
             | (0x400U & vlSelf->top__DOT__de__DOT__sb));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__sb ^ vlSelf->top__DOT__de__DOT____Vtogcov__sb))) {
        ++(vlSymsp->__Vcoverage[2700]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sb = 
            ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__sb) 
             | (0x800U & vlSelf->top__DOT__de__DOT__sb));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__sb ^ vlSelf->top__DOT__de__DOT____Vtogcov__sb))) {
        ++(vlSymsp->__Vcoverage[2701]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sb = 
            ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__sb) 
             | (0x1000U & vlSelf->top__DOT__de__DOT__sb));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__sb ^ vlSelf->top__DOT__de__DOT____Vtogcov__sb))) {
        ++(vlSymsp->__Vcoverage[2702]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sb = 
            ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__sb) 
             | (0x2000U & vlSelf->top__DOT__de__DOT__sb));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__sb ^ vlSelf->top__DOT__de__DOT____Vtogcov__sb))) {
        ++(vlSymsp->__Vcoverage[2703]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sb = 
            ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__sb) 
             | (0x4000U & vlSelf->top__DOT__de__DOT__sb));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__sb ^ vlSelf->top__DOT__de__DOT____Vtogcov__sb))) {
        ++(vlSymsp->__Vcoverage[2704]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sb = 
            ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__sb) 
             | (0x8000U & vlSelf->top__DOT__de__DOT__sb));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__sb 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sb))) {
        ++(vlSymsp->__Vcoverage[2705]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sb = 
            ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sb) 
             | (0x10000U & vlSelf->top__DOT__de__DOT__sb));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__sb 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sb))) {
        ++(vlSymsp->__Vcoverage[2706]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sb = 
            ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sb) 
             | (0x20000U & vlSelf->top__DOT__de__DOT__sb));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__sb 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sb))) {
        ++(vlSymsp->__Vcoverage[2707]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sb = 
            ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sb) 
             | (0x40000U & vlSelf->top__DOT__de__DOT__sb));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__sb 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sb))) {
        ++(vlSymsp->__Vcoverage[2708]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sb = 
            ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sb) 
             | (0x80000U & vlSelf->top__DOT__de__DOT__sb));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__sb 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sb))) {
        ++(vlSymsp->__Vcoverage[2709]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sb = 
            ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sb) 
             | (0x100000U & vlSelf->top__DOT__de__DOT__sb));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__sb 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sb))) {
        ++(vlSymsp->__Vcoverage[2710]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sb = 
            ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sb) 
             | (0x200000U & vlSelf->top__DOT__de__DOT__sb));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__sb 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sb))) {
        ++(vlSymsp->__Vcoverage[2711]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sb = 
            ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sb) 
             | (0x400000U & vlSelf->top__DOT__de__DOT__sb));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__sb 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sb))) {
        ++(vlSymsp->__Vcoverage[2712]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sb = 
            ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sb) 
             | (0x800000U & vlSelf->top__DOT__de__DOT__sb));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__sb 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sb))) {
        ++(vlSymsp->__Vcoverage[2713]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sb = 
            ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sb) 
             | (0x1000000U & vlSelf->top__DOT__de__DOT__sb));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__sb 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sb))) {
        ++(vlSymsp->__Vcoverage[2714]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sb = 
            ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sb) 
             | (0x2000000U & vlSelf->top__DOT__de__DOT__sb));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__sb 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sb))) {
        ++(vlSymsp->__Vcoverage[2715]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sb = 
            ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sb) 
             | (0x4000000U & vlSelf->top__DOT__de__DOT__sb));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__sb 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sb))) {
        ++(vlSymsp->__Vcoverage[2716]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sb = 
            ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sb) 
             | (0x8000000U & vlSelf->top__DOT__de__DOT__sb));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__sb 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__sb))) {
        ++(vlSymsp->__Vcoverage[2717]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sb = 
            ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sb) 
             | (0x10000000U & vlSelf->top__DOT__de__DOT__sb));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__sb 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__sb))) {
        ++(vlSymsp->__Vcoverage[2718]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sb = 
            ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sb) 
             | (0x20000000U & vlSelf->top__DOT__de__DOT__sb));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__sb 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__sb))) {
        ++(vlSymsp->__Vcoverage[2719]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sb = 
            ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sb) 
             | (0x40000000U & vlSelf->top__DOT__de__DOT__sb));
    }
    if (((vlSelf->top__DOT__de__DOT__sb ^ vlSelf->top__DOT__de__DOT____Vtogcov__sb) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2720]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sb = 
            ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sb) 
             | (0x80000000U & vlSelf->top__DOT__de__DOT__sb));
    }
    vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U] 
        = (IData)((0x30000000001ULL | ((QData)((IData)(vlSelf->top__DOT__de__DOT__sb)) 
                                       << 8U)));
    vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U] 
        = ((vlSelf->top__DOT__de__DOT__sh << 0x10U) 
           | (IData)(((0x30000000001ULL | ((QData)((IData)(vlSelf->top__DOT__de__DOT__sb)) 
                                           << 8U)) 
                      >> 0x20U)));
    vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U] 
        = (0xf0000U | ((vlSelf->top__DOT__de__DOT__sw 
                        << 0x18U) | (vlSelf->top__DOT__de__DOT__sh 
                                     >> 0x10U)));
    vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U] 
        = (0xff000000U | (vlSelf->top__DOT__de__DOT__sw 
                          >> 8U));
    vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U] 
        = vlSelf->top__DOT__de__DOT__sd;
    if ((1U & (vlSelf->top__DOT__de__DOT__lw ^ vlSelf->top__DOT__de__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[2721]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lw = 
            ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__lw) 
             | (1U & vlSelf->top__DOT__de__DOT__lw));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__lw ^ vlSelf->top__DOT__de__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[2722]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lw = 
            ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__lw) 
             | (2U & vlSelf->top__DOT__de__DOT__lw));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__lw ^ vlSelf->top__DOT__de__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[2723]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lw = 
            ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__lw) 
             | (4U & vlSelf->top__DOT__de__DOT__lw));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__lw ^ vlSelf->top__DOT__de__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[2724]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lw = 
            ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__lw) 
             | (8U & vlSelf->top__DOT__de__DOT__lw));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__lw ^ vlSelf->top__DOT__de__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[2725]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lw = 
            ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__lw) 
             | (0x10U & vlSelf->top__DOT__de__DOT__lw));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__lw ^ vlSelf->top__DOT__de__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[2726]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lw = 
            ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__lw) 
             | (0x20U & vlSelf->top__DOT__de__DOT__lw));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__lw ^ vlSelf->top__DOT__de__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[2727]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lw = 
            ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__lw) 
             | (0x40U & vlSelf->top__DOT__de__DOT__lw));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__lw ^ vlSelf->top__DOT__de__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[2728]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lw = 
            ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__lw) 
             | (0x80U & vlSelf->top__DOT__de__DOT__lw));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__lw ^ vlSelf->top__DOT__de__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[2729]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lw = 
            ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__lw) 
             | (0x100U & vlSelf->top__DOT__de__DOT__lw));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__lw ^ vlSelf->top__DOT__de__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[2730]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lw = 
            ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__lw) 
             | (0x200U & vlSelf->top__DOT__de__DOT__lw));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__lw ^ vlSelf->top__DOT__de__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[2731]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lw = 
            ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__lw) 
             | (0x400U & vlSelf->top__DOT__de__DOT__lw));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__lw ^ vlSelf->top__DOT__de__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[2732]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lw = 
            ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__lw) 
             | (0x800U & vlSelf->top__DOT__de__DOT__lw));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__lw ^ vlSelf->top__DOT__de__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[2733]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lw = 
            ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__lw) 
             | (0x1000U & vlSelf->top__DOT__de__DOT__lw));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__lw ^ vlSelf->top__DOT__de__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[2734]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lw = 
            ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__lw) 
             | (0x2000U & vlSelf->top__DOT__de__DOT__lw));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__lw ^ vlSelf->top__DOT__de__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[2735]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lw = 
            ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__lw) 
             | (0x4000U & vlSelf->top__DOT__de__DOT__lw));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__lw ^ vlSelf->top__DOT__de__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[2736]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lw = 
            ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__lw) 
             | (0x8000U & vlSelf->top__DOT__de__DOT__lw));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__lw 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[2737]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lw = 
            ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lw) 
             | (0x10000U & vlSelf->top__DOT__de__DOT__lw));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__lw 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[2738]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lw = 
            ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lw) 
             | (0x20000U & vlSelf->top__DOT__de__DOT__lw));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__lw 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[2739]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lw = 
            ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lw) 
             | (0x40000U & vlSelf->top__DOT__de__DOT__lw));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__lw 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[2740]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lw = 
            ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lw) 
             | (0x80000U & vlSelf->top__DOT__de__DOT__lw));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__lw 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[2741]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lw = 
            ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lw) 
             | (0x100000U & vlSelf->top__DOT__de__DOT__lw));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__lw 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[2742]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lw = 
            ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lw) 
             | (0x200000U & vlSelf->top__DOT__de__DOT__lw));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__lw 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[2743]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lw = 
            ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lw) 
             | (0x400000U & vlSelf->top__DOT__de__DOT__lw));
    }
}
