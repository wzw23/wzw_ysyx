// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

void Vtop___024root___combo__TOP__8(Vtop___024root* vlSelf);
void Vtop___024root___combo__TOP__9(Vtop___024root* vlSelf);
void Vtop___024root___combo__TOP__10(Vtop___024root* vlSelf);
void Vtop_MuxKeyWithDefault__N6_K3_D40___settle__TOP__top__DOT__de__DOT__m1__1(Vtop_MuxKeyWithDefault__N6_K3_D40* vlSelf);
void Vtop___024root___settle__TOP__5(Vtop___024root* vlSelf);
void Vtop_MuxKeyWithDefault__N6_K3_D40___settle__TOP__top__DOT__de__DOT__m7__2(Vtop_MuxKeyWithDefault__N6_K3_D40* vlSelf);
void Vtop___024root___settle__TOP__6(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__13(Vtop___024root* vlSelf);
void Vtop___024root___combo__TOP__17(Vtop___024root* vlSelf);
void Vtop_MuxKeyWithDefault__N4_K20_D40___settle__TOP__top__DOT__de__DOT__m10__1(Vtop_MuxKeyWithDefault__N4_K20_D40* vlSelf);
void Vtop_MuxKeyWithDefault__N31_K20_D40___settle__TOP__top__DOT__de__DOT__m4__1(Vtop_MuxKeyWithDefault__N31_K20_D40* vlSelf);
void Vtop_MuxKeyWithDefault__N31_K20_D40___settle__TOP__top__DOT__de__DOT__m5__2(Vtop_MuxKeyWithDefault__N31_K20_D40* vlSelf);
void Vtop___024root___settle__TOP__15(Vtop___024root* vlSelf);
void Vtop_MuxKeyWithDefault__N4_K20_D40___settle__TOP__top__DOT__de__DOT__m9__2(Vtop_MuxKeyWithDefault__N4_K20_D40* vlSelf);
void Vtop___024root___settle__TOP__16(Vtop___024root* vlSelf);

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    Vtop___024root___combo__TOP__8(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vtop___024root___combo__TOP__9(vlSelf);
    Vtop___024root___combo__TOP__10(vlSelf);
    Vtop_MuxKeyWithDefault__N6_K3_D40___settle__TOP__top__DOT__de__DOT__m1__1((&vlSymsp->TOP__top__DOT__de__DOT__m1));
    Vtop___024root___settle__TOP__5(vlSelf);
    Vtop_MuxKeyWithDefault__N6_K3_D40___settle__TOP__top__DOT__de__DOT__m7__2((&vlSymsp->TOP__top__DOT__de__DOT__m7));
    Vtop___024root___settle__TOP__6(vlSelf);
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtop___024root___sequent__TOP__13(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    Vtop___024root___combo__TOP__17(vlSelf);
    Vtop_MuxKeyWithDefault__N4_K20_D40___settle__TOP__top__DOT__de__DOT__m10__1((&vlSymsp->TOP__top__DOT__de__DOT__m10));
    Vtop_MuxKeyWithDefault__N31_K20_D40___settle__TOP__top__DOT__de__DOT__m4__1((&vlSymsp->TOP__top__DOT__de__DOT__m4));
    Vtop_MuxKeyWithDefault__N31_K20_D40___settle__TOP__top__DOT__de__DOT__m5__2((&vlSymsp->TOP__top__DOT__de__DOT__m5));
    Vtop___024root___settle__TOP__15(vlSelf);
    Vtop_MuxKeyWithDefault__N4_K20_D40___settle__TOP__top__DOT__de__DOT__m9__2((&vlSymsp->TOP__top__DOT__de__DOT__m9));
    Vtop___024root___settle__TOP__16(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

QData Vtop___024root___change_request_1(Vtop___024root* vlSelf);

VL_INLINE_OPT QData Vtop___024root___change_request(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___change_request\n"); );
    // Body
    return (Vtop___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vtop___024root___change_request_1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
