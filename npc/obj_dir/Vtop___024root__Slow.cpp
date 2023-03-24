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

void Vtop___024root::__Vconfigure(Vtop__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vtop___024root::~Vtop___024root() {
}

void Vtop___024root____Vdpiimwrap_top__DOT__mem0__DOT__vpmem_read_TOP(QData/*63:0*/ mraddr, QData/*63:0*/ &mrdata);
void Vtop___024root____Vdpiimwrap_top__DOT__mem0__DOT__vpmem_write_TOP(QData/*63:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ wmask, QData/*63:0*/ use_wen);

void Vtop___024root___settle__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__2\n"); );
    // Variables
    SData/*11:0*/ top__DOT__alu_control;
    QData/*63:0*/ top__DOT__ram_addr;
    QData/*63:0*/ top__DOT__src1;
    QData/*63:0*/ top__DOT__exe_0__DOT__alu_src1;
    QData/*63:0*/ top__DOT__exe_0__DOT__alu_src2;
    QData/*63:0*/ __Vtask_top__DOT__mem0__DOT__vpmem_read__0__mrdata;
    // Body
    vlSelf->top__DOT__control_0__DOT__sw = (IData)(
                                                   (0x2023U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->inst)));
    vlSelf->top__DOT__control_0__DOT__sb = (IData)(
                                                   (0x23U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->inst)));
    vlSelf->top__DOT__imm = ((0x40U & vlSelf->inst)
                              ? ((0x20U & vlSelf->inst)
                                  ? ((0x10U & vlSelf->inst)
                                      ? ((8U & vlSelf->inst)
                                          ? 0ULL : 
                                         ((4U & vlSelf->inst)
                                           ? 0ULL : 
                                          ((2U & vlSelf->inst)
                                            ? ((1U 
                                                & vlSelf->inst)
                                                ? (
                                                   ((- (QData)((IData)(
                                                                       (vlSelf->inst 
                                                                        >> 0x1fU)))) 
                                                    << 0xcU) 
                                                   | (QData)((IData)(
                                                                     (vlSelf->inst 
                                                                      >> 0x14U))))
                                                : 0ULL)
                                            : 0ULL)))
                                      : ((8U & vlSelf->inst)
                                          ? ((4U & vlSelf->inst)
                                              ? ((2U 
                                                  & vlSelf->inst)
                                                  ? 
                                                 ((1U 
                                                   & vlSelf->inst)
                                                   ? 
                                                  (((- (QData)((IData)(
                                                                       (vlSelf->inst 
                                                                        >> 0x1fU)))) 
                                                    << 0x15U) 
                                                   | (QData)((IData)(
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
                                                                                >> 0x14U))))))))
                                                   : 0ULL)
                                                  : 0ULL)
                                              : 0ULL)
                                          : ((4U & vlSelf->inst)
                                              ? ((2U 
                                                  & vlSelf->inst)
                                                  ? 
                                                 ((1U 
                                                   & vlSelf->inst)
                                                   ? 
                                                  (((- (QData)((IData)(
                                                                       (vlSelf->inst 
                                                                        >> 0x1fU)))) 
                                                    << 0xcU) 
                                                   | (QData)((IData)(
                                                                     (vlSelf->inst 
                                                                      >> 0x14U))))
                                                   : 0ULL)
                                                  : 0ULL)
                                              : ((2U 
                                                  & vlSelf->inst)
                                                  ? 
                                                 ((1U 
                                                   & vlSelf->inst)
                                                   ? 
                                                  (((- (QData)((IData)(
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
                                                                                >> 7U))))))))
                                                   : 0ULL)
                                                  : 0ULL))))
                                  : 0ULL) : ((0x20U 
                                              & vlSelf->inst)
                                              ? ((0x10U 
                                                  & vlSelf->inst)
                                                  ? 
                                                 ((8U 
                                                   & vlSelf->inst)
                                                   ? 0ULL
                                                   : 
                                                  ((4U 
                                                    & vlSelf->inst)
                                                    ? 
                                                   ((2U 
                                                     & vlSelf->inst)
                                                     ? 
                                                    ((1U 
                                                      & vlSelf->inst)
                                                      ? 
                                                     (((QData)((IData)(
                                                                       (- (IData)(
                                                                                (vlSelf->inst 
                                                                                >> 0x1fU))))) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        (0xfffff000U 
                                                                         & vlSelf->inst))))
                                                      : 0ULL)
                                                     : 0ULL)
                                                    : 0ULL))
                                                  : 
                                                 ((8U 
                                                   & vlSelf->inst)
                                                   ? 0ULL
                                                   : 
                                                  ((4U 
                                                    & vlSelf->inst)
                                                    ? 0ULL
                                                    : 
                                                   ((2U 
                                                     & vlSelf->inst)
                                                     ? 
                                                    ((1U 
                                                      & vlSelf->inst)
                                                      ? 
                                                     (((- (QData)((IData)(
                                                                          (vlSelf->inst 
                                                                           >> 0x1fU)))) 
                                                       << 0xcU) 
                                                      | (QData)((IData)(
                                                                        ((0xfe0U 
                                                                          & (vlSelf->inst 
                                                                             >> 0x14U)) 
                                                                         | (0x1fU 
                                                                            & (vlSelf->inst 
                                                                               >> 7U))))))
                                                      : 0ULL)
                                                     : 0ULL))))
                                              : ((0x10U 
                                                  & vlSelf->inst)
                                                  ? 
                                                 ((8U 
                                                   & vlSelf->inst)
                                                   ? 0ULL
                                                   : 
                                                  ((4U 
                                                    & vlSelf->inst)
                                                    ? 
                                                   ((2U 
                                                     & vlSelf->inst)
                                                     ? 
                                                    ((1U 
                                                      & vlSelf->inst)
                                                      ? 
                                                     (((QData)((IData)(
                                                                       (- (IData)(
                                                                                (vlSelf->inst 
                                                                                >> 0x1fU))))) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        (0xfffff000U 
                                                                         & vlSelf->inst))))
                                                      : 0ULL)
                                                     : 0ULL)
                                                    : 
                                                   ((2U 
                                                     & vlSelf->inst)
                                                     ? 
                                                    ((1U 
                                                      & vlSelf->inst)
                                                      ? 
                                                     (((- (QData)((IData)(
                                                                          (vlSelf->inst 
                                                                           >> 0x1fU)))) 
                                                       << 0xcU) 
                                                      | (QData)((IData)(
                                                                        (vlSelf->inst 
                                                                         >> 0x14U))))
                                                      : 0ULL)
                                                     : 0ULL)))
                                                  : 
                                                 ((8U 
                                                   & vlSelf->inst)
                                                   ? 0ULL
                                                   : 
                                                  ((4U 
                                                    & vlSelf->inst)
                                                    ? 0ULL
                                                    : 
                                                   ((2U 
                                                     & vlSelf->inst)
                                                     ? 
                                                    ((1U 
                                                      & vlSelf->inst)
                                                      ? 
                                                     (((- (QData)((IData)(
                                                                          (vlSelf->inst 
                                                                           >> 0x1fU)))) 
                                                       << 0xcU) 
                                                      | (QData)((IData)(
                                                                        (vlSelf->inst 
                                                                         >> 0x14U))))
                                                      : 0ULL)
                                                     : 0ULL))))));
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
    top__DOT__src1 = vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf
        [(0x1fU & (vlSelf->inst >> 0xfU))];
    top__DOT__alu_control = (1U & (- (IData)(((IData)(vlSelf->top__DOT__control_0__DOT__Add) 
                                              | (IData)(vlSelf->top__DOT__control_0__DOT__addi)))));
    top__DOT__exe_0__DOT__alu_src2 = ((1U == ((1U & 
                                               (- (IData)((IData)(vlSelf->top__DOT__control_0__DOT__Add)))) 
                                              | (2U 
                                                 & (- (IData)((IData)(vlSelf->top__DOT__control_0__DOT__addi))))))
                                       ? vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf
                                      [(0x1fU & (vlSelf->inst 
                                                 >> 0x14U))]
                                       : 0ULL);
    top__DOT__exe_0__DOT__alu_src1 = ((1U == (1U & 
                                              (- (IData)((IData)(vlSelf->top__DOT__control_0__DOT__Add)))))
                                       ? top__DOT__src1
                                       : 0ULL);
    vlSelf->top__DOT__alu_result = (((((((((1U == (IData)(top__DOT__alu_control)) 
                                           | (2U == (IData)(top__DOT__alu_control))) 
                                          | (4U == (IData)(top__DOT__alu_control))) 
                                         | (8U == (IData)(top__DOT__alu_control))) 
                                        | (0x10U == (IData)(top__DOT__alu_control))) 
                                       | (0x20U == (IData)(top__DOT__alu_control))) 
                                      | (0x40U == (IData)(top__DOT__alu_control))) 
                                     | (0x80U == (IData)(top__DOT__alu_control)))
                                     ? ((1U == (IData)(top__DOT__alu_control))
                                         ? (top__DOT__exe_0__DOT__alu_src1 
                                            + top__DOT__exe_0__DOT__alu_src2)
                                         : ((2U == (IData)(top__DOT__alu_control))
                                             ? (top__DOT__exe_0__DOT__alu_src1 
                                                - top__DOT__exe_0__DOT__alu_src2)
                                             : ((4U 
                                                 == (IData)(top__DOT__alu_control))
                                                 ? (QData)((IData)(
                                                                   (top__DOT__exe_0__DOT__alu_src1 
                                                                    > top__DOT__exe_0__DOT__alu_src2)))
                                                 : 
                                                ((8U 
                                                  == (IData)(top__DOT__alu_control))
                                                  ? (QData)((IData)(
                                                                    (0ULL 
                                                                     < 
                                                                     (top__DOT__exe_0__DOT__alu_src1 
                                                                      - top__DOT__exe_0__DOT__alu_src2))))
                                                  : 
                                                 ((0x10U 
                                                   == (IData)(top__DOT__alu_control))
                                                   ? 
                                                  (top__DOT__exe_0__DOT__alu_src1 
                                                   & top__DOT__exe_0__DOT__alu_src2)
                                                   : 
                                                  ((0x20U 
                                                    == (IData)(top__DOT__alu_control))
                                                    ? 
                                                   (~ 
                                                    (top__DOT__exe_0__DOT__alu_src1 
                                                     | top__DOT__exe_0__DOT__alu_src2))
                                                    : 
                                                   ((0x40U 
                                                     == (IData)(top__DOT__alu_control))
                                                     ? 
                                                    (top__DOT__exe_0__DOT__alu_src1 
                                                     | top__DOT__exe_0__DOT__alu_src2)
                                                     : 
                                                    (top__DOT__exe_0__DOT__alu_src1 
                                                     ^ top__DOT__exe_0__DOT__alu_src2))))))))
                                     : ((0x100U == (IData)(top__DOT__alu_control))
                                         ? (top__DOT__exe_0__DOT__alu_src2 
                                            << (0x1fU 
                                                & (IData)(top__DOT__exe_0__DOT__alu_src1)))
                                         : ((0x200U 
                                             == (IData)(top__DOT__alu_control))
                                             ? (top__DOT__exe_0__DOT__alu_src2 
                                                >> 
                                                (0x1fU 
                                                 & (IData)(top__DOT__exe_0__DOT__alu_src1)))
                                             : ((0x400U 
                                                 == (IData)(top__DOT__alu_control))
                                                 ? 
                                                VL_SHIFTRS_QQI(64,64,5, top__DOT__exe_0__DOT__alu_src2, 
                                                               (0x1fU 
                                                                & (IData)(top__DOT__exe_0__DOT__alu_src1)))
                                                 : 
                                                ((0x800U 
                                                  == (IData)(top__DOT__alu_control))
                                                  ? 
                                                 ((QData)((IData)(
                                                                  (0xfffffU 
                                                                   & (IData)(
                                                                             (top__DOT__exe_0__DOT__alu_src2 
                                                                              >> 0xcU))))) 
                                                  << 0xcU)
                                                  : 0ULL)))));
    top__DOT__ram_addr = (top__DOT__exe_0__DOT__alu_src1 
                          + top__DOT__exe_0__DOT__alu_src2);
    Vtop___024root____Vdpiimwrap_top__DOT__mem0__DOT__vpmem_read_TOP(top__DOT__ram_addr, __Vtask_top__DOT__mem0__DOT__vpmem_read__0__mrdata);
    Vtop___024root____Vdpiimwrap_top__DOT__mem0__DOT__vpmem_write_TOP(top__DOT__ram_addr, top__DOT__src1, 
                                                                      (0xffU 
                                                                       & ((((- (IData)((IData)(vlSelf->top__DOT__control_0__DOT__sb))) 
                                                                            | (0xfU 
                                                                               & (- (IData)((IData)(vlSelf->top__DOT__control_0__DOT__sw))))) 
                                                                           | (3U 
                                                                              & (- (IData)((IData)(
                                                                                (0x1023U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->inst))))))) 
                                                                          | (IData)(vlSelf->top__DOT__control_0__DOT__sb))), (QData)((IData)(
                                                                                ((IData)(
                                                                                (0x3023U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->inst))) 
                                                                                | (IData)(vlSelf->top__DOT__control_0__DOT__sw)))));
}

void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__2(vlSelf);
}

void Vtop___024root___final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___final\n"); );
}

void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = 0;
    vlSelf->rst = 0;
    vlSelf->inst = 0;
    vlSelf->cpupc = 0;
    vlSelf->top__DOT__imm = 0;
    vlSelf->top__DOT__alu_result = 0;
    vlSelf->top__DOT__control_0__DOT__addi = 0;
    vlSelf->top__DOT__control_0__DOT__sw = 0;
    vlSelf->top__DOT__control_0__DOT__sb = 0;
    vlSelf->top__DOT__control_0__DOT__Add = 0;
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[__Vi0] = 0;
    }
}
