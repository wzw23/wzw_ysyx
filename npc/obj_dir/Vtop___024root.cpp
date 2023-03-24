// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========

extern "C" void vpmem_read(long long mraddr, long long* mrdata);

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_top__DOT__mem0__DOT__vpmem_read_TOP(QData/*63:0*/ mraddr, QData/*63:0*/ &mrdata) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__mem0__DOT__vpmem_read_TOP\n"); );
    // Body
    long long mraddr__Vcvt;
    for (size_t mraddr__Vidx = 0; mraddr__Vidx < 1; ++mraddr__Vidx) mraddr__Vcvt = mraddr;
    long long mrdata__Vcvt;
    vpmem_read(mraddr__Vcvt, &mrdata__Vcvt);
    mrdata = mrdata__Vcvt;
}

extern "C" void vpmem_write(long long waddr, long long wdata, char wmask, long long use_wen);

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_top__DOT__mem0__DOT__vpmem_write_TOP(QData/*63:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ wmask, QData/*63:0*/ use_wen) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__mem0__DOT__vpmem_write_TOP\n"); );
    // Body
    long long waddr__Vcvt;
    for (size_t waddr__Vidx = 0; waddr__Vidx < 1; ++waddr__Vidx) waddr__Vcvt = waddr;
    long long wdata__Vcvt;
    for (size_t wdata__Vidx = 0; wdata__Vidx < 1; ++wdata__Vidx) wdata__Vcvt = wdata;
    char wmask__Vcvt;
    for (size_t wmask__Vidx = 0; wmask__Vidx < 1; ++wmask__Vidx) wmask__Vcvt = wmask;
    long long use_wen__Vcvt;
    for (size_t use_wen__Vidx = 0; use_wen__Vidx < 1; ++use_wen__Vidx) use_wen__Vcvt = use_wen;
    vpmem_write(waddr__Vcvt, wdata__Vcvt, wmask__Vcvt, use_wen__Vcvt);
}

VL_INLINE_OPT void Vtop___024root___combo__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__1\n"); );
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
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__3(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__3\n"); );
    // Variables
    CData/*0:0*/ __Vdlyvset__top__DOT__exe_0__DOT__r0__DOT__rf__v0;
    CData/*4:0*/ __Vdlyvdim0__top__DOT__exe_0__DOT__r0__DOT__rf__v32;
    CData/*0:0*/ __Vdlyvset__top__DOT__exe_0__DOT__r0__DOT__rf__v32;
    QData/*63:0*/ __Vdlyvval__top__DOT__exe_0__DOT__r0__DOT__rf__v32;
    // Body
    __Vdlyvset__top__DOT__exe_0__DOT__r0__DOT__rf__v0 = 0U;
    __Vdlyvset__top__DOT__exe_0__DOT__r0__DOT__rf__v32 = 0U;
    vlSelf->cpupc = ((IData)(vlSelf->rst) ? 0x80000000U
                      : 0x80000004U);
    if (vlSelf->rst) {
        __Vdlyvset__top__DOT__exe_0__DOT__r0__DOT__rf__v0 = 1U;
    }
    if (((IData)(vlSelf->top__DOT__control_0__DOT__Add) 
         | (IData)(vlSelf->top__DOT__control_0__DOT__addi))) {
        __Vdlyvval__top__DOT__exe_0__DOT__r0__DOT__rf__v32 
            = ((IData)((0x2003U == (0x707fU & vlSelf->inst)))
                ? ((IData)((0x2003U == (0x707fU & vlSelf->inst)))
                    ? vlSelf->top__DOT__imm : 0ULL)
                : vlSelf->top__DOT__alu_result);
        __Vdlyvset__top__DOT__exe_0__DOT__r0__DOT__rf__v32 = 1U;
        __Vdlyvdim0__top__DOT__exe_0__DOT__r0__DOT__rf__v32 
            = (0x1fU & (vlSelf->inst >> 7U));
    }
    if (__Vdlyvset__top__DOT__exe_0__DOT__r0__DOT__rf__v0) {
        vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[0U] = 0ULL;
        vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[1U] = 0ULL;
        vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[2U] = 0ULL;
        vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[3U] = 0ULL;
        vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[4U] = 0ULL;
        vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[5U] = 0ULL;
        vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[6U] = 0ULL;
        vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[7U] = 0ULL;
        vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[8U] = 0ULL;
        vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[9U] = 0ULL;
        vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[0xaU] = 0ULL;
        vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[0xbU] = 0ULL;
        vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[0xcU] = 0ULL;
        vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[0xdU] = 0ULL;
        vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[0xeU] = 0ULL;
        vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[0xfU] = 0ULL;
        vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[0x10U] = 0ULL;
        vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[0x11U] = 0ULL;
        vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[0x12U] = 0ULL;
        vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[0x13U] = 0ULL;
        vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[0x14U] = 0ULL;
        vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[0x15U] = 0ULL;
        vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[0x16U] = 0ULL;
        vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[0x17U] = 0ULL;
        vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[0x18U] = 0ULL;
        vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[0x19U] = 0ULL;
        vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[0x1aU] = 0ULL;
        vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[0x1bU] = 0ULL;
        vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[0x1cU] = 0ULL;
        vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[0x1dU] = 0ULL;
        vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[0x1eU] = 0ULL;
        vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[0x1fU] = 0ULL;
    }
    if (__Vdlyvset__top__DOT__exe_0__DOT__r0__DOT__rf__v32) {
        vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[__Vdlyvdim0__top__DOT__exe_0__DOT__r0__DOT__rf__v32] 
            = __Vdlyvval__top__DOT__exe_0__DOT__r0__DOT__rf__v32;
        vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[0U] = 0ULL;
    }
}

VL_INLINE_OPT void Vtop___024root___combo__TOP__4(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__4\n"); );
    // Variables
    SData/*11:0*/ top__DOT__alu_control;
    QData/*63:0*/ top__DOT__ram_addr;
    QData/*63:0*/ top__DOT__src1;
    QData/*63:0*/ top__DOT__exe_0__DOT__alu_src1;
    QData/*63:0*/ top__DOT__exe_0__DOT__alu_src2;
    QData/*63:0*/ __Vtask_top__DOT__mem0__DOT__vpmem_read__0__mrdata;
    // Body
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
    vlSelf->top__DOT__control_0__DOT__Add = (IData)(
                                                    ((0x33U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->inst)) 
                                                     & (0U 
                                                        == 
                                                        (vlSelf->inst 
                                                         >> 0x19U))));
    vlSelf->top__DOT__control_0__DOT__addi = (IData)(
                                                     (0x67U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->inst)));
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

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    Vtop___024root___combo__TOP__1(vlSelf);
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtop___024root___sequent__TOP__3(vlSelf);
    }
    Vtop___024root___combo__TOP__4(vlSelf);
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
