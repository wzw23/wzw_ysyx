// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_test.h for the primary calling header

#include "Vtop_test___024root.h"
#include "Vtop_test__Syms.h"

#include "verilated_dpi.h"

//==========

extern "C" void vpmem_read(long long mraddr, long long* mrdata);

VL_INLINE_OPT void Vtop_test___024root____Vdpiimwrap_top_test__DOT__ysyx_22050533_axi_full_s2_0__DOT__vpmem_read_TOP(QData/*63:0*/ mraddr, QData/*63:0*/ &mrdata) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_test___024root____Vdpiimwrap_top_test__DOT__ysyx_22050533_axi_full_s2_0__DOT__vpmem_read_TOP\n"); );
    // Body
    long long mraddr__Vcvt;
    for (size_t mraddr__Vidx = 0; mraddr__Vidx < 1; ++mraddr__Vidx) mraddr__Vcvt = mraddr;
    long long mrdata__Vcvt;
    vpmem_read(mraddr__Vcvt, &mrdata__Vcvt);
    mrdata = mrdata__Vcvt;
}

extern "C" void vpmem_write(long long waddr, long long wdata, char wmask, long long use_wen);

VL_INLINE_OPT void Vtop_test___024root____Vdpiimwrap_top_test__DOT__ysyx_22050533_axi_full_s2_0__DOT__vpmem_write_TOP(QData/*63:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ wmask, QData/*63:0*/ use_wen) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_test___024root____Vdpiimwrap_top_test__DOT__ysyx_22050533_axi_full_s2_0__DOT__vpmem_write_TOP\n"); );
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

extern "C" void set_gpr_ptr(const svOpenArrayHandle a);

VL_INLINE_OPT void Vtop_test___024root____Vdpiimwrap_top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__r0__DOT__set_gpr_ptr__Vdpioc2_TOP(const VlUnpacked<QData/*63:0*/, 32> &a) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_test___024root____Vdpiimwrap_top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__r0__DOT__set_gpr_ptr__Vdpioc2_TOP\n"); );
    // Body
    static const int a__Vopenprops__ulims[2] = {31, 0};
    static const VerilatedVarProps a__Vopenprops(VLVT_UINT64, VLVD_IN, VerilatedVarProps::Packed(), 63, 0, VerilatedVarProps::Unpacked(), 1, a__Vopenprops__ulims);
    VerilatedDpiOpenVar a__Vopenarray (&a__Vopenprops, &a);
    set_gpr_ptr(&a__Vopenarray);
}

extern "C" void set_csr_ptr(const svOpenArrayHandle a);

VL_INLINE_OPT void Vtop_test___024root____Vdpiimwrap_top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__r0__DOT__set_csr_ptr__Vdpioc2_TOP(const VlUnpacked<QData/*63:0*/, 4> &a) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_test___024root____Vdpiimwrap_top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__r0__DOT__set_csr_ptr__Vdpioc2_TOP\n"); );
    // Body
    static const int a__Vopenprops__ulims[2] = {3, 0};
    static const VerilatedVarProps a__Vopenprops(VLVT_UINT64, VLVD_IN, VerilatedVarProps::Packed(), 63, 0, VerilatedVarProps::Unpacked(), 1, a__Vopenprops__ulims);
    VerilatedDpiOpenVar a__Vopenarray (&a__Vopenprops, &a);
    set_csr_ptr(&a__Vopenarray);
}

extern const VlUnpacked<CData/*0:0*/, 128> Vtop_test__ConstPool__TABLE_2e887406_0;
extern const VlUnpacked<CData/*2:0*/, 128> Vtop_test__ConstPool__TABLE_6ece41c8_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vtop_test__ConstPool__TABLE_7e6fb1fc_0;
extern const VlUnpacked<CData/*2:0*/, 512> Vtop_test__ConstPool__TABLE_79fc3038_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vtop_test__ConstPool__TABLE_b99bc613_0;
extern const VlUnpacked<CData/*1:0*/, 256> Vtop_test__ConstPool__TABLE_3efd1d6b_0;
extern const VlUnpacked<CData/*2:0*/, 128> Vtop_test__ConstPool__TABLE_c6119e11_0;
extern const VlUnpacked<QData/*36:0*/, 2> Vtop_test__ConstPool__TABLE_1e4755db_0;
extern const VlUnpacked<QData/*63:0*/, 2> Vtop_test__ConstPool__TABLE_b006366b_0;
extern const VlUnpacked<QData/*63:0*/, 2> Vtop_test__ConstPool__TABLE_ee06366b_0;
extern const VlUnpacked<IData/*31:0*/, 2> Vtop_test__ConstPool__TABLE_2783c412_0;
extern const VlUnpacked<SData/*11:0*/, 2> Vtop_test__ConstPool__TABLE_ec5621d6_0;
extern const VlUnpacked<CData/*3:0*/, 2> Vtop_test__ConstPool__TABLE_cbe52d84_0;
extern const VlUnpacked<CData/*2:0*/, 2> Vtop_test__ConstPool__TABLE_148f7f3c_0;
extern const VlUnpacked<IData/*16:0*/, 2> Vtop_test__ConstPool__TABLE_9af37584_0;
extern const VlUnpacked<CData/*0:0*/, 2> Vtop_test__ConstPool__TABLE_30cbcb46_0;
extern const VlUnpacked<CData/*7:0*/, 2> Vtop_test__ConstPool__TABLE_ed009cac_0;
extern const VlUnpacked<CData/*6:0*/, 2> Vtop_test__ConstPool__TABLE_346a805f_0;
extern const VlUnpacked<CData/*4:0*/, 2> Vtop_test__ConstPool__TABLE_5e9281fb_0;

VL_INLINE_OPT void Vtop_test___024root___sequent__TOP__1(Vtop_test___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_test___024root___sequent__TOP__1\n"); );
    // Variables
    CData/*6:0*/ __Vtableidx1;
    CData/*6:0*/ __Vtableidx2;
    CData/*0:0*/ __Vtableidx3;
    CData/*7:0*/ __Vtableidx7;
    CData/*2:0*/ __Vdly__top_test__DOT__ysyx_22050533_axi_full_s2_0__DOT__state;
    CData/*7:0*/ __Vdly__top_test__DOT__ysyx_22050533_axi_full_s2_0__DOT__c_arlen;
    CData/*2:0*/ __Vdly__top_test__DOT__ysyx_22050533_axi_full_s2_0__DOT__write_state;
    CData/*2:0*/ __Vdly__top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__cache_state;
    CData/*2:0*/ __Vdly__top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__d_len;
    CData/*5:0*/ __Vdlyvdim0__top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__tagarray__v0;
    CData/*4:0*/ __Vdlyvlsb__top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__tagarray__v0;
    CData/*0:0*/ __Vdlyvset__top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__tagarray__v0;
    CData/*5:0*/ __Vdlyvdim0__top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__tagarray__v1;
    CData/*4:0*/ __Vdlyvlsb__top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__tagarray__v1;
    CData/*0:0*/ __Vdlyvset__top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__tagarray__v2;
    CData/*0:0*/ __Vdlyvset__top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__r0__DOT__rf__v0;
    CData/*4:0*/ __Vdlyvdim0__top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__r0__DOT__rf__v32;
    CData/*0:0*/ __Vdlyvset__top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__r0__DOT__rf__v32;
    CData/*0:0*/ __Vdlyvset__top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__r0__DOT__csr__v0;
    CData/*1:0*/ __Vdlyvdim0__top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__r0__DOT__csr__v3;
    CData/*0:0*/ __Vdlyvset__top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__r0__DOT__csr__v3;
    CData/*0:0*/ __Vdlyvset__top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__r0__DOT__csr__v4;
    CData/*0:0*/ __Vdly__top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__div_out_valid;
    CData/*6:0*/ __Vdly__top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__count;
    CData/*6:0*/ __Vdly__top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__cnt;
    CData/*0:0*/ __Vdly__top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__mul_out_valid;
    CData/*2:0*/ __Vdly__top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state;
    CData/*5:0*/ __Vdlyvdim0__top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__tagarray__v0;
    CData/*4:0*/ __Vdlyvlsb__top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__tagarray__v0;
    CData/*0:0*/ __Vdlyvset__top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__tagarray__v0;
    CData/*2:0*/ __Vdly__top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__read_state;
    CData/*2:0*/ __Vdly__top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len;
    CData/*5:0*/ __Vdlyvdim0__top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__tagarray__v1;
    CData/*4:0*/ __Vdlyvlsb__top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__tagarray__v1;
    CData/*0:0*/ __Vdlyvset__top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__tagarray__v1;
    CData/*5:0*/ __Vdlyvdim0__top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__tagarray__v2;
    CData/*4:0*/ __Vdlyvlsb__top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__tagarray__v2;
    CData/*0:0*/ __Vdlyvset__top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__tagarray__v3;
    CData/*2:0*/ __Vdly__top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__write_state;
    CData/*2:0*/ __Vdly__top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_w_len;
    CData/*7:0*/ __Vdly__top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__c_awlen;
    CData/*5:0*/ __Vdlyvdim0__top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__tagarray__v67;
    CData/*4:0*/ __Vdlyvlsb__top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__tagarray__v67;
    CData/*0:0*/ __Vdlyvset__top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__tagarray__v67;
    CData/*5:0*/ __Vdlyvdim0__top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__tagarray__v68;
    CData/*4:0*/ __Vdlyvlsb__top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__tagarray__v68;
    CData/*0:0*/ __Vdlyvset__top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__tagarray__v68;
    CData/*2:0*/ __Vdly__top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_mem_read_write_0__DOT__read_state;
    CData/*2:0*/ __Vdly__top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_mem_read_write_0__DOT__d_r_len;
    CData/*7:0*/ __Vdly__top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_mem_read_write_0__DOT__c_awlen;
    CData/*1:0*/ __Vdly__top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_arbiter_1__DOT__master_state;
    CData/*5:0*/ __Vdlyvdim0__top_test__DOT__sram_0__DOT__sram_0__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__top_test__DOT__sram_0__DOT__sram_0__DOT__ram__v0;
    CData/*5:0*/ __Vdlyvdim0__top_test__DOT__sram_0__DOT__sram_1__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__top_test__DOT__sram_0__DOT__sram_1__DOT__ram__v0;
    CData/*5:0*/ __Vdlyvdim0__top_test__DOT__sram_0__DOT__sram_2__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__top_test__DOT__sram_0__DOT__sram_2__DOT__ram__v0;
    CData/*5:0*/ __Vdlyvdim0__top_test__DOT__sram_0__DOT__sram_3__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__top_test__DOT__sram_0__DOT__sram_3__DOT__ram__v0;
    CData/*5:0*/ __Vdlyvdim0__top_test__DOT__sram_0__DOT__sram_4__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__top_test__DOT__sram_0__DOT__sram_4__DOT__ram__v0;
    CData/*5:0*/ __Vdlyvdim0__top_test__DOT__sram_0__DOT__sram_5__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__top_test__DOT__sram_0__DOT__sram_5__DOT__ram__v0;
    CData/*5:0*/ __Vdlyvdim0__top_test__DOT__sram_0__DOT__sram_6__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__top_test__DOT__sram_0__DOT__sram_6__DOT__ram__v0;
    CData/*5:0*/ __Vdlyvdim0__top_test__DOT__sram_0__DOT__sram_7__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__top_test__DOT__sram_0__DOT__sram_7__DOT__ram__v0;
    SData/*8:0*/ __Vtableidx4;
    SData/*8:0*/ __Vtableidx5;
    SData/*8:0*/ __Vtableidx6;
    IData/*31:0*/ __Vdly__top_test__DOT__ysyx_22050533_axi_full_s2_0__DOT__r_awaddr;
    IData/*19:0*/ __Vdlyvval__top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__tagarray__v1;
    VlWide<4>/*127:0*/ __Vdly__top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__dividend;
    VlWide<5>/*131:0*/ __Vdly__top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r;
    VlWide<3>/*66:0*/ __Vdly__top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplier_r;
    IData/*19:0*/ __Vdlyvval__top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__tagarray__v2;
    VlWide<4>/*127:0*/ __Vdlyvval__top_test__DOT__sram_0__DOT__sram_0__DOT__ram__v0;
    VlWide<4>/*127:0*/ __Vdlyvval__top_test__DOT__sram_0__DOT__sram_1__DOT__ram__v0;
    VlWide<4>/*127:0*/ __Vdlyvval__top_test__DOT__sram_0__DOT__sram_2__DOT__ram__v0;
    VlWide<4>/*127:0*/ __Vdlyvval__top_test__DOT__sram_0__DOT__sram_3__DOT__ram__v0;
    VlWide<4>/*127:0*/ __Vdlyvval__top_test__DOT__sram_0__DOT__sram_4__DOT__ram__v0;
    VlWide<4>/*127:0*/ __Vdlyvval__top_test__DOT__sram_0__DOT__sram_5__DOT__ram__v0;
    VlWide<4>/*127:0*/ __Vdlyvval__top_test__DOT__sram_0__DOT__sram_6__DOT__ram__v0;
    VlWide<4>/*127:0*/ __Vdlyvval__top_test__DOT__sram_0__DOT__sram_7__DOT__ram__v0;
    VlWide<3>/*95:0*/ __Vtemp15;
    VlWide<3>/*95:0*/ __Vtemp16;
    VlWide<4>/*127:0*/ __Vtemp17;
    VlWide<4>/*127:0*/ __Vtemp38;
    VlWide<4>/*127:0*/ __Vtemp59;
    VlWide<4>/*127:0*/ __Vtemp80;
    VlWide<4>/*127:0*/ __Vtemp102;
    VlWide<3>/*95:0*/ __Vtemp110;
    VlWide<3>/*95:0*/ __Vtemp113;
    VlWide<3>/*95:0*/ __Vtemp114;
    VlWide<3>/*95:0*/ __Vtemp115;
    VlWide<3>/*95:0*/ __Vtemp116;
    VlWide<3>/*95:0*/ __Vtemp117;
    VlWide<3>/*95:0*/ __Vtemp118;
    VlWide<3>/*95:0*/ __Vtemp121;
    VlWide<3>/*95:0*/ __Vtemp122;
    VlWide<3>/*95:0*/ __Vtemp123;
    VlWide<3>/*95:0*/ __Vtemp124;
    VlWide<3>/*95:0*/ __Vtemp125;
    VlWide<5>/*159:0*/ __Vtemp128;
    VlWide<5>/*159:0*/ __Vtemp129;
    VlWide<5>/*159:0*/ __Vtemp130;
    VlWide<5>/*159:0*/ __Vtemp131;
    VlWide<4>/*127:0*/ __Vtemp133;
    VlWide<4>/*127:0*/ __Vtemp135;
    VlWide<4>/*127:0*/ __Vtemp148;
    VlWide<4>/*127:0*/ __Vtemp159;
    VlWide<4>/*127:0*/ __Vtemp163;
    VlWide<4>/*127:0*/ __Vtemp181;
    VlWide<4>/*127:0*/ __Vtemp183;
    VlWide<4>/*127:0*/ __Vtemp196;
    VlWide<4>/*127:0*/ __Vtemp207;
    VlWide<4>/*127:0*/ __Vtemp211;
    VlWide<4>/*127:0*/ __Vtemp229;
    VlWide<4>/*127:0*/ __Vtemp231;
    VlWide<4>/*127:0*/ __Vtemp244;
    VlWide<4>/*127:0*/ __Vtemp255;
    VlWide<4>/*127:0*/ __Vtemp259;
    VlWide<4>/*127:0*/ __Vtemp277;
    VlWide<4>/*127:0*/ __Vtemp279;
    VlWide<4>/*127:0*/ __Vtemp292;
    VlWide<4>/*127:0*/ __Vtemp303;
    VlWide<4>/*127:0*/ __Vtemp307;
    VlWide<3>/*95:0*/ __Vtemp336;
    VlWide<8>/*255:0*/ __Vtemp363;
    VlWide<12>/*383:0*/ __Vtemp367;
    VlWide<24>/*767:0*/ __Vtemp377;
    IData/*31:0*/ __Vilp;
    QData/*63:0*/ __Vtask_top_test__DOT__ysyx_22050533_axi_full_s2_0__DOT__vpmem_read__0__mrdata;
    QData/*63:0*/ __Vdlyvval__top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__r0__DOT__rf__v32;
    QData/*63:0*/ __Vdlyvval__top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__r0__DOT__csr__v3;
    QData/*63:0*/ __Vdlyvval__top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__r0__DOT__csr__v5;
    QData/*63:0*/ __Vdly__top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__qutient;
    // Body
    __Vdly__top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_w_len 
        = vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_w_len;
    __Vdly__top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__d_len 
        = vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__d_len;
    __Vdly__top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_mem_read_write_0__DOT__c_awlen 
        = vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_mem_read_write_0__DOT__c_awlen;
    __Vdly__top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__c_awlen 
        = vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__c_awlen;
    __Vdly__top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__mul_out_valid 
        = vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__mul_out_valid;
    __Vdly__top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_mem_read_write_0__DOT__d_r_len 
        = vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_mem_read_write_0__DOT__d_r_len;
    __Vdly__top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len 
        = vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len;
    __Vdly__top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__div_out_valid 
        = vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__div_out_valid;
    __Vdly__top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__cnt 
        = vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__cnt;
    __Vdly__top_test__DOT__ysyx_22050533_axi_full_s2_0__DOT__write_state 
        = vlSelf->top_test__DOT__ysyx_22050533_axi_full_s2_0__DOT__write_state;
    __Vdly__top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__count 
        = vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__count;
    __Vdly__top_test__DOT__ysyx_22050533_axi_full_s2_0__DOT__c_arlen 
        = vlSelf->top_test__DOT__ysyx_22050533_axi_full_s2_0__DOT__c_arlen;
    __Vdly__top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_arbiter_1__DOT__master_state 
        = vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_arbiter_1__DOT__master_state;
    __Vdly__top_test__DOT__ysyx_22050533_axi_full_s2_0__DOT__state 
        = vlSelf->top_test__DOT__ysyx_22050533_axi_full_s2_0__DOT__state;
    __Vdly__top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__write_state 
        = vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__write_state;
    __Vdly__top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__read_state 
        = vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__read_state;
    __Vdly__top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_mem_read_write_0__DOT__read_state 
        = vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_mem_read_write_0__DOT__read_state;
    __Vdly__top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
        = vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U];
    __Vdly__top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
        = vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U];
    __Vdly__top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
        = vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U];
    __Vdly__top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
        = vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U];
    __Vdly__top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[4U] 
        = vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[4U];
    __Vdly__top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplier_r[0U] 
        = vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplier_r[0U];
    __Vdly__top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplier_r[1U] 
        = vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplier_r[1U];
    __Vdly__top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplier_r[2U] 
        = vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplier_r[2U];
    __Vdlyvset__top_test__DOT__sram_0__DOT__sram_3__DOT__ram__v0 = 0U;
    __Vdlyvset__top_test__DOT__sram_0__DOT__sram_2__DOT__ram__v0 = 0U;
    __Vdlyvset__top_test__DOT__sram_0__DOT__sram_1__DOT__ram__v0 = 0U;
    __Vdlyvset__top_test__DOT__sram_0__DOT__sram_0__DOT__ram__v0 = 0U;
    __Vdlyvset__top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__tagarray__v0 = 0U;
    __Vdlyvset__top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__tagarray__v2 = 0U;
    __Vdly__top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state 
        = vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state;
    __Vdlyvset__top_test__DOT__sram_0__DOT__sram_7__DOT__ram__v0 = 0U;
    __Vdlyvset__top_test__DOT__sram_0__DOT__sram_6__DOT__ram__v0 = 0U;
    __Vdlyvset__top_test__DOT__sram_0__DOT__sram_5__DOT__ram__v0 = 0U;
    __Vdlyvset__top_test__DOT__sram_0__DOT__sram_4__DOT__ram__v0 = 0U;
    __Vdlyvset__top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__tagarray__v1 = 0U;
    __Vdlyvset__top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__tagarray__v3 = 0U;
    __Vdlyvset__top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__tagarray__v0 = 0U;
    __Vdlyvset__top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__tagarray__v67 = 0U;
    __Vdlyvset__top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__tagarray__v68 = 0U;
    __Vdly__top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__dividend[0U] 
        = vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__dividend[0U];
    __Vdly__top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__dividend[1U] 
        = vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__dividend[1U];
    __Vdly__top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__dividend[2U] 
        = vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__dividend[2U];
    __Vdly__top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__dividend[3U] 
        = vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__dividend[3U];
    __Vdly__top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__qutient 
        = vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__qutient;
    __Vdly__top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__cache_state 
        = vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__cache_state;
    __Vdly__top_test__DOT__ysyx_22050533_axi_full_s2_0__DOT__r_awaddr 
        = vlSelf->top_test__DOT__ysyx_22050533_axi_full_s2_0__DOT__r_awaddr;
    __Vdlyvset__top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__r0__DOT__csr__v0 = 0U;
    __Vdlyvset__top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__r0__DOT__csr__v3 = 0U;
    __Vdlyvset__top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__r0__DOT__csr__v4 = 0U;
    __Vdlyvset__top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__r0__DOT__rf__v0 = 0U;
    __Vdlyvset__top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__r0__DOT__rf__v32 = 0U;
    if (vlSelf->reset) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__unnamedblk1__DOT__i = 0x40U;
    }
    if (vlSelf->reset) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__unnamedblk1__DOT__i = 0x20U;
    }
    if (vlSelf->reset) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__r0__DOT__i = 3U;
    }
    if (vlSelf->reset) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__unnamedblk1__DOT__i = 0x40U;
    }
    vlSelf->top_test__DOT__io_master_bresp = ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_arbiter_1__DOT__wlast)
                                               ? 1U
                                               : 2U);
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__rvalid_rready 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__rvalid1) 
                                         & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__rready)));
    if (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__wready2_1) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_mem_read_write_0__DOT__d_w_len 
            = (7U & ((IData)(1U) + (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_mem_read_write_0__DOT__d_w_len)));
    }
    if ((1U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_mem_read_write_0__DOT__c_awlen))) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_mem_read_write_0__DOT__d_w_len = 0U;
    }
    if (vlSelf->reset) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_mem_read_write_0__DOT__d_w_len = 0U;
    }
    if (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__wready2_0) {
        __Vdly__top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_w_len 
            = (7U & ((IData)(1U) + (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_w_len)));
    }
    if ((8U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__c_awlen))) {
        __Vdly__top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_w_len = 0U;
    }
    if (vlSelf->reset) {
        __Vdly__top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_w_len = 0U;
    }
    if (vlSelf->reset) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__rdata_test3 = 0ULL;
    } else if (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__rvalid1) 
                & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__rready))) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__rdata_test3 
            = vlSelf->top_test__DOT__ysyx_22050533_0__DOT__rdata1;
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__rvalid1) 
             & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__rready))) {
            __Vdly__top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__d_len 
                = (7U & ((IData)(1U) + (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__d_len)));
        }
    }
    if (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__rlast1) {
        __Vdly__top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__d_len = 0U;
    }
    if (vlSelf->reset) {
        __Vdly__top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__d_len = 0U;
    }
    if (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__wready2_1) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_mem_read_write_0__DOT__wvalid = 1U;
    }
    if ((1U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_mem_read_write_0__DOT__c_awlen))) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_mem_read_write_0__DOT__wvalid = 0U;
    }
    if (vlSelf->reset) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_mem_read_write_0__DOT__wvalid = 0U;
    }
    if (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__wready2_0) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__wvalid = 1U;
    }
    if ((8U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__c_awlen))) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__wvalid = 0U;
    }
    if (vlSelf->reset) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__wvalid = 0U;
    }
    if (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__wready2_1) {
        __Vdly__top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_mem_read_write_0__DOT__c_awlen 
            = (0xffU & ((IData)(1U) + (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_mem_read_write_0__DOT__c_awlen)));
    }
    if (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_mem_read_write_0__DOT__wlast) {
        __Vdly__top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_mem_read_write_0__DOT__c_awlen = 0U;
    }
    if (vlSelf->reset) {
        __Vdly__top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_mem_read_write_0__DOT__c_awlen = 0U;
    }
    if (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__wready2_0) {
        __Vdly__top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__c_awlen 
            = (0xffU & ((IData)(1U) + (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__c_awlen)));
    }
    if (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__wlast) {
        __Vdly__top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__c_awlen = 0U;
    }
    if (vlSelf->reset) {
        __Vdly__top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__c_awlen = 0U;
    }
    if (vlSelf->reset) {
        __Vdly__top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__mul_out_valid = 0U;
    } else if (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__mul_out_valid) {
        __Vdly__top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__mul_out_valid = 0U;
    } else if (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__done) {
        __Vdly__top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__mul_out_valid = 1U;
    }
    if (vlSelf->reset) {
        __Vdly__top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_mem_read_write_0__DOT__d_r_len = 0U;
    }
    if (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_1) 
         & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_mem_read_write_0__DOT__rready))) {
        __Vdly__top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_mem_read_write_0__DOT__d_r_len 
            = (7U & ((IData)(1U) + (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_mem_read_write_0__DOT__d_r_len)));
    }
    if (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rlast2_1) {
        __Vdly__top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_mem_read_write_0__DOT__d_r_len = 0U;
    }
    if (vlSelf->reset) {
        __Vdly__top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_mem_read_write_0__DOT__d_r_len = 0U;
    }
    vlSelf->inst_finish = ((~ (IData)(vlSelf->reset)) 
                           & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__pipe3_valid));
    if (vlSelf->reset) {
        __Vdly__top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len = 0U;
    }
    if (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
         & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready))) {
        __Vdly__top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len 
            = (7U & ((IData)(1U) + (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)));
    }
    if (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rlast2_0) {
        __Vdly__top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len = 0U;
    }
    if (vlSelf->reset) {
        __Vdly__top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len = 0U;
    }
    if (((IData)(vlSelf->reset) | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__div_out_valid))) {
        __Vdly__top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__div_out_valid = 0U;
    } else if (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__done) {
        __Vdly__top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__div_out_valid = 1U;
    }
    if (((IData)(vlSelf->reset) | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__mul_out_valid))) {
        __Vdly__top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__cnt = 0U;
    } else if (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__running_r) {
        __Vdly__top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__cnt 
            = (0x7fU & ((IData)(1U) + (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__cnt)));
    }
    if (vlSelf->reset) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__mul_doing = 0U;
    } else if (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__mul_out_valid) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__mul_doing = 0U;
    } else if (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__mul_valid) 
                & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__mul_ready))) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__mul_doing = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__div_doing = 0U;
    } else if (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__div_out_valid) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__div_doing = 0U;
    } else if (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__div_valid) 
                & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__div_ready))) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__div_doing = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__pipe1_valid = 0U;
    } else if (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__stallable_pipeline_test__DOT__pipe1_allow_in) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__pipe1_valid 
            = vlSelf->inst_update;
    }
    __Vtableidx2 = (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_arbiter_1__DOT__wlast) 
                     << 6U) | (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_arbiter_1__DOT__wvalid) 
                                << 5U) | (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_arbiter_1__DOT__awvalid) 
                                           << 4U) | 
                                          (((IData)(vlSelf->top_test__DOT__ysyx_22050533_axi_full_s2_0__DOT__write_state) 
                                            << 1U) 
                                           | (IData)(vlSelf->reset)))));
    if (Vtop_test__ConstPool__TABLE_2e887406_0[__Vtableidx2]) {
        __Vdly__top_test__DOT__ysyx_22050533_axi_full_s2_0__DOT__write_state 
            = Vtop_test__ConstPool__TABLE_6ece41c8_0
            [__Vtableidx2];
    }
    if (((IData)(vlSelf->reset) | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__div_out_valid))) {
        __Vdly__top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__count = 0U;
    } else if (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__running_r) {
        __Vdly__top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__count 
            = (0x7fU & ((IData)(1U) + (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__count)));
    }
    if (((IData)(vlSelf->reset) | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__stallable_pipeline_test__DOT__pipe2_to_pipe3_valid))) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__mul_finish = 0U;
    } else if (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__mul_out_valid) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__mul_finish = 1U;
    }
    if (((IData)(vlSelf->reset) | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__stallable_pipeline_test__DOT__pipe2_to_pipe3_valid))) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__div_finish = 0U;
    } else if (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__div_out_valid) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__div_finish = 1U;
    }
    __Vtableidx4 = (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_reg_finish) 
                     << 8U) | (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__rlast1) 
                                << 7U) | (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__rvalid1) 
                                           << 6U) | 
                                          (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__arvalid) 
                                            << 5U) 
                                           | ((((1U 
                                                 == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_arbiter_1__DOT__master_state))
                                                 ? (IData)(
                                                           (0U 
                                                            == (IData)(vlSelf->top_test__DOT__ysyx_22050533_axi_full_s2_0__DOT__state)))
                                                 : 0U) 
                                               << 4U) 
                                              | (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__state) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->reset)))))));
    if (Vtop_test__ConstPool__TABLE_7e6fb1fc_0[__Vtableidx4]) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__state 
            = Vtop_test__ConstPool__TABLE_79fc3038_0
            [__Vtableidx4];
    }
    if (vlSelf->reset) {
        __Vdly__top_test__DOT__ysyx_22050533_axi_full_s2_0__DOT__c_arlen = 0U;
    }
    if (((2U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_axi_full_s2_0__DOT__state)) 
         & (1U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_arbiter_1__DOT__arburst)))) {
        __Vdly__top_test__DOT__ysyx_22050533_axi_full_s2_0__DOT__c_arlen 
            = (0xffU & ((IData)(1U) + (IData)(vlSelf->top_test__DOT__ysyx_22050533_axi_full_s2_0__DOT__c_arlen)));
    }
    if (((IData)(vlSelf->top_test__DOT__io_master_rlast) 
         | ((IData)(vlSelf->top_test__DOT__ysyx_22050533_axi_full_s2_0__DOT__c_arlen) 
            == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_arbiter_1__DOT__arlen)))) {
        __Vdly__top_test__DOT__ysyx_22050533_axi_full_s2_0__DOT__c_arlen = 0U;
    }
    __Vtableidx7 = (((IData)(vlSelf->mem_finish) << 7U) 
                    | (((IData)(vlSelf->inst_update) 
                        << 6U) | (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__awvalid2) 
                                   << 5U) | (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__arvalid2) 
                                              << 4U) 
                                             | (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_arbiter_1__DOT__master_state) 
                                                 << 2U) 
                                                | (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__arvalid) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->reset)))))));
    if (Vtop_test__ConstPool__TABLE_b99bc613_0[__Vtableidx7]) {
        __Vdly__top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_arbiter_1__DOT__master_state 
            = Vtop_test__ConstPool__TABLE_3efd1d6b_0
            [__Vtableidx7];
    }
    if (((IData)(vlSelf->reset) | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__stallable_pipeline_test__DOT__pipe2_to_pipe3_valid))) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__div_result_r = 0ULL;
    } else if (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__div_out_valid) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__div_result_r 
            = vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__qutient;
    }
    if (((IData)(vlSelf->reset) | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__stallable_pipeline_test__DOT__pipe2_to_pipe3_valid))) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__mul_result_r = 0ULL;
    } else if (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__mul_out_valid) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__mul_result_r 
            = (((QData)((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__tmp_result[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__tmp_result[0U])));
    }
    __Vtableidx1 = (((IData)(vlSelf->top_test__DOT__io_master_rlast) 
                     << 6U) | ((0x20U & (((1U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_arbiter_1__DOT__master_state))
                                           ? (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__rready)
                                           : ((2U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_arbiter_1__DOT__master_state))
                                               ? ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__use_cache)
                                                   ? (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)
                                                   : (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_mem_read_write_0__DOT__rready))
                                               : 0U)) 
                                         << 5U)) | 
                               (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_arbiter_1__DOT__arvalid) 
                                 << 4U) | (((IData)(vlSelf->top_test__DOT__ysyx_22050533_axi_full_s2_0__DOT__state) 
                                            << 1U) 
                                           | (IData)(vlSelf->reset)))));
    if (Vtop_test__ConstPool__TABLE_2e887406_0[__Vtableidx1]) {
        __Vdly__top_test__DOT__ysyx_22050533_axi_full_s2_0__DOT__state 
            = Vtop_test__ConstPool__TABLE_c6119e11_0
            [__Vtableidx1];
    }
    __Vtableidx5 = (((5U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                     << 8U) | (((8U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__c_awlen)) 
                                << 7U) | (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__wready2_0) 
                                           << 6U) | 
                                          (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__awvalid) 
                                            << 5U) 
                                           | ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__use_cache)
                                                 ? 
                                                (1U 
                                                 & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__awready2))
                                                 : 0U) 
                                               << 4U) 
                                              | (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__write_state) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->reset)))))));
    if (Vtop_test__ConstPool__TABLE_7e6fb1fc_0[__Vtableidx5]) {
        __Vdly__top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__write_state 
            = Vtop_test__ConstPool__TABLE_79fc3038_0
            [__Vtableidx5];
    }
    if (vlSelf->reset) {
        __Vdly__top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__read_state = 0U;
    } else if ((((0U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__read_state)) 
                 & ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__use_cache)
                     ? (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__arready2)
                     : 0U)) & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__arvalid))) {
        __Vdly__top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__read_state = 1U;
    } else if ((((1U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__read_state)) 
                 & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0)) 
                & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready))) {
        __Vdly__top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__read_state = 2U;
    } else if (((2U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__read_state)) 
                & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rlast2_0))) {
        __Vdly__top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__read_state = 3U;
    } else if (((3U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__read_state)) 
                & (5U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)))) {
        __Vdly__top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__read_state = 0U;
    }
    __Vtableidx6 = (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__stallable_pipeline_test__DOT__pipe2_to_pipe3_valid) 
                     << 8U) | (((1U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_mem_read_write_0__DOT__c_awlen)) 
                                << 7U) | (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__wready2_1) 
                                           << 6U) | 
                                          (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_mem_read_write_0__DOT__awvalid) 
                                            << 5U) 
                                           | ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__use_cache)
                                                 ? 0U
                                                 : 
                                                (1U 
                                                 & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__awready2))) 
                                               << 4U) 
                                              | (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_mem_read_write_0__DOT__write_state) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->reset)))))));
    if (Vtop_test__ConstPool__TABLE_7e6fb1fc_0[__Vtableidx6]) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_mem_read_write_0__DOT__write_state 
            = Vtop_test__ConstPool__TABLE_79fc3038_0
            [__Vtableidx6];
    }
    if (vlSelf->reset) {
        __Vdly__top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_mem_read_write_0__DOT__read_state = 0U;
    } else if ((((0U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_mem_read_write_0__DOT__read_state)) 
                 & ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__use_cache)
                     ? 0U : (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__arready2))) 
                & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_mem_read_write_0__DOT__arvalid))) {
        __Vdly__top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_mem_read_write_0__DOT__read_state = 1U;
    } else if (((((1U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_mem_read_write_0__DOT__read_state)) 
                  & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_1)) 
                 & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_mem_read_write_0__DOT__rready)) 
                & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rlast2_1))) {
        __Vdly__top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_mem_read_write_0__DOT__read_state = 3U;
    } else if (((((1U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_mem_read_write_0__DOT__read_state)) 
                  & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_1)) 
                 & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_mem_read_write_0__DOT__rready)) 
                & (~ (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rlast2_1)))) {
        __Vdly__top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_mem_read_write_0__DOT__read_state = 2U;
    } else if (((2U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_mem_read_write_0__DOT__read_state)) 
                & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rlast2_1))) {
        __Vdly__top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_mem_read_write_0__DOT__read_state = 3U;
    } else if (((3U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_mem_read_write_0__DOT__read_state)) 
                & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__stallable_pipeline_test__DOT__pipe2_to_pipe3_valid))) {
        __Vdly__top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_mem_read_write_0__DOT__read_state = 0U;
    }
    if (vlSelf->reset) {
        __Vdly__top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] = 0U;
        __Vdly__top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] = 0U;
        __Vdly__top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] = 0U;
        __Vdly__top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] = 0U;
        __Vdly__top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[4U] = 0U;
    } else if (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__mul_prepare) {
        __Vdly__top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
            = vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT____Vcellinp__ysyx_22050533_mulu_0__multiplicand[0U];
        __Vdly__top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
            = vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT____Vcellinp__ysyx_22050533_mulu_0__multiplicand[1U];
        __Vdly__top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
            = (((- (IData)((1U & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT____Vcellinp__ysyx_22050533_mulu_0__multiplicand[2U]))) 
                << 2U) | ((2U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT____Vcellinp__ysyx_22050533_mulu_0__multiplicand[2U] 
                                 << 1U)) | vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT____Vcellinp__ysyx_22050533_mulu_0__multiplicand[2U]));
        __Vdly__top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
            = (((- (IData)((1U & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT____Vcellinp__ysyx_22050533_mulu_0__multiplicand[2U]))) 
                >> 0x1eU) | ((- (IData)((1U & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT____Vcellinp__ysyx_22050533_mulu_0__multiplicand[2U]))) 
                             << 2U));
        __Vdly__top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[4U] 
            = (((- (IData)((1U & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT____Vcellinp__ysyx_22050533_mulu_0__multiplicand[2U]))) 
                >> 0x1eU) | (0xcU & ((- (IData)((1U 
                                                 & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT____Vcellinp__ysyx_22050533_mulu_0__multiplicand[2U]))) 
                                     << 2U)));
    } else if (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__running_r) {
        __Vdly__top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
            = (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
               << 2U);
        __Vdly__top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
            = ((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                >> 0x1eU) | (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                             << 2U));
        __Vdly__top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
            = ((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                >> 0x1eU) | (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                             << 2U));
        __Vdly__top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
            = ((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                >> 0x1eU) | (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                             << 2U));
        __Vdly__top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[4U] 
            = ((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                >> 0x1eU) | (0xcU & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[4U] 
                                     << 2U)));
    }
    if (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_1) 
         & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_mem_read_write_0__DOT__rready))) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__r_rdata_ld_device 
            = ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__use_cache)
                ? 0ULL : vlSelf->top_test__DOT__ysyx_22050533_0__DOT__rdata2);
    }
    if (vlSelf->reset) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__r_rdata_ld_device = 0ULL;
    }
    if (vlSelf->reset) {
        __Vdly__top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplier_r[0U] = 0U;
        __Vdly__top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplier_r[1U] = 0U;
        __Vdly__top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplier_r[2U] = 0U;
    } else if (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__mul_prepare) {
        __Vdly__top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplier_r[0U] 
            = (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT____Vcellinp__ysyx_22050533_mulu_0__multiplier[0U] 
               << 1U);
        __Vdly__top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplier_r[1U] 
            = ((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT____Vcellinp__ysyx_22050533_mulu_0__multiplier[0U] 
                >> 0x1fU) | (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT____Vcellinp__ysyx_22050533_mulu_0__multiplier[1U] 
                             << 1U));
        __Vdly__top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplier_r[2U] 
            = ((4U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT____Vcellinp__ysyx_22050533_mulu_0__multiplier[2U] 
                      << 2U)) | ((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT____Vcellinp__ysyx_22050533_mulu_0__multiplier[1U] 
                                  >> 0x1fU) | (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT____Vcellinp__ysyx_22050533_mulu_0__multiplier[2U] 
                                               << 1U)));
    } else if (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__running_r) {
        __Vtemp15[0U] = ((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplier_r[1U] 
                          << 0x1eU) | (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplier_r[0U] 
                                       >> 2U));
        __Vtemp15[1U] = ((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplier_r[2U] 
                          << 0x1eU) | (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplier_r[1U] 
                                       >> 2U));
        __Vtemp15[2U] = (1U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplier_r[2U] 
                               >> 2U));
        VL_EXTEND_WW(67,65, __Vtemp16, __Vtemp15);
        __Vdly__top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplier_r[0U] 
            = __Vtemp16[0U];
        __Vdly__top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplier_r[1U] 
            = __Vtemp16[1U];
        __Vdly__top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplier_r[2U] 
            = __Vtemp16[2U];
    }
    if ((((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__rvalid1) 
            & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__rready)) 
           & ((6U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__d_len)) 
              | (7U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__d_len)))) 
          | ((6U == (7U & (IData)((vlSelf->cpupc >> 3U)))) 
             | (7U == (7U & (IData)((vlSelf->cpupc 
                                     >> 3U)))))) & 
         (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__rvalid1) 
           & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__rready)) 
          & ((6U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__d_len)) 
             | (7U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__d_len)))))) {
        VL_EXTEND_WQ(128,64, __Vtemp17, vlSelf->top_test__DOT__ysyx_22050533_0__DOT__rdata1);
        __Vdlyvval__top_test__DOT__sram_0__DOT__sram_3__DOT__ram__v0[0U] 
            = ((((0U == (1U & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__d_len)))
                  ? __Vtemp17[0U] : 0U) & ((0U == (1U 
                                                   & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__d_len)))
                                            ? 0xffffffffU
                                            : 0U)) 
               | (vlSelf->top_test__DOT__sram_0__DOT__sram_3__DOT__ram
                  [(0x3fU & (IData)((vlSelf->cpupc 
                                     >> 6U)))][0U] 
                  & (~ ((0U == (1U & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__d_len)))
                         ? 0xffffffffU : 0U))));
        __Vdlyvval__top_test__DOT__sram_0__DOT__sram_3__DOT__ram__v0[1U] 
            = ((((0U == (1U & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__d_len)))
                  ? __Vtemp17[1U] : 0U) & ((0U == (1U 
                                                   & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__d_len)))
                                            ? 0xffffffffU
                                            : 0U)) 
               | (vlSelf->top_test__DOT__sram_0__DOT__sram_3__DOT__ram
                  [(0x3fU & (IData)((vlSelf->cpupc 
                                     >> 6U)))][1U] 
                  & (~ ((0U == (1U & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__d_len)))
                         ? 0xffffffffU : 0U))));
        __Vdlyvval__top_test__DOT__sram_0__DOT__sram_3__DOT__ram__v0[2U] 
            = ((((0U == (1U & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__d_len)))
                  ? __Vtemp17[2U] : (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__rdata1)) 
                & ((0U == (1U & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__d_len)))
                    ? 0U : 0xffffffffU)) | (vlSelf->top_test__DOT__sram_0__DOT__sram_3__DOT__ram
                                            [(0x3fU 
                                              & (IData)(
                                                        (vlSelf->cpupc 
                                                         >> 6U)))][2U] 
                                            & (~ ((0U 
                                                   == 
                                                   (1U 
                                                    & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__d_len)))
                                                   ? 0U
                                                   : 0xffffffffU))));
        __Vdlyvval__top_test__DOT__sram_0__DOT__sram_3__DOT__ram__v0[3U] 
            = ((((0U == (1U & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__d_len)))
                  ? __Vtemp17[3U] : (IData)((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__rdata1 
                                             >> 0x20U))) 
                & ((0U == (1U & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__d_len)))
                    ? 0U : 0xffffffffU)) | (vlSelf->top_test__DOT__sram_0__DOT__sram_3__DOT__ram
                                            [(0x3fU 
                                              & (IData)(
                                                        (vlSelf->cpupc 
                                                         >> 6U)))][3U] 
                                            & (~ ((0U 
                                                   == 
                                                   (1U 
                                                    & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__d_len)))
                                                   ? 0U
                                                   : 0xffffffffU))));
        __Vdlyvset__top_test__DOT__sram_0__DOT__sram_3__DOT__ram__v0 = 1U;
        __Vdlyvdim0__top_test__DOT__sram_0__DOT__sram_3__DOT__ram__v0 
            = (0x3fU & (IData)((vlSelf->cpupc >> 6U)));
    }
    if ((((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__rvalid1) 
            & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__rready)) 
           & ((6U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__d_len)) 
              | (7U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__d_len)))) 
          | ((6U == (7U & (IData)((vlSelf->cpupc >> 3U)))) 
             | (7U == (7U & (IData)((vlSelf->cpupc 
                                     >> 3U)))))) & 
         (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__rvalid1) 
              & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__rready)) 
             & ((6U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__d_len)) 
                | (7U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__d_len))))))) {
        vlSelf->top_test__DOT__io_sram3_rdata[0U] = 
            vlSelf->top_test__DOT__sram_0__DOT__sram_3__DOT__ram
            [(0x3fU & (IData)((vlSelf->cpupc >> 6U)))][0U];
        vlSelf->top_test__DOT__io_sram3_rdata[1U] = 
            vlSelf->top_test__DOT__sram_0__DOT__sram_3__DOT__ram
            [(0x3fU & (IData)((vlSelf->cpupc >> 6U)))][1U];
        vlSelf->top_test__DOT__io_sram3_rdata[2U] = 
            vlSelf->top_test__DOT__sram_0__DOT__sram_3__DOT__ram
            [(0x3fU & (IData)((vlSelf->cpupc >> 6U)))][2U];
        vlSelf->top_test__DOT__io_sram3_rdata[3U] = 
            vlSelf->top_test__DOT__sram_0__DOT__sram_3__DOT__ram
            [(0x3fU & (IData)((vlSelf->cpupc >> 6U)))][3U];
    } else {
        vlSelf->top_test__DOT__io_sram3_rdata[0U] = 
            VL_RANDOM_I(32);
        vlSelf->top_test__DOT__io_sram3_rdata[1U] = 
            VL_RANDOM_I(32);
        vlSelf->top_test__DOT__io_sram3_rdata[2U] = 
            VL_RANDOM_I(32);
        vlSelf->top_test__DOT__io_sram3_rdata[3U] = 
            VL_RANDOM_I(32);
    }
    if ((((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__rvalid1) 
            & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__rready)) 
           & ((4U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__d_len)) 
              | (5U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__d_len)))) 
          | ((4U == (7U & (IData)((vlSelf->cpupc >> 3U)))) 
             | (5U == (7U & (IData)((vlSelf->cpupc 
                                     >> 3U)))))) & 
         (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__rvalid1) 
           & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__rready)) 
          & ((4U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__d_len)) 
             | (5U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__d_len)))))) {
        VL_EXTEND_WQ(128,64, __Vtemp38, vlSelf->top_test__DOT__ysyx_22050533_0__DOT__rdata1);
        __Vdlyvval__top_test__DOT__sram_0__DOT__sram_2__DOT__ram__v0[0U] 
            = ((((0U == (1U & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__d_len)))
                  ? __Vtemp38[0U] : 0U) & ((0U == (1U 
                                                   & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__d_len)))
                                            ? 0xffffffffU
                                            : 0U)) 
               | (vlSelf->top_test__DOT__sram_0__DOT__sram_2__DOT__ram
                  [(0x3fU & (IData)((vlSelf->cpupc 
                                     >> 6U)))][0U] 
                  & (~ ((0U == (1U & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__d_len)))
                         ? 0xffffffffU : 0U))));
        __Vdlyvval__top_test__DOT__sram_0__DOT__sram_2__DOT__ram__v0[1U] 
            = ((((0U == (1U & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__d_len)))
                  ? __Vtemp38[1U] : 0U) & ((0U == (1U 
                                                   & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__d_len)))
                                            ? 0xffffffffU
                                            : 0U)) 
               | (vlSelf->top_test__DOT__sram_0__DOT__sram_2__DOT__ram
                  [(0x3fU & (IData)((vlSelf->cpupc 
                                     >> 6U)))][1U] 
                  & (~ ((0U == (1U & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__d_len)))
                         ? 0xffffffffU : 0U))));
        __Vdlyvval__top_test__DOT__sram_0__DOT__sram_2__DOT__ram__v0[2U] 
            = ((((0U == (1U & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__d_len)))
                  ? __Vtemp38[2U] : (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__rdata1)) 
                & ((0U == (1U & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__d_len)))
                    ? 0U : 0xffffffffU)) | (vlSelf->top_test__DOT__sram_0__DOT__sram_2__DOT__ram
                                            [(0x3fU 
                                              & (IData)(
                                                        (vlSelf->cpupc 
                                                         >> 6U)))][2U] 
                                            & (~ ((0U 
                                                   == 
                                                   (1U 
                                                    & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__d_len)))
                                                   ? 0U
                                                   : 0xffffffffU))));
        __Vdlyvval__top_test__DOT__sram_0__DOT__sram_2__DOT__ram__v0[3U] 
            = ((((0U == (1U & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__d_len)))
                  ? __Vtemp38[3U] : (IData)((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__rdata1 
                                             >> 0x20U))) 
                & ((0U == (1U & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__d_len)))
                    ? 0U : 0xffffffffU)) | (vlSelf->top_test__DOT__sram_0__DOT__sram_2__DOT__ram
                                            [(0x3fU 
                                              & (IData)(
                                                        (vlSelf->cpupc 
                                                         >> 6U)))][3U] 
                                            & (~ ((0U 
                                                   == 
                                                   (1U 
                                                    & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__d_len)))
                                                   ? 0U
                                                   : 0xffffffffU))));
        __Vdlyvset__top_test__DOT__sram_0__DOT__sram_2__DOT__ram__v0 = 1U;
        __Vdlyvdim0__top_test__DOT__sram_0__DOT__sram_2__DOT__ram__v0 
            = (0x3fU & (IData)((vlSelf->cpupc >> 6U)));
    }
    if ((((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__rvalid1) 
            & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__rready)) 
           & ((4U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__d_len)) 
              | (5U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__d_len)))) 
          | ((4U == (7U & (IData)((vlSelf->cpupc >> 3U)))) 
             | (5U == (7U & (IData)((vlSelf->cpupc 
                                     >> 3U)))))) & 
         (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__rvalid1) 
              & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__rready)) 
             & ((4U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__d_len)) 
                | (5U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__d_len))))))) {
        vlSelf->top_test__DOT__io_sram2_rdata[0U] = 
            vlSelf->top_test__DOT__sram_0__DOT__sram_2__DOT__ram
            [(0x3fU & (IData)((vlSelf->cpupc >> 6U)))][0U];
        vlSelf->top_test__DOT__io_sram2_rdata[1U] = 
            vlSelf->top_test__DOT__sram_0__DOT__sram_2__DOT__ram
            [(0x3fU & (IData)((vlSelf->cpupc >> 6U)))][1U];
        vlSelf->top_test__DOT__io_sram2_rdata[2U] = 
            vlSelf->top_test__DOT__sram_0__DOT__sram_2__DOT__ram
            [(0x3fU & (IData)((vlSelf->cpupc >> 6U)))][2U];
        vlSelf->top_test__DOT__io_sram2_rdata[3U] = 
            vlSelf->top_test__DOT__sram_0__DOT__sram_2__DOT__ram
            [(0x3fU & (IData)((vlSelf->cpupc >> 6U)))][3U];
    } else {
        vlSelf->top_test__DOT__io_sram2_rdata[0U] = 
            VL_RANDOM_I(32);
        vlSelf->top_test__DOT__io_sram2_rdata[1U] = 
            VL_RANDOM_I(32);
        vlSelf->top_test__DOT__io_sram2_rdata[2U] = 
            VL_RANDOM_I(32);
        vlSelf->top_test__DOT__io_sram2_rdata[3U] = 
            VL_RANDOM_I(32);
    }
    if ((((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__rvalid1) 
            & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__rready)) 
           & ((2U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__d_len)) 
              | (3U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__d_len)))) 
          | ((2U == (7U & (IData)((vlSelf->cpupc >> 3U)))) 
             | (3U == (7U & (IData)((vlSelf->cpupc 
                                     >> 3U)))))) & 
         (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__rvalid1) 
           & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__rready)) 
          & ((2U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__d_len)) 
             | (3U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__d_len)))))) {
        VL_EXTEND_WQ(128,64, __Vtemp59, vlSelf->top_test__DOT__ysyx_22050533_0__DOT__rdata1);
        __Vdlyvval__top_test__DOT__sram_0__DOT__sram_1__DOT__ram__v0[0U] 
            = ((((0U == (1U & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__d_len)))
                  ? __Vtemp59[0U] : 0U) & ((0U == (1U 
                                                   & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__d_len)))
                                            ? 0xffffffffU
                                            : 0U)) 
               | (vlSelf->top_test__DOT__sram_0__DOT__sram_1__DOT__ram
                  [(0x3fU & (IData)((vlSelf->cpupc 
                                     >> 6U)))][0U] 
                  & (~ ((0U == (1U & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__d_len)))
                         ? 0xffffffffU : 0U))));
        __Vdlyvval__top_test__DOT__sram_0__DOT__sram_1__DOT__ram__v0[1U] 
            = ((((0U == (1U & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__d_len)))
                  ? __Vtemp59[1U] : 0U) & ((0U == (1U 
                                                   & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__d_len)))
                                            ? 0xffffffffU
                                            : 0U)) 
               | (vlSelf->top_test__DOT__sram_0__DOT__sram_1__DOT__ram
                  [(0x3fU & (IData)((vlSelf->cpupc 
                                     >> 6U)))][1U] 
                  & (~ ((0U == (1U & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__d_len)))
                         ? 0xffffffffU : 0U))));
        __Vdlyvval__top_test__DOT__sram_0__DOT__sram_1__DOT__ram__v0[2U] 
            = ((((0U == (1U & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__d_len)))
                  ? __Vtemp59[2U] : (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__rdata1)) 
                & ((0U == (1U & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__d_len)))
                    ? 0U : 0xffffffffU)) | (vlSelf->top_test__DOT__sram_0__DOT__sram_1__DOT__ram
                                            [(0x3fU 
                                              & (IData)(
                                                        (vlSelf->cpupc 
                                                         >> 6U)))][2U] 
                                            & (~ ((0U 
                                                   == 
                                                   (1U 
                                                    & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__d_len)))
                                                   ? 0U
                                                   : 0xffffffffU))));
        __Vdlyvval__top_test__DOT__sram_0__DOT__sram_1__DOT__ram__v0[3U] 
            = ((((0U == (1U & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__d_len)))
                  ? __Vtemp59[3U] : (IData)((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__rdata1 
                                             >> 0x20U))) 
                & ((0U == (1U & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__d_len)))
                    ? 0U : 0xffffffffU)) | (vlSelf->top_test__DOT__sram_0__DOT__sram_1__DOT__ram
                                            [(0x3fU 
                                              & (IData)(
                                                        (vlSelf->cpupc 
                                                         >> 6U)))][3U] 
                                            & (~ ((0U 
                                                   == 
                                                   (1U 
                                                    & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__d_len)))
                                                   ? 0U
                                                   : 0xffffffffU))));
        __Vdlyvset__top_test__DOT__sram_0__DOT__sram_1__DOT__ram__v0 = 1U;
        __Vdlyvdim0__top_test__DOT__sram_0__DOT__sram_1__DOT__ram__v0 
            = (0x3fU & (IData)((vlSelf->cpupc >> 6U)));
    }
    if ((((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__rvalid1) 
            & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__rready)) 
           & ((2U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__d_len)) 
              | (3U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__d_len)))) 
          | ((2U == (7U & (IData)((vlSelf->cpupc >> 3U)))) 
             | (3U == (7U & (IData)((vlSelf->cpupc 
                                     >> 3U)))))) & 
         (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__rvalid1) 
              & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__rready)) 
             & ((2U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__d_len)) 
                | (3U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__d_len))))))) {
        vlSelf->top_test__DOT__io_sram1_rdata[0U] = 
            vlSelf->top_test__DOT__sram_0__DOT__sram_1__DOT__ram
            [(0x3fU & (IData)((vlSelf->cpupc >> 6U)))][0U];
        vlSelf->top_test__DOT__io_sram1_rdata[1U] = 
            vlSelf->top_test__DOT__sram_0__DOT__sram_1__DOT__ram
            [(0x3fU & (IData)((vlSelf->cpupc >> 6U)))][1U];
        vlSelf->top_test__DOT__io_sram1_rdata[2U] = 
            vlSelf->top_test__DOT__sram_0__DOT__sram_1__DOT__ram
            [(0x3fU & (IData)((vlSelf->cpupc >> 6U)))][2U];
        vlSelf->top_test__DOT__io_sram1_rdata[3U] = 
            vlSelf->top_test__DOT__sram_0__DOT__sram_1__DOT__ram
            [(0x3fU & (IData)((vlSelf->cpupc >> 6U)))][3U];
    } else {
        vlSelf->top_test__DOT__io_sram1_rdata[0U] = 
            VL_RANDOM_I(32);
        vlSelf->top_test__DOT__io_sram1_rdata[1U] = 
            VL_RANDOM_I(32);
        vlSelf->top_test__DOT__io_sram1_rdata[2U] = 
            VL_RANDOM_I(32);
        vlSelf->top_test__DOT__io_sram1_rdata[3U] = 
            VL_RANDOM_I(32);
    }
    if ((((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__rvalid1) 
            & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__rready)) 
           & ((0U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__d_len)) 
              | (1U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__d_len)))) 
          | ((0U == (7U & (IData)((vlSelf->cpupc >> 3U)))) 
             | (1U == (7U & (IData)((vlSelf->cpupc 
                                     >> 3U)))))) & 
         (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__rvalid1) 
           & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__rready)) 
          & ((0U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__d_len)) 
             | (1U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__d_len)))))) {
        VL_EXTEND_WQ(128,64, __Vtemp80, vlSelf->top_test__DOT__ysyx_22050533_0__DOT__rdata1);
        __Vdlyvval__top_test__DOT__sram_0__DOT__sram_0__DOT__ram__v0[0U] 
            = ((((0U == (1U & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__d_len)))
                  ? __Vtemp80[0U] : 0U) & ((0U == (1U 
                                                   & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__d_len)))
                                            ? 0xffffffffU
                                            : 0U)) 
               | (vlSelf->top_test__DOT__sram_0__DOT__sram_0__DOT__ram
                  [(0x3fU & (IData)((vlSelf->cpupc 
                                     >> 6U)))][0U] 
                  & (~ ((0U == (1U & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__d_len)))
                         ? 0xffffffffU : 0U))));
        __Vdlyvval__top_test__DOT__sram_0__DOT__sram_0__DOT__ram__v0[1U] 
            = ((((0U == (1U & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__d_len)))
                  ? __Vtemp80[1U] : 0U) & ((0U == (1U 
                                                   & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__d_len)))
                                            ? 0xffffffffU
                                            : 0U)) 
               | (vlSelf->top_test__DOT__sram_0__DOT__sram_0__DOT__ram
                  [(0x3fU & (IData)((vlSelf->cpupc 
                                     >> 6U)))][1U] 
                  & (~ ((0U == (1U & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__d_len)))
                         ? 0xffffffffU : 0U))));
        __Vdlyvval__top_test__DOT__sram_0__DOT__sram_0__DOT__ram__v0[2U] 
            = ((((0U == (1U & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__d_len)))
                  ? __Vtemp80[2U] : (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__rdata1)) 
                & ((0U == (1U & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__d_len)))
                    ? 0U : 0xffffffffU)) | (vlSelf->top_test__DOT__sram_0__DOT__sram_0__DOT__ram
                                            [(0x3fU 
                                              & (IData)(
                                                        (vlSelf->cpupc 
                                                         >> 6U)))][2U] 
                                            & (~ ((0U 
                                                   == 
                                                   (1U 
                                                    & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__d_len)))
                                                   ? 0U
                                                   : 0xffffffffU))));
        __Vdlyvval__top_test__DOT__sram_0__DOT__sram_0__DOT__ram__v0[3U] 
            = ((((0U == (1U & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__d_len)))
                  ? __Vtemp80[3U] : (IData)((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__rdata1 
                                             >> 0x20U))) 
                & ((0U == (1U & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__d_len)))
                    ? 0U : 0xffffffffU)) | (vlSelf->top_test__DOT__sram_0__DOT__sram_0__DOT__ram
                                            [(0x3fU 
                                              & (IData)(
                                                        (vlSelf->cpupc 
                                                         >> 6U)))][3U] 
                                            & (~ ((0U 
                                                   == 
                                                   (1U 
                                                    & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__d_len)))
                                                   ? 0U
                                                   : 0xffffffffU))));
        __Vdlyvset__top_test__DOT__sram_0__DOT__sram_0__DOT__ram__v0 = 1U;
        __Vdlyvdim0__top_test__DOT__sram_0__DOT__sram_0__DOT__ram__v0 
            = (0x3fU & (IData)((vlSelf->cpupc >> 6U)));
    }
    if ((((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__rvalid1) 
            & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__rready)) 
           & ((0U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__d_len)) 
              | (1U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__d_len)))) 
          | ((0U == (7U & (IData)((vlSelf->cpupc >> 3U)))) 
             | (1U == (7U & (IData)((vlSelf->cpupc 
                                     >> 3U)))))) & 
         (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__rvalid1) 
              & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__rready)) 
             & ((0U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__d_len)) 
                | (1U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__d_len))))))) {
        vlSelf->top_test__DOT__io_sram0_rdata[0U] = 
            vlSelf->top_test__DOT__sram_0__DOT__sram_0__DOT__ram
            [(0x3fU & (IData)((vlSelf->cpupc >> 6U)))][0U];
        vlSelf->top_test__DOT__io_sram0_rdata[1U] = 
            vlSelf->top_test__DOT__sram_0__DOT__sram_0__DOT__ram
            [(0x3fU & (IData)((vlSelf->cpupc >> 6U)))][1U];
        vlSelf->top_test__DOT__io_sram0_rdata[2U] = 
            vlSelf->top_test__DOT__sram_0__DOT__sram_0__DOT__ram
            [(0x3fU & (IData)((vlSelf->cpupc >> 6U)))][2U];
        vlSelf->top_test__DOT__io_sram0_rdata[3U] = 
            vlSelf->top_test__DOT__sram_0__DOT__sram_0__DOT__ram
            [(0x3fU & (IData)((vlSelf->cpupc >> 6U)))][3U];
    } else {
        vlSelf->top_test__DOT__io_sram0_rdata[0U] = 
            VL_RANDOM_I(32);
        vlSelf->top_test__DOT__io_sram0_rdata[1U] = 
            VL_RANDOM_I(32);
        vlSelf->top_test__DOT__io_sram0_rdata[2U] = 
            VL_RANDOM_I(32);
        vlSelf->top_test__DOT__io_sram0_rdata[3U] = 
            VL_RANDOM_I(32);
    }
    if (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__rlast1) {
        __Vdlyvset__top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__tagarray__v0 = 1U;
        __Vdlyvlsb__top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__tagarray__v0 = 0x14U;
        __Vdlyvdim0__top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__tagarray__v0 
            = (0x3fU & (IData)((vlSelf->cpupc >> 6U)));
        __Vdlyvval__top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__tagarray__v1 
            = (0xfffffU & (IData)((vlSelf->cpupc >> 0xcU)));
        __Vdlyvlsb__top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__tagarray__v1 = 0U;
        __Vdlyvdim0__top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__tagarray__v1 
            = (0x3fU & (IData)((vlSelf->cpupc >> 6U)));
    }
    if (vlSelf->reset) {
        __Vdlyvset__top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__tagarray__v2 = 1U;
    }
    if (((2U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_axi_full_s2_0__DOT__state)) 
         & (1U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_arbiter_1__DOT__arburst)))) {
        Vtop_test___024root____Vdpiimwrap_top_test__DOT__ysyx_22050533_axi_full_s2_0__DOT__vpmem_read_TOP((QData)((IData)(vlSelf->top_test__DOT__ysyx_22050533_axi_full_s2_0__DOT__r_araddr)), __Vtask_top_test__DOT__ysyx_22050533_axi_full_s2_0__DOT__vpmem_read__0__mrdata);
        vlSelf->top_test__DOT__io_master_rdata = __Vtask_top_test__DOT__ysyx_22050533_axi_full_s2_0__DOT__vpmem_read__0__mrdata;
        vlSelf->top_test__DOT__io_master_rresp = 0U;
        vlSelf->top_test__DOT__io_master_rvalid = 1U;
        vlSelf->top_test__DOT__ysyx_22050533_axi_full_s2_0__DOT__r_araddr 
            = ((IData)(8U) + vlSelf->top_test__DOT__ysyx_22050533_axi_full_s2_0__DOT__r_araddr);
    } else {
        vlSelf->top_test__DOT__io_master_rvalid = 0U;
    }
    if (vlSelf->top_test__DOT__io_master_rlast) {
        vlSelf->top_test__DOT__io_master_rvalid = 0U;
    }
    if (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_arbiter_1__DOT__arvalid) 
         & (0U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_axi_full_s2_0__DOT__state)))) {
        vlSelf->top_test__DOT__ysyx_22050533_axi_full_s2_0__DOT__r_araddr 
            = ((1U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_arbiter_1__DOT__master_state))
                ? (0xffffffc0U & (IData)(vlSelf->cpupc))
                : ((2U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_arbiter_1__DOT__master_state))
                    ? ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__use_cache)
                        ? (0xffffffc0U & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__araddr)
                        : (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result))
                    : 0U));
    }
    if (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rlast2_0) {
        __Vdlyvset__top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__tagarray__v1 = 1U;
        __Vdlyvlsb__top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__tagarray__v1 = 0x14U;
        __Vdlyvdim0__top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__tagarray__v1 
            = (0x3fU & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__araddr 
                        >> 6U));
        __Vdlyvval__top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__tagarray__v2 
            = (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__araddr 
               >> 0xcU);
        __Vdlyvlsb__top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__tagarray__v2 = 0U;
        __Vdlyvdim0__top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__tagarray__v2 
            = (0x3fU & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__araddr 
                        >> 6U));
    }
    if (vlSelf->reset) {
        __Vdlyvset__top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__tagarray__v3 = 1U;
    }
    if (vlSelf->reset) {
        __Vdly__top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state = 0U;
    } else if (((((((0U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                    & ((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__araddr 
                        >> 0xcU) == (0xfffffU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__tagarray
                                     [(0x3fU & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__araddr 
                                                >> 6U))]))) 
                   & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__tagarray
                      [(0x3fU & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__araddr 
                                 >> 6U))] >> 0x14U)) 
                  & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rcache_en)) 
                 & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__pipe2_valid)) 
                & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__use_cache))) {
        __Vdly__top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state = 4U;
    } else if (((((((0U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                    & ((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__araddr 
                        >> 0xcU) == (0xfffffU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__tagarray
                                     [(0x3fU & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__araddr 
                                                >> 6U))]))) 
                   & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__tagarray
                      [(0x3fU & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__araddr 
                                 >> 6U))] >> 0x14U)) 
                  & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__wcache_en)) 
                 & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__pipe2_valid)) 
                & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__use_cache))) {
        __Vdly__top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state = 6U;
    } else if (((((0U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                  & ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rcache_en) 
                     | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__wcache_en))) 
                 & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__pipe2_valid)) 
                & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__use_cache))) {
        __Vdly__top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state = 1U;
    } else if (((1U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                & (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__tagarray
                      [(0x3fU & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__araddr 
                                 >> 6U))] >> 0x15U)))) {
        __Vdly__top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state = 3U;
    } else if (((1U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__tagarray
                   [(0x3fU & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__araddr 
                              >> 6U))] >> 0x15U))) {
        __Vdly__top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state = 2U;
        __Vdlyvset__top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__tagarray__v0 = 1U;
        __Vdlyvlsb__top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__tagarray__v0 = 0x15U;
        __Vdlyvdim0__top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__tagarray__v0 
            = (0x3fU & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__araddr 
                        >> 6U));
    } else if (((2U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                & (3U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__write_state)))) {
        __Vdly__top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state = 3U;
    } else if ((((3U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                 & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rcache_en)) 
                & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rlast2_0))) {
        __Vdly__top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state = 4U;
    } else if ((((3U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                 & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__wcache_en)) 
                & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rlast2_0))) {
        __Vdly__top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state = 6U;
    } else if ((4U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state))) {
        __Vdly__top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state = 5U;
    } else if ((6U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state))) {
        __Vdly__top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state = 5U;
    } else if (((5U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__stallable_pipeline_test__DOT__pipe2_to_pipe3_valid))) {
        __Vdly__top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state = 0U;
    }
    if ((6U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state))) {
        __Vdlyvset__top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__tagarray__v67 = 1U;
        __Vdlyvlsb__top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__tagarray__v67 = 0x15U;
        __Vdlyvdim0__top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__tagarray__v67 
            = (0x3fU & (IData)((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                >> 6U)));
        if (vlSelf->reset) {
            __Vdlyvset__top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__tagarray__v68 = 1U;
            __Vdlyvlsb__top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__tagarray__v68 = 0x15U;
            __Vdlyvdim0__top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__tagarray__v68 
                = (0x3fU & (IData)((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                    >> 6U)));
        }
    }
    if (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__stallable_pipeline_test__DOT__pipe1_to_pipe2_valid) 
         & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__stallable_pipeline_test__DOT__pipe2_allow_in))) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__l_choose_reg_is 
            = (((((((1U & (- (IData)((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__ld)))) 
                    | (2U & (- (IData)((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__lw))))) 
                   | (4U & (- (IData)((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__lwu))))) 
                  | (8U & (- (IData)((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__lh))))) 
                 | (0x10U & (- (IData)((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__lhu))))) 
                | (0x20U & (- (IData)((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__lb))))) 
               | (0x40U & (- (IData)((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__lbu)))));
    }
    if (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__stallable_pipeline_test__DOT__pipe2_to_pipe3_valid) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ram_data_reg_wb 
            = vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ram_data;
    }
    if (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__stallable_pipeline_test__DOT__pipe2_to_pipe3_valid) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__alu_result_reg_wb 
            = vlSelf->top_test__DOT__ysyx_22050533_0__DOT__alu_result;
    }
    if (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__stallable_pipeline_test__DOT__pipe1_to_pipe2_valid) 
         & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__stallable_pipeline_test__DOT__pipe2_allow_in))) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__w_choose_reg_is 
            = ((((((((((((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__addw) 
                           | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__subw)) 
                          | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__mulw)) 
                         | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__divw)) 
                        | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__divuw)) 
                       | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__remw)) 
                      | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__sllw)) 
                     | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__srlw)) 
                    | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__sraw)) 
                   | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__addiw)) 
                  | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__sraiw)) 
                 | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__slliw)) 
                | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__srliw)) 
               | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__remuw));
    }
    if (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__stallable_pipeline_test__DOT__pipe1_to_pipe2_valid) 
         & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__stallable_pipeline_test__DOT__pipe2_allow_in))) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__data_ram_wen_reg_is 
            = (((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__sd) 
                  | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__sb)) 
                 | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__sh)) 
                | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__sw)) 
               | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__sb));
    }
    if (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__stallable_pipeline_test__DOT__pipe1_to_pipe2_valid) 
         & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__stallable_pipeline_test__DOT__pipe2_allow_in))) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__data_ram_ren_reg_is 
            = (((((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__ld) 
                    | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__lw)) 
                   | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__lwu)) 
                  | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__lh)) 
                 | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__lhu)) 
                | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__lb)) 
               | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__lbu));
    }
    if (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__stallable_pipeline_test__DOT__pipe1_to_pipe2_valid) 
         & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__stallable_pipeline_test__DOT__pipe2_allow_in))) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__alu_src1_reg_is 
            = vlSelf->top_test__DOT__ysyx_22050533_0__DOT__sel_alu_src1;
    }
    if (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__stallable_pipeline_test__DOT__pipe1_to_pipe2_valid) 
         & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__stallable_pipeline_test__DOT__pipe2_allow_in))) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__alu_src2_reg_is 
            = vlSelf->top_test__DOT__ysyx_22050533_0__DOT__sel_alu_src2;
    }
    if (vlSelf->reset) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__remain = 0ULL;
    }
    if (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__done) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__remain 
            = ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__dividend_s)
                ? (1ULL + (~ vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__x_adder_src1))
                : (((QData)((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__dividend[3U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__dividend[2U]))));
    }
    if (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__div_prepare) {
        VL_EXTEND_WQ(128,64, __Vtemp102, ((1U & ((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__alu_control_reg_is 
                                                  >> 0xeU) 
                                                 & (IData)(
                                                           (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__alu_src1 
                                                            >> 0x3fU))))
                                           ? (1ULL 
                                              + (~ vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__x_adder_src1))
                                           : vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__alu_src1));
        __Vdly__top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__dividend[0U] 
            = __Vtemp102[0U];
        __Vdly__top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__dividend[1U] 
            = __Vtemp102[1U];
        __Vdly__top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__dividend[2U] 
            = __Vtemp102[2U];
        __Vdly__top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__dividend[3U] 
            = __Vtemp102[3U];
    } else if (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__running_r) {
        if (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__sub_cout) {
            __Vdly__top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__dividend[0U] 
                = (IData)((0xfffffffffffffffeULL & 
                           (((QData)((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__dividend[1U])) 
                             << 0x21U) | ((QData)((IData)(
                                                          vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__dividend[0U])) 
                                          << 1U))));
            __Vdly__top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__dividend[1U] 
                = (IData)(((0xfffffffffffffffeULL & 
                            (((QData)((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__dividend[1U])) 
                              << 0x21U) | ((QData)((IData)(
                                                           vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__dividend[0U])) 
                                           << 1U))) 
                           >> 0x20U));
            __Vdly__top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__dividend[2U] 
                = (IData)((((QData)((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__sub_result[1U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__sub_result[0U]))));
            __Vdly__top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__dividend[3U] 
                = (IData)(((((QData)((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__sub_result[1U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__sub_result[0U]))) 
                           >> 0x20U));
        } else {
            __Vdly__top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__dividend[0U] 
                = (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__dividend[0U] 
                   << 1U);
            __Vdly__top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__dividend[1U] 
                = ((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__dividend[0U] 
                    >> 0x1fU) | (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__dividend[1U] 
                                 << 1U));
            __Vdly__top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__dividend[2U] 
                = ((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__dividend[1U] 
                    >> 0x1fU) | (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__dividend[2U] 
                                 << 1U));
            __Vdly__top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__dividend[3U] 
                = ((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__dividend[2U] 
                    >> 0x1fU) | (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__dividend[3U] 
                                 << 1U));
        }
    }
    if (vlSelf->reset) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__divisor = 0ULL;
    }
    if (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__div_prepare) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__divisor 
            = ((1U & ((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__alu_control_reg_is 
                       >> 0xeU) & (IData)((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__alu_src2 
                                           >> 0x3fU))))
                ? (1ULL + (~ vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__y_adder_src1))
                : vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__alu_src2);
    }
    if (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__stallable_pipeline_test__DOT__pipe1_to_pipe2_valid) 
         & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__stallable_pipeline_test__DOT__pipe2_allow_in))) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__imm_reg_is 
            = vlSelf->top_test__DOT__ysyx_22050533_0__DOT__imm;
    }
    if (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__stallable_pipeline_test__DOT__pipe1_to_pipe2_valid) 
         & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__stallable_pipeline_test__DOT__pipe2_allow_in))) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__src1_reg_is 
            = vlSelf->top_test__DOT__ysyx_22050533_0__DOT__src1;
    }
    if (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__stallable_pipeline_test__DOT__pipe1_to_pipe2_valid) 
         & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__stallable_pipeline_test__DOT__pipe2_allow_in))) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__dnpc_reg_is 
            = vlSelf->top_test__DOT__ysyx_22050533_0__DOT__dnpc_reg_id;
    }
    if (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__stallable_pipeline_test__DOT__pipe2_to_pipe3_valid) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__sel_rf_res_reg_wb 
            = vlSelf->top_test__DOT__ysyx_22050533_0__DOT__stallable_pipeline_test__DOT__sel_rf_res_reg_is;
    }
    if (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__stallable_pipeline_test__DOT__pipe2_to_pipe3_valid) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__c_rdata_reg_wb 
            = vlSelf->top_test__DOT__ysyx_22050533_0__DOT__c_rdata_reg_is;
    }
    if (vlSelf->reset) {
        __Vdly__top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__qutient = 0ULL;
    }
    if (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__done) {
        __Vdly__top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__qutient 
            = ((((~ (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__dividend_s)) 
                 & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__divisor_s)) 
                | ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__dividend_s) 
                   & (~ (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__divisor_s))))
                ? (1ULL + (~ vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__y_adder_src1))
                : vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__qutient);
    } else if (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__running_r) {
        __Vdly__top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__qutient 
            = ((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__qutient 
                << 1U) | (QData)((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__sub_cout)));
    }
    if (vlSelf->reset) {
        __Vdly__top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__cache_state = 0U;
    } else if ((((0U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__cache_state)) 
                 & ((0xfffffU & (IData)((vlSelf->cpupc 
                                         >> 0xcU))) 
                    == (0xfffffU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__tagarray
                        [(0x3fU & (IData)((vlSelf->cpupc 
                                           >> 6U)))]))) 
                & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__tagarray
                   [(0x3fU & (IData)((vlSelf->cpupc 
                                      >> 6U)))] >> 0x14U))) {
        __Vdly__top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__cache_state = 3U;
    } else if ((0U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__cache_state))) {
        __Vdly__top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__cache_state = 1U;
    } else if ((1U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__cache_state))) {
        __Vdly__top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__cache_state = 2U;
    } else if (((2U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__cache_state)) 
                & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__rlast_delay))) {
        __Vdly__top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__cache_state = 3U;
    } else if ((((3U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__cache_state)) 
                 & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_reg_finish)) 
                & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__not_jump))) {
        __Vdly__top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__cache_state = 4U;
    } else if ((4U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__cache_state))) {
        __Vdly__top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__cache_state = 0U;
    } else if ((((3U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__cache_state)) 
                 & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_reg_finish)) 
                & (~ (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__not_jump)))) {
        __Vdly__top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__cache_state = 5U;
    } else if (((5U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__cache_state)) 
                & (vlSelf->cpupc == vlSelf->top_test__DOT__ysyx_22050533_0__DOT__cpupc_reg_is))) {
        __Vdly__top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__cache_state = 4U;
    }
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ebreak_finish 
        = (1U & ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__e_j_b_inst_reg_wb)));
    if (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__stallable_pipeline_test__DOT__pipe2_to_pipe3_valid) {
        vlSelf->inst_reg_wb = vlSelf->top_test__DOT__ysyx_22050533_0__DOT__stallable_pipeline_test__DOT__inst_reg_is;
    }
    if (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_arbiter_1__DOT__awvalid) 
         & (0U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_axi_full_s2_0__DOT__write_state)))) {
        __Vdly__top_test__DOT__ysyx_22050533_axi_full_s2_0__DOT__r_awaddr 
            = ((2U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_arbiter_1__DOT__master_state))
                ? ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__use_cache)
                    ? ((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__tagarray
                        [(0x3fU & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__araddr 
                                   >> 6U))] << 0xcU) 
                       | (0xfc0U & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__araddr))
                    : (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result))
                : 0U);
    }
    if ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_arbiter_1__DOT__wvalid) 
          & (IData)(vlSelf->top_test__DOT__io_master_wready)) 
         & (1U == ((2U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_arbiter_1__DOT__master_state))
                    ? 1U : 0U)))) {
        Vtop_test___024root____Vdpiimwrap_top_test__DOT__ysyx_22050533_axi_full_s2_0__DOT__vpmem_write_TOP((QData)((IData)(vlSelf->top_test__DOT__ysyx_22050533_axi_full_s2_0__DOT__r_awaddr)), 
                                                                                ((2U 
                                                                                == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_arbiter_1__DOT__master_state))
                                                                                 ? 
                                                                                ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__use_cache)
                                                                                 ? vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__r_wdata
                                                                                 : vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_mem_read_write_0__DOT__wdata)
                                                                                 : 0ULL), 
                                                                                ((2U 
                                                                                == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_arbiter_1__DOT__master_state))
                                                                                 ? 
                                                                                ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__use_cache)
                                                                                 ? 0xffU
                                                                                 : 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__wmask_reg_is)))
                                                                                 : 0U), 1ULL);
        __Vdly__top_test__DOT__ysyx_22050533_axi_full_s2_0__DOT__r_awaddr 
            = ((IData)(8U) + vlSelf->top_test__DOT__ysyx_22050533_axi_full_s2_0__DOT__r_awaddr);
    }
    if (vlSelf->reset) {
        __Vdlyvset__top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__r0__DOT__csr__v0 = 1U;
    }
    if (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__csrrw) 
         | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__csrrs))) {
        __Vdlyvval__top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__r0__DOT__csr__v3 
            = vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__c_wdata;
        __Vdlyvset__top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__r0__DOT__csr__v3 = 1U;
        __Vdlyvdim0__top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__r0__DOT__csr__v3 
            = vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__c_raddr;
    }
    if ((2U & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__e_j_b_inst_reg_id))) {
        __Vdlyvset__top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__r0__DOT__csr__v4 = 1U;
        __Vdlyvval__top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__r0__DOT__csr__v5 
            = vlSelf->top_test__DOT__ysyx_22050533_0__DOT__cpupc_reg_id;
    }
    if (vlSelf->reset) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__buzy = 0U;
    }
    if ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__stallable_pipeline_test__DOT__pipe1_to_pipe2_valid) 
          & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__stallable_pipeline_test__DOT__pipe2_allow_in)) 
         & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__rf_wen))) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__buzy 
            = (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__buzy 
               | (0xffffffffULL & ((IData)(1U) << (0x1fU 
                                                   & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                                      >> 7U)))));
    }
    if (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__pipe3_valid) 
         & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__rf_wen_reg_wb))) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__buzy 
            = ((~ ((IData)(1U) << (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__rd_reg_wb))) 
               & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__buzy);
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        vlSelf->cpupc_reg_finish = ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__stallable_pipeline_test__DOT__not_jump_reg_wb)
                                     ? (4ULL + vlSelf->cpupc_reg_wb)
                                     : vlSelf->dnpc_reg_wb);
    }
    if (vlSelf->reset) {
        __Vdlyvset__top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__r0__DOT__rf__v0 = 1U;
    }
    if (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__rf_wen_reg_wb) 
         & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__pipe3_valid))) {
        __Vdlyvval__top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__r0__DOT__rf__v32 
            = vlSelf->top_test__DOT__ysyx_22050533_0__DOT__wdata;
        __Vdlyvset__top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__r0__DOT__rf__v32 = 1U;
        __Vdlyvdim0__top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__r0__DOT__rf__v32 
            = vlSelf->top_test__DOT__ysyx_22050533_0__DOT__rd_reg_wb;
    }
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_mem_read_write_0__DOT__d_r_len 
        = __Vdly__top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_mem_read_write_0__DOT__d_r_len;
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__cnt 
        = __Vdly__top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__cnt;
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__count 
        = __Vdly__top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__count;
    vlSelf->top_test__DOT__ysyx_22050533_axi_full_s2_0__DOT__c_arlen 
        = __Vdly__top_test__DOT__ysyx_22050533_axi_full_s2_0__DOT__c_arlen;
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__c_awlen 
        = __Vdly__top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__c_awlen;
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__read_state 
        = __Vdly__top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__read_state;
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_mem_read_write_0__DOT__c_awlen 
        = __Vdly__top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_mem_read_write_0__DOT__c_awlen;
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_mem_read_write_0__DOT__read_state 
        = __Vdly__top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_mem_read_write_0__DOT__read_state;
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
        = __Vdly__top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U];
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
        = __Vdly__top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U];
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
        = __Vdly__top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U];
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
        = __Vdly__top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U];
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[4U] 
        = __Vdly__top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[4U];
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplier_r[0U] 
        = __Vdly__top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplier_r[0U];
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplier_r[1U] 
        = __Vdly__top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplier_r[1U];
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplier_r[2U] 
        = __Vdly__top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplier_r[2U];
    if (__Vdlyvset__top_test__DOT__sram_0__DOT__sram_3__DOT__ram__v0) {
        vlSelf->top_test__DOT__sram_0__DOT__sram_3__DOT__ram[__Vdlyvdim0__top_test__DOT__sram_0__DOT__sram_3__DOT__ram__v0][0U] 
            = __Vdlyvval__top_test__DOT__sram_0__DOT__sram_3__DOT__ram__v0[0U];
        vlSelf->top_test__DOT__sram_0__DOT__sram_3__DOT__ram[__Vdlyvdim0__top_test__DOT__sram_0__DOT__sram_3__DOT__ram__v0][1U] 
            = __Vdlyvval__top_test__DOT__sram_0__DOT__sram_3__DOT__ram__v0[1U];
        vlSelf->top_test__DOT__sram_0__DOT__sram_3__DOT__ram[__Vdlyvdim0__top_test__DOT__sram_0__DOT__sram_3__DOT__ram__v0][2U] 
            = __Vdlyvval__top_test__DOT__sram_0__DOT__sram_3__DOT__ram__v0[2U];
        vlSelf->top_test__DOT__sram_0__DOT__sram_3__DOT__ram[__Vdlyvdim0__top_test__DOT__sram_0__DOT__sram_3__DOT__ram__v0][3U] 
            = __Vdlyvval__top_test__DOT__sram_0__DOT__sram_3__DOT__ram__v0[3U];
    }
    if (__Vdlyvset__top_test__DOT__sram_0__DOT__sram_2__DOT__ram__v0) {
        vlSelf->top_test__DOT__sram_0__DOT__sram_2__DOT__ram[__Vdlyvdim0__top_test__DOT__sram_0__DOT__sram_2__DOT__ram__v0][0U] 
            = __Vdlyvval__top_test__DOT__sram_0__DOT__sram_2__DOT__ram__v0[0U];
        vlSelf->top_test__DOT__sram_0__DOT__sram_2__DOT__ram[__Vdlyvdim0__top_test__DOT__sram_0__DOT__sram_2__DOT__ram__v0][1U] 
            = __Vdlyvval__top_test__DOT__sram_0__DOT__sram_2__DOT__ram__v0[1U];
        vlSelf->top_test__DOT__sram_0__DOT__sram_2__DOT__ram[__Vdlyvdim0__top_test__DOT__sram_0__DOT__sram_2__DOT__ram__v0][2U] 
            = __Vdlyvval__top_test__DOT__sram_0__DOT__sram_2__DOT__ram__v0[2U];
        vlSelf->top_test__DOT__sram_0__DOT__sram_2__DOT__ram[__Vdlyvdim0__top_test__DOT__sram_0__DOT__sram_2__DOT__ram__v0][3U] 
            = __Vdlyvval__top_test__DOT__sram_0__DOT__sram_2__DOT__ram__v0[3U];
    }
    if (__Vdlyvset__top_test__DOT__sram_0__DOT__sram_1__DOT__ram__v0) {
        vlSelf->top_test__DOT__sram_0__DOT__sram_1__DOT__ram[__Vdlyvdim0__top_test__DOT__sram_0__DOT__sram_1__DOT__ram__v0][0U] 
            = __Vdlyvval__top_test__DOT__sram_0__DOT__sram_1__DOT__ram__v0[0U];
        vlSelf->top_test__DOT__sram_0__DOT__sram_1__DOT__ram[__Vdlyvdim0__top_test__DOT__sram_0__DOT__sram_1__DOT__ram__v0][1U] 
            = __Vdlyvval__top_test__DOT__sram_0__DOT__sram_1__DOT__ram__v0[1U];
        vlSelf->top_test__DOT__sram_0__DOT__sram_1__DOT__ram[__Vdlyvdim0__top_test__DOT__sram_0__DOT__sram_1__DOT__ram__v0][2U] 
            = __Vdlyvval__top_test__DOT__sram_0__DOT__sram_1__DOT__ram__v0[2U];
        vlSelf->top_test__DOT__sram_0__DOT__sram_1__DOT__ram[__Vdlyvdim0__top_test__DOT__sram_0__DOT__sram_1__DOT__ram__v0][3U] 
            = __Vdlyvval__top_test__DOT__sram_0__DOT__sram_1__DOT__ram__v0[3U];
    }
    if (__Vdlyvset__top_test__DOT__sram_0__DOT__sram_0__DOT__ram__v0) {
        vlSelf->top_test__DOT__sram_0__DOT__sram_0__DOT__ram[__Vdlyvdim0__top_test__DOT__sram_0__DOT__sram_0__DOT__ram__v0][0U] 
            = __Vdlyvval__top_test__DOT__sram_0__DOT__sram_0__DOT__ram__v0[0U];
        vlSelf->top_test__DOT__sram_0__DOT__sram_0__DOT__ram[__Vdlyvdim0__top_test__DOT__sram_0__DOT__sram_0__DOT__ram__v0][1U] 
            = __Vdlyvval__top_test__DOT__sram_0__DOT__sram_0__DOT__ram__v0[1U];
        vlSelf->top_test__DOT__sram_0__DOT__sram_0__DOT__ram[__Vdlyvdim0__top_test__DOT__sram_0__DOT__sram_0__DOT__ram__v0][2U] 
            = __Vdlyvval__top_test__DOT__sram_0__DOT__sram_0__DOT__ram__v0[2U];
        vlSelf->top_test__DOT__sram_0__DOT__sram_0__DOT__ram[__Vdlyvdim0__top_test__DOT__sram_0__DOT__sram_0__DOT__ram__v0][3U] 
            = __Vdlyvval__top_test__DOT__sram_0__DOT__sram_0__DOT__ram__v0[3U];
    }
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__d_len 
        = __Vdly__top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__d_len;
    vlSelf->top_test__DOT__ysyx_22050533_axi_full_s2_0__DOT__state 
        = __Vdly__top_test__DOT__ysyx_22050533_axi_full_s2_0__DOT__state;
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__write_state 
        = __Vdly__top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__write_state;
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__dividend[0U] 
        = __Vdly__top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__dividend[0U];
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__dividend[1U] 
        = __Vdly__top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__dividend[1U];
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__dividend[2U] 
        = __Vdly__top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__dividend[2U];
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__dividend[3U] 
        = __Vdly__top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__dividend[3U];
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__qutient 
        = __Vdly__top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__qutient;
    if (__Vdlyvset__top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__tagarray__v0) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__tagarray[__Vdlyvdim0__top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__tagarray__v0] 
            = (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__tagarray
               [__Vdlyvdim0__top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__tagarray__v0] 
               | (0x1fffffU & ((IData)(1U) << (IData)(__Vdlyvlsb__top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__tagarray__v0))));
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__tagarray[__Vdlyvdim0__top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__tagarray__v1] 
            = (((~ ((IData)(0xfffffU) << (IData)(__Vdlyvlsb__top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__tagarray__v1))) 
                & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__tagarray
                [__Vdlyvdim0__top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__tagarray__v1]) 
               | (0x1fffffU & (__Vdlyvval__top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__tagarray__v1 
                               << (IData)(__Vdlyvlsb__top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__tagarray__v1))));
    }
    if (__Vdlyvset__top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__tagarray__v2) {
        __Vilp = 0U;
        while ((__Vilp <= 0x3fU)) {
            vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__tagarray[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__cache_state 
        = __Vdly__top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__cache_state;
    if (__Vdlyvset__top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__tagarray__v0) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__tagarray[__Vdlyvdim0__top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__tagarray__v0] 
            = ((~ ((IData)(1U) << (IData)(__Vdlyvlsb__top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__tagarray__v0))) 
               & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__tagarray
               [__Vdlyvdim0__top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__tagarray__v0]);
    }
    if (__Vdlyvset__top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__tagarray__v1) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__tagarray[__Vdlyvdim0__top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__tagarray__v1] 
            = (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__tagarray
               [__Vdlyvdim0__top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__tagarray__v1] 
               | (0x3fffffU & ((IData)(1U) << (IData)(__Vdlyvlsb__top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__tagarray__v1))));
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__tagarray[__Vdlyvdim0__top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__tagarray__v2] 
            = (((~ ((IData)(0xfffffU) << (IData)(__Vdlyvlsb__top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__tagarray__v2))) 
                & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__tagarray
                [__Vdlyvdim0__top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__tagarray__v2]) 
               | (0x3fffffU & (__Vdlyvval__top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__tagarray__v2 
                               << (IData)(__Vdlyvlsb__top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__tagarray__v2))));
    }
    if (__Vdlyvset__top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__tagarray__v3) {
        __Vilp = 0U;
        while ((__Vilp <= 0x3fU)) {
            vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__tagarray[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
    if (__Vdlyvset__top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__tagarray__v67) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__tagarray[__Vdlyvdim0__top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__tagarray__v67] 
            = (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__tagarray
               [__Vdlyvdim0__top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__tagarray__v67] 
               | (0x3fffffU & ((IData)(1U) << (IData)(__Vdlyvlsb__top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__tagarray__v67))));
    }
    if (__Vdlyvset__top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__tagarray__v68) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__tagarray[__Vdlyvdim0__top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__tagarray__v68] 
            = ((~ ((IData)(1U) << (IData)(__Vdlyvlsb__top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__tagarray__v68))) 
               & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__tagarray
               [__Vdlyvdim0__top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__tagarray__v68]);
    }
    vlSelf->top_test__DOT__ysyx_22050533_axi_full_s2_0__DOT__write_state 
        = __Vdly__top_test__DOT__ysyx_22050533_axi_full_s2_0__DOT__write_state;
    vlSelf->top_test__DOT__ysyx_22050533_axi_full_s2_0__DOT__r_awaddr 
        = __Vdly__top_test__DOT__ysyx_22050533_axi_full_s2_0__DOT__r_awaddr;
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_arbiter_1__DOT__master_state 
        = __Vdly__top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_arbiter_1__DOT__master_state;
    if (__Vdlyvset__top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__r0__DOT__csr__v0) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__r0__DOT__csr[1U] = 0ULL;
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__r0__DOT__csr[2U] = 0ULL;
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__r0__DOT__csr[0U] = 0xa00001800ULL;
    }
    if (__Vdlyvset__top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__r0__DOT__csr__v3) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__r0__DOT__csr[__Vdlyvdim0__top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__r0__DOT__csr__v3] 
            = __Vdlyvval__top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__r0__DOT__csr__v3;
    }
    if (__Vdlyvset__top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__r0__DOT__csr__v4) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__r0__DOT__csr[3U] = 0xbULL;
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__r0__DOT__csr[2U] 
            = __Vdlyvval__top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__r0__DOT__csr__v5;
    }
    if (vlSelf->reset) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__mul_ready = 1U;
    } else if (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__mul_prepare) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__mul_ready = 0U;
    } else if (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__mul_out_valid) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__mul_ready = 1U;
    }
    if (((IData)(vlSelf->reset) | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__div_out_valid))) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__div_ready = 1U;
    } else if (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__div_prepare) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__div_ready = 0U;
    }
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__rready 
        = ((1U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__state)) 
           | (2U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__state)));
    if (vlSelf->reset) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__tmp_result[0U] = 0U;
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__tmp_result[1U] = 0U;
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__tmp_result[2U] = 0U;
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__tmp_result[3U] = 0U;
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__tmp_result[4U] = 0U;
    } else if (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__mul_prepare) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__tmp_result[0U] = 0U;
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__tmp_result[1U] = 0U;
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__tmp_result[2U] = 0U;
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__tmp_result[3U] = 0U;
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__tmp_result[4U] = 0U;
    } else if (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__running_r) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__tmp_result[0U] 
            = vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__adder_result[0U];
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__tmp_result[1U] 
            = vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__adder_result[1U];
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__tmp_result[2U] 
            = vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__adder_result[2U];
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__tmp_result[3U] 
            = vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__adder_result[3U];
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__tmp_result[4U] 
            = vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__adder_result[4U];
    }
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__wlast 
        = (8U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__c_awlen));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_mem_read_write_0__DOT__wlast 
        = (1U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_mem_read_write_0__DOT__c_awlen));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_mem_read_write_0__DOT__rready 
        = ((1U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_mem_read_write_0__DOT__read_state)) 
           | (2U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_mem_read_write_0__DOT__read_state)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel 
        = ((8U & ((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplier_r[0U] 
                   << 1U) & ((0xfffffff8U & ((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplier_r[0U] 
                                              << 2U) 
                                             & ((~ 
                                                 vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplier_r[0U]) 
                                                << 3U))) 
                             | (((~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplier_r[0U] 
                                     >> 1U)) & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplier_r[0U]) 
                                << 3U)))) | ((4U & 
                                              (((~ 
                                                 (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplier_r[0U] 
                                                  >> 2U)) 
                                                << 2U) 
                                               & ((0xfffffffcU 
                                                   & ((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplier_r[0U] 
                                                       << 1U) 
                                                      & ((~ 
                                                          vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplier_r[0U]) 
                                                         << 2U))) 
                                                  | (((~ 
                                                       (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplier_r[0U] 
                                                        >> 1U)) 
                                                      & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplier_r[0U]) 
                                                     << 2U)))) 
                                             | ((2U 
                                                 & (((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplier_r[0U] 
                                                      >> 1U) 
                                                     & ((~ 
                                                         (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplier_r[0U] 
                                                          >> 1U)) 
                                                        << 1U)) 
                                                    & ((~ 
                                                        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplier_r[0U]) 
                                                       << 1U))) 
                                                | (1U 
                                                   & (((~ 
                                                        (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplier_r[0U] 
                                                         >> 2U)) 
                                                       & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplier_r[0U] 
                                                          >> 1U)) 
                                                      & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplier_r[0U])))));
    if (vlSelf->reset) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__pipe2_valid = 0U;
    } else if (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__stallable_pipeline_test__DOT__pipe2_allow_in) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__pipe2_valid 
            = vlSelf->top_test__DOT__ysyx_22050533_0__DOT__stallable_pipeline_test__DOT__pipe1_to_pipe2_valid;
    }
    __Vtemp110[0U] = 1U;
    __Vtemp110[1U] = 0U;
    __Vtemp110[2U] = 0U;
    __Vtemp113[0U] = ((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__dividend[2U] 
                       << 1U) | (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__dividend[1U] 
                                 >> 0x1fU));
    __Vtemp113[1U] = ((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__dividend[3U] 
                       << 1U) | (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__dividend[2U] 
                                 >> 0x1fU));
    __Vtemp113[2U] = (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__dividend[3U] 
                      >> 0x1fU);
    VL_EXTEND_WW(66,65, __Vtemp114, __Vtemp113);
    __Vtemp115[0U] = (IData)((~ vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__divisor));
    __Vtemp115[1U] = (IData)(((~ vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__divisor) 
                              >> 0x20U));
    __Vtemp115[2U] = 1U;
    VL_EXTEND_WW(66,65, __Vtemp116, __Vtemp115);
    VL_ADD_W(3, __Vtemp117, __Vtemp114, __Vtemp116);
    VL_ADD_W(3, __Vtemp118, __Vtemp110, __Vtemp117);
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__sub_cout 
        = (1U & (__Vtemp118[2U] >> 1U));
    __Vtemp121[0U] = 1U;
    __Vtemp121[1U] = 0U;
    __Vtemp121[2U] = 0U;
    __Vtemp122[0U] = ((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__dividend[2U] 
                       << 1U) | (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__dividend[1U] 
                                 >> 0x1fU));
    __Vtemp122[1U] = ((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__dividend[3U] 
                       << 1U) | (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__dividend[2U] 
                                 >> 0x1fU));
    __Vtemp122[2U] = (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__dividend[3U] 
                      >> 0x1fU);
    __Vtemp123[0U] = (IData)((~ vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__divisor));
    __Vtemp123[1U] = (IData)(((~ vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__divisor) 
                              >> 0x20U));
    __Vtemp123[2U] = 1U;
    VL_ADD_W(3, __Vtemp124, __Vtemp122, __Vtemp123);
    VL_ADD_W(3, __Vtemp125, __Vtemp121, __Vtemp124);
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__sub_result[0U] 
        = __Vtemp125[0U];
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__sub_result[1U] 
        = __Vtemp125[1U];
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__sub_result[2U] 
        = (1U & __Vtemp125[2U]);
    if (((IData)(vlSelf->inst_update) & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__stallable_pipeline_test__DOT__pipe1_allow_in))) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__dnpc_reg_id 
            = vlSelf->dnpc;
    }
    if (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__stallable_pipeline_test__DOT__pipe1_to_pipe2_valid) 
         & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__stallable_pipeline_test__DOT__pipe2_allow_in))) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__stallable_pipeline_test__DOT__sel_rf_res_reg_is 
            = ((((((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__ld) 
                     | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__lw)) 
                    | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__lwu)) 
                   | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__lh)) 
                  | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__lhu)) 
                 | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__lb)) 
                | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__lbu))
                ? 2U : (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__csrrw) 
                         | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__csrrs))
                         ? 4U : 1U));
    }
    if (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__stallable_pipeline_test__DOT__pipe1_to_pipe2_valid) 
         & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__stallable_pipeline_test__DOT__pipe2_allow_in))) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__c_rdata_reg_is 
            = vlSelf->top_test__DOT__ysyx_22050533_0__DOT__c_rdata;
    }
    if (((IData)(vlSelf->reset) | (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__done))) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__running_r = 0U;
    } else if (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__div_prepare) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__running_r = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__dividend_s = 0U;
    } else if (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__div_prepare) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__dividend_s 
            = (1U & ((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__alu_control_reg_is 
                      >> 0xeU) & (IData)((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__alu_src1 
                                          >> 0x3fU))));
    }
    if (vlSelf->reset) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__divisor_s = 0U;
    } else if (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__div_prepare) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__divisor_s 
            = (1U & ((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__alu_control_reg_is 
                      >> 0xeU) & (IData)((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__alu_src2 
                                          >> 0x3fU))));
    }
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__arvalid 
        = ((0U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__state)) 
           & (2U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__cache_state)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__rlast_delay 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__rlast1));
    vlSelf->ebreak = vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ebreak_finish;
    if (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__stallable_pipeline_test__DOT__pipe2_to_pipe3_valid) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__e_j_b_inst_reg_wb 
            = vlSelf->top_test__DOT__ysyx_22050533_0__DOT__e_j_b_inst_reg_is;
    }
    if (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__stallable_pipeline_test__DOT__pipe1_to_pipe2_valid) 
         & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__stallable_pipeline_test__DOT__pipe2_allow_in))) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__stallable_pipeline_test__DOT__inst_reg_is 
            = vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id;
    }
    vlSelf->top_test__DOT__io_master_wready = ((1U 
                                                == (IData)(vlSelf->top_test__DOT__ysyx_22050533_axi_full_s2_0__DOT__write_state)) 
                                               | (2U 
                                                  == (IData)(vlSelf->top_test__DOT__ysyx_22050533_axi_full_s2_0__DOT__write_state)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_arbiter_1__DOT__arburst 
        = ((1U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_arbiter_1__DOT__master_state))
            ? 1U : ((2U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_arbiter_1__DOT__master_state))
                     ? 1U : 0U));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__arready2 
        = ((2U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_arbiter_1__DOT__master_state))
            ? (IData)((0U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_axi_full_s2_0__DOT__state)))
            : 0U);
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__rdata1 
        = ((1U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_arbiter_1__DOT__master_state))
            ? vlSelf->top_test__DOT__io_master_rdata
            : 0ULL);
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__rresp2 
        = ((2U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_arbiter_1__DOT__master_state))
            ? (3U & (IData)(vlSelf->top_test__DOT__io_master_rresp))
            : 0U);
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__rvalid1 
        = ((1U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_arbiter_1__DOT__master_state))
            ? (1U & (IData)(vlSelf->top_test__DOT__io_master_rvalid))
            : 0U);
    if ((2U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_arbiter_1__DOT__master_state))) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__awready2 
            = (IData)((0U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_axi_full_s2_0__DOT__write_state)));
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__bresp2 
            = (3U & (IData)(vlSelf->top_test__DOT__io_master_bresp));
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__bvalid2 
            = (IData)((2U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_axi_full_s2_0__DOT__write_state)));
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__rdata2 
            = vlSelf->top_test__DOT__io_master_rdata;
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__rvalid2 
            = (1U & (IData)(vlSelf->top_test__DOT__io_master_rvalid));
    } else {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__awready2 = 0U;
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__bresp2 = 0U;
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__bvalid2 = 0U;
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__rdata2 = 0ULL;
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__rvalid2 = 0U;
    }
    if (vlSelf->reset) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__r_wdata = 0ULL;
    } else if (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__wready2_0) {
        if ((0U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_w_len))) {
            vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__r_wdata 
                = (((QData)((IData)(vlSelf->top_test__DOT__io_sram4_rdata[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->top_test__DOT__io_sram4_rdata[0U])));
        } else if ((1U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_w_len))) {
            vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__r_wdata 
                = (((QData)((IData)(vlSelf->top_test__DOT__io_sram4_rdata[3U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->top_test__DOT__io_sram4_rdata[2U])));
        } else if ((2U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_w_len))) {
            vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__r_wdata 
                = (((QData)((IData)(vlSelf->top_test__DOT__io_sram5_rdata[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->top_test__DOT__io_sram5_rdata[0U])));
        } else if ((3U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_w_len))) {
            vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__r_wdata 
                = (((QData)((IData)(vlSelf->top_test__DOT__io_sram5_rdata[3U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->top_test__DOT__io_sram5_rdata[2U])));
        } else if ((4U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_w_len))) {
            vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__r_wdata 
                = (((QData)((IData)(vlSelf->top_test__DOT__io_sram6_rdata[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->top_test__DOT__io_sram6_rdata[0U])));
        } else if ((5U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_w_len))) {
            vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__r_wdata 
                = (((QData)((IData)(vlSelf->top_test__DOT__io_sram6_rdata[3U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->top_test__DOT__io_sram6_rdata[2U])));
        } else if ((6U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_w_len))) {
            vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__r_wdata 
                = (((QData)((IData)(vlSelf->top_test__DOT__io_sram7_rdata[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->top_test__DOT__io_sram7_rdata[0U])));
        } else if ((7U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_w_len))) {
            vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__r_wdata 
                = (((QData)((IData)(vlSelf->top_test__DOT__io_sram7_rdata[3U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->top_test__DOT__io_sram7_rdata[2U])));
        }
    }
    if (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__stallable_pipeline_test__DOT__pipe1_to_pipe2_valid) 
         & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__stallable_pipeline_test__DOT__pipe2_allow_in))) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__wmask_reg_is 
            = ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__sb)
                ? 1U : ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__sh)
                         ? 3U : ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__sw)
                                  ? 0xfU : ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__sd)
                                             ? 0xffU
                                             : 0U))));
    }
    if (vlSelf->reset) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_mem_read_write_0__DOT__wdata = 0ULL;
    }
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_mem_read_write_0__DOT__wdata 
        = ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__wready2_1)
            ? vlSelf->top_test__DOT__ysyx_22050533_0__DOT__src2_reg_is
            : 0xffffffffULL);
    if (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__stallable_pipeline_test__DOT__pipe2_to_pipe3_valid) {
        vlSelf->dnpc_reg_wb = vlSelf->top_test__DOT__ysyx_22050533_0__DOT__dnpc_jump_data;
    }
    if (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__stallable_pipeline_test__DOT__pipe2_to_pipe3_valid) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__stallable_pipeline_test__DOT__not_jump_reg_wb 
            = vlSelf->top_test__DOT__ysyx_22050533_0__DOT__stallable_pipeline_test__DOT__not_jump_reg_is;
    }
    if (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__stallable_pipeline_test__DOT__pipe2_to_pipe3_valid) {
        vlSelf->cpupc_reg_wb = vlSelf->top_test__DOT__ysyx_22050533_0__DOT__cpupc_reg_is;
    }
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__pipe3_valid 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__stallable_pipeline_test__DOT__pipe2_to_pipe3_valid));
    if (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__stallable_pipeline_test__DOT__pipe2_to_pipe3_valid) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__rf_wen_reg_wb 
            = vlSelf->top_test__DOT__ysyx_22050533_0__DOT__stallable_pipeline_test__DOT__rf_wen_reg_is;
    }
    if (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__stallable_pipeline_test__DOT__pipe2_to_pipe3_valid) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__rd_reg_wb 
            = vlSelf->top_test__DOT__ysyx_22050533_0__DOT__stallable_pipeline_test__DOT__rd_reg_is;
    }
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__mul_out_valid 
        = __Vdly__top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__mul_out_valid;
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__div_out_valid 
        = __Vdly__top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__div_out_valid;
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial_cout 
        = (IData)((0U != (0xaU & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel))));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[0U] 
        = ((0xfffffffeU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[0U]) 
           | (1U & (~ (((~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                             >> 3U) & (~ vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U]))) 
                        & (~ ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                              >> 1U))) & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                              >> 2U) 
                                             & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U]))))));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[0U] 
        = ((0xfffffffdU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[0U]) 
           | (2U & ((~ ((((~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                               >> 3U) & (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                            >> 1U)))) 
                          & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                 >> 1U) & (~ vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U])))) 
                         & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                >> 2U) & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                          >> 1U)))) 
                        & (~ ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                              & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U])))) 
                    << 1U)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[0U] 
        = ((0xfffffffbU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[0U]) 
           | (4U & ((~ ((((~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                               >> 3U) & (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                            >> 2U)))) 
                          & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                 >> 1U) & (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                              >> 1U))))) 
                         & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U]) 
                               >> 2U))) & (~ ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                              & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                 >> 1U))))) 
                    << 2U)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[0U] 
        = ((0xfffffff7U & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[0U]) 
           | (8U & ((~ ((((~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                               >> 3U) & (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                            >> 3U)))) 
                          & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                 >> 1U) & (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                              >> 2U))))) 
                         & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                >> 2U) & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                          >> 3U)))) 
                        & (~ ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                              & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                 >> 2U))))) << 3U)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[0U] 
        = ((0xffffffefU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[0U]) 
           | (0x10U & ((~ ((((~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                  >> 3U) & (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                               >> 4U)))) 
                             & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                    >> 1U) & (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                 >> 3U))))) 
                            & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                   >> 2U) & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                             >> 4U)))) 
                           & (~ ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                 & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                    >> 3U))))) << 4U)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[0U] 
        = ((0xffffffdfU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[0U]) 
           | (0x20U & ((~ ((((~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                  >> 3U) & (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                               >> 5U)))) 
                             & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                    >> 1U) & (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                 >> 4U))))) 
                            & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                   >> 2U) & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                             >> 5U)))) 
                           & (~ ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                 & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                    >> 4U))))) << 5U)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[0U] 
        = ((0xffffffbfU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[0U]) 
           | (0x40U & ((~ ((((~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                  >> 3U) & (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                               >> 6U)))) 
                             & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                    >> 1U) & (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                 >> 5U))))) 
                            & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                   >> 2U) & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                             >> 6U)))) 
                           & (~ ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                 & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                    >> 5U))))) << 6U)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[0U] 
        = ((0xffffff7fU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[0U]) 
           | (0x80U & ((~ ((((~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                  >> 3U) & (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                               >> 7U)))) 
                             & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                    >> 1U) & (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                 >> 6U))))) 
                            & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                   >> 2U) & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                             >> 7U)))) 
                           & (~ ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                 & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                    >> 6U))))) << 7U)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[0U] 
        = ((0xfffffeffU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[0U]) 
           | (0x100U & ((~ ((((~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                   >> 3U) & (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                >> 8U)))) 
                              & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                     >> 1U) & (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                  >> 7U))))) 
                             & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                    >> 2U) & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                              >> 8U)))) 
                            & (~ ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                  & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                     >> 7U))))) << 8U)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[0U] 
        = ((0xfffffdffU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[0U]) 
           | (0x200U & ((~ ((((~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                   >> 3U) & (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                >> 9U)))) 
                              & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                     >> 1U) & (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                  >> 8U))))) 
                             & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                    >> 2U) & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                              >> 9U)))) 
                            & (~ ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                  & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                     >> 8U))))) << 9U)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[0U] 
        = ((0xfffffbffU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[0U]) 
           | (0x400U & ((~ ((((~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                   >> 3U) & (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                >> 0xaU)))) 
                              & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                     >> 1U) & (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                  >> 9U))))) 
                             & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                    >> 2U) & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                              >> 0xaU)))) 
                            & (~ ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                  & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                     >> 9U))))) << 0xaU)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[0U] 
        = ((0xfffff7ffU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[0U]) 
           | (0x800U & ((~ ((((~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                   >> 3U) & (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                >> 0xbU)))) 
                              & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                     >> 1U) & (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                  >> 0xaU))))) 
                             & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                    >> 2U) & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                              >> 0xbU)))) 
                            & (~ ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                  & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                     >> 0xaU))))) << 0xbU)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[0U] 
        = ((0xffffefffU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[0U]) 
           | (0x1000U & ((~ ((((~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                    >> 3U) & (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                 >> 0xcU)))) 
                               & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                      >> 1U) & (~ (
                                                   vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                   >> 0xbU))))) 
                              & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                     >> 2U) & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                               >> 0xcU)))) 
                             & (~ ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                   & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                      >> 0xbU))))) 
                         << 0xcU)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[0U] 
        = ((0xffffdfffU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[0U]) 
           | (0x2000U & ((~ ((((~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                    >> 3U) & (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                 >> 0xdU)))) 
                               & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                      >> 1U) & (~ (
                                                   vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                   >> 0xcU))))) 
                              & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                     >> 2U) & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                               >> 0xdU)))) 
                             & (~ ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                   & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                      >> 0xcU))))) 
                         << 0xdU)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[0U] 
        = ((0xffffbfffU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[0U]) 
           | (0x4000U & ((~ ((((~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                    >> 3U) & (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                 >> 0xeU)))) 
                               & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                      >> 1U) & (~ (
                                                   vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                   >> 0xdU))))) 
                              & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                     >> 2U) & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                               >> 0xeU)))) 
                             & (~ ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                   & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                      >> 0xdU))))) 
                         << 0xeU)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[0U] 
        = ((0xffff7fffU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[0U]) 
           | (0x8000U & ((~ ((((~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                    >> 3U) & (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                 >> 0xfU)))) 
                               & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                      >> 1U) & (~ (
                                                   vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                   >> 0xeU))))) 
                              & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                     >> 2U) & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                               >> 0xfU)))) 
                             & (~ ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                   & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                      >> 0xeU))))) 
                         << 0xfU)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[0U] 
        = ((0xfffeffffU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[0U]) 
           | (0x10000U & ((~ ((((~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                     >> 3U) & (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                  >> 0x10U)))) 
                                & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                       >> 1U) & (~ 
                                                 (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                  >> 0xfU))))) 
                               & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                      >> 2U) & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                >> 0x10U)))) 
                              & (~ ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                       >> 0xfU))))) 
                          << 0x10U)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[0U] 
        = ((0xfffdffffU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[0U]) 
           | (0x20000U & ((~ ((((~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                     >> 3U) & (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                  >> 0x11U)))) 
                                & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                       >> 1U) & (~ 
                                                 (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                  >> 0x10U))))) 
                               & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                      >> 2U) & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                >> 0x11U)))) 
                              & (~ ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                       >> 0x10U))))) 
                          << 0x11U)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[0U] 
        = ((0xfffbffffU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[0U]) 
           | (0x40000U & ((~ ((((~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                     >> 3U) & (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                  >> 0x12U)))) 
                                & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                       >> 1U) & (~ 
                                                 (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                  >> 0x11U))))) 
                               & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                      >> 2U) & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                >> 0x12U)))) 
                              & (~ ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                       >> 0x11U))))) 
                          << 0x12U)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[0U] 
        = ((0xfff7ffffU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[0U]) 
           | (0x80000U & ((~ ((((~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                     >> 3U) & (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                  >> 0x13U)))) 
                                & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                       >> 1U) & (~ 
                                                 (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                  >> 0x12U))))) 
                               & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                      >> 2U) & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                >> 0x13U)))) 
                              & (~ ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                       >> 0x12U))))) 
                          << 0x13U)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[0U] 
        = ((0xffefffffU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[0U]) 
           | (0x100000U & ((~ ((((~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                      >> 3U) & (~ (
                                                   vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                   >> 0x14U)))) 
                                 & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                        >> 1U) & (~ 
                                                  (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                   >> 0x13U))))) 
                                & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                       >> 2U) & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                 >> 0x14U)))) 
                               & (~ ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                     & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                        >> 0x13U))))) 
                           << 0x14U)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[0U] 
        = ((0xffdfffffU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[0U]) 
           | (0x200000U & ((~ ((((~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                      >> 3U) & (~ (
                                                   vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                   >> 0x15U)))) 
                                 & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                        >> 1U) & (~ 
                                                  (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                   >> 0x14U))))) 
                                & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                       >> 2U) & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                 >> 0x15U)))) 
                               & (~ ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                     & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                        >> 0x14U))))) 
                           << 0x15U)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[0U] 
        = ((0xffbfffffU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[0U]) 
           | (0x400000U & ((~ ((((~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                      >> 3U) & (~ (
                                                   vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                   >> 0x16U)))) 
                                 & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                        >> 1U) & (~ 
                                                  (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                   >> 0x15U))))) 
                                & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                       >> 2U) & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                 >> 0x16U)))) 
                               & (~ ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                     & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                        >> 0x15U))))) 
                           << 0x16U)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[0U] 
        = ((0xff7fffffU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[0U]) 
           | (0x800000U & ((~ ((((~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                      >> 3U) & (~ (
                                                   vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                   >> 0x17U)))) 
                                 & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                        >> 1U) & (~ 
                                                  (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                   >> 0x16U))))) 
                                & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                       >> 2U) & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                 >> 0x17U)))) 
                               & (~ ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                     & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                        >> 0x16U))))) 
                           << 0x17U)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[0U] 
        = ((0xfeffffffU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[0U]) 
           | (0x1000000U & ((~ ((((~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                       >> 3U) & (~ 
                                                 (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                  >> 0x18U)))) 
                                  & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                         >> 1U) & (~ 
                                                   (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                    >> 0x17U))))) 
                                 & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                        >> 2U) & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                  >> 0x18U)))) 
                                & (~ ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                      & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                         >> 0x17U))))) 
                            << 0x18U)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[0U] 
        = ((0xfdffffffU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[0U]) 
           | (0x2000000U & ((~ ((((~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                       >> 3U) & (~ 
                                                 (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                  >> 0x19U)))) 
                                  & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                         >> 1U) & (~ 
                                                   (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                    >> 0x18U))))) 
                                 & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                        >> 2U) & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                  >> 0x19U)))) 
                                & (~ ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                      & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                         >> 0x18U))))) 
                            << 0x19U)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[0U] 
        = ((0xfbffffffU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[0U]) 
           | (0x4000000U & ((~ ((((~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                       >> 3U) & (~ 
                                                 (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                  >> 0x1aU)))) 
                                  & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                         >> 1U) & (~ 
                                                   (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                    >> 0x19U))))) 
                                 & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                        >> 2U) & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                  >> 0x1aU)))) 
                                & (~ ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                      & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                         >> 0x19U))))) 
                            << 0x1aU)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[0U] 
        = ((0xf7ffffffU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[0U]) 
           | (0x8000000U & ((~ ((((~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                       >> 3U) & (~ 
                                                 (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                  >> 0x1bU)))) 
                                  & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                         >> 1U) & (~ 
                                                   (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                    >> 0x1aU))))) 
                                 & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                        >> 2U) & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                  >> 0x1bU)))) 
                                & (~ ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                      & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                         >> 0x1aU))))) 
                            << 0x1bU)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[0U] 
        = ((0xefffffffU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[0U]) 
           | (0x10000000U & ((~ ((((~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                        >> 3U) & (~ 
                                                  (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                   >> 0x1cU)))) 
                                   & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                          >> 1U) & 
                                         (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                             >> 0x1bU))))) 
                                  & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                         >> 2U) & (
                                                   vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                   >> 0x1cU)))) 
                                 & (~ ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                       & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                          >> 0x1bU))))) 
                             << 0x1cU)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[0U] 
        = ((0xdfffffffU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[0U]) 
           | (0x20000000U & ((~ ((((~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                        >> 3U) & (~ 
                                                  (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                   >> 0x1dU)))) 
                                   & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                          >> 1U) & 
                                         (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                             >> 0x1cU))))) 
                                  & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                         >> 2U) & (
                                                   vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                   >> 0x1dU)))) 
                                 & (~ ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                       & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                          >> 0x1cU))))) 
                             << 0x1dU)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[0U] 
        = ((0xbfffffffU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[0U]) 
           | (0x40000000U & ((~ ((((~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                        >> 3U) & (~ 
                                                  (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                   >> 0x1eU)))) 
                                   & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                          >> 1U) & 
                                         (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                             >> 0x1dU))))) 
                                  & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                         >> 2U) & (
                                                   vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                                   >> 0x1eU)))) 
                                 & (~ ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                       & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                          >> 0x1dU))))) 
                             << 0x1eU)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[0U] 
        = ((0x7fffffffU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[0U]) 
           | ((~ ((((~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                         >> 3U) & (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                      >> 0x1fU)))) 
                    & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                           >> 1U) & (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                        >> 0x1eU))))) 
                   & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                          >> 2U) & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                    >> 0x1fU)))) & 
                  (~ ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                      & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                         >> 0x1eU))))) << 0x1fU));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[1U] 
        = ((0xfffffffeU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[1U]) 
           | (1U & (~ ((((~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                              >> 3U) & (~ vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U]))) 
                         & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                >> 1U) & (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                             >> 0x1fU))))) 
                        & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                               >> 2U) & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U]))) 
                       & (~ ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                             & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[0U] 
                                >> 0x1fU)))))));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[1U] 
        = ((0xfffffffdU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[1U]) 
           | (2U & ((~ ((((~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                               >> 3U) & (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                            >> 1U)))) 
                          & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                 >> 1U) & (~ vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U])))) 
                         & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                >> 2U) & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                          >> 1U)))) 
                        & (~ ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                              & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U])))) 
                    << 1U)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[1U] 
        = ((0xfffffffbU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[1U]) 
           | (4U & ((~ ((((~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                               >> 3U) & (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                            >> 2U)))) 
                          & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                 >> 1U) & (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                              >> 1U))))) 
                         & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U]) 
                               >> 2U))) & (~ ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                              & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                 >> 1U))))) 
                    << 2U)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[1U] 
        = ((0xfffffff7U & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[1U]) 
           | (8U & ((~ ((((~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                               >> 3U) & (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                            >> 3U)))) 
                          & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                 >> 1U) & (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                              >> 2U))))) 
                         & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                >> 2U) & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                          >> 3U)))) 
                        & (~ ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                              & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                 >> 2U))))) << 3U)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[1U] 
        = ((0xffffffefU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[1U]) 
           | (0x10U & ((~ ((((~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                  >> 3U) & (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                               >> 4U)))) 
                             & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                    >> 1U) & (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                 >> 3U))))) 
                            & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                   >> 2U) & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                             >> 4U)))) 
                           & (~ ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                 & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                    >> 3U))))) << 4U)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[1U] 
        = ((0xffffffdfU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[1U]) 
           | (0x20U & ((~ ((((~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                  >> 3U) & (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                               >> 5U)))) 
                             & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                    >> 1U) & (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                 >> 4U))))) 
                            & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                   >> 2U) & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                             >> 5U)))) 
                           & (~ ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                 & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                    >> 4U))))) << 5U)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[1U] 
        = ((0xffffffbfU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[1U]) 
           | (0x40U & ((~ ((((~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                  >> 3U) & (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                               >> 6U)))) 
                             & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                    >> 1U) & (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                 >> 5U))))) 
                            & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                   >> 2U) & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                             >> 6U)))) 
                           & (~ ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                 & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                    >> 5U))))) << 6U)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[1U] 
        = ((0xffffff7fU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[1U]) 
           | (0x80U & ((~ ((((~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                  >> 3U) & (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                               >> 7U)))) 
                             & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                    >> 1U) & (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                 >> 6U))))) 
                            & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                   >> 2U) & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                             >> 7U)))) 
                           & (~ ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                 & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                    >> 6U))))) << 7U)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[1U] 
        = ((0xfffffeffU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[1U]) 
           | (0x100U & ((~ ((((~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                   >> 3U) & (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                >> 8U)))) 
                              & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                     >> 1U) & (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                  >> 7U))))) 
                             & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                    >> 2U) & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                              >> 8U)))) 
                            & (~ ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                  & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                     >> 7U))))) << 8U)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[1U] 
        = ((0xfffffdffU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[1U]) 
           | (0x200U & ((~ ((((~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                   >> 3U) & (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                >> 9U)))) 
                              & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                     >> 1U) & (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                  >> 8U))))) 
                             & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                    >> 2U) & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                              >> 9U)))) 
                            & (~ ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                  & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                     >> 8U))))) << 9U)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[1U] 
        = ((0xfffffbffU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[1U]) 
           | (0x400U & ((~ ((((~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                   >> 3U) & (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                >> 0xaU)))) 
                              & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                     >> 1U) & (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                  >> 9U))))) 
                             & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                    >> 2U) & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                              >> 0xaU)))) 
                            & (~ ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                  & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                     >> 9U))))) << 0xaU)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[1U] 
        = ((0xfffff7ffU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[1U]) 
           | (0x800U & ((~ ((((~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                   >> 3U) & (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                >> 0xbU)))) 
                              & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                     >> 1U) & (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                  >> 0xaU))))) 
                             & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                    >> 2U) & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                              >> 0xbU)))) 
                            & (~ ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                  & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                     >> 0xaU))))) << 0xbU)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[1U] 
        = ((0xffffefffU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[1U]) 
           | (0x1000U & ((~ ((((~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                    >> 3U) & (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                 >> 0xcU)))) 
                               & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                      >> 1U) & (~ (
                                                   vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                   >> 0xbU))))) 
                              & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                     >> 2U) & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                               >> 0xcU)))) 
                             & (~ ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                   & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                      >> 0xbU))))) 
                         << 0xcU)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[1U] 
        = ((0xffffdfffU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[1U]) 
           | (0x2000U & ((~ ((((~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                    >> 3U) & (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                 >> 0xdU)))) 
                               & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                      >> 1U) & (~ (
                                                   vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                   >> 0xcU))))) 
                              & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                     >> 2U) & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                               >> 0xdU)))) 
                             & (~ ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                   & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                      >> 0xcU))))) 
                         << 0xdU)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[1U] 
        = ((0xffffbfffU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[1U]) 
           | (0x4000U & ((~ ((((~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                    >> 3U) & (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                 >> 0xeU)))) 
                               & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                      >> 1U) & (~ (
                                                   vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                   >> 0xdU))))) 
                              & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                     >> 2U) & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                               >> 0xeU)))) 
                             & (~ ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                   & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                      >> 0xdU))))) 
                         << 0xeU)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[1U] 
        = ((0xffff7fffU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[1U]) 
           | (0x8000U & ((~ ((((~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                    >> 3U) & (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                 >> 0xfU)))) 
                               & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                      >> 1U) & (~ (
                                                   vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                   >> 0xeU))))) 
                              & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                     >> 2U) & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                               >> 0xfU)))) 
                             & (~ ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                   & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                      >> 0xeU))))) 
                         << 0xfU)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[1U] 
        = ((0xfffeffffU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[1U]) 
           | (0x10000U & ((~ ((((~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                     >> 3U) & (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                  >> 0x10U)))) 
                                & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                       >> 1U) & (~ 
                                                 (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                  >> 0xfU))))) 
                               & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                      >> 2U) & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                >> 0x10U)))) 
                              & (~ ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                       >> 0xfU))))) 
                          << 0x10U)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[1U] 
        = ((0xfffdffffU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[1U]) 
           | (0x20000U & ((~ ((((~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                     >> 3U) & (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                  >> 0x11U)))) 
                                & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                       >> 1U) & (~ 
                                                 (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                  >> 0x10U))))) 
                               & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                      >> 2U) & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                >> 0x11U)))) 
                              & (~ ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                       >> 0x10U))))) 
                          << 0x11U)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[1U] 
        = ((0xfffbffffU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[1U]) 
           | (0x40000U & ((~ ((((~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                     >> 3U) & (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                  >> 0x12U)))) 
                                & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                       >> 1U) & (~ 
                                                 (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                  >> 0x11U))))) 
                               & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                      >> 2U) & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                >> 0x12U)))) 
                              & (~ ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                       >> 0x11U))))) 
                          << 0x12U)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[1U] 
        = ((0xfff7ffffU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[1U]) 
           | (0x80000U & ((~ ((((~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                     >> 3U) & (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                  >> 0x13U)))) 
                                & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                       >> 1U) & (~ 
                                                 (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                  >> 0x12U))))) 
                               & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                      >> 2U) & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                >> 0x13U)))) 
                              & (~ ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                       >> 0x12U))))) 
                          << 0x13U)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[1U] 
        = ((0xffefffffU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[1U]) 
           | (0x100000U & ((~ ((((~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                      >> 3U) & (~ (
                                                   vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                   >> 0x14U)))) 
                                 & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                        >> 1U) & (~ 
                                                  (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                   >> 0x13U))))) 
                                & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                       >> 2U) & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                 >> 0x14U)))) 
                               & (~ ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                     & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                        >> 0x13U))))) 
                           << 0x14U)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[1U] 
        = ((0xffdfffffU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[1U]) 
           | (0x200000U & ((~ ((((~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                      >> 3U) & (~ (
                                                   vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                   >> 0x15U)))) 
                                 & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                        >> 1U) & (~ 
                                                  (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                   >> 0x14U))))) 
                                & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                       >> 2U) & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                 >> 0x15U)))) 
                               & (~ ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                     & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                        >> 0x14U))))) 
                           << 0x15U)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[1U] 
        = ((0xffbfffffU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[1U]) 
           | (0x400000U & ((~ ((((~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                      >> 3U) & (~ (
                                                   vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                   >> 0x16U)))) 
                                 & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                        >> 1U) & (~ 
                                                  (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                   >> 0x15U))))) 
                                & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                       >> 2U) & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                 >> 0x16U)))) 
                               & (~ ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                     & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                        >> 0x15U))))) 
                           << 0x16U)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[1U] 
        = ((0xff7fffffU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[1U]) 
           | (0x800000U & ((~ ((((~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                      >> 3U) & (~ (
                                                   vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                   >> 0x17U)))) 
                                 & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                        >> 1U) & (~ 
                                                  (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                   >> 0x16U))))) 
                                & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                       >> 2U) & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                 >> 0x17U)))) 
                               & (~ ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                     & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                        >> 0x16U))))) 
                           << 0x17U)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[1U] 
        = ((0xfeffffffU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[1U]) 
           | (0x1000000U & ((~ ((((~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                       >> 3U) & (~ 
                                                 (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                  >> 0x18U)))) 
                                  & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                         >> 1U) & (~ 
                                                   (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                    >> 0x17U))))) 
                                 & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                        >> 2U) & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                  >> 0x18U)))) 
                                & (~ ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                      & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                         >> 0x17U))))) 
                            << 0x18U)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[1U] 
        = ((0xfdffffffU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[1U]) 
           | (0x2000000U & ((~ ((((~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                       >> 3U) & (~ 
                                                 (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                  >> 0x19U)))) 
                                  & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                         >> 1U) & (~ 
                                                   (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                    >> 0x18U))))) 
                                 & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                        >> 2U) & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                  >> 0x19U)))) 
                                & (~ ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                      & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                         >> 0x18U))))) 
                            << 0x19U)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[1U] 
        = ((0xfbffffffU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[1U]) 
           | (0x4000000U & ((~ ((((~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                       >> 3U) & (~ 
                                                 (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                  >> 0x1aU)))) 
                                  & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                         >> 1U) & (~ 
                                                   (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                    >> 0x19U))))) 
                                 & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                        >> 2U) & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                  >> 0x1aU)))) 
                                & (~ ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                      & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                         >> 0x19U))))) 
                            << 0x1aU)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[1U] 
        = ((0xf7ffffffU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[1U]) 
           | (0x8000000U & ((~ ((((~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                       >> 3U) & (~ 
                                                 (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                  >> 0x1bU)))) 
                                  & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                         >> 1U) & (~ 
                                                   (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                    >> 0x1aU))))) 
                                 & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                        >> 2U) & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                  >> 0x1bU)))) 
                                & (~ ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                      & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                         >> 0x1aU))))) 
                            << 0x1bU)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[1U] 
        = ((0xefffffffU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[1U]) 
           | (0x10000000U & ((~ ((((~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                        >> 3U) & (~ 
                                                  (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                   >> 0x1cU)))) 
                                   & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                          >> 1U) & 
                                         (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                             >> 0x1bU))))) 
                                  & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                         >> 2U) & (
                                                   vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                   >> 0x1cU)))) 
                                 & (~ ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                       & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                          >> 0x1bU))))) 
                             << 0x1cU)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[1U] 
        = ((0xdfffffffU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[1U]) 
           | (0x20000000U & ((~ ((((~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                        >> 3U) & (~ 
                                                  (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                   >> 0x1dU)))) 
                                   & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                          >> 1U) & 
                                         (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                             >> 0x1cU))))) 
                                  & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                         >> 2U) & (
                                                   vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                   >> 0x1dU)))) 
                                 & (~ ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                       & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                          >> 0x1cU))))) 
                             << 0x1dU)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[1U] 
        = ((0xbfffffffU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[1U]) 
           | (0x40000000U & ((~ ((((~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                        >> 3U) & (~ 
                                                  (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                   >> 0x1eU)))) 
                                   & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                          >> 1U) & 
                                         (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                             >> 0x1dU))))) 
                                  & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                         >> 2U) & (
                                                   vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                                   >> 0x1eU)))) 
                                 & (~ ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                       & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                          >> 0x1dU))))) 
                             << 0x1eU)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[1U] 
        = ((0x7fffffffU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[1U]) 
           | ((~ ((((~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                         >> 3U) & (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                      >> 0x1fU)))) 
                    & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                           >> 1U) & (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                        >> 0x1eU))))) 
                   & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                          >> 2U) & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                    >> 0x1fU)))) & 
                  (~ ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                      & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                         >> 0x1eU))))) << 0x1fU));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[2U] 
        = ((0xfffffffeU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[2U]) 
           | (1U & (~ ((((~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                              >> 3U) & (~ vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U]))) 
                         & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                >> 1U) & (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                             >> 0x1fU))))) 
                        & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                               >> 2U) & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U]))) 
                       & (~ ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                             & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[1U] 
                                >> 0x1fU)))))));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[2U] 
        = ((0xfffffffdU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[2U]) 
           | (2U & ((~ ((((~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                               >> 3U) & (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                            >> 1U)))) 
                          & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                 >> 1U) & (~ vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U])))) 
                         & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                >> 2U) & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                          >> 1U)))) 
                        & (~ ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                              & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U])))) 
                    << 1U)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[2U] 
        = ((0xfffffffbU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[2U]) 
           | (4U & ((~ ((((~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                               >> 3U) & (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                            >> 2U)))) 
                          & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                 >> 1U) & (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                              >> 1U))))) 
                         & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U]) 
                               >> 2U))) & (~ ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                              & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                 >> 1U))))) 
                    << 2U)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[2U] 
        = ((0xfffffff7U & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[2U]) 
           | (8U & ((~ ((((~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                               >> 3U) & (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                            >> 3U)))) 
                          & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                 >> 1U) & (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                              >> 2U))))) 
                         & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                >> 2U) & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                          >> 3U)))) 
                        & (~ ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                              & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                 >> 2U))))) << 3U)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[2U] 
        = ((0xffffffefU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[2U]) 
           | (0x10U & ((~ ((((~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                  >> 3U) & (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                               >> 4U)))) 
                             & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                    >> 1U) & (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                 >> 3U))))) 
                            & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                   >> 2U) & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                             >> 4U)))) 
                           & (~ ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                 & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                    >> 3U))))) << 4U)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[2U] 
        = ((0xffffffdfU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[2U]) 
           | (0x20U & ((~ ((((~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                  >> 3U) & (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                               >> 5U)))) 
                             & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                    >> 1U) & (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                 >> 4U))))) 
                            & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                   >> 2U) & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                             >> 5U)))) 
                           & (~ ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                 & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                    >> 4U))))) << 5U)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[2U] 
        = ((0xffffffbfU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[2U]) 
           | (0x40U & ((~ ((((~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                  >> 3U) & (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                               >> 6U)))) 
                             & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                    >> 1U) & (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                 >> 5U))))) 
                            & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                   >> 2U) & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                             >> 6U)))) 
                           & (~ ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                 & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                    >> 5U))))) << 6U)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[2U] 
        = ((0xffffff7fU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[2U]) 
           | (0x80U & ((~ ((((~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                  >> 3U) & (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                               >> 7U)))) 
                             & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                    >> 1U) & (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                 >> 6U))))) 
                            & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                   >> 2U) & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                             >> 7U)))) 
                           & (~ ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                 & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                    >> 6U))))) << 7U)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[2U] 
        = ((0xfffffeffU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[2U]) 
           | (0x100U & ((~ ((((~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                   >> 3U) & (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                >> 8U)))) 
                              & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                     >> 1U) & (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                  >> 7U))))) 
                             & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                    >> 2U) & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                              >> 8U)))) 
                            & (~ ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                  & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                     >> 7U))))) << 8U)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[2U] 
        = ((0xfffffdffU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[2U]) 
           | (0x200U & ((~ ((((~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                   >> 3U) & (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                >> 9U)))) 
                              & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                     >> 1U) & (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                  >> 8U))))) 
                             & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                    >> 2U) & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                              >> 9U)))) 
                            & (~ ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                  & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                     >> 8U))))) << 9U)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[2U] 
        = ((0xfffffbffU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[2U]) 
           | (0x400U & ((~ ((((~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                   >> 3U) & (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                >> 0xaU)))) 
                              & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                     >> 1U) & (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                  >> 9U))))) 
                             & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                    >> 2U) & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                              >> 0xaU)))) 
                            & (~ ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                  & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                     >> 9U))))) << 0xaU)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[2U] 
        = ((0xfffff7ffU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[2U]) 
           | (0x800U & ((~ ((((~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                   >> 3U) & (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                >> 0xbU)))) 
                              & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                     >> 1U) & (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                  >> 0xaU))))) 
                             & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                    >> 2U) & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                              >> 0xbU)))) 
                            & (~ ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                  & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                     >> 0xaU))))) << 0xbU)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[2U] 
        = ((0xffffefffU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[2U]) 
           | (0x1000U & ((~ ((((~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                    >> 3U) & (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                 >> 0xcU)))) 
                               & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                      >> 1U) & (~ (
                                                   vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                   >> 0xbU))))) 
                              & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                     >> 2U) & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                               >> 0xcU)))) 
                             & (~ ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                   & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                      >> 0xbU))))) 
                         << 0xcU)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[2U] 
        = ((0xffffdfffU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[2U]) 
           | (0x2000U & ((~ ((((~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                    >> 3U) & (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                 >> 0xdU)))) 
                               & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                      >> 1U) & (~ (
                                                   vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                   >> 0xcU))))) 
                              & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                     >> 2U) & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                               >> 0xdU)))) 
                             & (~ ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                   & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                      >> 0xcU))))) 
                         << 0xdU)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[2U] 
        = ((0xffffbfffU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[2U]) 
           | (0x4000U & ((~ ((((~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                    >> 3U) & (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                 >> 0xeU)))) 
                               & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                      >> 1U) & (~ (
                                                   vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                   >> 0xdU))))) 
                              & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                     >> 2U) & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                               >> 0xeU)))) 
                             & (~ ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                   & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                      >> 0xdU))))) 
                         << 0xeU)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[2U] 
        = ((0xffff7fffU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[2U]) 
           | (0x8000U & ((~ ((((~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                    >> 3U) & (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                 >> 0xfU)))) 
                               & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                      >> 1U) & (~ (
                                                   vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                   >> 0xeU))))) 
                              & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                     >> 2U) & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                               >> 0xfU)))) 
                             & (~ ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                   & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                      >> 0xeU))))) 
                         << 0xfU)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[2U] 
        = ((0xfffeffffU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[2U]) 
           | (0x10000U & ((~ ((((~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                     >> 3U) & (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                  >> 0x10U)))) 
                                & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                       >> 1U) & (~ 
                                                 (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                  >> 0xfU))))) 
                               & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                      >> 2U) & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                >> 0x10U)))) 
                              & (~ ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                       >> 0xfU))))) 
                          << 0x10U)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[2U] 
        = ((0xfffdffffU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[2U]) 
           | (0x20000U & ((~ ((((~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                     >> 3U) & (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                  >> 0x11U)))) 
                                & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                       >> 1U) & (~ 
                                                 (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                  >> 0x10U))))) 
                               & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                      >> 2U) & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                >> 0x11U)))) 
                              & (~ ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                       >> 0x10U))))) 
                          << 0x11U)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[2U] 
        = ((0xfffbffffU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[2U]) 
           | (0x40000U & ((~ ((((~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                     >> 3U) & (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                  >> 0x12U)))) 
                                & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                       >> 1U) & (~ 
                                                 (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                  >> 0x11U))))) 
                               & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                      >> 2U) & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                >> 0x12U)))) 
                              & (~ ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                       >> 0x11U))))) 
                          << 0x12U)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[2U] 
        = ((0xfff7ffffU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[2U]) 
           | (0x80000U & ((~ ((((~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                     >> 3U) & (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                  >> 0x13U)))) 
                                & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                       >> 1U) & (~ 
                                                 (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                  >> 0x12U))))) 
                               & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                      >> 2U) & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                >> 0x13U)))) 
                              & (~ ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                       >> 0x12U))))) 
                          << 0x13U)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[2U] 
        = ((0xffefffffU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[2U]) 
           | (0x100000U & ((~ ((((~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                      >> 3U) & (~ (
                                                   vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                   >> 0x14U)))) 
                                 & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                        >> 1U) & (~ 
                                                  (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                   >> 0x13U))))) 
                                & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                       >> 2U) & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                 >> 0x14U)))) 
                               & (~ ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                     & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                        >> 0x13U))))) 
                           << 0x14U)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[2U] 
        = ((0xffdfffffU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[2U]) 
           | (0x200000U & ((~ ((((~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                      >> 3U) & (~ (
                                                   vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                   >> 0x15U)))) 
                                 & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                        >> 1U) & (~ 
                                                  (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                   >> 0x14U))))) 
                                & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                       >> 2U) & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                 >> 0x15U)))) 
                               & (~ ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                     & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                        >> 0x14U))))) 
                           << 0x15U)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[2U] 
        = ((0xffbfffffU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[2U]) 
           | (0x400000U & ((~ ((((~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                      >> 3U) & (~ (
                                                   vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                   >> 0x16U)))) 
                                 & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                        >> 1U) & (~ 
                                                  (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                   >> 0x15U))))) 
                                & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                       >> 2U) & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                 >> 0x16U)))) 
                               & (~ ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                     & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                        >> 0x15U))))) 
                           << 0x16U)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[2U] 
        = ((0xff7fffffU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[2U]) 
           | (0x800000U & ((~ ((((~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                      >> 3U) & (~ (
                                                   vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                   >> 0x17U)))) 
                                 & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                        >> 1U) & (~ 
                                                  (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                   >> 0x16U))))) 
                                & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                       >> 2U) & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                 >> 0x17U)))) 
                               & (~ ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                     & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                        >> 0x16U))))) 
                           << 0x17U)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[2U] 
        = ((0xfeffffffU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[2U]) 
           | (0x1000000U & ((~ ((((~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                       >> 3U) & (~ 
                                                 (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                  >> 0x18U)))) 
                                  & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                         >> 1U) & (~ 
                                                   (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                    >> 0x17U))))) 
                                 & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                        >> 2U) & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                  >> 0x18U)))) 
                                & (~ ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                      & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                         >> 0x17U))))) 
                            << 0x18U)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[2U] 
        = ((0xfdffffffU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[2U]) 
           | (0x2000000U & ((~ ((((~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                       >> 3U) & (~ 
                                                 (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                  >> 0x19U)))) 
                                  & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                         >> 1U) & (~ 
                                                   (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                    >> 0x18U))))) 
                                 & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                        >> 2U) & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                  >> 0x19U)))) 
                                & (~ ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                      & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                         >> 0x18U))))) 
                            << 0x19U)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[2U] 
        = ((0xfbffffffU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[2U]) 
           | (0x4000000U & ((~ ((((~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                       >> 3U) & (~ 
                                                 (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                  >> 0x1aU)))) 
                                  & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                         >> 1U) & (~ 
                                                   (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                    >> 0x19U))))) 
                                 & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                        >> 2U) & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                  >> 0x1aU)))) 
                                & (~ ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                      & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                         >> 0x19U))))) 
                            << 0x1aU)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[2U] 
        = ((0xf7ffffffU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[2U]) 
           | (0x8000000U & ((~ ((((~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                       >> 3U) & (~ 
                                                 (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                  >> 0x1bU)))) 
                                  & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                         >> 1U) & (~ 
                                                   (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                    >> 0x1aU))))) 
                                 & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                        >> 2U) & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                  >> 0x1bU)))) 
                                & (~ ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                      & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                         >> 0x1aU))))) 
                            << 0x1bU)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[2U] 
        = ((0xefffffffU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[2U]) 
           | (0x10000000U & ((~ ((((~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                        >> 3U) & (~ 
                                                  (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                   >> 0x1cU)))) 
                                   & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                          >> 1U) & 
                                         (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                             >> 0x1bU))))) 
                                  & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                         >> 2U) & (
                                                   vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                   >> 0x1cU)))) 
                                 & (~ ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                       & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                          >> 0x1bU))))) 
                             << 0x1cU)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[2U] 
        = ((0xdfffffffU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[2U]) 
           | (0x20000000U & ((~ ((((~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                        >> 3U) & (~ 
                                                  (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                   >> 0x1dU)))) 
                                   & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                          >> 1U) & 
                                         (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                             >> 0x1cU))))) 
                                  & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                         >> 2U) & (
                                                   vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                   >> 0x1dU)))) 
                                 & (~ ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                       & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                          >> 0x1cU))))) 
                             << 0x1dU)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[2U] 
        = ((0xbfffffffU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[2U]) 
           | (0x40000000U & ((~ ((((~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                        >> 3U) & (~ 
                                                  (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                   >> 0x1eU)))) 
                                   & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                          >> 1U) & 
                                         (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                             >> 0x1dU))))) 
                                  & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                         >> 2U) & (
                                                   vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                                   >> 0x1eU)))) 
                                 & (~ ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                       & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                          >> 0x1dU))))) 
                             << 0x1eU)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[2U] 
        = ((0x7fffffffU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[2U]) 
           | ((~ ((((~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                         >> 3U) & (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                      >> 0x1fU)))) 
                    & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                           >> 1U) & (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                        >> 0x1eU))))) 
                   & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                          >> 2U) & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                    >> 0x1fU)))) & 
                  (~ ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                      & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                         >> 0x1eU))))) << 0x1fU));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[3U] 
        = ((0xfffffffeU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[3U]) 
           | (1U & (~ ((((~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                              >> 3U) & (~ vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U]))) 
                         & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                >> 1U) & (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                             >> 0x1fU))))) 
                        & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                               >> 2U) & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U]))) 
                       & (~ ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                             & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[2U] 
                                >> 0x1fU)))))));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[3U] 
        = ((0xfffffffdU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[3U]) 
           | (2U & ((~ ((((~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                               >> 3U) & (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                            >> 1U)))) 
                          & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                 >> 1U) & (~ vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U])))) 
                         & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                >> 2U) & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                          >> 1U)))) 
                        & (~ ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                              & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U])))) 
                    << 1U)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[3U] 
        = ((0xfffffffbU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[3U]) 
           | (4U & ((~ ((((~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                               >> 3U) & (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                            >> 2U)))) 
                          & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                 >> 1U) & (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                              >> 1U))))) 
                         & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U]) 
                               >> 2U))) & (~ ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                              & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                 >> 1U))))) 
                    << 2U)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[3U] 
        = ((0xfffffff7U & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[3U]) 
           | (8U & ((~ ((((~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                               >> 3U) & (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                            >> 3U)))) 
                          & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                 >> 1U) & (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                              >> 2U))))) 
                         & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                >> 2U) & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                          >> 3U)))) 
                        & (~ ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                              & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                 >> 2U))))) << 3U)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[3U] 
        = ((0xffffffefU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[3U]) 
           | (0x10U & ((~ ((((~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                  >> 3U) & (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                               >> 4U)))) 
                             & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                    >> 1U) & (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                 >> 3U))))) 
                            & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                   >> 2U) & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                             >> 4U)))) 
                           & (~ ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                 & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                    >> 3U))))) << 4U)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[3U] 
        = ((0xffffffdfU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[3U]) 
           | (0x20U & ((~ ((((~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                  >> 3U) & (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                               >> 5U)))) 
                             & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                    >> 1U) & (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                 >> 4U))))) 
                            & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                   >> 2U) & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                             >> 5U)))) 
                           & (~ ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                 & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                    >> 4U))))) << 5U)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[3U] 
        = ((0xffffffbfU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[3U]) 
           | (0x40U & ((~ ((((~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                  >> 3U) & (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                               >> 6U)))) 
                             & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                    >> 1U) & (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                 >> 5U))))) 
                            & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                   >> 2U) & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                             >> 6U)))) 
                           & (~ ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                 & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                    >> 5U))))) << 6U)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[3U] 
        = ((0xffffff7fU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[3U]) 
           | (0x80U & ((~ ((((~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                  >> 3U) & (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                               >> 7U)))) 
                             & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                    >> 1U) & (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                 >> 6U))))) 
                            & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                   >> 2U) & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                             >> 7U)))) 
                           & (~ ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                 & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                    >> 6U))))) << 7U)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[3U] 
        = ((0xfffffeffU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[3U]) 
           | (0x100U & ((~ ((((~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                   >> 3U) & (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                >> 8U)))) 
                              & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                     >> 1U) & (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                  >> 7U))))) 
                             & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                    >> 2U) & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                              >> 8U)))) 
                            & (~ ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                  & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                     >> 7U))))) << 8U)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[3U] 
        = ((0xfffffdffU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[3U]) 
           | (0x200U & ((~ ((((~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                   >> 3U) & (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                >> 9U)))) 
                              & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                     >> 1U) & (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                  >> 8U))))) 
                             & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                    >> 2U) & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                              >> 9U)))) 
                            & (~ ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                  & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                     >> 8U))))) << 9U)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[3U] 
        = ((0xfffffbffU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[3U]) 
           | (0x400U & ((~ ((((~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                   >> 3U) & (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                >> 0xaU)))) 
                              & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                     >> 1U) & (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                  >> 9U))))) 
                             & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                    >> 2U) & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                              >> 0xaU)))) 
                            & (~ ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                  & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                     >> 9U))))) << 0xaU)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[3U] 
        = ((0xfffff7ffU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[3U]) 
           | (0x800U & ((~ ((((~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                   >> 3U) & (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                >> 0xbU)))) 
                              & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                     >> 1U) & (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                  >> 0xaU))))) 
                             & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                    >> 2U) & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                              >> 0xbU)))) 
                            & (~ ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                  & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                     >> 0xaU))))) << 0xbU)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[3U] 
        = ((0xffffefffU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[3U]) 
           | (0x1000U & ((~ ((((~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                    >> 3U) & (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                 >> 0xcU)))) 
                               & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                      >> 1U) & (~ (
                                                   vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                   >> 0xbU))))) 
                              & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                     >> 2U) & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                               >> 0xcU)))) 
                             & (~ ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                   & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                      >> 0xbU))))) 
                         << 0xcU)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[3U] 
        = ((0xffffdfffU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[3U]) 
           | (0x2000U & ((~ ((((~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                    >> 3U) & (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                 >> 0xdU)))) 
                               & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                      >> 1U) & (~ (
                                                   vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                   >> 0xcU))))) 
                              & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                     >> 2U) & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                               >> 0xdU)))) 
                             & (~ ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                   & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                      >> 0xcU))))) 
                         << 0xdU)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[3U] 
        = ((0xffffbfffU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[3U]) 
           | (0x4000U & ((~ ((((~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                    >> 3U) & (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                 >> 0xeU)))) 
                               & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                      >> 1U) & (~ (
                                                   vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                   >> 0xdU))))) 
                              & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                     >> 2U) & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                               >> 0xeU)))) 
                             & (~ ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                   & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                      >> 0xdU))))) 
                         << 0xeU)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[3U] 
        = ((0xffff7fffU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[3U]) 
           | (0x8000U & ((~ ((((~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                    >> 3U) & (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                 >> 0xfU)))) 
                               & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                      >> 1U) & (~ (
                                                   vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                   >> 0xeU))))) 
                              & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                     >> 2U) & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                               >> 0xfU)))) 
                             & (~ ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                   & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                      >> 0xeU))))) 
                         << 0xfU)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[3U] 
        = ((0xfffeffffU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[3U]) 
           | (0x10000U & ((~ ((((~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                     >> 3U) & (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                  >> 0x10U)))) 
                                & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                       >> 1U) & (~ 
                                                 (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                  >> 0xfU))))) 
                               & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                      >> 2U) & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                >> 0x10U)))) 
                              & (~ ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                       >> 0xfU))))) 
                          << 0x10U)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[3U] 
        = ((0xfffdffffU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[3U]) 
           | (0x20000U & ((~ ((((~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                     >> 3U) & (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                  >> 0x11U)))) 
                                & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                       >> 1U) & (~ 
                                                 (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                  >> 0x10U))))) 
                               & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                      >> 2U) & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                >> 0x11U)))) 
                              & (~ ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                       >> 0x10U))))) 
                          << 0x11U)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[3U] 
        = ((0xfffbffffU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[3U]) 
           | (0x40000U & ((~ ((((~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                     >> 3U) & (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                  >> 0x12U)))) 
                                & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                       >> 1U) & (~ 
                                                 (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                  >> 0x11U))))) 
                               & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                      >> 2U) & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                >> 0x12U)))) 
                              & (~ ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                       >> 0x11U))))) 
                          << 0x12U)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[3U] 
        = ((0xfff7ffffU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[3U]) 
           | (0x80000U & ((~ ((((~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                     >> 3U) & (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                  >> 0x13U)))) 
                                & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                       >> 1U) & (~ 
                                                 (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                  >> 0x12U))))) 
                               & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                      >> 2U) & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                >> 0x13U)))) 
                              & (~ ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                       >> 0x12U))))) 
                          << 0x13U)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[3U] 
        = ((0xffefffffU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[3U]) 
           | (0x100000U & ((~ ((((~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                      >> 3U) & (~ (
                                                   vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                   >> 0x14U)))) 
                                 & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                        >> 1U) & (~ 
                                                  (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                   >> 0x13U))))) 
                                & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                       >> 2U) & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                 >> 0x14U)))) 
                               & (~ ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                     & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                        >> 0x13U))))) 
                           << 0x14U)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[3U] 
        = ((0xffdfffffU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[3U]) 
           | (0x200000U & ((~ ((((~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                      >> 3U) & (~ (
                                                   vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                   >> 0x15U)))) 
                                 & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                        >> 1U) & (~ 
                                                  (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                   >> 0x14U))))) 
                                & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                       >> 2U) & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                 >> 0x15U)))) 
                               & (~ ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                     & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                        >> 0x14U))))) 
                           << 0x15U)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[3U] 
        = ((0xffbfffffU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[3U]) 
           | (0x400000U & ((~ ((((~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                      >> 3U) & (~ (
                                                   vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                   >> 0x16U)))) 
                                 & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                        >> 1U) & (~ 
                                                  (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                   >> 0x15U))))) 
                                & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                       >> 2U) & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                 >> 0x16U)))) 
                               & (~ ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                     & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                        >> 0x15U))))) 
                           << 0x16U)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[3U] 
        = ((0xff7fffffU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[3U]) 
           | (0x800000U & ((~ ((((~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                      >> 3U) & (~ (
                                                   vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                   >> 0x17U)))) 
                                 & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                        >> 1U) & (~ 
                                                  (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                   >> 0x16U))))) 
                                & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                       >> 2U) & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                 >> 0x17U)))) 
                               & (~ ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                     & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                        >> 0x16U))))) 
                           << 0x17U)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[3U] 
        = ((0xfeffffffU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[3U]) 
           | (0x1000000U & ((~ ((((~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                       >> 3U) & (~ 
                                                 (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                  >> 0x18U)))) 
                                  & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                         >> 1U) & (~ 
                                                   (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                    >> 0x17U))))) 
                                 & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                        >> 2U) & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                  >> 0x18U)))) 
                                & (~ ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                      & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                         >> 0x17U))))) 
                            << 0x18U)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[3U] 
        = ((0xfdffffffU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[3U]) 
           | (0x2000000U & ((~ ((((~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                       >> 3U) & (~ 
                                                 (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                  >> 0x19U)))) 
                                  & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                         >> 1U) & (~ 
                                                   (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                    >> 0x18U))))) 
                                 & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                        >> 2U) & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                  >> 0x19U)))) 
                                & (~ ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                      & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                         >> 0x18U))))) 
                            << 0x19U)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[3U] 
        = ((0xfbffffffU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[3U]) 
           | (0x4000000U & ((~ ((((~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                       >> 3U) & (~ 
                                                 (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                  >> 0x1aU)))) 
                                  & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                         >> 1U) & (~ 
                                                   (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                    >> 0x19U))))) 
                                 & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                        >> 2U) & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                  >> 0x1aU)))) 
                                & (~ ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                      & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                         >> 0x19U))))) 
                            << 0x1aU)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[3U] 
        = ((0xf7ffffffU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[3U]) 
           | (0x8000000U & ((~ ((((~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                       >> 3U) & (~ 
                                                 (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                  >> 0x1bU)))) 
                                  & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                         >> 1U) & (~ 
                                                   (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                    >> 0x1aU))))) 
                                 & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                        >> 2U) & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                  >> 0x1bU)))) 
                                & (~ ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                      & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                         >> 0x1aU))))) 
                            << 0x1bU)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[3U] 
        = ((0xefffffffU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[3U]) 
           | (0x10000000U & ((~ ((((~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                        >> 3U) & (~ 
                                                  (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                   >> 0x1cU)))) 
                                   & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                          >> 1U) & 
                                         (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                             >> 0x1bU))))) 
                                  & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                         >> 2U) & (
                                                   vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                   >> 0x1cU)))) 
                                 & (~ ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                       & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                          >> 0x1bU))))) 
                             << 0x1cU)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[3U] 
        = ((0xdfffffffU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[3U]) 
           | (0x20000000U & ((~ ((((~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                        >> 3U) & (~ 
                                                  (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                   >> 0x1dU)))) 
                                   & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                          >> 1U) & 
                                         (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                             >> 0x1cU))))) 
                                  & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                         >> 2U) & (
                                                   vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                   >> 0x1dU)))) 
                                 & (~ ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                       & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                          >> 0x1cU))))) 
                             << 0x1dU)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[3U] 
        = ((0xbfffffffU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[3U]) 
           | (0x40000000U & ((~ ((((~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                        >> 3U) & (~ 
                                                  (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                   >> 0x1eU)))) 
                                   & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                          >> 1U) & 
                                         (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                             >> 0x1dU))))) 
                                  & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                         >> 2U) & (
                                                   vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                                   >> 0x1eU)))) 
                                 & (~ ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                       & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                          >> 0x1dU))))) 
                             << 0x1eU)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[3U] 
        = ((0x7fffffffU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[3U]) 
           | ((~ ((((~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                         >> 3U) & (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                      >> 0x1fU)))) 
                    & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                           >> 1U) & (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                        >> 0x1eU))))) 
                   & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                          >> 2U) & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                    >> 0x1fU)))) & 
                  (~ ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                      & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                         >> 0x1eU))))) << 0x1fU));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[4U] 
        = ((0xeU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[4U]) 
           | (1U & (~ ((((~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                              >> 3U) & (~ vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[4U]))) 
                         & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                >> 1U) & (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                             >> 0x1fU))))) 
                        & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                               >> 2U) & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[4U]))) 
                       & (~ ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                             & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[3U] 
                                >> 0x1fU)))))));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[4U] 
        = ((0xdU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[4U]) 
           | (2U & ((~ ((((~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                               >> 3U) & (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[4U] 
                                            >> 1U)))) 
                          & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                 >> 1U) & (~ vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[4U])))) 
                         & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                >> 2U) & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[4U] 
                                          >> 1U)))) 
                        & (~ ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                              & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[4U])))) 
                    << 1U)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[4U] 
        = ((0xbU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[4U]) 
           | (4U & ((~ ((((~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                               >> 3U) & (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[4U] 
                                            >> 2U)))) 
                          & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                 >> 1U) & (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[4U] 
                                              >> 1U))))) 
                         & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[4U]) 
                               >> 2U))) & (~ ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                              & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[4U] 
                                                 >> 1U))))) 
                    << 2U)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[4U] 
        = ((7U & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result[4U]) 
           | (8U & ((~ ((((~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                               >> 3U) & (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[4U] 
                                            >> 3U)))) 
                          & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                 >> 1U) & (~ (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[4U] 
                                              >> 2U))))) 
                         & (~ (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                                >> 2U) & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[4U] 
                                          >> 3U)))) 
                        & (~ ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial__DOT__sel) 
                              & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplicand_r[4U] 
                                 >> 2U))))) << 3U)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__wready2 
        = ((2U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_arbiter_1__DOT__master_state))
            ? (1U & (IData)(vlSelf->top_test__DOT__io_master_wready))
            : 0U);
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_w_len 
        = __Vdly__top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_w_len;
    if (vlSelf->reset) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__running_r = 0U;
    } else if (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__mul_prepare) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__running_r = 1U;
    } else if (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__done) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__running_r = 0U;
    }
    VL_ADD_W(5, __Vtemp128, vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__p_result, vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__tmp_result);
    VL_EXTEND_WI(133,1, __Vtemp129, (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__partial_cout));
    __Vtemp130[0U] = __Vtemp129[0U];
    __Vtemp130[1U] = __Vtemp129[1U];
    __Vtemp130[2U] = __Vtemp129[2U];
    __Vtemp130[3U] = __Vtemp129[3U];
    __Vtemp130[4U] = __Vtemp129[4U];
    VL_ADD_W(5, __Vtemp131, __Vtemp128, __Vtemp130);
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__adder_result[0U] 
        = __Vtemp131[0U];
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__adder_result[1U] 
        = __Vtemp131[1U];
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__adder_result[2U] 
        = __Vtemp131[2U];
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__adder_result[3U] 
        = __Vtemp131[3U];
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__adder_result[4U] 
        = (0xfU & __Vtemp131[4U]);
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__done 
        = ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__running_r) 
           & (0x40U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__count)));
    if (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__stallable_pipeline_test__DOT__pipe1_to_pipe2_valid) 
         & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__stallable_pipeline_test__DOT__pipe2_allow_in))) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__alu_control_reg_is 
            = vlSelf->top_test__DOT__ysyx_22050533_0__DOT__alu_control;
    }
    if (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__stallable_pipeline_test__DOT__pipe1_to_pipe2_valid) 
         & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__stallable_pipeline_test__DOT__pipe2_allow_in))) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__e_j_b_inst_reg_is 
            = vlSelf->top_test__DOT__ysyx_22050533_0__DOT__e_j_b_inst_reg_id;
    }
    if (((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
           & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
          & ((0U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)) 
             | (1U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))) 
         | ((6U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
            & ((0U == (7U & (IData)((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                     >> 3U)))) | (1U 
                                                  == 
                                                  (7U 
                                                   & (IData)(
                                                             (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                              >> 3U)))))))) {
        VL_EXTEND_WQ(128,64, __Vtemp133, vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rdata2_0);
        VL_EXTEND_WQ(128,64, __Vtemp135, vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__wdata_align);
        VL_EXTEND_WQ(128,64, __Vtemp148, vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__wmask_align);
        __Vtemp159[0U] = (((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                             & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                            & (0U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                            ? __Vtemp133[0U] : ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                                  & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                                 & (1U 
                                                    == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                                                 ? 0U
                                                 : 
                                                (((6U 
                                                   == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                                  & (0U 
                                                     == 
                                                     (7U 
                                                      & (IData)(
                                                                (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                                 >> 3U)))))
                                                  ? 
                                                 __Vtemp135[0U]
                                                  : 0U))) 
                          & ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                               & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                              & (0U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                              ? 0xffffffffU : ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                                 & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                                & (1U 
                                                   == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                                                ? 0U
                                                : (
                                                   ((6U 
                                                     == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                                    & (0U 
                                                       == 
                                                       (7U 
                                                        & (IData)(
                                                                  (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                                   >> 3U)))))
                                                    ? 
                                                   __Vtemp148[0U]
                                                    : 0U))));
        __Vtemp159[1U] = (((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                             & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                            & (0U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                            ? __Vtemp133[1U] : ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                                  & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                                 & (1U 
                                                    == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                                                 ? 0U
                                                 : 
                                                (((6U 
                                                   == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                                  & (0U 
                                                     == 
                                                     (7U 
                                                      & (IData)(
                                                                (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                                 >> 3U)))))
                                                  ? 
                                                 __Vtemp135[1U]
                                                  : 0U))) 
                          & ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                               & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                              & (0U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                              ? 0xffffffffU : ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                                 & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                                & (1U 
                                                   == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                                                ? 0U
                                                : (
                                                   ((6U 
                                                     == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                                    & (0U 
                                                       == 
                                                       (7U 
                                                        & (IData)(
                                                                  (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                                   >> 3U)))))
                                                    ? 
                                                   __Vtemp148[1U]
                                                    : 0U))));
        __Vtemp159[2U] = (((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                             & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                            & (0U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                            ? __Vtemp133[2U] : ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                                  & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                                 & (1U 
                                                    == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                                                 ? (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rdata2_0)
                                                 : 
                                                (((6U 
                                                   == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                                  & (0U 
                                                     == 
                                                     (7U 
                                                      & (IData)(
                                                                (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                                 >> 3U)))))
                                                  ? 
                                                 __Vtemp135[2U]
                                                  : 
                                                 (((6U 
                                                    == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                                   & (1U 
                                                      == 
                                                      (7U 
                                                       & (IData)(
                                                                 (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                                  >> 3U)))))
                                                   ? (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__wdata_align)
                                                   : 0U)))) 
                          & ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                               & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                              & (0U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                              ? 0U : ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                        & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                       & (1U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                                       ? 0xffffffffU
                                       : (((6U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                           & (0U == 
                                              (7U & (IData)(
                                                            (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                             >> 3U)))))
                                           ? __Vtemp148[2U]
                                           : (((6U 
                                                == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                               & (1U 
                                                  == 
                                                  (7U 
                                                   & (IData)(
                                                             (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                              >> 3U)))))
                                               ? (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__wmask_align)
                                               : 0U)))));
        __Vtemp159[3U] = (((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                             & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                            & (0U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                            ? __Vtemp133[3U] : ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                                  & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                                 & (1U 
                                                    == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                                                 ? (IData)(
                                                           (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rdata2_0 
                                                            >> 0x20U))
                                                 : 
                                                (((6U 
                                                   == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                                  & (0U 
                                                     == 
                                                     (7U 
                                                      & (IData)(
                                                                (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                                 >> 3U)))))
                                                  ? 
                                                 __Vtemp135[3U]
                                                  : 
                                                 (((6U 
                                                    == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                                   & (1U 
                                                      == 
                                                      (7U 
                                                       & (IData)(
                                                                 (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                                  >> 3U)))))
                                                   ? (IData)(
                                                             (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__wdata_align 
                                                              >> 0x20U))
                                                   : 0U)))) 
                          & ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                               & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                              & (0U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                              ? 0U : ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                        & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                       & (1U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                                       ? 0xffffffffU
                                       : (((6U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                           & (0U == 
                                              (7U & (IData)(
                                                            (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                             >> 3U)))))
                                           ? __Vtemp148[3U]
                                           : (((6U 
                                                == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                               & (1U 
                                                  == 
                                                  (7U 
                                                   & (IData)(
                                                             (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                              >> 3U)))))
                                               ? (IData)(
                                                         (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__wmask_align 
                                                          >> 0x20U))
                                               : 0U)))));
        VL_EXTEND_WQ(128,64, __Vtemp163, vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__wmask_align);
        __Vdlyvval__top_test__DOT__sram_0__DOT__sram_4__DOT__ram__v0[0U] 
            = (__Vtemp159[0U] | (vlSelf->top_test__DOT__sram_0__DOT__sram_4__DOT__ram
                                 [vlSelf->top_test__DOT__io_sram4_addr][0U] 
                                 & (~ ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                         & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                        & (0U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                                        ? 0xffffffffU
                                        : ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                             & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                            & (1U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                                            ? 0U : 
                                           (((6U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                             & (0U 
                                                == 
                                                (7U 
                                                 & (IData)(
                                                           (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                            >> 3U)))))
                                             ? __Vtemp163[0U]
                                             : 0U))))));
        __Vdlyvval__top_test__DOT__sram_0__DOT__sram_4__DOT__ram__v0[1U] 
            = (__Vtemp159[1U] | (vlSelf->top_test__DOT__sram_0__DOT__sram_4__DOT__ram
                                 [vlSelf->top_test__DOT__io_sram4_addr][1U] 
                                 & (~ ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                         & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                        & (0U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                                        ? 0xffffffffU
                                        : ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                             & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                            & (1U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                                            ? 0U : 
                                           (((6U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                             & (0U 
                                                == 
                                                (7U 
                                                 & (IData)(
                                                           (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                            >> 3U)))))
                                             ? __Vtemp163[1U]
                                             : 0U))))));
        __Vdlyvval__top_test__DOT__sram_0__DOT__sram_4__DOT__ram__v0[2U] 
            = (__Vtemp159[2U] | (vlSelf->top_test__DOT__sram_0__DOT__sram_4__DOT__ram
                                 [vlSelf->top_test__DOT__io_sram4_addr][2U] 
                                 & (~ ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                         & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                        & (0U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                                        ? 0U : ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                                  & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                                 & (1U 
                                                    == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                                                 ? 0xffffffffU
                                                 : 
                                                (((6U 
                                                   == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                                  & (0U 
                                                     == 
                                                     (7U 
                                                      & (IData)(
                                                                (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                                 >> 3U)))))
                                                  ? 
                                                 __Vtemp163[2U]
                                                  : 
                                                 (((6U 
                                                    == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                                   & (1U 
                                                      == 
                                                      (7U 
                                                       & (IData)(
                                                                 (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                                  >> 3U)))))
                                                   ? (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__wmask_align)
                                                   : 0U)))))));
        __Vdlyvval__top_test__DOT__sram_0__DOT__sram_4__DOT__ram__v0[3U] 
            = (__Vtemp159[3U] | (vlSelf->top_test__DOT__sram_0__DOT__sram_4__DOT__ram
                                 [vlSelf->top_test__DOT__io_sram4_addr][3U] 
                                 & (~ ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                         & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                        & (0U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                                        ? 0U : ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                                  & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                                 & (1U 
                                                    == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                                                 ? 0xffffffffU
                                                 : 
                                                (((6U 
                                                   == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                                  & (0U 
                                                     == 
                                                     (7U 
                                                      & (IData)(
                                                                (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                                 >> 3U)))))
                                                  ? 
                                                 __Vtemp163[3U]
                                                  : 
                                                 (((6U 
                                                    == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                                   & (1U 
                                                      == 
                                                      (7U 
                                                       & (IData)(
                                                                 (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                                  >> 3U)))))
                                                   ? (IData)(
                                                             (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__wmask_align 
                                                              >> 0x20U))
                                                   : 0U)))))));
        __Vdlyvset__top_test__DOT__sram_0__DOT__sram_4__DOT__ram__v0 = 1U;
        __Vdlyvdim0__top_test__DOT__sram_0__DOT__sram_4__DOT__ram__v0 
            = vlSelf->top_test__DOT__io_sram4_addr;
    }
    if (((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
           & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
          & ((0U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)) 
             | (1U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))) 
         | ((6U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
            & ((0U == (7U & (IData)((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                     >> 3U)))) | (1U 
                                                  == 
                                                  (7U 
                                                   & (IData)(
                                                             (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                              >> 3U)))))))) {
        vlSelf->top_test__DOT__io_sram4_rdata[0U] = 
            VL_RANDOM_I(32);
        vlSelf->top_test__DOT__io_sram4_rdata[1U] = 
            VL_RANDOM_I(32);
        vlSelf->top_test__DOT__io_sram4_rdata[2U] = 
            VL_RANDOM_I(32);
        vlSelf->top_test__DOT__io_sram4_rdata[3U] = 
            VL_RANDOM_I(32);
    } else {
        vlSelf->top_test__DOT__io_sram4_rdata[0U] = 
            vlSelf->top_test__DOT__sram_0__DOT__sram_4__DOT__ram
            [vlSelf->top_test__DOT__io_sram4_addr][0U];
        vlSelf->top_test__DOT__io_sram4_rdata[1U] = 
            vlSelf->top_test__DOT__sram_0__DOT__sram_4__DOT__ram
            [vlSelf->top_test__DOT__io_sram4_addr][1U];
        vlSelf->top_test__DOT__io_sram4_rdata[2U] = 
            vlSelf->top_test__DOT__sram_0__DOT__sram_4__DOT__ram
            [vlSelf->top_test__DOT__io_sram4_addr][2U];
        vlSelf->top_test__DOT__io_sram4_rdata[3U] = 
            vlSelf->top_test__DOT__sram_0__DOT__sram_4__DOT__ram
            [vlSelf->top_test__DOT__io_sram4_addr][3U];
    }
    if (((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
           & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
          & ((2U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)) 
             | (3U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))) 
         | ((6U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
            & ((2U == (7U & (IData)((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                     >> 3U)))) | (3U 
                                                  == 
                                                  (7U 
                                                   & (IData)(
                                                             (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                              >> 3U)))))))) {
        VL_EXTEND_WQ(128,64, __Vtemp181, vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rdata2_0);
        VL_EXTEND_WQ(128,64, __Vtemp183, vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__wdata_align);
        VL_EXTEND_WQ(128,64, __Vtemp196, vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__wmask_align);
        __Vtemp207[0U] = (((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                             & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                            & (2U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                            ? __Vtemp181[0U] : ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                                  & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                                 & (3U 
                                                    == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                                                 ? 0U
                                                 : 
                                                (((6U 
                                                   == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                                  & (2U 
                                                     == 
                                                     (7U 
                                                      & (IData)(
                                                                (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                                 >> 3U)))))
                                                  ? 
                                                 __Vtemp183[0U]
                                                  : 0U))) 
                          & ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                               & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                              & (2U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                              ? 0xffffffffU : ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                                 & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                                & (3U 
                                                   == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                                                ? 0U
                                                : (
                                                   ((6U 
                                                     == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                                    & (2U 
                                                       == 
                                                       (7U 
                                                        & (IData)(
                                                                  (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                                   >> 3U)))))
                                                    ? 
                                                   __Vtemp196[0U]
                                                    : 0U))));
        __Vtemp207[1U] = (((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                             & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                            & (2U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                            ? __Vtemp181[1U] : ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                                  & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                                 & (3U 
                                                    == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                                                 ? 0U
                                                 : 
                                                (((6U 
                                                   == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                                  & (2U 
                                                     == 
                                                     (7U 
                                                      & (IData)(
                                                                (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                                 >> 3U)))))
                                                  ? 
                                                 __Vtemp183[1U]
                                                  : 0U))) 
                          & ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                               & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                              & (2U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                              ? 0xffffffffU : ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                                 & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                                & (3U 
                                                   == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                                                ? 0U
                                                : (
                                                   ((6U 
                                                     == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                                    & (2U 
                                                       == 
                                                       (7U 
                                                        & (IData)(
                                                                  (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                                   >> 3U)))))
                                                    ? 
                                                   __Vtemp196[1U]
                                                    : 0U))));
        __Vtemp207[2U] = (((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                             & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                            & (2U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                            ? __Vtemp181[2U] : ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                                  & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                                 & (3U 
                                                    == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                                                 ? (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rdata2_0)
                                                 : 
                                                (((6U 
                                                   == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                                  & (2U 
                                                     == 
                                                     (7U 
                                                      & (IData)(
                                                                (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                                 >> 3U)))))
                                                  ? 
                                                 __Vtemp183[2U]
                                                  : 
                                                 (((6U 
                                                    == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                                   & (3U 
                                                      == 
                                                      (7U 
                                                       & (IData)(
                                                                 (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                                  >> 3U)))))
                                                   ? (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__wdata_align)
                                                   : 0U)))) 
                          & ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                               & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                              & (2U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                              ? 0U : ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                        & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                       & (3U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                                       ? 0xffffffffU
                                       : (((6U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                           & (2U == 
                                              (7U & (IData)(
                                                            (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                             >> 3U)))))
                                           ? __Vtemp196[2U]
                                           : (((6U 
                                                == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                               & (3U 
                                                  == 
                                                  (7U 
                                                   & (IData)(
                                                             (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                              >> 3U)))))
                                               ? (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__wmask_align)
                                               : 0U)))));
        __Vtemp207[3U] = (((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                             & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                            & (2U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                            ? __Vtemp181[3U] : ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                                  & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                                 & (3U 
                                                    == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                                                 ? (IData)(
                                                           (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rdata2_0 
                                                            >> 0x20U))
                                                 : 
                                                (((6U 
                                                   == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                                  & (2U 
                                                     == 
                                                     (7U 
                                                      & (IData)(
                                                                (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                                 >> 3U)))))
                                                  ? 
                                                 __Vtemp183[3U]
                                                  : 
                                                 (((6U 
                                                    == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                                   & (3U 
                                                      == 
                                                      (7U 
                                                       & (IData)(
                                                                 (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                                  >> 3U)))))
                                                   ? (IData)(
                                                             (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__wdata_align 
                                                              >> 0x20U))
                                                   : 0U)))) 
                          & ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                               & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                              & (2U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                              ? 0U : ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                        & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                       & (3U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                                       ? 0xffffffffU
                                       : (((6U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                           & (2U == 
                                              (7U & (IData)(
                                                            (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                             >> 3U)))))
                                           ? __Vtemp196[3U]
                                           : (((6U 
                                                == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                               & (3U 
                                                  == 
                                                  (7U 
                                                   & (IData)(
                                                             (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                              >> 3U)))))
                                               ? (IData)(
                                                         (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__wmask_align 
                                                          >> 0x20U))
                                               : 0U)))));
        VL_EXTEND_WQ(128,64, __Vtemp211, vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__wmask_align);
        __Vdlyvval__top_test__DOT__sram_0__DOT__sram_5__DOT__ram__v0[0U] 
            = (__Vtemp207[0U] | (vlSelf->top_test__DOT__sram_0__DOT__sram_5__DOT__ram
                                 [vlSelf->top_test__DOT__io_sram5_addr][0U] 
                                 & (~ ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                         & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                        & (2U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                                        ? 0xffffffffU
                                        : ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                             & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                            & (3U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                                            ? 0U : 
                                           (((6U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                             & (2U 
                                                == 
                                                (7U 
                                                 & (IData)(
                                                           (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                            >> 3U)))))
                                             ? __Vtemp211[0U]
                                             : 0U))))));
        __Vdlyvval__top_test__DOT__sram_0__DOT__sram_5__DOT__ram__v0[1U] 
            = (__Vtemp207[1U] | (vlSelf->top_test__DOT__sram_0__DOT__sram_5__DOT__ram
                                 [vlSelf->top_test__DOT__io_sram5_addr][1U] 
                                 & (~ ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                         & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                        & (2U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                                        ? 0xffffffffU
                                        : ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                             & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                            & (3U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                                            ? 0U : 
                                           (((6U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                             & (2U 
                                                == 
                                                (7U 
                                                 & (IData)(
                                                           (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                            >> 3U)))))
                                             ? __Vtemp211[1U]
                                             : 0U))))));
        __Vdlyvval__top_test__DOT__sram_0__DOT__sram_5__DOT__ram__v0[2U] 
            = (__Vtemp207[2U] | (vlSelf->top_test__DOT__sram_0__DOT__sram_5__DOT__ram
                                 [vlSelf->top_test__DOT__io_sram5_addr][2U] 
                                 & (~ ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                         & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                        & (2U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                                        ? 0U : ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                                  & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                                 & (3U 
                                                    == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                                                 ? 0xffffffffU
                                                 : 
                                                (((6U 
                                                   == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                                  & (2U 
                                                     == 
                                                     (7U 
                                                      & (IData)(
                                                                (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                                 >> 3U)))))
                                                  ? 
                                                 __Vtemp211[2U]
                                                  : 
                                                 (((6U 
                                                    == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                                   & (3U 
                                                      == 
                                                      (7U 
                                                       & (IData)(
                                                                 (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                                  >> 3U)))))
                                                   ? (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__wmask_align)
                                                   : 0U)))))));
        __Vdlyvval__top_test__DOT__sram_0__DOT__sram_5__DOT__ram__v0[3U] 
            = (__Vtemp207[3U] | (vlSelf->top_test__DOT__sram_0__DOT__sram_5__DOT__ram
                                 [vlSelf->top_test__DOT__io_sram5_addr][3U] 
                                 & (~ ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                         & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                        & (2U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                                        ? 0U : ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                                  & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                                 & (3U 
                                                    == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                                                 ? 0xffffffffU
                                                 : 
                                                (((6U 
                                                   == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                                  & (2U 
                                                     == 
                                                     (7U 
                                                      & (IData)(
                                                                (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                                 >> 3U)))))
                                                  ? 
                                                 __Vtemp211[3U]
                                                  : 
                                                 (((6U 
                                                    == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                                   & (3U 
                                                      == 
                                                      (7U 
                                                       & (IData)(
                                                                 (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                                  >> 3U)))))
                                                   ? (IData)(
                                                             (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__wmask_align 
                                                              >> 0x20U))
                                                   : 0U)))))));
        __Vdlyvset__top_test__DOT__sram_0__DOT__sram_5__DOT__ram__v0 = 1U;
        __Vdlyvdim0__top_test__DOT__sram_0__DOT__sram_5__DOT__ram__v0 
            = vlSelf->top_test__DOT__io_sram5_addr;
    }
    if (((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
           & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
          & ((2U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)) 
             | (3U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))) 
         | ((6U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
            & ((2U == (7U & (IData)((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                     >> 3U)))) | (3U 
                                                  == 
                                                  (7U 
                                                   & (IData)(
                                                             (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                              >> 3U)))))))) {
        vlSelf->top_test__DOT__io_sram5_rdata[0U] = 
            VL_RANDOM_I(32);
        vlSelf->top_test__DOT__io_sram5_rdata[1U] = 
            VL_RANDOM_I(32);
        vlSelf->top_test__DOT__io_sram5_rdata[2U] = 
            VL_RANDOM_I(32);
        vlSelf->top_test__DOT__io_sram5_rdata[3U] = 
            VL_RANDOM_I(32);
    } else {
        vlSelf->top_test__DOT__io_sram5_rdata[0U] = 
            vlSelf->top_test__DOT__sram_0__DOT__sram_5__DOT__ram
            [vlSelf->top_test__DOT__io_sram5_addr][0U];
        vlSelf->top_test__DOT__io_sram5_rdata[1U] = 
            vlSelf->top_test__DOT__sram_0__DOT__sram_5__DOT__ram
            [vlSelf->top_test__DOT__io_sram5_addr][1U];
        vlSelf->top_test__DOT__io_sram5_rdata[2U] = 
            vlSelf->top_test__DOT__sram_0__DOT__sram_5__DOT__ram
            [vlSelf->top_test__DOT__io_sram5_addr][2U];
        vlSelf->top_test__DOT__io_sram5_rdata[3U] = 
            vlSelf->top_test__DOT__sram_0__DOT__sram_5__DOT__ram
            [vlSelf->top_test__DOT__io_sram5_addr][3U];
    }
    if (((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
           & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
          & ((4U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)) 
             | (5U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))) 
         | ((6U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
            & ((4U == (7U & (IData)((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                     >> 3U)))) | (5U 
                                                  == 
                                                  (7U 
                                                   & (IData)(
                                                             (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                              >> 3U)))))))) {
        VL_EXTEND_WQ(128,64, __Vtemp229, vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rdata2_0);
        VL_EXTEND_WQ(128,64, __Vtemp231, vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__wdata_align);
        VL_EXTEND_WQ(128,64, __Vtemp244, vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__wmask_align);
        __Vtemp255[0U] = (((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                             & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                            & (4U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                            ? __Vtemp229[0U] : ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                                  & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                                 & (5U 
                                                    == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                                                 ? 0U
                                                 : 
                                                (((6U 
                                                   == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                                  & (4U 
                                                     == 
                                                     (7U 
                                                      & (IData)(
                                                                (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                                 >> 3U)))))
                                                  ? 
                                                 __Vtemp231[0U]
                                                  : 0U))) 
                          & ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                               & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                              & (4U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                              ? 0xffffffffU : ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                                 & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                                & (5U 
                                                   == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                                                ? 0U
                                                : (
                                                   ((6U 
                                                     == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                                    & (4U 
                                                       == 
                                                       (7U 
                                                        & (IData)(
                                                                  (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                                   >> 3U)))))
                                                    ? 
                                                   __Vtemp244[0U]
                                                    : 0U))));
        __Vtemp255[1U] = (((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                             & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                            & (4U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                            ? __Vtemp229[1U] : ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                                  & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                                 & (5U 
                                                    == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                                                 ? 0U
                                                 : 
                                                (((6U 
                                                   == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                                  & (4U 
                                                     == 
                                                     (7U 
                                                      & (IData)(
                                                                (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                                 >> 3U)))))
                                                  ? 
                                                 __Vtemp231[1U]
                                                  : 0U))) 
                          & ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                               & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                              & (4U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                              ? 0xffffffffU : ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                                 & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                                & (5U 
                                                   == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                                                ? 0U
                                                : (
                                                   ((6U 
                                                     == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                                    & (4U 
                                                       == 
                                                       (7U 
                                                        & (IData)(
                                                                  (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                                   >> 3U)))))
                                                    ? 
                                                   __Vtemp244[1U]
                                                    : 0U))));
        __Vtemp255[2U] = (((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                             & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                            & (4U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                            ? __Vtemp229[2U] : ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                                  & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                                 & (5U 
                                                    == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                                                 ? (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rdata2_0)
                                                 : 
                                                (((6U 
                                                   == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                                  & (4U 
                                                     == 
                                                     (7U 
                                                      & (IData)(
                                                                (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                                 >> 3U)))))
                                                  ? 
                                                 __Vtemp231[2U]
                                                  : 
                                                 (((6U 
                                                    == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                                   & (5U 
                                                      == 
                                                      (7U 
                                                       & (IData)(
                                                                 (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                                  >> 3U)))))
                                                   ? (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__wdata_align)
                                                   : 0U)))) 
                          & ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                               & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                              & (4U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                              ? 0U : ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                        & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                       & (5U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                                       ? 0xffffffffU
                                       : (((6U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                           & (4U == 
                                              (7U & (IData)(
                                                            (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                             >> 3U)))))
                                           ? __Vtemp244[2U]
                                           : (((6U 
                                                == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                               & (5U 
                                                  == 
                                                  (7U 
                                                   & (IData)(
                                                             (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                              >> 3U)))))
                                               ? (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__wmask_align)
                                               : 0U)))));
        __Vtemp255[3U] = (((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                             & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                            & (4U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                            ? __Vtemp229[3U] : ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                                  & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                                 & (5U 
                                                    == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                                                 ? (IData)(
                                                           (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rdata2_0 
                                                            >> 0x20U))
                                                 : 
                                                (((6U 
                                                   == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                                  & (4U 
                                                     == 
                                                     (7U 
                                                      & (IData)(
                                                                (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                                 >> 3U)))))
                                                  ? 
                                                 __Vtemp231[3U]
                                                  : 
                                                 (((6U 
                                                    == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                                   & (5U 
                                                      == 
                                                      (7U 
                                                       & (IData)(
                                                                 (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                                  >> 3U)))))
                                                   ? (IData)(
                                                             (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__wdata_align 
                                                              >> 0x20U))
                                                   : 0U)))) 
                          & ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                               & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                              & (4U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                              ? 0U : ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                        & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                       & (5U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                                       ? 0xffffffffU
                                       : (((6U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                           & (4U == 
                                              (7U & (IData)(
                                                            (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                             >> 3U)))))
                                           ? __Vtemp244[3U]
                                           : (((6U 
                                                == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                               & (5U 
                                                  == 
                                                  (7U 
                                                   & (IData)(
                                                             (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                              >> 3U)))))
                                               ? (IData)(
                                                         (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__wmask_align 
                                                          >> 0x20U))
                                               : 0U)))));
        VL_EXTEND_WQ(128,64, __Vtemp259, vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__wmask_align);
        __Vdlyvval__top_test__DOT__sram_0__DOT__sram_6__DOT__ram__v0[0U] 
            = (__Vtemp255[0U] | (vlSelf->top_test__DOT__sram_0__DOT__sram_6__DOT__ram
                                 [vlSelf->top_test__DOT__io_sram6_addr][0U] 
                                 & (~ ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                         & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                        & (4U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                                        ? 0xffffffffU
                                        : ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                             & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                            & (5U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                                            ? 0U : 
                                           (((6U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                             & (4U 
                                                == 
                                                (7U 
                                                 & (IData)(
                                                           (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                            >> 3U)))))
                                             ? __Vtemp259[0U]
                                             : 0U))))));
        __Vdlyvval__top_test__DOT__sram_0__DOT__sram_6__DOT__ram__v0[1U] 
            = (__Vtemp255[1U] | (vlSelf->top_test__DOT__sram_0__DOT__sram_6__DOT__ram
                                 [vlSelf->top_test__DOT__io_sram6_addr][1U] 
                                 & (~ ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                         & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                        & (4U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                                        ? 0xffffffffU
                                        : ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                             & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                            & (5U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                                            ? 0U : 
                                           (((6U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                             & (4U 
                                                == 
                                                (7U 
                                                 & (IData)(
                                                           (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                            >> 3U)))))
                                             ? __Vtemp259[1U]
                                             : 0U))))));
        __Vdlyvval__top_test__DOT__sram_0__DOT__sram_6__DOT__ram__v0[2U] 
            = (__Vtemp255[2U] | (vlSelf->top_test__DOT__sram_0__DOT__sram_6__DOT__ram
                                 [vlSelf->top_test__DOT__io_sram6_addr][2U] 
                                 & (~ ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                         & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                        & (4U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                                        ? 0U : ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                                  & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                                 & (5U 
                                                    == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                                                 ? 0xffffffffU
                                                 : 
                                                (((6U 
                                                   == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                                  & (4U 
                                                     == 
                                                     (7U 
                                                      & (IData)(
                                                                (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                                 >> 3U)))))
                                                  ? 
                                                 __Vtemp259[2U]
                                                  : 
                                                 (((6U 
                                                    == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                                   & (5U 
                                                      == 
                                                      (7U 
                                                       & (IData)(
                                                                 (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                                  >> 3U)))))
                                                   ? (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__wmask_align)
                                                   : 0U)))))));
        __Vdlyvval__top_test__DOT__sram_0__DOT__sram_6__DOT__ram__v0[3U] 
            = (__Vtemp255[3U] | (vlSelf->top_test__DOT__sram_0__DOT__sram_6__DOT__ram
                                 [vlSelf->top_test__DOT__io_sram6_addr][3U] 
                                 & (~ ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                         & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                        & (4U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                                        ? 0U : ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                                  & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                                 & (5U 
                                                    == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                                                 ? 0xffffffffU
                                                 : 
                                                (((6U 
                                                   == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                                  & (4U 
                                                     == 
                                                     (7U 
                                                      & (IData)(
                                                                (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                                 >> 3U)))))
                                                  ? 
                                                 __Vtemp259[3U]
                                                  : 
                                                 (((6U 
                                                    == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                                   & (5U 
                                                      == 
                                                      (7U 
                                                       & (IData)(
                                                                 (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                                  >> 3U)))))
                                                   ? (IData)(
                                                             (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__wmask_align 
                                                              >> 0x20U))
                                                   : 0U)))))));
        __Vdlyvset__top_test__DOT__sram_0__DOT__sram_6__DOT__ram__v0 = 1U;
        __Vdlyvdim0__top_test__DOT__sram_0__DOT__sram_6__DOT__ram__v0 
            = vlSelf->top_test__DOT__io_sram6_addr;
    }
    if (((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
           & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
          & ((4U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)) 
             | (5U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))) 
         | ((6U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
            & ((4U == (7U & (IData)((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                     >> 3U)))) | (5U 
                                                  == 
                                                  (7U 
                                                   & (IData)(
                                                             (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                              >> 3U)))))))) {
        vlSelf->top_test__DOT__io_sram6_rdata[0U] = 
            VL_RANDOM_I(32);
        vlSelf->top_test__DOT__io_sram6_rdata[1U] = 
            VL_RANDOM_I(32);
        vlSelf->top_test__DOT__io_sram6_rdata[2U] = 
            VL_RANDOM_I(32);
        vlSelf->top_test__DOT__io_sram6_rdata[3U] = 
            VL_RANDOM_I(32);
    } else {
        vlSelf->top_test__DOT__io_sram6_rdata[0U] = 
            vlSelf->top_test__DOT__sram_0__DOT__sram_6__DOT__ram
            [vlSelf->top_test__DOT__io_sram6_addr][0U];
        vlSelf->top_test__DOT__io_sram6_rdata[1U] = 
            vlSelf->top_test__DOT__sram_0__DOT__sram_6__DOT__ram
            [vlSelf->top_test__DOT__io_sram6_addr][1U];
        vlSelf->top_test__DOT__io_sram6_rdata[2U] = 
            vlSelf->top_test__DOT__sram_0__DOT__sram_6__DOT__ram
            [vlSelf->top_test__DOT__io_sram6_addr][2U];
        vlSelf->top_test__DOT__io_sram6_rdata[3U] = 
            vlSelf->top_test__DOT__sram_0__DOT__sram_6__DOT__ram
            [vlSelf->top_test__DOT__io_sram6_addr][3U];
    }
    if (((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
           & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
          & ((6U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)) 
             | (7U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))) 
         | ((6U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
            & ((6U == (7U & (IData)((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                     >> 3U)))) | (7U 
                                                  == 
                                                  (7U 
                                                   & (IData)(
                                                             (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                              >> 3U)))))))) {
        VL_EXTEND_WQ(128,64, __Vtemp277, vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rdata2_0);
        VL_EXTEND_WQ(128,64, __Vtemp279, vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__wdata_align);
        VL_EXTEND_WQ(128,64, __Vtemp292, vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__wmask_align);
        __Vtemp303[0U] = (((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                             & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                            & (6U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                            ? __Vtemp277[0U] : ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                                  & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                                 & (7U 
                                                    == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                                                 ? 0U
                                                 : 
                                                (((6U 
                                                   == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                                  & (6U 
                                                     == 
                                                     (7U 
                                                      & (IData)(
                                                                (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                                 >> 3U)))))
                                                  ? 
                                                 __Vtemp279[0U]
                                                  : 0U))) 
                          & ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                               & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                              & (6U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                              ? 0xffffffffU : ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                                 & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                                & (7U 
                                                   == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                                                ? 0U
                                                : (
                                                   ((6U 
                                                     == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                                    & (6U 
                                                       == 
                                                       (7U 
                                                        & (IData)(
                                                                  (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                                   >> 3U)))))
                                                    ? 
                                                   __Vtemp292[0U]
                                                    : 0U))));
        __Vtemp303[1U] = (((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                             & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                            & (6U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                            ? __Vtemp277[1U] : ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                                  & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                                 & (7U 
                                                    == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                                                 ? 0U
                                                 : 
                                                (((6U 
                                                   == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                                  & (6U 
                                                     == 
                                                     (7U 
                                                      & (IData)(
                                                                (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                                 >> 3U)))))
                                                  ? 
                                                 __Vtemp279[1U]
                                                  : 0U))) 
                          & ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                               & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                              & (6U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                              ? 0xffffffffU : ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                                 & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                                & (7U 
                                                   == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                                                ? 0U
                                                : (
                                                   ((6U 
                                                     == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                                    & (6U 
                                                       == 
                                                       (7U 
                                                        & (IData)(
                                                                  (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                                   >> 3U)))))
                                                    ? 
                                                   __Vtemp292[1U]
                                                    : 0U))));
        __Vtemp303[2U] = (((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                             & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                            & (6U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                            ? __Vtemp277[2U] : ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                                  & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                                 & (7U 
                                                    == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                                                 ? (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rdata2_0)
                                                 : 
                                                (((6U 
                                                   == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                                  & (6U 
                                                     == 
                                                     (7U 
                                                      & (IData)(
                                                                (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                                 >> 3U)))))
                                                  ? 
                                                 __Vtemp279[2U]
                                                  : 
                                                 (((6U 
                                                    == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                                   & (7U 
                                                      == 
                                                      (7U 
                                                       & (IData)(
                                                                 (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                                  >> 3U)))))
                                                   ? (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__wdata_align)
                                                   : 0U)))) 
                          & ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                               & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                              & (6U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                              ? 0U : ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                        & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                       & (7U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                                       ? 0xffffffffU
                                       : (((6U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                           & (6U == 
                                              (7U & (IData)(
                                                            (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                             >> 3U)))))
                                           ? __Vtemp292[2U]
                                           : (((6U 
                                                == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                               & (7U 
                                                  == 
                                                  (7U 
                                                   & (IData)(
                                                             (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                              >> 3U)))))
                                               ? (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__wmask_align)
                                               : 0U)))));
        __Vtemp303[3U] = (((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                             & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                            & (6U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                            ? __Vtemp277[3U] : ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                                  & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                                 & (7U 
                                                    == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                                                 ? (IData)(
                                                           (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rdata2_0 
                                                            >> 0x20U))
                                                 : 
                                                (((6U 
                                                   == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                                  & (6U 
                                                     == 
                                                     (7U 
                                                      & (IData)(
                                                                (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                                 >> 3U)))))
                                                  ? 
                                                 __Vtemp279[3U]
                                                  : 
                                                 (((6U 
                                                    == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                                   & (7U 
                                                      == 
                                                      (7U 
                                                       & (IData)(
                                                                 (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                                  >> 3U)))))
                                                   ? (IData)(
                                                             (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__wdata_align 
                                                              >> 0x20U))
                                                   : 0U)))) 
                          & ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                               & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                              & (6U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                              ? 0U : ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                        & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                       & (7U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                                       ? 0xffffffffU
                                       : (((6U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                           & (6U == 
                                              (7U & (IData)(
                                                            (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                             >> 3U)))))
                                           ? __Vtemp292[3U]
                                           : (((6U 
                                                == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                               & (7U 
                                                  == 
                                                  (7U 
                                                   & (IData)(
                                                             (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                              >> 3U)))))
                                               ? (IData)(
                                                         (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__wmask_align 
                                                          >> 0x20U))
                                               : 0U)))));
        VL_EXTEND_WQ(128,64, __Vtemp307, vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__wmask_align);
        __Vdlyvval__top_test__DOT__sram_0__DOT__sram_7__DOT__ram__v0[0U] 
            = (__Vtemp303[0U] | (vlSelf->top_test__DOT__sram_0__DOT__sram_7__DOT__ram
                                 [vlSelf->top_test__DOT__io_sram7_addr][0U] 
                                 & (~ ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                         & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                        & (6U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                                        ? 0xffffffffU
                                        : ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                             & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                            & (7U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                                            ? 0U : 
                                           (((6U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                             & (6U 
                                                == 
                                                (7U 
                                                 & (IData)(
                                                           (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                            >> 3U)))))
                                             ? __Vtemp307[0U]
                                             : 0U))))));
        __Vdlyvval__top_test__DOT__sram_0__DOT__sram_7__DOT__ram__v0[1U] 
            = (__Vtemp303[1U] | (vlSelf->top_test__DOT__sram_0__DOT__sram_7__DOT__ram
                                 [vlSelf->top_test__DOT__io_sram7_addr][1U] 
                                 & (~ ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                         & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                        & (6U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                                        ? 0xffffffffU
                                        : ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                             & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                            & (7U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                                            ? 0U : 
                                           (((6U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                             & (6U 
                                                == 
                                                (7U 
                                                 & (IData)(
                                                           (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                            >> 3U)))))
                                             ? __Vtemp307[1U]
                                             : 0U))))));
        __Vdlyvval__top_test__DOT__sram_0__DOT__sram_7__DOT__ram__v0[2U] 
            = (__Vtemp303[2U] | (vlSelf->top_test__DOT__sram_0__DOT__sram_7__DOT__ram
                                 [vlSelf->top_test__DOT__io_sram7_addr][2U] 
                                 & (~ ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                         & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                        & (6U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                                        ? 0U : ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                                  & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                                 & (7U 
                                                    == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                                                 ? 0xffffffffU
                                                 : 
                                                (((6U 
                                                   == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                                  & (6U 
                                                     == 
                                                     (7U 
                                                      & (IData)(
                                                                (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                                 >> 3U)))))
                                                  ? 
                                                 __Vtemp307[2U]
                                                  : 
                                                 (((6U 
                                                    == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                                   & (7U 
                                                      == 
                                                      (7U 
                                                       & (IData)(
                                                                 (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                                  >> 3U)))))
                                                   ? (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__wmask_align)
                                                   : 0U)))))));
        __Vdlyvval__top_test__DOT__sram_0__DOT__sram_7__DOT__ram__v0[3U] 
            = (__Vtemp303[3U] | (vlSelf->top_test__DOT__sram_0__DOT__sram_7__DOT__ram
                                 [vlSelf->top_test__DOT__io_sram7_addr][3U] 
                                 & (~ ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                         & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                        & (6U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                                        ? 0U : ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
                                                  & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
                                                 & (7U 
                                                    == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))
                                                 ? 0xffffffffU
                                                 : 
                                                (((6U 
                                                   == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                                  & (6U 
                                                     == 
                                                     (7U 
                                                      & (IData)(
                                                                (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                                 >> 3U)))))
                                                  ? 
                                                 __Vtemp307[3U]
                                                  : 
                                                 (((6U 
                                                    == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
                                                   & (7U 
                                                      == 
                                                      (7U 
                                                       & (IData)(
                                                                 (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                                  >> 3U)))))
                                                   ? (IData)(
                                                             (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__wmask_align 
                                                              >> 0x20U))
                                                   : 0U)))))));
        __Vdlyvset__top_test__DOT__sram_0__DOT__sram_7__DOT__ram__v0 = 1U;
        __Vdlyvdim0__top_test__DOT__sram_0__DOT__sram_7__DOT__ram__v0 
            = vlSelf->top_test__DOT__io_sram7_addr;
    }
    if (((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__rvalid2_0) 
           & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready)) 
          & ((6U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)) 
             | (7U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len)))) 
         | ((6U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)) 
            & ((6U == (7U & (IData)((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                     >> 3U)))) | (7U 
                                                  == 
                                                  (7U 
                                                   & (IData)(
                                                             (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_result 
                                                              >> 3U)))))))) {
        vlSelf->top_test__DOT__io_sram7_rdata[0U] = 
            VL_RANDOM_I(32);
        vlSelf->top_test__DOT__io_sram7_rdata[1U] = 
            VL_RANDOM_I(32);
        vlSelf->top_test__DOT__io_sram7_rdata[2U] = 
            VL_RANDOM_I(32);
        vlSelf->top_test__DOT__io_sram7_rdata[3U] = 
            VL_RANDOM_I(32);
    } else {
        vlSelf->top_test__DOT__io_sram7_rdata[0U] = 
            vlSelf->top_test__DOT__sram_0__DOT__sram_7__DOT__ram
            [vlSelf->top_test__DOT__io_sram7_addr][0U];
        vlSelf->top_test__DOT__io_sram7_rdata[1U] = 
            vlSelf->top_test__DOT__sram_0__DOT__sram_7__DOT__ram
            [vlSelf->top_test__DOT__io_sram7_addr][1U];
        vlSelf->top_test__DOT__io_sram7_rdata[2U] = 
            vlSelf->top_test__DOT__sram_0__DOT__sram_7__DOT__ram
            [vlSelf->top_test__DOT__io_sram7_addr][2U];
        vlSelf->top_test__DOT__io_sram7_rdata[3U] = 
            vlSelf->top_test__DOT__sram_0__DOT__sram_7__DOT__ram
            [vlSelf->top_test__DOT__io_sram7_addr][3U];
    }
    if (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__stallable_pipeline_test__DOT__pipe1_to_pipe2_valid) 
         & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__stallable_pipeline_test__DOT__pipe2_allow_in))) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__src2_reg_is 
            = vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__r0__DOT__rf
            [(0x1fU & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                       >> 0x14U))];
    }
    if (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__stallable_pipeline_test__DOT__pipe1_to_pipe2_valid) 
         & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__stallable_pipeline_test__DOT__pipe2_allow_in))) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__stallable_pipeline_test__DOT__not_jump_reg_is 
            = vlSelf->top_test__DOT__ysyx_22050533_0__DOT__stallable_pipeline_test__DOT__not_jump_reg_id;
    }
    if (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__stallable_pipeline_test__DOT__pipe1_to_pipe2_valid) 
         & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__stallable_pipeline_test__DOT__pipe2_allow_in))) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__cpupc_reg_is 
            = vlSelf->top_test__DOT__ysyx_22050533_0__DOT__cpupc_reg_id;
    }
    if (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__stallable_pipeline_test__DOT__pipe1_to_pipe2_valid) 
         & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__stallable_pipeline_test__DOT__pipe2_allow_in))) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__stallable_pipeline_test__DOT__rf_wen_reg_is 
            = vlSelf->top_test__DOT__ysyx_22050533_0__DOT__rf_wen;
    }
    if (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__stallable_pipeline_test__DOT__pipe1_to_pipe2_valid) 
         & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__stallable_pipeline_test__DOT__pipe2_allow_in))) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__stallable_pipeline_test__DOT__rd_reg_is 
            = (0x1fU & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                        >> 7U));
    }
    if (__Vdlyvset__top_test__DOT__sram_0__DOT__sram_4__DOT__ram__v0) {
        vlSelf->top_test__DOT__sram_0__DOT__sram_4__DOT__ram[__Vdlyvdim0__top_test__DOT__sram_0__DOT__sram_4__DOT__ram__v0][0U] 
            = __Vdlyvval__top_test__DOT__sram_0__DOT__sram_4__DOT__ram__v0[0U];
        vlSelf->top_test__DOT__sram_0__DOT__sram_4__DOT__ram[__Vdlyvdim0__top_test__DOT__sram_0__DOT__sram_4__DOT__ram__v0][1U] 
            = __Vdlyvval__top_test__DOT__sram_0__DOT__sram_4__DOT__ram__v0[1U];
        vlSelf->top_test__DOT__sram_0__DOT__sram_4__DOT__ram[__Vdlyvdim0__top_test__DOT__sram_0__DOT__sram_4__DOT__ram__v0][2U] 
            = __Vdlyvval__top_test__DOT__sram_0__DOT__sram_4__DOT__ram__v0[2U];
        vlSelf->top_test__DOT__sram_0__DOT__sram_4__DOT__ram[__Vdlyvdim0__top_test__DOT__sram_0__DOT__sram_4__DOT__ram__v0][3U] 
            = __Vdlyvval__top_test__DOT__sram_0__DOT__sram_4__DOT__ram__v0[3U];
    }
    if (__Vdlyvset__top_test__DOT__sram_0__DOT__sram_5__DOT__ram__v0) {
        vlSelf->top_test__DOT__sram_0__DOT__sram_5__DOT__ram[__Vdlyvdim0__top_test__DOT__sram_0__DOT__sram_5__DOT__ram__v0][0U] 
            = __Vdlyvval__top_test__DOT__sram_0__DOT__sram_5__DOT__ram__v0[0U];
        vlSelf->top_test__DOT__sram_0__DOT__sram_5__DOT__ram[__Vdlyvdim0__top_test__DOT__sram_0__DOT__sram_5__DOT__ram__v0][1U] 
            = __Vdlyvval__top_test__DOT__sram_0__DOT__sram_5__DOT__ram__v0[1U];
        vlSelf->top_test__DOT__sram_0__DOT__sram_5__DOT__ram[__Vdlyvdim0__top_test__DOT__sram_0__DOT__sram_5__DOT__ram__v0][2U] 
            = __Vdlyvval__top_test__DOT__sram_0__DOT__sram_5__DOT__ram__v0[2U];
        vlSelf->top_test__DOT__sram_0__DOT__sram_5__DOT__ram[__Vdlyvdim0__top_test__DOT__sram_0__DOT__sram_5__DOT__ram__v0][3U] 
            = __Vdlyvval__top_test__DOT__sram_0__DOT__sram_5__DOT__ram__v0[3U];
    }
    if (__Vdlyvset__top_test__DOT__sram_0__DOT__sram_6__DOT__ram__v0) {
        vlSelf->top_test__DOT__sram_0__DOT__sram_6__DOT__ram[__Vdlyvdim0__top_test__DOT__sram_0__DOT__sram_6__DOT__ram__v0][0U] 
            = __Vdlyvval__top_test__DOT__sram_0__DOT__sram_6__DOT__ram__v0[0U];
        vlSelf->top_test__DOT__sram_0__DOT__sram_6__DOT__ram[__Vdlyvdim0__top_test__DOT__sram_0__DOT__sram_6__DOT__ram__v0][1U] 
            = __Vdlyvval__top_test__DOT__sram_0__DOT__sram_6__DOT__ram__v0[1U];
        vlSelf->top_test__DOT__sram_0__DOT__sram_6__DOT__ram[__Vdlyvdim0__top_test__DOT__sram_0__DOT__sram_6__DOT__ram__v0][2U] 
            = __Vdlyvval__top_test__DOT__sram_0__DOT__sram_6__DOT__ram__v0[2U];
        vlSelf->top_test__DOT__sram_0__DOT__sram_6__DOT__ram[__Vdlyvdim0__top_test__DOT__sram_0__DOT__sram_6__DOT__ram__v0][3U] 
            = __Vdlyvval__top_test__DOT__sram_0__DOT__sram_6__DOT__ram__v0[3U];
    }
    if (__Vdlyvset__top_test__DOT__sram_0__DOT__sram_7__DOT__ram__v0) {
        vlSelf->top_test__DOT__sram_0__DOT__sram_7__DOT__ram[__Vdlyvdim0__top_test__DOT__sram_0__DOT__sram_7__DOT__ram__v0][0U] 
            = __Vdlyvval__top_test__DOT__sram_0__DOT__sram_7__DOT__ram__v0[0U];
        vlSelf->top_test__DOT__sram_0__DOT__sram_7__DOT__ram[__Vdlyvdim0__top_test__DOT__sram_0__DOT__sram_7__DOT__ram__v0][1U] 
            = __Vdlyvval__top_test__DOT__sram_0__DOT__sram_7__DOT__ram__v0[1U];
        vlSelf->top_test__DOT__sram_0__DOT__sram_7__DOT__ram[__Vdlyvdim0__top_test__DOT__sram_0__DOT__sram_7__DOT__ram__v0][2U] 
            = __Vdlyvval__top_test__DOT__sram_0__DOT__sram_7__DOT__ram__v0[2U];
        vlSelf->top_test__DOT__sram_0__DOT__sram_7__DOT__ram[__Vdlyvdim0__top_test__DOT__sram_0__DOT__sram_7__DOT__ram__v0][3U] 
            = __Vdlyvval__top_test__DOT__sram_0__DOT__sram_7__DOT__ram__v0[3U];
    }
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len 
        = __Vdly__top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__d_r_len;
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rready 
        = ((1U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__read_state)) 
           | (2U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__read_state)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state 
        = __Vdly__top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state;
    if (__Vdlyvset__top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__r0__DOT__rf__v0) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__r0__DOT__rf[0U] = 0ULL;
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__r0__DOT__rf[1U] = 0ULL;
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__r0__DOT__rf[2U] = 0ULL;
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__r0__DOT__rf[3U] = 0ULL;
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__r0__DOT__rf[4U] = 0ULL;
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__r0__DOT__rf[5U] = 0ULL;
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__r0__DOT__rf[6U] = 0ULL;
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__r0__DOT__rf[7U] = 0ULL;
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__r0__DOT__rf[8U] = 0ULL;
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__r0__DOT__rf[9U] = 0ULL;
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__r0__DOT__rf[0xaU] = 0ULL;
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__r0__DOT__rf[0xbU] = 0ULL;
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__r0__DOT__rf[0xcU] = 0ULL;
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__r0__DOT__rf[0xdU] = 0ULL;
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__r0__DOT__rf[0xeU] = 0ULL;
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__r0__DOT__rf[0xfU] = 0ULL;
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__r0__DOT__rf[0x10U] = 0ULL;
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__r0__DOT__rf[0x11U] = 0ULL;
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__r0__DOT__rf[0x12U] = 0ULL;
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__r0__DOT__rf[0x13U] = 0ULL;
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__r0__DOT__rf[0x14U] = 0ULL;
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__r0__DOT__rf[0x15U] = 0ULL;
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__r0__DOT__rf[0x16U] = 0ULL;
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__r0__DOT__rf[0x17U] = 0ULL;
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__r0__DOT__rf[0x18U] = 0ULL;
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__r0__DOT__rf[0x19U] = 0ULL;
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__r0__DOT__rf[0x1aU] = 0ULL;
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__r0__DOT__rf[0x1bU] = 0ULL;
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__r0__DOT__rf[0x1cU] = 0ULL;
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__r0__DOT__rf[0x1dU] = 0ULL;
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__r0__DOT__rf[0x1eU] = 0ULL;
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__r0__DOT__rf[0x1fU] = 0ULL;
    }
    if (__Vdlyvset__top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__r0__DOT__rf__v32) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__r0__DOT__rf[__Vdlyvdim0__top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__r0__DOT__rf__v32] 
            = __Vdlyvval__top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__r0__DOT__rf__v32;
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__r0__DOT__rf[0U] = 0ULL;
    }
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__done 
        = ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__running_r) 
           & ((0x20U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__cnt)) 
              | (0U == ((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplier_r[0U] 
                         | vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplier_r[1U]) 
                        | vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__multiplier_r[2U]))));
    if (((IData)(vlSelf->inst_update) & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__stallable_pipeline_test__DOT__pipe1_allow_in))) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__e_j_b_inst_reg_id 
            = vlSelf->top_test__DOT__ysyx_22050533_0__DOT__e_j_b_inst;
    }
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__awvalid 
        = ((0U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__write_state)) 
           & (2U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__arvalid 
        = ((0U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__read_state)) 
           & (3U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__cache_state)));
    if (((IData)(vlSelf->inst_update) & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__stallable_pipeline_test__DOT__pipe1_allow_in))) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__stallable_pipeline_test__DOT__not_jump_reg_id 
            = vlSelf->top_test__DOT__ysyx_22050533_0__DOT__not_jump;
    }
    if (((IData)(vlSelf->inst_update) & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__stallable_pipeline_test__DOT__pipe1_allow_in))) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__cpupc_reg_id 
            = vlSelf->cpupc;
    }
    if (((IData)(vlSelf->inst_update) & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__stallable_pipeline_test__DOT__pipe1_allow_in))) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
            = vlSelf->inst;
    }
    __Vtableidx3 = vlSelf->reset;
    if ((1ULL & Vtop_test__ConstPool__TABLE_1e4755db_0
         [__Vtableidx3])) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__dnpc_reg_id 
            = Vtop_test__ConstPool__TABLE_b006366b_0
            [__Vtableidx3];
    }
    if ((2ULL & Vtop_test__ConstPool__TABLE_1e4755db_0
         [__Vtableidx3])) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__cpupc_reg_id 
            = Vtop_test__ConstPool__TABLE_ee06366b_0
            [__Vtableidx3];
    }
    if ((4ULL & Vtop_test__ConstPool__TABLE_1e4755db_0
         [__Vtableidx3])) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
            = Vtop_test__ConstPool__TABLE_2783c412_0
            [__Vtableidx3];
    }
    if ((8ULL & Vtop_test__ConstPool__TABLE_1e4755db_0
         [__Vtableidx3])) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__e_j_b_inst_reg_id 
            = Vtop_test__ConstPool__TABLE_ec5621d6_0
            [__Vtableidx3];
    }
    if ((0x10ULL & Vtop_test__ConstPool__TABLE_1e4755db_0
         [__Vtableidx3])) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__dnpc_reg_is 
            = Vtop_test__ConstPool__TABLE_ee06366b_0
            [__Vtableidx3];
    }
    if ((0x20ULL & Vtop_test__ConstPool__TABLE_1e4755db_0
         [__Vtableidx3])) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__cpupc_reg_is 
            = Vtop_test__ConstPool__TABLE_ee06366b_0
            [__Vtableidx3];
    }
    if ((0x40ULL & Vtop_test__ConstPool__TABLE_1e4755db_0
         [__Vtableidx3])) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__alu_src1_reg_is 
            = Vtop_test__ConstPool__TABLE_cbe52d84_0
            [__Vtableidx3];
    }
    if ((0x80ULL & Vtop_test__ConstPool__TABLE_1e4755db_0
         [__Vtableidx3])) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__alu_src2_reg_is 
            = Vtop_test__ConstPool__TABLE_148f7f3c_0
            [__Vtableidx3];
    }
    if ((0x100ULL & Vtop_test__ConstPool__TABLE_1e4755db_0
         [__Vtableidx3])) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__alu_control_reg_is 
            = Vtop_test__ConstPool__TABLE_9af37584_0
            [__Vtableidx3];
    }
    if ((0x200ULL & Vtop_test__ConstPool__TABLE_1e4755db_0
         [__Vtableidx3])) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__data_ram_ren_reg_is 
            = Vtop_test__ConstPool__TABLE_30cbcb46_0
            [__Vtableidx3];
    }
    if ((0x400ULL & Vtop_test__ConstPool__TABLE_1e4755db_0
         [__Vtableidx3])) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__data_ram_wen_reg_is 
            = Vtop_test__ConstPool__TABLE_30cbcb46_0
            [__Vtableidx3];
    }
    if ((0x800ULL & Vtop_test__ConstPool__TABLE_1e4755db_0
         [__Vtableidx3])) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__wmask_reg_is 
            = Vtop_test__ConstPool__TABLE_ed009cac_0
            [__Vtableidx3];
    }
    if ((0x1000ULL & Vtop_test__ConstPool__TABLE_1e4755db_0
         [__Vtableidx3])) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__l_choose_reg_is 
            = Vtop_test__ConstPool__TABLE_346a805f_0
            [__Vtableidx3];
    }
    if ((0x2000ULL & Vtop_test__ConstPool__TABLE_1e4755db_0
         [__Vtableidx3])) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__w_choose_reg_is 
            = Vtop_test__ConstPool__TABLE_30cbcb46_0
            [__Vtableidx3];
    }
    if ((0x4000ULL & Vtop_test__ConstPool__TABLE_1e4755db_0
         [__Vtableidx3])) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__src1_reg_is 
            = Vtop_test__ConstPool__TABLE_b006366b_0
            [__Vtableidx3];
    }
    if ((0x8000ULL & Vtop_test__ConstPool__TABLE_1e4755db_0
         [__Vtableidx3])) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__src2_reg_is 
            = Vtop_test__ConstPool__TABLE_b006366b_0
            [__Vtableidx3];
    }
    if ((0x10000ULL & Vtop_test__ConstPool__TABLE_1e4755db_0
         [__Vtableidx3])) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__imm_reg_is 
            = Vtop_test__ConstPool__TABLE_b006366b_0
            [__Vtableidx3];
    }
    if ((0x20000ULL & Vtop_test__ConstPool__TABLE_1e4755db_0
         [__Vtableidx3])) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__c_rdata_reg_is 
            = Vtop_test__ConstPool__TABLE_b006366b_0
            [__Vtableidx3];
    }
    if ((0x40000ULL & Vtop_test__ConstPool__TABLE_1e4755db_0
         [__Vtableidx3])) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__e_j_b_inst_reg_is 
            = Vtop_test__ConstPool__TABLE_ec5621d6_0
            [__Vtableidx3];
    }
    if ((0x80000ULL & Vtop_test__ConstPool__TABLE_1e4755db_0
         [__Vtableidx3])) {
        vlSelf->inst_reg_wb = Vtop_test__ConstPool__TABLE_2783c412_0
            [__Vtableidx3];
    }
    if ((0x100000ULL & Vtop_test__ConstPool__TABLE_1e4755db_0
         [__Vtableidx3])) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__e_j_b_inst_reg_wb 
            = Vtop_test__ConstPool__TABLE_ec5621d6_0
            [__Vtableidx3];
    }
    if ((0x200000ULL & Vtop_test__ConstPool__TABLE_1e4755db_0
         [__Vtableidx3])) {
        vlSelf->dnpc_reg_wb = Vtop_test__ConstPool__TABLE_ee06366b_0
            [__Vtableidx3];
    }
    if ((0x400000ULL & Vtop_test__ConstPool__TABLE_1e4755db_0
         [__Vtableidx3])) {
        vlSelf->cpupc_reg_wb = Vtop_test__ConstPool__TABLE_ee06366b_0
            [__Vtableidx3];
    }
    if ((0x800000ULL & Vtop_test__ConstPool__TABLE_1e4755db_0
         [__Vtableidx3])) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__sel_rf_res_reg_wb 
            = Vtop_test__ConstPool__TABLE_148f7f3c_0
            [__Vtableidx3];
    }
    if ((0x1000000ULL & Vtop_test__ConstPool__TABLE_1e4755db_0
         [__Vtableidx3])) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__rf_wen_reg_wb 
            = Vtop_test__ConstPool__TABLE_30cbcb46_0
            [__Vtableidx3];
    }
    if ((0x2000000ULL & Vtop_test__ConstPool__TABLE_1e4755db_0
         [__Vtableidx3])) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__alu_result_reg_wb 
            = Vtop_test__ConstPool__TABLE_b006366b_0
            [__Vtableidx3];
    }
    if ((0x4000000ULL & Vtop_test__ConstPool__TABLE_1e4755db_0
         [__Vtableidx3])) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ram_data_reg_wb 
            = Vtop_test__ConstPool__TABLE_b006366b_0
            [__Vtableidx3];
    }
    if ((0x8000000ULL & Vtop_test__ConstPool__TABLE_1e4755db_0
         [__Vtableidx3])) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__rd_reg_wb 
            = Vtop_test__ConstPool__TABLE_5e9281fb_0
            [__Vtableidx3];
    }
    if ((0x10000000ULL & Vtop_test__ConstPool__TABLE_1e4755db_0
         [__Vtableidx3])) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__c_rdata_reg_wb 
            = Vtop_test__ConstPool__TABLE_b006366b_0
            [__Vtableidx3];
    }
    if ((0x20000000ULL & Vtop_test__ConstPool__TABLE_1e4755db_0
         [__Vtableidx3])) {
        vlSelf->cpupc_reg_finish = Vtop_test__ConstPool__TABLE_ee06366b_0
            [__Vtableidx3];
    }
    if ((0x40000000ULL & Vtop_test__ConstPool__TABLE_1e4755db_0
         [__Vtableidx3])) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__stallable_pipeline_test__DOT__sel_rf_res_reg_is 
            = Vtop_test__ConstPool__TABLE_148f7f3c_0
            [__Vtableidx3];
    }
    if ((0x80000000ULL & Vtop_test__ConstPool__TABLE_1e4755db_0
         [__Vtableidx3])) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__stallable_pipeline_test__DOT__rf_wen_reg_is 
            = Vtop_test__ConstPool__TABLE_30cbcb46_0
            [__Vtableidx3];
    }
    if ((0x100000000ULL & Vtop_test__ConstPool__TABLE_1e4755db_0
         [__Vtableidx3])) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__stallable_pipeline_test__DOT__rd_reg_is 
            = Vtop_test__ConstPool__TABLE_5e9281fb_0
            [__Vtableidx3];
    }
    if ((0x200000000ULL & Vtop_test__ConstPool__TABLE_1e4755db_0
         [__Vtableidx3])) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__stallable_pipeline_test__DOT__inst_reg_is 
            = Vtop_test__ConstPool__TABLE_2783c412_0
            [__Vtableidx3];
    }
    if ((0x400000000ULL & Vtop_test__ConstPool__TABLE_1e4755db_0
         [__Vtableidx3])) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__stallable_pipeline_test__DOT__not_jump_reg_id 
            = Vtop_test__ConstPool__TABLE_30cbcb46_0
            [__Vtableidx3];
    }
    if ((0x800000000ULL & Vtop_test__ConstPool__TABLE_1e4755db_0
         [__Vtableidx3])) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__stallable_pipeline_test__DOT__not_jump_reg_is 
            = Vtop_test__ConstPool__TABLE_30cbcb46_0
            [__Vtableidx3];
    }
    if ((0x1000000000ULL & Vtop_test__ConstPool__TABLE_1e4755db_0
         [__Vtableidx3])) {
        vlSelf->top_test__DOT__ysyx_22050533_0__DOT__stallable_pipeline_test__DOT__not_jump_reg_wb 
            = Vtop_test__ConstPool__TABLE_30cbcb46_0
            [__Vtableidx3];
    }
    vlSelf->inst_update = (3U == (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__if_change__DOT__icache_9__DOT__cache_state));
    vlSelf->cpupc = ((IData)(vlSelf->reset) ? 0x80000000ULL
                      : vlSelf->dnpc);
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__wb0__DOT____Vcellinp__mux3____pinNumber3[0U] 
        = (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__c_rdata_reg_wb);
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__wb0__DOT____Vcellinp__mux3____pinNumber3[1U] 
        = (IData)((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__c_rdata_reg_wb 
                   >> 0x20U));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__wb0__DOT____Vcellinp__mux3____pinNumber3[2U] 
        = (4U | ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ram_data_reg_wb) 
                 << 3U));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__wb0__DOT____Vcellinp__mux3____pinNumber3[3U] 
        = (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ram_data_reg_wb) 
            >> 0x1dU) | ((IData)((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ram_data_reg_wb 
                                  >> 0x20U)) << 3U));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__wb0__DOT____Vcellinp__mux3____pinNumber3[4U] 
        = (0x10U | (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__alu_result_reg_wb) 
                     << 6U) | ((IData)((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ram_data_reg_wb 
                                        >> 0x20U)) 
                               >> 0x1dU)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__wb0__DOT____Vcellinp__mux3____pinNumber3[5U] 
        = (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__alu_result_reg_wb) 
            >> 0x1aU) | ((IData)((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__alu_result_reg_wb 
                                  >> 0x20U)) << 6U));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__wb0__DOT____Vcellinp__mux3____pinNumber3[6U] 
        = (0x40U | ((IData)((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__alu_result_reg_wb 
                             >> 0x20U)) >> 0x1aU));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__wcache_en 
        = ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__data_ram_wen_reg_is) 
           & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__pipe2_valid));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__mem_2__DOT__ysyx_22050533_dcache_0__DOT__rcache_en 
        = ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__data_ram_ren_reg_is) 
           & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__pipe2_valid));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__div_valid 
        = (((((IData)((0U != (0x6000U & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__alu_control_reg_is))) 
              & (~ (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__div_doing))) 
             & (~ (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__div_out_valid))) 
            & (~ (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__div_finish))) 
           & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__pipe2_valid));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__mul_valid 
        = (((((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__alu_control_reg_is 
               >> 0xcU) & (~ (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__mul_doing))) 
             & (~ (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__mul_out_valid))) 
            & (~ (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__mul_finish))) 
           & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__pipe2_valid));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__adder_cin 
        = ((IData)((0U != (0xeU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__alu_control_reg_is)))
            ? 1U : 0U);
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__src1 
        = vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__r0__DOT__rf
        [(0x1fU & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                   >> 0xfU))];
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__fu_7_d 
        = ((0x18U & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__fu_7_d)) 
           | (((1U == (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                       >> 0x19U)) << 2U) | (((0x20U 
                                              == (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                                  >> 0x19U)) 
                                             << 1U) 
                                            | (0U == 
                                               (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                                >> 0x19U)))));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__fu_7_d 
        = ((7U & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__fu_7_d)) 
           | (((0x10U == (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                          >> 0x1aU)) << 4U) | ((0U 
                                                == 
                                                (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                                 >> 0x1aU)) 
                                               << 3U)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__op_d 
        = ((0xff8U & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__op_d)) 
           | (((0x6fU == (0x7fU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id)) 
               << 2U) | (((0x17U == (0x7fU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id)) 
                          << 1U) | (0x37U == (0x7fU 
                                              & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id)))));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__op_d 
        = ((0xfc7U & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__op_d)) 
           | (((3U == (0x7fU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id)) 
               << 5U) | (((0x63U == (0x7fU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id)) 
                          << 4U) | ((0x67U == (0x7fU 
                                               & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id)) 
                                    << 3U))));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__op_d 
        = ((0xe3fU & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__op_d)) 
           | (((0x33U == (0x7fU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id)) 
               << 8U) | (((0x13U == (0x7fU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id)) 
                          << 7U) | ((0x23U == (0x7fU 
                                               & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id)) 
                                    << 6U))));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__op_d 
        = ((0x1ffU & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__op_d)) 
           | (((0x3bU == (0x7fU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id)) 
               << 0xbU) | (((0x1bU == (0x7fU & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id)) 
                            << 0xaU) | ((0x73U == (0x7fU 
                                                   & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id)) 
                                        << 9U))));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__immi 
        = (((- (QData)((IData)((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                >> 0x1fU)))) << 0xcU) 
           | (QData)((IData)((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                              >> 0x14U))));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__immu 
        = (((QData)((IData)((- (IData)((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                        >> 0x1fU))))) 
            << 0x20U) | (QData)((IData)((0xfffff000U 
                                         & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id))));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT____Vcellinp__mux2____pinNumber3[0U] = 4U;
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT____Vcellinp__mux2____pinNumber3[1U] = 0U;
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT____Vcellinp__mux2____pinNumber3[2U] 
        = (4U | ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__imm_reg_is) 
                 << 3U));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT____Vcellinp__mux2____pinNumber3[3U] 
        = (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__imm_reg_is) 
            >> 0x1dU) | ((IData)((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__imm_reg_is 
                                  >> 0x20U)) << 3U));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT____Vcellinp__mux2____pinNumber3[4U] 
        = (0x10U | (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__src2_reg_is) 
                     << 6U) | ((IData)((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__imm_reg_is 
                                        >> 0x20U)) 
                               >> 0x1dU)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT____Vcellinp__mux2____pinNumber3[5U] 
        = (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__src2_reg_is) 
            >> 0x1aU) | ((IData)((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__src2_reg_is 
                                  >> 0x20U)) << 6U));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT____Vcellinp__mux2____pinNumber3[6U] 
        = (0x40U | ((IData)((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__src2_reg_is 
                             >> 0x20U)) >> 0x1aU));
    VL_EXTEND_WQ(66,64, __Vtemp336, (4ULL + vlSelf->top_test__DOT__ysyx_22050533_0__DOT__cpupc_reg_is));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__set_dnpc_0__DOT____Vcellinp__mux4____pinNumber3[0U] 
        = (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__c_rdata_reg_is);
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__set_dnpc_0__DOT____Vcellinp__mux4____pinNumber3[1U] 
        = (IData)((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__c_rdata_reg_is 
                   >> 0x20U));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__set_dnpc_0__DOT____Vcellinp__mux4____pinNumber3[2U] 
        = (3U | ((IData)((0xfffffffffffffffeULL & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__src1_reg_is 
                                                   + vlSelf->top_test__DOT__ysyx_22050533_0__DOT__imm_reg_is))) 
                 << 2U));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__set_dnpc_0__DOT____Vcellinp__mux4____pinNumber3[3U] 
        = (((IData)((0xfffffffffffffffeULL & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__src1_reg_is 
                                              + vlSelf->top_test__DOT__ysyx_22050533_0__DOT__imm_reg_is))) 
            >> 0x1eU) | ((IData)(((0xfffffffffffffffeULL 
                                   & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__src1_reg_is 
                                      + vlSelf->top_test__DOT__ysyx_22050533_0__DOT__imm_reg_is)) 
                                  >> 0x20U)) << 2U));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__set_dnpc_0__DOT____Vcellinp__mux4____pinNumber3[4U] 
        = (8U | (((IData)((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__cpupc_reg_is 
                           + vlSelf->top_test__DOT__ysyx_22050533_0__DOT__imm_reg_is)) 
                  << 4U) | ((IData)(((0xfffffffffffffffeULL 
                                      & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__src1_reg_is 
                                         + vlSelf->top_test__DOT__ysyx_22050533_0__DOT__imm_reg_is)) 
                                     >> 0x20U)) >> 0x1eU)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__set_dnpc_0__DOT____Vcellinp__mux4____pinNumber3[5U] 
        = (((IData)((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__cpupc_reg_is 
                     + vlSelf->top_test__DOT__ysyx_22050533_0__DOT__imm_reg_is)) 
            >> 0x1cU) | ((IData)(((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__cpupc_reg_is 
                                   + vlSelf->top_test__DOT__ysyx_22050533_0__DOT__imm_reg_is) 
                                  >> 0x20U)) << 4U));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__set_dnpc_0__DOT____Vcellinp__mux4____pinNumber3[6U] 
        = (0x10U | ((__Vtemp336[0U] << 6U) | ((IData)(
                                                      ((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__cpupc_reg_is 
                                                        + vlSelf->top_test__DOT__ysyx_22050533_0__DOT__imm_reg_is) 
                                                       >> 0x20U)) 
                                              >> 0x1cU)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__set_dnpc_0__DOT____Vcellinp__mux4____pinNumber3[7U] 
        = ((__Vtemp336[0U] >> 0x1aU) | (__Vtemp336[1U] 
                                        << 6U));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__set_dnpc_0__DOT____Vcellinp__mux4____pinNumber3[8U] 
        = ((__Vtemp336[1U] >> 0x1aU) | (__Vtemp336[2U] 
                                        << 6U));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT____Vcellinp__mux1____pinNumber3[0U] 
        = (IData)((((QData)((IData)((- (IData)((1U 
                                                & (IData)(
                                                          (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__src1_reg_is 
                                                           >> 0x1fU))))))) 
                    << 0x20U) | (QData)((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__src1_reg_is))));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT____Vcellinp__mux1____pinNumber3[1U] 
        = (IData)(((((QData)((IData)((- (IData)((1U 
                                                 & (IData)(
                                                           (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__src1_reg_is 
                                                            >> 0x1fU))))))) 
                     << 0x20U) | (QData)((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__src1_reg_is))) 
                   >> 0x20U));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT____Vcellinp__mux1____pinNumber3[2U] 
        = (8U | ((IData)((QData)((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__src1_reg_is))) 
                 << 4U));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT____Vcellinp__mux1____pinNumber3[3U] 
        = (((IData)((QData)((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__src1_reg_is))) 
            >> 0x1cU) | ((IData)(((QData)((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__src1_reg_is)) 
                                  >> 0x20U)) << 4U));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT____Vcellinp__mux1____pinNumber3[4U] 
        = (0x40U | (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__cpupc_reg_is) 
                     << 8U) | ((IData)(((QData)((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__src1_reg_is)) 
                                        >> 0x20U)) 
                               >> 0x1cU)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT____Vcellinp__mux1____pinNumber3[5U] 
        = (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__cpupc_reg_is) 
            >> 0x18U) | ((IData)((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__cpupc_reg_is 
                                  >> 0x20U)) << 8U));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT____Vcellinp__mux1____pinNumber3[6U] 
        = (0x200U | (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__src1_reg_is) 
                      << 0xcU) | ((IData)((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__cpupc_reg_is 
                                           >> 0x20U)) 
                                  >> 0x18U)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT____Vcellinp__mux1____pinNumber3[7U] 
        = (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__src1_reg_is) 
            >> 0x14U) | ((IData)((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__src1_reg_is 
                                  >> 0x20U)) << 0xcU));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT____Vcellinp__mux1____pinNumber3[8U] 
        = (0x1000U | ((IData)((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__src1_reg_is 
                               >> 0x20U)) >> 0x14U));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__wb0__DOT__mux3__DOT__i0__DOT__pair_list[0U][0U] 
        = vlSelf->top_test__DOT__ysyx_22050533_0__DOT__wb0__DOT____Vcellinp__mux3____pinNumber3[0U];
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__wb0__DOT__mux3__DOT__i0__DOT__pair_list[0U][1U] 
        = vlSelf->top_test__DOT__ysyx_22050533_0__DOT__wb0__DOT____Vcellinp__mux3____pinNumber3[1U];
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__wb0__DOT__mux3__DOT__i0__DOT__pair_list[0U][2U] 
        = (7U & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__wb0__DOT____Vcellinp__mux3____pinNumber3[2U]);
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__wb0__DOT__mux3__DOT__i0__DOT__pair_list[1U][0U] 
        = ((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__wb0__DOT____Vcellinp__mux3____pinNumber3[3U] 
            << 0x1dU) | (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__wb0__DOT____Vcellinp__mux3____pinNumber3[2U] 
                         >> 3U));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__wb0__DOT__mux3__DOT__i0__DOT__pair_list[1U][1U] 
        = ((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__wb0__DOT____Vcellinp__mux3____pinNumber3[4U] 
            << 0x1dU) | (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__wb0__DOT____Vcellinp__mux3____pinNumber3[3U] 
                         >> 3U));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__wb0__DOT__mux3__DOT__i0__DOT__pair_list[1U][2U] 
        = (7U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__wb0__DOT____Vcellinp__mux3____pinNumber3[4U] 
                 >> 3U));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__wb0__DOT__mux3__DOT__i0__DOT__pair_list[2U][0U] 
        = ((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__wb0__DOT____Vcellinp__mux3____pinNumber3[5U] 
            << 0x1aU) | (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__wb0__DOT____Vcellinp__mux3____pinNumber3[4U] 
                         >> 6U));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__wb0__DOT__mux3__DOT__i0__DOT__pair_list[2U][1U] 
        = ((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__wb0__DOT____Vcellinp__mux3____pinNumber3[6U] 
            << 0x1aU) | (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__wb0__DOT____Vcellinp__mux3____pinNumber3[5U] 
                         >> 6U));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__wb0__DOT__mux3__DOT__i0__DOT__pair_list[2U][2U] 
        = (7U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__wb0__DOT____Vcellinp__mux3____pinNumber3[6U] 
                 >> 6U));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_div_0__DOT__div_prepare 
        = ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__div_ready) 
           & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__div_valid));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__ysyx_22050533_mulu_0__DOT__mul_prepare 
        = ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__mul_valid) 
           & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__exe_0__DOT__ysyx_22050533_Alu3_0__DOT__mul_ready));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__csrrw 
        = (1U & ((((IData)(1U) << (7U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                         >> 0xcU))) 
                  >> 1U) & ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__op_d) 
                            >> 9U)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__csrrs 
        = (1U & ((((IData)(1U) << (7U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                         >> 0xcU))) 
                  >> 2U) & ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__op_d) 
                            >> 9U)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__srlw 
        = (1U & (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__fu_7_d) 
                  & (((IData)(1U) << (7U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                            >> 0xcU))) 
                     >> 5U)) & ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__op_d) 
                                >> 0xbU)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__addi 
        = (1U & (((IData)(1U) << (7U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                        >> 0xcU))) 
                 & ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__op_d) 
                    >> 7U)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__andi 
        = (1U & ((((IData)(1U) << (7U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                         >> 0xcU))) 
                  >> 7U) & ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__op_d) 
                            >> 7U)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__xori 
        = (1U & ((((IData)(1U) << (7U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                         >> 0xcU))) 
                  >> 4U) & ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__op_d) 
                            >> 7U)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__ori 
        = (1U & ((((IData)(1U) << (7U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                         >> 0xcU))) 
                  >> 6U) & ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__op_d) 
                            >> 7U)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__addiw 
        = (1U & (((IData)(1U) << (7U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                        >> 0xcU))) 
                 & ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__op_d) 
                    >> 0xaU)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__lw 
        = (1U & ((((IData)(1U) << (7U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                         >> 0xcU))) 
                  >> 2U) & ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__op_d) 
                            >> 5U)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__lwu 
        = (1U & ((((IData)(1U) << (7U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                         >> 0xcU))) 
                  >> 6U) & ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__op_d) 
                            >> 5U)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__lh 
        = (1U & ((((IData)(1U) << (7U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                         >> 0xcU))) 
                  >> 1U) & ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__op_d) 
                            >> 5U)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__lhu 
        = (1U & ((((IData)(1U) << (7U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                         >> 0xcU))) 
                  >> 5U) & ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__op_d) 
                            >> 5U)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__lb 
        = (1U & (((IData)(1U) << (7U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                        >> 0xcU))) 
                 & ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__op_d) 
                    >> 5U)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__lbu 
        = (1U & ((((IData)(1U) << (7U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                         >> 0xcU))) 
                  >> 4U) & ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__op_d) 
                            >> 5U)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__ld 
        = (1U & ((((IData)(1U) << (7U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                         >> 0xcU))) 
                  >> 3U) & ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__op_d) 
                            >> 5U)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__sltiu 
        = (1U & ((((IData)(1U) << (7U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                         >> 0xcU))) 
                  >> 3U) & ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__op_d) 
                            >> 7U)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__slliw 
        = (1U & ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__fu_7_d) 
                   >> 3U) & (((IData)(1U) << (7U & 
                                              (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                               >> 0xcU))) 
                             >> 1U)) & ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__op_d) 
                                        >> 0xaU)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__srliw 
        = (1U & ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__fu_7_d) 
                   >> 3U) & (((IData)(1U) << (7U & 
                                              (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                               >> 0xcU))) 
                             >> 5U)) & ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__op_d) 
                                        >> 0xaU)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__sraiw 
        = (1U & ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__fu_7_d) 
                   >> 4U) & (((IData)(1U) << (7U & 
                                              (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                               >> 0xcU))) 
                             >> 5U)) & ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__op_d) 
                                        >> 0xaU)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__srai 
        = (1U & ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__fu_7_d) 
                   >> 4U) & (((IData)(1U) << (7U & 
                                              (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                               >> 0xcU))) 
                             >> 5U)) & ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__op_d) 
                                        >> 7U)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__slli 
        = (1U & ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__fu_7_d) 
                   >> 3U) & (((IData)(1U) << (7U & 
                                              (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                               >> 0xcU))) 
                             >> 1U)) & ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__op_d) 
                                        >> 7U)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__srli 
        = (1U & ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__fu_7_d) 
                   >> 3U) & (((IData)(1U) << (7U & 
                                              (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                               >> 0xcU))) 
                             >> 5U)) & ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__op_d) 
                                        >> 7U)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__sd 
        = (1U & ((((IData)(1U) << (7U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                         >> 0xcU))) 
                  >> 3U) & ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__op_d) 
                            >> 6U)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__sh 
        = (1U & ((((IData)(1U) << (7U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                         >> 0xcU))) 
                  >> 1U) & ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__op_d) 
                            >> 6U)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__sw 
        = (1U & ((((IData)(1U) << (7U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                         >> 0xcU))) 
                  >> 2U) & ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__op_d) 
                            >> 6U)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__sb 
        = (1U & (((IData)(1U) << (7U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                        >> 0xcU))) 
                 & ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__op_d) 
                    >> 6U)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__sll 
        = (1U & (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__fu_7_d) 
                  & (((IData)(1U) << (7U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                            >> 0xcU))) 
                     >> 1U)) & ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__op_d) 
                                >> 8U)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__srl 
        = (1U & (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__fu_7_d) 
                  & (((IData)(1U) << (7U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                            >> 0xcU))) 
                     >> 5U)) & ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__op_d) 
                                >> 8U)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__sra 
        = (1U & ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__fu_7_d) 
                   >> 1U) & (((IData)(1U) << (7U & 
                                              (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                               >> 0xcU))) 
                             >> 5U)) & ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__op_d) 
                                        >> 8U)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__sllw 
        = (1U & (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__fu_7_d) 
                  & (((IData)(1U) << (7U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                            >> 0xcU))) 
                     >> 1U)) & ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__op_d) 
                                >> 0xbU)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__sraw 
        = (1U & ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__fu_7_d) 
                   >> 1U) & (((IData)(1U) << (7U & 
                                              (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                               >> 0xcU))) 
                             >> 5U)) & ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__op_d) 
                                        >> 0xbU)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__addw 
        = (1U & (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__fu_7_d) 
                  & ((IData)(1U) << (7U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                           >> 0xcU)))) 
                 & ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__op_d) 
                    >> 0xbU)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__subw 
        = (1U & ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__fu_7_d) 
                   >> 1U) & ((IData)(1U) << (7U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                                   >> 0xcU)))) 
                 & ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__op_d) 
                    >> 0xbU)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__mulw 
        = (1U & ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__fu_7_d) 
                   >> 2U) & ((IData)(1U) << (7U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                                   >> 0xcU)))) 
                 & ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__op_d) 
                    >> 0xbU)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__divw 
        = (1U & ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__fu_7_d) 
                   >> 2U) & (((IData)(1U) << (7U & 
                                              (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                               >> 0xcU))) 
                             >> 4U)) & ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__op_d) 
                                        >> 0xbU)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__divuw 
        = (1U & ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__fu_7_d) 
                   >> 2U) & (((IData)(1U) << (7U & 
                                              (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                               >> 0xcU))) 
                             >> 5U)) & ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__op_d) 
                                        >> 0xbU)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__remw 
        = (1U & ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__fu_7_d) 
                   >> 2U) & (((IData)(1U) << (7U & 
                                              (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                               >> 0xcU))) 
                             >> 6U)) & ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__op_d) 
                                        >> 0xbU)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__remuw 
        = (1U & ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__fu_7_d) 
                   >> 2U) & (((IData)(1U) << (7U & 
                                              (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                               >> 0xcU))) 
                             >> 7U)) & ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__op_d) 
                                        >> 0xbU)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__divu 
        = (1U & ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__fu_7_d) 
                   >> 2U) & (((IData)(1U) << (7U & 
                                              (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                               >> 0xcU))) 
                             >> 5U)) & ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__op_d) 
                                        >> 8U)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__div 
        = (1U & ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__fu_7_d) 
                   >> 2U) & (((IData)(1U) << (7U & 
                                              (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                               >> 0xcU))) 
                             >> 4U)) & ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__op_d) 
                                        >> 8U)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__rem 
        = (1U & ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__fu_7_d) 
                   >> 2U) & (((IData)(1U) << (7U & 
                                              (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                               >> 0xcU))) 
                             >> 6U)) & ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__op_d) 
                                        >> 8U)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__remu 
        = (1U & ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__fu_7_d) 
                   >> 2U) & (((IData)(1U) << (7U & 
                                              (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                               >> 0xcU))) 
                             >> 7U)) & ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__op_d) 
                                        >> 8U)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__Add 
        = (1U & (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__fu_7_d) 
                  & ((IData)(1U) << (7U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                           >> 0xcU)))) 
                 & ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__op_d) 
                    >> 8U)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__Mul 
        = (1U & ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__fu_7_d) 
                   >> 2U) & ((IData)(1U) << (7U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                                   >> 0xcU)))) 
                 & ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__op_d) 
                    >> 8U)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__And 
        = (1U & (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__fu_7_d) 
                  & (((IData)(1U) << (7U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                            >> 0xcU))) 
                     >> 7U)) & ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__op_d) 
                                >> 8U)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__Xor 
        = (1U & (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__fu_7_d) 
                  & (((IData)(1U) << (7U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                            >> 0xcU))) 
                     >> 4U)) & ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__op_d) 
                                >> 8U)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__Or 
        = (1U & (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__fu_7_d) 
                  & (((IData)(1U) << (7U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                            >> 0xcU))) 
                     >> 6U)) & ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__op_d) 
                                >> 8U)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__sltu 
        = (1U & (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__fu_7_d) 
                  & (((IData)(1U) << (7U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                            >> 0xcU))) 
                     >> 3U)) & ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__op_d) 
                                >> 8U)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__slt 
        = (1U & (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__fu_7_d) 
                  & (((IData)(1U) << (7U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                            >> 0xcU))) 
                     >> 2U)) & ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__op_d) 
                                >> 8U)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__ysyx_22050533_control_0__DOT__sub 
        = (1U & ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__fu_7_d) 
                   >> 1U) & ((IData)(1U) << (7U & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                                   >> 0xcU)))) 
                 & ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__op_d) 
                    >> 8U)));
    __Vtemp363[6U] = (((IData)((((- (QData)((IData)(
                                                    (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                                     >> 0x1fU)))) 
                                 << 0xdU) | (QData)((IData)(
                                                            ((0x1000U 
                                                              & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                                                 >> 0x13U)) 
                                                             | ((0x800U 
                                                                 & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                                                    << 4U)) 
                                                                | ((0x7e0U 
                                                                    & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                                                       >> 0x14U)) 
                                                                   | (0x1eU 
                                                                      & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                                                         >> 7U))))))))) 
                       >> 0x1cU) | ((IData)(((((- (QData)((IData)(
                                                                  (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                                                   >> 0x1fU)))) 
                                               << 0xdU) 
                                              | (QData)((IData)(
                                                                ((0x1000U 
                                                                  & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                                                     >> 0x13U)) 
                                                                 | ((0x800U 
                                                                     & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                                                        << 4U)) 
                                                                    | ((0x7e0U 
                                                                        & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                                                           >> 0x14U)) 
                                                                       | (0x1eU 
                                                                          & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                                                             >> 7U)))))))) 
                                             >> 0x20U)) 
                                    << 4U));
    __Vtemp367[0xaU] = (((IData)((((- (QData)((IData)(
                                                      (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                                       >> 0x1fU)))) 
                                   << 0x15U) | (QData)((IData)(
                                                               ((0x100000U 
                                                                 & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                                                    >> 0xbU)) 
                                                                | ((0xff000U 
                                                                    & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id) 
                                                                   | ((0x800U 
                                                                       & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                                                          >> 9U)) 
                                                                      | (0x7feU 
                                                                         & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                                                            >> 0x14U))))))))) 
                         >> 4U) | ((IData)(((((- (QData)((IData)(
                                                                 (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                                                  >> 0x1fU)))) 
                                              << 0x15U) 
                                             | (QData)((IData)(
                                                               ((0x100000U 
                                                                 & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                                                    >> 0xbU)) 
                                                                | ((0xff000U 
                                                                    & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id) 
                                                                   | ((0x800U 
                                                                       & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                                                          >> 9U)) 
                                                                      | (0x7feU 
                                                                         & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                                                            >> 0x14U)))))))) 
                                            >> 0x20U)) 
                                   << 0x1cU));
    __Vtemp377[7U] = ((0xfffff0U & ((IData)((((- (QData)((IData)(
                                                                 (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                                                  >> 0x1fU)))) 
                                              << 0xcU) 
                                             | (QData)((IData)(
                                                               ((0xfe0U 
                                                                 & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                                                    >> 0x14U)) 
                                                                | (0x1fU 
                                                                   & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                                                      >> 7U))))))) 
                                    << 4U)) | (0xff000000U 
                                               & ((IData)(
                                                          (((- (QData)((IData)(
                                                                               (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                                                                >> 0x1fU)))) 
                                                            << 0xcU) 
                                                           | (QData)((IData)(
                                                                             ((0xfe0U 
                                                                               & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                                                                >> 0x14U)) 
                                                                              | (0x1fU 
                                                                                & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                                                                >> 7U))))))) 
                                                  << 4U)));
    __Vtemp377[8U] = ((((IData)((((- (QData)((IData)(
                                                     (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                                      >> 0x1fU)))) 
                                  << 0xcU) | (QData)((IData)(
                                                             ((0xfe0U 
                                                               & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                                                  >> 0x14U)) 
                                                              | (0x1fU 
                                                                 & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                                                    >> 7U))))))) 
                        >> 0x1cU) | (0xfffff0U & ((IData)(
                                                          ((((- (QData)((IData)(
                                                                                (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                                                                >> 0x1fU)))) 
                                                             << 0xcU) 
                                                            | (QData)((IData)(
                                                                              ((0xfe0U 
                                                                                & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                                                                >> 0x14U)) 
                                                                               | (0x1fU 
                                                                                & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                                                                >> 7U)))))) 
                                                           >> 0x20U)) 
                                                  << 4U))) 
                      | (0xff000000U & ((IData)((((
                                                   (- (QData)((IData)(
                                                                      (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                                                       >> 0x1fU)))) 
                                                   << 0xcU) 
                                                  | (QData)((IData)(
                                                                    ((0xfe0U 
                                                                      & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                                                         >> 0x14U)) 
                                                                     | (0x1fU 
                                                                        & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                                                           >> 7U)))))) 
                                                 >> 0x20U)) 
                                        << 4U)));
    __Vtemp377[0xeU] = (1U | ((0xffff00U & ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__immi) 
                                            << 8U)) 
                              | (0xff000000U & ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__immi) 
                                                << 8U))));
    __Vtemp377[0xfU] = ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__immi) 
                          >> 0x18U) | (0xffff00U & 
                                       ((IData)((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__immi 
                                                 >> 0x20U)) 
                                        << 8U))) | 
                        (0xff000000U & ((IData)((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__immi 
                                                 >> 0x20U)) 
                                        << 8U)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0U] 
        = (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__immi);
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[1U] 
        = (IData)((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__immi 
                   >> 0x20U));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[2U] 
        = (0x400U | ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__immi) 
                     << 0xcU));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[3U] 
        = (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__immi) 
            >> 0x14U) | ((IData)((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__immi 
                                  >> 0x20U)) << 0xcU));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[4U] 
        = (0x200000U | (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__immi) 
                         << 0x18U) | ((IData)((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__immi 
                                               >> 0x20U)) 
                                      >> 0x14U)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[5U] 
        = (((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__immi) 
            >> 8U) | ((IData)((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__immi 
                               >> 0x20U)) << 0x18U));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[6U] 
        = (0x80000000U | ((IData)((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__immi 
                                   >> 0x20U)) >> 8U));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[7U] 
        = __Vtemp377[7U];
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[8U] 
        = __Vtemp377[8U];
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[9U] 
        = (0x400U | (((0xff0000U & ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__immi) 
                                    << 0x10U)) | ((IData)(
                                                          ((((- (QData)((IData)(
                                                                                (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                                                                >> 0x1fU)))) 
                                                             << 0xcU) 
                                                            | (QData)((IData)(
                                                                              ((0xfe0U 
                                                                                & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                                                                >> 0x14U)) 
                                                                               | (0x1fU 
                                                                                & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                                                                >> 7U)))))) 
                                                           >> 0x20U)) 
                                                  >> 0x1cU)) 
                     | (0xff000000U & ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__immi) 
                                       << 0x10U))));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0xaU] 
        = ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__immi) 
             >> 0x10U) | (0xff0000U & ((IData)((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__immi 
                                                >> 0x20U)) 
                                       << 0x10U))) 
           | (0xff000000U & ((IData)((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__immi 
                                      >> 0x20U)) << 0x10U)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0xbU] 
        = (0x200000U | (((IData)((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__immi 
                                  >> 0x20U)) >> 0x10U) 
                        | ((IData)((((- (QData)((IData)(
                                                        (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                                         >> 0x1fU)))) 
                                     << 0xdU) | (QData)((IData)(
                                                                ((0x1000U 
                                                                  & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                                                     >> 0x13U)) 
                                                                 | ((0x800U 
                                                                     & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                                                        << 4U)) 
                                                                    | ((0x7e0U 
                                                                        & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                                                           >> 0x14U)) 
                                                                       | (0x1eU 
                                                                          & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                                                             >> 7U))))))))) 
                           << 0x1cU)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0xcU] 
        = ((0xffffffU & ((IData)((((- (QData)((IData)(
                                                      (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                                       >> 0x1fU)))) 
                                   << 0xdU) | (QData)((IData)(
                                                              ((0x1000U 
                                                                & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                                                   >> 0x13U)) 
                                                               | ((0x800U 
                                                                   & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                                                      << 4U)) 
                                                                  | ((0x7e0U 
                                                                      & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                                                         >> 0x14U)) 
                                                                     | (0x1eU 
                                                                        & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                                                           >> 7U))))))))) 
                         >> 4U)) | (__Vtemp363[6U] 
                                    << 0x18U));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0xdU] 
        = ((__Vtemp363[6U] >> 8U) | (0xf000000U & ((IData)(
                                                           ((((- (QData)((IData)(
                                                                                (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                                                                >> 0x1fU)))) 
                                                              << 0xdU) 
                                                             | (QData)((IData)(
                                                                               ((0x1000U 
                                                                                & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                                                                >> 0x13U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                                                                << 4U)) 
                                                                                | ((0x7e0U 
                                                                                & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                                                                >> 0x14U)) 
                                                                                | (0x1eU 
                                                                                & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                                                                >> 7U)))))))) 
                                                            >> 0x20U)) 
                                                   >> 4U)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0xeU] 
        = __Vtemp377[0xeU];
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0xfU] 
        = __Vtemp377[0xfU];
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0x10U] 
        = (0x800U | (((0xf00000U & ((IData)((((- (QData)((IData)(
                                                                 (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                                                  >> 0x1fU)))) 
                                              << 0x15U) 
                                             | (QData)((IData)(
                                                               ((0x100000U 
                                                                 & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                                                    >> 0xbU)) 
                                                                | ((0xff000U 
                                                                    & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id) 
                                                                   | ((0x800U 
                                                                       & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                                                          >> 9U)) 
                                                                      | (0x7feU 
                                                                         & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                                                            >> 0x14U))))))))) 
                                    << 0x14U)) | ((IData)(
                                                          (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__immi 
                                                           >> 0x20U)) 
                                                  >> 0x18U)) 
                     | (__Vtemp367[0xaU] << 0x18U)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0x11U] 
        = ((__Vtemp367[0xaU] >> 8U) | (0xff000000U 
                                       & ((IData)((
                                                   (((- (QData)((IData)(
                                                                        (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                                                         >> 0x1fU)))) 
                                                     << 0x15U) 
                                                    | (QData)((IData)(
                                                                      ((0x100000U 
                                                                        & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                                                           >> 0xbU)) 
                                                                       | ((0xff000U 
                                                                           & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id) 
                                                                          | ((0x800U 
                                                                              & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                                                                >> 9U)) 
                                                                             | (0x7feU 
                                                                                & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                                                                >> 0x14U)))))))) 
                                                   >> 0x20U)) 
                                          << 0x14U)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0x12U] 
        = (0x400000U | ((IData)(((((- (QData)((IData)(
                                                      (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                                       >> 0x1fU)))) 
                                   << 0x15U) | (QData)((IData)(
                                                               ((0x100000U 
                                                                 & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                                                    >> 0xbU)) 
                                                                | ((0xff000U 
                                                                    & vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id) 
                                                                   | ((0x800U 
                                                                       & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                                                          >> 9U)) 
                                                                      | (0x7feU 
                                                                         & (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__inst_reg_id 
                                                                            >> 0x14U)))))))) 
                                 >> 0x20U)) >> 0xcU));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0x13U] 
        = ((0xffffffU & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__immu)) 
           | (0xff000000U & (IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__immu)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0x14U] 
        = ((0xffffffU & (IData)((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__immu 
                                 >> 0x20U))) | (0xff000000U 
                                                & (IData)(
                                                          (vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__immu 
                                                           >> 0x20U))));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0x15U] 
        = (2U | ((0xfff000U & ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__immu) 
                               << 0xcU)) | (0xff000000U 
                                            & ((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__immu) 
                                               << 0xcU))));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0x16U] 
        = ((((IData)(vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__immu) 
             >> 0x14U) | (0xfff000U & ((IData)((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__immu 
                                                >> 0x20U)) 
                                       << 0xcU))) | 
           (0xff000000U & ((IData)((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__immu 
                                    >> 0x20U)) << 0xcU)));
    vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0x17U] 
        = (0x1000U | ((IData)((vlSelf->top_test__DOT__ysyx_22050533_0__DOT__id_0__DOT__immu 
                               >> 0x20U)) >> 0x14U));
}
