// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========

extern "C" void set_gpr_ptr(const svOpenArrayHandle a);

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_top__DOT__de__DOT__set_gpr_ptr__Vdpioc2_TOP(const VlUnpacked<QData/*63:0*/, 32> &a) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__de__DOT__set_gpr_ptr__Vdpioc2_TOP\n"); );
    // Body
    static const int a__Vopenprops__ulims[2] = {31, 0};
    static const VerilatedVarProps a__Vopenprops(VLVT_UINT64, VLVD_IN, VerilatedVarProps::Packed(), 63, 0, VerilatedVarProps::Unpacked(), 1, a__Vopenprops__ulims);
    VerilatedDpiOpenVar a__Vopenarray (&a__Vopenprops, &a);
    set_gpr_ptr(&a__Vopenarray);
}

extern "C" void vpmem_read(long long mraddr, long long* mrdata);

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_top__DOT__de__DOT__vpmem_read_TOP(QData/*63:0*/ mraddr, QData/*63:0*/ &mrdata) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__de__DOT__vpmem_read_TOP\n"); );
    // Body
    long long mraddr__Vcvt;
    for (size_t mraddr__Vidx = 0; mraddr__Vidx < 1; ++mraddr__Vidx) mraddr__Vcvt = mraddr;
    long long mrdata__Vcvt;
    vpmem_read(mraddr__Vcvt, &mrdata__Vcvt);
    mrdata = mrdata__Vcvt;
}

extern "C" void vpmem_write(long long waddr, long long wdata, char wmask);

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_top__DOT__de__DOT__vpmem_write_TOP(QData/*63:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ wmask) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__de__DOT__vpmem_write_TOP\n"); );
    // Body
    long long waddr__Vcvt;
    for (size_t waddr__Vidx = 0; waddr__Vidx < 1; ++waddr__Vidx) waddr__Vcvt = waddr;
    long long wdata__Vcvt;
    for (size_t wdata__Vidx = 0; wdata__Vidx < 1; ++wdata__Vidx) wdata__Vcvt = wdata;
    char wmask__Vcvt;
    for (size_t wmask__Vidx = 0; wmask__Vidx < 1; ++wmask__Vidx) wmask__Vcvt = wmask;
    vpmem_write(waddr__Vcvt, wdata__Vcvt, wmask__Vcvt);
}

void Vtop___024root____Vdpiexp_top__DOT__de__DOT__putstate_TOP(Vtop__Syms* __restrict vlSymsp, IData/*31:0*/ &statefh, IData/*31:0*/ &a0, IData/*31:0*/ &pcr, IData/*31:0*/ &dnpcr, IData/*31:0*/ &callreturn, IData/*31:0*/ &Typer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiexp_top__DOT__de__DOT__putstate_TOP\n"); );
    // Variables
    // Body
    statefh = (0x100073U == vlSymsp->TOP.inst);
    a0 = (IData)(vlSymsp->TOP.top__DOT__de__DOT__rdata);
    pcr = vlSymsp->TOP.cpupc;
    dnpcr = vlSymsp->TOP.top__DOT__dnpc;
    callreturn = vlSymsp->TOP.top__DOT__de__DOT__call_return;
    Typer = vlSymsp->TOP.top__DOT__de__DOT__Type;
    ++(vlSymsp->__Vcoverage[502]);
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__4(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__4\n"); );
    // Variables
    VlWide<5>/*159:0*/ __Vtemp387;
    VlWide<7>/*223:0*/ __Vtemp389;
    VlWide<9>/*287:0*/ __Vtemp391;
    VlWide<13>/*415:0*/ __Vtemp394;
    // Body
    if ((1U & ((IData)(vlSymsp->TOP__top__DOT__de__DOT__m1.out) 
               ^ (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__imm)))) {
        ++(vlSymsp->__Vcoverage[732]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xfffffffffffffffeULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | (IData)((IData)((1U & (IData)(vlSymsp->TOP__top__DOT__de__DOT__m1.out)))));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[733]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xfffffffffffffffdULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 1U))))) 
                << 1U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[734]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xfffffffffffffffbULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 2U))))) 
                << 2U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[735]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xfffffffffffffff7ULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 3U))))) 
                << 3U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[736]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xffffffffffffffefULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 4U))))) 
                << 4U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[737]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xffffffffffffffdfULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 5U))))) 
                << 5U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[738]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xffffffffffffffbfULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 6U))))) 
                << 6U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[739]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xffffffffffffff7fULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 7U))))) 
                << 7U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[740]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xfffffffffffffeffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 8U))))) 
                << 8U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[741]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xfffffffffffffdffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 9U))))) 
                << 9U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[742]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xfffffffffffffbffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0xaU))))) 
                << 0xaU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[743]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xfffffffffffff7ffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0xbU))))) 
                << 0xbU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[744]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xffffffffffffefffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0xcU))))) 
                << 0xcU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[745]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xffffffffffffdfffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0xdU))))) 
                << 0xdU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[746]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xffffffffffffbfffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0xeU))))) 
                << 0xeU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[747]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xffffffffffff7fffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0xfU))))) 
                << 0xfU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[748]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xfffffffffffeffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x10U))))) 
                << 0x10U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[749]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xfffffffffffdffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x11U))))) 
                << 0x11U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[750]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xfffffffffffbffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x12U))))) 
                << 0x12U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[751]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xfffffffffff7ffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x13U))))) 
                << 0x13U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[752]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xffffffffffefffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x14U))))) 
                << 0x14U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[753]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xffffffffffdfffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x15U))))) 
                << 0x15U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[754]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xffffffffffbfffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x16U))))) 
                << 0x16U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[755]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xffffffffff7fffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x17U))))) 
                << 0x17U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[756]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xfffffffffeffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x18U))))) 
                << 0x18U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[757]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xfffffffffdffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x19U))))) 
                << 0x19U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[758]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xfffffffffbffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x1aU))))) 
                << 0x1aU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[759]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xfffffffff7ffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x1bU))))) 
                << 0x1bU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[760]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xffffffffefffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x1cU))))) 
                << 0x1cU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[761]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xffffffffdfffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x1dU))))) 
                << 0x1dU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[762]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xffffffffbfffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x1eU))))) 
                << 0x1eU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[763]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xffffffff7fffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x1fU))))) 
                << 0x1fU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[764]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xfffffffeffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x20U))))) 
                << 0x20U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[765]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xfffffffdffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x21U))))) 
                << 0x21U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[766]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xfffffffbffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x22U))))) 
                << 0x22U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[767]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xfffffff7ffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x23U))))) 
                << 0x23U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[768]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xffffffefffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x24U))))) 
                << 0x24U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[769]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xffffffdfffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x25U))))) 
                << 0x25U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[770]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xffffffbfffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x26U))))) 
                << 0x26U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[771]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xffffff7fffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x27U))))) 
                << 0x27U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[772]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xfffffeffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x28U))))) 
                << 0x28U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[773]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xfffffdffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x29U))))) 
                << 0x29U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[774]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xfffffbffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x2aU))))) 
                << 0x2aU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[775]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xfffff7ffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x2bU))))) 
                << 0x2bU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[776]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xffffefffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x2cU))))) 
                << 0x2cU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[777]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xffffdfffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x2dU))))) 
                << 0x2dU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[778]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xffffbfffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x2eU))))) 
                << 0x2eU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[779]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xffff7fffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x2fU))))) 
                << 0x2fU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[780]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xfffeffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x30U))))) 
                << 0x30U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[781]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xfffdffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x31U))))) 
                << 0x31U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[782]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xfffbffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x32U))))) 
                << 0x32U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[783]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xfff7ffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x33U))))) 
                << 0x33U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[784]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xffefffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x34U))))) 
                << 0x34U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[785]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xffdfffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x35U))))) 
                << 0x35U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[786]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xffbfffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x36U))))) 
                << 0x36U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[787]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xff7fffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x37U))))) 
                << 0x37U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[788]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xfeffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x38U))))) 
                << 0x38U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[789]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xfdffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x39U))))) 
                << 0x39U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[790]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xfbffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x3aU))))) 
                << 0x3aU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[791]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xf7ffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x3bU))))) 
                << 0x3bU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[792]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xefffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x3cU))))) 
                << 0x3cU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[793]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xdfffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x3dU))))) 
                << 0x3dU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[794]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0xbfffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x3eU))))) 
                << 0x3eU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__imm 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[795]);
        vlSelf->top__DOT__de__DOT____Vtogcov__imm = 
            ((0x7fffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__imm) 
             | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                               >> 0x3fU))))) 
                << 0x3fU));
    }
    vlSelf->top__DOT__de__DOT__call_return = (((IData)(
                                                       ((0x8000U 
                                                         == 
                                                         (0xf8f80U 
                                                          & vlSelf->inst)) 
                                                        & (0ULL 
                                                           == vlSymsp->TOP__top__DOT__de__DOT__m1.out))) 
                                               & (vlSelf->inst 
                                                  == vlSelf->top__DOT__de__DOT__jalr))
                                               ? 2U
                                               : ((
                                                   (vlSelf->inst 
                                                    == 
                                                    (0x6fU 
                                                     | (0xffffff80U 
                                                        & vlSelf->inst))) 
                                                   | ((vlSelf->inst 
                                                       == vlSelf->top__DOT__de__DOT__jalr) 
                                                      & (IData)(
                                                                ((0x8000U 
                                                                  != 
                                                                  (0xf8f80U 
                                                                   & vlSelf->inst)) 
                                                                 | (0ULL 
                                                                    != vlSymsp->TOP__top__DOT__de__DOT__m1.out)))))
                                                   ? 1U
                                                   : 0U));
    __Vtemp387[3U] = ((7U & ((IData)((((- (QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                                                      >> 0xbU)))))) 
                                       << 0xcU) | (QData)((IData)(
                                                                  (0xfffU 
                                                                   & (IData)(vlSymsp->TOP__top__DOT__de__DOT__m1.out)))))) 
                             >> 0x1aU)) | ((0x38U & 
                                            ((IData)(
                                                     (((- (QData)((IData)(
                                                                          (1U 
                                                                           & (IData)(
                                                                                (vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                                                                >> 0xbU)))))) 
                                                       << 0xcU) 
                                                      | (QData)((IData)(
                                                                        (0xfffU 
                                                                         & (IData)(vlSymsp->TOP__top__DOT__de__DOT__m1.out)))))) 
                                             >> 0x1aU)) 
                                           | ((IData)(
                                                      ((((- (QData)((IData)(
                                                                            (1U 
                                                                             & (IData)(
                                                                                (vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                                                                >> 0xbU)))))) 
                                                         << 0xcU) 
                                                        | (QData)((IData)(
                                                                          (0xfffU 
                                                                           & (IData)(vlSymsp->TOP__top__DOT__de__DOT__m1.out))))) 
                                                       >> 0x20U)) 
                                              << 6U)));
    __Vtemp387[4U] = (0x40U | ((7U & ((IData)(((((- (QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                                                                >> 0xbU)))))) 
                                                 << 0xcU) 
                                                | (QData)((IData)(
                                                                  (0xfffU 
                                                                   & (IData)(vlSymsp->TOP__top__DOT__de__DOT__m1.out))))) 
                                               >> 0x20U)) 
                                      >> 0x1aU)) | 
                               (0x38U & ((IData)(((
                                                   ((- (QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                                                                >> 0xbU)))))) 
                                                    << 0xcU) 
                                                   | (QData)((IData)(
                                                                     (0xfffU 
                                                                      & (IData)(vlSymsp->TOP__top__DOT__de__DOT__m1.out))))) 
                                                  >> 0x20U)) 
                                         >> 0x1aU))));
    __Vtemp389[3U] = ((7U & ((IData)((((- (QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                                                      >> 0xbU)))))) 
                                       << 0xcU) | (QData)((IData)(
                                                                  (0xfffU 
                                                                   & (IData)(vlSymsp->TOP__top__DOT__de__DOT__m1.out)))))) 
                             >> 0x1aU)) | ((0x38U & 
                                            ((IData)(
                                                     (((- (QData)((IData)(
                                                                          (1U 
                                                                           & (IData)(
                                                                                (vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                                                                >> 0xbU)))))) 
                                                       << 0xcU) 
                                                      | (QData)((IData)(
                                                                        (0xfffU 
                                                                         & (IData)(vlSymsp->TOP__top__DOT__de__DOT__m1.out)))))) 
                                             >> 0x1aU)) 
                                           | ((IData)(
                                                      ((((- (QData)((IData)(
                                                                            (1U 
                                                                             & (IData)(
                                                                                (vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                                                                >> 0xbU)))))) 
                                                         << 0xcU) 
                                                        | (QData)((IData)(
                                                                          (0xfffU 
                                                                           & (IData)(vlSymsp->TOP__top__DOT__de__DOT__m1.out))))) 
                                                       >> 0x20U)) 
                                              << 6U)));
    __Vtemp389[4U] = (0x80U | ((7U & ((IData)(((((- (QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                                                                >> 0xbU)))))) 
                                                 << 0xcU) 
                                                | (QData)((IData)(
                                                                  (0xfffU 
                                                                   & (IData)(vlSymsp->TOP__top__DOT__de__DOT__m1.out))))) 
                                               >> 0x20U)) 
                                      >> 0x1aU)) | 
                               (((IData)((((- (QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                                                          >> 0xbU)))))) 
                                           << 0xcU) 
                                          | (QData)((IData)(
                                                            (0xfffU 
                                                             & (IData)(vlSymsp->TOP__top__DOT__de__DOT__m1.out)))))) 
                                 << 9U) | (0x38U & 
                                           ((IData)(
                                                    ((((- (QData)((IData)(
                                                                          (1U 
                                                                           & (IData)(
                                                                                (vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                                                                >> 0xbU)))))) 
                                                       << 0xcU) 
                                                      | (QData)((IData)(
                                                                        (0xfffU 
                                                                         & (IData)(vlSymsp->TOP__top__DOT__de__DOT__m1.out))))) 
                                                     >> 0x20U)) 
                                            >> 0x1aU)))));
    __Vtemp391[3U] = ((7U & ((IData)((((- (QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                                                      >> 0xcU)))))) 
                                       << 0xdU) | (QData)((IData)(
                                                                  (0x1fffU 
                                                                   & (IData)(vlSymsp->TOP__top__DOT__de__DOT__m1.out)))))) 
                             >> 0x1aU)) | ((0x38U & 
                                            ((IData)(
                                                     (((- (QData)((IData)(
                                                                          (1U 
                                                                           & (IData)(
                                                                                (vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                                                                >> 0xcU)))))) 
                                                       << 0xdU) 
                                                      | (QData)((IData)(
                                                                        (0x1fffU 
                                                                         & (IData)(vlSymsp->TOP__top__DOT__de__DOT__m1.out)))))) 
                                             >> 0x1aU)) 
                                           | ((IData)(
                                                      ((((- (QData)((IData)(
                                                                            (1U 
                                                                             & (IData)(
                                                                                (vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                                                                >> 0xcU)))))) 
                                                         << 0xdU) 
                                                        | (QData)((IData)(
                                                                          (0x1fffU 
                                                                           & (IData)(vlSymsp->TOP__top__DOT__de__DOT__m1.out))))) 
                                                       >> 0x20U)) 
                                              << 6U)));
    __Vtemp391[4U] = (0xc0U | ((7U & ((IData)(((((- (QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                                                                >> 0xcU)))))) 
                                                 << 0xdU) 
                                                | (QData)((IData)(
                                                                  (0x1fffU 
                                                                   & (IData)(vlSymsp->TOP__top__DOT__de__DOT__m1.out))))) 
                                               >> 0x20U)) 
                                      >> 0x1aU)) | 
                               (((IData)((((- (QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                                                          >> 0xbU)))))) 
                                           << 0xcU) 
                                          | (QData)((IData)(
                                                            (0xfffU 
                                                             & (IData)(vlSymsp->TOP__top__DOT__de__DOT__m1.out)))))) 
                                 << 9U) | (0x38U & 
                                           ((IData)(
                                                    ((((- (QData)((IData)(
                                                                          (1U 
                                                                           & (IData)(
                                                                                (vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                                                                >> 0xcU)))))) 
                                                       << 0xdU) 
                                                      | (QData)((IData)(
                                                                        (0x1fffU 
                                                                         & (IData)(vlSymsp->TOP__top__DOT__de__DOT__m1.out))))) 
                                                     >> 0x20U)) 
                                            >> 0x1aU)))));
    __Vtemp391[7U] = ((__Vtemp389[4U] >> 0x1dU) | (
                                                   (0x38U 
                                                    & ((IData)(
                                                               (((- (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                                                                >> 0xbU)))))) 
                                                                 << 0xcU) 
                                                                | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & (IData)(vlSymsp->TOP__top__DOT__de__DOT__m1.out)))))) 
                                                       >> 0x14U)) 
                                                   | (__Vtemp387[3U] 
                                                      << 6U)));
    __Vtemp391[8U] = ((7U & (__Vtemp387[3U] >> 0x1aU)) 
                      | ((0x38U & (__Vtemp387[3U] >> 0x1aU)) 
                         | (__Vtemp387[4U] << 6U)));
    __Vtemp394[5U] = ((7U & ((IData)((((QData)((IData)(
                                                       (- (IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                                                              >> 0x1fU))))))) 
                                       << 0x20U) | (QData)((IData)(vlSymsp->TOP__top__DOT__de__DOT__m1.out)))) 
                             >> 0x1aU)) | ((0x38U & 
                                            ((IData)(
                                                     (((QData)((IData)(
                                                                       (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                                                                >> 0x1fU))))))) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(vlSymsp->TOP__top__DOT__de__DOT__m1.out)))) 
                                             >> 0x1aU)) 
                                           | ((IData)(
                                                      ((((QData)((IData)(
                                                                         (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                                                                >> 0x1fU))))))) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(vlSymsp->TOP__top__DOT__de__DOT__m1.out))) 
                                                       >> 0x20U)) 
                                              << 6U)));
    __Vtemp394[6U] = (0x100U | ((7U & ((IData)(((((QData)((IData)(
                                                                  (- (IData)(
                                                                             (1U 
                                                                              & (IData)(
                                                                                (vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                                                                >> 0x1fU))))))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(vlSymsp->TOP__top__DOT__de__DOT__m1.out))) 
                                                >> 0x20U)) 
                                       >> 0x1aU)) | 
                                (((IData)((((- (QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                                                           >> 0xcU)))))) 
                                            << 0xdU) 
                                           | (QData)((IData)(
                                                             (0x1fffU 
                                                              & (IData)(vlSymsp->TOP__top__DOT__de__DOT__m1.out)))))) 
                                  << 9U) | (0x38U & 
                                            ((IData)(
                                                     ((((QData)((IData)(
                                                                        (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                                                                >> 0x1fU))))))) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(vlSymsp->TOP__top__DOT__de__DOT__m1.out))) 
                                                      >> 0x20U)) 
                                             >> 0x1aU)))));
    __Vtemp394[9U] = ((__Vtemp391[4U] >> 0x1dU) | (
                                                   (0x38U 
                                                    & ((IData)(
                                                               (((- (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                                                                >> 0xbU)))))) 
                                                                 << 0xcU) 
                                                                | (QData)((IData)(
                                                                                (0xfffU 
                                                                                & (IData)(vlSymsp->TOP__top__DOT__de__DOT__m1.out)))))) 
                                                       >> 0x14U)) 
                                                   | (__Vtemp389[3U] 
                                                      << 6U)));
    __Vtemp394[0xaU] = ((7U & (__Vtemp389[3U] >> 0x1aU)) 
                        | ((0x38U & (__Vtemp389[3U] 
                                     >> 0x1aU)) | (
                                                   __Vtemp389[4U] 
                                                   << 6U)));
    vlSelf->top__DOT__de__DOT____Vcellinp__m7____pinNumber4[0U] = 0U;
    vlSelf->top__DOT__de__DOT____Vcellinp__m7____pinNumber4[1U] = 0U;
    vlSelf->top__DOT__de__DOT____Vcellinp__m7____pinNumber4[2U] 
        = (7U | ((IData)((((- (QData)((IData)((1U & (IData)(
                                                            (vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                                             >> 0x14U)))))) 
                           << 0x15U) | (QData)((IData)(
                                                       (0x1fffffU 
                                                        & (IData)(vlSymsp->TOP__top__DOT__de__DOT__m1.out)))))) 
                 << 3U));
    vlSelf->top__DOT__de__DOT____Vcellinp__m7____pinNumber4[3U] 
        = (((IData)((((- (QData)((IData)((1U & (IData)(
                                                       (vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                                        >> 0x14U)))))) 
                      << 0x15U) | (QData)((IData)((0x1fffffU 
                                                   & (IData)(vlSymsp->TOP__top__DOT__de__DOT__m1.out)))))) 
            >> 0x1dU) | ((IData)(((((- (QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                                                   >> 0x14U)))))) 
                                    << 0x15U) | (QData)((IData)(
                                                                (0x1fffffU 
                                                                 & (IData)(vlSymsp->TOP__top__DOT__de__DOT__m1.out))))) 
                                  >> 0x20U)) << 3U));
    vlSelf->top__DOT__de__DOT____Vcellinp__m7____pinNumber4[4U] 
        = (0x28U | (((IData)((((QData)((IData)((- (IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                                                      >> 0x1fU))))))) 
                               << 0x20U) | (QData)((IData)(vlSymsp->TOP__top__DOT__de__DOT__m1.out)))) 
                     << 6U) | ((IData)(((((- (QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                                                         >> 0x14U)))))) 
                                          << 0x15U) 
                                         | (QData)((IData)(
                                                           (0x1fffffU 
                                                            & (IData)(vlSymsp->TOP__top__DOT__de__DOT__m1.out))))) 
                                        >> 0x20U)) 
                               >> 0x1dU)));
    vlSelf->top__DOT__de__DOT____Vcellinp__m7____pinNumber4[5U] 
        = __Vtemp394[5U];
    vlSelf->top__DOT__de__DOT____Vcellinp__m7____pinNumber4[6U] 
        = __Vtemp394[6U];
    vlSelf->top__DOT__de__DOT____Vcellinp__m7____pinNumber4[7U] 
        = ((7U & ((IData)((((- (QData)((IData)((1U 
                                                & (IData)(
                                                          (vlSymsp->TOP__top__DOT__de__DOT__m1.out 
                                                           >> 0xcU)))))) 
                            << 0xdU) | (QData)((IData)(
                                                       (0x1fffU 
                                                        & (IData)(vlSymsp->TOP__top__DOT__de__DOT__m1.out)))))) 
                  >> 0x17U)) | (__Vtemp391[3U] << 3U));
    vlSelf->top__DOT__de__DOT____Vcellinp__m7____pinNumber4[8U] 
        = ((__Vtemp391[3U] >> 0x1dU) | (__Vtemp391[4U] 
                                        << 3U));
    vlSelf->top__DOT__de__DOT____Vcellinp__m7____pinNumber4[9U] 
        = __Vtemp394[9U];
    vlSelf->top__DOT__de__DOT____Vcellinp__m7____pinNumber4[0xaU] 
        = __Vtemp394[0xaU];
    vlSelf->top__DOT__de__DOT____Vcellinp__m7____pinNumber4[0xbU] 
        = ((7U & (__Vtemp389[4U] >> 0x1aU)) | (__Vtemp391[7U] 
                                               << 3U));
    vlSelf->top__DOT__de__DOT____Vcellinp__m7____pinNumber4[0xcU] 
        = ((__Vtemp391[7U] >> 0x1dU) | (__Vtemp391[8U] 
                                        << 3U));
    if ((1U & ((IData)(vlSelf->top__DOT__de__DOT__call_return) 
               ^ (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__call_return)))) {
        ++(vlSymsp->__Vcoverage[433]);
        vlSelf->top__DOT__de__DOT____Vtogcov__call_return 
            = ((2U & (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__call_return)) 
               | (1U & (IData)(vlSelf->top__DOT__de__DOT__call_return)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__de__DOT__call_return) 
               ^ (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__call_return)))) {
        ++(vlSymsp->__Vcoverage[434]);
        vlSelf->top__DOT__de__DOT____Vtogcov__call_return 
            = ((1U & (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__call_return)) 
               | (2U & (IData)(vlSelf->top__DOT__de__DOT__call_return)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__de__DOT__call_return) 
               ^ vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr))) {
        ++(vlSymsp->__Vcoverage[435]);
        vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr 
            = ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr) 
               | (1U & (IData)(vlSelf->top__DOT__de__DOT__call_return)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__de__DOT__call_return) 
               ^ vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr))) {
        ++(vlSymsp->__Vcoverage[436]);
        vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr 
            = ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr) 
               | (2U & (IData)(vlSelf->top__DOT__de__DOT__call_return)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__de__DOT__call_return) 
               ^ vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr))) {
        ++(vlSymsp->__Vcoverage[437]);
        vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr 
            = ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr) 
               | (4U & (IData)(vlSelf->top__DOT__de__DOT__call_return)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__de__DOT__call_return) 
               ^ vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr))) {
        ++(vlSymsp->__Vcoverage[438]);
        vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr 
            = ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr) 
               | (8U & (IData)(vlSelf->top__DOT__de__DOT__call_return)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__de__DOT__call_return) 
                  ^ vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr))) {
        ++(vlSymsp->__Vcoverage[439]);
        vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr 
            = ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr) 
               | (0x10U & (IData)(vlSelf->top__DOT__de__DOT__call_return)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__de__DOT__call_return) 
                  ^ vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr))) {
        ++(vlSymsp->__Vcoverage[440]);
        vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr 
            = ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr) 
               | (0x20U & (IData)(vlSelf->top__DOT__de__DOT__call_return)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__de__DOT__call_return) 
                  ^ vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr))) {
        ++(vlSymsp->__Vcoverage[441]);
        vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr 
            = ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr) 
               | (0x40U & (IData)(vlSelf->top__DOT__de__DOT__call_return)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__de__DOT__call_return) 
                  ^ vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr))) {
        ++(vlSymsp->__Vcoverage[442]);
        vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr 
            = ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr) 
               | (0x80U & (IData)(vlSelf->top__DOT__de__DOT__call_return)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__de__DOT__call_return) 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr))) {
        ++(vlSymsp->__Vcoverage[443]);
        vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr 
            = ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr) 
               | (0x100U & (IData)(vlSelf->top__DOT__de__DOT__call_return)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__de__DOT__call_return) 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr))) {
        ++(vlSymsp->__Vcoverage[444]);
        vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr 
            = ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr) 
               | (0x200U & (IData)(vlSelf->top__DOT__de__DOT__call_return)));
    }
    if ((0x400U & ((IData)(vlSelf->top__DOT__de__DOT__call_return) 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr))) {
        ++(vlSymsp->__Vcoverage[445]);
        vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr 
            = ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr) 
               | (0x400U & (IData)(vlSelf->top__DOT__de__DOT__call_return)));
    }
    if ((0x800U & ((IData)(vlSelf->top__DOT__de__DOT__call_return) 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr))) {
        ++(vlSymsp->__Vcoverage[446]);
        vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr 
            = ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr) 
               | (0x800U & (IData)(vlSelf->top__DOT__de__DOT__call_return)));
    }
    if ((0x1000U & ((IData)(vlSelf->top__DOT__de__DOT__call_return) 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr))) {
        ++(vlSymsp->__Vcoverage[447]);
        vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr 
            = ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr) 
               | (0x1000U & (IData)(vlSelf->top__DOT__de__DOT__call_return)));
    }
    if ((0x2000U & ((IData)(vlSelf->top__DOT__de__DOT__call_return) 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr))) {
        ++(vlSymsp->__Vcoverage[448]);
        vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr 
            = ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr) 
               | (0x2000U & (IData)(vlSelf->top__DOT__de__DOT__call_return)));
    }
    if ((0x4000U & ((IData)(vlSelf->top__DOT__de__DOT__call_return) 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr))) {
        ++(vlSymsp->__Vcoverage[449]);
        vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr 
            = ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr) 
               | (0x4000U & (IData)(vlSelf->top__DOT__de__DOT__call_return)));
    }
    if ((0x8000U & ((IData)(vlSelf->top__DOT__de__DOT__call_return) 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr))) {
        ++(vlSymsp->__Vcoverage[450]);
        vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr 
            = ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr) 
               | (0x8000U & (IData)(vlSelf->top__DOT__de__DOT__call_return)));
    }
    if ((0x10000U & ((IData)(vlSelf->top__DOT__de__DOT__call_return) 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr))) {
        ++(vlSymsp->__Vcoverage[451]);
        vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr 
            = ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr) 
               | (0x10000U & (IData)(vlSelf->top__DOT__de__DOT__call_return)));
    }
    if ((0x20000U & ((IData)(vlSelf->top__DOT__de__DOT__call_return) 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr))) {
        ++(vlSymsp->__Vcoverage[452]);
        vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr 
            = ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr) 
               | (0x20000U & (IData)(vlSelf->top__DOT__de__DOT__call_return)));
    }
    if ((0x40000U & ((IData)(vlSelf->top__DOT__de__DOT__call_return) 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr))) {
        ++(vlSymsp->__Vcoverage[453]);
        vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr 
            = ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr) 
               | (0x40000U & (IData)(vlSelf->top__DOT__de__DOT__call_return)));
    }
    if ((0x80000U & ((IData)(vlSelf->top__DOT__de__DOT__call_return) 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr))) {
        ++(vlSymsp->__Vcoverage[454]);
        vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr 
            = ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr) 
               | (0x80000U & (IData)(vlSelf->top__DOT__de__DOT__call_return)));
    }
    if ((0x100000U & ((IData)(vlSelf->top__DOT__de__DOT__call_return) 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr))) {
        ++(vlSymsp->__Vcoverage[455]);
        vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr 
            = ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr) 
               | (0x100000U & (IData)(vlSelf->top__DOT__de__DOT__call_return)));
    }
    if ((0x200000U & ((IData)(vlSelf->top__DOT__de__DOT__call_return) 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr))) {
        ++(vlSymsp->__Vcoverage[456]);
        vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr 
            = ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr) 
               | (0x200000U & (IData)(vlSelf->top__DOT__de__DOT__call_return)));
    }
    if ((0x400000U & ((IData)(vlSelf->top__DOT__de__DOT__call_return) 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr))) {
        ++(vlSymsp->__Vcoverage[457]);
        vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr 
            = ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr) 
               | (0x400000U & (IData)(vlSelf->top__DOT__de__DOT__call_return)));
    }
    if ((0x800000U & ((IData)(vlSelf->top__DOT__de__DOT__call_return) 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr))) {
        ++(vlSymsp->__Vcoverage[458]);
        vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr 
            = ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr) 
               | (0x800000U & (IData)(vlSelf->top__DOT__de__DOT__call_return)));
    }
    if ((0x1000000U & ((IData)(vlSelf->top__DOT__de__DOT__call_return) 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr))) {
        ++(vlSymsp->__Vcoverage[459]);
        vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr 
            = ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr) 
               | (0x1000000U & (IData)(vlSelf->top__DOT__de__DOT__call_return)));
    }
    if ((0x2000000U & ((IData)(vlSelf->top__DOT__de__DOT__call_return) 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr))) {
        ++(vlSymsp->__Vcoverage[460]);
        vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr 
            = ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr) 
               | (0x2000000U & (IData)(vlSelf->top__DOT__de__DOT__call_return)));
    }
    if ((0x4000000U & ((IData)(vlSelf->top__DOT__de__DOT__call_return) 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr))) {
        ++(vlSymsp->__Vcoverage[461]);
        vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr 
            = ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr) 
               | (0x4000000U & (IData)(vlSelf->top__DOT__de__DOT__call_return)));
    }
    if ((0x8000000U & ((IData)(vlSelf->top__DOT__de__DOT__call_return) 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr))) {
        ++(vlSymsp->__Vcoverage[462]);
        vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr 
            = ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr) 
               | (0x8000000U & (IData)(vlSelf->top__DOT__de__DOT__call_return)));
    }
    if ((0x10000000U & ((IData)(vlSelf->top__DOT__de__DOT__call_return) 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr))) {
        ++(vlSymsp->__Vcoverage[463]);
        vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr 
            = ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr) 
               | (0x10000000U & (IData)(vlSelf->top__DOT__de__DOT__call_return)));
    }
    if ((0x20000000U & ((IData)(vlSelf->top__DOT__de__DOT__call_return) 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr))) {
        ++(vlSymsp->__Vcoverage[464]);
        vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr 
            = ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr) 
               | (0x20000000U & (IData)(vlSelf->top__DOT__de__DOT__call_return)));
    }
    if ((0x40000000U & ((IData)(vlSelf->top__DOT__de__DOT__call_return) 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr))) {
        ++(vlSymsp->__Vcoverage[465]);
        vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr) 
               | (0x40000000U & (IData)(vlSelf->top__DOT__de__DOT__call_return)));
    }
    if ((((IData)(vlSelf->top__DOT__de__DOT__call_return) 
          ^ vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[466]);
        vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr 
            = ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__call_returnr) 
               | (0x80000000U & (IData)(vlSelf->top__DOT__de__DOT__call_return)));
    }
}

VL_INLINE_OPT void Vtop___024root___settle__TOP__5(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__5\n"); );
    // Body
    if ((1U & ((IData)(vlSymsp->TOP__top__DOT__de__DOT__m7.out) 
               ^ (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__Simm)))) {
        ++(vlSymsp->__Vcoverage[796]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__de__DOT____Vtogcov__Simm) 
               | (IData)((IData)((1U & (IData)(vlSymsp->TOP__top__DOT__de__DOT__m7.out)))));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[797]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__de__DOT____Vtogcov__Simm) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[798]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__de__DOT____Vtogcov__Simm) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[799]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__de__DOT____Vtogcov__Simm) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[800]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__de__DOT____Vtogcov__Simm) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[801]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__de__DOT____Vtogcov__Simm) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[802]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__de__DOT____Vtogcov__Simm) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[803]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__de__DOT____Vtogcov__Simm) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[804]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__de__DOT____Vtogcov__Simm) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[805]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__de__DOT____Vtogcov__Simm) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[806]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__de__DOT____Vtogcov__Simm) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[807]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__de__DOT____Vtogcov__Simm) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[808]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__de__DOT____Vtogcov__Simm) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[809]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__de__DOT____Vtogcov__Simm) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[810]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__de__DOT____Vtogcov__Simm) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[811]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__de__DOT____Vtogcov__Simm) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[812]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__Simm) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[813]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__Simm) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[814]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__Simm) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[815]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__Simm) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[816]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__Simm) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[817]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__Simm) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[818]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__Simm) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[819]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__Simm) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[820]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__Simm) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[821]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__Simm) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[822]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__Simm) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[823]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__Simm) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[824]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__Simm) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[825]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__Simm) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[826]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__Simm) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[827]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__Simm) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[828]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__Simm) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[829]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__Simm) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[830]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__Simm) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[831]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__Simm) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[832]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__Simm) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[833]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__Simm) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[834]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__Simm) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[835]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__Simm) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[836]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__Simm) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[837]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__Simm) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[838]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__Simm) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[839]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__Simm) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[840]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__Simm) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[841]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__Simm) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[842]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__Simm) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[843]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__Simm) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[844]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__Simm) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[845]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__Simm) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[846]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__Simm) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[847]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__Simm) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[848]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__Simm) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[849]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__Simm) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[850]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__Simm) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[851]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__Simm) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[852]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__Simm) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[853]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__Simm) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[854]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__Simm) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[855]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__Simm) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[856]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__Simm) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[857]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__Simm) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[858]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__Simm) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[859]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Simm 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__Simm) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
}

VL_INLINE_OPT void Vtop___024root___combo__TOP__7(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__7\n"); );
    // Variables
    VlWide<4>/*127:0*/ __Vtemp399;
    VlWide<8>/*255:0*/ __Vtemp400;
    VlWide<9>/*287:0*/ __Vtemp401;
    VlWide<13>/*415:0*/ __Vtemp404;
    VlWide<3>/*95:0*/ __Vtemp489;
    VlWide<3>/*95:0*/ __Vtemp490;
    VlWide<4>/*127:0*/ __Vtemp491;
    VlWide<4>/*127:0*/ __Vtemp492;
    VlWide<5>/*159:0*/ __Vtemp493;
    VlWide<5>/*159:0*/ __Vtemp494;
    VlWide<6>/*191:0*/ __Vtemp495;
    VlWide<6>/*191:0*/ __Vtemp496;
    VlWide<7>/*223:0*/ __Vtemp497;
    VlWide<7>/*223:0*/ __Vtemp498;
    VlWide<8>/*255:0*/ __Vtemp499;
    VlWide<8>/*255:0*/ __Vtemp500;
    VlWide<9>/*287:0*/ __Vtemp501;
    VlWide<9>/*287:0*/ __Vtemp502;
    VlWide<10>/*319:0*/ __Vtemp503;
    VlWide<10>/*319:0*/ __Vtemp504;
    VlWide<11>/*351:0*/ __Vtemp505;
    VlWide<12>/*383:0*/ __Vtemp506;
    VlWide<13>/*415:0*/ __Vtemp507;
    VlWide<13>/*415:0*/ __Vtemp508;
    VlWide<14>/*447:0*/ __Vtemp509;
    VlWide<14>/*447:0*/ __Vtemp510;
    VlWide<16>/*511:0*/ __Vtemp575;
    VlWide<16>/*511:0*/ __Vtemp576;
    VlWide<17>/*543:0*/ __Vtemp577;
    VlWide<17>/*543:0*/ __Vtemp578;
    VlWide<18>/*575:0*/ __Vtemp579;
    VlWide<18>/*575:0*/ __Vtemp580;
    VlWide<19>/*607:0*/ __Vtemp581;
    VlWide<19>/*607:0*/ __Vtemp582;
    VlWide<20>/*639:0*/ __Vtemp583;
    VlWide<20>/*639:0*/ __Vtemp584;
    VlWide<21>/*671:0*/ __Vtemp585;
    VlWide<21>/*671:0*/ __Vtemp586;
    // Body
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
    __Vtemp399[2U] = (((IData)((((QData)((IData)((vlSelf->inst 
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
    __Vtemp400[4U] = ((0x7fffffU & ((IData)((((QData)((IData)(
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
    __Vtemp400[5U] = (0x8000000U | ((0x7fffffU & ((IData)(
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
                                        << 0x1dU) | 
                                       (0x3800000U 
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
    __Vtemp400[6U] = ((0x7fffffU & ((IData)((QData)((IData)(
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
    __Vtemp400[7U] = (0x20000000U | ((0x7fffffU & ((IData)(
                                                           ((QData)((IData)(
                                                                            (vlSelf->inst 
                                                                             >> 0x14U))) 
                                                            >> 0x20U)) 
                                                   >> 3U)) 
                                     | ((0x3800000U 
                                         & ((IData)(
                                                    ((QData)((IData)(
                                                                     (vlSelf->inst 
                                                                      >> 0x14U))) 
                                                     >> 0x20U)) 
                                            >> 3U)) 
                                        | (0x1c000000U 
                                           & ((IData)(
                                                      ((QData)((IData)(
                                                                       (vlSelf->inst 
                                                                        >> 0x14U))) 
                                                       >> 0x20U)) 
                                              >> 3U)))));
    __Vtemp401[3U] = ((__Vtemp399[2U] >> 0x11U) | (0xffff8000U 
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
    __Vtemp401[4U] = (0xc0U | (((0x7e00U & ((IData)(
                                                    (((QData)((IData)(
                                                                      (vlSelf->inst 
                                                                       >> 0x19U))) 
                                                      << 5U) 
                                                     | (QData)((IData)(
                                                                       (0x1fU 
                                                                        & (vlSelf->inst 
                                                                           >> 7U)))))) 
                                            << 9U)) 
                                | ((IData)(((((QData)((IData)(
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
                                   >> 0x1aU)) | (__Vtemp400[4U] 
                                                 << 0xfU)));
    __Vtemp404[5U] = ((7U & ((IData)((0x40000000000000ULL 
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
    __Vtemp404[6U] = ((7U & ((IData)(((0x40000000000000ULL 
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
                         | (__Vtemp399[2U] << 0x12U)));
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
        = __Vtemp404[5U];
    vlSelf->top__DOT__de__DOT____Vcellinp__m1____pinNumber4[6U] 
        = __Vtemp404[6U];
    vlSelf->top__DOT__de__DOT____Vcellinp__m1____pinNumber4[7U] 
        = ((7U & (__Vtemp399[2U] >> 0xeU)) | (__Vtemp401[3U] 
                                              << 3U));
    vlSelf->top__DOT__de__DOT____Vcellinp__m1____pinNumber4[8U] 
        = ((__Vtemp401[3U] >> 0x1dU) | (__Vtemp401[4U] 
                                        << 3U));
    vlSelf->top__DOT__de__DOT____Vcellinp__m1____pinNumber4[9U] 
        = ((__Vtemp401[4U] >> 0x1dU) | ((0x3fff8U & 
                                         (__Vtemp400[4U] 
                                          >> 0xeU)) 
                                        | (__Vtemp400[5U] 
                                           << 0x12U)));
    vlSelf->top__DOT__de__DOT____Vcellinp__m1____pinNumber4[0xaU] 
        = ((7U & (__Vtemp400[5U] >> 0xeU)) | ((0x3fff8U 
                                               & (__Vtemp400[5U] 
                                                  >> 0xeU)) 
                                              | (__Vtemp400[6U] 
                                                 << 0x12U)));
    vlSelf->top__DOT__de__DOT____Vcellinp__m1____pinNumber4[0xbU] 
        = ((7U & (__Vtemp400[6U] >> 0xeU)) | ((0x3fff8U 
                                               & (__Vtemp400[6U] 
                                                  >> 0xeU)) 
                                              | (__Vtemp400[7U] 
                                                 << 0x12U)));
    vlSelf->top__DOT__de__DOT____Vcellinp__m1____pinNumber4[0xcU] 
        = ((7U & (__Vtemp400[7U] >> 0xeU)) | (0x3fff8U 
                                              & (__Vtemp400[7U] 
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
    vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__lut_out 
        = ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__data_list
           [0U]);
    ++(vlSymsp->__Vcoverage[4286]);
    ++(vlSymsp->__Vcoverage[4288]);
    ++(vlSymsp->__Vcoverage[4289]);
    vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__hit 
        = (vlSelf->inst == vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__i = 1U;
    vlSelf->top__DOT__de__DOT__raddr = ((IData)(vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__hit)
                                         ? (IData)(vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__lut_out)
                                         : 0U);
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
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__lw 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[2744]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lw = 
            ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lw) 
             | (0x800000U & vlSelf->top__DOT__de__DOT__lw));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__lw 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[2745]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lw = 
            ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lw) 
             | (0x1000000U & vlSelf->top__DOT__de__DOT__lw));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__lw 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[2746]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lw = 
            ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lw) 
             | (0x2000000U & vlSelf->top__DOT__de__DOT__lw));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__lw 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[2747]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lw = 
            ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lw) 
             | (0x4000000U & vlSelf->top__DOT__de__DOT__lw));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__lw 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[2748]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lw = 
            ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lw) 
             | (0x8000000U & vlSelf->top__DOT__de__DOT__lw));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__lw 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[2749]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lw = 
            ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lw) 
             | (0x10000000U & vlSelf->top__DOT__de__DOT__lw));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__lw 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[2750]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lw = 
            ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lw) 
             | (0x20000000U & vlSelf->top__DOT__de__DOT__lw));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__lw 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[2751]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lw = 
            ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lw) 
             | (0x40000000U & vlSelf->top__DOT__de__DOT__lw));
    }
    if (((vlSelf->top__DOT__de__DOT__lw ^ vlSelf->top__DOT__de__DOT____Vtogcov__lw) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2752]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lw = 
            ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lw) 
             | (0x80000000U & vlSelf->top__DOT__de__DOT__lw));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__lh ^ vlSelf->top__DOT__de__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[2753]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lh = 
            ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__lh) 
             | (1U & vlSelf->top__DOT__de__DOT__lh));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__lh ^ vlSelf->top__DOT__de__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[2754]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lh = 
            ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__lh) 
             | (2U & vlSelf->top__DOT__de__DOT__lh));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__lh ^ vlSelf->top__DOT__de__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[2755]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lh = 
            ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__lh) 
             | (4U & vlSelf->top__DOT__de__DOT__lh));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__lh ^ vlSelf->top__DOT__de__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[2756]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lh = 
            ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__lh) 
             | (8U & vlSelf->top__DOT__de__DOT__lh));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__lh ^ vlSelf->top__DOT__de__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[2757]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lh = 
            ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__lh) 
             | (0x10U & vlSelf->top__DOT__de__DOT__lh));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__lh ^ vlSelf->top__DOT__de__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[2758]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lh = 
            ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__lh) 
             | (0x20U & vlSelf->top__DOT__de__DOT__lh));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__lh ^ vlSelf->top__DOT__de__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[2759]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lh = 
            ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__lh) 
             | (0x40U & vlSelf->top__DOT__de__DOT__lh));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__lh ^ vlSelf->top__DOT__de__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[2760]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lh = 
            ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__lh) 
             | (0x80U & vlSelf->top__DOT__de__DOT__lh));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__lh ^ vlSelf->top__DOT__de__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[2761]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lh = 
            ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__lh) 
             | (0x100U & vlSelf->top__DOT__de__DOT__lh));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__lh ^ vlSelf->top__DOT__de__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[2762]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lh = 
            ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__lh) 
             | (0x200U & vlSelf->top__DOT__de__DOT__lh));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__lh ^ vlSelf->top__DOT__de__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[2763]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lh = 
            ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__lh) 
             | (0x400U & vlSelf->top__DOT__de__DOT__lh));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__lh ^ vlSelf->top__DOT__de__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[2764]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lh = 
            ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__lh) 
             | (0x800U & vlSelf->top__DOT__de__DOT__lh));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__lh ^ vlSelf->top__DOT__de__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[2765]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lh = 
            ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__lh) 
             | (0x1000U & vlSelf->top__DOT__de__DOT__lh));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__lh ^ vlSelf->top__DOT__de__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[2766]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lh = 
            ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__lh) 
             | (0x2000U & vlSelf->top__DOT__de__DOT__lh));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__lh ^ vlSelf->top__DOT__de__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[2767]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lh = 
            ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__lh) 
             | (0x4000U & vlSelf->top__DOT__de__DOT__lh));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__lh ^ vlSelf->top__DOT__de__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[2768]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lh = 
            ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__lh) 
             | (0x8000U & vlSelf->top__DOT__de__DOT__lh));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__lh 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[2769]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lh = 
            ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lh) 
             | (0x10000U & vlSelf->top__DOT__de__DOT__lh));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__lh 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[2770]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lh = 
            ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lh) 
             | (0x20000U & vlSelf->top__DOT__de__DOT__lh));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__lh 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[2771]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lh = 
            ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lh) 
             | (0x40000U & vlSelf->top__DOT__de__DOT__lh));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__lh 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[2772]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lh = 
            ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lh) 
             | (0x80000U & vlSelf->top__DOT__de__DOT__lh));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__lh 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[2773]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lh = 
            ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lh) 
             | (0x100000U & vlSelf->top__DOT__de__DOT__lh));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__lh 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[2774]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lh = 
            ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lh) 
             | (0x200000U & vlSelf->top__DOT__de__DOT__lh));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__lh 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[2775]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lh = 
            ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lh) 
             | (0x400000U & vlSelf->top__DOT__de__DOT__lh));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__lh 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[2776]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lh = 
            ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lh) 
             | (0x800000U & vlSelf->top__DOT__de__DOT__lh));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__lh 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[2777]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lh = 
            ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lh) 
             | (0x1000000U & vlSelf->top__DOT__de__DOT__lh));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__lh 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[2778]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lh = 
            ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lh) 
             | (0x2000000U & vlSelf->top__DOT__de__DOT__lh));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__lh 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[2779]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lh = 
            ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lh) 
             | (0x4000000U & vlSelf->top__DOT__de__DOT__lh));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__lh 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[2780]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lh = 
            ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lh) 
             | (0x8000000U & vlSelf->top__DOT__de__DOT__lh));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__lh 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[2781]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lh = 
            ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lh) 
             | (0x10000000U & vlSelf->top__DOT__de__DOT__lh));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__lh 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[2782]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lh = 
            ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lh) 
             | (0x20000000U & vlSelf->top__DOT__de__DOT__lh));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__lh 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[2783]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lh = 
            ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lh) 
             | (0x40000000U & vlSelf->top__DOT__de__DOT__lh));
    }
    if (((vlSelf->top__DOT__de__DOT__lh ^ vlSelf->top__DOT__de__DOT____Vtogcov__lh) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2784]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lh = 
            ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lh) 
             | (0x80000000U & vlSelf->top__DOT__de__DOT__lh));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__lb ^ vlSelf->top__DOT__de__DOT____Vtogcov__lb))) {
        ++(vlSymsp->__Vcoverage[2785]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lb = 
            ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__lb) 
             | (1U & vlSelf->top__DOT__de__DOT__lb));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__lb ^ vlSelf->top__DOT__de__DOT____Vtogcov__lb))) {
        ++(vlSymsp->__Vcoverage[2786]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lb = 
            ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__lb) 
             | (2U & vlSelf->top__DOT__de__DOT__lb));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__lb ^ vlSelf->top__DOT__de__DOT____Vtogcov__lb))) {
        ++(vlSymsp->__Vcoverage[2787]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lb = 
            ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__lb) 
             | (4U & vlSelf->top__DOT__de__DOT__lb));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__lb ^ vlSelf->top__DOT__de__DOT____Vtogcov__lb))) {
        ++(vlSymsp->__Vcoverage[2788]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lb = 
            ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__lb) 
             | (8U & vlSelf->top__DOT__de__DOT__lb));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__lb ^ vlSelf->top__DOT__de__DOT____Vtogcov__lb))) {
        ++(vlSymsp->__Vcoverage[2789]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lb = 
            ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__lb) 
             | (0x10U & vlSelf->top__DOT__de__DOT__lb));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__lb ^ vlSelf->top__DOT__de__DOT____Vtogcov__lb))) {
        ++(vlSymsp->__Vcoverage[2790]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lb = 
            ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__lb) 
             | (0x20U & vlSelf->top__DOT__de__DOT__lb));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__lb ^ vlSelf->top__DOT__de__DOT____Vtogcov__lb))) {
        ++(vlSymsp->__Vcoverage[2791]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lb = 
            ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__lb) 
             | (0x40U & vlSelf->top__DOT__de__DOT__lb));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__lb ^ vlSelf->top__DOT__de__DOT____Vtogcov__lb))) {
        ++(vlSymsp->__Vcoverage[2792]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lb = 
            ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__lb) 
             | (0x80U & vlSelf->top__DOT__de__DOT__lb));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__lb ^ vlSelf->top__DOT__de__DOT____Vtogcov__lb))) {
        ++(vlSymsp->__Vcoverage[2793]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lb = 
            ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__lb) 
             | (0x100U & vlSelf->top__DOT__de__DOT__lb));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__lb ^ vlSelf->top__DOT__de__DOT____Vtogcov__lb))) {
        ++(vlSymsp->__Vcoverage[2794]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lb = 
            ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__lb) 
             | (0x200U & vlSelf->top__DOT__de__DOT__lb));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__lb ^ vlSelf->top__DOT__de__DOT____Vtogcov__lb))) {
        ++(vlSymsp->__Vcoverage[2795]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lb = 
            ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__lb) 
             | (0x400U & vlSelf->top__DOT__de__DOT__lb));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__lb ^ vlSelf->top__DOT__de__DOT____Vtogcov__lb))) {
        ++(vlSymsp->__Vcoverage[2796]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lb = 
            ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__lb) 
             | (0x800U & vlSelf->top__DOT__de__DOT__lb));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__lb ^ vlSelf->top__DOT__de__DOT____Vtogcov__lb))) {
        ++(vlSymsp->__Vcoverage[2797]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lb = 
            ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__lb) 
             | (0x1000U & vlSelf->top__DOT__de__DOT__lb));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__lb ^ vlSelf->top__DOT__de__DOT____Vtogcov__lb))) {
        ++(vlSymsp->__Vcoverage[2798]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lb = 
            ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__lb) 
             | (0x2000U & vlSelf->top__DOT__de__DOT__lb));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__lb ^ vlSelf->top__DOT__de__DOT____Vtogcov__lb))) {
        ++(vlSymsp->__Vcoverage[2799]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lb = 
            ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__lb) 
             | (0x4000U & vlSelf->top__DOT__de__DOT__lb));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__lb ^ vlSelf->top__DOT__de__DOT____Vtogcov__lb))) {
        ++(vlSymsp->__Vcoverage[2800]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lb = 
            ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__lb) 
             | (0x8000U & vlSelf->top__DOT__de__DOT__lb));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__lb 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__lb))) {
        ++(vlSymsp->__Vcoverage[2801]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lb = 
            ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lb) 
             | (0x10000U & vlSelf->top__DOT__de__DOT__lb));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__lb 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__lb))) {
        ++(vlSymsp->__Vcoverage[2802]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lb = 
            ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lb) 
             | (0x20000U & vlSelf->top__DOT__de__DOT__lb));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__lb 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__lb))) {
        ++(vlSymsp->__Vcoverage[2803]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lb = 
            ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lb) 
             | (0x40000U & vlSelf->top__DOT__de__DOT__lb));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__lb 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__lb))) {
        ++(vlSymsp->__Vcoverage[2804]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lb = 
            ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lb) 
             | (0x80000U & vlSelf->top__DOT__de__DOT__lb));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__lb 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__lb))) {
        ++(vlSymsp->__Vcoverage[2805]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lb = 
            ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lb) 
             | (0x100000U & vlSelf->top__DOT__de__DOT__lb));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__lb 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__lb))) {
        ++(vlSymsp->__Vcoverage[2806]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lb = 
            ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lb) 
             | (0x200000U & vlSelf->top__DOT__de__DOT__lb));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__lb 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__lb))) {
        ++(vlSymsp->__Vcoverage[2807]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lb = 
            ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lb) 
             | (0x400000U & vlSelf->top__DOT__de__DOT__lb));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__lb 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__lb))) {
        ++(vlSymsp->__Vcoverage[2808]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lb = 
            ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lb) 
             | (0x800000U & vlSelf->top__DOT__de__DOT__lb));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__lb 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__lb))) {
        ++(vlSymsp->__Vcoverage[2809]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lb = 
            ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lb) 
             | (0x1000000U & vlSelf->top__DOT__de__DOT__lb));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__lb 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__lb))) {
        ++(vlSymsp->__Vcoverage[2810]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lb = 
            ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lb) 
             | (0x2000000U & vlSelf->top__DOT__de__DOT__lb));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__lb 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__lb))) {
        ++(vlSymsp->__Vcoverage[2811]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lb = 
            ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lb) 
             | (0x4000000U & vlSelf->top__DOT__de__DOT__lb));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__lb 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__lb))) {
        ++(vlSymsp->__Vcoverage[2812]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lb = 
            ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lb) 
             | (0x8000000U & vlSelf->top__DOT__de__DOT__lb));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__lb 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__lb))) {
        ++(vlSymsp->__Vcoverage[2813]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lb = 
            ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lb) 
             | (0x10000000U & vlSelf->top__DOT__de__DOT__lb));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__lb 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__lb))) {
        ++(vlSymsp->__Vcoverage[2814]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lb = 
            ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lb) 
             | (0x20000000U & vlSelf->top__DOT__de__DOT__lb));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__lb 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__lb))) {
        ++(vlSymsp->__Vcoverage[2815]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lb = 
            ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lb) 
             | (0x40000000U & vlSelf->top__DOT__de__DOT__lb));
    }
    if (((vlSelf->top__DOT__de__DOT__lb ^ vlSelf->top__DOT__de__DOT____Vtogcov__lb) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2816]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lb = 
            ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lb) 
             | (0x80000000U & vlSelf->top__DOT__de__DOT__lb));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__lbu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lbu))) {
        ++(vlSymsp->__Vcoverage[2817]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lbu = 
            ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__lbu) 
             | (1U & vlSelf->top__DOT__de__DOT__lbu));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__lbu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lbu))) {
        ++(vlSymsp->__Vcoverage[2818]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lbu = 
            ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__lbu) 
             | (2U & vlSelf->top__DOT__de__DOT__lbu));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__lbu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lbu))) {
        ++(vlSymsp->__Vcoverage[2819]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lbu = 
            ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__lbu) 
             | (4U & vlSelf->top__DOT__de__DOT__lbu));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__lbu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lbu))) {
        ++(vlSymsp->__Vcoverage[2820]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lbu = 
            ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__lbu) 
             | (8U & vlSelf->top__DOT__de__DOT__lbu));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__lbu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lbu))) {
        ++(vlSymsp->__Vcoverage[2821]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lbu = 
            ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__lbu) 
             | (0x10U & vlSelf->top__DOT__de__DOT__lbu));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__lbu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lbu))) {
        ++(vlSymsp->__Vcoverage[2822]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lbu = 
            ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__lbu) 
             | (0x20U & vlSelf->top__DOT__de__DOT__lbu));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__lbu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lbu))) {
        ++(vlSymsp->__Vcoverage[2823]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lbu = 
            ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__lbu) 
             | (0x40U & vlSelf->top__DOT__de__DOT__lbu));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__lbu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lbu))) {
        ++(vlSymsp->__Vcoverage[2824]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lbu = 
            ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__lbu) 
             | (0x80U & vlSelf->top__DOT__de__DOT__lbu));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__lbu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lbu))) {
        ++(vlSymsp->__Vcoverage[2825]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lbu = 
            ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__lbu) 
             | (0x100U & vlSelf->top__DOT__de__DOT__lbu));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__lbu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lbu))) {
        ++(vlSymsp->__Vcoverage[2826]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lbu = 
            ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__lbu) 
             | (0x200U & vlSelf->top__DOT__de__DOT__lbu));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__lbu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lbu))) {
        ++(vlSymsp->__Vcoverage[2827]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lbu = 
            ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__lbu) 
             | (0x400U & vlSelf->top__DOT__de__DOT__lbu));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__lbu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lbu))) {
        ++(vlSymsp->__Vcoverage[2828]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lbu = 
            ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__lbu) 
             | (0x800U & vlSelf->top__DOT__de__DOT__lbu));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__lbu 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__lbu))) {
        ++(vlSymsp->__Vcoverage[2829]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lbu = 
            ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__lbu) 
             | (0x1000U & vlSelf->top__DOT__de__DOT__lbu));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__lbu 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__lbu))) {
        ++(vlSymsp->__Vcoverage[2830]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lbu = 
            ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__lbu) 
             | (0x2000U & vlSelf->top__DOT__de__DOT__lbu));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__lbu 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__lbu))) {
        ++(vlSymsp->__Vcoverage[2831]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lbu = 
            ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__lbu) 
             | (0x4000U & vlSelf->top__DOT__de__DOT__lbu));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__lbu 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__lbu))) {
        ++(vlSymsp->__Vcoverage[2832]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lbu = 
            ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__lbu) 
             | (0x8000U & vlSelf->top__DOT__de__DOT__lbu));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__lbu 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__lbu))) {
        ++(vlSymsp->__Vcoverage[2833]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lbu = 
            ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lbu) 
             | (0x10000U & vlSelf->top__DOT__de__DOT__lbu));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__lbu 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__lbu))) {
        ++(vlSymsp->__Vcoverage[2834]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lbu = 
            ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lbu) 
             | (0x20000U & vlSelf->top__DOT__de__DOT__lbu));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__lbu 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__lbu))) {
        ++(vlSymsp->__Vcoverage[2835]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lbu = 
            ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lbu) 
             | (0x40000U & vlSelf->top__DOT__de__DOT__lbu));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__lbu 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__lbu))) {
        ++(vlSymsp->__Vcoverage[2836]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lbu = 
            ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lbu) 
             | (0x80000U & vlSelf->top__DOT__de__DOT__lbu));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__lbu 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__lbu))) {
        ++(vlSymsp->__Vcoverage[2837]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lbu = 
            ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lbu) 
             | (0x100000U & vlSelf->top__DOT__de__DOT__lbu));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__lbu 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__lbu))) {
        ++(vlSymsp->__Vcoverage[2838]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lbu = 
            ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lbu) 
             | (0x200000U & vlSelf->top__DOT__de__DOT__lbu));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__lbu 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__lbu))) {
        ++(vlSymsp->__Vcoverage[2839]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lbu = 
            ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lbu) 
             | (0x400000U & vlSelf->top__DOT__de__DOT__lbu));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__lbu 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__lbu))) {
        ++(vlSymsp->__Vcoverage[2840]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lbu = 
            ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lbu) 
             | (0x800000U & vlSelf->top__DOT__de__DOT__lbu));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__lbu 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__lbu))) {
        ++(vlSymsp->__Vcoverage[2841]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lbu = 
            ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lbu) 
             | (0x1000000U & vlSelf->top__DOT__de__DOT__lbu));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__lbu 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__lbu))) {
        ++(vlSymsp->__Vcoverage[2842]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lbu = 
            ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lbu) 
             | (0x2000000U & vlSelf->top__DOT__de__DOT__lbu));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__lbu 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__lbu))) {
        ++(vlSymsp->__Vcoverage[2843]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lbu = 
            ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lbu) 
             | (0x4000000U & vlSelf->top__DOT__de__DOT__lbu));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__lbu 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__lbu))) {
        ++(vlSymsp->__Vcoverage[2844]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lbu = 
            ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lbu) 
             | (0x8000000U & vlSelf->top__DOT__de__DOT__lbu));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__lbu 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__lbu))) {
        ++(vlSymsp->__Vcoverage[2845]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lbu = 
            ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lbu) 
             | (0x10000000U & vlSelf->top__DOT__de__DOT__lbu));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__lbu 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__lbu))) {
        ++(vlSymsp->__Vcoverage[2846]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lbu = 
            ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lbu) 
             | (0x20000000U & vlSelf->top__DOT__de__DOT__lbu));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__lbu 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__lbu))) {
        ++(vlSymsp->__Vcoverage[2847]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lbu = 
            ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lbu) 
             | (0x40000000U & vlSelf->top__DOT__de__DOT__lbu));
    }
    if (((vlSelf->top__DOT__de__DOT__lbu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lbu) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2848]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lbu = 
            ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lbu) 
             | (0x80000000U & vlSelf->top__DOT__de__DOT__lbu));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__lwu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lwu))) {
        ++(vlSymsp->__Vcoverage[2849]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lwu = 
            ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__lwu) 
             | (1U & vlSelf->top__DOT__de__DOT__lwu));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__lwu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lwu))) {
        ++(vlSymsp->__Vcoverage[2850]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lwu = 
            ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__lwu) 
             | (2U & vlSelf->top__DOT__de__DOT__lwu));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__lwu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lwu))) {
        ++(vlSymsp->__Vcoverage[2851]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lwu = 
            ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__lwu) 
             | (4U & vlSelf->top__DOT__de__DOT__lwu));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__lwu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lwu))) {
        ++(vlSymsp->__Vcoverage[2852]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lwu = 
            ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__lwu) 
             | (8U & vlSelf->top__DOT__de__DOT__lwu));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__lwu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lwu))) {
        ++(vlSymsp->__Vcoverage[2853]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lwu = 
            ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__lwu) 
             | (0x10U & vlSelf->top__DOT__de__DOT__lwu));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__lwu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lwu))) {
        ++(vlSymsp->__Vcoverage[2854]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lwu = 
            ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__lwu) 
             | (0x20U & vlSelf->top__DOT__de__DOT__lwu));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__lwu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lwu))) {
        ++(vlSymsp->__Vcoverage[2855]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lwu = 
            ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__lwu) 
             | (0x40U & vlSelf->top__DOT__de__DOT__lwu));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__lwu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lwu))) {
        ++(vlSymsp->__Vcoverage[2856]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lwu = 
            ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__lwu) 
             | (0x80U & vlSelf->top__DOT__de__DOT__lwu));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__lwu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lwu))) {
        ++(vlSymsp->__Vcoverage[2857]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lwu = 
            ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__lwu) 
             | (0x100U & vlSelf->top__DOT__de__DOT__lwu));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__lwu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lwu))) {
        ++(vlSymsp->__Vcoverage[2858]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lwu = 
            ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__lwu) 
             | (0x200U & vlSelf->top__DOT__de__DOT__lwu));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__lwu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lwu))) {
        ++(vlSymsp->__Vcoverage[2859]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lwu = 
            ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__lwu) 
             | (0x400U & vlSelf->top__DOT__de__DOT__lwu));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__lwu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lwu))) {
        ++(vlSymsp->__Vcoverage[2860]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lwu = 
            ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__lwu) 
             | (0x800U & vlSelf->top__DOT__de__DOT__lwu));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__lwu 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__lwu))) {
        ++(vlSymsp->__Vcoverage[2861]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lwu = 
            ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__lwu) 
             | (0x1000U & vlSelf->top__DOT__de__DOT__lwu));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__lwu 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__lwu))) {
        ++(vlSymsp->__Vcoverage[2862]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lwu = 
            ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__lwu) 
             | (0x2000U & vlSelf->top__DOT__de__DOT__lwu));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__lwu 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__lwu))) {
        ++(vlSymsp->__Vcoverage[2863]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lwu = 
            ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__lwu) 
             | (0x4000U & vlSelf->top__DOT__de__DOT__lwu));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__lwu 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__lwu))) {
        ++(vlSymsp->__Vcoverage[2864]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lwu = 
            ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__lwu) 
             | (0x8000U & vlSelf->top__DOT__de__DOT__lwu));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__lwu 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__lwu))) {
        ++(vlSymsp->__Vcoverage[2865]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lwu = 
            ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lwu) 
             | (0x10000U & vlSelf->top__DOT__de__DOT__lwu));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__lwu 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__lwu))) {
        ++(vlSymsp->__Vcoverage[2866]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lwu = 
            ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lwu) 
             | (0x20000U & vlSelf->top__DOT__de__DOT__lwu));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__lwu 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__lwu))) {
        ++(vlSymsp->__Vcoverage[2867]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lwu = 
            ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lwu) 
             | (0x40000U & vlSelf->top__DOT__de__DOT__lwu));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__lwu 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__lwu))) {
        ++(vlSymsp->__Vcoverage[2868]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lwu = 
            ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lwu) 
             | (0x80000U & vlSelf->top__DOT__de__DOT__lwu));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__lwu 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__lwu))) {
        ++(vlSymsp->__Vcoverage[2869]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lwu = 
            ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lwu) 
             | (0x100000U & vlSelf->top__DOT__de__DOT__lwu));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__lwu 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__lwu))) {
        ++(vlSymsp->__Vcoverage[2870]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lwu = 
            ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lwu) 
             | (0x200000U & vlSelf->top__DOT__de__DOT__lwu));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__lwu 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__lwu))) {
        ++(vlSymsp->__Vcoverage[2871]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lwu = 
            ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lwu) 
             | (0x400000U & vlSelf->top__DOT__de__DOT__lwu));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__lwu 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__lwu))) {
        ++(vlSymsp->__Vcoverage[2872]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lwu = 
            ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lwu) 
             | (0x800000U & vlSelf->top__DOT__de__DOT__lwu));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__lwu 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__lwu))) {
        ++(vlSymsp->__Vcoverage[2873]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lwu = 
            ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lwu) 
             | (0x1000000U & vlSelf->top__DOT__de__DOT__lwu));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__lwu 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__lwu))) {
        ++(vlSymsp->__Vcoverage[2874]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lwu = 
            ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lwu) 
             | (0x2000000U & vlSelf->top__DOT__de__DOT__lwu));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__lwu 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__lwu))) {
        ++(vlSymsp->__Vcoverage[2875]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lwu = 
            ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lwu) 
             | (0x4000000U & vlSelf->top__DOT__de__DOT__lwu));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__lwu 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__lwu))) {
        ++(vlSymsp->__Vcoverage[2876]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lwu = 
            ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lwu) 
             | (0x8000000U & vlSelf->top__DOT__de__DOT__lwu));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__lwu 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__lwu))) {
        ++(vlSymsp->__Vcoverage[2877]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lwu = 
            ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lwu) 
             | (0x10000000U & vlSelf->top__DOT__de__DOT__lwu));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__lwu 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__lwu))) {
        ++(vlSymsp->__Vcoverage[2878]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lwu = 
            ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lwu) 
             | (0x20000000U & vlSelf->top__DOT__de__DOT__lwu));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__lwu 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__lwu))) {
        ++(vlSymsp->__Vcoverage[2879]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lwu = 
            ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lwu) 
             | (0x40000000U & vlSelf->top__DOT__de__DOT__lwu));
    }
    if (((vlSelf->top__DOT__de__DOT__lwu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lwu) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2880]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lwu = 
            ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lwu) 
             | (0x80000000U & vlSelf->top__DOT__de__DOT__lwu));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__lhu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lhu))) {
        ++(vlSymsp->__Vcoverage[2881]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lhu = 
            ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__lhu) 
             | (1U & vlSelf->top__DOT__de__DOT__lhu));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__lhu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lhu))) {
        ++(vlSymsp->__Vcoverage[2882]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lhu = 
            ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__lhu) 
             | (2U & vlSelf->top__DOT__de__DOT__lhu));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__lhu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lhu))) {
        ++(vlSymsp->__Vcoverage[2883]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lhu = 
            ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__lhu) 
             | (4U & vlSelf->top__DOT__de__DOT__lhu));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__lhu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lhu))) {
        ++(vlSymsp->__Vcoverage[2884]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lhu = 
            ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__lhu) 
             | (8U & vlSelf->top__DOT__de__DOT__lhu));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__lhu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lhu))) {
        ++(vlSymsp->__Vcoverage[2885]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lhu = 
            ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__lhu) 
             | (0x10U & vlSelf->top__DOT__de__DOT__lhu));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__lhu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lhu))) {
        ++(vlSymsp->__Vcoverage[2886]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lhu = 
            ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__lhu) 
             | (0x20U & vlSelf->top__DOT__de__DOT__lhu));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__lhu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lhu))) {
        ++(vlSymsp->__Vcoverage[2887]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lhu = 
            ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__lhu) 
             | (0x40U & vlSelf->top__DOT__de__DOT__lhu));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__lhu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lhu))) {
        ++(vlSymsp->__Vcoverage[2888]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lhu = 
            ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__lhu) 
             | (0x80U & vlSelf->top__DOT__de__DOT__lhu));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__lhu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lhu))) {
        ++(vlSymsp->__Vcoverage[2889]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lhu = 
            ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__lhu) 
             | (0x100U & vlSelf->top__DOT__de__DOT__lhu));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__lhu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lhu))) {
        ++(vlSymsp->__Vcoverage[2890]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lhu = 
            ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__lhu) 
             | (0x200U & vlSelf->top__DOT__de__DOT__lhu));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__lhu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lhu))) {
        ++(vlSymsp->__Vcoverage[2891]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lhu = 
            ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__lhu) 
             | (0x400U & vlSelf->top__DOT__de__DOT__lhu));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__lhu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lhu))) {
        ++(vlSymsp->__Vcoverage[2892]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lhu = 
            ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__lhu) 
             | (0x800U & vlSelf->top__DOT__de__DOT__lhu));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__lhu 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__lhu))) {
        ++(vlSymsp->__Vcoverage[2893]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lhu = 
            ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__lhu) 
             | (0x1000U & vlSelf->top__DOT__de__DOT__lhu));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__lhu 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__lhu))) {
        ++(vlSymsp->__Vcoverage[2894]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lhu = 
            ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__lhu) 
             | (0x2000U & vlSelf->top__DOT__de__DOT__lhu));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__lhu 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__lhu))) {
        ++(vlSymsp->__Vcoverage[2895]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lhu = 
            ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__lhu) 
             | (0x4000U & vlSelf->top__DOT__de__DOT__lhu));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__lhu 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__lhu))) {
        ++(vlSymsp->__Vcoverage[2896]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lhu = 
            ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__lhu) 
             | (0x8000U & vlSelf->top__DOT__de__DOT__lhu));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__lhu 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__lhu))) {
        ++(vlSymsp->__Vcoverage[2897]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lhu = 
            ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lhu) 
             | (0x10000U & vlSelf->top__DOT__de__DOT__lhu));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__lhu 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__lhu))) {
        ++(vlSymsp->__Vcoverage[2898]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lhu = 
            ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lhu) 
             | (0x20000U & vlSelf->top__DOT__de__DOT__lhu));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__lhu 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__lhu))) {
        ++(vlSymsp->__Vcoverage[2899]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lhu = 
            ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lhu) 
             | (0x40000U & vlSelf->top__DOT__de__DOT__lhu));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__lhu 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__lhu))) {
        ++(vlSymsp->__Vcoverage[2900]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lhu = 
            ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lhu) 
             | (0x80000U & vlSelf->top__DOT__de__DOT__lhu));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__lhu 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__lhu))) {
        ++(vlSymsp->__Vcoverage[2901]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lhu = 
            ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lhu) 
             | (0x100000U & vlSelf->top__DOT__de__DOT__lhu));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__lhu 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__lhu))) {
        ++(vlSymsp->__Vcoverage[2902]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lhu = 
            ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lhu) 
             | (0x200000U & vlSelf->top__DOT__de__DOT__lhu));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__lhu 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__lhu))) {
        ++(vlSymsp->__Vcoverage[2903]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lhu = 
            ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lhu) 
             | (0x400000U & vlSelf->top__DOT__de__DOT__lhu));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__lhu 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__lhu))) {
        ++(vlSymsp->__Vcoverage[2904]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lhu = 
            ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lhu) 
             | (0x800000U & vlSelf->top__DOT__de__DOT__lhu));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__lhu 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__lhu))) {
        ++(vlSymsp->__Vcoverage[2905]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lhu = 
            ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lhu) 
             | (0x1000000U & vlSelf->top__DOT__de__DOT__lhu));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__lhu 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__lhu))) {
        ++(vlSymsp->__Vcoverage[2906]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lhu = 
            ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lhu) 
             | (0x2000000U & vlSelf->top__DOT__de__DOT__lhu));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__lhu 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__lhu))) {
        ++(vlSymsp->__Vcoverage[2907]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lhu = 
            ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lhu) 
             | (0x4000000U & vlSelf->top__DOT__de__DOT__lhu));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__lhu 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__lhu))) {
        ++(vlSymsp->__Vcoverage[2908]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lhu = 
            ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lhu) 
             | (0x8000000U & vlSelf->top__DOT__de__DOT__lhu));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__lhu 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__lhu))) {
        ++(vlSymsp->__Vcoverage[2909]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lhu = 
            ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lhu) 
             | (0x10000000U & vlSelf->top__DOT__de__DOT__lhu));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__lhu 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__lhu))) {
        ++(vlSymsp->__Vcoverage[2910]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lhu = 
            ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lhu) 
             | (0x20000000U & vlSelf->top__DOT__de__DOT__lhu));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__lhu 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__lhu))) {
        ++(vlSymsp->__Vcoverage[2911]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lhu = 
            ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lhu) 
             | (0x40000000U & vlSelf->top__DOT__de__DOT__lhu));
    }
    if (((vlSelf->top__DOT__de__DOT__lhu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lhu) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2912]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lhu = 
            ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lhu) 
             | (0x80000000U & vlSelf->top__DOT__de__DOT__lhu));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__ld ^ vlSelf->top__DOT__de__DOT____Vtogcov__ld))) {
        ++(vlSymsp->__Vcoverage[2913]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ld = 
            ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__ld) 
             | (1U & vlSelf->top__DOT__de__DOT__ld));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__ld ^ vlSelf->top__DOT__de__DOT____Vtogcov__ld))) {
        ++(vlSymsp->__Vcoverage[2914]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ld = 
            ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__ld) 
             | (2U & vlSelf->top__DOT__de__DOT__ld));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__ld ^ vlSelf->top__DOT__de__DOT____Vtogcov__ld))) {
        ++(vlSymsp->__Vcoverage[2915]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ld = 
            ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__ld) 
             | (4U & vlSelf->top__DOT__de__DOT__ld));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__ld ^ vlSelf->top__DOT__de__DOT____Vtogcov__ld))) {
        ++(vlSymsp->__Vcoverage[2916]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ld = 
            ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__ld) 
             | (8U & vlSelf->top__DOT__de__DOT__ld));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__ld ^ vlSelf->top__DOT__de__DOT____Vtogcov__ld))) {
        ++(vlSymsp->__Vcoverage[2917]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ld = 
            ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__ld) 
             | (0x10U & vlSelf->top__DOT__de__DOT__ld));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__ld ^ vlSelf->top__DOT__de__DOT____Vtogcov__ld))) {
        ++(vlSymsp->__Vcoverage[2918]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ld = 
            ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__ld) 
             | (0x20U & vlSelf->top__DOT__de__DOT__ld));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__ld ^ vlSelf->top__DOT__de__DOT____Vtogcov__ld))) {
        ++(vlSymsp->__Vcoverage[2919]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ld = 
            ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__ld) 
             | (0x40U & vlSelf->top__DOT__de__DOT__ld));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__ld ^ vlSelf->top__DOT__de__DOT____Vtogcov__ld))) {
        ++(vlSymsp->__Vcoverage[2920]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ld = 
            ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__ld) 
             | (0x80U & vlSelf->top__DOT__de__DOT__ld));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__ld ^ vlSelf->top__DOT__de__DOT____Vtogcov__ld))) {
        ++(vlSymsp->__Vcoverage[2921]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ld = 
            ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__ld) 
             | (0x100U & vlSelf->top__DOT__de__DOT__ld));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__ld ^ vlSelf->top__DOT__de__DOT____Vtogcov__ld))) {
        ++(vlSymsp->__Vcoverage[2922]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ld = 
            ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__ld) 
             | (0x200U & vlSelf->top__DOT__de__DOT__ld));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__ld ^ vlSelf->top__DOT__de__DOT____Vtogcov__ld))) {
        ++(vlSymsp->__Vcoverage[2923]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ld = 
            ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__ld) 
             | (0x400U & vlSelf->top__DOT__de__DOT__ld));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__ld ^ vlSelf->top__DOT__de__DOT____Vtogcov__ld))) {
        ++(vlSymsp->__Vcoverage[2924]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ld = 
            ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__ld) 
             | (0x800U & vlSelf->top__DOT__de__DOT__ld));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__ld ^ vlSelf->top__DOT__de__DOT____Vtogcov__ld))) {
        ++(vlSymsp->__Vcoverage[2925]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ld = 
            ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__ld) 
             | (0x1000U & vlSelf->top__DOT__de__DOT__ld));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__ld ^ vlSelf->top__DOT__de__DOT____Vtogcov__ld))) {
        ++(vlSymsp->__Vcoverage[2926]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ld = 
            ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__ld) 
             | (0x2000U & vlSelf->top__DOT__de__DOT__ld));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__ld ^ vlSelf->top__DOT__de__DOT____Vtogcov__ld))) {
        ++(vlSymsp->__Vcoverage[2927]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ld = 
            ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__ld) 
             | (0x4000U & vlSelf->top__DOT__de__DOT__ld));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__ld ^ vlSelf->top__DOT__de__DOT____Vtogcov__ld))) {
        ++(vlSymsp->__Vcoverage[2928]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ld = 
            ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__ld) 
             | (0x8000U & vlSelf->top__DOT__de__DOT__ld));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__ld 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__ld))) {
        ++(vlSymsp->__Vcoverage[2929]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ld = 
            ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__ld) 
             | (0x10000U & vlSelf->top__DOT__de__DOT__ld));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__ld 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__ld))) {
        ++(vlSymsp->__Vcoverage[2930]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ld = 
            ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__ld) 
             | (0x20000U & vlSelf->top__DOT__de__DOT__ld));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__ld 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__ld))) {
        ++(vlSymsp->__Vcoverage[2931]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ld = 
            ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__ld) 
             | (0x40000U & vlSelf->top__DOT__de__DOT__ld));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__ld 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__ld))) {
        ++(vlSymsp->__Vcoverage[2932]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ld = 
            ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__ld) 
             | (0x80000U & vlSelf->top__DOT__de__DOT__ld));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__ld 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__ld))) {
        ++(vlSymsp->__Vcoverage[2933]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ld = 
            ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__ld) 
             | (0x100000U & vlSelf->top__DOT__de__DOT__ld));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__ld 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__ld))) {
        ++(vlSymsp->__Vcoverage[2934]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ld = 
            ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__ld) 
             | (0x200000U & vlSelf->top__DOT__de__DOT__ld));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__ld 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__ld))) {
        ++(vlSymsp->__Vcoverage[2935]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ld = 
            ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__ld) 
             | (0x400000U & vlSelf->top__DOT__de__DOT__ld));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__ld 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__ld))) {
        ++(vlSymsp->__Vcoverage[2936]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ld = 
            ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__ld) 
             | (0x800000U & vlSelf->top__DOT__de__DOT__ld));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__ld 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__ld))) {
        ++(vlSymsp->__Vcoverage[2937]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ld = 
            ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__ld) 
             | (0x1000000U & vlSelf->top__DOT__de__DOT__ld));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__ld 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__ld))) {
        ++(vlSymsp->__Vcoverage[2938]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ld = 
            ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__ld) 
             | (0x2000000U & vlSelf->top__DOT__de__DOT__ld));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__ld 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__ld))) {
        ++(vlSymsp->__Vcoverage[2939]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ld = 
            ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__ld) 
             | (0x4000000U & vlSelf->top__DOT__de__DOT__ld));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__ld 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__ld))) {
        ++(vlSymsp->__Vcoverage[2940]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ld = 
            ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__ld) 
             | (0x8000000U & vlSelf->top__DOT__de__DOT__ld));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__ld 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__ld))) {
        ++(vlSymsp->__Vcoverage[2941]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ld = 
            ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__ld) 
             | (0x10000000U & vlSelf->top__DOT__de__DOT__ld));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__ld 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__ld))) {
        ++(vlSymsp->__Vcoverage[2942]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ld = 
            ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__ld) 
             | (0x20000000U & vlSelf->top__DOT__de__DOT__ld));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__ld 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__ld))) {
        ++(vlSymsp->__Vcoverage[2943]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ld = 
            ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__ld) 
             | (0x40000000U & vlSelf->top__DOT__de__DOT__ld));
    }
    if (((vlSelf->top__DOT__de__DOT__ld ^ vlSelf->top__DOT__de__DOT____Vtogcov__ld) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2944]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ld = 
            ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__ld) 
             | (0x80000000U & vlSelf->top__DOT__de__DOT__ld));
    }
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0U] 
        = (IData)((((QData)((IData)((0x1fU & (vlSelf->inst 
                                              >> 7U)))) 
                    << 0x25U) | (((QData)((IData)(vlSelf->top__DOT__de__DOT__srli)) 
                                  << 5U) | (QData)((IData)(
                                                           (0x1fU 
                                                            & (vlSelf->inst 
                                                               >> 7U)))))));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[1U] 
        = ((vlSelf->top__DOT__de__DOT__slli << 0xaU) 
           | (IData)(((((QData)((IData)((0x1fU & (vlSelf->inst 
                                                  >> 7U)))) 
                        << 0x25U) | (((QData)((IData)(vlSelf->top__DOT__de__DOT__srli)) 
                                      << 5U) | (QData)((IData)(
                                                               (0x1fU 
                                                                & (vlSelf->inst 
                                                                   >> 7U)))))) 
                      >> 0x20U)));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[2U] 
        = ((vlSelf->top__DOT__de__DOT__srai << 0xfU) 
           | ((0x7c00U & (vlSelf->inst << 3U)) | (vlSelf->top__DOT__de__DOT__slli 
                                                  >> 0x16U)));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[3U] 
        = ((vlSelf->top__DOT__de__DOT__ld << 0x14U) 
           | ((0xf8000U & (vlSelf->inst << 8U)) | (vlSelf->top__DOT__de__DOT__srai 
                                                   >> 0x11U)));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[4U] 
        = ((vlSelf->top__DOT__de__DOT__sraiw << 0x19U) 
           | ((0x1f00000U & (vlSelf->inst << 0xdU)) 
              | (vlSelf->top__DOT__de__DOT__ld >> 0xcU)));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[5U] 
        = ((vlSelf->top__DOT__de__DOT__srliw << 0x1eU) 
           | ((0x3e000000U & (vlSelf->inst << 0x12U)) 
              | (vlSelf->top__DOT__de__DOT__sraiw >> 7U)));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[6U] 
        = ((0xc0000000U & (vlSelf->inst << 0x17U)) 
           | (vlSelf->top__DOT__de__DOT__srliw >> 2U));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[7U] 
        = ((vlSelf->top__DOT__de__DOT__slliw << 3U) 
           | (7U & (vlSelf->inst >> 9U)));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[8U] 
        = ((vlSelf->top__DOT__de__DOT__addiw << 8U) 
           | ((0xf8U & (vlSelf->inst >> 4U)) | (vlSelf->top__DOT__de__DOT__slliw 
                                                >> 0x1dU)));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[9U] 
        = ((vlSelf->top__DOT__de__DOT__sltiu << 0xdU) 
           | ((0x1f00U & (vlSelf->inst << 1U)) | (vlSelf->top__DOT__de__DOT__addiw 
                                                  >> 0x18U)));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0xaU] 
        = ((vlSelf->top__DOT__de__DOT__sub << 0x12U) 
           | ((0x3e000U & (vlSelf->inst << 6U)) | (vlSelf->top__DOT__de__DOT__sltiu 
                                                   >> 0x13U)));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0xbU] 
        = ((vlSelf->top__DOT__de__DOT__sub >> 0xeU) 
           | ((IData)((((QData)((IData)((0x1fU & (vlSelf->inst 
                                                  >> 7U)))) 
                        << 0x25U) | (((QData)((IData)(vlSelf->top__DOT__de__DOT__slt)) 
                                      << 5U) | (QData)((IData)(
                                                               (0x1fU 
                                                                & (vlSelf->inst 
                                                                   >> 7U))))))) 
              << 0x12U));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0xcU] 
        = (((IData)((((QData)((IData)((0x1fU & (vlSelf->inst 
                                                >> 7U)))) 
                      << 0x25U) | (((QData)((IData)(vlSelf->top__DOT__de__DOT__slt)) 
                                    << 5U) | (QData)((IData)(
                                                             (0x1fU 
                                                              & (vlSelf->inst 
                                                                 >> 7U))))))) 
            >> 0xeU) | ((vlSelf->top__DOT__de__DOT__sltu 
                         << 0x1cU) | ((IData)(((((QData)((IData)(
                                                                 (0x1fU 
                                                                  & (vlSelf->inst 
                                                                     >> 7U)))) 
                                                 << 0x25U) 
                                                | (((QData)((IData)(vlSelf->top__DOT__de__DOT__slt)) 
                                                    << 5U) 
                                                   | (QData)((IData)(
                                                                     (0x1fU 
                                                                      & (vlSelf->inst 
                                                                         >> 7U)))))) 
                                               >> 0x20U)) 
                                      << 0x12U)));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0xdU] 
        = (((0x3ffffU & (vlSelf->top__DOT__de__DOT__sltu 
                         >> 4U)) | ((IData)(((((QData)((IData)(
                                                               (0x1fU 
                                                                & (vlSelf->inst 
                                                                   >> 7U)))) 
                                               << 0x25U) 
                                              | (((QData)((IData)(vlSelf->top__DOT__de__DOT__slt)) 
                                                  << 5U) 
                                                 | (QData)((IData)(
                                                                   (0x1fU 
                                                                    & (vlSelf->inst 
                                                                       >> 7U)))))) 
                                             >> 0x20U)) 
                                    >> 0xeU)) | ((0xf0000000U 
                                                  & (vlSelf->inst 
                                                     << 0x15U)) 
                                                 | (0xffc0000U 
                                                    & (vlSelf->top__DOT__de__DOT__sltu 
                                                       >> 4U))));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0xeU] 
        = (((0x3fffeU & (vlSelf->top__DOT__de__DOT__Or 
                         << 1U)) | (1U & (vlSelf->inst 
                                          >> 0xbU))) 
           | (0xfffc0000U & (vlSelf->top__DOT__de__DOT__Or 
                             << 1U)));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0xfU] 
        = (((0x3ffc0U & (vlSelf->top__DOT__de__DOT__Xor 
                         << 6U)) | ((0x3eU & (vlSelf->inst 
                                              >> 6U)) 
                                    | (vlSelf->top__DOT__de__DOT__Or 
                                       >> 0x1fU))) 
           | (0xfffc0000U & (vlSelf->top__DOT__de__DOT__Xor 
                             << 6U)));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x10U] 
        = (((0x3f800U & (vlSelf->top__DOT__de__DOT__And 
                         << 0xbU)) | ((0x7c0U & (vlSelf->inst 
                                                 >> 1U)) 
                                      | (vlSelf->top__DOT__de__DOT__Xor 
                                         >> 0x1aU))) 
           | (0xfffc0000U & (vlSelf->top__DOT__de__DOT__And 
                             << 0xbU)));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x11U] 
        = (((0x30000U & (vlSelf->top__DOT__de__DOT__Mul 
                         << 0x10U)) | ((0xf800U & (vlSelf->inst 
                                                   << 4U)) 
                                       | (vlSelf->top__DOT__de__DOT__And 
                                          >> 0x15U))) 
           | (0xfffc0000U & (vlSelf->top__DOT__de__DOT__Mul 
                             << 0x10U)));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x12U] 
        = (((0x30000U & (vlSelf->inst << 9U)) | (vlSelf->top__DOT__de__DOT__Mul 
                                                 >> 0x10U)) 
           | ((vlSelf->top__DOT__de__DOT__Add << 0x15U) 
              | (0x1c0000U & (vlSelf->inst << 9U))));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x13U] 
        = ((0x3ffffU & (vlSelf->top__DOT__de__DOT__Add 
                        >> 0xbU)) | ((vlSelf->top__DOT__de__DOT__sraw 
                                      << 0x1aU) | (
                                                   (0x3e00000U 
                                                    & (vlSelf->inst 
                                                       << 0xeU)) 
                                                   | (0x1c0000U 
                                                      & (vlSelf->top__DOT__de__DOT__Add 
                                                         >> 0xbU)))));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x14U] 
        = ((0x3ffffU & (vlSelf->top__DOT__de__DOT__sraw 
                        >> 6U)) | ((vlSelf->top__DOT__de__DOT__srlw 
                                    << 0x1fU) | ((0x7c000000U 
                                                  & (vlSelf->inst 
                                                     << 0x13U)) 
                                                 | (0x3fc0000U 
                                                    & (vlSelf->top__DOT__de__DOT__sraw 
                                                       >> 6U)))));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x15U] 
        = ((0x3ffffU & (vlSelf->top__DOT__de__DOT__srlw 
                        >> 1U)) | ((0x80000000U & (vlSelf->inst 
                                                   << 0x18U)) 
                                   | (0x7ffc0000U & 
                                      (vlSelf->top__DOT__de__DOT__srlw 
                                       >> 1U))));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x16U] 
        = (((0x3fff0U & (vlSelf->top__DOT__de__DOT__sll 
                         << 4U)) | (0xfU & (vlSelf->inst 
                                            >> 8U))) 
           | (0xfffc0000U & (vlSelf->top__DOT__de__DOT__sll 
                             << 4U)));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x17U] 
        = (((0x3fe00U & (vlSelf->top__DOT__de__DOT__sllw 
                         << 9U)) | ((0x1f0U & (vlSelf->inst 
                                               >> 3U)) 
                                    | (vlSelf->top__DOT__de__DOT__sll 
                                       >> 0x1cU))) 
           | (0xfffc0000U & (vlSelf->top__DOT__de__DOT__sllw 
                             << 9U)));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x18U] 
        = (((0x3c000U & (vlSelf->top__DOT__de__DOT__remw 
                         << 0xeU)) | ((0x3e00U & (vlSelf->inst 
                                                  << 2U)) 
                                      | (vlSelf->top__DOT__de__DOT__sllw 
                                         >> 0x17U))) 
           | (0xfffc0000U & (vlSelf->top__DOT__de__DOT__remw 
                             << 0xeU)));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x19U] 
        = (((0x3c000U & (vlSelf->inst << 7U)) | (vlSelf->top__DOT__de__DOT__remw 
                                                 >> 0x12U)) 
           | ((vlSelf->top__DOT__de__DOT__div << 0x13U) 
              | (0x40000U & (vlSelf->inst << 7U))));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x1aU] 
        = ((0x3ffffU & (vlSelf->top__DOT__de__DOT__div 
                        >> 0xdU)) | ((vlSelf->top__DOT__de__DOT__divuw 
                                      << 0x18U) | (
                                                   (0xf80000U 
                                                    & (vlSelf->inst 
                                                       << 0xcU)) 
                                                   | (0x40000U 
                                                      & (vlSelf->top__DOT__de__DOT__div 
                                                         >> 0xdU)))));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x1bU] 
        = ((0x3ffffU & (vlSelf->top__DOT__de__DOT__divuw 
                        >> 8U)) | ((vlSelf->top__DOT__de__DOT__divw 
                                    << 0x1dU) | ((0x1f000000U 
                                                  & (vlSelf->inst 
                                                     << 0x11U)) 
                                                 | (0xfc0000U 
                                                    & (vlSelf->top__DOT__de__DOT__divuw 
                                                       >> 8U)))));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x1cU] 
        = ((0x3ffffU & (vlSelf->top__DOT__de__DOT__divw 
                        >> 3U)) | ((0xe0000000U & (vlSelf->inst 
                                                   << 0x16U)) 
                                   | (0x1ffc0000U & 
                                      (vlSelf->top__DOT__de__DOT__divw 
                                       >> 3U))));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x1dU] 
        = (((0x3fffcU & (vlSelf->top__DOT__de__DOT__mulw 
                         << 2U)) | (3U & (vlSelf->inst 
                                          >> 0xaU))) 
           | (0xfffc0000U & (vlSelf->top__DOT__de__DOT__mulw 
                             << 2U)));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x1eU] 
        = (((0x3ff80U & (vlSelf->top__DOT__de__DOT__subw 
                         << 7U)) | ((0x7cU & (vlSelf->inst 
                                              >> 5U)) 
                                    | (vlSelf->top__DOT__de__DOT__mulw 
                                       >> 0x1eU))) 
           | (0xfffc0000U & (vlSelf->top__DOT__de__DOT__subw 
                             << 7U)));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x1fU] 
        = (((0x3f000U & (vlSelf->top__DOT__de__DOT__addw 
                         << 0xcU)) | ((0xf80U & vlSelf->inst) 
                                      | (vlSelf->top__DOT__de__DOT__subw 
                                         >> 0x19U))) 
           | (0xfffc0000U & (vlSelf->top__DOT__de__DOT__addw 
                             << 0xcU)));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x20U] 
        = (((0x20000U & (vlSelf->top__DOT__de__DOT__lhu 
                         << 0x11U)) | ((0x1f000U & 
                                        (vlSelf->inst 
                                         << 5U)) | 
                                       (vlSelf->top__DOT__de__DOT__addw 
                                        >> 0x14U))) 
           | (0xfffc0000U & (vlSelf->top__DOT__de__DOT__lhu 
                             << 0x11U)));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x21U] 
        = (((0x20000U & (vlSelf->inst << 0xaU)) | (vlSelf->top__DOT__de__DOT__lhu 
                                                   >> 0xfU)) 
           | ((vlSelf->top__DOT__de__DOT__lwu << 0x16U) 
              | (0x3c0000U & (vlSelf->inst << 0xaU))));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x22U] 
        = ((0x3ffffU & (vlSelf->top__DOT__de__DOT__lwu 
                        >> 0xaU)) | ((vlSelf->top__DOT__de__DOT__lbu 
                                      << 0x1bU) | (
                                                   (0x7c00000U 
                                                    & (vlSelf->inst 
                                                       << 0xfU)) 
                                                   | (0x3c0000U 
                                                      & (vlSelf->top__DOT__de__DOT__lwu 
                                                         >> 0xaU)))));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x23U] 
        = ((0x3ffffU & (vlSelf->top__DOT__de__DOT__lbu 
                        >> 5U)) | ((0xf8000000U & (vlSelf->inst 
                                                   << 0x14U)) 
                                   | (0x7fc0000U & 
                                      (vlSelf->top__DOT__de__DOT__lbu 
                                       >> 5U))));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x24U] 
        = vlSelf->top__DOT__de__DOT__lb;
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x25U] 
        = (((0x3ffe0U & (vlSelf->top__DOT__de__DOT__lh 
                         << 5U)) | (0x1fU & (vlSelf->inst 
                                             >> 7U))) 
           | (0xfffc0000U & (vlSelf->top__DOT__de__DOT__lh 
                             << 5U)));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x26U] 
        = (((0x3fc00U & (vlSelf->top__DOT__de__DOT__lw 
                         << 0xaU)) | ((0x3e0U & (vlSelf->inst 
                                                 >> 2U)) 
                                      | (vlSelf->top__DOT__de__DOT__lh 
                                         >> 0x1bU))) 
           | (0xfffc0000U & (vlSelf->top__DOT__de__DOT__lw 
                             << 0xaU)));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x27U] 
        = (((0x38000U & (vlSelf->top__DOT__de__DOT__jalr 
                         << 0xfU)) | ((0x7c00U & (vlSelf->inst 
                                                  << 3U)) 
                                      | (vlSelf->top__DOT__de__DOT__lw 
                                         >> 0x16U))) 
           | (0xfffc0000U & (vlSelf->top__DOT__de__DOT__jalr 
                             << 0xfU)));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x28U] 
        = (((0x38000U & (vlSelf->inst << 8U)) | (vlSelf->top__DOT__de__DOT__jalr 
                                                 >> 0x11U)) 
           | ((0xfff00000U & (0x6f00000U | (0xf8000000U 
                                            & (vlSelf->inst 
                                               << 0x14U)))) 
              | (0xc0000U & (vlSelf->inst << 8U))));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x29U] 
        = (0x6e000000U | ((0x3ffffU & (vlSelf->inst 
                                       >> 0xcU)) | 
                          ((0x1f00000U & (vlSelf->inst 
                                          << 0xdU)) 
                           | (0xc0000U & (vlSelf->inst 
                                          >> 0xcU)))));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x2aU] 
        = (0xc0000000U | ((0x3ffffU & (vlSelf->inst 
                                       >> 7U)) | ((0x3e000000U 
                                                   & (vlSelf->inst 
                                                      << 0x12U)) 
                                                  | (0x1fc0000U 
                                                     & (vlSelf->inst 
                                                        >> 7U)))));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x2bU] 
        = ((0x3ffffU & (5U | (0x3ffe0U & (vlSelf->inst 
                                          >> 2U)))) 
           | ((0xc0000000U & (vlSelf->inst << 0x17U)) 
              | (0x3ffc0000U & (vlSelf->inst >> 2U))));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x2cU] 
        = (((0x3fff8U & (vlSelf->top__DOT__de__DOT__ori 
                         << 3U)) | (7U & (vlSelf->inst 
                                          >> 9U))) 
           | (0xfffc0000U & (vlSelf->top__DOT__de__DOT__ori 
                             << 3U)));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x2dU] 
        = (((0x3ff00U & (vlSelf->top__DOT__de__DOT__xori 
                         << 8U)) | ((0xf8U & (vlSelf->inst 
                                              >> 4U)) 
                                    | (vlSelf->top__DOT__de__DOT__ori 
                                       >> 0x1dU))) 
           | (0xfffc0000U & (vlSelf->top__DOT__de__DOT__xori 
                             << 8U)));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x2eU] 
        = (((0x3e000U & (vlSelf->top__DOT__de__DOT__andi 
                         << 0xdU)) | ((0x1f00U & (vlSelf->inst 
                                                  << 1U)) 
                                      | (vlSelf->top__DOT__de__DOT__xori 
                                         >> 0x18U))) 
           | (0xfffc0000U & (vlSelf->top__DOT__de__DOT__andi 
                             << 0xdU)));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x2fU] 
        = (((0x3e000U & (vlSelf->inst << 6U)) | (vlSelf->top__DOT__de__DOT__andi 
                                                 >> 0x13U)) 
           | (vlSelf->top__DOT__de__DOT__addi << 0x12U));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x30U] 
        = (vlSelf->top__DOT__de__DOT__addi >> 0xeU);
    __Vtemp489[0U] = (IData)(((QData)((IData)(vlSelf->top__DOT__de__DOT__Mul)) 
                              << 3U));
    __Vtemp489[1U] = ((vlSelf->top__DOT__de__DOT__Add 
                       << 6U) | (IData)((((QData)((IData)(vlSelf->top__DOT__de__DOT__Mul)) 
                                          << 3U) >> 0x20U)));
    __Vtemp489[2U] = (vlSelf->top__DOT__de__DOT__Add 
                      >> 0x1aU);
    VL_EXTEND_WW(73,70, __Vtemp490, __Vtemp489);
    __Vtemp491[0U] = __Vtemp490[0U];
    __Vtemp491[1U] = __Vtemp490[1U];
    __Vtemp491[2U] = ((vlSelf->top__DOT__de__DOT__sraw 
                       << 9U) | __Vtemp490[2U]);
    __Vtemp491[3U] = (vlSelf->top__DOT__de__DOT__sraw 
                      >> 0x17U);
    VL_EXTEND_WW(108,105, __Vtemp492, __Vtemp491);
    __Vtemp493[0U] = __Vtemp492[0U];
    __Vtemp493[1U] = __Vtemp492[1U];
    __Vtemp493[2U] = __Vtemp492[2U];
    __Vtemp493[3U] = ((vlSelf->top__DOT__de__DOT__srlw 
                       << 0xcU) | __Vtemp492[3U]);
    __Vtemp493[4U] = (vlSelf->top__DOT__de__DOT__srlw 
                      >> 0x14U);
    VL_EXTEND_WW(143,140, __Vtemp494, __Vtemp493);
    __Vtemp495[0U] = __Vtemp494[0U];
    __Vtemp495[1U] = __Vtemp494[1U];
    __Vtemp495[2U] = __Vtemp494[2U];
    __Vtemp495[3U] = __Vtemp494[3U];
    __Vtemp495[4U] = ((vlSelf->top__DOT__de__DOT__sll 
                       << 0xfU) | __Vtemp494[4U]);
    __Vtemp495[5U] = (vlSelf->top__DOT__de__DOT__sll 
                      >> 0x11U);
    VL_EXTEND_WW(178,175, __Vtemp496, __Vtemp495);
    __Vtemp497[0U] = __Vtemp496[0U];
    __Vtemp497[1U] = __Vtemp496[1U];
    __Vtemp497[2U] = __Vtemp496[2U];
    __Vtemp497[3U] = __Vtemp496[3U];
    __Vtemp497[4U] = __Vtemp496[4U];
    __Vtemp497[5U] = ((vlSelf->top__DOT__de__DOT__sllw 
                       << 0x12U) | __Vtemp496[5U]);
    __Vtemp497[6U] = (vlSelf->top__DOT__de__DOT__sllw 
                      >> 0xeU);
    VL_EXTEND_WW(213,210, __Vtemp498, __Vtemp497);
    __Vtemp499[0U] = __Vtemp498[0U];
    __Vtemp499[1U] = __Vtemp498[1U];
    __Vtemp499[2U] = __Vtemp498[2U];
    __Vtemp499[3U] = __Vtemp498[3U];
    __Vtemp499[4U] = __Vtemp498[4U];
    __Vtemp499[5U] = __Vtemp498[5U];
    __Vtemp499[6U] = ((vlSelf->top__DOT__de__DOT__remw 
                       << 0x15U) | __Vtemp498[6U]);
    __Vtemp499[7U] = (vlSelf->top__DOT__de__DOT__remw 
                      >> 0xbU);
    VL_EXTEND_WW(248,245, __Vtemp500, __Vtemp499);
    __Vtemp501[0U] = __Vtemp500[0U];
    __Vtemp501[1U] = __Vtemp500[1U];
    __Vtemp501[2U] = __Vtemp500[2U];
    __Vtemp501[3U] = __Vtemp500[3U];
    __Vtemp501[4U] = __Vtemp500[4U];
    __Vtemp501[5U] = __Vtemp500[5U];
    __Vtemp501[6U] = __Vtemp500[6U];
    __Vtemp501[7U] = ((vlSelf->top__DOT__de__DOT__div 
                       << 0x18U) | __Vtemp500[7U]);
    __Vtemp501[8U] = (vlSelf->top__DOT__de__DOT__div 
                      >> 8U);
    VL_EXTEND_WW(283,280, __Vtemp502, __Vtemp501);
    __Vtemp503[0U] = __Vtemp502[0U];
    __Vtemp503[1U] = __Vtemp502[1U];
    __Vtemp503[2U] = __Vtemp502[2U];
    __Vtemp503[3U] = __Vtemp502[3U];
    __Vtemp503[4U] = __Vtemp502[4U];
    __Vtemp503[5U] = __Vtemp502[5U];
    __Vtemp503[6U] = __Vtemp502[6U];
    __Vtemp503[7U] = __Vtemp502[7U];
    __Vtemp503[8U] = ((vlSelf->top__DOT__de__DOT__divuw 
                       << 0x1bU) | __Vtemp502[8U]);
    __Vtemp503[9U] = (vlSelf->top__DOT__de__DOT__divuw 
                      >> 5U);
    VL_EXTEND_WW(318,315, __Vtemp504, __Vtemp503);
    __Vtemp505[0U] = __Vtemp504[0U];
    __Vtemp505[1U] = __Vtemp504[1U];
    __Vtemp505[2U] = __Vtemp504[2U];
    __Vtemp505[3U] = __Vtemp504[3U];
    __Vtemp505[4U] = __Vtemp504[4U];
    __Vtemp505[5U] = __Vtemp504[5U];
    __Vtemp505[6U] = __Vtemp504[6U];
    __Vtemp505[7U] = __Vtemp504[7U];
    __Vtemp505[8U] = __Vtemp504[8U];
    __Vtemp505[9U] = ((vlSelf->top__DOT__de__DOT__divw 
                       << 0x1eU) | __Vtemp504[9U]);
    __Vtemp505[0xaU] = (vlSelf->top__DOT__de__DOT__divw 
                        >> 2U);
    VL_EXTEND_WW(353,350, __Vtemp506, __Vtemp505);
    __Vtemp507[0U] = __Vtemp506[0U];
    __Vtemp507[1U] = __Vtemp506[1U];
    __Vtemp507[2U] = __Vtemp506[2U];
    __Vtemp507[3U] = __Vtemp506[3U];
    __Vtemp507[4U] = __Vtemp506[4U];
    __Vtemp507[5U] = __Vtemp506[5U];
    __Vtemp507[6U] = __Vtemp506[6U];
    __Vtemp507[7U] = __Vtemp506[7U];
    __Vtemp507[8U] = __Vtemp506[8U];
    __Vtemp507[9U] = __Vtemp506[9U];
    __Vtemp507[0xaU] = __Vtemp506[0xaU];
    __Vtemp507[0xbU] = ((vlSelf->top__DOT__de__DOT__mulw 
                         << 1U) | __Vtemp506[0xbU]);
    __Vtemp507[0xcU] = (vlSelf->top__DOT__de__DOT__mulw 
                        >> 0x1fU);
    VL_EXTEND_WW(388,385, __Vtemp508, __Vtemp507);
    __Vtemp509[0U] = __Vtemp508[0U];
    __Vtemp509[1U] = __Vtemp508[1U];
    __Vtemp509[2U] = __Vtemp508[2U];
    __Vtemp509[3U] = __Vtemp508[3U];
    __Vtemp509[4U] = __Vtemp508[4U];
    __Vtemp509[5U] = __Vtemp508[5U];
    __Vtemp509[6U] = __Vtemp508[6U];
    __Vtemp509[7U] = __Vtemp508[7U];
    __Vtemp509[8U] = __Vtemp508[8U];
    __Vtemp509[9U] = __Vtemp508[9U];
    __Vtemp509[0xaU] = __Vtemp508[0xaU];
    __Vtemp509[0xbU] = __Vtemp508[0xbU];
    __Vtemp509[0xcU] = ((vlSelf->top__DOT__de__DOT__subw 
                         << 4U) | __Vtemp508[0xcU]);
    __Vtemp509[0xdU] = (vlSelf->top__DOT__de__DOT__subw 
                        >> 0x1cU);
    VL_EXTEND_WW(423,420, __Vtemp510, __Vtemp509);
    __Vtemp575[0U] = (IData)((0x800000001ULL | ((QData)((IData)(vlSelf->top__DOT__de__DOT__srliw)) 
                                                << 3U)));
    __Vtemp575[1U] = ((vlSelf->top__DOT__de__DOT__slliw 
                       << 6U) | (IData)(((0x800000001ULL 
                                          | ((QData)((IData)(vlSelf->top__DOT__de__DOT__srliw)) 
                                             << 3U)) 
                                         >> 0x20U)));
    __Vtemp575[2U] = (0x40U | ((vlSelf->top__DOT__de__DOT__sraiw 
                                << 9U) | (vlSelf->top__DOT__de__DOT__slliw 
                                          >> 0x1aU)));
    __Vtemp575[3U] = (0x200U | ((vlSelf->top__DOT__de__DOT__addiw 
                                 << 0xcU) | (vlSelf->top__DOT__de__DOT__sraiw 
                                             >> 0x17U)));
    __Vtemp575[4U] = (0x3000U | ((vlSelf->top__DOT__de__DOT__bne 
                                  << 0xfU) | (vlSelf->top__DOT__de__DOT__addiw 
                                              >> 0x14U)));
    __Vtemp575[5U] = (0x18000U | ((vlSelf->top__DOT__de__DOT__blt 
                                   << 0x12U) | (vlSelf->top__DOT__de__DOT__bne 
                                                >> 0x11U)));
    __Vtemp575[6U] = (0xc0000U | ((vlSelf->top__DOT__de__DOT__bltu 
                                   << 0x15U) | (vlSelf->top__DOT__de__DOT__blt 
                                                >> 0xeU)));
    __Vtemp575[7U] = (0x600000U | ((vlSelf->top__DOT__de__DOT__bgeu 
                                    << 0x18U) | (vlSelf->top__DOT__de__DOT__bltu 
                                                 >> 0xbU)));
    __Vtemp575[8U] = (0x3000000U | ((vlSelf->top__DOT__de__DOT__bge 
                                     << 0x1bU) | (vlSelf->top__DOT__de__DOT__bgeu 
                                                  >> 8U)));
    __Vtemp575[9U] = (0x18000000U | ((vlSelf->top__DOT__de__DOT__beq 
                                      << 0x1eU) | (vlSelf->top__DOT__de__DOT__bge 
                                                   >> 5U)));
    __Vtemp575[0xaU] = (0x40000000U | (vlSelf->top__DOT__de__DOT__beq 
                                       >> 2U));
    __Vtemp575[0xbU] = (vlSelf->top__DOT__de__DOT__srli 
                        << 1U);
    __Vtemp575[0xcU] = (2U | ((vlSelf->top__DOT__de__DOT__slli 
                               << 4U) | (vlSelf->top__DOT__de__DOT__srli 
                                         >> 0x1fU)));
    __Vtemp575[0xdU] = (0x10U | ((vlSelf->top__DOT__de__DOT__srai 
                                  << 7U) | (vlSelf->top__DOT__de__DOT__slli 
                                            >> 0x1cU)));
    __Vtemp575[0xeU] = (0x80U | ((vlSelf->top__DOT__de__DOT__sltiu 
                                  << 0xaU) | (vlSelf->top__DOT__de__DOT__srai 
                                              >> 0x19U)));
    __Vtemp575[0xfU] = (vlSelf->top__DOT__de__DOT__sltiu 
                        >> 0x16U);
    VL_EXTEND_WW(493,490, __Vtemp576, __Vtemp575);
    __Vtemp577[0U] = __Vtemp576[0U];
    __Vtemp577[1U] = __Vtemp576[1U];
    __Vtemp577[2U] = __Vtemp576[2U];
    __Vtemp577[3U] = __Vtemp576[3U];
    __Vtemp577[4U] = __Vtemp576[4U];
    __Vtemp577[5U] = __Vtemp576[5U];
    __Vtemp577[6U] = __Vtemp576[6U];
    __Vtemp577[7U] = __Vtemp576[7U];
    __Vtemp577[8U] = __Vtemp576[8U];
    __Vtemp577[9U] = __Vtemp576[9U];
    __Vtemp577[0xaU] = __Vtemp576[0xaU];
    __Vtemp577[0xbU] = __Vtemp576[0xbU];
    __Vtemp577[0xcU] = __Vtemp576[0xcU];
    __Vtemp577[0xdU] = __Vtemp576[0xdU];
    __Vtemp577[0xeU] = __Vtemp576[0xeU];
    __Vtemp577[0xfU] = ((vlSelf->top__DOT__de__DOT__sub 
                         << 0xdU) | __Vtemp576[0xfU]);
    __Vtemp577[0x10U] = (vlSelf->top__DOT__de__DOT__sub 
                         >> 0x13U);
    VL_EXTEND_WW(528,525, __Vtemp578, __Vtemp577);
    __Vtemp579[0U] = __Vtemp578[0U];
    __Vtemp579[1U] = __Vtemp578[1U];
    __Vtemp579[2U] = __Vtemp578[2U];
    __Vtemp579[3U] = __Vtemp578[3U];
    __Vtemp579[4U] = __Vtemp578[4U];
    __Vtemp579[5U] = __Vtemp578[5U];
    __Vtemp579[6U] = __Vtemp578[6U];
    __Vtemp579[7U] = __Vtemp578[7U];
    __Vtemp579[8U] = __Vtemp578[8U];
    __Vtemp579[9U] = __Vtemp578[9U];
    __Vtemp579[0xaU] = __Vtemp578[0xaU];
    __Vtemp579[0xbU] = __Vtemp578[0xbU];
    __Vtemp579[0xcU] = __Vtemp578[0xcU];
    __Vtemp579[0xdU] = __Vtemp578[0xdU];
    __Vtemp579[0xeU] = __Vtemp578[0xeU];
    __Vtemp579[0xfU] = __Vtemp578[0xfU];
    __Vtemp579[0x10U] = ((vlSelf->top__DOT__de__DOT__slt 
                          << 0x10U) | __Vtemp578[0x10U]);
    __Vtemp579[0x11U] = (vlSelf->top__DOT__de__DOT__slt 
                         >> 0x10U);
    VL_EXTEND_WW(563,560, __Vtemp580, __Vtemp579);
    __Vtemp581[0U] = __Vtemp580[0U];
    __Vtemp581[1U] = __Vtemp580[1U];
    __Vtemp581[2U] = __Vtemp580[2U];
    __Vtemp581[3U] = __Vtemp580[3U];
    __Vtemp581[4U] = __Vtemp580[4U];
    __Vtemp581[5U] = __Vtemp580[5U];
    __Vtemp581[6U] = __Vtemp580[6U];
    __Vtemp581[7U] = __Vtemp580[7U];
    __Vtemp581[8U] = __Vtemp580[8U];
    __Vtemp581[9U] = __Vtemp580[9U];
    __Vtemp581[0xaU] = __Vtemp580[0xaU];
    __Vtemp581[0xbU] = __Vtemp580[0xbU];
    __Vtemp581[0xcU] = __Vtemp580[0xcU];
    __Vtemp581[0xdU] = __Vtemp580[0xdU];
    __Vtemp581[0xeU] = __Vtemp580[0xeU];
    __Vtemp581[0xfU] = __Vtemp580[0xfU];
    __Vtemp581[0x10U] = __Vtemp580[0x10U];
    __Vtemp581[0x11U] = ((vlSelf->top__DOT__de__DOT__sltu 
                          << 0x13U) | __Vtemp580[0x11U]);
    __Vtemp581[0x12U] = (vlSelf->top__DOT__de__DOT__sltu 
                         >> 0xdU);
    VL_EXTEND_WW(598,595, __Vtemp582, __Vtemp581);
    __Vtemp583[0U] = __Vtemp582[0U];
    __Vtemp583[1U] = __Vtemp582[1U];
    __Vtemp583[2U] = __Vtemp582[2U];
    __Vtemp583[3U] = __Vtemp582[3U];
    __Vtemp583[4U] = __Vtemp582[4U];
    __Vtemp583[5U] = __Vtemp582[5U];
    __Vtemp583[6U] = __Vtemp582[6U];
    __Vtemp583[7U] = __Vtemp582[7U];
    __Vtemp583[8U] = __Vtemp582[8U];
    __Vtemp583[9U] = __Vtemp582[9U];
    __Vtemp583[0xaU] = __Vtemp582[0xaU];
    __Vtemp583[0xbU] = __Vtemp582[0xbU];
    __Vtemp583[0xcU] = __Vtemp582[0xcU];
    __Vtemp583[0xdU] = __Vtemp582[0xdU];
    __Vtemp583[0xeU] = __Vtemp582[0xeU];
    __Vtemp583[0xfU] = __Vtemp582[0xfU];
    __Vtemp583[0x10U] = __Vtemp582[0x10U];
    __Vtemp583[0x11U] = __Vtemp582[0x11U];
    __Vtemp583[0x12U] = ((vlSelf->top__DOT__de__DOT__Or 
                          << 0x16U) | __Vtemp582[0x12U]);
    __Vtemp583[0x13U] = (vlSelf->top__DOT__de__DOT__Or 
                         >> 0xaU);
    VL_EXTEND_WW(633,630, __Vtemp584, __Vtemp583);
    __Vtemp585[0U] = __Vtemp584[0U];
    __Vtemp585[1U] = __Vtemp584[1U];
    __Vtemp585[2U] = __Vtemp584[2U];
    __Vtemp585[3U] = __Vtemp584[3U];
    __Vtemp585[4U] = __Vtemp584[4U];
    __Vtemp585[5U] = __Vtemp584[5U];
    __Vtemp585[6U] = __Vtemp584[6U];
    __Vtemp585[7U] = __Vtemp584[7U];
    __Vtemp585[8U] = __Vtemp584[8U];
    __Vtemp585[9U] = __Vtemp584[9U];
    __Vtemp585[0xaU] = __Vtemp584[0xaU];
    __Vtemp585[0xbU] = __Vtemp584[0xbU];
    __Vtemp585[0xcU] = __Vtemp584[0xcU];
    __Vtemp585[0xdU] = __Vtemp584[0xdU];
    __Vtemp585[0xeU] = __Vtemp584[0xeU];
    __Vtemp585[0xfU] = __Vtemp584[0xfU];
    __Vtemp585[0x10U] = __Vtemp584[0x10U];
    __Vtemp585[0x11U] = __Vtemp584[0x11U];
    __Vtemp585[0x12U] = __Vtemp584[0x12U];
    __Vtemp585[0x13U] = ((vlSelf->top__DOT__de__DOT__Xor 
                          << 0x19U) | __Vtemp584[0x13U]);
    __Vtemp585[0x14U] = (vlSelf->top__DOT__de__DOT__Xor 
                         >> 7U);
    VL_EXTEND_WW(668,665, __Vtemp586, __Vtemp585);
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0U] 
        = __Vtemp586[0U];
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[1U] 
        = __Vtemp586[1U];
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[2U] 
        = __Vtemp586[2U];
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[3U] 
        = __Vtemp586[3U];
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[4U] 
        = __Vtemp586[4U];
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[5U] 
        = __Vtemp586[5U];
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[6U] 
        = __Vtemp586[6U];
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[7U] 
        = __Vtemp586[7U];
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[8U] 
        = __Vtemp586[8U];
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[9U] 
        = __Vtemp586[9U];
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0xaU] 
        = __Vtemp586[0xaU];
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0xbU] 
        = __Vtemp586[0xbU];
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0xcU] 
        = __Vtemp586[0xcU];
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0xdU] 
        = __Vtemp586[0xdU];
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0xeU] 
        = __Vtemp586[0xeU];
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0xfU] 
        = __Vtemp586[0xfU];
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x10U] 
        = __Vtemp586[0x10U];
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x11U] 
        = __Vtemp586[0x11U];
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x12U] 
        = __Vtemp586[0x12U];
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x13U] 
        = __Vtemp586[0x13U];
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x14U] 
        = ((vlSelf->top__DOT__de__DOT__And << 0x1cU) 
           | __Vtemp586[0x14U]);
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x15U] 
        = ((vlSelf->top__DOT__de__DOT__And >> 4U) | 
           (__Vtemp510[0U] << 0x1cU));
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x16U] 
        = ((__Vtemp510[0U] >> 4U) | (__Vtemp510[1U] 
                                     << 0x1cU));
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x17U] 
        = ((__Vtemp510[1U] >> 4U) | (__Vtemp510[2U] 
                                     << 0x1cU));
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x18U] 
        = ((__Vtemp510[2U] >> 4U) | (__Vtemp510[3U] 
                                     << 0x1cU));
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x19U] 
        = ((__Vtemp510[3U] >> 4U) | (__Vtemp510[4U] 
                                     << 0x1cU));
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x1aU] 
        = ((__Vtemp510[4U] >> 4U) | (__Vtemp510[5U] 
                                     << 0x1cU));
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x1bU] 
        = ((__Vtemp510[5U] >> 4U) | (__Vtemp510[6U] 
                                     << 0x1cU));
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x1cU] 
        = ((__Vtemp510[6U] >> 4U) | (__Vtemp510[7U] 
                                     << 0x1cU));
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x1dU] 
        = ((__Vtemp510[7U] >> 4U) | (__Vtemp510[8U] 
                                     << 0x1cU));
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x1eU] 
        = ((__Vtemp510[8U] >> 4U) | (__Vtemp510[9U] 
                                     << 0x1cU));
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x1fU] 
        = ((__Vtemp510[9U] >> 4U) | (__Vtemp510[0xaU] 
                                     << 0x1cU));
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x20U] 
        = ((__Vtemp510[0xaU] >> 4U) | (__Vtemp510[0xbU] 
                                       << 0x1cU));
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x21U] 
        = ((__Vtemp510[0xbU] >> 4U) | (__Vtemp510[0xcU] 
                                       << 0x1cU));
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x22U] 
        = ((__Vtemp510[0xcU] >> 4U) | (__Vtemp510[0xdU] 
                                       << 0x1cU));
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x23U] 
        = (((0xffffff8U & (vlSelf->top__DOT__de__DOT__addw 
                           << 3U)) | (__Vtemp510[0xdU] 
                                      >> 4U)) | (0xf0000000U 
                                                 & (vlSelf->top__DOT__de__DOT__addw 
                                                    << 3U)));
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x24U] 
        = (8U | (((0xfffffc0U & (vlSelf->top__DOT__de__DOT__ld 
                                 << 6U)) | (vlSelf->top__DOT__de__DOT__addw 
                                            >> 0x1dU)) 
                 | (0xf0000000U & (vlSelf->top__DOT__de__DOT__ld 
                                   << 6U))));
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x25U] 
        = (0x40U | (((0xffffe00U & (vlSelf->top__DOT__de__DOT__lhu 
                                    << 9U)) | (vlSelf->top__DOT__de__DOT__ld 
                                               >> 0x1aU)) 
                    | (0xf0000000U & (vlSelf->top__DOT__de__DOT__lhu 
                                      << 9U))));
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x26U] 
        = (0x200U | (((0xffff000U & (vlSelf->top__DOT__de__DOT__lwu 
                                     << 0xcU)) | (vlSelf->top__DOT__de__DOT__lhu 
                                                  >> 0x17U)) 
                     | (0xf0000000U & (vlSelf->top__DOT__de__DOT__lwu 
                                       << 0xcU))));
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x27U] 
        = (0x1000U | (((0xfff8000U & (vlSelf->top__DOT__de__DOT__lbu 
                                      << 0xfU)) | (vlSelf->top__DOT__de__DOT__lwu 
                                                   >> 0x14U)) 
                      | (0xf0000000U & (vlSelf->top__DOT__de__DOT__lbu 
                                        << 0xfU))));
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x28U] 
        = (0x8000U | (((0xffc0000U & (vlSelf->top__DOT__de__DOT__lb 
                                      << 0x12U)) | 
                       (vlSelf->top__DOT__de__DOT__lbu 
                        >> 0x11U)) | (0xf0000000U & 
                                      (vlSelf->top__DOT__de__DOT__lb 
                                       << 0x12U))));
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x29U] 
        = (0x40000U | (((0xfe00000U & (vlSelf->top__DOT__de__DOT__lh 
                                       << 0x15U)) | 
                        (vlSelf->top__DOT__de__DOT__lb 
                         >> 0xeU)) | (0xf0000000U & 
                                      (vlSelf->top__DOT__de__DOT__lh 
                                       << 0x15U))));
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x2aU] 
        = (0x200000U | (((0xf000000U & (vlSelf->top__DOT__de__DOT__lw 
                                        << 0x18U)) 
                         | (vlSelf->top__DOT__de__DOT__lh 
                            >> 0xbU)) | (0xf0000000U 
                                         & (vlSelf->top__DOT__de__DOT__lw 
                                            << 0x18U))));
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x2bU] 
        = (0x2000000U | (((0x8000000U & (vlSelf->top__DOT__de__DOT__sb 
                                         << 0x1bU)) 
                          | (vlSelf->top__DOT__de__DOT__lw 
                             >> 8U)) | (0xf0000000U 
                                        & (vlSelf->top__DOT__de__DOT__sb 
                                           << 0x1bU))));
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x2cU] 
        = (0x10000000U | ((vlSelf->top__DOT__de__DOT__sb 
                           >> 5U) | (vlSelf->top__DOT__de__DOT__sw 
                                     << 0x1eU)));
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x2dU] 
        = (0x80000000U | ((0xfffffffU & (vlSelf->top__DOT__de__DOT__sw 
                                         >> 2U)) | 
                          (0x30000000U & (vlSelf->top__DOT__de__DOT__sw 
                                          >> 2U))));
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x2eU] 
        = ((0xffffffeU & (vlSelf->top__DOT__de__DOT__sh 
                          << 1U)) | (0xf0000000U & 
                                     (vlSelf->top__DOT__de__DOT__sh 
                                      << 1U)));
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x2fU] 
        = (4U | (((0xffffff0U & (vlSelf->top__DOT__de__DOT__sd 
                                 << 4U)) | (vlSelf->top__DOT__de__DOT__sh 
                                            >> 0x1fU)) 
                 | (0xf0000000U & (vlSelf->top__DOT__de__DOT__sd 
                                   << 4U))));
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x30U] 
        = (0x10U | (((0xfffff80U & (vlSelf->top__DOT__de__DOT__jalr 
                                    << 7U)) | (vlSelf->top__DOT__de__DOT__sd 
                                               >> 0x1cU)) 
                    | (0xf0000000U & (vlSelf->top__DOT__de__DOT__jalr 
                                      << 7U))));
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x31U] 
        = (0x280U | (((0xffffc00U & (0x1bc00U | (0xffe0000U 
                                                 & (vlSelf->inst 
                                                    << 0xaU)))) 
                      | (vlSelf->top__DOT__de__DOT__jalr 
                         >> 0x19U)) | (0xf0000000U 
                                       & (vlSelf->inst 
                                          << 0xaU))));
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x32U] 
        = (0x1000U | (((0xfffe000U & (0x6e000U | (0xff00000U 
                                                  & (vlSelf->inst 
                                                     << 0xdU)))) 
                       | (vlSelf->inst >> 0x16U)) | 
                      (0xf0000000U & (vlSelf->inst 
                                      << 0xdU))));
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x33U] 
        = (0x8000U | (((0xfff0000U & (0x170000U | (0xf800000U 
                                                   & (vlSelf->inst 
                                                      << 0x10U)))) 
                       | (vlSelf->inst >> 0x13U)) | 
                      (0xf0000000U & (vlSelf->inst 
                                      << 0x10U))));
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x34U] 
        = (0x10000U | (((0xff80000U & (vlSelf->top__DOT__de__DOT__ori 
                                       << 0x13U)) | 
                        (vlSelf->inst >> 0x10U)) | 
                       (0xf0000000U & (vlSelf->top__DOT__de__DOT__ori 
                                       << 0x13U))));
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x35U] 
        = (0x80000U | (((0xfc00000U & (vlSelf->top__DOT__de__DOT__xori 
                                       << 0x16U)) | 
                        (vlSelf->top__DOT__de__DOT__ori 
                         >> 0xdU)) | (0xf0000000U & 
                                      (vlSelf->top__DOT__de__DOT__xori 
                                       << 0x16U))));
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x36U] 
        = (0x400000U | (((0xe000000U & (vlSelf->top__DOT__de__DOT__andi 
                                        << 0x19U)) 
                         | (vlSelf->top__DOT__de__DOT__xori 
                            >> 0xaU)) | (0xf0000000U 
                                         & (vlSelf->top__DOT__de__DOT__andi 
                                            << 0x19U))));
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x37U] 
        = (0x2000000U | ((vlSelf->top__DOT__de__DOT__andi 
                          >> 7U) | (vlSelf->top__DOT__de__DOT__addi 
                                    << 0x1cU)));
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x38U] 
        = (vlSelf->top__DOT__de__DOT__addi >> 4U);
    if (((IData)(vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__hit) 
         ^ (IData)(vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__hit))) {
        ++(vlSymsp->__Vcoverage[4285]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__hit 
            = vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__hit;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__lut_out) 
               ^ (IData)(vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[4280]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0x1eU & (IData)(vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__lut_out)) 
               | (1U & (IData)(vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__lut_out)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__lut_out) 
               ^ (IData)(vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[4281]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0x1dU & (IData)(vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__lut_out)) 
               | (2U & (IData)(vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__lut_out)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__lut_out) 
               ^ (IData)(vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[4282]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0x1bU & (IData)(vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__lut_out)) 
               | (4U & (IData)(vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__lut_out)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__lut_out) 
               ^ (IData)(vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[4283]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0x17U & (IData)(vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__lut_out)) 
               | (8U & (IData)(vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__lut_out)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__lut_out) 
                  ^ (IData)(vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[4284]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfU & (IData)(vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__lut_out)) 
               | (0x10U & (IData)(vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__lut_out)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__de__DOT__raddr) 
               ^ (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__raddr)))) {
        ++(vlSymsp->__Vcoverage[567]);
        vlSelf->top__DOT__de__DOT____Vtogcov__raddr 
            = ((0x1eU & (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__raddr)) 
               | (1U & (IData)(vlSelf->top__DOT__de__DOT__raddr)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__de__DOT__raddr) 
               ^ (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__raddr)))) {
        ++(vlSymsp->__Vcoverage[568]);
        vlSelf->top__DOT__de__DOT____Vtogcov__raddr 
            = ((0x1dU & (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__raddr)) 
               | (2U & (IData)(vlSelf->top__DOT__de__DOT__raddr)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__de__DOT__raddr) 
               ^ (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__raddr)))) {
        ++(vlSymsp->__Vcoverage[569]);
        vlSelf->top__DOT__de__DOT____Vtogcov__raddr 
            = ((0x1bU & (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__raddr)) 
               | (4U & (IData)(vlSelf->top__DOT__de__DOT__raddr)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__de__DOT__raddr) 
               ^ (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__raddr)))) {
        ++(vlSymsp->__Vcoverage[570]);
        vlSelf->top__DOT__de__DOT____Vtogcov__raddr 
            = ((0x17U & (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__raddr)) 
               | (8U & (IData)(vlSelf->top__DOT__de__DOT__raddr)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__de__DOT__raddr) 
                  ^ (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__raddr)))) {
        ++(vlSymsp->__Vcoverage[571]);
        vlSelf->top__DOT__de__DOT____Vtogcov__raddr 
            = ((0xfU & (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__raddr)) 
               | (0x10U & (IData)(vlSelf->top__DOT__de__DOT__raddr)));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U] 
               ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[4870]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U] 
            = ((0xfffffffeU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]) 
               | (1U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U] 
               ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[4871]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U] 
            = ((0xfffffffdU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]) 
               | (2U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U] 
               ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[4872]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U] 
            = ((0xfffffffbU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]) 
               | (4U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U]));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U] 
               ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[4873]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U] 
            = ((0xfffffff7U & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]) 
               | (8U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U]));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U] 
                  ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[4874]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U] 
            = ((0xffffffefU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]) 
               | (0x10U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U]));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U] 
                  ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[4875]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U] 
            = ((0xffffffdfU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]) 
               | (0x20U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U]));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U] 
                  ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[4876]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U] 
            = ((0xffffffbfU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]) 
               | (0x40U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U]));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U] 
                  ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[4877]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U] 
            = ((0xffffff7fU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]) 
               | (0x80U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U]));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U] 
                   ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[4878]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U] 
            = ((0xfffffeffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]) 
               | (0x100U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U]));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U] 
                   ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[4879]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U] 
            = ((0xfffffdffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]) 
               | (0x200U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U]));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U] 
                   ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[4880]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U] 
            = ((0xfffffbffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]) 
               | (0x400U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U]));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U] 
                   ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[4881]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]) 
               | (0x800U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U] 
                    ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[4882]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U] 
            = ((0xffffefffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]) 
               | (0x1000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U] 
                    ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[4883]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U] 
            = ((0xffffdfffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]) 
               | (0x2000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U] 
                    ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[4884]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U] 
            = ((0xffffbfffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]) 
               | (0x4000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U] 
                    ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[4885]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U] 
            = ((0xffff7fffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]) 
               | (0x8000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U] 
                     ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[4886]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U] 
            = ((0xfffeffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]) 
               | (0x10000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U] 
                     ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[4887]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U] 
            = ((0xfffdffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]) 
               | (0x20000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U] 
                     ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[4888]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U] 
            = ((0xfffbffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]) 
               | (0x40000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U] 
                     ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[4889]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]) 
               | (0x80000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U] 
                      ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[4890]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U] 
            = ((0xffefffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]) 
               | (0x100000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U] 
                      ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[4891]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U] 
            = ((0xffdfffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]) 
               | (0x200000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U] 
                      ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[4892]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U] 
            = ((0xffbfffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]) 
               | (0x400000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U] 
                      ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[4893]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U] 
            = ((0xff7fffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]) 
               | (0x800000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U] 
                       ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[4894]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U] 
            = ((0xfeffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]) 
               | (0x1000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U] 
                       ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[4895]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U] 
            = ((0xfdffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]) 
               | (0x2000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U] 
                       ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[4896]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U] 
            = ((0xfbffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]) 
               | (0x4000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U] 
                       ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[4897]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]) 
               | (0x8000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U] 
                        ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[4898]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U] 
            = ((0xefffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]) 
               | (0x10000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U] 
                        ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[4899]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U] 
            = ((0xdfffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]) 
               | (0x20000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U] 
                        ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[4900]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U] 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]) 
               | (0x40000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U]));
    }
    if (((vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U] 
          ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[4901]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U] 
            = ((0x7fffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]) 
               | (0x80000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U] 
               ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[4902]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U] 
            = ((0xfffffffeU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]) 
               | (1U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U] 
               ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[4903]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U] 
            = ((0xfffffffdU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]) 
               | (2U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U] 
               ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[4904]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U] 
            = ((0xfffffffbU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]) 
               | (4U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U]));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U] 
               ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[4905]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U] 
            = ((0xfffffff7U & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]) 
               | (8U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U]));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U] 
                  ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[4906]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U] 
            = ((0xffffffefU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]) 
               | (0x10U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U]));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U] 
                  ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[4907]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U] 
            = ((0xffffffdfU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]) 
               | (0x20U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U]));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U] 
                  ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[4908]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U] 
            = ((0xffffffbfU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]) 
               | (0x40U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U]));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U] 
                  ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[4909]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U] 
            = ((0xffffff7fU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]) 
               | (0x80U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U]));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U] 
                   ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[4910]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U] 
            = ((0xfffffeffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]) 
               | (0x100U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U]));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U] 
                   ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[4911]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U] 
            = ((0xfffffdffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]) 
               | (0x200U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U]));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U] 
                   ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[4912]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U] 
            = ((0xfffffbffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]) 
               | (0x400U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U]));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U] 
                   ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[4913]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]) 
               | (0x800U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U] 
                    ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[4914]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U] 
            = ((0xffffefffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]) 
               | (0x1000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U] 
                    ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[4915]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U] 
            = ((0xffffdfffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]) 
               | (0x2000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U] 
                    ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[4916]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U] 
            = ((0xffffbfffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]) 
               | (0x4000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U] 
                    ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[4917]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U] 
            = ((0xffff7fffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]) 
               | (0x8000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U] 
                     ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[4918]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U] 
            = ((0xfffeffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]) 
               | (0x10000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U] 
                     ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[4919]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U] 
            = ((0xfffdffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]) 
               | (0x20000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U] 
                     ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[4920]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U] 
            = ((0xfffbffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]) 
               | (0x40000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U] 
                     ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[4921]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]) 
               | (0x80000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U] 
                      ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[4922]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U] 
            = ((0xffefffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]) 
               | (0x100000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U] 
                      ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[4923]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U] 
            = ((0xffdfffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]) 
               | (0x200000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U] 
                      ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[4924]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U] 
            = ((0xffbfffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]) 
               | (0x400000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U] 
                      ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[4925]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U] 
            = ((0xff7fffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]) 
               | (0x800000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U] 
                       ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[4926]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U] 
            = ((0xfeffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]) 
               | (0x1000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U] 
                       ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[4927]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U] 
            = ((0xfdffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]) 
               | (0x2000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U] 
                       ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[4928]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U] 
            = ((0xfbffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]) 
               | (0x4000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U] 
                       ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[4929]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]) 
               | (0x8000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U] 
                        ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[4930]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U] 
            = ((0xefffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]) 
               | (0x10000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U] 
                        ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[4931]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U] 
            = ((0xdfffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]) 
               | (0x20000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U] 
                        ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[4932]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U] 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]) 
               | (0x40000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U]));
    }
    if (((vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U] 
          ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[4933]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U] 
            = ((0x7fffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]) 
               | (0x80000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U]));
    }
}
