// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop_MuxKeyWithDefault__N30_K20_D40.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========


void Vtop_MuxKeyWithDefault__N30_K20_D40___ctor_var_reset(Vtop_MuxKeyWithDefault__N30_K20_D40* vlSelf);

Vtop_MuxKeyWithDefault__N30_K20_D40::Vtop_MuxKeyWithDefault__N30_K20_D40(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vtop_MuxKeyWithDefault__N30_K20_D40___ctor_var_reset(this);
}

void Vtop_MuxKeyWithDefault__N30_K20_D40___configure_coverage(Vtop_MuxKeyWithDefault__N30_K20_D40* vlSelf, bool first);

void Vtop_MuxKeyWithDefault__N30_K20_D40::__Vconfigure(Vtop__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
    Vtop_MuxKeyWithDefault__N30_K20_D40___configure_coverage(this, first);
}

Vtop_MuxKeyWithDefault__N30_K20_D40::~Vtop_MuxKeyWithDefault__N30_K20_D40() {
}

// Coverage
void Vtop_MuxKeyWithDefault__N30_K20_D40::__vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
    const char* hierp, const char* pagep, const char* commentp, const char* linescovp) {
    uint32_t* count32p = countp;
    static uint32_t fake_zero_count = 0;
    if (!enable) count32p = &fake_zero_count;
    *count32p = 0;
    VL_COVER_INSERT(vlSymsp->_vm_contextp__->coveragep(), count32p,  "filename",filenamep,  "lineno",lineno,  "column",column,
        "hier",std::string(name())+hierp,  "page",pagep,  "comment",commentp,  (linescovp[0] ? "linescov" : ""), linescovp);
}

void Vtop_MuxKeyWithDefault__N30_K20_D40___ctor_var_reset(Vtop_MuxKeyWithDefault__N30_K20_D40* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_MuxKeyWithDefault__N30_K20_D40___ctor_var_reset\n"); );
    // Body
    vlSelf->out = VL_RAND_RESET_Q(64);
    vlSelf->key = VL_RAND_RESET_I(32);
    vlSelf->default_out = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(4608, vlSelf->lut);
    for (int __Vi0=0; __Vi0<48; ++__Vi0) {
        VL_RAND_RESET_W(96, vlSelf->__PVT__i0__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<48; ++__Vi0) {
        vlSelf->__PVT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<48; ++__Vi0) {
        vlSelf->__PVT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->__PVT__i0__DOT__lut_out = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__i0__DOT__hit = VL_RAND_RESET_I(1);
    vlSelf->__PVT__i0__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->i0__DOT____Vtogcov__lut_out = VL_RAND_RESET_Q(64);
    vlSelf->i0__DOT____Vtogcov__hit = VL_RAND_RESET_I(1);
}

void Vtop_MuxKeyWithDefault__N30_K20_D40___configure_coverage(Vtop_MuxKeyWithDefault__N30_K20_D40* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_MuxKeyWithDefault__N30_K20_D40___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1285]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "out[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1286]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "out[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1287]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "out[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1288]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "out[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1289]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "out[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1290]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "out[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1291]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "out[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1292]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "out[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1293]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "out[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1294]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "out[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1295]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "out[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1296]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "out[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1297]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "out[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1298]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "out[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1299]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "out[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1300]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "out[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1301]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "out[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1302]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "out[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1303]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "out[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1304]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "out[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1305]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "out[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1306]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "out[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1307]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "out[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1308]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "out[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1309]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "out[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1310]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "out[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1311]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "out[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1312]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "out[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1313]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "out[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1314]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "out[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1315]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "out[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1316]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "out[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1317]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "out[32]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1318]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "out[33]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1319]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "out[34]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1320]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "out[35]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1321]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "out[36]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1322]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "out[37]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1323]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "out[38]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1324]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "out[39]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1325]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "out[40]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1326]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "out[41]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1327]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "out[42]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1328]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "out[43]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1329]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "out[44]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1330]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "out[45]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1331]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "out[46]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1332]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "out[47]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1333]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "out[48]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1334]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "out[49]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1335]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "out[50]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1336]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "out[51]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1337]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "out[52]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1338]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "out[53]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1339]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "out[54]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1340]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "out[55]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1341]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "out[56]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1342]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "out[57]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1343]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "out[58]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1344]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "out[59]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1345]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "out[60]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1346]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "out[61]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1347]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "out[62]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1348]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 3, 25, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "out[63]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 4, 23, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "key[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 4, 23, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "key[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 4, 23, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "key[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 4, 23, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "key[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 4, 23, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "key[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 4, 23, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "key[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 4, 23, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "key[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 4, 23, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "key[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 4, 23, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "key[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 4, 23, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "key[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 4, 23, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "key[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 4, 23, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "key[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 4, 23, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "key[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 4, 23, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "key[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 4, 23, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "key[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 4, 23, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "key[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 4, 23, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "key[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 4, 23, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "key[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 4, 23, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "key[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 4, 23, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "key[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 4, 23, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "key[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 4, 23, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "key[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 4, 23, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "key[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 4, 23, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "key[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 4, 23, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "key[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 4, 23, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "key[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 4, 23, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "key[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 4, 23, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "key[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 4, 23, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "key[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 4, 23, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "key[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 4, 23, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "key[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 4, 23, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "key[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "default_out[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "default_out[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "default_out[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "default_out[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "default_out[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "default_out[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "default_out[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "default_out[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "default_out[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "default_out[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "default_out[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "default_out[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "default_out[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "default_out[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "default_out[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "default_out[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "default_out[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "default_out[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "default_out[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "default_out[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "default_out[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "default_out[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "default_out[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "default_out[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "default_out[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "default_out[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "default_out[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "default_out[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "default_out[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "default_out[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "default_out[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "default_out[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "default_out[32]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "default_out[33]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "default_out[34]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "default_out[35]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "default_out[36]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "default_out[37]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "default_out[38]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "default_out[39]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "default_out[40]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "default_out[41]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "default_out[42]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "default_out[43]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "default_out[44]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "default_out[45]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "default_out[46]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "default_out[47]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "default_out[48]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "default_out[49]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "default_out[50]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "default_out[51]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "default_out[52]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "default_out[53]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "default_out[54]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "default_out[55]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "default_out[56]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "default_out[57]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "default_out[58]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "default_out[59]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "default_out[60]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "default_out[61]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "default_out[62]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyWithDefault.v", 5, 24, "", "v_toggle/MuxKeyWithDefault__N30_K20_D40", "default_out[63]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1285]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "out[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1286]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "out[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1287]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "out[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1288]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "out[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1289]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "out[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1290]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "out[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1291]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "out[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1292]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "out[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1293]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "out[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1294]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "out[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1295]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "out[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1296]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "out[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1297]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "out[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1298]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "out[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1299]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "out[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1300]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "out[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1301]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "out[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1302]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "out[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1303]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "out[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1304]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "out[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1305]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "out[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1306]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "out[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1307]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "out[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1308]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "out[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1309]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "out[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1310]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "out[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1311]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "out[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1312]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "out[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1313]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "out[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1314]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "out[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1315]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "out[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1316]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "out[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1317]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "out[32]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1318]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "out[33]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1319]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "out[34]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1320]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "out[35]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1321]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "out[36]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1322]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "out[37]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1323]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "out[38]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1324]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "out[39]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1325]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "out[40]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1326]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "out[41]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1327]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "out[42]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1328]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "out[43]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1329]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "out[44]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1330]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "out[45]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1331]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "out[46]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1332]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "out[47]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1333]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "out[48]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1334]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "out[49]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1335]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "out[50]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1336]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "out[51]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1337]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "out[52]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1338]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "out[53]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1339]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "out[54]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1340]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "out[55]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1341]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "out[56]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1342]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "out[57]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1343]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "out[58]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1344]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "out[59]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1345]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "out[60]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1346]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "out[61]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1347]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "out[62]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1348]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 3, 29, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "out[63]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 4, 23, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "key[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 4, 23, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "key[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 4, 23, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "key[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 4, 23, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "key[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 4, 23, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "key[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 4, 23, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "key[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 4, 23, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "key[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 4, 23, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "key[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 4, 23, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "key[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 4, 23, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "key[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 4, 23, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "key[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 4, 23, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "key[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 4, 23, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "key[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 4, 23, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "key[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 4, 23, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "key[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 4, 23, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "key[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 4, 23, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "key[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 4, 23, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "key[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 4, 23, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "key[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 4, 23, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "key[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 4, 23, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "key[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 4, 23, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "key[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 4, 23, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "key[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 4, 23, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "key[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 4, 23, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "key[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 4, 23, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "key[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 4, 23, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "key[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 4, 23, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "key[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 4, 23, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "key[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 4, 23, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "key[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 4, 23, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "key[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 4, 23, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "key[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "default_out[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "default_out[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "default_out[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "default_out[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "default_out[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "default_out[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "default_out[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "default_out[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "default_out[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "default_out[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "default_out[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "default_out[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "default_out[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "default_out[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "default_out[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "default_out[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "default_out[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "default_out[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "default_out[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "default_out[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "default_out[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "default_out[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "default_out[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "default_out[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "default_out[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "default_out[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "default_out[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "default_out[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "default_out[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "default_out[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "default_out[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "default_out[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "default_out[32]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "default_out[33]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "default_out[34]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "default_out[35]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "default_out[36]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "default_out[37]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "default_out[38]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "default_out[39]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "default_out[40]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "default_out[41]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "default_out[42]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "default_out[43]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "default_out[44]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "default_out[45]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "default_out[46]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "default_out[47]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "default_out[48]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "default_out[49]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "default_out[50]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "default_out[51]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "default_out[52]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "default_out[53]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "default_out[54]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "default_out[55]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "default_out[56]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "default_out[57]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "default_out[58]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "default_out[59]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "default_out[60]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "default_out[61]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "default_out[62]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2277]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 5, 24, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "default_out[63]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6632]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "lut_out[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6633]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "lut_out[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6634]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "lut_out[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6635]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "lut_out[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6636]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "lut_out[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6637]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "lut_out[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6638]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "lut_out[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6639]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "lut_out[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6640]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "lut_out[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6641]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "lut_out[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6642]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "lut_out[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6643]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "lut_out[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6644]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "lut_out[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6645]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "lut_out[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6646]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "lut_out[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6647]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "lut_out[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6648]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "lut_out[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6649]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "lut_out[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6650]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "lut_out[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6651]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "lut_out[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6652]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "lut_out[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6653]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "lut_out[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6654]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "lut_out[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6655]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "lut_out[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6656]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "lut_out[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6657]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "lut_out[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6658]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "lut_out[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6659]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "lut_out[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6660]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "lut_out[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6661]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "lut_out[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6662]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "lut_out[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6663]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "lut_out[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6664]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "lut_out[32]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6665]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "lut_out[33]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6666]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "lut_out[34]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6667]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "lut_out[35]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6668]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "lut_out[36]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6669]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "lut_out[37]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6670]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "lut_out[38]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6671]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "lut_out[39]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6672]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "lut_out[40]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6673]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "lut_out[41]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6674]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "lut_out[42]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6675]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "lut_out[43]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6676]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "lut_out[44]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6677]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "lut_out[45]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6678]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "lut_out[46]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6679]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "lut_out[47]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6680]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "lut_out[48]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6681]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "lut_out[49]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6682]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "lut_out[50]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6683]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "lut_out[51]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6684]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "lut_out[52]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6685]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "lut_out[53]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6686]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "lut_out[54]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6687]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "lut_out[55]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6688]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "lut_out[56]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6689]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "lut_out[57]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6690]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "lut_out[58]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6691]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "lut_out[59]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6692]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "lut_out[60]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6693]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "lut_out[61]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6694]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "lut_out[62]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6695]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 22, 24, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "lut_out[63]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6696]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 23, 7, ".i0", "v_toggle/MuxKeyInternal__N30_K20_D40_H1", "hit", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6697]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 28, 5, ".i0", "v_line/MuxKeyInternal__N30_K20_D40_H1", "block", "28-30");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6698]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 32, 5, ".i0", "v_branch/MuxKeyInternal__N30_K20_D40_H1", "if", "32");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6699]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 32, 6, ".i0", "v_branch/MuxKeyInternal__N30_K20_D40_H1", "else", "33");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6700]), first, "/home/wzw/ysyx-workbench/npc/vsrc/MuxKeyInternal.v", 25, 3, ".i0", "v_line/MuxKeyInternal__N30_K20_D40_H1", "block", "25-28");
}
