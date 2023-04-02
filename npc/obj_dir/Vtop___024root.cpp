// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========

extern "C" void vpmem_read(long long mraddr, long long* mrdata);

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_top__DOT__i0__DOT__vpmem_read_TOP(QData/*63:0*/ mraddr, QData/*63:0*/ &mrdata) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__i0__DOT__vpmem_read_TOP\n"); );
    // Body
    long long mraddr__Vcvt;
    for (size_t mraddr__Vidx = 0; mraddr__Vidx < 1; ++mraddr__Vidx) mraddr__Vcvt = mraddr;
    long long mrdata__Vcvt;
    vpmem_read(mraddr__Vcvt, &mrdata__Vcvt);
    mrdata = mrdata__Vcvt;
}

extern "C" void set_gpr_ptr(const svOpenArrayHandle a);

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_top__DOT__exe_0__DOT__r0__DOT__set_gpr_ptr__Vdpioc2_TOP(const VlUnpacked<QData/*63:0*/, 32> &a) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__exe_0__DOT__r0__DOT__set_gpr_ptr__Vdpioc2_TOP\n"); );
    // Body
    static const int a__Vopenprops__ulims[2] = {31, 0};
    static const VerilatedVarProps a__Vopenprops(VLVT_UINT64, VLVD_IN, VerilatedVarProps::Packed(), 63, 0, VerilatedVarProps::Unpacked(), 1, a__Vopenprops__ulims);
    VerilatedDpiOpenVar a__Vopenarray (&a__Vopenprops, &a);
    set_gpr_ptr(&a__Vopenarray);
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

VL_INLINE_OPT void Vtop___024root___sequent__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__1\n"); );
    // Variables
    VlWide<16>/*496:0*/ top__DOT__mem0__DOT____Vcellinp__mux3____pinNumber3;
    QData/*63:0*/ __Vtask_top__DOT__mem0__DOT__vpmem_read__2__mrdata;
    // Body
    Vtop___024root____Vdpiimwrap_top__DOT__i0__DOT__vpmem_read_TOP(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__adder_result, __Vtask_top__DOT__mem0__DOT__vpmem_read__2__mrdata);
    vlSelf->top__DOT__mem0__DOT__r_rdata_ld = __Vtask_top__DOT__mem0__DOT__vpmem_read__2__mrdata;
    Vtop___024root____Vdpiimwrap_top__DOT__mem0__DOT__vpmem_write_TOP(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__adder_result, 
                                                                      vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf
                                                                      [
                                                                      (0x1fU 
                                                                       & (vlSelf->inst 
                                                                          >> 0x14U))], 
                                                                      ((IData)(vlSelf->top__DOT__control_0__DOT__sb)
                                                                        ? 1U
                                                                        : 
                                                                       ((IData)(vlSelf->top__DOT__control_0__DOT__sh)
                                                                         ? 3U
                                                                         : 
                                                                        ((IData)(vlSelf->top__DOT__control_0__DOT__sw)
                                                                          ? 0xfU
                                                                          : 
                                                                         ((IData)(vlSelf->top__DOT__control_0__DOT__sd)
                                                                           ? 0xffU
                                                                           : 0U)))), (QData)((IData)(
                                                                                (((((IData)(vlSelf->top__DOT__control_0__DOT__sd) 
                                                                                | (IData)(vlSelf->top__DOT__control_0__DOT__sb)) 
                                                                                | (IData)(vlSelf->top__DOT__control_0__DOT__sh)) 
                                                                                | (IData)(vlSelf->top__DOT__control_0__DOT__sw)) 
                                                                                | (IData)(vlSelf->top__DOT__control_0__DOT__sb)))));
    top__DOT__mem0__DOT____Vcellinp__mux3____pinNumber3[0U] 
        = (IData)((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem0__DOT__r_rdata_ld)))));
    top__DOT__mem0__DOT____Vcellinp__mux3____pinNumber3[1U] 
        = (IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem0__DOT__r_rdata_ld)))) 
                   >> 0x20U));
    top__DOT__mem0__DOT____Vcellinp__mux3____pinNumber3[2U] 
        = (0x40U | ((IData)((((- (QData)((IData)((1U 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__mem0__DOT__r_rdata_ld 
                                                             >> 7U)))))) 
                              << 8U) | (QData)((IData)(
                                                       (0xffU 
                                                        & (IData)(vlSelf->top__DOT__mem0__DOT__r_rdata_ld)))))) 
                    << 7U));
    top__DOT__mem0__DOT____Vcellinp__mux3____pinNumber3[3U] 
        = (((IData)((((- (QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__mem0__DOT__r_rdata_ld 
                                                        >> 7U)))))) 
                      << 8U) | (QData)((IData)((0xffU 
                                                & (IData)(vlSelf->top__DOT__mem0__DOT__r_rdata_ld)))))) 
            >> 0x19U) | ((IData)(((((- (QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelf->top__DOT__mem0__DOT__r_rdata_ld 
                                                                   >> 7U)))))) 
                                    << 8U) | (QData)((IData)(
                                                             (0xffU 
                                                              & (IData)(vlSelf->top__DOT__mem0__DOT__r_rdata_ld))))) 
                                  >> 0x20U)) << 7U));
    top__DOT__mem0__DOT____Vcellinp__mux3____pinNumber3[4U] 
        = (0x1000U | (((IData)((QData)((IData)((0xffffU 
                                                & (IData)(vlSelf->top__DOT__mem0__DOT__r_rdata_ld))))) 
                       << 0xeU) | ((IData)(((((- (QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__mem0__DOT__r_rdata_ld 
                                                                             >> 7U)))))) 
                                              << 8U) 
                                             | (QData)((IData)(
                                                               (0xffU 
                                                                & (IData)(vlSelf->top__DOT__mem0__DOT__r_rdata_ld))))) 
                                            >> 0x20U)) 
                                   >> 0x19U)));
    top__DOT__mem0__DOT____Vcellinp__mux3____pinNumber3[5U] 
        = (((IData)((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mem0__DOT__r_rdata_ld))))) 
            >> 0x12U) | ((IData)(((QData)((IData)((0xffffU 
                                                   & (IData)(vlSelf->top__DOT__mem0__DOT__r_rdata_ld)))) 
                                  >> 0x20U)) << 0xeU));
    top__DOT__mem0__DOT____Vcellinp__mux3____pinNumber3[6U] 
        = (0x40000U | (((IData)((((- (QData)((IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__mem0__DOT__r_rdata_ld 
                                                                 >> 0xfU)))))) 
                                  << 0x10U) | (QData)((IData)(
                                                              (0xffffU 
                                                               & (IData)(vlSelf->top__DOT__mem0__DOT__r_rdata_ld)))))) 
                        << 0x15U) | ((IData)(((QData)((IData)(
                                                              (0xffffU 
                                                               & (IData)(vlSelf->top__DOT__mem0__DOT__r_rdata_ld)))) 
                                              >> 0x20U)) 
                                     >> 0x12U)));
    top__DOT__mem0__DOT____Vcellinp__mux3____pinNumber3[7U] 
        = (((IData)((((- (QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__mem0__DOT__r_rdata_ld 
                                                        >> 0xfU)))))) 
                      << 0x10U) | (QData)((IData)((0xffffU 
                                                   & (IData)(vlSelf->top__DOT__mem0__DOT__r_rdata_ld)))))) 
            >> 0xbU) | ((IData)(((((- (QData)((IData)(
                                                      (1U 
                                                       & (IData)(
                                                                 (vlSelf->top__DOT__mem0__DOT__r_rdata_ld 
                                                                  >> 0xfU)))))) 
                                   << 0x10U) | (QData)((IData)(
                                                               (0xffffU 
                                                                & (IData)(vlSelf->top__DOT__mem0__DOT__r_rdata_ld))))) 
                                 >> 0x20U)) << 0x15U));
    top__DOT__mem0__DOT____Vcellinp__mux3____pinNumber3[8U] 
        = (0x1000000U | (((IData)((QData)((IData)(vlSelf->top__DOT__mem0__DOT__r_rdata_ld))) 
                          << 0x1cU) | ((IData)(((((- (QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__mem0__DOT__r_rdata_ld 
                                                                                >> 0xfU)))))) 
                                                  << 0x10U) 
                                                 | (QData)((IData)(
                                                                   (0xffffU 
                                                                    & (IData)(vlSelf->top__DOT__mem0__DOT__r_rdata_ld))))) 
                                                >> 0x20U)) 
                                       >> 0xbU)));
    top__DOT__mem0__DOT____Vcellinp__mux3____pinNumber3[9U] 
        = (((IData)((QData)((IData)(vlSelf->top__DOT__mem0__DOT__r_rdata_ld))) 
            >> 4U) | ((IData)(((QData)((IData)(vlSelf->top__DOT__mem0__DOT__r_rdata_ld)) 
                               >> 0x20U)) << 0x1cU));
    top__DOT__mem0__DOT____Vcellinp__mux3____pinNumber3[0xaU] 
        = (0x40000000U | ((IData)(((QData)((IData)(vlSelf->top__DOT__mem0__DOT__r_rdata_ld)) 
                                   >> 0x20U)) >> 4U));
    top__DOT__mem0__DOT____Vcellinp__mux3____pinNumber3[0xbU] 
        = ((IData)((((QData)((IData)((- (IData)((1U 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__mem0__DOT__r_rdata_ld 
                                                            >> 0x1fU))))))) 
                     << 0x20U) | (QData)((IData)(vlSelf->top__DOT__mem0__DOT__r_rdata_ld)))) 
           << 3U);
    top__DOT__mem0__DOT____Vcellinp__mux3____pinNumber3[0xcU] 
        = (((IData)((((QData)((IData)((- (IData)((1U 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__mem0__DOT__r_rdata_ld 
                                                             >> 0x1fU))))))) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__mem0__DOT__r_rdata_ld)))) 
            >> 0x1dU) | ((IData)(((((QData)((IData)(
                                                    (- (IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__mem0__DOT__r_rdata_ld 
                                                                           >> 0x1fU))))))) 
                                    << 0x20U) | (QData)((IData)(vlSelf->top__DOT__mem0__DOT__r_rdata_ld))) 
                                  >> 0x20U)) << 3U));
    top__DOT__mem0__DOT____Vcellinp__mux3____pinNumber3[0xdU] 
        = (0x10U | (((IData)(vlSelf->top__DOT__mem0__DOT__r_rdata_ld) 
                     << 0xaU) | ((IData)(((((QData)((IData)(
                                                            (- (IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->top__DOT__mem0__DOT__r_rdata_ld 
                                                                                >> 0x1fU))))))) 
                                            << 0x20U) 
                                           | (QData)((IData)(vlSelf->top__DOT__mem0__DOT__r_rdata_ld))) 
                                          >> 0x20U)) 
                                 >> 0x1dU)));
    top__DOT__mem0__DOT____Vcellinp__mux3____pinNumber3[0xeU] 
        = (((IData)(vlSelf->top__DOT__mem0__DOT__r_rdata_ld) 
            >> 0x16U) | ((IData)((vlSelf->top__DOT__mem0__DOT__r_rdata_ld 
                                  >> 0x20U)) << 0xaU));
    top__DOT__mem0__DOT____Vcellinp__mux3____pinNumber3[0xfU] 
        = (0x400U | ((IData)((vlSelf->top__DOT__mem0__DOT__r_rdata_ld 
                              >> 0x20U)) >> 0x16U));
    vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__pair_list[0U][0U] 
        = top__DOT__mem0__DOT____Vcellinp__mux3____pinNumber3[0U];
    vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__pair_list[0U][1U] 
        = top__DOT__mem0__DOT____Vcellinp__mux3____pinNumber3[1U];
    vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__pair_list[0U][2U] 
        = (0x7fU & top__DOT__mem0__DOT____Vcellinp__mux3____pinNumber3[2U]);
    vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__pair_list[1U][0U] 
        = ((top__DOT__mem0__DOT____Vcellinp__mux3____pinNumber3[3U] 
            << 0x19U) | (top__DOT__mem0__DOT____Vcellinp__mux3____pinNumber3[2U] 
                         >> 7U));
    vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__pair_list[1U][1U] 
        = ((top__DOT__mem0__DOT____Vcellinp__mux3____pinNumber3[4U] 
            << 0x19U) | (top__DOT__mem0__DOT____Vcellinp__mux3____pinNumber3[3U] 
                         >> 7U));
    vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__pair_list[1U][2U] 
        = (0x7fU & (top__DOT__mem0__DOT____Vcellinp__mux3____pinNumber3[4U] 
                    >> 7U));
    vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__pair_list[2U][0U] 
        = ((top__DOT__mem0__DOT____Vcellinp__mux3____pinNumber3[5U] 
            << 0x12U) | (top__DOT__mem0__DOT____Vcellinp__mux3____pinNumber3[4U] 
                         >> 0xeU));
    vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__pair_list[2U][1U] 
        = ((top__DOT__mem0__DOT____Vcellinp__mux3____pinNumber3[6U] 
            << 0x12U) | (top__DOT__mem0__DOT____Vcellinp__mux3____pinNumber3[5U] 
                         >> 0xeU));
    vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__pair_list[2U][2U] 
        = (0x7fU & (top__DOT__mem0__DOT____Vcellinp__mux3____pinNumber3[6U] 
                    >> 0xeU));
    vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__pair_list[3U][0U] 
        = ((top__DOT__mem0__DOT____Vcellinp__mux3____pinNumber3[7U] 
            << 0xbU) | (top__DOT__mem0__DOT____Vcellinp__mux3____pinNumber3[6U] 
                        >> 0x15U));
    vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__pair_list[3U][1U] 
        = ((top__DOT__mem0__DOT____Vcellinp__mux3____pinNumber3[8U] 
            << 0xbU) | (top__DOT__mem0__DOT____Vcellinp__mux3____pinNumber3[7U] 
                        >> 0x15U));
    vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__pair_list[3U][2U] 
        = (0x7fU & (top__DOT__mem0__DOT____Vcellinp__mux3____pinNumber3[8U] 
                    >> 0x15U));
    vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__pair_list[4U][0U] 
        = ((top__DOT__mem0__DOT____Vcellinp__mux3____pinNumber3[9U] 
            << 4U) | (top__DOT__mem0__DOT____Vcellinp__mux3____pinNumber3[8U] 
                      >> 0x1cU));
    vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__pair_list[4U][1U] 
        = ((top__DOT__mem0__DOT____Vcellinp__mux3____pinNumber3[0xaU] 
            << 4U) | (top__DOT__mem0__DOT____Vcellinp__mux3____pinNumber3[9U] 
                      >> 0x1cU));
    vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__pair_list[4U][2U] 
        = (0x7fU & ((top__DOT__mem0__DOT____Vcellinp__mux3____pinNumber3[0xbU] 
                     << 4U) | (top__DOT__mem0__DOT____Vcellinp__mux3____pinNumber3[0xaU] 
                               >> 0x1cU)));
    vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__pair_list[5U][0U] 
        = ((top__DOT__mem0__DOT____Vcellinp__mux3____pinNumber3[0xcU] 
            << 0x1dU) | (top__DOT__mem0__DOT____Vcellinp__mux3____pinNumber3[0xbU] 
                         >> 3U));
    vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__pair_list[5U][1U] 
        = ((top__DOT__mem0__DOT____Vcellinp__mux3____pinNumber3[0xdU] 
            << 0x1dU) | (top__DOT__mem0__DOT____Vcellinp__mux3____pinNumber3[0xcU] 
                         >> 3U));
    vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__pair_list[5U][2U] 
        = (0x7fU & (top__DOT__mem0__DOT____Vcellinp__mux3____pinNumber3[0xdU] 
                    >> 3U));
    vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__pair_list[6U][0U] 
        = ((top__DOT__mem0__DOT____Vcellinp__mux3____pinNumber3[0xeU] 
            << 0x16U) | (top__DOT__mem0__DOT____Vcellinp__mux3____pinNumber3[0xdU] 
                         >> 0xaU));
    vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__pair_list[6U][1U] 
        = ((top__DOT__mem0__DOT____Vcellinp__mux3____pinNumber3[0xfU] 
            << 0x16U) | (top__DOT__mem0__DOT____Vcellinp__mux3____pinNumber3[0xeU] 
                         >> 0xaU));
    vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__pair_list[6U][2U] 
        = (0x7fU & (top__DOT__mem0__DOT____Vcellinp__mux3____pinNumber3[0xfU] 
                    >> 0xaU));
    vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__key_list[0U] 
        = (0x7fU & vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__pair_list
           [0U][2U]);
    vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__key_list[1U] 
        = (0x7fU & vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__pair_list
           [1U][2U]);
    vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__data_list[2U] 
        = (((QData)((IData)(vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__pair_list
                            [2U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__pair_list
                                                                   [2U][0U])));
    vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__key_list[2U] 
        = (0x7fU & vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__pair_list
           [2U][2U]);
    vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__data_list[3U] 
        = (((QData)((IData)(vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__pair_list
                            [3U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__pair_list
                                                                   [3U][0U])));
    vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__key_list[3U] 
        = (0x7fU & vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__pair_list
           [3U][2U]);
    vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__data_list[4U] 
        = (((QData)((IData)(vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__pair_list
                            [4U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__pair_list
                                                                   [4U][0U])));
    vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__key_list[4U] 
        = (0x7fU & vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__pair_list
           [4U][2U]);
    vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__data_list[5U] 
        = (((QData)((IData)(vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__pair_list
                            [5U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__pair_list
                                                                   [5U][0U])));
    vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__key_list[5U] 
        = (0x7fU & vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__pair_list
           [5U][2U]);
    vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__data_list[6U] 
        = (((QData)((IData)(vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__pair_list
                            [6U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__pair_list
                                                                   [6U][0U])));
    vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__key_list[6U] 
        = (0x7fU & vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__pair_list
           [6U][2U]);
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__2\n"); );
    // Variables
    CData/*1:0*/ top__DOT__sel_nextpc;
    CData/*3:0*/ top__DOT__sel_alu_src1;
    CData/*2:0*/ top__DOT__sel_alu_src2;
    CData/*0:0*/ top__DOT__w_choose;
    CData/*0:0*/ top__DOT__control_0__DOT__beq;
    CData/*0:0*/ top__DOT__control_0__DOT__bne;
    CData/*0:0*/ top__DOT__control_0__DOT__bge;
    CData/*0:0*/ top__DOT__control_0__DOT__bgeu;
    CData/*0:0*/ top__DOT__control_0__DOT__bltu;
    CData/*0:0*/ top__DOT__control_0__DOT__blt;
    CData/*0:0*/ top__DOT__exe_0__DOT__alu2__DOT__adder_cin;
    CData/*0:0*/ top__DOT__exe_0__DOT__alu2__DOT__adder_cout;
    CData/*0:0*/ __Vdlyvset__top__DOT__exe_0__DOT__r0__DOT__rf__v0;
    CData/*4:0*/ __Vdlyvdim0__top__DOT__exe_0__DOT__r0__DOT__rf__v32;
    CData/*0:0*/ __Vdlyvset__top__DOT__exe_0__DOT__r0__DOT__rf__v32;
    CData/*0:0*/ __Vdlyvset__top__DOT__exe_0__DOT__r0__DOT__csr__v0;
    CData/*1:0*/ __Vdlyvdim0__top__DOT__exe_0__DOT__r0__DOT__csr__v3;
    CData/*0:0*/ __Vdlyvset__top__DOT__exe_0__DOT__r0__DOT__csr__v3;
    CData/*0:0*/ __Vdlyvset__top__DOT__exe_0__DOT__r0__DOT__csr__v4;
    IData/*16:0*/ top__DOT__alu_control;
    VlWide<9>/*263:0*/ top__DOT__i0__DOT____Vcellinp__mux4____pinNumber3;
    VlWide<24>/*759:0*/ top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3;
    VlWide<9>/*271:0*/ top__DOT__exe_0__DOT____Vcellinp__mux1____pinNumber3;
    VlWide<7>/*200:0*/ top__DOT__exe_0__DOT____Vcellinp__mux2____pinNumber3;
    VlWide<5>/*129:0*/ top__DOT__exe_0__DOT____Vcellinp__mux3____pinNumber3;
    VlWide<5>/*129:0*/ top__DOT__exe_0__DOT__alu2__DOT____Vcellinp__mux1____pinNumber3;
    VlWide<8>/*255:0*/ __Vtemp60;
    VlWide<12>/*383:0*/ __Vtemp64;
    VlWide<24>/*767:0*/ __Vtemp74;
    VlWide<3>/*95:0*/ __Vtemp171;
    VlWide<3>/*95:0*/ __Vtemp174;
    VlWide<3>/*95:0*/ __Vtemp221;
    VlWide<3>/*95:0*/ __Vtemp222;
    VlWide<3>/*95:0*/ __Vtemp223;
    VlWide<3>/*95:0*/ __Vtemp224;
    VlWide<3>/*95:0*/ __Vtemp225;
    VlWide<3>/*95:0*/ __Vtemp227;
    VlWide<3>/*95:0*/ __Vtemp228;
    QData/*63:0*/ top__DOT__imm;
    QData/*63:0*/ top__DOT__src1;
    QData/*63:0*/ top__DOT__i0__DOT__inst_64;
    QData/*63:0*/ top__DOT__i0__DOT__mux4__DOT__i0__DOT__lut_out;
    QData/*63:0*/ top__DOT__id_0__DOT__immi;
    QData/*63:0*/ top__DOT__id_0__DOT__immu;
    QData/*63:0*/ top__DOT__id_0__DOT__mux0__DOT__i0__DOT__lut_out;
    QData/*63:0*/ top__DOT__exe_0__DOT__alu_src1;
    QData/*63:0*/ top__DOT__exe_0__DOT__alu_src2;
    QData/*63:0*/ top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__lut_out;
    QData/*63:0*/ top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__lut_out;
    QData/*63:0*/ top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__lut_out;
    QData/*63:0*/ top__DOT__exe_0__DOT__alu2__DOT__slt_result;
    QData/*63:0*/ top__DOT__exe_0__DOT__alu2__DOT__or_result;
    QData/*63:0*/ top__DOT__exe_0__DOT__alu2__DOT__adder_b;
    QData/*63:0*/ top__DOT__exe_0__DOT__alu2__DOT__alu_result_uw;
    QData/*63:0*/ top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__lut_out;
    QData/*63:0*/ __Vdlyvval__top__DOT__exe_0__DOT__r0__DOT__rf__v32;
    QData/*63:0*/ __Vdlyvval__top__DOT__exe_0__DOT__r0__DOT__csr__v3;
    QData/*63:0*/ __Vdlyvval__top__DOT__exe_0__DOT__r0__DOT__csr__v5;
    // Body
    __Vdlyvset__top__DOT__exe_0__DOT__r0__DOT__rf__v0 = 0U;
    __Vdlyvset__top__DOT__exe_0__DOT__r0__DOT__rf__v32 = 0U;
    __Vdlyvset__top__DOT__exe_0__DOT__r0__DOT__csr__v0 = 0U;
    __Vdlyvset__top__DOT__exe_0__DOT__r0__DOT__csr__v3 = 0U;
    __Vdlyvset__top__DOT__exe_0__DOT__r0__DOT__csr__v4 = 0U;
    if (vlSelf->rst) {
        __Vdlyvset__top__DOT__exe_0__DOT__r0__DOT__rf__v0 = 1U;
    }
    if ((1U & (((((((((((((((((((((((((((((((((((((
                                                   ((((((((((((IData)(vlSelf->top__DOT__control_0__DOT__Add) 
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
               | (IData)(vlSelf->top__DOT__control_0__DOT__remu)))) {
        __Vdlyvval__top__DOT__exe_0__DOT__r0__DOT__rf__v32 
            = vlSelf->top__DOT__wdata;
        __Vdlyvset__top__DOT__exe_0__DOT__r0__DOT__rf__v32 = 1U;
        __Vdlyvdim0__top__DOT__exe_0__DOT__r0__DOT__rf__v32 
            = (0x1fU & (vlSelf->inst >> 7U));
    }
    if (vlSelf->rst) {
        __Vdlyvset__top__DOT__exe_0__DOT__r0__DOT__csr__v0 = 1U;
    }
    if (((IData)(vlSelf->top__DOT__control_0__DOT__csrrw) 
         | (IData)(vlSelf->top__DOT__control_0__DOT__csrrs))) {
        __Vdlyvval__top__DOT__exe_0__DOT__r0__DOT__csr__v3 
            = vlSelf->top__DOT__exe_0__DOT__c_wdata;
        __Vdlyvset__top__DOT__exe_0__DOT__r0__DOT__csr__v3 = 1U;
        __Vdlyvdim0__top__DOT__exe_0__DOT__r0__DOT__csr__v3 
            = vlSelf->top__DOT__c_raddr;
    }
    if ((2U & (IData)(vlSelf->top__DOT__e_inst))) {
        __Vdlyvset__top__DOT__exe_0__DOT__r0__DOT__csr__v4 = 1U;
        __Vdlyvval__top__DOT__exe_0__DOT__r0__DOT__csr__v5 
            = vlSelf->cpupc;
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
    if (__Vdlyvset__top__DOT__exe_0__DOT__r0__DOT__csr__v0) {
        vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr[1U] = 0ULL;
        vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr[2U] = 0ULL;
        vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr[0U] = 0xa00001800ULL;
    }
    if (__Vdlyvset__top__DOT__exe_0__DOT__r0__DOT__csr__v3) {
        vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr[__Vdlyvdim0__top__DOT__exe_0__DOT__r0__DOT__csr__v3] 
            = __Vdlyvval__top__DOT__exe_0__DOT__r0__DOT__csr__v3;
    }
    if (__Vdlyvset__top__DOT__exe_0__DOT__r0__DOT__csr__v4) {
        vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr[3U] = 0xbULL;
        vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr[2U] 
            = __Vdlyvval__top__DOT__exe_0__DOT__r0__DOT__csr__v5;
    }
    vlSelf->cpupc = ((IData)(vlSelf->rst) ? 0x80000000ULL
                      : vlSelf->dnpc);
    Vtop___024root____Vdpiimwrap_top__DOT__i0__DOT__vpmem_read_TOP(vlSelf->cpupc, vlSelf->__Vtask_top__DOT__i0__DOT__vpmem_read__0__mrdata);
    top__DOT__i0__DOT__inst_64 = vlSelf->__Vtask_top__DOT__i0__DOT__vpmem_read__0__mrdata;
    vlSelf->inst = (IData)(top__DOT__i0__DOT__inst_64);
    vlSelf->top__DOT__e_inst = ((0x100073U == vlSelf->inst)
                                 ? 1U : ((0x73U == vlSelf->inst)
                                          ? 2U : ((0x30200073U 
                                                   == vlSelf->inst)
                                                   ? 4U
                                                   : 0U)));
    top__DOT__src1 = vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf
        [(0x1fU & (vlSelf->inst >> 0xfU))];
    vlSelf->top__DOT__fu_7_d = ((0x18U & (IData)(vlSelf->top__DOT__fu_7_d)) 
                                | (((1U == (vlSelf->inst 
                                            >> 0x19U)) 
                                    << 2U) | (((0x20U 
                                                == 
                                                (vlSelf->inst 
                                                 >> 0x19U)) 
                                               << 1U) 
                                              | (0U 
                                                 == 
                                                 (vlSelf->inst 
                                                  >> 0x19U)))));
    vlSelf->top__DOT__fu_7_d = ((7U & (IData)(vlSelf->top__DOT__fu_7_d)) 
                                | (((0x10U == (vlSelf->inst 
                                               >> 0x1aU)) 
                                    << 4U) | ((0U == 
                                               (vlSelf->inst 
                                                >> 0x1aU)) 
                                              << 3U)));
    vlSelf->top__DOT__op_d = ((0xff8U & (IData)(vlSelf->top__DOT__op_d)) 
                              | (((0x6fU == (0x7fU 
                                             & vlSelf->inst)) 
                                  << 2U) | (((0x17U 
                                              == (0x7fU 
                                                  & vlSelf->inst)) 
                                             << 1U) 
                                            | (0x37U 
                                               == (0x7fU 
                                                   & vlSelf->inst)))));
    vlSelf->top__DOT__op_d = ((0xfc7U & (IData)(vlSelf->top__DOT__op_d)) 
                              | (((3U == (0x7fU & vlSelf->inst)) 
                                  << 5U) | (((0x63U 
                                              == (0x7fU 
                                                  & vlSelf->inst)) 
                                             << 4U) 
                                            | ((0x67U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->inst)) 
                                               << 3U))));
    vlSelf->top__DOT__op_d = ((0xe3fU & (IData)(vlSelf->top__DOT__op_d)) 
                              | (((0x33U == (0x7fU 
                                             & vlSelf->inst)) 
                                  << 8U) | (((0x13U 
                                              == (0x7fU 
                                                  & vlSelf->inst)) 
                                             << 7U) 
                                            | ((0x23U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->inst)) 
                                               << 6U))));
    vlSelf->top__DOT__op_d = ((0x1ffU & (IData)(vlSelf->top__DOT__op_d)) 
                              | (((0x3bU == (0x7fU 
                                             & vlSelf->inst)) 
                                  << 0xbU) | (((0x1bU 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->inst)) 
                                               << 0xaU) 
                                              | ((0x73U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->inst)) 
                                                 << 9U))));
    top__DOT__id_0__DOT__immi = (((- (QData)((IData)(
                                                     (vlSelf->inst 
                                                      >> 0x1fU)))) 
                                  << 0xcU) | (QData)((IData)(
                                                             (vlSelf->inst 
                                                              >> 0x14U))));
    top__DOT__id_0__DOT__immu = (((QData)((IData)((- (IData)(
                                                             (vlSelf->inst 
                                                              >> 0x1fU))))) 
                                  << 0x20U) | (QData)((IData)(
                                                              (0xfffff000U 
                                                               & vlSelf->inst))));
    vlSelf->ebreak = (1U & (IData)(vlSelf->top__DOT__e_inst));
    top__DOT__exe_0__DOT____Vcellinp__mux1____pinNumber3[0U] 
        = (IData)((((QData)((IData)((- (IData)((1U 
                                                & (IData)(
                                                          (top__DOT__src1 
                                                           >> 0x1fU))))))) 
                    << 0x20U) | (QData)((IData)(top__DOT__src1))));
    top__DOT__exe_0__DOT____Vcellinp__mux1____pinNumber3[1U] 
        = (IData)(((((QData)((IData)((- (IData)((1U 
                                                 & (IData)(
                                                           (top__DOT__src1 
                                                            >> 0x1fU))))))) 
                     << 0x20U) | (QData)((IData)(top__DOT__src1))) 
                   >> 0x20U));
    top__DOT__exe_0__DOT____Vcellinp__mux1____pinNumber3[2U] 
        = (8U | ((IData)((QData)((IData)(top__DOT__src1))) 
                 << 4U));
    top__DOT__exe_0__DOT____Vcellinp__mux1____pinNumber3[3U] 
        = (((IData)((QData)((IData)(top__DOT__src1))) 
            >> 0x1cU) | ((IData)(((QData)((IData)(top__DOT__src1)) 
                                  >> 0x20U)) << 4U));
    top__DOT__exe_0__DOT____Vcellinp__mux1____pinNumber3[4U] 
        = (0x40U | (((IData)(vlSelf->cpupc) << 8U) 
                    | ((IData)(((QData)((IData)(top__DOT__src1)) 
                                >> 0x20U)) >> 0x1cU)));
    top__DOT__exe_0__DOT____Vcellinp__mux1____pinNumber3[5U] 
        = (((IData)(vlSelf->cpupc) >> 0x18U) | ((IData)(
                                                        (vlSelf->cpupc 
                                                         >> 0x20U)) 
                                                << 8U));
    top__DOT__exe_0__DOT____Vcellinp__mux1____pinNumber3[6U] 
        = (0x200U | (((IData)(top__DOT__src1) << 0xcU) 
                     | ((IData)((vlSelf->cpupc >> 0x20U)) 
                        >> 0x18U)));
    top__DOT__exe_0__DOT____Vcellinp__mux1____pinNumber3[7U] 
        = (((IData)(top__DOT__src1) >> 0x14U) | ((IData)(
                                                         (top__DOT__src1 
                                                          >> 0x20U)) 
                                                 << 0xcU));
    top__DOT__exe_0__DOT____Vcellinp__mux1____pinNumber3[8U] 
        = (0x1000U | ((IData)((top__DOT__src1 >> 0x20U)) 
                      >> 0x14U));
    vlSelf->top__DOT__control_0__DOT__csrrw = (1U & 
                                               ((((IData)(1U) 
                                                  << 
                                                  (7U 
                                                   & (vlSelf->inst 
                                                      >> 0xcU))) 
                                                 >> 1U) 
                                                & ((IData)(vlSelf->top__DOT__op_d) 
                                                   >> 9U)));
    vlSelf->top__DOT__control_0__DOT__csrrs = (1U & 
                                               ((((IData)(1U) 
                                                  << 
                                                  (7U 
                                                   & (vlSelf->inst 
                                                      >> 0xcU))) 
                                                 >> 2U) 
                                                & ((IData)(vlSelf->top__DOT__op_d) 
                                                   >> 9U)));
    top__DOT__control_0__DOT__beq = (1U & (((IData)(1U) 
                                            << (7U 
                                                & (vlSelf->inst 
                                                   >> 0xcU))) 
                                           & ((IData)(vlSelf->top__DOT__op_d) 
                                              >> 4U)));
    top__DOT__control_0__DOT__bne = (1U & ((((IData)(1U) 
                                             << (7U 
                                                 & (vlSelf->inst 
                                                    >> 0xcU))) 
                                            >> 1U) 
                                           & ((IData)(vlSelf->top__DOT__op_d) 
                                              >> 4U)));
    vlSelf->top__DOT__control_0__DOT__addi = (1U & 
                                              (((IData)(1U) 
                                                << 
                                                (7U 
                                                 & (vlSelf->inst 
                                                    >> 0xcU))) 
                                               & ((IData)(vlSelf->top__DOT__op_d) 
                                                  >> 7U)));
    vlSelf->top__DOT__control_0__DOT__andi = (1U & 
                                              ((((IData)(1U) 
                                                 << 
                                                 (7U 
                                                  & (vlSelf->inst 
                                                     >> 0xcU))) 
                                                >> 7U) 
                                               & ((IData)(vlSelf->top__DOT__op_d) 
                                                  >> 7U)));
    vlSelf->top__DOT__control_0__DOT__xori = (1U & 
                                              ((((IData)(1U) 
                                                 << 
                                                 (7U 
                                                  & (vlSelf->inst 
                                                     >> 0xcU))) 
                                                >> 4U) 
                                               & ((IData)(vlSelf->top__DOT__op_d) 
                                                  >> 7U)));
    vlSelf->top__DOT__control_0__DOT__ori = (1U & (
                                                   (((IData)(1U) 
                                                     << 
                                                     (7U 
                                                      & (vlSelf->inst 
                                                         >> 0xcU))) 
                                                    >> 6U) 
                                                   & ((IData)(vlSelf->top__DOT__op_d) 
                                                      >> 7U)));
    vlSelf->top__DOT__control_0__DOT__sd = (1U & ((
                                                   ((IData)(1U) 
                                                    << 
                                                    (7U 
                                                     & (vlSelf->inst 
                                                        >> 0xcU))) 
                                                   >> 3U) 
                                                  & ((IData)(vlSelf->top__DOT__op_d) 
                                                     >> 6U)));
    vlSelf->top__DOT__control_0__DOT__sh = (1U & ((
                                                   ((IData)(1U) 
                                                    << 
                                                    (7U 
                                                     & (vlSelf->inst 
                                                        >> 0xcU))) 
                                                   >> 1U) 
                                                  & ((IData)(vlSelf->top__DOT__op_d) 
                                                     >> 6U)));
    vlSelf->top__DOT__control_0__DOT__sw = (1U & ((
                                                   ((IData)(1U) 
                                                    << 
                                                    (7U 
                                                     & (vlSelf->inst 
                                                        >> 0xcU))) 
                                                   >> 2U) 
                                                  & ((IData)(vlSelf->top__DOT__op_d) 
                                                     >> 6U)));
    vlSelf->top__DOT__control_0__DOT__sb = (1U & (((IData)(1U) 
                                                   << 
                                                   (7U 
                                                    & (vlSelf->inst 
                                                       >> 0xcU))) 
                                                  & ((IData)(vlSelf->top__DOT__op_d) 
                                                     >> 6U)));
    vlSelf->top__DOT__control_0__DOT__sltiu = (1U & 
                                               ((((IData)(1U) 
                                                  << 
                                                  (7U 
                                                   & (vlSelf->inst 
                                                      >> 0xcU))) 
                                                 >> 3U) 
                                                & ((IData)(vlSelf->top__DOT__op_d) 
                                                   >> 7U)));
    vlSelf->top__DOT__control_0__DOT__sll = (1U & (
                                                   ((IData)(vlSelf->top__DOT__fu_7_d) 
                                                    & (((IData)(1U) 
                                                        << 
                                                        (7U 
                                                         & (vlSelf->inst 
                                                            >> 0xcU))) 
                                                       >> 1U)) 
                                                   & ((IData)(vlSelf->top__DOT__op_d) 
                                                      >> 8U)));
    vlSelf->top__DOT__control_0__DOT__srl = (1U & (
                                                   ((IData)(vlSelf->top__DOT__fu_7_d) 
                                                    & (((IData)(1U) 
                                                        << 
                                                        (7U 
                                                         & (vlSelf->inst 
                                                            >> 0xcU))) 
                                                       >> 5U)) 
                                                   & ((IData)(vlSelf->top__DOT__op_d) 
                                                      >> 8U)));
    vlSelf->top__DOT__control_0__DOT__sra = (1U & (
                                                   (((IData)(vlSelf->top__DOT__fu_7_d) 
                                                     >> 1U) 
                                                    & (((IData)(1U) 
                                                        << 
                                                        (7U 
                                                         & (vlSelf->inst 
                                                            >> 0xcU))) 
                                                       >> 5U)) 
                                                   & ((IData)(vlSelf->top__DOT__op_d) 
                                                      >> 8U)));
    vlSelf->top__DOT__control_0__DOT__divu = (1U & 
                                              ((((IData)(vlSelf->top__DOT__fu_7_d) 
                                                 >> 2U) 
                                                & (((IData)(1U) 
                                                    << 
                                                    (7U 
                                                     & (vlSelf->inst 
                                                        >> 0xcU))) 
                                                   >> 5U)) 
                                               & ((IData)(vlSelf->top__DOT__op_d) 
                                                  >> 8U)));
    vlSelf->top__DOT__control_0__DOT__div = (1U & (
                                                   (((IData)(vlSelf->top__DOT__fu_7_d) 
                                                     >> 2U) 
                                                    & (((IData)(1U) 
                                                        << 
                                                        (7U 
                                                         & (vlSelf->inst 
                                                            >> 0xcU))) 
                                                       >> 4U)) 
                                                   & ((IData)(vlSelf->top__DOT__op_d) 
                                                      >> 8U)));
    vlSelf->top__DOT__control_0__DOT__rem = (1U & (
                                                   (((IData)(vlSelf->top__DOT__fu_7_d) 
                                                     >> 2U) 
                                                    & (((IData)(1U) 
                                                        << 
                                                        (7U 
                                                         & (vlSelf->inst 
                                                            >> 0xcU))) 
                                                       >> 6U)) 
                                                   & ((IData)(vlSelf->top__DOT__op_d) 
                                                      >> 8U)));
    vlSelf->top__DOT__control_0__DOT__remu = (1U & 
                                              ((((IData)(vlSelf->top__DOT__fu_7_d) 
                                                 >> 2U) 
                                                & (((IData)(1U) 
                                                    << 
                                                    (7U 
                                                     & (vlSelf->inst 
                                                        >> 0xcU))) 
                                                   >> 7U)) 
                                               & ((IData)(vlSelf->top__DOT__op_d) 
                                                  >> 8U)));
    vlSelf->top__DOT__control_0__DOT__Add = (1U & (
                                                   ((IData)(vlSelf->top__DOT__fu_7_d) 
                                                    & ((IData)(1U) 
                                                       << 
                                                       (7U 
                                                        & (vlSelf->inst 
                                                           >> 0xcU)))) 
                                                   & ((IData)(vlSelf->top__DOT__op_d) 
                                                      >> 8U)));
    vlSelf->top__DOT__control_0__DOT__Mul = (1U & (
                                                   (((IData)(vlSelf->top__DOT__fu_7_d) 
                                                     >> 2U) 
                                                    & ((IData)(1U) 
                                                       << 
                                                       (7U 
                                                        & (vlSelf->inst 
                                                           >> 0xcU)))) 
                                                   & ((IData)(vlSelf->top__DOT__op_d) 
                                                      >> 8U)));
    vlSelf->top__DOT__control_0__DOT__And = (1U & (
                                                   ((IData)(vlSelf->top__DOT__fu_7_d) 
                                                    & (((IData)(1U) 
                                                        << 
                                                        (7U 
                                                         & (vlSelf->inst 
                                                            >> 0xcU))) 
                                                       >> 7U)) 
                                                   & ((IData)(vlSelf->top__DOT__op_d) 
                                                      >> 8U)));
    vlSelf->top__DOT__control_0__DOT__Xor = (1U & (
                                                   ((IData)(vlSelf->top__DOT__fu_7_d) 
                                                    & (((IData)(1U) 
                                                        << 
                                                        (7U 
                                                         & (vlSelf->inst 
                                                            >> 0xcU))) 
                                                       >> 4U)) 
                                                   & ((IData)(vlSelf->top__DOT__op_d) 
                                                      >> 8U)));
    vlSelf->top__DOT__control_0__DOT__Or = (1U & (((IData)(vlSelf->top__DOT__fu_7_d) 
                                                   & (((IData)(1U) 
                                                       << 
                                                       (7U 
                                                        & (vlSelf->inst 
                                                           >> 0xcU))) 
                                                      >> 6U)) 
                                                  & ((IData)(vlSelf->top__DOT__op_d) 
                                                     >> 8U)));
    vlSelf->top__DOT__control_0__DOT__sltu = (1U & 
                                              (((IData)(vlSelf->top__DOT__fu_7_d) 
                                                & (((IData)(1U) 
                                                    << 
                                                    (7U 
                                                     & (vlSelf->inst 
                                                        >> 0xcU))) 
                                                   >> 3U)) 
                                               & ((IData)(vlSelf->top__DOT__op_d) 
                                                  >> 8U)));
    vlSelf->top__DOT__control_0__DOT__slt = (1U & (
                                                   ((IData)(vlSelf->top__DOT__fu_7_d) 
                                                    & (((IData)(1U) 
                                                        << 
                                                        (7U 
                                                         & (vlSelf->inst 
                                                            >> 0xcU))) 
                                                       >> 2U)) 
                                                   & ((IData)(vlSelf->top__DOT__op_d) 
                                                      >> 8U)));
    vlSelf->top__DOT__control_0__DOT__sub = (1U & (
                                                   (((IData)(vlSelf->top__DOT__fu_7_d) 
                                                     >> 1U) 
                                                    & ((IData)(1U) 
                                                       << 
                                                       (7U 
                                                        & (vlSelf->inst 
                                                           >> 0xcU)))) 
                                                   & ((IData)(vlSelf->top__DOT__op_d) 
                                                      >> 8U)));
    vlSelf->top__DOT__control_0__DOT__srai = (1U & 
                                              ((((IData)(vlSelf->top__DOT__fu_7_d) 
                                                 >> 4U) 
                                                & (((IData)(1U) 
                                                    << 
                                                    (7U 
                                                     & (vlSelf->inst 
                                                        >> 0xcU))) 
                                                   >> 5U)) 
                                               & ((IData)(vlSelf->top__DOT__op_d) 
                                                  >> 7U)));
    vlSelf->top__DOT__control_0__DOT__slli = (1U & 
                                              ((((IData)(vlSelf->top__DOT__fu_7_d) 
                                                 >> 3U) 
                                                & (((IData)(1U) 
                                                    << 
                                                    (7U 
                                                     & (vlSelf->inst 
                                                        >> 0xcU))) 
                                                   >> 1U)) 
                                               & ((IData)(vlSelf->top__DOT__op_d) 
                                                  >> 7U)));
    vlSelf->top__DOT__control_0__DOT__srli = (1U & 
                                              ((((IData)(vlSelf->top__DOT__fu_7_d) 
                                                 >> 3U) 
                                                & (((IData)(1U) 
                                                    << 
                                                    (7U 
                                                     & (vlSelf->inst 
                                                        >> 0xcU))) 
                                                   >> 5U)) 
                                               & ((IData)(vlSelf->top__DOT__op_d) 
                                                  >> 7U)));
    vlSelf->top__DOT__control_0__DOT__jalr = (1U & 
                                              (((IData)(1U) 
                                                << 
                                                (7U 
                                                 & (vlSelf->inst 
                                                    >> 0xcU))) 
                                               & ((IData)(vlSelf->top__DOT__op_d) 
                                                  >> 3U)));
    top__DOT__control_0__DOT__bge = (1U & ((((IData)(1U) 
                                             << (7U 
                                                 & (vlSelf->inst 
                                                    >> 0xcU))) 
                                            >> 5U) 
                                           & ((IData)(vlSelf->top__DOT__op_d) 
                                              >> 4U)));
    top__DOT__control_0__DOT__bgeu = (1U & ((((IData)(1U) 
                                              << (7U 
                                                  & (vlSelf->inst 
                                                     >> 0xcU))) 
                                             >> 7U) 
                                            & ((IData)(vlSelf->top__DOT__op_d) 
                                               >> 4U)));
    top__DOT__control_0__DOT__bltu = (1U & ((((IData)(1U) 
                                              << (7U 
                                                  & (vlSelf->inst 
                                                     >> 0xcU))) 
                                             >> 6U) 
                                            & ((IData)(vlSelf->top__DOT__op_d) 
                                               >> 4U)));
    top__DOT__control_0__DOT__blt = (1U & ((((IData)(1U) 
                                             << (7U 
                                                 & (vlSelf->inst 
                                                    >> 0xcU))) 
                                            >> 4U) 
                                           & ((IData)(vlSelf->top__DOT__op_d) 
                                              >> 4U)));
    vlSelf->top__DOT__control_0__DOT__addiw = (1U & 
                                               (((IData)(1U) 
                                                 << 
                                                 (7U 
                                                  & (vlSelf->inst 
                                                     >> 0xcU))) 
                                                & ((IData)(vlSelf->top__DOT__op_d) 
                                                   >> 0xaU)));
    vlSelf->top__DOT__control_0__DOT__sllw = (1U & 
                                              (((IData)(vlSelf->top__DOT__fu_7_d) 
                                                & (((IData)(1U) 
                                                    << 
                                                    (7U 
                                                     & (vlSelf->inst 
                                                        >> 0xcU))) 
                                                   >> 1U)) 
                                               & ((IData)(vlSelf->top__DOT__op_d) 
                                                  >> 0xbU)));
    vlSelf->top__DOT__control_0__DOT__srlw = (1U & 
                                              (((IData)(vlSelf->top__DOT__fu_7_d) 
                                                & (((IData)(1U) 
                                                    << 
                                                    (7U 
                                                     & (vlSelf->inst 
                                                        >> 0xcU))) 
                                                   >> 5U)) 
                                               & ((IData)(vlSelf->top__DOT__op_d) 
                                                  >> 0xbU)));
    vlSelf->top__DOT__control_0__DOT__sraw = (1U & 
                                              ((((IData)(vlSelf->top__DOT__fu_7_d) 
                                                 >> 1U) 
                                                & (((IData)(1U) 
                                                    << 
                                                    (7U 
                                                     & (vlSelf->inst 
                                                        >> 0xcU))) 
                                                   >> 5U)) 
                                               & ((IData)(vlSelf->top__DOT__op_d) 
                                                  >> 0xbU)));
    vlSelf->top__DOT__control_0__DOT__slliw = (1U & 
                                               ((((IData)(vlSelf->top__DOT__fu_7_d) 
                                                  >> 3U) 
                                                 & (((IData)(1U) 
                                                     << 
                                                     (7U 
                                                      & (vlSelf->inst 
                                                         >> 0xcU))) 
                                                    >> 1U)) 
                                                & ((IData)(vlSelf->top__DOT__op_d) 
                                                   >> 0xaU)));
    vlSelf->top__DOT__control_0__DOT__srliw = (1U & 
                                               ((((IData)(vlSelf->top__DOT__fu_7_d) 
                                                  >> 3U) 
                                                 & (((IData)(1U) 
                                                     << 
                                                     (7U 
                                                      & (vlSelf->inst 
                                                         >> 0xcU))) 
                                                    >> 5U)) 
                                                & ((IData)(vlSelf->top__DOT__op_d) 
                                                   >> 0xaU)));
    vlSelf->top__DOT__control_0__DOT__sraiw = (1U & 
                                               ((((IData)(vlSelf->top__DOT__fu_7_d) 
                                                  >> 4U) 
                                                 & (((IData)(1U) 
                                                     << 
                                                     (7U 
                                                      & (vlSelf->inst 
                                                         >> 0xcU))) 
                                                    >> 5U)) 
                                                & ((IData)(vlSelf->top__DOT__op_d) 
                                                   >> 0xaU)));
    vlSelf->top__DOT__control_0__DOT__addw = (1U & 
                                              (((IData)(vlSelf->top__DOT__fu_7_d) 
                                                & ((IData)(1U) 
                                                   << 
                                                   (7U 
                                                    & (vlSelf->inst 
                                                       >> 0xcU)))) 
                                               & ((IData)(vlSelf->top__DOT__op_d) 
                                                  >> 0xbU)));
    vlSelf->top__DOT__control_0__DOT__subw = (1U & 
                                              ((((IData)(vlSelf->top__DOT__fu_7_d) 
                                                 >> 1U) 
                                                & ((IData)(1U) 
                                                   << 
                                                   (7U 
                                                    & (vlSelf->inst 
                                                       >> 0xcU)))) 
                                               & ((IData)(vlSelf->top__DOT__op_d) 
                                                  >> 0xbU)));
    vlSelf->top__DOT__control_0__DOT__mulw = (1U & 
                                              ((((IData)(vlSelf->top__DOT__fu_7_d) 
                                                 >> 2U) 
                                                & ((IData)(1U) 
                                                   << 
                                                   (7U 
                                                    & (vlSelf->inst 
                                                       >> 0xcU)))) 
                                               & ((IData)(vlSelf->top__DOT__op_d) 
                                                  >> 0xbU)));
    vlSelf->top__DOT__control_0__DOT__divw = (1U & 
                                              ((((IData)(vlSelf->top__DOT__fu_7_d) 
                                                 >> 2U) 
                                                & (((IData)(1U) 
                                                    << 
                                                    (7U 
                                                     & (vlSelf->inst 
                                                        >> 0xcU))) 
                                                   >> 4U)) 
                                               & ((IData)(vlSelf->top__DOT__op_d) 
                                                  >> 0xbU)));
    vlSelf->top__DOT__control_0__DOT__divuw = (1U & 
                                               ((((IData)(vlSelf->top__DOT__fu_7_d) 
                                                  >> 2U) 
                                                 & (((IData)(1U) 
                                                     << 
                                                     (7U 
                                                      & (vlSelf->inst 
                                                         >> 0xcU))) 
                                                    >> 5U)) 
                                                & ((IData)(vlSelf->top__DOT__op_d) 
                                                   >> 0xbU)));
    vlSelf->top__DOT__control_0__DOT__remw = (1U & 
                                              ((((IData)(vlSelf->top__DOT__fu_7_d) 
                                                 >> 2U) 
                                                & (((IData)(1U) 
                                                    << 
                                                    (7U 
                                                     & (vlSelf->inst 
                                                        >> 0xcU))) 
                                                   >> 6U)) 
                                               & ((IData)(vlSelf->top__DOT__op_d) 
                                                  >> 0xbU)));
    vlSelf->top__DOT__control_0__DOT__lw = (1U & ((
                                                   ((IData)(1U) 
                                                    << 
                                                    (7U 
                                                     & (vlSelf->inst 
                                                        >> 0xcU))) 
                                                   >> 2U) 
                                                  & ((IData)(vlSelf->top__DOT__op_d) 
                                                     >> 5U)));
    vlSelf->top__DOT__control_0__DOT__lwu = (1U & (
                                                   (((IData)(1U) 
                                                     << 
                                                     (7U 
                                                      & (vlSelf->inst 
                                                         >> 0xcU))) 
                                                    >> 6U) 
                                                   & ((IData)(vlSelf->top__DOT__op_d) 
                                                      >> 5U)));
    vlSelf->top__DOT__control_0__DOT__lh = (1U & ((
                                                   ((IData)(1U) 
                                                    << 
                                                    (7U 
                                                     & (vlSelf->inst 
                                                        >> 0xcU))) 
                                                   >> 1U) 
                                                  & ((IData)(vlSelf->top__DOT__op_d) 
                                                     >> 5U)));
    vlSelf->top__DOT__control_0__DOT__lhu = (1U & (
                                                   (((IData)(1U) 
                                                     << 
                                                     (7U 
                                                      & (vlSelf->inst 
                                                         >> 0xcU))) 
                                                    >> 5U) 
                                                   & ((IData)(vlSelf->top__DOT__op_d) 
                                                      >> 5U)));
    vlSelf->top__DOT__control_0__DOT__lb = (1U & (((IData)(1U) 
                                                   << 
                                                   (7U 
                                                    & (vlSelf->inst 
                                                       >> 0xcU))) 
                                                  & ((IData)(vlSelf->top__DOT__op_d) 
                                                     >> 5U)));
    vlSelf->top__DOT__control_0__DOT__lbu = (1U & (
                                                   (((IData)(1U) 
                                                     << 
                                                     (7U 
                                                      & (vlSelf->inst 
                                                         >> 0xcU))) 
                                                    >> 4U) 
                                                   & ((IData)(vlSelf->top__DOT__op_d) 
                                                      >> 5U)));
    vlSelf->top__DOT__control_0__DOT__ld = (1U & ((
                                                   ((IData)(1U) 
                                                    << 
                                                    (7U 
                                                     & (vlSelf->inst 
                                                        >> 0xcU))) 
                                                   >> 3U) 
                                                  & ((IData)(vlSelf->top__DOT__op_d) 
                                                     >> 5U)));
    __Vtemp60[6U] = (((IData)((((- (QData)((IData)(
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
                                                                        >> 7U))))))))) 
                      >> 0x1cU) | ((IData)(((((- (QData)((IData)(
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
                                            >> 0x20U)) 
                                   << 4U));
    __Vtemp64[0xaU] = (((IData)((((- (QData)((IData)(
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
                                                                           >> 0x14U))))))))) 
                        >> 4U) | ((IData)(((((- (QData)((IData)(
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
                                           >> 0x20U)) 
                                  << 0x1cU));
    __Vtemp74[7U] = ((0xfffff0U & ((IData)((((- (QData)((IData)(
                                                                (vlSelf->inst 
                                                                 >> 0x1fU)))) 
                                             << 0xcU) 
                                            | (QData)((IData)(
                                                              ((0xfe0U 
                                                                & (vlSelf->inst 
                                                                   >> 0x14U)) 
                                                               | (0x1fU 
                                                                  & (vlSelf->inst 
                                                                     >> 7U))))))) 
                                   << 4U)) | (0xff000000U 
                                              & ((IData)(
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
                                                                                >> 7U))))))) 
                                                 << 4U)));
    __Vtemp74[8U] = ((((IData)((((- (QData)((IData)(
                                                    (vlSelf->inst 
                                                     >> 0x1fU)))) 
                                 << 0xcU) | (QData)((IData)(
                                                            ((0xfe0U 
                                                              & (vlSelf->inst 
                                                                 >> 0x14U)) 
                                                             | (0x1fU 
                                                                & (vlSelf->inst 
                                                                   >> 7U))))))) 
                       >> 0x1cU) | (0xfffff0U & ((IData)(
                                                         ((((- (QData)((IData)(
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
                                                          >> 0x20U)) 
                                                 << 4U))) 
                     | (0xff000000U & ((IData)(((((- (QData)((IData)(
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
                                                >> 0x20U)) 
                                       << 4U)));
    __Vtemp74[0xeU] = (1U | ((0xffff00U & ((IData)(top__DOT__id_0__DOT__immi) 
                                           << 8U)) 
                             | (0xff000000U & ((IData)(top__DOT__id_0__DOT__immi) 
                                               << 8U))));
    __Vtemp74[0xfU] = ((((IData)(top__DOT__id_0__DOT__immi) 
                         >> 0x18U) | (0xffff00U & ((IData)(
                                                           (top__DOT__id_0__DOT__immi 
                                                            >> 0x20U)) 
                                                   << 8U))) 
                       | (0xff000000U & ((IData)((top__DOT__id_0__DOT__immi 
                                                  >> 0x20U)) 
                                         << 8U)));
    top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0U] 
        = (IData)(top__DOT__id_0__DOT__immi);
    top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[1U] 
        = (IData)((top__DOT__id_0__DOT__immi >> 0x20U));
    top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[2U] 
        = (0x400U | ((IData)(top__DOT__id_0__DOT__immi) 
                     << 0xcU));
    top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[3U] 
        = (((IData)(top__DOT__id_0__DOT__immi) >> 0x14U) 
           | ((IData)((top__DOT__id_0__DOT__immi >> 0x20U)) 
              << 0xcU));
    top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[4U] 
        = (0x200000U | (((IData)(top__DOT__id_0__DOT__immi) 
                         << 0x18U) | ((IData)((top__DOT__id_0__DOT__immi 
                                               >> 0x20U)) 
                                      >> 0x14U)));
    top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[5U] 
        = (((IData)(top__DOT__id_0__DOT__immi) >> 8U) 
           | ((IData)((top__DOT__id_0__DOT__immi >> 0x20U)) 
              << 0x18U));
    top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[6U] 
        = (0x80000000U | ((IData)((top__DOT__id_0__DOT__immi 
                                   >> 0x20U)) >> 8U));
    top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[7U] 
        = __Vtemp74[7U];
    top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[8U] 
        = __Vtemp74[8U];
    top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[9U] 
        = (0x400U | (((0xff0000U & ((IData)(top__DOT__id_0__DOT__immi) 
                                    << 0x10U)) | ((IData)(
                                                          ((((- (QData)((IData)(
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
                                                           >> 0x20U)) 
                                                  >> 0x1cU)) 
                     | (0xff000000U & ((IData)(top__DOT__id_0__DOT__immi) 
                                       << 0x10U))));
    top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0xaU] 
        = ((((IData)(top__DOT__id_0__DOT__immi) >> 0x10U) 
            | (0xff0000U & ((IData)((top__DOT__id_0__DOT__immi 
                                     >> 0x20U)) << 0x10U))) 
           | (0xff000000U & ((IData)((top__DOT__id_0__DOT__immi 
                                      >> 0x20U)) << 0x10U)));
    top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0xbU] 
        = (0x200000U | (((IData)((top__DOT__id_0__DOT__immi 
                                  >> 0x20U)) >> 0x10U) 
                        | ((IData)((((- (QData)((IData)(
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
                                                                             >> 7U))))))))) 
                           << 0x1cU)));
    top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0xcU] 
        = ((0xffffffU & ((IData)((((- (QData)((IData)(
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
                                                                           >> 7U))))))))) 
                         >> 4U)) | (__Vtemp60[6U] << 0x18U));
    top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0xdU] 
        = ((__Vtemp60[6U] >> 8U) | (0xf000000U & ((IData)(
                                                          ((((- (QData)((IData)(
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
                                                           >> 0x20U)) 
                                                  >> 4U)));
    top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0xeU] 
        = __Vtemp74[0xeU];
    top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0xfU] 
        = __Vtemp74[0xfU];
    top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0x10U] 
        = (0x800U | (((0xf00000U & ((IData)((((- (QData)((IData)(
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
                                                                            >> 0x14U))))))))) 
                                    << 0x14U)) | ((IData)(
                                                          (top__DOT__id_0__DOT__immi 
                                                           >> 0x20U)) 
                                                  >> 0x18U)) 
                     | (__Vtemp64[0xaU] << 0x18U)));
    top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0x11U] 
        = ((__Vtemp64[0xaU] >> 8U) | (0xff000000U & 
                                      ((IData)(((((- (QData)((IData)(
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
                                                >> 0x20U)) 
                                       << 0x14U)));
    top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0x12U] 
        = (0x400000U | ((IData)(((((- (QData)((IData)(
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
                                                                            >> 0x14U)))))))) 
                                 >> 0x20U)) >> 0xcU));
    top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0x13U] 
        = ((0xffffffU & (IData)(top__DOT__id_0__DOT__immu)) 
           | (0xff000000U & (IData)(top__DOT__id_0__DOT__immu)));
    top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0x14U] 
        = ((0xffffffU & (IData)((top__DOT__id_0__DOT__immu 
                                 >> 0x20U))) | (0xff000000U 
                                                & (IData)(
                                                          (top__DOT__id_0__DOT__immu 
                                                           >> 0x20U))));
    top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0x15U] 
        = (2U | ((0xfff000U & ((IData)(top__DOT__id_0__DOT__immu) 
                               << 0xcU)) | (0xff000000U 
                                            & ((IData)(top__DOT__id_0__DOT__immu) 
                                               << 0xcU))));
    top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0x16U] 
        = ((((IData)(top__DOT__id_0__DOT__immu) >> 0x14U) 
            | (0xfff000U & ((IData)((top__DOT__id_0__DOT__immu 
                                     >> 0x20U)) << 0xcU))) 
           | (0xff000000U & ((IData)((top__DOT__id_0__DOT__immu 
                                      >> 0x20U)) << 0xcU)));
    top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0x17U] 
        = (0x1000U | ((IData)((top__DOT__id_0__DOT__immu 
                               >> 0x20U)) >> 0x14U));
    vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__pair_list[0U][0U] 
        = top__DOT__exe_0__DOT____Vcellinp__mux1____pinNumber3[0U];
    vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__pair_list[0U][1U] 
        = top__DOT__exe_0__DOT____Vcellinp__mux1____pinNumber3[1U];
    vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__pair_list[0U][2U] 
        = (0xfU & top__DOT__exe_0__DOT____Vcellinp__mux1____pinNumber3[2U]);
    vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__pair_list[1U][0U] 
        = ((top__DOT__exe_0__DOT____Vcellinp__mux1____pinNumber3[3U] 
            << 0x1cU) | (top__DOT__exe_0__DOT____Vcellinp__mux1____pinNumber3[2U] 
                         >> 4U));
    vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__pair_list[1U][1U] 
        = ((top__DOT__exe_0__DOT____Vcellinp__mux1____pinNumber3[4U] 
            << 0x1cU) | (top__DOT__exe_0__DOT____Vcellinp__mux1____pinNumber3[3U] 
                         >> 4U));
    vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__pair_list[1U][2U] 
        = (0xfU & (top__DOT__exe_0__DOT____Vcellinp__mux1____pinNumber3[4U] 
                   >> 4U));
    vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__pair_list[2U][0U] 
        = ((top__DOT__exe_0__DOT____Vcellinp__mux1____pinNumber3[5U] 
            << 0x18U) | (top__DOT__exe_0__DOT____Vcellinp__mux1____pinNumber3[4U] 
                         >> 8U));
    vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__pair_list[2U][1U] 
        = ((top__DOT__exe_0__DOT____Vcellinp__mux1____pinNumber3[6U] 
            << 0x18U) | (top__DOT__exe_0__DOT____Vcellinp__mux1____pinNumber3[5U] 
                         >> 8U));
    vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__pair_list[2U][2U] 
        = (0xfU & (top__DOT__exe_0__DOT____Vcellinp__mux1____pinNumber3[6U] 
                   >> 8U));
    vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__pair_list[3U][0U] 
        = ((top__DOT__exe_0__DOT____Vcellinp__mux1____pinNumber3[7U] 
            << 0x14U) | (top__DOT__exe_0__DOT____Vcellinp__mux1____pinNumber3[6U] 
                         >> 0xcU));
    vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__pair_list[3U][1U] 
        = ((top__DOT__exe_0__DOT____Vcellinp__mux1____pinNumber3[8U] 
            << 0x14U) | (top__DOT__exe_0__DOT____Vcellinp__mux1____pinNumber3[7U] 
                         >> 0xcU));
    vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__pair_list[3U][2U] 
        = (0xfU & (top__DOT__exe_0__DOT____Vcellinp__mux1____pinNumber3[8U] 
                   >> 0xcU));
    top__DOT__w_choose = (((((((((((((IData)(vlSelf->top__DOT__control_0__DOT__addw) 
                                     | (IData)(vlSelf->top__DOT__control_0__DOT__subw)) 
                                    | (IData)(vlSelf->top__DOT__control_0__DOT__mulw)) 
                                   | (IData)(vlSelf->top__DOT__control_0__DOT__divw)) 
                                  | (IData)(vlSelf->top__DOT__control_0__DOT__divuw)) 
                                 | (IData)(vlSelf->top__DOT__control_0__DOT__remw)) 
                                | (IData)(vlSelf->top__DOT__control_0__DOT__sllw)) 
                               | (IData)(vlSelf->top__DOT__control_0__DOT__srlw)) 
                              | (IData)(vlSelf->top__DOT__control_0__DOT__sraw)) 
                             | (IData)(vlSelf->top__DOT__control_0__DOT__addiw)) 
                            | (IData)(vlSelf->top__DOT__control_0__DOT__sraiw)) 
                           | (IData)(vlSelf->top__DOT__control_0__DOT__slliw)) 
                          | (IData)(vlSelf->top__DOT__control_0__DOT__srliw));
    vlSelf->top__DOT__sel_rf_res = ((((((((IData)(vlSelf->top__DOT__control_0__DOT__ld) 
                                          | (IData)(vlSelf->top__DOT__control_0__DOT__lw)) 
                                         | (IData)(vlSelf->top__DOT__control_0__DOT__lwu)) 
                                        | (IData)(vlSelf->top__DOT__control_0__DOT__lh)) 
                                       | (IData)(vlSelf->top__DOT__control_0__DOT__lhu)) 
                                      | (IData)(vlSelf->top__DOT__control_0__DOT__lb)) 
                                     | (IData)(vlSelf->top__DOT__control_0__DOT__lbu))
                                     ? 2U : (((IData)(vlSelf->top__DOT__control_0__DOT__csrrw) 
                                              | (IData)(vlSelf->top__DOT__control_0__DOT__csrrs))
                                              ? 4U : 1U));
    vlSelf->not_have = (1U & ((((((((((((((((((((((
                                                   ((((((((((((((((((((((((((((((((((((((((IData)(vlSelf->top__DOT__control_0__DOT__addi) 
                                                                                | (IData)(vlSelf->top__DOT__control_0__DOT__andi)) 
                                                                                | (IData)(vlSelf->top__DOT__control_0__DOT__xori)) 
                                                                                | (IData)(vlSelf->top__DOT__control_0__DOT__ori)) 
                                                                                | (IData)(vlSelf->top__DOT__control_0__DOT__sll)) 
                                                                                | (IData)(vlSelf->top__DOT__control_0__DOT__srl)) 
                                                                                | (IData)(vlSelf->top__DOT__control_0__DOT__sra)) 
                                                                                | (IData)(vlSelf->top__DOT__op_d)) 
                                                                                | ((IData)(vlSelf->top__DOT__op_d) 
                                                                                >> 2U)) 
                                                                                | (IData)(vlSelf->top__DOT__control_0__DOT__jalr)) 
                                                                                | (IData)(vlSelf->top__DOT__control_0__DOT__sd)) 
                                                                                | (IData)(vlSelf->top__DOT__control_0__DOT__sh)) 
                                                                               | (IData)(vlSelf->top__DOT__control_0__DOT__sw)) 
                                                                              | (IData)(vlSelf->top__DOT__control_0__DOT__sb)) 
                                                                             | (IData)(vlSelf->top__DOT__control_0__DOT__lw)) 
                                                                            | (IData)(vlSelf->top__DOT__control_0__DOT__lwu)) 
                                                                           | (IData)(vlSelf->top__DOT__control_0__DOT__lh)) 
                                                                          | (IData)(vlSelf->top__DOT__control_0__DOT__lhu)) 
                                                                         | (IData)(vlSelf->top__DOT__control_0__DOT__lb)) 
                                                                        | (IData)(vlSelf->top__DOT__control_0__DOT__lbu)) 
                                                                       | (IData)(vlSelf->top__DOT__control_0__DOT__ld)) 
                                                                      | (IData)(vlSelf->top__DOT__control_0__DOT__divu)) 
                                                                     | (IData)(vlSelf->top__DOT__control_0__DOT__Add)) 
                                                                    | (IData)(vlSelf->top__DOT__control_0__DOT__Mul)) 
                                                                   | (IData)(vlSelf->top__DOT__control_0__DOT__And)) 
                                                                  | (IData)(vlSelf->top__DOT__control_0__DOT__Xor)) 
                                                                 | (IData)(vlSelf->top__DOT__control_0__DOT__Or)) 
                                                                | (IData)(vlSelf->top__DOT__control_0__DOT__sltu)) 
                                                               | (IData)(vlSelf->top__DOT__control_0__DOT__slt)) 
                                                              | (IData)(vlSelf->top__DOT__control_0__DOT__sub)) 
                                                             | (IData)(vlSelf->top__DOT__control_0__DOT__sltiu)) 
                                                            | (IData)(top__DOT__control_0__DOT__beq)) 
                                                           | (IData)(top__DOT__control_0__DOT__bne)) 
                                                          | (IData)(top__DOT__control_0__DOT__bge)) 
                                                         | (IData)(top__DOT__control_0__DOT__bgeu)) 
                                                        | (IData)(top__DOT__control_0__DOT__bltu)) 
                                                       | (IData)(top__DOT__control_0__DOT__blt)) 
                                                      | ((IData)(vlSelf->top__DOT__op_d) 
                                                         >> 1U)) 
                                                     | (IData)(vlSelf->top__DOT__control_0__DOT__rem)) 
                                                    | (IData)(vlSelf->top__DOT__control_0__DOT__remu)) 
                                                   | (IData)(vlSelf->top__DOT__control_0__DOT__div)) 
                                                  | (IData)(vlSelf->top__DOT__control_0__DOT__addw)) 
                                                 | (IData)(vlSelf->top__DOT__control_0__DOT__subw)) 
                                                | (IData)(vlSelf->top__DOT__control_0__DOT__mulw)) 
                                               | (IData)(vlSelf->top__DOT__control_0__DOT__divw)) 
                                              | (IData)(vlSelf->top__DOT__control_0__DOT__divuw)) 
                                             | (IData)(vlSelf->top__DOT__control_0__DOT__remw)) 
                                            | (IData)(vlSelf->top__DOT__control_0__DOT__addiw)) 
                                           | (IData)(vlSelf->top__DOT__control_0__DOT__srliw)) 
                                          | (IData)(vlSelf->top__DOT__control_0__DOT__slliw)) 
                                         | (IData)(vlSelf->top__DOT__control_0__DOT__sraiw)) 
                                        | (IData)(vlSelf->top__DOT__control_0__DOT__slli)) 
                                       | (IData)(vlSelf->top__DOT__control_0__DOT__srli)) 
                                      | (IData)(vlSelf->top__DOT__control_0__DOT__srai)) 
                                     | (IData)(vlSelf->top__DOT__control_0__DOT__sllw)) 
                                    | (IData)(vlSelf->top__DOT__control_0__DOT__sraw)) 
                                   | (IData)(vlSelf->top__DOT__control_0__DOT__srlw)) 
                                  | (IData)(vlSelf->top__DOT__control_0__DOT__csrrs)) 
                                 | (IData)(vlSelf->top__DOT__control_0__DOT__csrrw)) 
                                | ((IData)(vlSelf->top__DOT__e_inst) 
                                   >> 1U)) | ((IData)(vlSelf->top__DOT__e_inst) 
                                              >> 2U)) 
                              | (IData)(vlSelf->top__DOT__e_inst)));
    vlSelf->top__DOT__l_choose = (((((((1U & (- (IData)((IData)(vlSelf->top__DOT__control_0__DOT__ld)))) 
                                       | (2U & (- (IData)((IData)(vlSelf->top__DOT__control_0__DOT__lw))))) 
                                      | (4U & (- (IData)((IData)(vlSelf->top__DOT__control_0__DOT__lwu))))) 
                                     | (8U & (- (IData)((IData)(vlSelf->top__DOT__control_0__DOT__lh))))) 
                                    | (0x10U & (- (IData)((IData)(vlSelf->top__DOT__control_0__DOT__lhu))))) 
                                   | (0x20U & (- (IData)((IData)(vlSelf->top__DOT__control_0__DOT__lb))))) 
                                  | (0x40U & (- (IData)((IData)(vlSelf->top__DOT__control_0__DOT__lbu)))));
    top__DOT__sel_alu_src1 = ((((1U & (- (IData)(((
                                                   (((((((((((((((((((((((((((((((((((((((((((((IData)(vlSelf->top__DOT__control_0__DOT__Add) 
                                                                                | (IData)(vlSelf->top__DOT__control_0__DOT__addi)) 
                                                                                | (IData)(vlSelf->top__DOT__control_0__DOT__ld)) 
                                                                                | (IData)(vlSelf->top__DOT__control_0__DOT__sd)) 
                                                                                | (IData)(vlSelf->top__DOT__control_0__DOT__slt)) 
                                                                                | (IData)(vlSelf->top__DOT__control_0__DOT__sll)) 
                                                                                | (IData)(vlSelf->top__DOT__control_0__DOT__srl)) 
                                                                                | (IData)(vlSelf->top__DOT__control_0__DOT__sra)) 
                                                                                | (IData)(vlSelf->top__DOT__control_0__DOT__And)) 
                                                                                | (IData)(vlSelf->top__DOT__control_0__DOT__Or)) 
                                                                                | (IData)(vlSelf->top__DOT__control_0__DOT__Xor)) 
                                                                                | (IData)(vlSelf->top__DOT__control_0__DOT__sltiu)) 
                                                                                | (IData)(vlSelf->top__DOT__control_0__DOT__andi)) 
                                                                                | (IData)(vlSelf->top__DOT__control_0__DOT__ori)) 
                                                                                | (IData)(vlSelf->top__DOT__control_0__DOT__xori)) 
                                                                                | (IData)(vlSelf->top__DOT__control_0__DOT__Mul)) 
                                                                                | (IData)(vlSelf->top__DOT__control_0__DOT__divu)) 
                                                                               | (IData)(top__DOT__control_0__DOT__bge)) 
                                                                              | (IData)(top__DOT__control_0__DOT__bgeu)) 
                                                                             | (IData)(top__DOT__control_0__DOT__blt)) 
                                                                            | (IData)(top__DOT__control_0__DOT__bltu)) 
                                                                           | (IData)(vlSelf->top__DOT__control_0__DOT__lw)) 
                                                                          | (IData)(vlSelf->top__DOT__control_0__DOT__lwu)) 
                                                                         | (IData)(vlSelf->top__DOT__control_0__DOT__lh)) 
                                                                        | (IData)(vlSelf->top__DOT__control_0__DOT__lhu)) 
                                                                       | (IData)(vlSelf->top__DOT__control_0__DOT__lb)) 
                                                                      | (IData)(vlSelf->top__DOT__control_0__DOT__lbu)) 
                                                                     | (IData)(vlSelf->top__DOT__control_0__DOT__sw)) 
                                                                    | (IData)(vlSelf->top__DOT__control_0__DOT__sh)) 
                                                                   | (IData)(vlSelf->top__DOT__control_0__DOT__sb)) 
                                                                  | (IData)(vlSelf->top__DOT__control_0__DOT__div)) 
                                                                 | (IData)(vlSelf->top__DOT__control_0__DOT__rem)) 
                                                                | (IData)(vlSelf->top__DOT__control_0__DOT__remu)) 
                                                               | (IData)(vlSelf->top__DOT__control_0__DOT__addw)) 
                                                              | (IData)(vlSelf->top__DOT__control_0__DOT__subw)) 
                                                             | (IData)(vlSelf->top__DOT__control_0__DOT__sub)) 
                                                            | (IData)(vlSelf->top__DOT__control_0__DOT__mulw)) 
                                                           | (IData)(vlSelf->top__DOT__control_0__DOT__divw)) 
                                                          | (IData)(vlSelf->top__DOT__control_0__DOT__divuw)) 
                                                         | (IData)(vlSelf->top__DOT__control_0__DOT__remw)) 
                                                        | (IData)(top__DOT__control_0__DOT__beq)) 
                                                       | (IData)(top__DOT__control_0__DOT__bne)) 
                                                      | (IData)(vlSelf->top__DOT__control_0__DOT__addiw)) 
                                                     | (IData)(vlSelf->top__DOT__control_0__DOT__slli)) 
                                                    | (IData)(vlSelf->top__DOT__control_0__DOT__srli)) 
                                                   | (IData)(vlSelf->top__DOT__control_0__DOT__srai)) 
                                                  | (IData)(vlSelf->top__DOT__control_0__DOT__sltu))))) 
                                | (2U & (- (IData)(
                                                   (1U 
                                                    & ((((IData)(vlSelf->top__DOT__op_d) 
                                                         >> 2U) 
                                                        | (IData)(vlSelf->top__DOT__control_0__DOT__jalr)) 
                                                       | ((IData)(vlSelf->top__DOT__op_d) 
                                                          >> 1U))))))) 
                               | (4U & (- (IData)((
                                                   (((IData)(vlSelf->top__DOT__control_0__DOT__sllw) 
                                                     | (IData)(vlSelf->top__DOT__control_0__DOT__srlw)) 
                                                    | (IData)(vlSelf->top__DOT__control_0__DOT__slliw)) 
                                                   | (IData)(vlSelf->top__DOT__control_0__DOT__srliw)))))) 
                              | (8U & (- (IData)(((IData)(vlSelf->top__DOT__control_0__DOT__sraw) 
                                                  | (IData)(vlSelf->top__DOT__control_0__DOT__sraiw))))));
    top__DOT__alu_control = ((((((((((((((((1U & (- (IData)(
                                                            (1U 
                                                             & ((((((((((((((((((IData)(vlSelf->top__DOT__control_0__DOT__Add) 
                                                                                | (IData)(vlSelf->top__DOT__control_0__DOT__addi)) 
                                                                               | (IData)(vlSelf->top__DOT__control_0__DOT__ld)) 
                                                                              | (IData)(vlSelf->top__DOT__control_0__DOT__sd)) 
                                                                             | ((IData)(vlSelf->top__DOT__op_d) 
                                                                                >> 2U)) 
                                                                            | (IData)(vlSelf->top__DOT__control_0__DOT__jalr)) 
                                                                           | (IData)(vlSelf->top__DOT__control_0__DOT__lw)) 
                                                                          | (IData)(vlSelf->top__DOT__control_0__DOT__lwu)) 
                                                                         | (IData)(vlSelf->top__DOT__control_0__DOT__lh)) 
                                                                        | (IData)(vlSelf->top__DOT__control_0__DOT__lhu)) 
                                                                       | (IData)(vlSelf->top__DOT__control_0__DOT__lb)) 
                                                                      | (IData)(vlSelf->top__DOT__control_0__DOT__lbu)) 
                                                                     | (IData)(vlSelf->top__DOT__control_0__DOT__sw)) 
                                                                    | (IData)(vlSelf->top__DOT__control_0__DOT__sh)) 
                                                                   | (IData)(vlSelf->top__DOT__control_0__DOT__sb)) 
                                                                  | ((IData)(vlSelf->top__DOT__op_d) 
                                                                     >> 1U)) 
                                                                 | (IData)(vlSelf->top__DOT__control_0__DOT__addw)) 
                                                                | (IData)(vlSelf->top__DOT__control_0__DOT__addiw)))))) 
                                           | (2U & 
                                              (- (IData)(
                                                         ((IData)(vlSelf->top__DOT__control_0__DOT__sub) 
                                                          | (IData)(vlSelf->top__DOT__control_0__DOT__subw)))))) 
                                          | (4U & (- (IData)(
                                                             (((IData)(vlSelf->top__DOT__control_0__DOT__slt) 
                                                               | (IData)(top__DOT__control_0__DOT__bge)) 
                                                              | (IData)(top__DOT__control_0__DOT__blt)))))) 
                                         | (8U & (- (IData)(
                                                            ((((IData)(vlSelf->top__DOT__control_0__DOT__sltu) 
                                                               | (IData)(vlSelf->top__DOT__control_0__DOT__sltiu)) 
                                                              | (IData)(top__DOT__control_0__DOT__bgeu)) 
                                                             | (IData)(top__DOT__control_0__DOT__bltu)))))) 
                                        | (0x10U & 
                                           (- (IData)(
                                                      ((IData)(vlSelf->top__DOT__control_0__DOT__And) 
                                                       | (IData)(vlSelf->top__DOT__control_0__DOT__andi)))))) 
                                       | (0x40U & (- (IData)(
                                                             ((IData)(vlSelf->top__DOT__control_0__DOT__Or) 
                                                              | (IData)(vlSelf->top__DOT__control_0__DOT__ori)))))) 
                                      | (0x80U & (- (IData)(
                                                            ((IData)(vlSelf->top__DOT__control_0__DOT__Xor) 
                                                             | (IData)(vlSelf->top__DOT__control_0__DOT__xori)))))) 
                                     | (0x100U & (- (IData)(
                                                            ((((IData)(vlSelf->top__DOT__control_0__DOT__sll) 
                                                               | (IData)(vlSelf->top__DOT__control_0__DOT__sllw)) 
                                                              | (IData)(vlSelf->top__DOT__control_0__DOT__slliw)) 
                                                             | (IData)(vlSelf->top__DOT__control_0__DOT__slli)))))) 
                                    | (0x200U & (- (IData)(
                                                           ((((IData)(vlSelf->top__DOT__control_0__DOT__srl) 
                                                              | (IData)(vlSelf->top__DOT__control_0__DOT__srlw)) 
                                                             | (IData)(vlSelf->top__DOT__control_0__DOT__srliw)) 
                                                            | (IData)(vlSelf->top__DOT__control_0__DOT__srli)))))) 
                                   | (0x400U & (- (IData)(
                                                          ((((IData)(vlSelf->top__DOT__control_0__DOT__sra) 
                                                             | (IData)(vlSelf->top__DOT__control_0__DOT__sraw)) 
                                                            | (IData)(vlSelf->top__DOT__control_0__DOT__sraiw)) 
                                                           | (IData)(vlSelf->top__DOT__control_0__DOT__srai)))))) 
                                  | (0x800U & (- (IData)(
                                                         (1U 
                                                          & (IData)(vlSelf->top__DOT__op_d)))))) 
                                 | (0x1000U & (- (IData)(
                                                         ((IData)(vlSelf->top__DOT__control_0__DOT__Mul) 
                                                          | (IData)(vlSelf->top__DOT__control_0__DOT__mulw)))))) 
                                | (0x2000U & (- (IData)(
                                                        ((IData)(vlSelf->top__DOT__control_0__DOT__divu) 
                                                         | (IData)(vlSelf->top__DOT__control_0__DOT__divuw)))))) 
                               | (0x4000U & (- (IData)(
                                                       ((IData)(vlSelf->top__DOT__control_0__DOT__div) 
                                                        | (IData)(vlSelf->top__DOT__control_0__DOT__divw)))))) 
                              | (0x8000U & (- (IData)((IData)(vlSelf->top__DOT__control_0__DOT__remu))))) 
                             | (0x10000U & (- (IData)(
                                                      ((IData)(vlSelf->top__DOT__control_0__DOT__rem) 
                                                       | (IData)(vlSelf->top__DOT__control_0__DOT__remw))))));
    top__DOT__sel_alu_src2 = (((1U & (- (IData)((((
                                                   (((((((((((((((((((((((((((IData)(vlSelf->top__DOT__control_0__DOT__Add) 
                                                                             | (IData)(vlSelf->top__DOT__control_0__DOT__slt)) 
                                                                            | (IData)(vlSelf->top__DOT__control_0__DOT__sll)) 
                                                                           | (IData)(vlSelf->top__DOT__control_0__DOT__srl)) 
                                                                          | (IData)(vlSelf->top__DOT__control_0__DOT__sra)) 
                                                                         | (IData)(vlSelf->top__DOT__control_0__DOT__And)) 
                                                                        | (IData)(vlSelf->top__DOT__control_0__DOT__Or)) 
                                                                       | (IData)(vlSelf->top__DOT__control_0__DOT__Xor)) 
                                                                      | (IData)(vlSelf->top__DOT__control_0__DOT__Mul)) 
                                                                     | (IData)(vlSelf->top__DOT__control_0__DOT__divu)) 
                                                                    | (IData)(top__DOT__control_0__DOT__bge)) 
                                                                   | (IData)(top__DOT__control_0__DOT__bgeu)) 
                                                                  | (IData)(top__DOT__control_0__DOT__blt)) 
                                                                 | (IData)(top__DOT__control_0__DOT__bltu)) 
                                                                | (IData)(vlSelf->top__DOT__control_0__DOT__rem)) 
                                                               | (IData)(vlSelf->top__DOT__control_0__DOT__remu)) 
                                                              | (IData)(vlSelf->top__DOT__control_0__DOT__div)) 
                                                             | (IData)(vlSelf->top__DOT__control_0__DOT__addw)) 
                                                            | (IData)(vlSelf->top__DOT__control_0__DOT__subw)) 
                                                           | (IData)(vlSelf->top__DOT__control_0__DOT__sub)) 
                                                          | (IData)(vlSelf->top__DOT__control_0__DOT__mulw)) 
                                                         | (IData)(vlSelf->top__DOT__control_0__DOT__divw)) 
                                                        | (IData)(vlSelf->top__DOT__control_0__DOT__divuw)) 
                                                       | (IData)(vlSelf->top__DOT__control_0__DOT__remw)) 
                                                      | (IData)(top__DOT__control_0__DOT__beq)) 
                                                     | (IData)(top__DOT__control_0__DOT__bne)) 
                                                    | (IData)(vlSelf->top__DOT__control_0__DOT__sllw)) 
                                                   | (IData)(vlSelf->top__DOT__control_0__DOT__srlw)) 
                                                  | (IData)(vlSelf->top__DOT__control_0__DOT__sraw)) 
                                                 | (IData)(vlSelf->top__DOT__control_0__DOT__sltu))))) 
                               | (2U & (- (IData)((1U 
                                                   & (((((((((((((((((((((((((IData)(vlSelf->top__DOT__control_0__DOT__addi) 
                                                                             | (IData)(vlSelf->top__DOT__control_0__DOT__ld)) 
                                                                            | (IData)(vlSelf->top__DOT__control_0__DOT__sd)) 
                                                                           | (IData)(vlSelf->top__DOT__op_d)) 
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
                                                                | (IData)(vlSelf->top__DOT__control_0__DOT__sw)) 
                                                               | (IData)(vlSelf->top__DOT__control_0__DOT__sh)) 
                                                              | (IData)(vlSelf->top__DOT__control_0__DOT__sb)) 
                                                             | ((IData)(vlSelf->top__DOT__op_d) 
                                                                >> 1U)) 
                                                            | (IData)(vlSelf->top__DOT__control_0__DOT__addiw)) 
                                                           | (IData)(vlSelf->top__DOT__control_0__DOT__srliw)) 
                                                          | (IData)(vlSelf->top__DOT__control_0__DOT__slliw)) 
                                                         | (IData)(vlSelf->top__DOT__control_0__DOT__sraiw)) 
                                                        | (IData)(vlSelf->top__DOT__control_0__DOT__slli)) 
                                                       | (IData)(vlSelf->top__DOT__control_0__DOT__srli)) 
                                                      | (IData)(vlSelf->top__DOT__control_0__DOT__srai))))))) 
                              | (4U & (- (IData)((1U 
                                                  & (((IData)(vlSelf->top__DOT__op_d) 
                                                      >> 2U) 
                                                     | (IData)(vlSelf->top__DOT__control_0__DOT__jalr)))))));
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[0U][0U] 
        = top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0U];
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[0U][1U] 
        = top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[1U];
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[0U][2U] 
        = (0xfffU & top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[2U]);
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[1U][0U] 
        = ((top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[3U] 
            << 0x14U) | (top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[2U] 
                         >> 0xcU));
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[1U][1U] 
        = ((top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[4U] 
            << 0x14U) | (top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[3U] 
                         >> 0xcU));
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[1U][2U] 
        = (0xfffU & (top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[4U] 
                     >> 0xcU));
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[2U][0U] 
        = ((top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[5U] 
            << 8U) | (top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[4U] 
                      >> 0x18U));
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[2U][1U] 
        = ((top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[6U] 
            << 8U) | (top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[5U] 
                      >> 0x18U));
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[2U][2U] 
        = (0xfffU & ((top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[7U] 
                      << 8U) | (top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[6U] 
                                >> 0x18U)));
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[3U][0U] 
        = ((top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[8U] 
            << 0x1cU) | (top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[7U] 
                         >> 4U));
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[3U][1U] 
        = ((top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[9U] 
            << 0x1cU) | (top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[8U] 
                         >> 4U));
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[3U][2U] 
        = (0xfffU & (top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[9U] 
                     >> 4U));
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[4U][0U] 
        = ((top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0xaU] 
            << 0x10U) | (top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[9U] 
                         >> 0x10U));
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[4U][1U] 
        = ((top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0xbU] 
            << 0x10U) | (top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0xaU] 
                         >> 0x10U));
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[4U][2U] 
        = (0xfffU & (top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0xbU] 
                     >> 0x10U));
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[5U][0U] 
        = ((top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0xcU] 
            << 4U) | (top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0xbU] 
                      >> 0x1cU));
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[5U][1U] 
        = ((top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0xdU] 
            << 4U) | (top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0xcU] 
                      >> 0x1cU));
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[5U][2U] 
        = (0xfffU & ((top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0xeU] 
                      << 4U) | (top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0xdU] 
                                >> 0x1cU)));
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[6U][0U] 
        = ((top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0xfU] 
            << 0x18U) | (top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0xeU] 
                         >> 8U));
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[6U][1U] 
        = ((top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0x10U] 
            << 0x18U) | (top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0xfU] 
                         >> 8U));
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[6U][2U] 
        = (0xfffU & (top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0x10U] 
                     >> 8U));
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[7U][0U] 
        = ((top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0x11U] 
            << 0xcU) | (top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0x10U] 
                        >> 0x14U));
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[7U][1U] 
        = ((top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0x12U] 
            << 0xcU) | (top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0x11U] 
                        >> 0x14U));
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[7U][2U] 
        = (top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0x12U] 
           >> 0x14U);
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[8U][0U] 
        = top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0x13U];
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[8U][1U] 
        = top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0x14U];
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[8U][2U] 
        = (0xfffU & top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0x15U]);
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[9U][0U] 
        = ((top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0x16U] 
            << 0x14U) | (top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0x15U] 
                         >> 0xcU));
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[9U][1U] 
        = ((top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0x17U] 
            << 0x14U) | (top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0x16U] 
                         >> 0xcU));
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[9U][2U] 
        = (0xfffU & (top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0x17U] 
                     >> 0xcU));
    vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__key_list[0U] 
        = (0xfU & vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__pair_list
           [0U][2U]);
    vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__key_list[1U] 
        = (0xfU & vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__pair_list
           [1U][2U]);
    vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__data_list[2U] 
        = (((QData)((IData)(vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__pair_list
                            [2U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__pair_list
                                                                   [2U][0U])));
    vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__key_list[2U] 
        = (0xfU & vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__pair_list
           [2U][2U]);
    vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__data_list[3U] 
        = (((QData)((IData)(vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__pair_list
                            [3U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__pair_list
                                                                   [3U][0U])));
    vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__key_list[3U] 
        = (0xfU & vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__pair_list
           [3U][2U]);
    top__DOT__exe_0__DOT__alu2__DOT__adder_cin = ((IData)(
                                                          (0U 
                                                           != 
                                                           (0xeU 
                                                            & top__DOT__alu_control)))
                                                   ? 1U
                                                   : 0U);
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list[0U] 
        = (0xfffU & vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list
           [0U][2U]);
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list[1U] 
        = (0xfffU & vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list
           [1U][2U]);
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list[2U] 
        = (((QData)((IData)(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list
                            [2U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list
                                                                   [2U][0U])));
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list[2U] 
        = (0xfffU & vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list
           [2U][2U]);
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list[3U] 
        = (((QData)((IData)(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list
                            [3U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list
                                                                   [3U][0U])));
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list[3U] 
        = (0xfffU & vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list
           [3U][2U]);
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list[4U] 
        = (((QData)((IData)(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list
                            [4U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list
                                                                   [4U][0U])));
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list[4U] 
        = (0xfffU & vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list
           [4U][2U]);
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list[5U] 
        = (((QData)((IData)(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list
                            [5U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list
                                                                   [5U][0U])));
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list[5U] 
        = (0xfffU & vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list
           [5U][2U]);
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list[6U] 
        = (((QData)((IData)(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list
                            [6U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list
                                                                   [6U][0U])));
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list[6U] 
        = (0xfffU & vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list
           [6U][2U]);
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list[7U] 
        = (((QData)((IData)(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list
                            [7U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list
                                                                   [7U][0U])));
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list[7U] 
        = (0xfffU & vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list
           [7U][2U]);
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list[8U] 
        = (((QData)((IData)(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list
                            [8U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list
                                                                   [8U][0U])));
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list[8U] 
        = (0xfffU & vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list
           [8U][2U]);
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list[9U] 
        = (((QData)((IData)(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list
                            [9U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list
                                                                   [9U][0U])));
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list[9U] 
        = (0xfffU & vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list
           [9U][2U]);
    top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(top__DOT__sel_alu_src1) 
                               == vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__data_list
           [0U]);
    top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__lut_out 
        = (top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(top__DOT__sel_alu_src1) 
                                  == vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__data_list
              [1U]));
    top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__lut_out 
        = (top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(top__DOT__sel_alu_src1) 
                                  == vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__key_list
                                  [2U])))) & vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__data_list
              [2U]));
    top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__lut_out 
        = (top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(top__DOT__sel_alu_src1) 
                                  == vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__key_list
                                  [3U])))) & vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__data_list
              [3U]));
    top__DOT__exe_0__DOT__alu_src1 = top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__lut_out;
    top__DOT__id_0__DOT__mux0__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->top__DOT__op_d) 
                               == vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list
           [0U]);
    top__DOT__id_0__DOT__mux0__DOT__i0__DOT__lut_out 
        = (top__DOT__id_0__DOT__mux0__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__op_d) 
                                  == vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list
              [1U]));
    top__DOT__id_0__DOT__mux0__DOT__i0__DOT__lut_out 
        = (top__DOT__id_0__DOT__mux0__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__op_d) 
                                  == vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list
                                  [2U])))) & vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list
              [2U]));
    top__DOT__id_0__DOT__mux0__DOT__i0__DOT__lut_out 
        = (top__DOT__id_0__DOT__mux0__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__op_d) 
                                  == vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list
                                  [3U])))) & vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list
              [3U]));
    top__DOT__id_0__DOT__mux0__DOT__i0__DOT__lut_out 
        = (top__DOT__id_0__DOT__mux0__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__op_d) 
                                  == vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list
                                  [4U])))) & vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list
              [4U]));
    top__DOT__id_0__DOT__mux0__DOT__i0__DOT__lut_out 
        = (top__DOT__id_0__DOT__mux0__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__op_d) 
                                  == vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list
                                  [5U])))) & vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list
              [5U]));
    top__DOT__id_0__DOT__mux0__DOT__i0__DOT__lut_out 
        = (top__DOT__id_0__DOT__mux0__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__op_d) 
                                  == vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list
                                  [6U])))) & vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list
              [6U]));
    top__DOT__id_0__DOT__mux0__DOT__i0__DOT__lut_out 
        = (top__DOT__id_0__DOT__mux0__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__op_d) 
                                  == vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list
                                  [7U])))) & vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list
              [7U]));
    top__DOT__id_0__DOT__mux0__DOT__i0__DOT__lut_out 
        = (top__DOT__id_0__DOT__mux0__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__op_d) 
                                  == vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list
                                  [8U])))) & vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list
              [8U]));
    top__DOT__id_0__DOT__mux0__DOT__i0__DOT__lut_out 
        = (top__DOT__id_0__DOT__mux0__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__op_d) 
                                  == vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list
                                  [9U])))) & vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list
              [9U]));
    top__DOT__imm = top__DOT__id_0__DOT__mux0__DOT__i0__DOT__lut_out;
    vlSelf->top__DOT__c_raddr = ((0x300ULL == top__DOT__imm)
                                  ? 0U : ((1U & ((0x305ULL 
                                                  == top__DOT__imm) 
                                                 | ((IData)(vlSelf->top__DOT__e_inst) 
                                                    >> 1U)))
                                           ? 1U : (
                                                   (1U 
                                                    & ((0x341ULL 
                                                        == top__DOT__imm) 
                                                       | ((IData)(vlSelf->top__DOT__e_inst) 
                                                          >> 2U)))
                                                    ? 2U
                                                    : 3U)));
    top__DOT__exe_0__DOT____Vcellinp__mux2____pinNumber3[0U] = 4U;
    top__DOT__exe_0__DOT____Vcellinp__mux2____pinNumber3[1U] = 0U;
    top__DOT__exe_0__DOT____Vcellinp__mux2____pinNumber3[2U] 
        = (4U | ((IData)(top__DOT__imm) << 3U));
    top__DOT__exe_0__DOT____Vcellinp__mux2____pinNumber3[3U] 
        = (((IData)(top__DOT__imm) >> 0x1dU) | ((IData)(
                                                        (top__DOT__imm 
                                                         >> 0x20U)) 
                                                << 3U));
    top__DOT__exe_0__DOT____Vcellinp__mux2____pinNumber3[4U] 
        = (0x10U | (((IData)(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf
                             [(0x1fU & (vlSelf->inst 
                                        >> 0x14U))]) 
                     << 6U) | ((IData)((top__DOT__imm 
                                        >> 0x20U)) 
                               >> 0x1dU)));
    top__DOT__exe_0__DOT____Vcellinp__mux2____pinNumber3[5U] 
        = (((IData)(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf
                    [(0x1fU & (vlSelf->inst >> 0x14U))]) 
            >> 0x1aU) | ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf
                                  [(0x1fU & (vlSelf->inst 
                                             >> 0x14U))] 
                                  >> 0x20U)) << 6U));
    top__DOT__exe_0__DOT____Vcellinp__mux2____pinNumber3[6U] 
        = (0x40U | ((IData)((vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf
                             [(0x1fU & (vlSelf->inst 
                                        >> 0x14U))] 
                             >> 0x20U)) >> 0x1aU));
    vlSelf->top__DOT__c_rdata = vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
        [vlSelf->top__DOT__c_raddr];
    vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__pair_list[0U][0U] 
        = top__DOT__exe_0__DOT____Vcellinp__mux2____pinNumber3[0U];
    vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__pair_list[0U][1U] 
        = top__DOT__exe_0__DOT____Vcellinp__mux2____pinNumber3[1U];
    vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__pair_list[0U][2U] 
        = (7U & top__DOT__exe_0__DOT____Vcellinp__mux2____pinNumber3[2U]);
    vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__pair_list[1U][0U] 
        = ((top__DOT__exe_0__DOT____Vcellinp__mux2____pinNumber3[3U] 
            << 0x1dU) | (top__DOT__exe_0__DOT____Vcellinp__mux2____pinNumber3[2U] 
                         >> 3U));
    vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__pair_list[1U][1U] 
        = ((top__DOT__exe_0__DOT____Vcellinp__mux2____pinNumber3[4U] 
            << 0x1dU) | (top__DOT__exe_0__DOT____Vcellinp__mux2____pinNumber3[3U] 
                         >> 3U));
    vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__pair_list[1U][2U] 
        = (7U & (top__DOT__exe_0__DOT____Vcellinp__mux2____pinNumber3[4U] 
                 >> 3U));
    vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__pair_list[2U][0U] 
        = ((top__DOT__exe_0__DOT____Vcellinp__mux2____pinNumber3[5U] 
            << 0x1aU) | (top__DOT__exe_0__DOT____Vcellinp__mux2____pinNumber3[4U] 
                         >> 6U));
    vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__pair_list[2U][1U] 
        = ((top__DOT__exe_0__DOT____Vcellinp__mux2____pinNumber3[6U] 
            << 0x1aU) | (top__DOT__exe_0__DOT____Vcellinp__mux2____pinNumber3[5U] 
                         >> 6U));
    vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__pair_list[2U][2U] 
        = (7U & (top__DOT__exe_0__DOT____Vcellinp__mux2____pinNumber3[6U] 
                 >> 6U));
    VL_EXTEND_WQ(65,64, __Vtemp171, top__DOT__src1);
    top__DOT__exe_0__DOT____Vcellinp__mux3____pinNumber3[0U] 
        = (IData)((top__DOT__src1 | vlSelf->top__DOT__c_rdata));
    top__DOT__exe_0__DOT____Vcellinp__mux3____pinNumber3[1U] 
        = (IData)(((top__DOT__src1 | vlSelf->top__DOT__c_rdata) 
                   >> 0x20U));
    top__DOT__exe_0__DOT____Vcellinp__mux3____pinNumber3[2U] 
        = (1U | (__Vtemp171[0U] << 1U));
    top__DOT__exe_0__DOT____Vcellinp__mux3____pinNumber3[3U] 
        = ((__Vtemp171[0U] >> 0x1fU) | (__Vtemp171[1U] 
                                        << 1U));
    top__DOT__exe_0__DOT____Vcellinp__mux3____pinNumber3[4U] 
        = ((__Vtemp171[1U] >> 0x1fU) | (__Vtemp171[2U] 
                                        << 1U));
    VL_EXTEND_WQ(66,64, __Vtemp174, (4ULL + vlSelf->cpupc));
    top__DOT__i0__DOT____Vcellinp__mux4____pinNumber3[0U] 
        = (IData)(vlSelf->top__DOT__c_rdata);
    top__DOT__i0__DOT____Vcellinp__mux4____pinNumber3[1U] 
        = (IData)((vlSelf->top__DOT__c_rdata >> 0x20U));
    top__DOT__i0__DOT____Vcellinp__mux4____pinNumber3[2U] 
        = (3U | ((IData)((0xfffffffffffffffeULL & (top__DOT__src1 
                                                   + top__DOT__imm))) 
                 << 2U));
    top__DOT__i0__DOT____Vcellinp__mux4____pinNumber3[3U] 
        = (((IData)((0xfffffffffffffffeULL & (top__DOT__src1 
                                              + top__DOT__imm))) 
            >> 0x1eU) | ((IData)(((0xfffffffffffffffeULL 
                                   & (top__DOT__src1 
                                      + top__DOT__imm)) 
                                  >> 0x20U)) << 2U));
    top__DOT__i0__DOT____Vcellinp__mux4____pinNumber3[4U] 
        = (8U | (((IData)((vlSelf->cpupc + top__DOT__imm)) 
                  << 4U) | ((IData)(((0xfffffffffffffffeULL 
                                      & (top__DOT__src1 
                                         + top__DOT__imm)) 
                                     >> 0x20U)) >> 0x1eU)));
    top__DOT__i0__DOT____Vcellinp__mux4____pinNumber3[5U] 
        = (((IData)((vlSelf->cpupc + top__DOT__imm)) 
            >> 0x1cU) | ((IData)(((vlSelf->cpupc + top__DOT__imm) 
                                  >> 0x20U)) << 4U));
    top__DOT__i0__DOT____Vcellinp__mux4____pinNumber3[6U] 
        = (0x10U | ((__Vtemp174[0U] << 6U) | ((IData)(
                                                      ((vlSelf->cpupc 
                                                        + top__DOT__imm) 
                                                       >> 0x20U)) 
                                              >> 0x1cU)));
    top__DOT__i0__DOT____Vcellinp__mux4____pinNumber3[7U] 
        = ((__Vtemp174[0U] >> 0x1aU) | (__Vtemp174[1U] 
                                        << 6U));
    top__DOT__i0__DOT____Vcellinp__mux4____pinNumber3[8U] 
        = ((__Vtemp174[1U] >> 0x1aU) | (__Vtemp174[2U] 
                                        << 6U));
    vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__key_list[0U] 
        = (7U & vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__pair_list
           [0U][2U]);
    vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__key_list[1U] 
        = (7U & vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__pair_list
           [1U][2U]);
    vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__data_list[2U] 
        = (((QData)((IData)(vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__pair_list
                            [2U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__pair_list
                                                                   [2U][0U])));
    vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__key_list[2U] 
        = (7U & vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__pair_list
           [2U][2U]);
    vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__pair_list[0U][0U] 
        = top__DOT__exe_0__DOT____Vcellinp__mux3____pinNumber3[0U];
    vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__pair_list[0U][1U] 
        = top__DOT__exe_0__DOT____Vcellinp__mux3____pinNumber3[1U];
    vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__pair_list[0U][2U] 
        = (1U & top__DOT__exe_0__DOT____Vcellinp__mux3____pinNumber3[2U]);
    vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__pair_list[1U][0U] 
        = ((top__DOT__exe_0__DOT____Vcellinp__mux3____pinNumber3[3U] 
            << 0x1fU) | (top__DOT__exe_0__DOT____Vcellinp__mux3____pinNumber3[2U] 
                         >> 1U));
    vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__pair_list[1U][1U] 
        = ((top__DOT__exe_0__DOT____Vcellinp__mux3____pinNumber3[4U] 
            << 0x1fU) | (top__DOT__exe_0__DOT____Vcellinp__mux3____pinNumber3[3U] 
                         >> 1U));
    vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__pair_list[1U][2U] 
        = (1U & (top__DOT__exe_0__DOT____Vcellinp__mux3____pinNumber3[4U] 
                 >> 1U));
    vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__pair_list[0U][0U] 
        = top__DOT__i0__DOT____Vcellinp__mux4____pinNumber3[0U];
    vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__pair_list[0U][1U] 
        = top__DOT__i0__DOT____Vcellinp__mux4____pinNumber3[1U];
    vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__pair_list[0U][2U] 
        = (3U & top__DOT__i0__DOT____Vcellinp__mux4____pinNumber3[2U]);
    vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__pair_list[1U][0U] 
        = ((top__DOT__i0__DOT____Vcellinp__mux4____pinNumber3[3U] 
            << 0x1eU) | (top__DOT__i0__DOT____Vcellinp__mux4____pinNumber3[2U] 
                         >> 2U));
    vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__pair_list[1U][1U] 
        = ((top__DOT__i0__DOT____Vcellinp__mux4____pinNumber3[4U] 
            << 0x1eU) | (top__DOT__i0__DOT____Vcellinp__mux4____pinNumber3[3U] 
                         >> 2U));
    vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__pair_list[1U][2U] 
        = (3U & (top__DOT__i0__DOT____Vcellinp__mux4____pinNumber3[4U] 
                 >> 2U));
    vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__pair_list[2U][0U] 
        = ((top__DOT__i0__DOT____Vcellinp__mux4____pinNumber3[5U] 
            << 0x1cU) | (top__DOT__i0__DOT____Vcellinp__mux4____pinNumber3[4U] 
                         >> 4U));
    vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__pair_list[2U][1U] 
        = ((top__DOT__i0__DOT____Vcellinp__mux4____pinNumber3[6U] 
            << 0x1cU) | (top__DOT__i0__DOT____Vcellinp__mux4____pinNumber3[5U] 
                         >> 4U));
    vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__pair_list[2U][2U] 
        = (3U & (top__DOT__i0__DOT____Vcellinp__mux4____pinNumber3[6U] 
                 >> 4U));
    vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__pair_list[3U][0U] 
        = ((top__DOT__i0__DOT____Vcellinp__mux4____pinNumber3[7U] 
            << 0x1aU) | (top__DOT__i0__DOT____Vcellinp__mux4____pinNumber3[6U] 
                         >> 6U));
    vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__pair_list[3U][1U] 
        = ((top__DOT__i0__DOT____Vcellinp__mux4____pinNumber3[8U] 
            << 0x1aU) | (top__DOT__i0__DOT____Vcellinp__mux4____pinNumber3[7U] 
                         >> 6U));
    vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__pair_list[3U][2U] 
        = (3U & (top__DOT__i0__DOT____Vcellinp__mux4____pinNumber3[8U] 
                 >> 6U));
    top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(top__DOT__sel_alu_src2) 
                               == vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__data_list
           [0U]);
    top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__lut_out 
        = (top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(top__DOT__sel_alu_src2) 
                                  == vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__data_list
              [1U]));
    top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__lut_out 
        = (top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(top__DOT__sel_alu_src2) 
                                  == vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__key_list
                                  [2U])))) & vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__data_list
              [2U]));
    top__DOT__exe_0__DOT__alu_src2 = top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__lut_out;
    vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__key_list[0U] 
        = (1U & vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__pair_list
           [0U][2U]);
    vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__key_list[1U] 
        = (1U & vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__pair_list
           [1U][2U]);
    vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__key_list[0U] 
        = (3U & vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__pair_list
           [0U][2U]);
    vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__key_list[1U] 
        = (3U & vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__pair_list
           [1U][2U]);
    vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__data_list[2U] 
        = (((QData)((IData)(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__pair_list
                            [2U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__pair_list
                                                                   [2U][0U])));
    vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__key_list[2U] 
        = (3U & vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__pair_list
           [2U][2U]);
    vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__data_list[3U] 
        = (((QData)((IData)(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__pair_list
                            [3U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__pair_list
                                                                   [3U][0U])));
    vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__key_list[3U] 
        = (3U & vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__pair_list
           [3U][2U]);
    vlSelf->top__DOT__alu_equal = ((6U & (IData)(vlSelf->top__DOT__alu_equal)) 
                                   | (top__DOT__exe_0__DOT__alu_src1 
                                      == top__DOT__exe_0__DOT__alu_src2));
    top__DOT__exe_0__DOT__alu2__DOT__or_result = (top__DOT__exe_0__DOT__alu_src1 
                                                  | top__DOT__exe_0__DOT__alu_src2);
    top__DOT__exe_0__DOT__alu2__DOT__adder_b = ((IData)(
                                                        (0U 
                                                         != 
                                                         (0xeU 
                                                          & top__DOT__alu_control)))
                                                 ? 
                                                (~ top__DOT__exe_0__DOT__alu_src2)
                                                 : top__DOT__exe_0__DOT__alu_src2);
    top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->top__DOT__control_0__DOT__csrrs) 
                               == vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__data_list
           [0U]);
    top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__lut_out 
        = (top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__control_0__DOT__csrrs) 
                                  == vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__exe_0__DOT__c_wdata = top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__lut_out;
    VL_EXTEND_WQ(65,64, __Vtemp221, top__DOT__exe_0__DOT__alu_src1);
    VL_EXTEND_WQ(65,64, __Vtemp222, top__DOT__exe_0__DOT__alu2__DOT__adder_b);
    VL_ADD_W(3, __Vtemp223, __Vtemp221, __Vtemp222);
    VL_EXTEND_WI(65,1, __Vtemp224, (IData)(top__DOT__exe_0__DOT__alu2__DOT__adder_cin));
    VL_ADD_W(3, __Vtemp225, __Vtemp223, __Vtemp224);
    top__DOT__exe_0__DOT__alu2__DOT__adder_cout = (1U 
                                                   & __Vtemp225[2U]);
    VL_EXTEND_WI(65,1, __Vtemp227, (IData)(top__DOT__exe_0__DOT__alu2__DOT__adder_cin));
    vlSelf->top__DOT__exe_0__DOT__alu2__DOT__adder_result 
        = ((top__DOT__exe_0__DOT__alu_src1 + top__DOT__exe_0__DOT__alu2__DOT__adder_b) 
           + (((QData)((IData)(__Vtemp227[1U])) << 0x20U) 
              | (QData)((IData)(__Vtemp227[0U]))));
    vlSelf->top__DOT__alu_equal = ((5U & (IData)(vlSelf->top__DOT__alu_equal)) 
                                   | (2U & ((~ (IData)(top__DOT__exe_0__DOT__alu2__DOT__adder_cout)) 
                                            << 1U)));
    top__DOT__exe_0__DOT__alu2__DOT__slt_result = (QData)((IData)(
                                                                  (1U 
                                                                   & (((IData)(
                                                                               (top__DOT__exe_0__DOT__alu_src1 
                                                                                >> 0x3fU)) 
                                                                       & (~ (IData)(
                                                                                (top__DOT__exe_0__DOT__alu_src2 
                                                                                >> 0x3fU)))) 
                                                                      | ((~ 
                                                                          ((IData)(
                                                                                (top__DOT__exe_0__DOT__alu_src1 
                                                                                >> 0x3fU)) 
                                                                           ^ (IData)(
                                                                                (top__DOT__exe_0__DOT__alu_src2 
                                                                                >> 0x3fU)))) 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT__exe_0__DOT__alu2__DOT__adder_result 
                                                                                >> 0x3fU)))))));
    vlSelf->top__DOT__alu_equal = ((3U & (IData)(vlSelf->top__DOT__alu_equal)) 
                                   | (4U & ((IData)(top__DOT__exe_0__DOT__alu2__DOT__slt_result) 
                                            << 2U)));
    top__DOT__exe_0__DOT__alu2__DOT__alu_result_uw 
        = (((((((((((((((((- (QData)((IData)((0U != 
                                              (3U & top__DOT__alu_control))))) 
                          & vlSelf->top__DOT__exe_0__DOT__alu2__DOT__adder_result) 
                         | ((- (QData)((IData)((1U 
                                                & (top__DOT__alu_control 
                                                   >> 2U))))) 
                            & top__DOT__exe_0__DOT__alu2__DOT__slt_result)) 
                        | ((- (QData)((IData)((1U & 
                                               (top__DOT__alu_control 
                                                >> 3U))))) 
                           & (QData)((IData)((1U & 
                                              (~ (IData)(top__DOT__exe_0__DOT__alu2__DOT__adder_cout))))))) 
                       | ((- (QData)((IData)((1U & 
                                              (top__DOT__alu_control 
                                               >> 4U))))) 
                          & (top__DOT__exe_0__DOT__alu_src1 
                             & top__DOT__exe_0__DOT__alu_src2))) 
                      | ((- (QData)((IData)((1U & (top__DOT__alu_control 
                                                   >> 5U))))) 
                         & (~ top__DOT__exe_0__DOT__alu2__DOT__or_result))) 
                     | ((- (QData)((IData)((1U & (top__DOT__alu_control 
                                                  >> 6U))))) 
                        & top__DOT__exe_0__DOT__alu2__DOT__or_result)) 
                    | ((- (QData)((IData)((1U & (top__DOT__alu_control 
                                                 >> 7U))))) 
                       & (top__DOT__exe_0__DOT__alu_src1 
                          ^ top__DOT__exe_0__DOT__alu_src2))) 
                   | ((- (QData)((IData)((1U & (top__DOT__alu_control 
                                                >> 8U))))) 
                      & (top__DOT__exe_0__DOT__alu_src1 
                         << (0x3fU & (IData)(top__DOT__exe_0__DOT__alu_src2))))) 
                  | ((- (QData)((IData)((1U & (top__DOT__alu_control 
                                               >> 9U))))) 
                     & (top__DOT__exe_0__DOT__alu_src1 
                        >> (0x3fU & (IData)(top__DOT__exe_0__DOT__alu_src2))))) 
                 | ((- (QData)((IData)((1U & (top__DOT__alu_control 
                                              >> 0xaU))))) 
                    & VL_SHIFTRS_QQI(64,64,6, top__DOT__exe_0__DOT__alu_src1, 
                                     (0x3fU & (IData)(top__DOT__exe_0__DOT__alu_src2))))) 
                | (0xfffffffffffff000ULL & ((- (QData)((IData)(
                                                               (1U 
                                                                & (top__DOT__alu_control 
                                                                   >> 0xbU))))) 
                                            & top__DOT__exe_0__DOT__alu_src2))) 
               | ((- (QData)((IData)((1U & (top__DOT__alu_control 
                                            >> 0xcU))))) 
                  & (top__DOT__exe_0__DOT__alu_src1 
                     * top__DOT__exe_0__DOT__alu_src2))) 
              | ((- (QData)((IData)((1U & (top__DOT__alu_control 
                                           >> 0xdU))))) 
                 & VL_DIV_QQQ(64, top__DOT__exe_0__DOT__alu_src1, top__DOT__exe_0__DOT__alu_src2))) 
             | ((- (QData)((IData)((1U & (top__DOT__alu_control 
                                          >> 0xeU))))) 
                & VL_DIVS_QQQ(64, top__DOT__exe_0__DOT__alu_src1, top__DOT__exe_0__DOT__alu_src2))) 
            | ((- (QData)((IData)((1U & (top__DOT__alu_control 
                                         >> 0xfU))))) 
               & VL_MODDIV_QQQ(64, top__DOT__exe_0__DOT__alu_src1, top__DOT__exe_0__DOT__alu_src2))) 
           | ((- (QData)((IData)((1U & (top__DOT__alu_control 
                                        >> 0x10U))))) 
              & VL_MODDIVS_QQQ(64, top__DOT__exe_0__DOT__alu_src1, top__DOT__exe_0__DOT__alu_src2)));
    top__DOT__sel_nextpc = (3U & (((1U & (- (IData)(
                                                    (1U 
                                                     & ((((((((IData)(top__DOT__control_0__DOT__beq) 
                                                              & (IData)(vlSelf->top__DOT__alu_equal)) 
                                                             | ((IData)(top__DOT__control_0__DOT__bne) 
                                                                & (~ (IData)(vlSelf->top__DOT__alu_equal)))) 
                                                            | ((IData)(vlSelf->top__DOT__op_d) 
                                                               >> 2U)) 
                                                           | ((IData)(top__DOT__control_0__DOT__bltu) 
                                                              & ((IData)(vlSelf->top__DOT__alu_equal) 
                                                                 >> 1U))) 
                                                          | ((IData)(top__DOT__control_0__DOT__blt) 
                                                             & ((IData)(vlSelf->top__DOT__alu_equal) 
                                                                >> 2U))) 
                                                         | ((IData)(top__DOT__control_0__DOT__bgeu) 
                                                            & (IData)(
                                                                      (2U 
                                                                       != 
                                                                       (3U 
                                                                        & (IData)(vlSelf->top__DOT__alu_equal)))))) 
                                                        | ((IData)(top__DOT__control_0__DOT__bge) 
                                                           & (IData)(
                                                                     (4U 
                                                                      != 
                                                                      (5U 
                                                                       & (IData)(vlSelf->top__DOT__alu_equal)))))))))) 
                                   | (2U & (- (IData)((IData)(vlSelf->top__DOT__control_0__DOT__jalr))))) 
                                  | (- (IData)((IData)(
                                                       (0U 
                                                        != 
                                                        (6U 
                                                         & (IData)(vlSelf->top__DOT__e_inst))))))));
    VL_EXTEND_WQ(65,64, __Vtemp228, top__DOT__exe_0__DOT__alu2__DOT__alu_result_uw);
    top__DOT__exe_0__DOT__alu2__DOT____Vcellinp__mux1____pinNumber3[0U] 
        = (IData)((((QData)((IData)((- (IData)((1U 
                                                & (IData)(
                                                          (top__DOT__exe_0__DOT__alu2__DOT__alu_result_uw 
                                                           >> 0x1fU))))))) 
                    << 0x20U) | (QData)((IData)(top__DOT__exe_0__DOT__alu2__DOT__alu_result_uw))));
    top__DOT__exe_0__DOT__alu2__DOT____Vcellinp__mux1____pinNumber3[1U] 
        = (IData)(((((QData)((IData)((- (IData)((1U 
                                                 & (IData)(
                                                           (top__DOT__exe_0__DOT__alu2__DOT__alu_result_uw 
                                                            >> 0x1fU))))))) 
                     << 0x20U) | (QData)((IData)(top__DOT__exe_0__DOT__alu2__DOT__alu_result_uw))) 
                   >> 0x20U));
    top__DOT__exe_0__DOT__alu2__DOT____Vcellinp__mux1____pinNumber3[2U] 
        = (1U | (__Vtemp228[0U] << 1U));
    top__DOT__exe_0__DOT__alu2__DOT____Vcellinp__mux1____pinNumber3[3U] 
        = ((__Vtemp228[0U] >> 0x1fU) | (__Vtemp228[1U] 
                                        << 1U));
    top__DOT__exe_0__DOT__alu2__DOT____Vcellinp__mux1____pinNumber3[4U] 
        = ((__Vtemp228[1U] >> 0x1fU) | (__Vtemp228[2U] 
                                        << 1U));
    top__DOT__i0__DOT__mux4__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(top__DOT__sel_nextpc) 
                               == vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__data_list
           [0U]);
    top__DOT__i0__DOT__mux4__DOT__i0__DOT__lut_out 
        = (top__DOT__i0__DOT__mux4__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(top__DOT__sel_nextpc) 
                                  == vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__data_list
              [1U]));
    top__DOT__i0__DOT__mux4__DOT__i0__DOT__lut_out 
        = (top__DOT__i0__DOT__mux4__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(top__DOT__sel_nextpc) 
                                  == vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__key_list
                                  [2U])))) & vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__data_list
              [2U]));
    top__DOT__i0__DOT__mux4__DOT__i0__DOT__lut_out 
        = (top__DOT__i0__DOT__mux4__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(top__DOT__sel_nextpc) 
                                  == vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__key_list
                                  [3U])))) & vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->dnpc = top__DOT__i0__DOT__mux4__DOT__i0__DOT__lut_out;
    vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__pair_list[0U][0U] 
        = top__DOT__exe_0__DOT__alu2__DOT____Vcellinp__mux1____pinNumber3[0U];
    vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__pair_list[0U][1U] 
        = top__DOT__exe_0__DOT__alu2__DOT____Vcellinp__mux1____pinNumber3[1U];
    vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__pair_list[0U][2U] 
        = (1U & top__DOT__exe_0__DOT__alu2__DOT____Vcellinp__mux1____pinNumber3[2U]);
    vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__pair_list[1U][0U] 
        = ((top__DOT__exe_0__DOT__alu2__DOT____Vcellinp__mux1____pinNumber3[3U] 
            << 0x1fU) | (top__DOT__exe_0__DOT__alu2__DOT____Vcellinp__mux1____pinNumber3[2U] 
                         >> 1U));
    vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__pair_list[1U][1U] 
        = ((top__DOT__exe_0__DOT__alu2__DOT____Vcellinp__mux1____pinNumber3[4U] 
            << 0x1fU) | (top__DOT__exe_0__DOT__alu2__DOT____Vcellinp__mux1____pinNumber3[3U] 
                         >> 1U));
    vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__pair_list[1U][2U] 
        = (1U & (top__DOT__exe_0__DOT__alu2__DOT____Vcellinp__mux1____pinNumber3[4U] 
                 >> 1U));
    vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__key_list[0U] 
        = (1U & vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__pair_list
           [0U][2U]);
    vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__key_list[1U] 
        = (1U & vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__pair_list
           [1U][2U]);
    top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(top__DOT__w_choose) 
                               == vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__data_list
           [0U]);
    top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__lut_out 
        = (top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(top__DOT__w_choose) 
                                  == vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__alu_result = top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__lut_out;
}

VL_INLINE_OPT void Vtop___024root___multiclk__TOP__5(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___multiclk__TOP__5\n"); );
    // Variables
    VlWide<7>/*200:0*/ top__DOT__wb0__DOT____Vcellinp__mux3____pinNumber3;
    QData/*63:0*/ top__DOT__ram_data;
    QData/*63:0*/ top__DOT__mem0__DOT__mux3__DOT__i0__DOT__lut_out;
    QData/*63:0*/ top__DOT__wb0__DOT__mux3__DOT__i0__DOT__lut_out;
    // Body
    top__DOT__mem0__DOT__mux3__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->top__DOT__l_choose) 
                               == vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__data_list
           [0U]);
    top__DOT__mem0__DOT__mux3__DOT__i0__DOT__lut_out 
        = (top__DOT__mem0__DOT__mux3__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__l_choose) 
                                  == vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__data_list
              [1U]));
    top__DOT__mem0__DOT__mux3__DOT__i0__DOT__lut_out 
        = (top__DOT__mem0__DOT__mux3__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__l_choose) 
                                  == vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__key_list
                                  [2U])))) & vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__data_list
              [2U]));
    top__DOT__mem0__DOT__mux3__DOT__i0__DOT__lut_out 
        = (top__DOT__mem0__DOT__mux3__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__l_choose) 
                                  == vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__key_list
                                  [3U])))) & vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__data_list
              [3U]));
    top__DOT__mem0__DOT__mux3__DOT__i0__DOT__lut_out 
        = (top__DOT__mem0__DOT__mux3__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__l_choose) 
                                  == vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__key_list
                                  [4U])))) & vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__data_list
              [4U]));
    top__DOT__mem0__DOT__mux3__DOT__i0__DOT__lut_out 
        = (top__DOT__mem0__DOT__mux3__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__l_choose) 
                                  == vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__key_list
                                  [5U])))) & vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__data_list
              [5U]));
    top__DOT__mem0__DOT__mux3__DOT__i0__DOT__lut_out 
        = (top__DOT__mem0__DOT__mux3__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__l_choose) 
                                  == vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__key_list
                                  [6U])))) & vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__data_list
              [6U]));
    top__DOT__ram_data = top__DOT__mem0__DOT__mux3__DOT__i0__DOT__lut_out;
    top__DOT__wb0__DOT____Vcellinp__mux3____pinNumber3[0U] 
        = (IData)(vlSelf->top__DOT__c_rdata);
    top__DOT__wb0__DOT____Vcellinp__mux3____pinNumber3[1U] 
        = (IData)((vlSelf->top__DOT__c_rdata >> 0x20U));
    top__DOT__wb0__DOT____Vcellinp__mux3____pinNumber3[2U] 
        = (4U | ((IData)(top__DOT__ram_data) << 3U));
    top__DOT__wb0__DOT____Vcellinp__mux3____pinNumber3[3U] 
        = (((IData)(top__DOT__ram_data) >> 0x1dU) | 
           ((IData)((top__DOT__ram_data >> 0x20U)) 
            << 3U));
    top__DOT__wb0__DOT____Vcellinp__mux3____pinNumber3[4U] 
        = (0x10U | (((IData)(vlSelf->top__DOT__alu_result) 
                     << 6U) | ((IData)((top__DOT__ram_data 
                                        >> 0x20U)) 
                               >> 0x1dU)));
    top__DOT__wb0__DOT____Vcellinp__mux3____pinNumber3[5U] 
        = (((IData)(vlSelf->top__DOT__alu_result) >> 0x1aU) 
           | ((IData)((vlSelf->top__DOT__alu_result 
                       >> 0x20U)) << 6U));
    top__DOT__wb0__DOT____Vcellinp__mux3____pinNumber3[6U] 
        = (0x40U | ((IData)((vlSelf->top__DOT__alu_result 
                             >> 0x20U)) >> 0x1aU));
    vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__pair_list[0U][0U] 
        = top__DOT__wb0__DOT____Vcellinp__mux3____pinNumber3[0U];
    vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__pair_list[0U][1U] 
        = top__DOT__wb0__DOT____Vcellinp__mux3____pinNumber3[1U];
    vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__pair_list[0U][2U] 
        = (7U & top__DOT__wb0__DOT____Vcellinp__mux3____pinNumber3[2U]);
    vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__pair_list[1U][0U] 
        = ((top__DOT__wb0__DOT____Vcellinp__mux3____pinNumber3[3U] 
            << 0x1dU) | (top__DOT__wb0__DOT____Vcellinp__mux3____pinNumber3[2U] 
                         >> 3U));
    vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__pair_list[1U][1U] 
        = ((top__DOT__wb0__DOT____Vcellinp__mux3____pinNumber3[4U] 
            << 0x1dU) | (top__DOT__wb0__DOT____Vcellinp__mux3____pinNumber3[3U] 
                         >> 3U));
    vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__pair_list[1U][2U] 
        = (7U & (top__DOT__wb0__DOT____Vcellinp__mux3____pinNumber3[4U] 
                 >> 3U));
    vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__pair_list[2U][0U] 
        = ((top__DOT__wb0__DOT____Vcellinp__mux3____pinNumber3[5U] 
            << 0x1aU) | (top__DOT__wb0__DOT____Vcellinp__mux3____pinNumber3[4U] 
                         >> 6U));
    vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__pair_list[2U][1U] 
        = ((top__DOT__wb0__DOT____Vcellinp__mux3____pinNumber3[6U] 
            << 0x1aU) | (top__DOT__wb0__DOT____Vcellinp__mux3____pinNumber3[5U] 
                         >> 6U));
    vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__pair_list[2U][2U] 
        = (7U & (top__DOT__wb0__DOT____Vcellinp__mux3____pinNumber3[6U] 
                 >> 6U));
    vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__key_list[0U] 
        = (7U & vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__pair_list
           [0U][2U]);
    vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__key_list[1U] 
        = (7U & vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__pair_list
           [1U][2U]);
    vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__data_list[2U] 
        = (((QData)((IData)(vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__pair_list
                            [2U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__pair_list
                                                                   [2U][0U])));
    vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__key_list[2U] 
        = (7U & vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__pair_list
           [2U][2U]);
    top__DOT__wb0__DOT__mux3__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->top__DOT__sel_rf_res) 
                               == vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__data_list
           [0U]);
    top__DOT__wb0__DOT__mux3__DOT__i0__DOT__lut_out 
        = (top__DOT__wb0__DOT__mux3__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__sel_rf_res) 
                                  == vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__data_list
              [1U]));
    top__DOT__wb0__DOT__mux3__DOT__i0__DOT__lut_out 
        = (top__DOT__wb0__DOT__mux3__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__sel_rf_res) 
                                  == vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__key_list
                                  [2U])))) & vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__wdata = top__DOT__wb0__DOT__mux3__DOT__i0__DOT__lut_out;
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    if (((~ (IData)(vlSelf->clk)) & (IData)(vlSelf->__Vclklast__TOP__clk))) {
        Vtop___024root___sequent__TOP__1(vlSelf);
    }
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtop___024root___sequent__TOP__2(vlSelf);
    }
    if (((IData)(vlSelf->clk) ^ (IData)(vlSelf->__Vclklast__TOP__clk))) {
        Vtop___024root___multiclk__TOP__5(vlSelf);
    }
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
