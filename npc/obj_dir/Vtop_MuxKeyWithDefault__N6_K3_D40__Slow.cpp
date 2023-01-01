// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop_MuxKeyWithDefault__N6_K3_D40.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========


void Vtop_MuxKeyWithDefault__N6_K3_D40___ctor_var_reset(Vtop_MuxKeyWithDefault__N6_K3_D40* vlSelf);

Vtop_MuxKeyWithDefault__N6_K3_D40::Vtop_MuxKeyWithDefault__N6_K3_D40(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vtop_MuxKeyWithDefault__N6_K3_D40___ctor_var_reset(this);
}

void Vtop_MuxKeyWithDefault__N6_K3_D40___configure_coverage(Vtop_MuxKeyWithDefault__N6_K3_D40* vlSelf, bool first);

void Vtop_MuxKeyWithDefault__N6_K3_D40::__Vconfigure(Vtop__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
    Vtop_MuxKeyWithDefault__N6_K3_D40___configure_coverage(this, first);
}

Vtop_MuxKeyWithDefault__N6_K3_D40::~Vtop_MuxKeyWithDefault__N6_K3_D40() {
}

// Coverage
void Vtop_MuxKeyWithDefault__N6_K3_D40::__vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
    const char* hierp, const char* pagep, const char* commentp, const char* linescovp) {
    uint32_t* count32p = countp;
    static uint32_t fake_zero_count = 0;
    if (!enable) count32p = &fake_zero_count;
    *count32p = 0;
    VL_COVER_INSERT(vlSymsp->_vm_contextp__->coveragep(), count32p,  "filename",filenamep,  "lineno",lineno,  "column",column,
        "hier",std::string(name())+hierp,  "page",pagep,  "comment",commentp,  (linescovp[0] ? "linescov" : ""), linescovp);
}

void Vtop_MuxKeyWithDefault__N6_K3_D40___ctor_var_reset(Vtop_MuxKeyWithDefault__N6_K3_D40* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_MuxKeyWithDefault__N6_K3_D40___ctor_var_reset\n"); );
    // Body
    vlSelf->out = VL_RAND_RESET_Q(64);
    vlSelf->key = VL_RAND_RESET_I(3);
    vlSelf->default_out = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(402, vlSelf->lut);
    for (int __Vi0=0; __Vi0<6; ++__Vi0) {
        VL_RAND_RESET_W(67, vlSelf->__PVT__i0__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<6; ++__Vi0) {
        vlSelf->__PVT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0=0; __Vi0<6; ++__Vi0) {
        vlSelf->__PVT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->__PVT__i0__DOT__lut_out = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__i0__DOT__hit = VL_RAND_RESET_I(1);
    vlSelf->__PVT__i0__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<6; ++__Vi0) {
        vlSelf->i0__DOT____Vtogcov__key_list[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->i0__DOT____Vtogcov__lut_out = VL_RAND_RESET_Q(64);
    vlSelf->i0__DOT____Vtogcov__hit = VL_RAND_RESET_I(1);
}

void Vtop_MuxKeyWithDefault__N6_K3_D40___configure_coverage(Vtop_MuxKeyWithDefault__N6_K3_D40* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_MuxKeyWithDefault__N6_K3_D40___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[513]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[514]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[515]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[516]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[517]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[518]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[519]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[520]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[521]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[522]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[523]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[524]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[525]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[526]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[527]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[528]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[529]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[530]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[531]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[532]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[533]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[534]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[535]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[536]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[537]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[538]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[539]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[540]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[541]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[542]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[543]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[544]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[545]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[32]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[546]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[33]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[547]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[34]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[548]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[35]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[549]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[36]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[550]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[37]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[551]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[38]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[552]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[39]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[553]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[40]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[554]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[41]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[555]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[42]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[556]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[43]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[557]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[44]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[558]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[45]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[559]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[46]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[560]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[47]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[561]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[48]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[562]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[49]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[563]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[50]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[564]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[51]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[565]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[52]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[566]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[53]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[567]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[54]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[568]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[55]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[569]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[56]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[570]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[57]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[571]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[58]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[572]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[59]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[573]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[60]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[574]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[61]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[575]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[62]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[576]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[63]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[281]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 4, 23, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "key[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[282]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 4, 23, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "key[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[283]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 4, 23, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "key[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[32]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[33]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[34]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[35]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[36]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[37]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[38]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[39]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[40]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[41]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[42]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[43]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[44]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[45]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[46]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[47]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[48]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[49]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[50]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[51]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[52]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[53]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[54]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[55]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[56]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[57]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[58]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[59]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[60]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[61]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[62]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[63]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[513]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[514]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[515]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[516]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[517]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[518]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[519]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[520]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[521]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[522]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[523]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[524]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[525]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[526]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[527]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[528]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[529]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[530]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[531]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[532]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[533]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[534]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[535]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[536]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[537]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[538]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[539]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[540]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[541]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[542]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[543]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[544]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[545]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[32]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[546]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[33]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[547]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[34]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[548]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[35]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[549]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[36]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[550]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[37]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[551]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[38]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[552]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[39]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[553]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[40]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[554]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[41]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[555]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[42]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[556]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[43]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[557]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[44]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[558]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[45]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[559]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[46]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[560]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[47]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[561]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[48]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[562]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[49]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[563]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[50]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[564]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[51]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[565]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[52]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[566]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[53]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[567]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[54]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[568]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[55]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[569]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[56]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[570]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[57]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[571]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[58]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[572]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[59]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[573]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[60]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[574]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[61]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[575]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[62]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[576]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[63]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[281]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 4, 23, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "key[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[282]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 4, 23, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "key[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[283]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 4, 23, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "key[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[32]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[33]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[34]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[35]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[36]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[37]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[38]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[39]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[40]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[41]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[42]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[43]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[44]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[45]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[46]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[47]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[48]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[49]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[50]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[51]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[52]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[53]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[54]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[55]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[56]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[57]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[58]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[59]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[60]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[61]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[62]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[63]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3598]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 11, 22, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "key_list[0][0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3599]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 11, 22, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "key_list[0][1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3600]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 11, 22, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "key_list[0][2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3601]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 11, 22, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "key_list[1][0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3602]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 11, 22, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "key_list[1][1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3603]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 11, 22, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "key_list[1][2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3604]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 11, 22, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "key_list[2][0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3605]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 11, 22, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "key_list[2][1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3606]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 11, 22, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "key_list[2][2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3607]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 11, 22, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "key_list[3][0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3608]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 11, 22, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "key_list[3][1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3609]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 11, 22, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "key_list[3][2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3610]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 11, 22, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "key_list[4][0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3611]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 11, 22, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "key_list[4][1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3612]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 11, 22, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "key_list[4][2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3613]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 11, 22, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "key_list[5][0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3614]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 11, 22, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "key_list[5][1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3615]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 11, 22, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "key_list[5][2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3616]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3617]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3618]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3619]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3620]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3621]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3622]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3623]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3624]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3625]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3626]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3627]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3628]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3629]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3630]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3631]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3632]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3633]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3634]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3635]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3636]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3637]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3638]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3639]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3640]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3641]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3642]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3643]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3644]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3645]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3646]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3647]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3648]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[32]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3649]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[33]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3650]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[34]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3651]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[35]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3652]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[36]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3653]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[37]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3654]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[38]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3655]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[39]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3656]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[40]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3657]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[41]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3658]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[42]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3659]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[43]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3660]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[44]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3661]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[45]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3662]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[46]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3663]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[47]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3664]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[48]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3665]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[49]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3666]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[50]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3667]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[51]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3668]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[52]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3669]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[53]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3670]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[54]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3671]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[55]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3672]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[56]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3673]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[57]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3674]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[58]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3675]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[59]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3676]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[60]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3677]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[61]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3678]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[62]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3679]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[63]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3680]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 23, 7, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "hit", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3681]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 28, 5, ".i0", "v_line/MuxKeyInternal__N6_K3_D40_H1", "block", "28-30");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3682]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 32, 5, ".i0", "v_branch/MuxKeyInternal__N6_K3_D40_H1", "if", "32");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3683]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 32, 6, ".i0", "v_branch/MuxKeyInternal__N6_K3_D40_H1", "else", "33");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3684]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 25, 3, ".i0", "v_line/MuxKeyInternal__N6_K3_D40_H1", "block", "25-28");
}
