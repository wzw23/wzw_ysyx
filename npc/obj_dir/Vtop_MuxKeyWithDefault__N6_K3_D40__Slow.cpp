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
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[832]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[833]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[834]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[835]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[836]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[837]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[838]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[839]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[840]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[841]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[842]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[843]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[844]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[845]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[846]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[847]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[848]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[849]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[850]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[851]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[852]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[853]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[854]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[855]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[856]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[857]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[858]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[859]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[860]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[861]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[862]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[863]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[864]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[32]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[865]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[33]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[866]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[34]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[867]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[35]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[868]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[36]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[869]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[37]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[38]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[871]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[39]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[872]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[40]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[873]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[41]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[874]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[42]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[875]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[43]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[876]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[44]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[877]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[45]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[878]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[46]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[879]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[47]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[880]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[48]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[881]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[49]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[882]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[50]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[883]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[51]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[884]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[52]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[885]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[53]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[886]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[54]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[887]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[55]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[888]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[56]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[889]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[57]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[890]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[58]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[891]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[59]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[892]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[60]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[893]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[61]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[894]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[62]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[895]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[63]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[467]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 4, 23, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "key[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[468]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 4, 23, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "key[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[469]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 4, 23, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "key[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[32]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[33]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[34]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[35]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[36]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[37]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[38]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[39]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[40]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[41]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[42]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[43]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[44]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[45]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[46]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[47]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[48]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[49]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[50]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[51]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[52]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[53]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[54]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[55]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[56]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[57]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[58]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[59]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[60]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[61]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[62]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[63]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[832]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[833]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[834]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[835]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[836]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[837]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[838]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[839]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[840]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[841]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[842]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[843]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[844]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[845]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[846]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[847]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[848]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[849]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[850]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[851]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[852]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[853]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[854]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[855]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[856]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[857]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[858]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[859]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[860]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[861]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[862]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[863]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[864]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[32]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[865]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[33]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[866]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[34]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[867]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[35]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[868]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[36]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[869]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[37]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[870]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[38]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[871]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[39]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[872]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[40]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[873]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[41]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[874]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[42]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[875]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[43]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[876]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[44]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[877]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[45]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[878]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[46]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[879]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[47]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[880]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[48]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[881]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[49]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[882]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[50]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[883]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[51]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[884]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[52]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[885]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[53]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[886]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[54]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[887]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[55]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[888]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[56]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[889]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[57]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[890]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[58]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[891]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[59]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[892]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[60]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[893]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[61]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[894]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[62]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[895]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[63]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[467]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 4, 23, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "key[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[468]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 4, 23, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "key[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[469]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 4, 23, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "key[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[32]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[33]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[34]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[35]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[36]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[37]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[38]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[39]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[40]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[41]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[42]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[43]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[44]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[45]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[46]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[47]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[48]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[49]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[50]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[51]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[52]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[53]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[54]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[55]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[56]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[57]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[58]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[59]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[60]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[61]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[62]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[63]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7702]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 11, 22, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "key_list[0][0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7703]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 11, 22, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "key_list[0][1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7704]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 11, 22, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "key_list[0][2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7705]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 11, 22, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "key_list[1][0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7706]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 11, 22, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "key_list[1][1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7707]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 11, 22, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "key_list[1][2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7708]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 11, 22, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "key_list[2][0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7709]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 11, 22, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "key_list[2][1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7710]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 11, 22, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "key_list[2][2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7711]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 11, 22, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "key_list[3][0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7712]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 11, 22, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "key_list[3][1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7713]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 11, 22, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "key_list[3][2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7714]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 11, 22, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "key_list[4][0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7715]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 11, 22, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "key_list[4][1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7716]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 11, 22, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "key_list[4][2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7717]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 11, 22, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "key_list[5][0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7718]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 11, 22, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "key_list[5][1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7719]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 11, 22, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "key_list[5][2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7720]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7721]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7722]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7723]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7724]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7725]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7726]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7727]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7728]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7729]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7730]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7731]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7732]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7733]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7734]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7735]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7736]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7737]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7738]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7739]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7740]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7741]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7742]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7743]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7744]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7745]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7746]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7747]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7748]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7749]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7750]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7751]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7752]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[32]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7753]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[33]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7754]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[34]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7755]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[35]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7756]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[36]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7757]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[37]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7758]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[38]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7759]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[39]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7760]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[40]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7761]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[41]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7762]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[42]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7763]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[43]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7764]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[44]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7765]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[45]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7766]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[46]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7767]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[47]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7768]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[48]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7769]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[49]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7770]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[50]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7771]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[51]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7772]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[52]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7773]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[53]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7774]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[54]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7775]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[55]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7776]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[56]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7777]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[57]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7778]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[58]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7779]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[59]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7780]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[60]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7781]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[61]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7782]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[62]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7783]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[63]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7784]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 23, 7, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "hit", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7785]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 28, 5, ".i0", "v_line/MuxKeyInternal__N6_K3_D40_H1", "block", "28-30");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7786]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 32, 5, ".i0", "v_branch/MuxKeyInternal__N6_K3_D40_H1", "if", "32");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7787]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 32, 6, ".i0", "v_branch/MuxKeyInternal__N6_K3_D40_H1", "else", "33");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7788]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 25, 3, ".i0", "v_line/MuxKeyInternal__N6_K3_D40_H1", "block", "25-28");
}
