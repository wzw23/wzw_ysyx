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
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[799]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[800]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[801]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[802]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[803]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[804]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[805]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[806]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[807]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[808]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[809]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[810]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[811]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[812]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[813]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[814]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[815]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[816]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[817]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[818]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[819]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[820]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[821]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[822]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[823]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[824]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[825]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[826]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[827]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[828]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[829]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[830]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[831]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[32]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[832]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[33]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[833]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[34]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[834]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[35]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[835]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[36]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[836]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[37]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[837]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[38]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[838]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[39]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[839]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[40]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[840]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[41]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[841]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[42]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[842]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[43]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[843]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[44]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[844]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[45]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[845]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[46]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[846]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[47]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[847]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[48]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[848]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[49]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[849]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[50]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[850]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[51]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[851]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[52]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[852]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[53]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[853]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[54]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[854]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[55]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[855]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[56]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[856]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[57]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[857]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[58]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[858]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[59]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[859]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[60]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[860]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[61]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[861]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[62]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[862]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[63]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[470]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 4, 23, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "key[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[471]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 4, 23, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "key[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[472]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 4, 23, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "key[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2308]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2308]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2308]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2308]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2308]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2308]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2308]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2308]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2308]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2308]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2308]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2308]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2308]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2308]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2308]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2308]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2308]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2308]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2308]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2308]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2308]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2308]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2308]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2308]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2308]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2308]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2308]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2308]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2308]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2308]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2308]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2308]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2308]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[32]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2308]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[33]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2308]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[34]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2308]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[35]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2308]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[36]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2308]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[37]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2308]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[38]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2308]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[39]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2308]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[40]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2308]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[41]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2308]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[42]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2308]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[43]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2308]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[44]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2308]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[45]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2308]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[46]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2308]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[47]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2308]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[48]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2308]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[49]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2308]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[50]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2308]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[51]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2308]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[52]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2308]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[53]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2308]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[54]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2308]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[55]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2308]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[56]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2308]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[57]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2308]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[58]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2308]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[59]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2308]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[60]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2308]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[61]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2308]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[62]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2308]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[63]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[799]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[800]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[801]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[802]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[803]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[804]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[805]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[806]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[807]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[808]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[809]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[810]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[811]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[812]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[813]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[814]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[815]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[816]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[817]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[818]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[819]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[820]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[821]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[822]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[823]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[824]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[825]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[826]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[827]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[828]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[829]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[830]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[831]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[32]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[832]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[33]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[833]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[34]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[834]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[35]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[835]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[36]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[836]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[37]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[837]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[38]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[838]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[39]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[839]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[40]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[840]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[41]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[841]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[42]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[842]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[43]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[843]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[44]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[844]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[45]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[845]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[46]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[846]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[47]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[847]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[48]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[848]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[49]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[849]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[50]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[850]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[51]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[851]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[52]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[852]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[53]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[853]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[54]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[854]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[55]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[855]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[56]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[856]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[57]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[857]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[58]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[858]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[59]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[859]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[60]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[860]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[61]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[861]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[62]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[862]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[63]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[470]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 4, 23, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "key[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[471]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 4, 23, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "key[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[472]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 4, 23, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "key[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2308]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2308]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2308]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2308]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2308]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2308]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2308]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2308]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2308]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2308]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2308]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2308]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2308]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2308]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2308]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2308]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2308]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2308]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2308]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2308]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2308]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2308]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2308]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2308]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2308]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2308]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2308]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2308]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2308]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2308]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2308]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2308]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2308]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[32]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2308]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[33]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2308]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[34]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2308]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[35]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2308]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[36]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2308]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[37]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2308]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[38]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2308]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[39]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2308]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[40]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2308]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[41]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2308]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[42]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2308]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[43]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2308]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[44]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2308]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[45]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2308]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[46]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2308]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[47]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2308]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[48]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2308]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[49]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2308]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[50]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2308]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[51]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2308]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[52]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2308]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[53]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2308]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[54]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2308]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[55]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2308]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[56]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2308]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[57]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2308]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[58]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2308]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[59]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2308]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[60]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2308]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[61]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2308]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[62]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2308]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[63]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5837]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 11, 22, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "key_list[0][0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5838]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 11, 22, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "key_list[0][1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5839]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 11, 22, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "key_list[0][2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5840]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 11, 22, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "key_list[1][0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5841]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 11, 22, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "key_list[1][1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5842]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 11, 22, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "key_list[1][2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5843]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 11, 22, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "key_list[2][0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5844]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 11, 22, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "key_list[2][1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5845]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 11, 22, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "key_list[2][2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5846]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 11, 22, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "key_list[3][0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5847]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 11, 22, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "key_list[3][1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5848]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 11, 22, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "key_list[3][2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5849]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 11, 22, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "key_list[4][0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5850]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 11, 22, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "key_list[4][1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5851]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 11, 22, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "key_list[4][2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5852]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 11, 22, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "key_list[5][0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5853]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 11, 22, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "key_list[5][1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5854]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 11, 22, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "key_list[5][2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5855]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5856]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5857]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5858]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5859]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5860]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5861]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5862]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5863]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5864]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5865]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5866]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5867]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5868]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5869]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5870]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5871]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5872]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5873]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5874]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5875]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5876]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5877]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5878]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5879]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5880]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5881]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5882]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5883]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5884]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5885]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5886]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5887]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[32]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5888]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[33]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5889]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[34]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5890]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[35]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5891]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[36]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5892]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[37]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5893]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[38]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5894]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[39]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5895]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[40]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5896]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[41]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5897]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[42]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5898]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[43]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5899]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[44]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5900]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[45]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5901]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[46]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5902]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[47]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5903]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[48]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5904]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[49]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5905]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[50]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5906]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[51]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5907]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[52]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5908]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[53]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5909]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[54]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5910]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[55]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5911]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[56]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5912]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[57]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5913]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[58]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5914]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[59]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5915]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[60]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5916]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[61]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5917]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[62]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5918]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[63]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5919]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 23, 7, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "hit", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5920]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 28, 5, ".i0", "v_line/MuxKeyInternal__N6_K3_D40_H1", "block", "28-30");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5921]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 32, 5, ".i0", "v_branch/MuxKeyInternal__N6_K3_D40_H1", "if", "32");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5922]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 32, 6, ".i0", "v_branch/MuxKeyInternal__N6_K3_D40_H1", "else", "33");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5923]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 25, 3, ".i0", "v_line/MuxKeyInternal__N6_K3_D40_H1", "block", "25-28");
}
