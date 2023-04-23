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

extern "C" void set_csr_ptr(const svOpenArrayHandle a);

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_top__DOT__exe_0__DOT__r0__DOT__set_csr_ptr__Vdpioc2_TOP(const VlUnpacked<QData/*63:0*/, 4> &a) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__exe_0__DOT__r0__DOT__set_csr_ptr__Vdpioc2_TOP\n"); );
    // Body
    static const int a__Vopenprops__ulims[2] = {3, 0};
    static const VerilatedVarProps a__Vopenprops(VLVT_UINT64, VLVD_IN, VerilatedVarProps::Packed(), 63, 0, VerilatedVarProps::Unpacked(), 1, a__Vopenprops__ulims);
    VerilatedDpiOpenVar a__Vopenarray (&a__Vopenprops, &a);
    set_csr_ptr(&a__Vopenarray);
}

extern "C" void vpmem_write(long long waddr, long long wdata, char wmask, long long use_wen);

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_top__DOT__mem_2__DOT__vpmem_write_TOP(QData/*63:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ wmask, QData/*63:0*/ use_wen) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__mem_2__DOT__vpmem_write_TOP\n"); );
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

extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_2e887406_0;
extern const VlUnpacked<CData/*2:0*/, 128> Vtop__ConstPool__TABLE_c6119e11_0;
extern const VlUnpacked<CData/*2:0*/, 128> Vtop__ConstPool__TABLE_6ece41c8_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vtop__ConstPool__TABLE_7e6fb1fc_0;
extern const VlUnpacked<CData/*2:0*/, 512> Vtop__ConstPool__TABLE_79fc3038_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vtop__ConstPool__TABLE_fe7da3df_0;
extern const VlUnpacked<CData/*2:0*/, 256> Vtop__ConstPool__TABLE_88d05660_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vtop__ConstPool__TABLE_1c76a3cb_0;
extern const VlUnpacked<CData/*2:0*/, 512> Vtop__ConstPool__TABLE_77050b5b_0;

VL_INLINE_OPT void Vtop___024root___sequent__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__1\n"); );
    // Variables
    CData/*6:0*/ __Vtableidx2;
    CData/*6:0*/ __Vtableidx4;
    CData/*6:0*/ __Vtableidx5;
    CData/*7:0*/ __Vtableidx7;
    CData/*6:0*/ __Vtableidx8;
    CData/*6:0*/ __Vtableidx9;
    CData/*2:0*/ __Vdly__top__DOT__i0__DOT__icache0__DOT__cache_state;
    CData/*5:0*/ __Vdlyvdim0__top__DOT__i0__DOT__icache0__DOT__tagarray__v0;
    CData/*4:0*/ __Vdlyvlsb__top__DOT__i0__DOT__icache0__DOT__tagarray__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__i0__DOT__icache0__DOT__tagarray__v0;
    CData/*5:0*/ __Vdlyvdim0__top__DOT__i0__DOT__icache0__DOT__tagarray__v1;
    CData/*4:0*/ __Vdlyvlsb__top__DOT__i0__DOT__icache0__DOT__tagarray__v1;
    CData/*0:0*/ __Vdlyvset__top__DOT__i0__DOT__icache0__DOT__tagarray__v2;
    CData/*5:0*/ __Vdlyvdim0__top__DOT__i0__DOT__icache0__DOT__dataarray__v0;
    CData/*2:0*/ __Vdlyvdim1__top__DOT__i0__DOT__icache0__DOT__dataarray__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__i0__DOT__icache0__DOT__dataarray__v0;
    CData/*2:0*/ __Vdly__top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__state;
    CData/*7:0*/ __Vdly__top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__c_arlen;
    CData/*0:0*/ __Vdlyvset__top__DOT__exe_0__DOT__r0__DOT__rf__v0;
    CData/*4:0*/ __Vdlyvdim0__top__DOT__exe_0__DOT__r0__DOT__rf__v32;
    CData/*0:0*/ __Vdlyvset__top__DOT__exe_0__DOT__r0__DOT__rf__v32;
    CData/*0:0*/ __Vdlyvset__top__DOT__exe_0__DOT__r0__DOT__csr__v0;
    CData/*1:0*/ __Vdlyvdim0__top__DOT__exe_0__DOT__r0__DOT__csr__v3;
    CData/*0:0*/ __Vdlyvset__top__DOT__exe_0__DOT__r0__DOT__csr__v3;
    CData/*0:0*/ __Vdlyvset__top__DOT__exe_0__DOT__r0__DOT__csr__v4;
    CData/*2:0*/ __Vdly__top__DOT__mem_2__DOT__dcache_0__DOT__cache_state;
    CData/*5:0*/ __Vdlyvdim0__top__DOT__mem_2__DOT__dcache_0__DOT__tagarray__v0;
    CData/*4:0*/ __Vdlyvlsb__top__DOT__mem_2__DOT__dcache_0__DOT__tagarray__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__mem_2__DOT__dcache_0__DOT__tagarray__v0;
    CData/*2:0*/ __Vdly__top__DOT__mem_2__DOT__dcache_0__DOT__read_state;
    CData/*5:0*/ __Vdlyvdim0__top__DOT__mem_2__DOT__dcache_0__DOT__tagarray__v1;
    CData/*4:0*/ __Vdlyvlsb__top__DOT__mem_2__DOT__dcache_0__DOT__tagarray__v1;
    CData/*0:0*/ __Vdlyvset__top__DOT__mem_2__DOT__dcache_0__DOT__tagarray__v1;
    CData/*5:0*/ __Vdlyvdim0__top__DOT__mem_2__DOT__dcache_0__DOT__tagarray__v2;
    CData/*4:0*/ __Vdlyvlsb__top__DOT__mem_2__DOT__dcache_0__DOT__tagarray__v2;
    CData/*0:0*/ __Vdlyvset__top__DOT__mem_2__DOT__dcache_0__DOT__tagarray__v3;
    CData/*5:0*/ __Vdlyvdim0__top__DOT__mem_2__DOT__dcache_0__DOT__dataarray__v0;
    CData/*2:0*/ __Vdlyvdim1__top__DOT__mem_2__DOT__dcache_0__DOT__dataarray__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__mem_2__DOT__dcache_0__DOT__dataarray__v0;
    CData/*2:0*/ __Vdly__top__DOT__mem_2__DOT__dcache_0__DOT__d_r_len;
    CData/*0:0*/ __Vdlyvset__top__DOT__mem_2__DOT__dcache_0__DOT__dataarray__v1;
    CData/*2:0*/ __Vdly__top__DOT__mem_2__DOT__dcache_0__DOT__write_state;
    CData/*7:0*/ __Vdly__top__DOT__mem_2__DOT__dcache_0__DOT__c_awlen;
    CData/*5:0*/ __Vdlyvdim0__top__DOT__mem_2__DOT__dcache_0__DOT__tagarray__v67;
    CData/*4:0*/ __Vdlyvlsb__top__DOT__mem_2__DOT__dcache_0__DOT__tagarray__v67;
    CData/*0:0*/ __Vdlyvset__top__DOT__mem_2__DOT__dcache_0__DOT__tagarray__v67;
    CData/*5:0*/ __Vdlyvdim0__top__DOT__mem_2__DOT__dcache_0__DOT__tagarray__v68;
    CData/*4:0*/ __Vdlyvlsb__top__DOT__mem_2__DOT__dcache_0__DOT__tagarray__v68;
    CData/*0:0*/ __Vdlyvset__top__DOT__mem_2__DOT__dcache_0__DOT__tagarray__v68;
    CData/*5:0*/ __Vdlyvdim0__top__DOT__mem_2__DOT__dcache_0__DOT__dataarray__v385;
    CData/*2:0*/ __Vdlyvdim1__top__DOT__mem_2__DOT__dcache_0__DOT__dataarray__v385;
    CData/*0:0*/ __Vdlyvset__top__DOT__mem_2__DOT__dcache_0__DOT__dataarray__v385;
    CData/*2:0*/ __Vdly__top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__state;
    CData/*7:0*/ __Vdly__top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__c_arlen;
    CData/*2:0*/ __Vdly__top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__write_state;
    CData/*2:0*/ __Vdly__top__DOT__mem_2__DOT__mem_read_write_0__DOT__d_r_len;
    CData/*7:0*/ __Vdly__top__DOT__mem_2__DOT__mem_read_write_0__DOT__c_awlen;
    CData/*2:0*/ __Vdly__top__DOT__mem_2__DOT__mem_read_write_0__DOT__axi_full_s2_1__DOT__state;
    CData/*7:0*/ __Vdly__top__DOT__mem_2__DOT__mem_read_write_0__DOT__axi_full_s2_1__DOT__c_arlen;
    CData/*2:0*/ __Vdly__top__DOT__mem_2__DOT__mem_read_write_0__DOT__axi_full_s2_1__DOT__write_state;
    SData/*8:0*/ __Vtableidx1;
    SData/*8:0*/ __Vtableidx3;
    SData/*8:0*/ __Vtableidx6;
    IData/*19:0*/ __Vdlyvval__top__DOT__i0__DOT__icache0__DOT__tagarray__v1;
    IData/*31:0*/ __Vdly__top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__r_araddr;
    IData/*19:0*/ __Vdlyvval__top__DOT__mem_2__DOT__dcache_0__DOT__tagarray__v2;
    IData/*31:0*/ __Vdly__top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr;
    IData/*31:0*/ __Vdly__top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr;
    IData/*31:0*/ __Vdly__top__DOT__mem_2__DOT__mem_read_write_0__DOT__axi_full_s2_1__DOT__r_araddr;
    IData/*31:0*/ __Vdly__top__DOT__mem_2__DOT__mem_read_write_0__DOT__axi_full_s2_1__DOT__r_awaddr;
    VlWide<8>/*255:0*/ __Vtemp15;
    VlWide<12>/*383:0*/ __Vtemp19;
    VlWide<24>/*767:0*/ __Vtemp29;
    VlWide<3>/*95:0*/ __Vtemp138;
    VlWide<3>/*95:0*/ __Vtemp141;
    VlWide<3>/*95:0*/ __Vtemp191;
    VlWide<3>/*95:0*/ __Vtemp192;
    VlWide<3>/*95:0*/ __Vtemp193;
    VlWide<3>/*95:0*/ __Vtemp194;
    VlWide<3>/*95:0*/ __Vtemp195;
    VlWide<3>/*95:0*/ __Vtemp197;
    VlWide<3>/*95:0*/ __Vtemp198;
    VlWide<3>/*95:0*/ __Vtemp247;
    IData/*31:0*/ __Vilp;
    QData/*63:0*/ __Vtask_top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__vpmem_read__0__mrdata;
    QData/*63:0*/ __Vtask_top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__vpmem_read__3__mrdata;
    QData/*63:0*/ __Vtask_top__DOT__mem_2__DOT__mem_read_write_0__DOT__axi_full_s2_1__DOT__vpmem_read__5__mrdata;
    QData/*63:0*/ __Vdlyvval__top__DOT__i0__DOT__icache0__DOT__dataarray__v0;
    QData/*63:0*/ __Vdlyvval__top__DOT__exe_0__DOT__r0__DOT__rf__v32;
    QData/*63:0*/ __Vdlyvval__top__DOT__exe_0__DOT__r0__DOT__csr__v3;
    QData/*63:0*/ __Vdlyvval__top__DOT__exe_0__DOT__r0__DOT__csr__v5;
    QData/*63:0*/ __Vdlyvval__top__DOT__mem_2__DOT__dcache_0__DOT__dataarray__v0;
    QData/*63:0*/ __Vdlyvval__top__DOT__mem_2__DOT__dcache_0__DOT__dataarray__v385;
    // Body
    __Vdly__top__DOT__mem_2__DOT__dcache_0__DOT__c_awlen 
        = vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__c_awlen;
    __Vdly__top__DOT__mem_2__DOT__mem_read_write_0__DOT__c_awlen 
        = vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__c_awlen;
    __Vdly__top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__state 
        = vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__state;
    __Vdly__top__DOT__mem_2__DOT__mem_read_write_0__DOT__axi_full_s2_1__DOT__state 
        = vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__axi_full_s2_1__DOT__state;
    __Vdly__top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__state 
        = vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__state;
    __Vdly__top__DOT__mem_2__DOT__mem_read_write_0__DOT__axi_full_s2_1__DOT__c_arlen 
        = vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__axi_full_s2_1__DOT__c_arlen;
    __Vdly__top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__c_arlen 
        = vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__c_arlen;
    __Vdly__top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__c_arlen 
        = vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__c_arlen;
    __Vdly__top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__write_state 
        = vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__write_state;
    __Vdly__top__DOT__mem_2__DOT__dcache_0__DOT__write_state 
        = vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__write_state;
    __Vdly__top__DOT__mem_2__DOT__mem_read_write_0__DOT__axi_full_s2_1__DOT__write_state 
        = vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__axi_full_s2_1__DOT__write_state;
    __Vdly__top__DOT__mem_2__DOT__mem_read_write_0__DOT__d_r_len 
        = vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__d_r_len;
    __Vdly__top__DOT__mem_2__DOT__dcache_0__DOT__read_state 
        = vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__read_state;
    __Vdly__top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr 
        = vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr;
    __Vdly__top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr 
        = vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr;
    __Vdly__top__DOT__mem_2__DOT__dcache_0__DOT__d_r_len 
        = vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__d_r_len;
    __Vdly__top__DOT__mem_2__DOT__mem_read_write_0__DOT__axi_full_s2_1__DOT__r_araddr 
        = vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__axi_full_s2_1__DOT__r_araddr;
    __Vdly__top__DOT__mem_2__DOT__dcache_0__DOT__cache_state 
        = vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__cache_state;
    __Vdlyvset__top__DOT__mem_2__DOT__dcache_0__DOT__tagarray__v1 = 0U;
    __Vdlyvset__top__DOT__mem_2__DOT__dcache_0__DOT__tagarray__v3 = 0U;
    __Vdlyvset__top__DOT__mem_2__DOT__dcache_0__DOT__tagarray__v67 = 0U;
    __Vdlyvset__top__DOT__mem_2__DOT__dcache_0__DOT__tagarray__v68 = 0U;
    __Vdlyvset__top__DOT__mem_2__DOT__dcache_0__DOT__tagarray__v0 = 0U;
    __Vdly__top__DOT__mem_2__DOT__mem_read_write_0__DOT__axi_full_s2_1__DOT__r_awaddr 
        = vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__axi_full_s2_1__DOT__r_awaddr;
    __Vdlyvset__top__DOT__mem_2__DOT__dcache_0__DOT__dataarray__v0 = 0U;
    __Vdlyvset__top__DOT__mem_2__DOT__dcache_0__DOT__dataarray__v1 = 0U;
    __Vdlyvset__top__DOT__mem_2__DOT__dcache_0__DOT__dataarray__v385 = 0U;
    __Vdlyvset__top__DOT__exe_0__DOT__r0__DOT__rf__v0 = 0U;
    __Vdlyvset__top__DOT__exe_0__DOT__r0__DOT__rf__v32 = 0U;
    __Vdly__top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__r_araddr 
        = vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__r_araddr;
    __Vdly__top__DOT__i0__DOT__icache0__DOT__cache_state 
        = vlSelf->top__DOT__i0__DOT__icache0__DOT__cache_state;
    __Vdlyvset__top__DOT__i0__DOT__icache0__DOT__tagarray__v0 = 0U;
    __Vdlyvset__top__DOT__i0__DOT__icache0__DOT__tagarray__v2 = 0U;
    __Vdlyvset__top__DOT__i0__DOT__icache0__DOT__dataarray__v0 = 0U;
    __Vdlyvset__top__DOT__exe_0__DOT__r0__DOT__csr__v0 = 0U;
    __Vdlyvset__top__DOT__exe_0__DOT__r0__DOT__csr__v3 = 0U;
    __Vdlyvset__top__DOT__exe_0__DOT__r0__DOT__csr__v4 = 0U;
    if (vlSelf->rst) {
        vlSelf->top__DOT__i0__DOT__icache0__DOT__unnamedblk1__DOT__i = 0x40U;
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__exe_0__DOT__r0__DOT__i = 3U;
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j = 6U;
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__unnamedblk1__DOT__i = 0x40U;
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__unnamedblk2__DOT__i = 0x40U;
    }
    vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__bresp 
        = ((1U == (IData)(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__c_awlen))
            ? 1U : 2U);
    vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__bresp 
        = ((8U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__c_awlen))
            ? 1U : 2U);
    if (vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__wready) {
        vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__d_w_len 
            = (7U & ((IData)(1U) + (IData)(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__d_w_len)));
    }
    if ((1U == (IData)(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__c_awlen))) {
        vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__d_w_len = 0U;
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__d_w_len = 0U;
    }
    if (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__wready) {
        __Vdly__top__DOT__mem_2__DOT__dcache_0__DOT__c_awlen 
            = (0xffU & ((IData)(1U) + (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__c_awlen)));
    }
    if (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__wlast) {
        __Vdly__top__DOT__mem_2__DOT__dcache_0__DOT__c_awlen = 0U;
    }
    if (vlSelf->rst) {
        __Vdly__top__DOT__mem_2__DOT__dcache_0__DOT__c_awlen = 0U;
    }
    if (vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__wready) {
        __Vdly__top__DOT__mem_2__DOT__mem_read_write_0__DOT__c_awlen 
            = (0xffU & ((IData)(1U) + (IData)(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__c_awlen)));
    }
    if (vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__wlast) {
        __Vdly__top__DOT__mem_2__DOT__mem_read_write_0__DOT__c_awlen = 0U;
    }
    if (vlSelf->rst) {
        __Vdly__top__DOT__mem_2__DOT__mem_read_write_0__DOT__c_awlen = 0U;
    }
    __Vtableidx2 = (((8U == (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__c_arlen)) 
                     << 6U) | (((IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__rready) 
                                << 5U) | (((IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__arvalid) 
                                           << 4U) | 
                                          (((IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__state) 
                                            << 1U) 
                                           | (IData)(vlSelf->rst)))));
    if (Vtop__ConstPool__TABLE_2e887406_0[__Vtableidx2]) {
        __Vdly__top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__state 
            = Vtop__ConstPool__TABLE_c6119e11_0[__Vtableidx2];
    }
    __Vtableidx8 = (((1U == (IData)(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__axi_full_s2_1__DOT__c_arlen)) 
                     << 6U) | (((IData)(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__rready) 
                                << 5U) | (((IData)(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__arvalid) 
                                           << 4U) | 
                                          (((IData)(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__axi_full_s2_1__DOT__state) 
                                            << 1U) 
                                           | (IData)(vlSelf->rst)))));
    if (Vtop__ConstPool__TABLE_2e887406_0[__Vtableidx8]) {
        __Vdly__top__DOT__mem_2__DOT__mem_read_write_0__DOT__axi_full_s2_1__DOT__state 
            = Vtop__ConstPool__TABLE_c6119e11_0[__Vtableidx8];
    }
    __Vtableidx4 = (((8U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__c_arlen)) 
                     << 6U) | (((IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rready) 
                                << 5U) | (((IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__arvalid) 
                                           << 4U) | 
                                          (((IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__state) 
                                            << 1U) 
                                           | (IData)(vlSelf->rst)))));
    if (Vtop__ConstPool__TABLE_2e887406_0[__Vtableidx4]) {
        __Vdly__top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__state 
            = Vtop__ConstPool__TABLE_c6119e11_0[__Vtableidx4];
    }
    vlSelf->inst_finish = ((~ (IData)(vlSelf->rst)) 
                           & (IData)(vlSelf->mem_finish));
    __Vtableidx5 = (((8U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__c_awlen)) 
                     << 6U) | (((IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__wvalid) 
                                << 5U) | (((IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__awvalid) 
                                           << 4U) | 
                                          (((IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__write_state) 
                                            << 1U) 
                                           | (IData)(vlSelf->rst)))));
    if (Vtop__ConstPool__TABLE_2e887406_0[__Vtableidx5]) {
        __Vdly__top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__write_state 
            = Vtop__ConstPool__TABLE_6ece41c8_0[__Vtableidx5];
    }
    __Vtableidx3 = (((5U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__cache_state)) 
                     << 8U) | (((8U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__c_awlen)) 
                                << 7U) | (((IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__wready) 
                                           << 6U) | 
                                          (((IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__awvalid) 
                                            << 5U) 
                                           | (((0U 
                                                == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__write_state)) 
                                               << 4U) 
                                              | (((IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__write_state) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->rst)))))));
    if (Vtop__ConstPool__TABLE_7e6fb1fc_0[__Vtableidx3]) {
        __Vdly__top__DOT__mem_2__DOT__dcache_0__DOT__write_state 
            = Vtop__ConstPool__TABLE_79fc3038_0[__Vtableidx3];
    }
    __Vtableidx9 = (((1U == (IData)(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__c_awlen)) 
                     << 6U) | (((IData)(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__wvalid) 
                                << 5U) | (((IData)(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__awvalid) 
                                           << 4U) | 
                                          (((IData)(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__axi_full_s2_1__DOT__write_state) 
                                            << 1U) 
                                           | (IData)(vlSelf->rst)))));
    if (Vtop__ConstPool__TABLE_2e887406_0[__Vtableidx9]) {
        __Vdly__top__DOT__mem_2__DOT__mem_read_write_0__DOT__axi_full_s2_1__DOT__write_state 
            = Vtop__ConstPool__TABLE_6ece41c8_0[__Vtableidx9];
    }
    if (vlSelf->rst) {
        __Vdly__top__DOT__mem_2__DOT__mem_read_write_0__DOT__d_r_len = 0U;
    }
    if (((IData)(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__rvalid) 
         & (IData)(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__rready))) {
        __Vdly__top__DOT__mem_2__DOT__mem_read_write_0__DOT__d_r_len 
            = (7U & ((IData)(1U) + (IData)(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__d_r_len)));
    }
    if ((1U == (IData)(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__axi_full_s2_1__DOT__c_arlen))) {
        __Vdly__top__DOT__mem_2__DOT__mem_read_write_0__DOT__d_r_len = 0U;
    }
    if (vlSelf->rst) {
        __Vdly__top__DOT__mem_2__DOT__mem_read_write_0__DOT__d_r_len = 0U;
    }
    __Vtableidx1 = (((IData)(vlSelf->mem_finish) << 8U) 
                    | (((8U == (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__c_arlen)) 
                        << 7U) | (((IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__rvalid) 
                                   << 6U) | (((IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__arvalid) 
                                              << 5U) 
                                             | (((0U 
                                                  == (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__state)) 
                                                 << 4U) 
                                                | (((IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__state) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->rst)))))));
    if (Vtop__ConstPool__TABLE_7e6fb1fc_0[__Vtableidx1]) {
        vlSelf->top__DOT__i0__DOT__icache0__DOT__state 
            = Vtop__ConstPool__TABLE_79fc3038_0[__Vtableidx1];
    }
    if (vlSelf->rst) {
        __Vdly__top__DOT__mem_2__DOT__dcache_0__DOT__read_state = 0U;
    } else if ((((0U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__read_state)) 
                 & (0U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__state))) 
                & (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__arvalid))) {
        __Vdly__top__DOT__mem_2__DOT__dcache_0__DOT__read_state = 1U;
    } else if ((((1U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__read_state)) 
                 & (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rvalid)) 
                & (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rready))) {
        __Vdly__top__DOT__mem_2__DOT__dcache_0__DOT__read_state = 2U;
    } else if (((2U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__read_state)) 
                & (8U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__c_arlen)))) {
        __Vdly__top__DOT__mem_2__DOT__dcache_0__DOT__read_state = 3U;
    } else if (((3U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__read_state)) 
                & (5U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__cache_state)))) {
        __Vdly__top__DOT__mem_2__DOT__dcache_0__DOT__read_state = 0U;
    }
    __Vtableidx7 = (((1U == (IData)(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__c_awlen)) 
                     << 7U) | (((IData)(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__wready) 
                                << 6U) | (((IData)(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__awvalid) 
                                           << 5U) | 
                                          (((0U == (IData)(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__axi_full_s2_1__DOT__write_state)) 
                                            << 4U) 
                                           | (((IData)(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__write_state) 
                                               << 1U) 
                                              | (IData)(vlSelf->rst))))));
    if (Vtop__ConstPool__TABLE_fe7da3df_0[__Vtableidx7]) {
        vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__write_state 
            = Vtop__ConstPool__TABLE_88d05660_0[__Vtableidx7];
    }
    __Vtableidx6 = (((1U == (IData)(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__axi_full_s2_1__DOT__c_arlen)) 
                     << 8U) | (((IData)(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__rready) 
                                << 7U) | (((IData)(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__rvalid) 
                                           << 6U) | 
                                          (((IData)(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__arvalid) 
                                            << 5U) 
                                           | (((0U 
                                                == (IData)(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__axi_full_s2_1__DOT__state)) 
                                               << 4U) 
                                              | (((IData)(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__read_state) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->rst)))))));
    if (Vtop__ConstPool__TABLE_1c76a3cb_0[__Vtableidx6]) {
        vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__read_state 
            = Vtop__ConstPool__TABLE_77050b5b_0[__Vtableidx6];
    }
    if (((IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__arvalid) 
         & (0U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__state)))) {
        __Vdly__top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr 
            = (0xffffffc0U & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__araddr);
    }
    if (((IData)(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__rvalid) 
         & (IData)(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__rready))) {
        vlSelf->top__DOT__mem_2__DOT__r_rdata_ld_device 
            = vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__rdata_axi;
    }
    if (((IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__awvalid) 
         & (0U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__write_state)))) {
        __Vdly__top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr 
            = ((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__tagarray
                [(0x3fU & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__araddr 
                           >> 6U))] << 0xcU) | (0xfc0U 
                                                & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__araddr));
    }
    if (((IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__wvalid) 
         & (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__wready))) {
        Vtop___024root____Vdpiimwrap_top__DOT__mem_2__DOT__vpmem_write_TOP((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr)), vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata, 0xffU, 1ULL);
        __Vdly__top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr 
            = ((IData)(8U) + vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr);
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__testwrite = 1U;
    } else {
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__testwrite = 0U;
    }
    if (vlSelf->rst) {
        __Vdly__top__DOT__mem_2__DOT__dcache_0__DOT__d_r_len = 0U;
    }
    if (((IData)(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__arvalid) 
         & (0U == (IData)(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__axi_full_s2_1__DOT__state)))) {
        __Vdly__top__DOT__mem_2__DOT__mem_read_write_0__DOT__axi_full_s2_1__DOT__r_araddr 
            = (IData)(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__adder_result);
    }
    if ((8U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__c_arlen))) {
        __Vdlyvset__top__DOT__mem_2__DOT__dcache_0__DOT__tagarray__v1 = 1U;
        __Vdlyvlsb__top__DOT__mem_2__DOT__dcache_0__DOT__tagarray__v1 = 0x14U;
        __Vdlyvdim0__top__DOT__mem_2__DOT__dcache_0__DOT__tagarray__v1 
            = (0x3fU & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__araddr 
                        >> 6U));
        __Vdlyvval__top__DOT__mem_2__DOT__dcache_0__DOT__tagarray__v2 
            = (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__araddr 
               >> 0xcU);
        __Vdlyvlsb__top__DOT__mem_2__DOT__dcache_0__DOT__tagarray__v2 = 0U;
        __Vdlyvdim0__top__DOT__mem_2__DOT__dcache_0__DOT__tagarray__v2 
            = (0x3fU & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__araddr 
                        >> 6U));
    }
    if (vlSelf->rst) {
        __Vdlyvset__top__DOT__mem_2__DOT__dcache_0__DOT__tagarray__v3 = 1U;
    }
    if ((6U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__cache_state))) {
        __Vdlyvset__top__DOT__mem_2__DOT__dcache_0__DOT__tagarray__v67 = 1U;
        __Vdlyvlsb__top__DOT__mem_2__DOT__dcache_0__DOT__tagarray__v67 = 0x15U;
        __Vdlyvdim0__top__DOT__mem_2__DOT__dcache_0__DOT__tagarray__v67 
            = (0x3fU & (IData)((vlSelf->top__DOT__exe_0__DOT__alu2__DOT__adder_result 
                                >> 6U)));
        if (vlSelf->rst) {
            __Vdlyvset__top__DOT__mem_2__DOT__dcache_0__DOT__tagarray__v68 = 1U;
            __Vdlyvlsb__top__DOT__mem_2__DOT__dcache_0__DOT__tagarray__v68 = 0x15U;
            __Vdlyvdim0__top__DOT__mem_2__DOT__dcache_0__DOT__tagarray__v68 
                = (0x3fU & (IData)((vlSelf->top__DOT__exe_0__DOT__alu2__DOT__adder_result 
                                    >> 6U)));
        }
    }
    if (vlSelf->rst) {
        __Vdly__top__DOT__mem_2__DOT__dcache_0__DOT__cache_state = 0U;
    } else if ((((((0U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__cache_state)) 
                   & (~ (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rcache_en))) 
                  & (~ (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__wcache_en))) 
                 & (IData)(vlSelf->inst_update)) & (IData)(vlSelf->top__DOT__mem_2__DOT__use_cache))) {
        __Vdly__top__DOT__mem_2__DOT__dcache_0__DOT__cache_state = 5U;
    } else if (((((((0U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__cache_state)) 
                    & ((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__araddr 
                        >> 0xcU) == (0xfffffU & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__tagarray
                                     [(0x3fU & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__araddr 
                                                >> 6U))]))) 
                   & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__tagarray
                      [(0x3fU & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__araddr 
                                 >> 6U))] >> 0x14U)) 
                  & (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rcache_en)) 
                 & (IData)(vlSelf->inst_update)) & (IData)(vlSelf->top__DOT__mem_2__DOT__use_cache))) {
        __Vdly__top__DOT__mem_2__DOT__dcache_0__DOT__cache_state = 4U;
    } else if (((((((0U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__cache_state)) 
                    & ((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__araddr 
                        >> 0xcU) == (0xfffffU & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__tagarray
                                     [(0x3fU & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__araddr 
                                                >> 6U))]))) 
                   & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__tagarray
                      [(0x3fU & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__araddr 
                                 >> 6U))] >> 0x14U)) 
                  & (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__wcache_en)) 
                 & (IData)(vlSelf->inst_update)) & (IData)(vlSelf->top__DOT__mem_2__DOT__use_cache))) {
        __Vdly__top__DOT__mem_2__DOT__dcache_0__DOT__cache_state = 6U;
    } else if (((((0U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__cache_state)) 
                  & ((IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rcache_en) 
                     | (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__wcache_en))) 
                 & (IData)(vlSelf->inst_update)) & (IData)(vlSelf->top__DOT__mem_2__DOT__use_cache))) {
        __Vdly__top__DOT__mem_2__DOT__dcache_0__DOT__cache_state = 1U;
    } else if (((1U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__cache_state)) 
                & (~ (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__tagarray
                      [(0x3fU & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__araddr 
                                 >> 6U))] >> 0x15U)))) {
        __Vdly__top__DOT__mem_2__DOT__dcache_0__DOT__cache_state = 3U;
    } else if (((1U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__cache_state)) 
                & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__tagarray
                   [(0x3fU & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__araddr 
                              >> 6U))] >> 0x15U))) {
        __Vdly__top__DOT__mem_2__DOT__dcache_0__DOT__cache_state = 2U;
        __Vdlyvset__top__DOT__mem_2__DOT__dcache_0__DOT__tagarray__v0 = 1U;
        __Vdlyvlsb__top__DOT__mem_2__DOT__dcache_0__DOT__tagarray__v0 = 0x15U;
        __Vdlyvdim0__top__DOT__mem_2__DOT__dcache_0__DOT__tagarray__v0 
            = (0x3fU & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__araddr 
                        >> 6U));
    } else if (((2U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__cache_state)) 
                & (3U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__write_state)))) {
        __Vdly__top__DOT__mem_2__DOT__dcache_0__DOT__cache_state = 3U;
    } else if ((((3U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__cache_state)) 
                 & (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rcache_en)) 
                & (8U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__c_arlen)))) {
        __Vdly__top__DOT__mem_2__DOT__dcache_0__DOT__cache_state = 4U;
    } else if ((((3U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__cache_state)) 
                 & (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__wcache_en)) 
                & (8U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__c_arlen)))) {
        __Vdly__top__DOT__mem_2__DOT__dcache_0__DOT__cache_state = 6U;
    } else if ((4U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__cache_state))) {
        __Vdly__top__DOT__mem_2__DOT__dcache_0__DOT__cache_state = 5U;
    } else if ((6U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__cache_state))) {
        __Vdly__top__DOT__mem_2__DOT__dcache_0__DOT__cache_state = 5U;
    } else if ((5U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__cache_state))) {
        __Vdly__top__DOT__mem_2__DOT__dcache_0__DOT__cache_state = 0U;
    }
    if (((IData)(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__awvalid) 
         & (0U == (IData)(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__axi_full_s2_1__DOT__write_state)))) {
        __Vdly__top__DOT__mem_2__DOT__mem_read_write_0__DOT__axi_full_s2_1__DOT__r_awaddr 
            = (IData)(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__adder_result);
    }
    if (((IData)(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__wvalid) 
         & (IData)(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__wready))) {
        Vtop___024root____Vdpiimwrap_top__DOT__mem_2__DOT__vpmem_write_TOP((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__axi_full_s2_1__DOT__r_awaddr)), vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__wdata, (IData)(vlSelf->top__DOT__wmask), 1ULL);
        __Vdly__top__DOT__mem_2__DOT__mem_read_write_0__DOT__axi_full_s2_1__DOT__r_awaddr 
            = ((IData)(8U) + vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__axi_full_s2_1__DOT__r_awaddr);
        vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__axi_full_s2_1__DOT__testwrite = 1U;
    } else {
        vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__axi_full_s2_1__DOT__testwrite = 0U;
    }
    if (((IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rvalid) 
         & (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rready))) {
        __Vdlyvval__top__DOT__mem_2__DOT__dcache_0__DOT__dataarray__v0 
            = vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rdata_axi;
        __Vdlyvset__top__DOT__mem_2__DOT__dcache_0__DOT__dataarray__v0 = 1U;
        __Vdlyvdim1__top__DOT__mem_2__DOT__dcache_0__DOT__dataarray__v0 
            = vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__d_r_len;
        __Vdlyvdim0__top__DOT__mem_2__DOT__dcache_0__DOT__dataarray__v0 
            = (0x3fU & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__araddr 
                        >> 6U));
        __Vdly__top__DOT__mem_2__DOT__dcache_0__DOT__d_r_len 
            = (7U & ((IData)(1U) + (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__d_r_len)));
    }
    if ((8U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__c_arlen))) {
        __Vdly__top__DOT__mem_2__DOT__dcache_0__DOT__d_r_len = 0U;
    }
    if (vlSelf->rst) {
        __Vdly__top__DOT__mem_2__DOT__dcache_0__DOT__d_r_len = 0U;
        __Vdlyvset__top__DOT__mem_2__DOT__dcache_0__DOT__dataarray__v1 = 1U;
    }
    if ((6U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__cache_state))) {
        __Vdlyvval__top__DOT__mem_2__DOT__dcache_0__DOT__dataarray__v385 
            = ((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                [(0x3fU & (IData)((vlSelf->top__DOT__exe_0__DOT__alu2__DOT__adder_result 
                                   >> 6U)))][(7U & (IData)(
                                                           (vlSelf->top__DOT__exe_0__DOT__alu2__DOT__adder_result 
                                                            >> 3U)))] 
                & (~ vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__wmask_align)) 
               | (((0x3fU >= (0x38U & ((IData)(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__adder_result) 
                                       << 3U))) ? (vlSelf->top__DOT__src2 
                                                   << 
                                                   (0x38U 
                                                    & ((IData)(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__adder_result) 
                                                       << 3U)))
                    : 0ULL) & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__wmask_align));
        __Vdlyvset__top__DOT__mem_2__DOT__dcache_0__DOT__dataarray__v385 = 1U;
        __Vdlyvdim1__top__DOT__mem_2__DOT__dcache_0__DOT__dataarray__v385 
            = (7U & (IData)((vlSelf->top__DOT__exe_0__DOT__alu2__DOT__adder_result 
                             >> 3U)));
        __Vdlyvdim0__top__DOT__mem_2__DOT__dcache_0__DOT__dataarray__v385 
            = (0x3fU & (IData)((vlSelf->top__DOT__exe_0__DOT__alu2__DOT__adder_result 
                                >> 6U)));
    }
    if (vlSelf->rst) {
        __Vdlyvset__top__DOT__exe_0__DOT__r0__DOT__rf__v0 = 1U;
    }
    if ((((((((((((((((((((((((((((((((((((((((((((
                                                   ((((((((IData)(vlSelf->top__DOT__control_0__DOT__Add) 
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
                                          >> 1U)) | (IData)(vlSelf->top__DOT__control_0__DOT__sub)) 
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
           | (IData)(vlSelf->top__DOT__control_0__DOT__remu)) 
          | (IData)(vlSelf->top__DOT__control_0__DOT__remuw)) 
         & (IData)(vlSelf->mem_finish))) {
        __Vdlyvval__top__DOT__exe_0__DOT__r0__DOT__rf__v32 
            = vlSelf->top__DOT__wdata;
        __Vdlyvset__top__DOT__exe_0__DOT__r0__DOT__rf__v32 = 1U;
        __Vdlyvdim0__top__DOT__exe_0__DOT__r0__DOT__rf__v32 
            = (0x1fU & (vlSelf->inst >> 7U));
    }
    if (((IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__arvalid) 
         & (0U == (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__state)))) {
        __Vdly__top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__r_araddr 
            = (0xffffffc0U & (IData)(vlSelf->cpupc));
    }
    if (vlSelf->rst) {
        __Vdly__top__DOT__i0__DOT__icache0__DOT__cache_state = 0U;
    } else if ((((0U == (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__cache_state)) 
                 & ((0xfffffU & (IData)((vlSelf->cpupc 
                                         >> 0xcU))) 
                    == (0xfffffU & vlSelf->top__DOT__i0__DOT__icache0__DOT__tagarray
                        [(0x3fU & (IData)((vlSelf->cpupc 
                                           >> 6U)))]))) 
                & (vlSelf->top__DOT__i0__DOT__icache0__DOT__tagarray
                   [(0x3fU & (IData)((vlSelf->cpupc 
                                      >> 6U)))] >> 0x14U))) {
        __Vdly__top__DOT__i0__DOT__icache0__DOT__cache_state = 3U;
    } else if ((0U == (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__cache_state))) {
        __Vdly__top__DOT__i0__DOT__icache0__DOT__cache_state = 1U;
    } else if ((1U == (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__cache_state))) {
        __Vdly__top__DOT__i0__DOT__icache0__DOT__cache_state = 2U;
    } else if (((2U == (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__cache_state)) 
                & (8U == (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__c_arlen)))) {
        __Vdly__top__DOT__i0__DOT__icache0__DOT__cache_state = 3U;
    } else if (((3U == (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__cache_state)) 
                & (IData)(vlSelf->mem_finish))) {
        __Vdly__top__DOT__i0__DOT__icache0__DOT__cache_state = 0U;
    }
    if ((8U == (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__c_arlen))) {
        __Vdlyvset__top__DOT__i0__DOT__icache0__DOT__tagarray__v0 = 1U;
        __Vdlyvlsb__top__DOT__i0__DOT__icache0__DOT__tagarray__v0 = 0x14U;
        __Vdlyvdim0__top__DOT__i0__DOT__icache0__DOT__tagarray__v0 
            = (0x3fU & (IData)((vlSelf->cpupc >> 6U)));
        __Vdlyvval__top__DOT__i0__DOT__icache0__DOT__tagarray__v1 
            = (0xfffffU & (IData)((vlSelf->cpupc >> 0xcU)));
        __Vdlyvlsb__top__DOT__i0__DOT__icache0__DOT__tagarray__v1 = 0U;
        __Vdlyvdim0__top__DOT__i0__DOT__icache0__DOT__tagarray__v1 
            = (0x3fU & (IData)((vlSelf->cpupc >> 6U)));
    }
    if (vlSelf->rst) {
        __Vdlyvset__top__DOT__i0__DOT__icache0__DOT__tagarray__v2 = 1U;
    }
    if (((IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__rvalid) 
         & (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__rready))) {
        __Vdlyvval__top__DOT__i0__DOT__icache0__DOT__dataarray__v0 
            = vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi;
        __Vdlyvset__top__DOT__i0__DOT__icache0__DOT__dataarray__v0 = 1U;
        __Vdlyvdim1__top__DOT__i0__DOT__icache0__DOT__dataarray__v0 
            = vlSelf->top__DOT__i0__DOT__icache0__DOT__d_len;
        __Vdlyvdim0__top__DOT__i0__DOT__icache0__DOT__dataarray__v0 
            = (0x3fU & (IData)((vlSelf->cpupc >> 6U)));
        vlSelf->top__DOT__i0__DOT__icache0__DOT__d_len 
            = (7U & ((IData)(1U) + (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__d_len)));
    }
    if ((8U == (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__c_arlen))) {
        vlSelf->top__DOT__i0__DOT__icache0__DOT__d_len = 0U;
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__i0__DOT__icache0__DOT__d_len = 0U;
    }
    if (vlSelf->rst) {
        __Vdlyvset__top__DOT__exe_0__DOT__r0__DOT__csr__v0 = 1U;
    }
    if ((((IData)(vlSelf->top__DOT__control_0__DOT__csrrw) 
          | (IData)(vlSelf->top__DOT__control_0__DOT__csrrs)) 
         & (IData)(vlSelf->mem_finish))) {
        __Vdlyvval__top__DOT__exe_0__DOT__r0__DOT__csr__v3 
            = vlSelf->top__DOT__exe_0__DOT__c_wdata;
        __Vdlyvset__top__DOT__exe_0__DOT__r0__DOT__csr__v3 = 1U;
        __Vdlyvdim0__top__DOT__exe_0__DOT__r0__DOT__csr__v3 
            = vlSelf->top__DOT__c_raddr;
    }
    if (((IData)(vlSelf->mem_finish) & ((IData)(vlSelf->top__DOT__e_inst) 
                                        >> 1U))) {
        __Vdlyvset__top__DOT__exe_0__DOT__r0__DOT__csr__v4 = 1U;
        __Vdlyvval__top__DOT__exe_0__DOT__r0__DOT__csr__v5 
            = vlSelf->cpupc;
    }
    vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__d_r_len 
        = __Vdly__top__DOT__mem_2__DOT__mem_read_write_0__DOT__d_r_len;
    vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__read_state 
        = __Vdly__top__DOT__mem_2__DOT__dcache_0__DOT__read_state;
    vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__write_state 
        = __Vdly__top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__write_state;
    vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr 
        = __Vdly__top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr;
    vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__write_state 
        = __Vdly__top__DOT__mem_2__DOT__dcache_0__DOT__write_state;
    if (__Vdlyvset__top__DOT__mem_2__DOT__dcache_0__DOT__tagarray__v0) {
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__tagarray[__Vdlyvdim0__top__DOT__mem_2__DOT__dcache_0__DOT__tagarray__v0] 
            = ((~ ((IData)(1U) << (IData)(__Vdlyvlsb__top__DOT__mem_2__DOT__dcache_0__DOT__tagarray__v0))) 
               & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__tagarray
               [__Vdlyvdim0__top__DOT__mem_2__DOT__dcache_0__DOT__tagarray__v0]);
    }
    if (__Vdlyvset__top__DOT__mem_2__DOT__dcache_0__DOT__tagarray__v1) {
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__tagarray[__Vdlyvdim0__top__DOT__mem_2__DOT__dcache_0__DOT__tagarray__v1] 
            = (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__tagarray
               [__Vdlyvdim0__top__DOT__mem_2__DOT__dcache_0__DOT__tagarray__v1] 
               | (0x3fffffU & ((IData)(1U) << (IData)(__Vdlyvlsb__top__DOT__mem_2__DOT__dcache_0__DOT__tagarray__v1))));
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__tagarray[__Vdlyvdim0__top__DOT__mem_2__DOT__dcache_0__DOT__tagarray__v2] 
            = (((~ ((IData)(0xfffffU) << (IData)(__Vdlyvlsb__top__DOT__mem_2__DOT__dcache_0__DOT__tagarray__v2))) 
                & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__tagarray
                [__Vdlyvdim0__top__DOT__mem_2__DOT__dcache_0__DOT__tagarray__v2]) 
               | (0x3fffffU & (__Vdlyvval__top__DOT__mem_2__DOT__dcache_0__DOT__tagarray__v2 
                               << (IData)(__Vdlyvlsb__top__DOT__mem_2__DOT__dcache_0__DOT__tagarray__v2))));
    }
    if (__Vdlyvset__top__DOT__mem_2__DOT__dcache_0__DOT__tagarray__v3) {
        __Vilp = 0U;
        while ((__Vilp <= 0x3fU)) {
            vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__tagarray[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
    if (__Vdlyvset__top__DOT__mem_2__DOT__dcache_0__DOT__tagarray__v67) {
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__tagarray[__Vdlyvdim0__top__DOT__mem_2__DOT__dcache_0__DOT__tagarray__v67] 
            = (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__tagarray
               [__Vdlyvdim0__top__DOT__mem_2__DOT__dcache_0__DOT__tagarray__v67] 
               | (0x3fffffU & ((IData)(1U) << (IData)(__Vdlyvlsb__top__DOT__mem_2__DOT__dcache_0__DOT__tagarray__v67))));
    }
    if (__Vdlyvset__top__DOT__mem_2__DOT__dcache_0__DOT__tagarray__v68) {
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__tagarray[__Vdlyvdim0__top__DOT__mem_2__DOT__dcache_0__DOT__tagarray__v68] 
            = ((~ ((IData)(1U) << (IData)(__Vdlyvlsb__top__DOT__mem_2__DOT__dcache_0__DOT__tagarray__v68))) 
               & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__tagarray
               [__Vdlyvdim0__top__DOT__mem_2__DOT__dcache_0__DOT__tagarray__v68]);
    }
    vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__axi_full_s2_1__DOT__write_state 
        = __Vdly__top__DOT__mem_2__DOT__mem_read_write_0__DOT__axi_full_s2_1__DOT__write_state;
    vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__axi_full_s2_1__DOT__r_awaddr 
        = __Vdly__top__DOT__mem_2__DOT__mem_read_write_0__DOT__axi_full_s2_1__DOT__r_awaddr;
    vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__d_r_len 
        = __Vdly__top__DOT__mem_2__DOT__dcache_0__DOT__d_r_len;
    vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__cache_state 
        = __Vdly__top__DOT__mem_2__DOT__dcache_0__DOT__cache_state;
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
    vlSelf->top__DOT__i0__DOT__icache0__DOT__cache_state 
        = __Vdly__top__DOT__i0__DOT__icache0__DOT__cache_state;
    if (__Vdlyvset__top__DOT__i0__DOT__icache0__DOT__tagarray__v0) {
        vlSelf->top__DOT__i0__DOT__icache0__DOT__tagarray[__Vdlyvdim0__top__DOT__i0__DOT__icache0__DOT__tagarray__v0] 
            = (vlSelf->top__DOT__i0__DOT__icache0__DOT__tagarray
               [__Vdlyvdim0__top__DOT__i0__DOT__icache0__DOT__tagarray__v0] 
               | (0x1fffffU & ((IData)(1U) << (IData)(__Vdlyvlsb__top__DOT__i0__DOT__icache0__DOT__tagarray__v0))));
        vlSelf->top__DOT__i0__DOT__icache0__DOT__tagarray[__Vdlyvdim0__top__DOT__i0__DOT__icache0__DOT__tagarray__v1] 
            = (((~ ((IData)(0xfffffU) << (IData)(__Vdlyvlsb__top__DOT__i0__DOT__icache0__DOT__tagarray__v1))) 
                & vlSelf->top__DOT__i0__DOT__icache0__DOT__tagarray
                [__Vdlyvdim0__top__DOT__i0__DOT__icache0__DOT__tagarray__v1]) 
               | (0x1fffffU & (__Vdlyvval__top__DOT__i0__DOT__icache0__DOT__tagarray__v1 
                               << (IData)(__Vdlyvlsb__top__DOT__i0__DOT__icache0__DOT__tagarray__v1))));
    }
    if (__Vdlyvset__top__DOT__i0__DOT__icache0__DOT__tagarray__v2) {
        __Vilp = 0U;
        while ((__Vilp <= 0x3fU)) {
            vlSelf->top__DOT__i0__DOT__icache0__DOT__tagarray[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
    if (__Vdlyvset__top__DOT__i0__DOT__icache0__DOT__dataarray__v0) {
        vlSelf->top__DOT__i0__DOT__icache0__DOT__dataarray[__Vdlyvdim0__top__DOT__i0__DOT__icache0__DOT__dataarray__v0][__Vdlyvdim1__top__DOT__i0__DOT__icache0__DOT__dataarray__v0] 
            = __Vdlyvval__top__DOT__i0__DOT__icache0__DOT__dataarray__v0;
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
    vlSelf->top__DOT__i0__DOT__icache0__DOT__rready 
        = ((1U == (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__state)) 
           | (2U == (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__state)));
    vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rready 
        = ((1U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__read_state)) 
           | (2U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__read_state)));
    vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__rready 
        = ((1U == (IData)(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__read_state)) 
           | (2U == (IData)(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__read_state)));
    if (((IData)(vlSelf->rst) | (1U == (IData)(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__axi_full_s2_1__DOT__c_arlen)))) {
        __Vdly__top__DOT__mem_2__DOT__mem_read_write_0__DOT__axi_full_s2_1__DOT__c_arlen = 0U;
    }
    if ((2U == (IData)(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__axi_full_s2_1__DOT__state))) {
        Vtop___024root____Vdpiimwrap_top__DOT__i0__DOT__vpmem_read_TOP((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__axi_full_s2_1__DOT__r_araddr)), __Vtask_top__DOT__mem_2__DOT__mem_read_write_0__DOT__axi_full_s2_1__DOT__vpmem_read__5__mrdata);
        __Vdly__top__DOT__mem_2__DOT__mem_read_write_0__DOT__axi_full_s2_1__DOT__c_arlen 
            = (0xffU & ((IData)(1U) + (IData)(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__axi_full_s2_1__DOT__c_arlen)));
        vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__rdata_axi 
            = __Vtask_top__DOT__mem_2__DOT__mem_read_write_0__DOT__axi_full_s2_1__DOT__vpmem_read__5__mrdata;
        vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__rresp = 0U;
        vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__rvalid = 1U;
        __Vdly__top__DOT__mem_2__DOT__mem_read_write_0__DOT__axi_full_s2_1__DOT__r_araddr 
            = ((IData)(8U) + vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__axi_full_s2_1__DOT__r_araddr);
    } else {
        vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__rvalid = 0U;
    }
    if (vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__rlast) {
        vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__rvalid = 0U;
        __Vdly__top__DOT__mem_2__DOT__mem_read_write_0__DOT__axi_full_s2_1__DOT__c_arlen = 0U;
    }
    if (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__wready) {
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__wvalid = 1U;
    }
    if ((8U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__c_awlen))) {
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__wvalid = 0U;
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__wvalid = 0U;
    }
    if (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__wready) {
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata 
            = vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
            [(0x3fU & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__araddr 
                       >> 6U))][vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__d_w_len];
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__d_w_len 
            = (7U & ((IData)(1U) + (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__d_w_len)));
    } else {
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata = 0xffffffffULL;
    }
    if ((8U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__c_awlen))) {
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__d_w_len = 0U;
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__d_w_len = 0U;
    }
    if (vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__wready) {
        vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__wvalid = 1U;
    }
    if ((1U == (IData)(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__c_awlen))) {
        vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__wvalid = 0U;
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__wvalid = 0U;
    }
    vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__wdata 
        = ((IData)(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__wready)
            ? vlSelf->top__DOT__src2 : 0xffffffffULL);
    if (((IData)(vlSelf->rst) | (8U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__c_arlen)))) {
        __Vdly__top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__c_arlen = 0U;
    }
    if ((2U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__state))) {
        Vtop___024root____Vdpiimwrap_top__DOT__i0__DOT__vpmem_read_TOP((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr)), __Vtask_top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__vpmem_read__3__mrdata);
        __Vdly__top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__c_arlen 
            = (0xffU & ((IData)(1U) + (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__c_arlen)));
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rdata_axi 
            = __Vtask_top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__vpmem_read__3__mrdata;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rresp = 0U;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rvalid = 1U;
        __Vdly__top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr 
            = ((IData)(8U) + vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr);
    } else {
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rvalid = 0U;
    }
    if (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rlast) {
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rvalid = 0U;
        __Vdly__top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__c_arlen = 0U;
    }
    vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__arvalid 
        = ((0U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__read_state)) 
           & (3U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__cache_state)));
    vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__awvalid 
        = ((0U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__write_state)) 
           & (2U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__cache_state)));
    vlSelf->top__DOT__i0__DOT__icache0__DOT__arvalid 
        = ((0U == (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__state)) 
           & (2U == (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__cache_state)));
    vlSelf->inst_update = (3U == (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__cache_state));
    if (((IData)(vlSelf->rst) | (8U == (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__c_arlen)))) {
        __Vdly__top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__c_arlen = 0U;
    }
    if ((2U == (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__state))) {
        Vtop___024root____Vdpiimwrap_top__DOT__i0__DOT__vpmem_read_TOP((QData)((IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__r_araddr)), __Vtask_top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__vpmem_read__0__mrdata);
        __Vdly__top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__c_arlen 
            = (0xffU & ((IData)(1U) + (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__c_arlen)));
        vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi 
            = __Vtask_top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__vpmem_read__0__mrdata;
        vlSelf->top__DOT__i0__DOT__icache0__DOT__rresp = 0U;
        vlSelf->top__DOT__i0__DOT__icache0__DOT__rvalid = 1U;
        __Vdly__top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__r_araddr 
            = ((IData)(8U) + vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__r_araddr);
    } else {
        vlSelf->top__DOT__i0__DOT__icache0__DOT__rvalid = 0U;
    }
    if (vlSelf->top__DOT__i0__DOT__icache0__DOT__rlast) {
        vlSelf->top__DOT__i0__DOT__icache0__DOT__rvalid = 0U;
        __Vdly__top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__c_arlen = 0U;
    }
    vlSelf->cpupc = ((IData)(vlSelf->rst) ? 0x80000000ULL
                      : vlSelf->dnpc);
    vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__axi_full_s2_1__DOT__r_araddr 
        = __Vdly__top__DOT__mem_2__DOT__mem_read_write_0__DOT__axi_full_s2_1__DOT__r_araddr;
    vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__axi_full_s2_1__DOT__state 
        = __Vdly__top__DOT__mem_2__DOT__mem_read_write_0__DOT__axi_full_s2_1__DOT__state;
    vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__axi_full_s2_1__DOT__c_arlen 
        = __Vdly__top__DOT__mem_2__DOT__mem_read_write_0__DOT__axi_full_s2_1__DOT__c_arlen;
    vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__wready 
        = ((1U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__write_state)) 
           | (2U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__write_state)));
    vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__c_awlen 
        = __Vdly__top__DOT__mem_2__DOT__dcache_0__DOT__c_awlen;
    if (__Vdlyvset__top__DOT__mem_2__DOT__dcache_0__DOT__dataarray__v0) {
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[__Vdlyvdim0__top__DOT__mem_2__DOT__dcache_0__DOT__dataarray__v0][__Vdlyvdim1__top__DOT__mem_2__DOT__dcache_0__DOT__dataarray__v0] 
            = __Vdlyvval__top__DOT__mem_2__DOT__dcache_0__DOT__dataarray__v0;
    }
    if (__Vdlyvset__top__DOT__mem_2__DOT__dcache_0__DOT__dataarray__v1) {
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0U][0U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0U][1U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0U][2U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0U][3U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0U][4U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0U][5U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[1U][0U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[1U][1U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[1U][2U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[1U][3U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[1U][4U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[1U][5U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[2U][0U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[2U][1U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[2U][2U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[2U][3U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[2U][4U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[2U][5U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[3U][0U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[3U][1U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[3U][2U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[3U][3U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[3U][4U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[3U][5U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[4U][0U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[4U][1U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[4U][2U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[4U][3U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[4U][4U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[4U][5U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[5U][0U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[5U][1U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[5U][2U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[5U][3U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[5U][4U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[5U][5U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[6U][0U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[6U][1U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[6U][2U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[6U][3U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[6U][4U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[6U][5U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[7U][0U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[7U][1U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[7U][2U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[7U][3U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[7U][4U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[7U][5U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[8U][0U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[8U][1U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[8U][2U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[8U][3U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[8U][4U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[8U][5U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[9U][0U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[9U][1U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[9U][2U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[9U][3U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[9U][4U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[9U][5U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0xaU][0U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0xaU][1U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0xaU][2U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0xaU][3U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0xaU][4U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0xaU][5U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0xbU][0U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0xbU][1U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0xbU][2U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0xbU][3U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0xbU][4U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0xbU][5U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0xcU][0U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0xcU][1U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0xcU][2U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0xcU][3U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0xcU][4U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0xcU][5U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0xdU][0U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0xdU][1U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0xdU][2U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0xdU][3U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0xdU][4U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0xdU][5U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0xeU][0U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0xeU][1U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0xeU][2U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0xeU][3U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0xeU][4U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0xeU][5U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0xfU][0U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0xfU][1U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0xfU][2U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0xfU][3U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0xfU][4U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0xfU][5U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x10U][0U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x10U][1U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x10U][2U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x10U][3U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x10U][4U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x10U][5U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x11U][0U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x11U][1U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x11U][2U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x11U][3U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x11U][4U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x11U][5U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x12U][0U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x12U][1U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x12U][2U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x12U][3U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x12U][4U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x12U][5U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x13U][0U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x13U][1U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x13U][2U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x13U][3U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x13U][4U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x13U][5U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x14U][0U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x14U][1U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x14U][2U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x14U][3U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x14U][4U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x14U][5U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x15U][0U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x15U][1U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x15U][2U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x15U][3U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x15U][4U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x15U][5U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x16U][0U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x16U][1U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x16U][2U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x16U][3U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x16U][4U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x16U][5U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x17U][0U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x17U][1U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x17U][2U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x17U][3U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x17U][4U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x17U][5U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x18U][0U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x18U][1U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x18U][2U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x18U][3U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x18U][4U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x18U][5U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x19U][0U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x19U][1U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x19U][2U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x19U][3U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x19U][4U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x19U][5U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x1aU][0U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x1aU][1U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x1aU][2U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x1aU][3U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x1aU][4U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x1aU][5U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x1bU][0U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x1bU][1U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x1bU][2U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x1bU][3U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x1bU][4U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x1bU][5U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x1cU][0U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x1cU][1U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x1cU][2U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x1cU][3U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x1cU][4U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x1cU][5U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x1dU][0U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x1dU][1U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x1dU][2U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x1dU][3U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x1dU][4U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x1dU][5U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x1eU][0U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x1eU][1U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x1eU][2U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x1eU][3U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x1eU][4U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x1eU][5U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x1fU][0U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x1fU][1U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x1fU][2U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x1fU][3U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x1fU][4U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x1fU][5U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x20U][0U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x20U][1U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x20U][2U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x20U][3U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x20U][4U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x20U][5U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x21U][0U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x21U][1U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x21U][2U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x21U][3U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x21U][4U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x21U][5U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x22U][0U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x22U][1U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x22U][2U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x22U][3U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x22U][4U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x22U][5U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x23U][0U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x23U][1U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x23U][2U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x23U][3U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x23U][4U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x23U][5U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x24U][0U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x24U][1U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x24U][2U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x24U][3U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x24U][4U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x24U][5U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x25U][0U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x25U][1U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x25U][2U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x25U][3U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x25U][4U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x25U][5U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x26U][0U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x26U][1U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x26U][2U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x26U][3U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x26U][4U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x26U][5U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x27U][0U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x27U][1U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x27U][2U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x27U][3U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x27U][4U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x27U][5U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x28U][0U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x28U][1U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x28U][2U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x28U][3U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x28U][4U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x28U][5U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x29U][0U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x29U][1U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x29U][2U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x29U][3U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x29U][4U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x29U][5U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x2aU][0U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x2aU][1U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x2aU][2U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x2aU][3U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x2aU][4U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x2aU][5U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x2bU][0U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x2bU][1U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x2bU][2U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x2bU][3U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x2bU][4U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x2bU][5U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x2cU][0U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x2cU][1U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x2cU][2U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x2cU][3U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x2cU][4U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x2cU][5U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x2dU][0U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x2dU][1U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x2dU][2U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x2dU][3U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x2dU][4U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x2dU][5U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x2eU][0U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x2eU][1U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x2eU][2U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x2eU][3U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x2eU][4U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x2eU][5U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x2fU][0U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x2fU][1U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x2fU][2U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x2fU][3U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x2fU][4U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x2fU][5U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x30U][0U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x30U][1U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x30U][2U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x30U][3U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x30U][4U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x30U][5U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x31U][0U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x31U][1U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x31U][2U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x31U][3U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x31U][4U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x31U][5U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x32U][0U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x32U][1U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x32U][2U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x32U][3U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x32U][4U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x32U][5U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x33U][0U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x33U][1U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x33U][2U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x33U][3U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x33U][4U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x33U][5U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x34U][0U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x34U][1U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x34U][2U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x34U][3U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x34U][4U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x34U][5U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x35U][0U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x35U][1U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x35U][2U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x35U][3U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x35U][4U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x35U][5U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x36U][0U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x36U][1U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x36U][2U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x36U][3U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x36U][4U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x36U][5U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x37U][0U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x37U][1U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x37U][2U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x37U][3U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x37U][4U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x37U][5U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x38U][0U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x38U][1U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x38U][2U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x38U][3U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x38U][4U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x38U][5U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x39U][0U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x39U][1U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x39U][2U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x39U][3U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x39U][4U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x39U][5U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x3aU][0U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x3aU][1U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x3aU][2U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x3aU][3U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x3aU][4U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x3aU][5U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x3bU][0U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x3bU][1U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x3bU][2U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x3bU][3U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x3bU][4U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x3bU][5U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x3cU][0U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x3cU][1U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x3cU][2U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x3cU][3U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x3cU][4U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x3cU][5U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x3dU][0U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x3dU][1U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x3dU][2U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x3dU][3U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x3dU][4U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x3dU][5U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x3eU][0U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x3eU][1U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x3eU][2U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x3eU][3U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x3eU][4U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x3eU][5U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x3fU][0U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x3fU][1U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x3fU][2U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x3fU][3U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x3fU][4U] = 0ULL;
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[0x3fU][5U] = 0ULL;
    }
    if (__Vdlyvset__top__DOT__mem_2__DOT__dcache_0__DOT__dataarray__v385) {
        vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray[__Vdlyvdim0__top__DOT__mem_2__DOT__dcache_0__DOT__dataarray__v385][__Vdlyvdim1__top__DOT__mem_2__DOT__dcache_0__DOT__dataarray__v385] 
            = __Vdlyvval__top__DOT__mem_2__DOT__dcache_0__DOT__dataarray__v385;
    }
    vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__c_awlen 
        = __Vdly__top__DOT__mem_2__DOT__mem_read_write_0__DOT__c_awlen;
    vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__wready 
        = ((1U == (IData)(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__axi_full_s2_1__DOT__write_state)) 
           | (2U == (IData)(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__axi_full_s2_1__DOT__write_state)));
    vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr 
        = __Vdly__top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr;
    vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__state 
        = __Vdly__top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__state;
    vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__c_arlen 
        = __Vdly__top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__c_arlen;
    vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__r_araddr 
        = __Vdly__top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__r_araddr;
    vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__state 
        = __Vdly__top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__state;
    vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__c_arlen 
        = __Vdly__top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__c_arlen;
    vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__rlast 
        = (1U == (IData)(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__axi_full_s2_1__DOT__c_arlen));
    vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__wlast 
        = (8U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__c_awlen));
    vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__wlast 
        = (1U == (IData)(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__c_awlen));
    vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rlast 
        = (8U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__c_arlen));
    vlSelf->top__DOT__i0__DOT__icache0__DOT__rlast 
        = (8U == (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__c_arlen));
    vlSelf->top__DOT__i0__DOT__rdata_u = vlSelf->top__DOT__i0__DOT__icache0__DOT__dataarray
        [(0x3fU & (IData)((vlSelf->cpupc >> 6U)))][
        (7U & (IData)((vlSelf->cpupc >> 3U)))];
    vlSelf->inst = ((1U & (IData)((vlSelf->cpupc >> 2U)))
                     ? (IData)((vlSelf->top__DOT__i0__DOT__rdata_u 
                                >> 0x20U)) : (IData)(vlSelf->top__DOT__i0__DOT__rdata_u));
    vlSelf->top__DOT__e_inst = ((0x100073U == vlSelf->inst)
                                 ? 1U : ((0x73U == vlSelf->inst)
                                          ? 2U : ((0x30200073U 
                                                   == vlSelf->inst)
                                                   ? 4U
                                                   : 0U)));
    vlSelf->top__DOT__src1 = vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf
        [(0x1fU & (vlSelf->inst >> 0xfU))];
    vlSelf->top__DOT__src2 = vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf
        [(0x1fU & (vlSelf->inst >> 0x14U))];
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
    vlSelf->top__DOT__id_0__DOT__immi = (((- (QData)((IData)(
                                                             (vlSelf->inst 
                                                              >> 0x1fU)))) 
                                          << 0xcU) 
                                         | (QData)((IData)(
                                                           (vlSelf->inst 
                                                            >> 0x14U))));
    vlSelf->top__DOT__id_0__DOT__immu = (((QData)((IData)(
                                                          (- (IData)(
                                                                     (vlSelf->inst 
                                                                      >> 0x1fU))))) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           (0xfffff000U 
                                                            & vlSelf->inst))));
    vlSelf->ebreak = (1U & (IData)(vlSelf->top__DOT__e_inst));
    vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux1____pinNumber3[0U] 
        = (IData)((((QData)((IData)((- (IData)((1U 
                                                & (IData)(
                                                          (vlSelf->top__DOT__src1 
                                                           >> 0x1fU))))))) 
                    << 0x20U) | (QData)((IData)(vlSelf->top__DOT__src1))));
    vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux1____pinNumber3[1U] 
        = (IData)(((((QData)((IData)((- (IData)((1U 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__src1 
                                                            >> 0x1fU))))))) 
                     << 0x20U) | (QData)((IData)(vlSelf->top__DOT__src1))) 
                   >> 0x20U));
    vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux1____pinNumber3[2U] 
        = (8U | ((IData)((QData)((IData)(vlSelf->top__DOT__src1))) 
                 << 4U));
    vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux1____pinNumber3[3U] 
        = (((IData)((QData)((IData)(vlSelf->top__DOT__src1))) 
            >> 0x1cU) | ((IData)(((QData)((IData)(vlSelf->top__DOT__src1)) 
                                  >> 0x20U)) << 4U));
    vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux1____pinNumber3[4U] 
        = (0x40U | (((IData)(vlSelf->cpupc) << 8U) 
                    | ((IData)(((QData)((IData)(vlSelf->top__DOT__src1)) 
                                >> 0x20U)) >> 0x1cU)));
    vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux1____pinNumber3[5U] 
        = (((IData)(vlSelf->cpupc) >> 0x18U) | ((IData)(
                                                        (vlSelf->cpupc 
                                                         >> 0x20U)) 
                                                << 8U));
    vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux1____pinNumber3[6U] 
        = (0x200U | (((IData)(vlSelf->top__DOT__src1) 
                      << 0xcU) | ((IData)((vlSelf->cpupc 
                                           >> 0x20U)) 
                                  >> 0x18U)));
    vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux1____pinNumber3[7U] 
        = (((IData)(vlSelf->top__DOT__src1) >> 0x14U) 
           | ((IData)((vlSelf->top__DOT__src1 >> 0x20U)) 
              << 0xcU));
    vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux1____pinNumber3[8U] 
        = (0x1000U | ((IData)((vlSelf->top__DOT__src1 
                               >> 0x20U)) >> 0x14U));
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
    vlSelf->top__DOT__control_0__DOT__beq = (1U & (
                                                   ((IData)(1U) 
                                                    << 
                                                    (7U 
                                                     & (vlSelf->inst 
                                                        >> 0xcU))) 
                                                   & ((IData)(vlSelf->top__DOT__op_d) 
                                                      >> 4U)));
    vlSelf->top__DOT__control_0__DOT__bne = (1U & (
                                                   (((IData)(1U) 
                                                     << 
                                                     (7U 
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
    vlSelf->top__DOT__control_0__DOT__bge = (1U & (
                                                   (((IData)(1U) 
                                                     << 
                                                     (7U 
                                                      & (vlSelf->inst 
                                                         >> 0xcU))) 
                                                    >> 5U) 
                                                   & ((IData)(vlSelf->top__DOT__op_d) 
                                                      >> 4U)));
    vlSelf->top__DOT__control_0__DOT__bgeu = (1U & 
                                              ((((IData)(1U) 
                                                 << 
                                                 (7U 
                                                  & (vlSelf->inst 
                                                     >> 0xcU))) 
                                                >> 7U) 
                                               & ((IData)(vlSelf->top__DOT__op_d) 
                                                  >> 4U)));
    vlSelf->top__DOT__control_0__DOT__bltu = (1U & 
                                              ((((IData)(1U) 
                                                 << 
                                                 (7U 
                                                  & (vlSelf->inst 
                                                     >> 0xcU))) 
                                                >> 6U) 
                                               & ((IData)(vlSelf->top__DOT__op_d) 
                                                  >> 4U)));
    vlSelf->top__DOT__control_0__DOT__blt = (1U & (
                                                   (((IData)(1U) 
                                                     << 
                                                     (7U 
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
    vlSelf->top__DOT__control_0__DOT__remuw = (1U & 
                                               ((((IData)(vlSelf->top__DOT__fu_7_d) 
                                                  >> 2U) 
                                                 & (((IData)(1U) 
                                                     << 
                                                     (7U 
                                                      & (vlSelf->inst 
                                                         >> 0xcU))) 
                                                    >> 7U)) 
                                                & ((IData)(vlSelf->top__DOT__op_d) 
                                                   >> 0xbU)));
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
    __Vtemp15[6U] = (((IData)((((- (QData)((IData)(
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
    __Vtemp19[0xaU] = (((IData)((((- (QData)((IData)(
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
    __Vtemp29[7U] = ((0xfffff0U & ((IData)((((- (QData)((IData)(
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
    __Vtemp29[8U] = ((((IData)((((- (QData)((IData)(
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
    __Vtemp29[0xeU] = (1U | ((0xffff00U & ((IData)(vlSelf->top__DOT__id_0__DOT__immi) 
                                           << 8U)) 
                             | (0xff000000U & ((IData)(vlSelf->top__DOT__id_0__DOT__immi) 
                                               << 8U))));
    __Vtemp29[0xfU] = ((((IData)(vlSelf->top__DOT__id_0__DOT__immi) 
                         >> 0x18U) | (0xffff00U & ((IData)(
                                                           (vlSelf->top__DOT__id_0__DOT__immi 
                                                            >> 0x20U)) 
                                                   << 8U))) 
                       | (0xff000000U & ((IData)((vlSelf->top__DOT__id_0__DOT__immi 
                                                  >> 0x20U)) 
                                         << 8U)));
    vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0U] 
        = (IData)(vlSelf->top__DOT__id_0__DOT__immi);
    vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[1U] 
        = (IData)((vlSelf->top__DOT__id_0__DOT__immi 
                   >> 0x20U));
    vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[2U] 
        = (0x400U | ((IData)(vlSelf->top__DOT__id_0__DOT__immi) 
                     << 0xcU));
    vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[3U] 
        = (((IData)(vlSelf->top__DOT__id_0__DOT__immi) 
            >> 0x14U) | ((IData)((vlSelf->top__DOT__id_0__DOT__immi 
                                  >> 0x20U)) << 0xcU));
    vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[4U] 
        = (0x200000U | (((IData)(vlSelf->top__DOT__id_0__DOT__immi) 
                         << 0x18U) | ((IData)((vlSelf->top__DOT__id_0__DOT__immi 
                                               >> 0x20U)) 
                                      >> 0x14U)));
    vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[5U] 
        = (((IData)(vlSelf->top__DOT__id_0__DOT__immi) 
            >> 8U) | ((IData)((vlSelf->top__DOT__id_0__DOT__immi 
                               >> 0x20U)) << 0x18U));
    vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[6U] 
        = (0x80000000U | ((IData)((vlSelf->top__DOT__id_0__DOT__immi 
                                   >> 0x20U)) >> 8U));
    vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[7U] 
        = __Vtemp29[7U];
    vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[8U] 
        = __Vtemp29[8U];
    vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[9U] 
        = (0x400U | (((0xff0000U & ((IData)(vlSelf->top__DOT__id_0__DOT__immi) 
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
                     | (0xff000000U & ((IData)(vlSelf->top__DOT__id_0__DOT__immi) 
                                       << 0x10U))));
    vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0xaU] 
        = ((((IData)(vlSelf->top__DOT__id_0__DOT__immi) 
             >> 0x10U) | (0xff0000U & ((IData)((vlSelf->top__DOT__id_0__DOT__immi 
                                                >> 0x20U)) 
                                       << 0x10U))) 
           | (0xff000000U & ((IData)((vlSelf->top__DOT__id_0__DOT__immi 
                                      >> 0x20U)) << 0x10U)));
    vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0xbU] 
        = (0x200000U | (((IData)((vlSelf->top__DOT__id_0__DOT__immi 
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
    vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0xcU] 
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
                         >> 4U)) | (__Vtemp15[6U] << 0x18U));
    vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0xdU] 
        = ((__Vtemp15[6U] >> 8U) | (0xf000000U & ((IData)(
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
    vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0xeU] 
        = __Vtemp29[0xeU];
    vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0xfU] 
        = __Vtemp29[0xfU];
    vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0x10U] 
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
                                                          (vlSelf->top__DOT__id_0__DOT__immi 
                                                           >> 0x20U)) 
                                                  >> 0x18U)) 
                     | (__Vtemp19[0xaU] << 0x18U)));
    vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0x11U] 
        = ((__Vtemp19[0xaU] >> 8U) | (0xff000000U & 
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
    vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0x12U] 
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
    vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0x13U] 
        = ((0xffffffU & (IData)(vlSelf->top__DOT__id_0__DOT__immu)) 
           | (0xff000000U & (IData)(vlSelf->top__DOT__id_0__DOT__immu)));
    vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0x14U] 
        = ((0xffffffU & (IData)((vlSelf->top__DOT__id_0__DOT__immu 
                                 >> 0x20U))) | (0xff000000U 
                                                & (IData)(
                                                          (vlSelf->top__DOT__id_0__DOT__immu 
                                                           >> 0x20U))));
    vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0x15U] 
        = (2U | ((0xfff000U & ((IData)(vlSelf->top__DOT__id_0__DOT__immu) 
                               << 0xcU)) | (0xff000000U 
                                            & ((IData)(vlSelf->top__DOT__id_0__DOT__immu) 
                                               << 0xcU))));
    vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0x16U] 
        = ((((IData)(vlSelf->top__DOT__id_0__DOT__immu) 
             >> 0x14U) | (0xfff000U & ((IData)((vlSelf->top__DOT__id_0__DOT__immu 
                                                >> 0x20U)) 
                                       << 0xcU))) | 
           (0xff000000U & ((IData)((vlSelf->top__DOT__id_0__DOT__immu 
                                    >> 0x20U)) << 0xcU)));
    vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0x17U] 
        = (0x1000U | ((IData)((vlSelf->top__DOT__id_0__DOT__immu 
                               >> 0x20U)) >> 0x14U));
    vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__pair_list[0U][0U] 
        = vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux1____pinNumber3[0U];
    vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__pair_list[0U][1U] 
        = vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux1____pinNumber3[1U];
    vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__pair_list[0U][2U] 
        = (0xfU & vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux1____pinNumber3[2U]);
    vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__pair_list[1U][0U] 
        = ((vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux1____pinNumber3[3U] 
            << 0x1cU) | (vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux1____pinNumber3[2U] 
                         >> 4U));
    vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__pair_list[1U][1U] 
        = ((vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux1____pinNumber3[4U] 
            << 0x1cU) | (vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux1____pinNumber3[3U] 
                         >> 4U));
    vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__pair_list[1U][2U] 
        = (0xfU & (vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux1____pinNumber3[4U] 
                   >> 4U));
    vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__pair_list[2U][0U] 
        = ((vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux1____pinNumber3[5U] 
            << 0x18U) | (vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux1____pinNumber3[4U] 
                         >> 8U));
    vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__pair_list[2U][1U] 
        = ((vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux1____pinNumber3[6U] 
            << 0x18U) | (vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux1____pinNumber3[5U] 
                         >> 8U));
    vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__pair_list[2U][2U] 
        = (0xfU & (vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux1____pinNumber3[6U] 
                   >> 8U));
    vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__pair_list[3U][0U] 
        = ((vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux1____pinNumber3[7U] 
            << 0x14U) | (vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux1____pinNumber3[6U] 
                         >> 0xcU));
    vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__pair_list[3U][1U] 
        = ((vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux1____pinNumber3[8U] 
            << 0x14U) | (vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux1____pinNumber3[7U] 
                         >> 0xcU));
    vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__pair_list[3U][2U] 
        = (0xfU & (vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux1____pinNumber3[8U] 
                   >> 0xcU));
    vlSelf->top__DOT__w_choose = ((((((((((((((IData)(vlSelf->top__DOT__control_0__DOT__addw) 
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
                                   | (IData)(vlSelf->top__DOT__control_0__DOT__srliw)) 
                                  | (IData)(vlSelf->top__DOT__control_0__DOT__remuw));
    vlSelf->top__DOT__wmask = ((IData)(vlSelf->top__DOT__control_0__DOT__sb)
                                ? 1U : ((IData)(vlSelf->top__DOT__control_0__DOT__sh)
                                         ? 3U : ((IData)(vlSelf->top__DOT__control_0__DOT__sw)
                                                  ? 0xfU
                                                  : 
                                                 ((IData)(vlSelf->top__DOT__control_0__DOT__sd)
                                                   ? 0xffU
                                                   : 0U))));
    vlSelf->top__DOT__data_ram_wen = (((((IData)(vlSelf->top__DOT__control_0__DOT__sd) 
                                         | (IData)(vlSelf->top__DOT__control_0__DOT__sb)) 
                                        | (IData)(vlSelf->top__DOT__control_0__DOT__sh)) 
                                       | (IData)(vlSelf->top__DOT__control_0__DOT__sw)) 
                                      | (IData)(vlSelf->top__DOT__control_0__DOT__sb));
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
                                                   (((((((((((((((((((((((((((((((((((((((((IData)(vlSelf->top__DOT__control_0__DOT__addi) 
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
                                                             | (IData)(vlSelf->top__DOT__control_0__DOT__beq)) 
                                                            | (IData)(vlSelf->top__DOT__control_0__DOT__bne)) 
                                                           | (IData)(vlSelf->top__DOT__control_0__DOT__bge)) 
                                                          | (IData)(vlSelf->top__DOT__control_0__DOT__bgeu)) 
                                                         | (IData)(vlSelf->top__DOT__control_0__DOT__bltu)) 
                                                        | (IData)(vlSelf->top__DOT__control_0__DOT__blt)) 
                                                       | ((IData)(vlSelf->top__DOT__op_d) 
                                                          >> 1U)) 
                                                      | (IData)(vlSelf->top__DOT__control_0__DOT__rem)) 
                                                     | (IData)(vlSelf->top__DOT__control_0__DOT__remu)) 
                                                    | (IData)(vlSelf->top__DOT__control_0__DOT__div)) 
                                                   | (IData)(vlSelf->top__DOT__control_0__DOT__addw)) 
                                                  | (IData)(vlSelf->top__DOT__control_0__DOT__subw)) 
                                                 | (IData)(vlSelf->top__DOT__control_0__DOT__mulw)) 
                                                | (IData)(vlSelf->top__DOT__control_0__DOT__remuw)) 
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
    vlSelf->top__DOT__data_ram_en = (((((((IData)(vlSelf->top__DOT__control_0__DOT__ld) 
                                          | (IData)(vlSelf->top__DOT__control_0__DOT__lw)) 
                                         | (IData)(vlSelf->top__DOT__control_0__DOT__lwu)) 
                                        | (IData)(vlSelf->top__DOT__control_0__DOT__lh)) 
                                       | (IData)(vlSelf->top__DOT__control_0__DOT__lhu)) 
                                      | (IData)(vlSelf->top__DOT__control_0__DOT__lb)) 
                                     | (IData)(vlSelf->top__DOT__control_0__DOT__lbu));
    vlSelf->top__DOT__sel_alu_src1 = ((((1U & (- (IData)(
                                                         ((((((((((((((((((((((((((((((((((((((((((((((((IData)(vlSelf->top__DOT__control_0__DOT__Add) 
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
                                                                                | (IData)(vlSelf->top__DOT__control_0__DOT__bge)) 
                                                                                | (IData)(vlSelf->top__DOT__control_0__DOT__bgeu)) 
                                                                                | (IData)(vlSelf->top__DOT__control_0__DOT__blt)) 
                                                                                | (IData)(vlSelf->top__DOT__control_0__DOT__bltu)) 
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
                                                                 | (IData)(vlSelf->top__DOT__control_0__DOT__beq)) 
                                                                | (IData)(vlSelf->top__DOT__control_0__DOT__bne)) 
                                                               | (IData)(vlSelf->top__DOT__control_0__DOT__addiw)) 
                                                              | (IData)(vlSelf->top__DOT__control_0__DOT__slli)) 
                                                             | (IData)(vlSelf->top__DOT__control_0__DOT__srli)) 
                                                            | (IData)(vlSelf->top__DOT__control_0__DOT__srai)) 
                                                           | (IData)(vlSelf->top__DOT__control_0__DOT__sltu)) 
                                                          | (IData)(vlSelf->top__DOT__control_0__DOT__remuw))))) 
                                        | (2U & (- (IData)(
                                                           (1U 
                                                            & ((((IData)(vlSelf->top__DOT__op_d) 
                                                                 >> 2U) 
                                                                | (IData)(vlSelf->top__DOT__control_0__DOT__jalr)) 
                                                               | ((IData)(vlSelf->top__DOT__op_d) 
                                                                  >> 1U))))))) 
                                       | (4U & (- (IData)(
                                                          ((((IData)(vlSelf->top__DOT__control_0__DOT__sllw) 
                                                             | (IData)(vlSelf->top__DOT__control_0__DOT__srlw)) 
                                                            | (IData)(vlSelf->top__DOT__control_0__DOT__slliw)) 
                                                           | (IData)(vlSelf->top__DOT__control_0__DOT__srliw)))))) 
                                      | (8U & (- (IData)(
                                                         ((IData)(vlSelf->top__DOT__control_0__DOT__sraw) 
                                                          | (IData)(vlSelf->top__DOT__control_0__DOT__sraiw))))));
    vlSelf->top__DOT__alu_control = (((((((((((((((
                                                   (1U 
                                                    & (- (IData)(
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
                                                   | (2U 
                                                      & (- (IData)(
                                                                   ((IData)(vlSelf->top__DOT__control_0__DOT__sub) 
                                                                    | (IData)(vlSelf->top__DOT__control_0__DOT__subw)))))) 
                                                  | (4U 
                                                     & (- (IData)(
                                                                  (((IData)(vlSelf->top__DOT__control_0__DOT__slt) 
                                                                    | (IData)(vlSelf->top__DOT__control_0__DOT__bge)) 
                                                                   | (IData)(vlSelf->top__DOT__control_0__DOT__blt)))))) 
                                                 | (8U 
                                                    & (- (IData)(
                                                                 ((((IData)(vlSelf->top__DOT__control_0__DOT__sltu) 
                                                                    | (IData)(vlSelf->top__DOT__control_0__DOT__sltiu)) 
                                                                   | (IData)(vlSelf->top__DOT__control_0__DOT__bgeu)) 
                                                                  | (IData)(vlSelf->top__DOT__control_0__DOT__bltu)))))) 
                                                | (0x10U 
                                                   & (- (IData)(
                                                                ((IData)(vlSelf->top__DOT__control_0__DOT__And) 
                                                                 | (IData)(vlSelf->top__DOT__control_0__DOT__andi)))))) 
                                               | (0x40U 
                                                  & (- (IData)(
                                                               ((IData)(vlSelf->top__DOT__control_0__DOT__Or) 
                                                                | (IData)(vlSelf->top__DOT__control_0__DOT__ori)))))) 
                                              | (0x80U 
                                                 & (- (IData)(
                                                              ((IData)(vlSelf->top__DOT__control_0__DOT__Xor) 
                                                               | (IData)(vlSelf->top__DOT__control_0__DOT__xori)))))) 
                                             | (0x100U 
                                                & (- (IData)(
                                                             ((((IData)(vlSelf->top__DOT__control_0__DOT__sll) 
                                                                | (IData)(vlSelf->top__DOT__control_0__DOT__sllw)) 
                                                               | (IData)(vlSelf->top__DOT__control_0__DOT__slliw)) 
                                                              | (IData)(vlSelf->top__DOT__control_0__DOT__slli)))))) 
                                            | (0x200U 
                                               & (- (IData)(
                                                            ((((IData)(vlSelf->top__DOT__control_0__DOT__srl) 
                                                               | (IData)(vlSelf->top__DOT__control_0__DOT__srlw)) 
                                                              | (IData)(vlSelf->top__DOT__control_0__DOT__srliw)) 
                                                             | (IData)(vlSelf->top__DOT__control_0__DOT__srli)))))) 
                                           | (0x400U 
                                              & (- (IData)(
                                                           ((((IData)(vlSelf->top__DOT__control_0__DOT__sra) 
                                                              | (IData)(vlSelf->top__DOT__control_0__DOT__sraw)) 
                                                             | (IData)(vlSelf->top__DOT__control_0__DOT__sraiw)) 
                                                            | (IData)(vlSelf->top__DOT__control_0__DOT__srai)))))) 
                                          | (0x800U 
                                             & (- (IData)(
                                                          (1U 
                                                           & (IData)(vlSelf->top__DOT__op_d)))))) 
                                         | (0x1000U 
                                            & (- (IData)(
                                                         ((IData)(vlSelf->top__DOT__control_0__DOT__Mul) 
                                                          | (IData)(vlSelf->top__DOT__control_0__DOT__mulw)))))) 
                                        | (0x2000U 
                                           & (- (IData)(
                                                        ((IData)(vlSelf->top__DOT__control_0__DOT__divu) 
                                                         | (IData)(vlSelf->top__DOT__control_0__DOT__divuw)))))) 
                                       | (0x4000U & 
                                          (- (IData)(
                                                     ((IData)(vlSelf->top__DOT__control_0__DOT__div) 
                                                      | (IData)(vlSelf->top__DOT__control_0__DOT__divw)))))) 
                                      | (0x8000U & 
                                         (- (IData)((IData)(vlSelf->top__DOT__control_0__DOT__remu))))) 
                                     | (0x10000U & 
                                        (- (IData)(
                                                   (((IData)(vlSelf->top__DOT__control_0__DOT__rem) 
                                                     | (IData)(vlSelf->top__DOT__control_0__DOT__remw)) 
                                                    | (IData)(vlSelf->top__DOT__control_0__DOT__remuw))))));
    vlSelf->top__DOT__sel_alu_src2 = (((1U & (- (IData)(
                                                        (((((((((((((((((((((((((((((((IData)(vlSelf->top__DOT__control_0__DOT__Add) 
                                                                                | (IData)(vlSelf->top__DOT__control_0__DOT__slt)) 
                                                                                | (IData)(vlSelf->top__DOT__control_0__DOT__sll)) 
                                                                                | (IData)(vlSelf->top__DOT__control_0__DOT__srl)) 
                                                                                | (IData)(vlSelf->top__DOT__control_0__DOT__sra)) 
                                                                                | (IData)(vlSelf->top__DOT__control_0__DOT__And)) 
                                                                                | (IData)(vlSelf->top__DOT__control_0__DOT__Or)) 
                                                                                | (IData)(vlSelf->top__DOT__control_0__DOT__Xor)) 
                                                                               | (IData)(vlSelf->top__DOT__control_0__DOT__Mul)) 
                                                                              | (IData)(vlSelf->top__DOT__control_0__DOT__divu)) 
                                                                             | (IData)(vlSelf->top__DOT__control_0__DOT__bge)) 
                                                                            | (IData)(vlSelf->top__DOT__control_0__DOT__bgeu)) 
                                                                           | (IData)(vlSelf->top__DOT__control_0__DOT__blt)) 
                                                                          | (IData)(vlSelf->top__DOT__control_0__DOT__bltu)) 
                                                                         | (IData)(vlSelf->top__DOT__control_0__DOT__rem)) 
                                                                        | (IData)(vlSelf->top__DOT__control_0__DOT__remu)) 
                                                                       | (IData)(vlSelf->top__DOT__control_0__DOT__div)) 
                                                                      | (IData)(vlSelf->top__DOT__control_0__DOT__addw)) 
                                                                     | (IData)(vlSelf->top__DOT__control_0__DOT__subw)) 
                                                                    | (IData)(vlSelf->top__DOT__control_0__DOT__sub)) 
                                                                   | (IData)(vlSelf->top__DOT__control_0__DOT__mulw)) 
                                                                  | (IData)(vlSelf->top__DOT__control_0__DOT__remuw)) 
                                                                 | (IData)(vlSelf->top__DOT__control_0__DOT__divw)) 
                                                                | (IData)(vlSelf->top__DOT__control_0__DOT__divuw)) 
                                                               | (IData)(vlSelf->top__DOT__control_0__DOT__remw)) 
                                                              | (IData)(vlSelf->top__DOT__control_0__DOT__beq)) 
                                                             | (IData)(vlSelf->top__DOT__control_0__DOT__bne)) 
                                                            | (IData)(vlSelf->top__DOT__control_0__DOT__sllw)) 
                                                           | (IData)(vlSelf->top__DOT__control_0__DOT__srlw)) 
                                                          | (IData)(vlSelf->top__DOT__control_0__DOT__sraw)) 
                                                         | (IData)(vlSelf->top__DOT__control_0__DOT__sltu))))) 
                                       | (2U & (- (IData)(
                                                          (1U 
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
                                      | (4U & (- (IData)(
                                                         (1U 
                                                          & (((IData)(vlSelf->top__DOT__op_d) 
                                                              >> 2U) 
                                                             | (IData)(vlSelf->top__DOT__control_0__DOT__jalr)))))));
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[0U][0U] 
        = vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0U];
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[0U][1U] 
        = vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[1U];
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[0U][2U] 
        = (0xfffU & vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[2U]);
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[1U][0U] 
        = ((vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[3U] 
            << 0x14U) | (vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[2U] 
                         >> 0xcU));
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[1U][1U] 
        = ((vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[4U] 
            << 0x14U) | (vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[3U] 
                         >> 0xcU));
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[1U][2U] 
        = (0xfffU & (vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[4U] 
                     >> 0xcU));
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[2U][0U] 
        = ((vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[5U] 
            << 8U) | (vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[4U] 
                      >> 0x18U));
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[2U][1U] 
        = ((vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[6U] 
            << 8U) | (vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[5U] 
                      >> 0x18U));
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[2U][2U] 
        = (0xfffU & ((vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[7U] 
                      << 8U) | (vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[6U] 
                                >> 0x18U)));
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[3U][0U] 
        = ((vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[8U] 
            << 0x1cU) | (vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[7U] 
                         >> 4U));
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[3U][1U] 
        = ((vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[9U] 
            << 0x1cU) | (vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[8U] 
                         >> 4U));
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[3U][2U] 
        = (0xfffU & (vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[9U] 
                     >> 4U));
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[4U][0U] 
        = ((vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0xaU] 
            << 0x10U) | (vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[9U] 
                         >> 0x10U));
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[4U][1U] 
        = ((vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0xbU] 
            << 0x10U) | (vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0xaU] 
                         >> 0x10U));
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[4U][2U] 
        = (0xfffU & (vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0xbU] 
                     >> 0x10U));
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[5U][0U] 
        = ((vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0xcU] 
            << 4U) | (vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0xbU] 
                      >> 0x1cU));
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[5U][1U] 
        = ((vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0xdU] 
            << 4U) | (vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0xcU] 
                      >> 0x1cU));
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[5U][2U] 
        = (0xfffU & ((vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0xeU] 
                      << 4U) | (vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0xdU] 
                                >> 0x1cU)));
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[6U][0U] 
        = ((vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0xfU] 
            << 0x18U) | (vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0xeU] 
                         >> 8U));
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[6U][1U] 
        = ((vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0x10U] 
            << 0x18U) | (vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0xfU] 
                         >> 8U));
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[6U][2U] 
        = (0xfffU & (vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0x10U] 
                     >> 8U));
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[7U][0U] 
        = ((vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0x11U] 
            << 0xcU) | (vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0x10U] 
                        >> 0x14U));
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[7U][1U] 
        = ((vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0x12U] 
            << 0xcU) | (vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0x11U] 
                        >> 0x14U));
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[7U][2U] 
        = (vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0x12U] 
           >> 0x14U);
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[8U][0U] 
        = vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0x13U];
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[8U][1U] 
        = vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0x14U];
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[8U][2U] 
        = (0xfffU & vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0x15U]);
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[9U][0U] 
        = ((vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0x16U] 
            << 0x14U) | (vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0x15U] 
                         >> 0xcU));
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[9U][1U] 
        = ((vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0x17U] 
            << 0x14U) | (vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0x16U] 
                         >> 0xcU));
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[9U][2U] 
        = (0xfffU & (vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3[0x17U] 
                     >> 0xcU));
    vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__data_list[2U] 
        = (((QData)((IData)(vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__pair_list
                            [2U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__pair_list
                                                                   [2U][0U])));
    vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__data_list[3U] 
        = (((QData)((IData)(vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__pair_list
                            [3U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__pair_list
                                                                   [3U][0U])));
    vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__key_list[0U] 
        = (0xfU & vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__pair_list
           [0U][2U]);
    vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__key_list[1U] 
        = (0xfU & vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__pair_list
           [1U][2U]);
    vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__key_list[2U] 
        = (0xfU & vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__pair_list
           [2U][2U]);
    vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__key_list[3U] 
        = (0xfU & vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__pair_list
           [3U][2U]);
    vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__wcache_en 
        = ((IData)(vlSelf->top__DOT__data_ram_wen) 
           & (IData)(vlSelf->inst_update));
    vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rcache_en 
        = ((IData)(vlSelf->top__DOT__data_ram_en) & (IData)(vlSelf->inst_update));
    vlSelf->top__DOT__exe_0__DOT__alu2__DOT__adder_cin 
        = ((IData)((0U != (0xeU & vlSelf->top__DOT__alu_control)))
            ? 1U : 0U);
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list[2U] 
        = (((QData)((IData)(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list
                            [2U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list
                                                                   [2U][0U])));
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list[3U] 
        = (((QData)((IData)(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list
                            [3U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list
                                                                   [3U][0U])));
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list[4U] 
        = (((QData)((IData)(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list
                            [4U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list
                                                                   [4U][0U])));
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list[5U] 
        = (((QData)((IData)(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list
                            [5U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list
                                                                   [5U][0U])));
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list[6U] 
        = (((QData)((IData)(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list
                            [6U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list
                                                                   [6U][0U])));
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list[7U] 
        = (((QData)((IData)(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list
                            [7U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list
                                                                   [7U][0U])));
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list[8U] 
        = (((QData)((IData)(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list
                            [8U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list
                                                                   [8U][0U])));
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list[9U] 
        = (((QData)((IData)(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list
                            [9U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list
                                                                   [9U][0U])));
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list[0U] 
        = (0xfffU & vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list
           [0U][2U]);
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list[1U] 
        = (0xfffU & vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list
           [1U][2U]);
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list[2U] 
        = (0xfffU & vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list
           [2U][2U]);
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list[3U] 
        = (0xfffU & vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list
           [3U][2U]);
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list[4U] 
        = (0xfffU & vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list
           [4U][2U]);
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list[5U] 
        = (0xfffU & vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list
           [5U][2U]);
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list[6U] 
        = (0xfffU & vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list
           [6U][2U]);
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list[7U] 
        = (0xfffU & vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list
           [7U][2U]);
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list[8U] 
        = (0xfffU & vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list
           [8U][2U]);
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list[9U] 
        = (0xfffU & vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list
           [9U][2U]);
    vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__sel_alu_src1) 
           == vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__sel_alu_src1) 
              == vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__sel_alu_src1) 
              == vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__sel_alu_src1) 
              == vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->top__DOT__sel_alu_src1) 
                               == vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__sel_alu_src1) 
                                  == vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__sel_alu_src1) 
                                  == vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__key_list
                                  [2U])))) & vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__sel_alu_src1) 
                                  == vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__key_list
                                  [3U])))) & vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__exe_0__DOT__alu_src1 = vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__lut_out;
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__op_d) == vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__op_d) == vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__op_d) == vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__op_d) == vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__op_d) == vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__op_d) == vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__op_d) == vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__op_d) == vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__op_d) == vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list
              [8U]));
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__op_d) == vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list
              [9U]));
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->top__DOT__op_d) 
                               == vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__op_d) 
                                  == vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__op_d) 
                                  == vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list
                                  [2U])))) & vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__op_d) 
                                  == vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list
                                  [3U])))) & vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__op_d) 
                                  == vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list
                                  [4U])))) & vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__op_d) 
                                  == vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list
                                  [5U])))) & vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__op_d) 
                                  == vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list
                                  [6U])))) & vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__op_d) 
                                  == vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list
                                  [7U])))) & vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__op_d) 
                                  == vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list
                                  [8U])))) & vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list
              [8U]));
    vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__op_d) 
                                  == vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list
                                  [9U])))) & vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list
              [9U]));
    vlSelf->top__DOT__imm = vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__lut_out;
    vlSelf->top__DOT__c_raddr = ((0x300ULL == vlSelf->top__DOT__imm)
                                  ? 0U : ((1U & ((0x305ULL 
                                                  == vlSelf->top__DOT__imm) 
                                                 | ((IData)(vlSelf->top__DOT__e_inst) 
                                                    >> 1U)))
                                           ? 1U : (
                                                   (1U 
                                                    & ((0x341ULL 
                                                        == vlSelf->top__DOT__imm) 
                                                       | ((IData)(vlSelf->top__DOT__e_inst) 
                                                          >> 2U)))
                                                    ? 2U
                                                    : 3U)));
    vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux2____pinNumber3[0U] = 4U;
    vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux2____pinNumber3[1U] = 0U;
    vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux2____pinNumber3[2U] 
        = (4U | ((IData)(vlSelf->top__DOT__imm) << 3U));
    vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux2____pinNumber3[3U] 
        = (((IData)(vlSelf->top__DOT__imm) >> 0x1dU) 
           | ((IData)((vlSelf->top__DOT__imm >> 0x20U)) 
              << 3U));
    vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux2____pinNumber3[4U] 
        = (0x10U | (((IData)(vlSelf->top__DOT__src2) 
                     << 6U) | ((IData)((vlSelf->top__DOT__imm 
                                        >> 0x20U)) 
                               >> 0x1dU)));
    vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux2____pinNumber3[5U] 
        = (((IData)(vlSelf->top__DOT__src2) >> 0x1aU) 
           | ((IData)((vlSelf->top__DOT__src2 >> 0x20U)) 
              << 6U));
    vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux2____pinNumber3[6U] 
        = (0x40U | ((IData)((vlSelf->top__DOT__src2 
                             >> 0x20U)) >> 0x1aU));
    vlSelf->top__DOT__c_rdata = vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr
        [vlSelf->top__DOT__c_raddr];
    vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__pair_list[0U][0U] 
        = vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux2____pinNumber3[0U];
    vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__pair_list[0U][1U] 
        = vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux2____pinNumber3[1U];
    vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__pair_list[0U][2U] 
        = (7U & vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux2____pinNumber3[2U]);
    vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__pair_list[1U][0U] 
        = ((vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux2____pinNumber3[3U] 
            << 0x1dU) | (vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux2____pinNumber3[2U] 
                         >> 3U));
    vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__pair_list[1U][1U] 
        = ((vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux2____pinNumber3[4U] 
            << 0x1dU) | (vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux2____pinNumber3[3U] 
                         >> 3U));
    vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__pair_list[1U][2U] 
        = (7U & (vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux2____pinNumber3[4U] 
                 >> 3U));
    vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__pair_list[2U][0U] 
        = ((vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux2____pinNumber3[5U] 
            << 0x1aU) | (vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux2____pinNumber3[4U] 
                         >> 6U));
    vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__pair_list[2U][1U] 
        = ((vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux2____pinNumber3[6U] 
            << 0x1aU) | (vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux2____pinNumber3[5U] 
                         >> 6U));
    vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__pair_list[2U][2U] 
        = (7U & (vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux2____pinNumber3[6U] 
                 >> 6U));
    VL_EXTEND_WQ(65,64, __Vtemp138, vlSelf->top__DOT__src1);
    vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux3____pinNumber3[0U] 
        = (IData)((vlSelf->top__DOT__src1 | vlSelf->top__DOT__c_rdata));
    vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux3____pinNumber3[1U] 
        = (IData)(((vlSelf->top__DOT__src1 | vlSelf->top__DOT__c_rdata) 
                   >> 0x20U));
    vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux3____pinNumber3[2U] 
        = (1U | (__Vtemp138[0U] << 1U));
    vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux3____pinNumber3[3U] 
        = ((__Vtemp138[0U] >> 0x1fU) | (__Vtemp138[1U] 
                                        << 1U));
    vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux3____pinNumber3[4U] 
        = ((__Vtemp138[1U] >> 0x1fU) | (__Vtemp138[2U] 
                                        << 1U));
    VL_EXTEND_WQ(66,64, __Vtemp141, (4ULL + vlSelf->cpupc));
    vlSelf->top__DOT__i0__DOT____Vcellinp__mux4____pinNumber3[0U] 
        = (IData)(vlSelf->top__DOT__c_rdata);
    vlSelf->top__DOT__i0__DOT____Vcellinp__mux4____pinNumber3[1U] 
        = (IData)((vlSelf->top__DOT__c_rdata >> 0x20U));
    vlSelf->top__DOT__i0__DOT____Vcellinp__mux4____pinNumber3[2U] 
        = (3U | ((IData)((0xfffffffffffffffeULL & (vlSelf->top__DOT__src1 
                                                   + vlSelf->top__DOT__imm))) 
                 << 2U));
    vlSelf->top__DOT__i0__DOT____Vcellinp__mux4____pinNumber3[3U] 
        = (((IData)((0xfffffffffffffffeULL & (vlSelf->top__DOT__src1 
                                              + vlSelf->top__DOT__imm))) 
            >> 0x1eU) | ((IData)(((0xfffffffffffffffeULL 
                                   & (vlSelf->top__DOT__src1 
                                      + vlSelf->top__DOT__imm)) 
                                  >> 0x20U)) << 2U));
    vlSelf->top__DOT__i0__DOT____Vcellinp__mux4____pinNumber3[4U] 
        = (8U | (((IData)((vlSelf->cpupc + vlSelf->top__DOT__imm)) 
                  << 4U) | ((IData)(((0xfffffffffffffffeULL 
                                      & (vlSelf->top__DOT__src1 
                                         + vlSelf->top__DOT__imm)) 
                                     >> 0x20U)) >> 0x1eU)));
    vlSelf->top__DOT__i0__DOT____Vcellinp__mux4____pinNumber3[5U] 
        = (((IData)((vlSelf->cpupc + vlSelf->top__DOT__imm)) 
            >> 0x1cU) | ((IData)(((vlSelf->cpupc + vlSelf->top__DOT__imm) 
                                  >> 0x20U)) << 4U));
    vlSelf->top__DOT__i0__DOT____Vcellinp__mux4____pinNumber3[6U] 
        = (0x10U | ((__Vtemp141[0U] << 6U) | ((IData)(
                                                      ((vlSelf->cpupc 
                                                        + vlSelf->top__DOT__imm) 
                                                       >> 0x20U)) 
                                              >> 0x1cU)));
    vlSelf->top__DOT__i0__DOT____Vcellinp__mux4____pinNumber3[7U] 
        = ((__Vtemp141[0U] >> 0x1aU) | (__Vtemp141[1U] 
                                        << 6U));
    vlSelf->top__DOT__i0__DOT____Vcellinp__mux4____pinNumber3[8U] 
        = ((__Vtemp141[1U] >> 0x1aU) | (__Vtemp141[2U] 
                                        << 6U));
    vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__data_list[2U] 
        = (((QData)((IData)(vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__pair_list
                            [2U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__pair_list
                                                                   [2U][0U])));
    vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__key_list[0U] 
        = (7U & vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__pair_list
           [0U][2U]);
    vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__key_list[1U] 
        = (7U & vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__pair_list
           [1U][2U]);
    vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__key_list[2U] 
        = (7U & vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__pair_list
           [2U][2U]);
    vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__pair_list[0U][0U] 
        = vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux3____pinNumber3[0U];
    vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__pair_list[0U][1U] 
        = vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux3____pinNumber3[1U];
    vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__pair_list[0U][2U] 
        = (1U & vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux3____pinNumber3[2U]);
    vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__pair_list[1U][0U] 
        = ((vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux3____pinNumber3[3U] 
            << 0x1fU) | (vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux3____pinNumber3[2U] 
                         >> 1U));
    vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__pair_list[1U][1U] 
        = ((vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux3____pinNumber3[4U] 
            << 0x1fU) | (vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux3____pinNumber3[3U] 
                         >> 1U));
    vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__pair_list[1U][2U] 
        = (1U & (vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux3____pinNumber3[4U] 
                 >> 1U));
    vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__pair_list[0U][0U] 
        = vlSelf->top__DOT__i0__DOT____Vcellinp__mux4____pinNumber3[0U];
    vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__pair_list[0U][1U] 
        = vlSelf->top__DOT__i0__DOT____Vcellinp__mux4____pinNumber3[1U];
    vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__pair_list[0U][2U] 
        = (3U & vlSelf->top__DOT__i0__DOT____Vcellinp__mux4____pinNumber3[2U]);
    vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__pair_list[1U][0U] 
        = ((vlSelf->top__DOT__i0__DOT____Vcellinp__mux4____pinNumber3[3U] 
            << 0x1eU) | (vlSelf->top__DOT__i0__DOT____Vcellinp__mux4____pinNumber3[2U] 
                         >> 2U));
    vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__pair_list[1U][1U] 
        = ((vlSelf->top__DOT__i0__DOT____Vcellinp__mux4____pinNumber3[4U] 
            << 0x1eU) | (vlSelf->top__DOT__i0__DOT____Vcellinp__mux4____pinNumber3[3U] 
                         >> 2U));
    vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__pair_list[1U][2U] 
        = (3U & (vlSelf->top__DOT__i0__DOT____Vcellinp__mux4____pinNumber3[4U] 
                 >> 2U));
    vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__pair_list[2U][0U] 
        = ((vlSelf->top__DOT__i0__DOT____Vcellinp__mux4____pinNumber3[5U] 
            << 0x1cU) | (vlSelf->top__DOT__i0__DOT____Vcellinp__mux4____pinNumber3[4U] 
                         >> 4U));
    vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__pair_list[2U][1U] 
        = ((vlSelf->top__DOT__i0__DOT____Vcellinp__mux4____pinNumber3[6U] 
            << 0x1cU) | (vlSelf->top__DOT__i0__DOT____Vcellinp__mux4____pinNumber3[5U] 
                         >> 4U));
    vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__pair_list[2U][2U] 
        = (3U & (vlSelf->top__DOT__i0__DOT____Vcellinp__mux4____pinNumber3[6U] 
                 >> 4U));
    vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__pair_list[3U][0U] 
        = ((vlSelf->top__DOT__i0__DOT____Vcellinp__mux4____pinNumber3[7U] 
            << 0x1aU) | (vlSelf->top__DOT__i0__DOT____Vcellinp__mux4____pinNumber3[6U] 
                         >> 6U));
    vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__pair_list[3U][1U] 
        = ((vlSelf->top__DOT__i0__DOT____Vcellinp__mux4____pinNumber3[8U] 
            << 0x1aU) | (vlSelf->top__DOT__i0__DOT____Vcellinp__mux4____pinNumber3[7U] 
                         >> 6U));
    vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__pair_list[3U][2U] 
        = (3U & (vlSelf->top__DOT__i0__DOT____Vcellinp__mux4____pinNumber3[8U] 
                 >> 6U));
    vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__sel_alu_src2) 
           == vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__sel_alu_src2) 
              == vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__sel_alu_src2) 
              == vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->top__DOT__sel_alu_src2) 
                               == vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__sel_alu_src2) 
                                  == vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__sel_alu_src2) 
                                  == vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__key_list
                                  [2U])))) & vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__exe_0__DOT__alu_src2 = vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__lut_out;
    vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__key_list[0U] 
        = (1U & vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__pair_list
           [0U][2U]);
    vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__key_list[1U] 
        = (1U & vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__pair_list
           [1U][2U]);
    vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__data_list[2U] 
        = (((QData)((IData)(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__pair_list
                            [2U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__pair_list
                                                                   [2U][0U])));
    vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__data_list[3U] 
        = (((QData)((IData)(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__pair_list
                            [3U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__pair_list
                                                                   [3U][0U])));
    vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__key_list[0U] 
        = (3U & vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__pair_list
           [0U][2U]);
    vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__key_list[1U] 
        = (3U & vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__pair_list
           [1U][2U]);
    vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__key_list[2U] 
        = (3U & vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__pair_list
           [2U][2U]);
    vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__key_list[3U] 
        = (3U & vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__pair_list
           [3U][2U]);
    vlSelf->top__DOT__alu_equal = ((6U & (IData)(vlSelf->top__DOT__alu_equal)) 
                                   | (vlSelf->top__DOT__exe_0__DOT__alu_src1 
                                      == vlSelf->top__DOT__exe_0__DOT__alu_src2));
    vlSelf->top__DOT__exe_0__DOT__alu2__DOT__or_result 
        = (vlSelf->top__DOT__exe_0__DOT__alu_src1 | vlSelf->top__DOT__exe_0__DOT__alu_src2);
    vlSelf->top__DOT__exe_0__DOT__alu2__DOT__adder_b 
        = ((IData)((0U != (0xeU & vlSelf->top__DOT__alu_control)))
            ? (~ vlSelf->top__DOT__exe_0__DOT__alu_src2)
            : vlSelf->top__DOT__exe_0__DOT__alu_src2);
    vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__control_0__DOT__csrrs) 
           == vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__control_0__DOT__csrrs) 
              == vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->top__DOT__control_0__DOT__csrrs) 
                               == vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__control_0__DOT__csrrs) 
                                  == vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__exe_0__DOT__c_wdata = vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__lut_out;
    VL_EXTEND_WQ(65,64, __Vtemp191, vlSelf->top__DOT__exe_0__DOT__alu_src1);
    VL_EXTEND_WQ(65,64, __Vtemp192, vlSelf->top__DOT__exe_0__DOT__alu2__DOT__adder_b);
    VL_ADD_W(3, __Vtemp193, __Vtemp191, __Vtemp192);
    VL_EXTEND_WI(65,1, __Vtemp194, (IData)(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__adder_cin));
    VL_ADD_W(3, __Vtemp195, __Vtemp193, __Vtemp194);
    vlSelf->top__DOT__exe_0__DOT__alu2__DOT__adder_cout 
        = (1U & __Vtemp195[2U]);
    VL_EXTEND_WI(65,1, __Vtemp197, (IData)(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__adder_cin));
    vlSelf->top__DOT__exe_0__DOT__alu2__DOT__adder_result 
        = ((vlSelf->top__DOT__exe_0__DOT__alu_src1 
            + vlSelf->top__DOT__exe_0__DOT__alu2__DOT__adder_b) 
           + (((QData)((IData)(__Vtemp197[1U])) << 0x20U) 
              | (QData)((IData)(__Vtemp197[0U]))));
    vlSelf->top__DOT__alu_equal = ((5U & (IData)(vlSelf->top__DOT__alu_equal)) 
                                   | (2U & ((~ (IData)(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__adder_cout)) 
                                            << 1U)));
    vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__wmask_align 
        = ((0x3fU >= (0x38U & ((IData)(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__adder_result) 
                               << 3U))) ? (((1U == (IData)(vlSelf->top__DOT__wmask))
                                             ? 0xffULL
                                             : ((3U 
                                                 == (IData)(vlSelf->top__DOT__wmask))
                                                 ? 0xffffULL
                                                 : 
                                                ((0xfU 
                                                  == (IData)(vlSelf->top__DOT__wmask))
                                                  ? 0xffffffffULL
                                                  : 0xffffffffffffffffULL))) 
                                           << (0x38U 
                                               & ((IData)(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__adder_result) 
                                                  << 3U)))
            : 0ULL);
    vlSelf->top__DOT__exe_0__DOT__alu2__DOT__slt_result 
        = (QData)((IData)((1U & (((IData)((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                                           >> 0x3fU)) 
                                  & (~ (IData)((vlSelf->top__DOT__exe_0__DOT__alu_src2 
                                                >> 0x3fU)))) 
                                 | ((~ ((IData)((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                                                 >> 0x3fU)) 
                                        ^ (IData)((vlSelf->top__DOT__exe_0__DOT__alu_src2 
                                                   >> 0x3fU)))) 
                                    & (IData)((vlSelf->top__DOT__exe_0__DOT__alu2__DOT__adder_result 
                                               >> 0x3fU)))))));
    vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__araddr 
        = ((IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rcache_en)
            ? (IData)(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__adder_result)
            : ((IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__wcache_en)
                ? (IData)(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__adder_result)
                : 0U));
    vlSelf->top__DOT__mem_2__DOT__use_cache = (((0x80000000U 
                                                 <= (IData)(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__adder_result)) 
                                                & (0x87ffffffU 
                                                   >= (IData)(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__adder_result))) 
                                               | ((0x80000000U 
                                                   <= (IData)(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__adder_result)) 
                                                  & (0x87ffffffU 
                                                     >= (IData)(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__adder_result))));
    vlSelf->top__DOT__alu_equal = ((3U & (IData)(vlSelf->top__DOT__alu_equal)) 
                                   | (4U & ((IData)(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__slt_result) 
                                            << 2U)));
    vlSelf->top__DOT__exe_0__DOT__alu2__DOT__alu_result_uw 
        = (((((((((((((((((- (QData)((IData)((0U != 
                                              (3U & vlSelf->top__DOT__alu_control))))) 
                          & vlSelf->top__DOT__exe_0__DOT__alu2__DOT__adder_result) 
                         | ((- (QData)((IData)((1U 
                                                & (vlSelf->top__DOT__alu_control 
                                                   >> 2U))))) 
                            & vlSelf->top__DOT__exe_0__DOT__alu2__DOT__slt_result)) 
                        | ((- (QData)((IData)((1U & 
                                               (vlSelf->top__DOT__alu_control 
                                                >> 3U))))) 
                           & (QData)((IData)((1U & 
                                              (~ (IData)(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__adder_cout))))))) 
                       | ((- (QData)((IData)((1U & 
                                              (vlSelf->top__DOT__alu_control 
                                               >> 4U))))) 
                          & (vlSelf->top__DOT__exe_0__DOT__alu_src1 
                             & vlSelf->top__DOT__exe_0__DOT__alu_src2))) 
                      | ((- (QData)((IData)((1U & (vlSelf->top__DOT__alu_control 
                                                   >> 5U))))) 
                         & (~ vlSelf->top__DOT__exe_0__DOT__alu2__DOT__or_result))) 
                     | ((- (QData)((IData)((1U & (vlSelf->top__DOT__alu_control 
                                                  >> 6U))))) 
                        & vlSelf->top__DOT__exe_0__DOT__alu2__DOT__or_result)) 
                    | ((- (QData)((IData)((1U & (vlSelf->top__DOT__alu_control 
                                                 >> 7U))))) 
                       & (vlSelf->top__DOT__exe_0__DOT__alu_src1 
                          ^ vlSelf->top__DOT__exe_0__DOT__alu_src2))) 
                   | ((- (QData)((IData)((1U & (vlSelf->top__DOT__alu_control 
                                                >> 8U))))) 
                      & (vlSelf->top__DOT__exe_0__DOT__alu_src1 
                         << (0x3fU & (IData)(vlSelf->top__DOT__exe_0__DOT__alu_src2))))) 
                  | ((- (QData)((IData)((1U & (vlSelf->top__DOT__alu_control 
                                               >> 9U))))) 
                     & (vlSelf->top__DOT__exe_0__DOT__alu_src1 
                        >> (0x3fU & (IData)(vlSelf->top__DOT__exe_0__DOT__alu_src2))))) 
                 | ((- (QData)((IData)((1U & (vlSelf->top__DOT__alu_control 
                                              >> 0xaU))))) 
                    & VL_SHIFTRS_QQI(64,64,6, vlSelf->top__DOT__exe_0__DOT__alu_src1, 
                                     (0x3fU & (IData)(vlSelf->top__DOT__exe_0__DOT__alu_src2))))) 
                | (0xfffffffffffff000ULL & ((- (QData)((IData)(
                                                               (1U 
                                                                & (vlSelf->top__DOT__alu_control 
                                                                   >> 0xbU))))) 
                                            & vlSelf->top__DOT__exe_0__DOT__alu_src2))) 
               | ((- (QData)((IData)((1U & (vlSelf->top__DOT__alu_control 
                                            >> 0xcU))))) 
                  & (vlSelf->top__DOT__exe_0__DOT__alu_src1 
                     * vlSelf->top__DOT__exe_0__DOT__alu_src2))) 
              | ((- (QData)((IData)((1U & (vlSelf->top__DOT__alu_control 
                                           >> 0xdU))))) 
                 & VL_DIV_QQQ(64, vlSelf->top__DOT__exe_0__DOT__alu_src1, vlSelf->top__DOT__exe_0__DOT__alu_src2))) 
             | ((- (QData)((IData)((1U & (vlSelf->top__DOT__alu_control 
                                          >> 0xeU))))) 
                & VL_DIVS_QQQ(64, vlSelf->top__DOT__exe_0__DOT__alu_src1, vlSelf->top__DOT__exe_0__DOT__alu_src2))) 
            | ((- (QData)((IData)((1U & (vlSelf->top__DOT__alu_control 
                                         >> 0xfU))))) 
               & VL_MODDIV_QQQ(64, vlSelf->top__DOT__exe_0__DOT__alu_src1, vlSelf->top__DOT__exe_0__DOT__alu_src2))) 
           | ((- (QData)((IData)((1U & (vlSelf->top__DOT__alu_control 
                                        >> 0x10U))))) 
              & VL_MODDIVS_QQQ(64, vlSelf->top__DOT__exe_0__DOT__alu_src1, vlSelf->top__DOT__exe_0__DOT__alu_src2)));
    vlSelf->top__DOT__mem_2__DOT____Vcellinp__mem_read_write_0__wen 
        = ((IData)(vlSelf->top__DOT__data_ram_wen) 
           & (~ (IData)(vlSelf->top__DOT__mem_2__DOT__use_cache)));
    vlSelf->top__DOT__mem_2__DOT____Vcellinp__mem_read_write_0__ren 
        = ((IData)(vlSelf->top__DOT__data_ram_en) & 
           (~ (IData)(vlSelf->top__DOT__mem_2__DOT__use_cache)));
    vlSelf->top__DOT__mem_2__DOT__r_rdata_ld = ((IData)(vlSelf->top__DOT__mem_2__DOT__use_cache)
                                                 ? 
                                                ((0x3fU 
                                                  >= 
                                                  (0x38U 
                                                   & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__araddr 
                                                      << 3U)))
                                                  ? 
                                                 (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                                                  [
                                                  (0x3fU 
                                                   & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__araddr 
                                                      >> 6U))]
                                                  [
                                                  (7U 
                                                   & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__araddr 
                                                      >> 3U))] 
                                                  >> 
                                                  (0x38U 
                                                   & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__araddr 
                                                      << 3U)))
                                                  : 0ULL)
                                                 : vlSelf->top__DOT__mem_2__DOT__r_rdata_ld_device);
    vlSelf->top__DOT__sel_nextpc = (3U & (((1U & (- (IData)(
                                                            (1U 
                                                             & ((((((((IData)(vlSelf->top__DOT__control_0__DOT__beq) 
                                                                      & (IData)(vlSelf->top__DOT__alu_equal)) 
                                                                     | ((IData)(vlSelf->top__DOT__control_0__DOT__bne) 
                                                                        & (~ (IData)(vlSelf->top__DOT__alu_equal)))) 
                                                                    | ((IData)(vlSelf->top__DOT__op_d) 
                                                                       >> 2U)) 
                                                                   | ((IData)(vlSelf->top__DOT__control_0__DOT__bltu) 
                                                                      & ((IData)(vlSelf->top__DOT__alu_equal) 
                                                                         >> 1U))) 
                                                                  | ((IData)(vlSelf->top__DOT__control_0__DOT__blt) 
                                                                     & ((IData)(vlSelf->top__DOT__alu_equal) 
                                                                        >> 2U))) 
                                                                 | ((IData)(vlSelf->top__DOT__control_0__DOT__bgeu) 
                                                                    & (IData)(
                                                                              (2U 
                                                                               != 
                                                                               (3U 
                                                                                & (IData)(vlSelf->top__DOT__alu_equal)))))) 
                                                                | ((IData)(vlSelf->top__DOT__control_0__DOT__bge) 
                                                                   & (IData)(
                                                                             (4U 
                                                                              != 
                                                                              (5U 
                                                                               & (IData)(vlSelf->top__DOT__alu_equal)))))))))) 
                                           | (2U & 
                                              (- (IData)((IData)(vlSelf->top__DOT__control_0__DOT__jalr))))) 
                                          | (- (IData)((IData)(
                                                               (0U 
                                                                != 
                                                                (6U 
                                                                 & (IData)(vlSelf->top__DOT__e_inst))))))));
    VL_EXTEND_WQ(65,64, __Vtemp198, vlSelf->top__DOT__exe_0__DOT__alu2__DOT__alu_result_uw);
    vlSelf->top__DOT__exe_0__DOT__alu2__DOT____Vcellinp__mux1____pinNumber3[0U] 
        = (IData)((((QData)((IData)((- (IData)((1U 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exe_0__DOT__alu2__DOT__alu_result_uw 
                                                           >> 0x1fU))))))) 
                    << 0x20U) | (QData)((IData)(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__alu_result_uw))));
    vlSelf->top__DOT__exe_0__DOT__alu2__DOT____Vcellinp__mux1____pinNumber3[1U] 
        = (IData)(((((QData)((IData)((- (IData)((1U 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__exe_0__DOT__alu2__DOT__alu_result_uw 
                                                            >> 0x1fU))))))) 
                     << 0x20U) | (QData)((IData)(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__alu_result_uw))) 
                   >> 0x20U));
    vlSelf->top__DOT__exe_0__DOT__alu2__DOT____Vcellinp__mux1____pinNumber3[2U] 
        = (1U | (__Vtemp198[0U] << 1U));
    vlSelf->top__DOT__exe_0__DOT__alu2__DOT____Vcellinp__mux1____pinNumber3[3U] 
        = ((__Vtemp198[0U] >> 0x1fU) | (__Vtemp198[1U] 
                                        << 1U));
    vlSelf->top__DOT__exe_0__DOT__alu2__DOT____Vcellinp__mux1____pinNumber3[4U] 
        = ((__Vtemp198[1U] >> 0x1fU) | (__Vtemp198[2U] 
                                        << 1U));
    vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__awvalid 
        = (((0U == (IData)(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__write_state)) 
            & (IData)(vlSelf->top__DOT__mem_2__DOT____Vcellinp__mem_read_write_0__wen)) 
           & (IData)(vlSelf->inst_update));
    vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__arvalid 
        = (((0U == (IData)(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__read_state)) 
            & (IData)(vlSelf->top__DOT__mem_2__DOT____Vcellinp__mem_read_write_0__ren)) 
           & (IData)(vlSelf->inst_update));
    vlSelf->mem_finish = (((IData)(vlSelf->top__DOT__mem_2__DOT__use_cache) 
                           & (5U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__cache_state))) 
                          | ((~ (IData)(vlSelf->top__DOT__mem_2__DOT__use_cache)) 
                             & (((IData)(vlSelf->inst_update) 
                                 & (~ (IData)(vlSelf->top__DOT__mem_2__DOT__use_cache))) 
                                & ((((IData)(vlSelf->top__DOT__mem_2__DOT____Vcellinp__mem_read_write_0__ren) 
                                     & (3U == (IData)(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__read_state))) 
                                    | ((IData)(vlSelf->top__DOT__mem_2__DOT____Vcellinp__mem_read_write_0__wen) 
                                       & (3U == (IData)(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__write_state)))) 
                                   | ((~ (IData)(vlSelf->top__DOT__mem_2__DOT____Vcellinp__mem_read_write_0__ren)) 
                                      & (~ (IData)(vlSelf->top__DOT__mem_2__DOT____Vcellinp__mem_read_write_0__wen)))))));
    vlSelf->top__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[0U] 
        = (IData)((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))));
    vlSelf->top__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[1U] 
        = (IData)(((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                   >> 0x20U));
    vlSelf->top__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[2U] 
        = (0x40U | ((IData)((((- (QData)((IData)((1U 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                                                             >> 7U)))))) 
                              << 8U) | (QData)((IData)(
                                                       (0xffU 
                                                        & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))))) 
                    << 7U));
    vlSelf->top__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[3U] 
        = (((IData)((((- (QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                                                        >> 7U)))))) 
                      << 8U) | (QData)((IData)((0xffU 
                                                & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))))) 
            >> 0x19U) | ((IData)(((((- (QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                                                                   >> 7U)))))) 
                                    << 8U) | (QData)((IData)(
                                                             (0xffU 
                                                              & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld))))) 
                                  >> 0x20U)) << 7U));
    vlSelf->top__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[4U] 
        = (0x1000U | (((IData)((QData)((IData)((0xffffU 
                                                & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld))))) 
                       << 0xeU) | ((IData)(((((- (QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                                                                             >> 7U)))))) 
                                              << 8U) 
                                             | (QData)((IData)(
                                                               (0xffU 
                                                                & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld))))) 
                                            >> 0x20U)) 
                                   >> 0x19U)));
    vlSelf->top__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[5U] 
        = (((IData)((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld))))) 
            >> 0x12U) | ((IData)(((QData)((IData)((0xffffU 
                                                   & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                                  >> 0x20U)) << 0xeU));
    vlSelf->top__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[6U] 
        = (0x40000U | (((IData)((((- (QData)((IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                                                                 >> 0xfU)))))) 
                                  << 0x10U) | (QData)((IData)(
                                                              (0xffffU 
                                                               & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))))) 
                        << 0x15U) | ((IData)(((QData)((IData)(
                                                              (0xffffU 
                                                               & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
                                              >> 0x20U)) 
                                     >> 0x12U)));
    vlSelf->top__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[7U] 
        = (((IData)((((- (QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                                                        >> 0xfU)))))) 
                      << 0x10U) | (QData)((IData)((0xffffU 
                                                   & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))))) 
            >> 0xbU) | ((IData)(((((- (QData)((IData)(
                                                      (1U 
                                                       & (IData)(
                                                                 (vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                                                                  >> 0xfU)))))) 
                                   << 0x10U) | (QData)((IData)(
                                                               (0xffffU 
                                                                & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld))))) 
                                 >> 0x20U)) << 0x15U));
    vlSelf->top__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[8U] 
        = (0x1000000U | (((IData)((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld))) 
                          << 0x1cU) | ((IData)(((((- (QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                                                                                >> 0xfU)))))) 
                                                  << 0x10U) 
                                                 | (QData)((IData)(
                                                                   (0xffffU 
                                                                    & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld))))) 
                                                >> 0x20U)) 
                                       >> 0xbU)));
    vlSelf->top__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[9U] 
        = (((IData)((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld))) 
            >> 4U) | ((IData)(((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)) 
                               >> 0x20U)) << 0x1cU));
    vlSelf->top__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[0xaU] 
        = (0x40000000U | ((IData)(((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)) 
                                   >> 0x20U)) >> 4U));
    vlSelf->top__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[0xbU] 
        = ((IData)((((QData)((IData)((- (IData)((1U 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                                                            >> 0x1fU))))))) 
                     << 0x20U) | (QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
           << 3U);
    vlSelf->top__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[0xcU] 
        = (((IData)((((QData)((IData)((- (IData)((1U 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                                                             >> 0x1fU))))))) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))) 
            >> 0x1dU) | ((IData)(((((QData)((IData)(
                                                    (- (IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                                                                           >> 0x1fU))))))) 
                                    << 0x20U) | (QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld))) 
                                  >> 0x20U)) << 3U));
    vlSelf->top__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[0xdU] 
        = (0x10U | (((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld) 
                     << 0xaU) | ((IData)(((((QData)((IData)(
                                                            (- (IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                                                                                >> 0x1fU))))))) 
                                            << 0x20U) 
                                           | (QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld))) 
                                          >> 0x20U)) 
                                 >> 0x1dU)));
    vlSelf->top__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[0xeU] 
        = (((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld) 
            >> 0x16U) | ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                                  >> 0x20U)) << 0xaU));
    vlSelf->top__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[0xfU] 
        = (0x400U | ((IData)((vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                              >> 0x20U)) >> 0x16U));
    vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__sel_nextpc) == 
           vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__sel_nextpc) 
              == vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__sel_nextpc) 
              == vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__sel_nextpc) 
              == vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->top__DOT__sel_nextpc) 
                               == vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__sel_nextpc) 
                                  == vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__sel_nextpc) 
                                  == vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__key_list
                                  [2U])))) & vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__sel_nextpc) 
                                  == vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__key_list
                                  [3U])))) & vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__i0__DOT__dnpc_0 = vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__lut_out;
    vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__pair_list[0U][0U] 
        = vlSelf->top__DOT__exe_0__DOT__alu2__DOT____Vcellinp__mux1____pinNumber3[0U];
    vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__pair_list[0U][1U] 
        = vlSelf->top__DOT__exe_0__DOT__alu2__DOT____Vcellinp__mux1____pinNumber3[1U];
    vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__pair_list[0U][2U] 
        = (1U & vlSelf->top__DOT__exe_0__DOT__alu2__DOT____Vcellinp__mux1____pinNumber3[2U]);
    vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__pair_list[1U][0U] 
        = ((vlSelf->top__DOT__exe_0__DOT__alu2__DOT____Vcellinp__mux1____pinNumber3[3U] 
            << 0x1fU) | (vlSelf->top__DOT__exe_0__DOT__alu2__DOT____Vcellinp__mux1____pinNumber3[2U] 
                         >> 1U));
    vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__pair_list[1U][1U] 
        = ((vlSelf->top__DOT__exe_0__DOT__alu2__DOT____Vcellinp__mux1____pinNumber3[4U] 
            << 0x1fU) | (vlSelf->top__DOT__exe_0__DOT__alu2__DOT____Vcellinp__mux1____pinNumber3[3U] 
                         >> 1U));
    vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__pair_list[1U][2U] 
        = (1U & (vlSelf->top__DOT__exe_0__DOT__alu2__DOT____Vcellinp__mux1____pinNumber3[4U] 
                 >> 1U));
    vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list[0U][0U] 
        = vlSelf->top__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[0U];
    vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list[0U][1U] 
        = vlSelf->top__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[1U];
    vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list[0U][2U] 
        = (0x7fU & vlSelf->top__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[2U]);
    vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list[1U][0U] 
        = ((vlSelf->top__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[3U] 
            << 0x19U) | (vlSelf->top__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[2U] 
                         >> 7U));
    vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list[1U][1U] 
        = ((vlSelf->top__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[4U] 
            << 0x19U) | (vlSelf->top__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[3U] 
                         >> 7U));
    vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list[1U][2U] 
        = (0x7fU & (vlSelf->top__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[4U] 
                    >> 7U));
    vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list[2U][0U] 
        = ((vlSelf->top__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[5U] 
            << 0x12U) | (vlSelf->top__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[4U] 
                         >> 0xeU));
    vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list[2U][1U] 
        = ((vlSelf->top__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[6U] 
            << 0x12U) | (vlSelf->top__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[5U] 
                         >> 0xeU));
    vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list[2U][2U] 
        = (0x7fU & (vlSelf->top__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[6U] 
                    >> 0xeU));
    vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list[3U][0U] 
        = ((vlSelf->top__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[7U] 
            << 0xbU) | (vlSelf->top__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[6U] 
                        >> 0x15U));
    vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list[3U][1U] 
        = ((vlSelf->top__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[8U] 
            << 0xbU) | (vlSelf->top__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[7U] 
                        >> 0x15U));
    vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list[3U][2U] 
        = (0x7fU & (vlSelf->top__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[8U] 
                    >> 0x15U));
    vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list[4U][0U] 
        = ((vlSelf->top__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[9U] 
            << 4U) | (vlSelf->top__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[8U] 
                      >> 0x1cU));
    vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list[4U][1U] 
        = ((vlSelf->top__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[0xaU] 
            << 4U) | (vlSelf->top__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[9U] 
                      >> 0x1cU));
    vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list[4U][2U] 
        = (0x7fU & ((vlSelf->top__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[0xbU] 
                     << 4U) | (vlSelf->top__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[0xaU] 
                               >> 0x1cU)));
    vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list[5U][0U] 
        = ((vlSelf->top__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[0xcU] 
            << 0x1dU) | (vlSelf->top__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[0xbU] 
                         >> 3U));
    vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list[5U][1U] 
        = ((vlSelf->top__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[0xdU] 
            << 0x1dU) | (vlSelf->top__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[0xcU] 
                         >> 3U));
    vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list[5U][2U] 
        = (0x7fU & (vlSelf->top__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[0xdU] 
                    >> 3U));
    vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list[6U][0U] 
        = ((vlSelf->top__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[0xeU] 
            << 0x16U) | (vlSelf->top__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[0xdU] 
                         >> 0xaU));
    vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list[6U][1U] 
        = ((vlSelf->top__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[0xfU] 
            << 0x16U) | (vlSelf->top__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[0xeU] 
                         >> 0xaU));
    vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list[6U][2U] 
        = (0x7fU & (vlSelf->top__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3[0xfU] 
                    >> 0xaU));
    VL_EXTEND_WQ(65,64, __Vtemp247, vlSelf->cpupc);
    vlSelf->top__DOT__i0__DOT____Vcellinp__mux5____pinNumber3[0U] 
        = (IData)(vlSelf->top__DOT__i0__DOT__dnpc_0);
    vlSelf->top__DOT__i0__DOT____Vcellinp__mux5____pinNumber3[1U] 
        = (IData)((vlSelf->top__DOT__i0__DOT__dnpc_0 
                   >> 0x20U));
    vlSelf->top__DOT__i0__DOT____Vcellinp__mux5____pinNumber3[2U] 
        = (1U | (__Vtemp247[0U] << 1U));
    vlSelf->top__DOT__i0__DOT____Vcellinp__mux5____pinNumber3[3U] 
        = ((__Vtemp247[0U] >> 0x1fU) | (__Vtemp247[1U] 
                                        << 1U));
    vlSelf->top__DOT__i0__DOT____Vcellinp__mux5____pinNumber3[4U] 
        = ((__Vtemp247[1U] >> 0x1fU) | (__Vtemp247[2U] 
                                        << 1U));
    vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__key_list[0U] 
        = (1U & vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__pair_list
           [0U][2U]);
    vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__key_list[1U] 
        = (1U & vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__pair_list
           [1U][2U]);
    vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__data_list[2U] 
        = (((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list
                            [2U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list
                                                                   [2U][0U])));
    vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__data_list[3U] 
        = (((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list
                            [3U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list
                                                                   [3U][0U])));
    vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__data_list[4U] 
        = (((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list
                            [4U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list
                                                                   [4U][0U])));
    vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__data_list[5U] 
        = (((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list
                            [5U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list
                                                                   [5U][0U])));
    vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__data_list[6U] 
        = (((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list
                            [6U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list
                                                                   [6U][0U])));
    vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list[0U] 
        = (0x7fU & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list
           [0U][2U]);
    vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list[1U] 
        = (0x7fU & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list
           [1U][2U]);
    vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list[2U] 
        = (0x7fU & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list
           [2U][2U]);
    vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list[3U] 
        = (0x7fU & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list
           [3U][2U]);
    vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list[4U] 
        = (0x7fU & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list
           [4U][2U]);
    vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list[5U] 
        = (0x7fU & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list
           [5U][2U]);
    vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list[6U] 
        = (0x7fU & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list
           [6U][2U]);
    vlSelf->top__DOT__i0__DOT__mux5__DOT__i0__DOT__pair_list[0U][0U] 
        = vlSelf->top__DOT__i0__DOT____Vcellinp__mux5____pinNumber3[0U];
    vlSelf->top__DOT__i0__DOT__mux5__DOT__i0__DOT__pair_list[0U][1U] 
        = vlSelf->top__DOT__i0__DOT____Vcellinp__mux5____pinNumber3[1U];
    vlSelf->top__DOT__i0__DOT__mux5__DOT__i0__DOT__pair_list[0U][2U] 
        = (1U & vlSelf->top__DOT__i0__DOT____Vcellinp__mux5____pinNumber3[2U]);
    vlSelf->top__DOT__i0__DOT__mux5__DOT__i0__DOT__pair_list[1U][0U] 
        = ((vlSelf->top__DOT__i0__DOT____Vcellinp__mux5____pinNumber3[3U] 
            << 0x1fU) | (vlSelf->top__DOT__i0__DOT____Vcellinp__mux5____pinNumber3[2U] 
                         >> 1U));
    vlSelf->top__DOT__i0__DOT__mux5__DOT__i0__DOT__pair_list[1U][1U] 
        = ((vlSelf->top__DOT__i0__DOT____Vcellinp__mux5____pinNumber3[4U] 
            << 0x1fU) | (vlSelf->top__DOT__i0__DOT____Vcellinp__mux5____pinNumber3[3U] 
                         >> 1U));
    vlSelf->top__DOT__i0__DOT__mux5__DOT__i0__DOT__pair_list[1U][2U] 
        = (1U & (vlSelf->top__DOT__i0__DOT____Vcellinp__mux5____pinNumber3[4U] 
                 >> 1U));
    vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__w_choose) == vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__w_choose) == 
              vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->top__DOT__w_choose) 
                               == vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__w_choose) 
                                  == vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__alu_result = vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__lut_out;
    vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__l_choose) == vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__l_choose) == 
              vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__l_choose) == 
              vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__l_choose) == 
              vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__l_choose) == 
              vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__l_choose) == 
              vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__l_choose) == 
              vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->top__DOT__l_choose) 
                               == vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__l_choose) 
                                  == vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__l_choose) 
                                  == vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
                                  [2U])))) & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__l_choose) 
                                  == vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
                                  [3U])))) & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__l_choose) 
                                  == vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
                                  [4U])))) & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__l_choose) 
                                  == vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
                                  [5U])))) & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__l_choose) 
                                  == vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list
                                  [6U])))) & vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->top__DOT__ram_data = vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out;
    vlSelf->top__DOT__i0__DOT__mux5__DOT__i0__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->top__DOT__i0__DOT__mux5__DOT__i0__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__i0__DOT__mux5__DOT__i0__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->top__DOT__i0__DOT__mux5__DOT__i0__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->top__DOT__i0__DOT__mux5__DOT__i0__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__i0__DOT__mux5__DOT__i0__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->top__DOT__i0__DOT__mux5__DOT__i0__DOT__key_list[0U] 
        = (1U & vlSelf->top__DOT__i0__DOT__mux5__DOT__i0__DOT__pair_list
           [0U][2U]);
    vlSelf->top__DOT__i0__DOT__mux5__DOT__i0__DOT__key_list[1U] 
        = (1U & vlSelf->top__DOT__i0__DOT__mux5__DOT__i0__DOT__pair_list
           [1U][2U]);
    vlSelf->top__DOT__wb0__DOT____Vcellinp__mux3____pinNumber3[0U] 
        = (IData)(vlSelf->top__DOT__c_rdata);
    vlSelf->top__DOT__wb0__DOT____Vcellinp__mux3____pinNumber3[1U] 
        = (IData)((vlSelf->top__DOT__c_rdata >> 0x20U));
    vlSelf->top__DOT__wb0__DOT____Vcellinp__mux3____pinNumber3[2U] 
        = (4U | ((IData)(vlSelf->top__DOT__ram_data) 
                 << 3U));
    vlSelf->top__DOT__wb0__DOT____Vcellinp__mux3____pinNumber3[3U] 
        = (((IData)(vlSelf->top__DOT__ram_data) >> 0x1dU) 
           | ((IData)((vlSelf->top__DOT__ram_data >> 0x20U)) 
              << 3U));
    vlSelf->top__DOT__wb0__DOT____Vcellinp__mux3____pinNumber3[4U] 
        = (0x10U | (((IData)(vlSelf->top__DOT__alu_result) 
                     << 6U) | ((IData)((vlSelf->top__DOT__ram_data 
                                        >> 0x20U)) 
                               >> 0x1dU)));
    vlSelf->top__DOT__wb0__DOT____Vcellinp__mux3____pinNumber3[5U] 
        = (((IData)(vlSelf->top__DOT__alu_result) >> 0x1aU) 
           | ((IData)((vlSelf->top__DOT__alu_result 
                       >> 0x20U)) << 6U));
    vlSelf->top__DOT__wb0__DOT____Vcellinp__mux3____pinNumber3[6U] 
        = (0x40U | ((IData)((vlSelf->top__DOT__alu_result 
                             >> 0x20U)) >> 0x1aU));
    vlSelf->top__DOT__i0__DOT__mux5__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->mem_finish) == vlSelf->top__DOT__i0__DOT__mux5__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__i0__DOT__mux5__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__i0__DOT__mux5__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->mem_finish) == vlSelf->top__DOT__i0__DOT__mux5__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__i0__DOT__mux5__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->mem_finish) 
                               == vlSelf->top__DOT__i0__DOT__mux5__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->top__DOT__i0__DOT__mux5__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__i0__DOT__mux5__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__i0__DOT__mux5__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->mem_finish) 
                                  == vlSelf->top__DOT__i0__DOT__mux5__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->top__DOT__i0__DOT__mux5__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->dnpc = vlSelf->top__DOT__i0__DOT__mux5__DOT__i0__DOT__lut_out;
    vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__pair_list[0U][0U] 
        = vlSelf->top__DOT__wb0__DOT____Vcellinp__mux3____pinNumber3[0U];
    vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__pair_list[0U][1U] 
        = vlSelf->top__DOT__wb0__DOT____Vcellinp__mux3____pinNumber3[1U];
    vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__pair_list[0U][2U] 
        = (7U & vlSelf->top__DOT__wb0__DOT____Vcellinp__mux3____pinNumber3[2U]);
    vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__pair_list[1U][0U] 
        = ((vlSelf->top__DOT__wb0__DOT____Vcellinp__mux3____pinNumber3[3U] 
            << 0x1dU) | (vlSelf->top__DOT__wb0__DOT____Vcellinp__mux3____pinNumber3[2U] 
                         >> 3U));
    vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__pair_list[1U][1U] 
        = ((vlSelf->top__DOT__wb0__DOT____Vcellinp__mux3____pinNumber3[4U] 
            << 0x1dU) | (vlSelf->top__DOT__wb0__DOT____Vcellinp__mux3____pinNumber3[3U] 
                         >> 3U));
    vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__pair_list[1U][2U] 
        = (7U & (vlSelf->top__DOT__wb0__DOT____Vcellinp__mux3____pinNumber3[4U] 
                 >> 3U));
    vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__pair_list[2U][0U] 
        = ((vlSelf->top__DOT__wb0__DOT____Vcellinp__mux3____pinNumber3[5U] 
            << 0x1aU) | (vlSelf->top__DOT__wb0__DOT____Vcellinp__mux3____pinNumber3[4U] 
                         >> 6U));
    vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__pair_list[2U][1U] 
        = ((vlSelf->top__DOT__wb0__DOT____Vcellinp__mux3____pinNumber3[6U] 
            << 0x1aU) | (vlSelf->top__DOT__wb0__DOT____Vcellinp__mux3____pinNumber3[5U] 
                         >> 6U));
    vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__pair_list[2U][2U] 
        = (7U & (vlSelf->top__DOT__wb0__DOT____Vcellinp__mux3____pinNumber3[6U] 
                 >> 6U));
    vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__data_list[2U] 
        = (((QData)((IData)(vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__pair_list
                            [2U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__pair_list
                                                                   [2U][0U])));
    vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__key_list[0U] 
        = (7U & vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__pair_list
           [0U][2U]);
    vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__key_list[1U] 
        = (7U & vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__pair_list
           [1U][2U]);
    vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__key_list[2U] 
        = (7U & vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__pair_list
           [2U][2U]);
    vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__sel_rf_res) == 
           vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__sel_rf_res) 
              == vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__sel_rf_res) 
              == vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->top__DOT__sel_rf_res) 
                               == vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__sel_rf_res) 
                                  == vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__sel_rf_res) 
                                  == vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__key_list
                                  [2U])))) & vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__wdata = vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__lut_out;
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtop___024root___sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
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
