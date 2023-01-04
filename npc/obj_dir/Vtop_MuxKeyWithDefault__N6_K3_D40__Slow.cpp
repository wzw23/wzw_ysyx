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
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[735]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[736]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[737]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[738]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[739]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[740]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[741]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[742]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[743]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[744]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[745]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[746]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[747]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[748]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[749]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[750]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[751]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[752]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[753]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[754]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[755]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[756]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[757]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[758]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[759]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[760]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[761]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[762]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[763]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[764]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[765]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[766]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[767]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[32]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[768]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[33]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[769]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[34]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[770]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[35]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[771]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[36]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[772]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[37]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[773]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[38]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[774]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[39]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[775]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[40]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[776]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[41]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[777]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[42]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[778]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[43]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[779]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[44]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[780]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[45]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[781]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[46]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[782]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[47]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[783]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[48]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[784]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[49]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[785]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[50]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[786]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[51]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[787]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[52]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[788]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[53]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[789]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[54]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[790]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[55]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[791]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[56]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[792]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[57]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[793]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[58]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[794]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[59]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[795]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[60]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[796]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[61]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[797]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[62]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[798]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "out[63]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[406]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 4, 23, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "key[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[407]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 4, 23, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "key[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[408]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 4, 23, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "key[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1092]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1092]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1092]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1092]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1092]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1092]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1092]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1092]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1092]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1092]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1092]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1092]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1092]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1092]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1092]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1092]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1092]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1092]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1092]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1092]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1092]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1092]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1092]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1092]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1092]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1092]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1092]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1092]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1092]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1092]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1092]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1092]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1092]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[32]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1092]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[33]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1092]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[34]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1092]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[35]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1092]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[36]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1092]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[37]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1092]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[38]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1092]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[39]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1092]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[40]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1092]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[41]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1092]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[42]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1092]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[43]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1092]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[44]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1092]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[45]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1092]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[46]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1092]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[47]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1092]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[48]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1092]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[49]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1092]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[50]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1092]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[51]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1092]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[52]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1092]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[53]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1092]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[54]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1092]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[55]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1092]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[56]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1092]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[57]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1092]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[58]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1092]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[59]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1092]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[60]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1092]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[61]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1092]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[62]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1092]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N6_K3_D40", "default_out[63]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[735]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[736]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[737]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[738]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[739]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[740]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[741]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[742]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[743]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[744]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[745]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[746]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[747]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[748]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[749]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[750]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[751]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[752]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[753]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[754]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[755]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[756]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[757]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[758]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[759]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[760]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[761]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[762]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[763]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[764]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[765]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[766]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[767]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[32]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[768]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[33]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[769]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[34]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[770]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[35]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[771]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[36]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[772]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[37]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[773]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[38]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[774]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[39]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[775]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[40]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[776]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[41]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[777]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[42]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[778]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[43]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[779]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[44]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[780]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[45]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[781]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[46]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[782]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[47]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[783]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[48]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[784]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[49]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[785]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[50]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[786]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[51]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[787]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[52]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[788]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[53]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[789]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[54]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[790]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[55]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[791]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[56]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[792]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[57]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[793]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[58]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[794]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[59]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[795]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[60]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[796]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[61]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[797]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[62]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[798]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "out[63]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[406]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 4, 23, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "key[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[407]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 4, 23, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "key[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[408]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 4, 23, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "key[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1092]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1092]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1092]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1092]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1092]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1092]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1092]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1092]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1092]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1092]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1092]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1092]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1092]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1092]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1092]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1092]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1092]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1092]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1092]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1092]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1092]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1092]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1092]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1092]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1092]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1092]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1092]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1092]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1092]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1092]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1092]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1092]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1092]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[32]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1092]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[33]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1092]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[34]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1092]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[35]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1092]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[36]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1092]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[37]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1092]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[38]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1092]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[39]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1092]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[40]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1092]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[41]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1092]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[42]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1092]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[43]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1092]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[44]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1092]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[45]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1092]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[46]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1092]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[47]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1092]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[48]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1092]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[49]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1092]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[50]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1092]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[51]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1092]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[52]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1092]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[53]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1092]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[54]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1092]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[55]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1092]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[56]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1092]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[57]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1092]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[58]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1092]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[59]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1092]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[60]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1092]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[61]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1092]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[62]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1092]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "default_out[63]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4119]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 11, 22, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "key_list[0][0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4120]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 11, 22, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "key_list[0][1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4121]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 11, 22, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "key_list[0][2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4122]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 11, 22, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "key_list[1][0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4123]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 11, 22, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "key_list[1][1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4124]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 11, 22, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "key_list[1][2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4125]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 11, 22, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "key_list[2][0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4126]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 11, 22, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "key_list[2][1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4127]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 11, 22, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "key_list[2][2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4128]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 11, 22, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "key_list[3][0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4129]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 11, 22, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "key_list[3][1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4130]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 11, 22, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "key_list[3][2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4131]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 11, 22, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "key_list[4][0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4132]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 11, 22, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "key_list[4][1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4133]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 11, 22, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "key_list[4][2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4134]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 11, 22, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "key_list[5][0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4135]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 11, 22, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "key_list[5][1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4136]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 11, 22, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "key_list[5][2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4137]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4138]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4139]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4140]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4141]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4142]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4143]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4144]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4145]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4146]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4147]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4148]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4149]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4150]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4151]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4152]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4153]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4154]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4155]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4156]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4157]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4158]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4159]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4160]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4161]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4162]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4163]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4164]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4165]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4166]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4167]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4168]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4169]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[32]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4170]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[33]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4171]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[34]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4172]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[35]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4173]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[36]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4174]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[37]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4175]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[38]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4176]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[39]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4177]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[40]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4178]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[41]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4179]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[42]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4180]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[43]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4181]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[44]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4182]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[45]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4183]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[46]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4184]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[47]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4185]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[48]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4186]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[49]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4187]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[50]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4188]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[51]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4189]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[52]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4190]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[53]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4191]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[54]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4192]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[55]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4193]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[56]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4194]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[57]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4195]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[58]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4196]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[59]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4197]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[60]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4198]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[61]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4199]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[62]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4200]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "lut_out[63]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4201]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 23, 7, ".i0", "v_toggle/MuxKeyInternal__N6_K3_D40_H1", "hit", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4202]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 28, 5, ".i0", "v_line/MuxKeyInternal__N6_K3_D40_H1", "block", "28-30");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4203]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 32, 5, ".i0", "v_branch/MuxKeyInternal__N6_K3_D40_H1", "if", "32");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4204]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 32, 6, ".i0", "v_branch/MuxKeyInternal__N6_K3_D40_H1", "else", "33");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4205]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 25, 3, ".i0", "v_line/MuxKeyInternal__N6_K3_D40_H1", "block", "25-28");
}
