// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__traceInitSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vtop___024root__traceInitTop(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vtop___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vtop___024root__traceInitSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+503,"clk", false,-1);
        tracep->declBit(c+504,"rst", false,-1);
        tracep->declBus(c+505,"inst", false,-1, 31,0);
        tracep->declBus(c+506,"cpupc", false,-1, 31,0);
        tracep->declBit(c+503,"top clk", false,-1);
        tracep->declBit(c+504,"top rst", false,-1);
        tracep->declBus(c+505,"top inst", false,-1, 31,0);
        tracep->declBus(c+506,"top cpupc", false,-1, 31,0);
        tracep->declBus(c+310,"top count_c", false,-1, 5,0);
        tracep->declBus(c+6,"top dnpc", false,-1, 31,0);
        tracep->declBit(c+503,"top i0 clk", false,-1);
        tracep->declBit(c+504,"top i0 rst", false,-1);
        tracep->declBus(c+6,"top i0 dnpc", false,-1, 31,0);
        tracep->declBus(c+506,"top i0 cpupc", false,-1, 31,0);
        tracep->declBus(c+526,"top i0 i0 WIDTH", false,-1, 31,0);
        tracep->declBus(c+527,"top i0 i0 RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+503,"top i0 i0 clk", false,-1);
        tracep->declBit(c+504,"top i0 i0 rst", false,-1);
        tracep->declBus(c+6,"top i0 i0 din", false,-1, 31,0);
        tracep->declBus(c+506,"top i0 i0 dout", false,-1, 31,0);
        tracep->declBit(c+528,"top i0 i0 wen", false,-1);
        tracep->declBit(c+503,"top de clk", false,-1);
        tracep->declBus(c+505,"top de inst", false,-1, 31,0);
        tracep->declBus(c+506,"top de pc", false,-1, 31,0);
        tracep->declBus(c+6,"top de dnpc", false,-1, 31,0);
        tracep->declBus(c+529,"top de Type_I", false,-1, 2,0);
        tracep->declBus(c+530,"top de Type_S", false,-1, 2,0);
        tracep->declBus(c+531,"top de Type_B", false,-1, 2,0);
        tracep->declBus(c+532,"top de Type_U", false,-1, 2,0);
        tracep->declBus(c+533,"top de Type_J", false,-1, 2,0);
        tracep->declBus(c+534,"top de None", false,-1, 2,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+311+i*2,"top de array", true,(i+0), 63,0);}}
        tracep->declBit(c+507,"top de state", false,-1);
        tracep->declBus(c+508,"top de return_state", false,-1, 31,0);
        tracep->declBus(c+7,"top de return_a0", false,-1, 31,0);
        tracep->declBus(c+8,"top de call_return", false,-1, 1,0);
        tracep->declBus(c+9,"top de call_returnr", false,-1, 31,0);
        tracep->declQuad(c+509,"top de upc", false,-1, 63,0);
        tracep->declBus(c+10,"top de Type", false,-1, 2,0);
        tracep->declBus(c+511,"top de one_zero", false,-1, 1,0);
        tracep->declBus(c+512,"top de six_two", false,-1, 4,0);
        tracep->declBus(c+513,"top de fth_twl", false,-1, 2,0);
        tracep->declBus(c+514,"top de rs1", false,-1, 4,0);
        tracep->declBus(c+515,"top de rs2", false,-1, 4,0);
        tracep->declBus(c+11,"top de raddr", false,-1, 4,0);
        tracep->declQuad(c+12,"top de src1", false,-1, 63,0);
        tracep->declQuad(c+14,"top de src2", false,-1, 63,0);
        tracep->declQuad(c+16,"top de rdata", false,-1, 63,0);
        tracep->declQuad(c+18,"top de imm", false,-1, 63,0);
        tracep->declQuad(c+20,"top de Simm", false,-1, 63,0);
        tracep->declBus(c+516,"top de dest", false,-1, 4,0);
        tracep->declBus(c+22,"top de waddr", false,-1, 4,0);
        tracep->declQuad(c+23,"top de wdata", false,-1, 63,0);
        tracep->declQuad(c+25,"top de addresult", false,-1, 63,0);
        tracep->declQuad(c+27,"top de adddata1", false,-1, 63,0);
        tracep->declQuad(c+29,"top de adddata2", false,-1, 63,0);
        tracep->declBus(c+535,"top de length", false,-1, 31,0);
        tracep->declBus(c+535,"top de wlength", false,-1, 31,0);
        tracep->declBus(c+536,"top de rlength", false,-1, 31,0);
        tracep->declBus(c+537,"top de alength", false,-1, 31,0);
        tracep->declBus(c+537,"top de plength", false,-1, 31,0);
        tracep->declBus(c+31,"top de addi", false,-1, 31,0);
        tracep->declBus(c+517,"top de auipc", false,-1, 31,0);
        tracep->declQuad(c+32,"top de addauipc", false,-1, 63,0);
        tracep->declBus(c+518,"top de auipcmid", false,-1, 31,0);
        tracep->declBus(c+519,"top de lui", false,-1, 31,0);
        tracep->declQuad(c+520,"top de luimid", false,-1, 63,0);
        tracep->declBus(c+522,"top de jal", false,-1, 31,0);
        tracep->declQuad(c+523,"top de jalpc", false,-1, 63,0);
        tracep->declBus(c+34,"top de jalr", false,-1, 31,0);
        tracep->declBus(c+538,"top de ebreak", false,-1, 31,0);
        tracep->declBus(c+535,"top de r0 ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+539,"top de r0 DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+503,"top de r0 clk", false,-1);
        tracep->declBit(c+528,"top de r0 wen", false,-1);
        tracep->declQuad(c+23,"top de r0 wdata", false,-1, 63,0);
        tracep->declBus(c+22,"top de r0 waddr", false,-1, 4,0);
        tracep->declQuad(c+540,"top de r0 wdata2", false,-1, 63,0);
        tracep->declBus(c+542,"top de r0 waddr2", false,-1, 4,0);
        tracep->declBus(c+514,"top de r0 raddr1", false,-1, 4,0);
        tracep->declBus(c+515,"top de r0 raddr2", false,-1, 4,0);
        tracep->declBus(c+11,"top de r0 raddr3", false,-1, 4,0);
        tracep->declQuad(c+12,"top de r0 rdata1", false,-1, 63,0);
        tracep->declQuad(c+14,"top de r0 rdata2", false,-1, 63,0);
        tracep->declQuad(c+16,"top de r0 rdata3", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+375+i*2,"top de r0 array", true,(i+0), 63,0);}}
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+439+i*2,"top de r0 rf", true,(i+0), 63,0);}}
        tracep->declBus(c+1,"top de r0 i", false,-1, 31,0);
        tracep->declBus(c+535,"top de m0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+526,"top de m0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+543,"top de m0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+10,"top de m0 out", false,-1, 2,0);
        tracep->declBus(c+505,"top de m0 key", false,-1, 31,0);
        tracep->declBus(c+534,"top de m0 default_out", false,-1, 2,0);
        tracep->declArray(c+35,"top de m0 lut", false,-1, 174,0);
        tracep->declBus(c+535,"top de m0 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+526,"top de m0 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+543,"top de m0 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+536,"top de m0 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+10,"top de m0 i0 out", false,-1, 2,0);
        tracep->declBus(c+505,"top de m0 i0 key", false,-1, 31,0);
        tracep->declBus(c+534,"top de m0 i0 default_out", false,-1, 2,0);
        tracep->declArray(c+35,"top de m0 i0 lut", false,-1, 174,0);
        tracep->declBus(c+544,"top de m0 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declQuad(c+41+i*2,"top de m0 i0 pair_list", true,(i+0), 34,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+51+i*1,"top de m0 i0 key_list", true,(i+0), 31,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+56+i*1,"top de m0 i0 data_list", true,(i+0), 2,0);}}
        tracep->declBus(c+61,"top de m0 i0 lut_out", false,-1, 2,0);
        tracep->declBit(c+62,"top de m0 i0 hit", false,-1);
        tracep->declBus(c+63,"top de m0 i0 i", false,-1, 31,0);
        tracep->declBus(c+535,"top de m2 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+526,"top de m2 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+535,"top de m2 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+22,"top de m2 out", false,-1, 4,0);
        tracep->declBus(c+505,"top de m2 key", false,-1, 31,0);
        tracep->declBus(c+542,"top de m2 default_out", false,-1, 4,0);
        tracep->declArray(c+64,"top de m2 lut", false,-1, 184,0);
        tracep->declBus(c+535,"top de m2 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+526,"top de m2 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+535,"top de m2 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+536,"top de m2 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+22,"top de m2 i0 out", false,-1, 4,0);
        tracep->declBus(c+505,"top de m2 i0 key", false,-1, 31,0);
        tracep->declBus(c+542,"top de m2 i0 default_out", false,-1, 4,0);
        tracep->declArray(c+64,"top de m2 i0 lut", false,-1, 184,0);
        tracep->declBus(c+545,"top de m2 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declQuad(c+70+i*2,"top de m2 i0 pair_list", true,(i+0), 36,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+80+i*1,"top de m2 i0 key_list", true,(i+0), 31,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+85+i*1,"top de m2 i0 data_list", true,(i+0), 4,0);}}
        tracep->declBus(c+90,"top de m2 i0 lut_out", false,-1, 4,0);
        tracep->declBit(c+91,"top de m2 i0 hit", false,-1);
        tracep->declBus(c+92,"top de m2 i0 i", false,-1, 31,0);
        tracep->declBus(c+535,"top de m3 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+526,"top de m3 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+539,"top de m3 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+23,"top de m3 out", false,-1, 63,0);
        tracep->declBus(c+505,"top de m3 key", false,-1, 31,0);
        tracep->declQuad(c+540,"top de m3 default_out", false,-1, 63,0);
        tracep->declArray(c+93,"top de m3 lut", false,-1, 479,0);
        tracep->declBus(c+535,"top de m3 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+526,"top de m3 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+539,"top de m3 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+536,"top de m3 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+23,"top de m3 i0 out", false,-1, 63,0);
        tracep->declBus(c+505,"top de m3 i0 key", false,-1, 31,0);
        tracep->declQuad(c+540,"top de m3 i0 default_out", false,-1, 63,0);
        tracep->declArray(c+93,"top de m3 i0 lut", false,-1, 479,0);
        tracep->declBus(c+546,"top de m3 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declArray(c+108+i*3,"top de m3 i0 pair_list", true,(i+0), 95,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+123+i*1,"top de m3 i0 key_list", true,(i+0), 31,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declQuad(c+128+i*2,"top de m3 i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+138,"top de m3 i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+140,"top de m3 i0 hit", false,-1);
        tracep->declBus(c+141,"top de m3 i0 i", false,-1, 31,0);
        tracep->declBus(c+536,"top de m8 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+526,"top de m8 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+535,"top de m8 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+11,"top de m8 out", false,-1, 4,0);
        tracep->declBus(c+505,"top de m8 key", false,-1, 31,0);
        tracep->declBus(c+542,"top de m8 default_out", false,-1, 4,0);
        tracep->declQuad(c+547,"top de m8 lut", false,-1, 36,0);
        tracep->declBus(c+536,"top de m8 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+526,"top de m8 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+535,"top de m8 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+536,"top de m8 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+11,"top de m8 i0 out", false,-1, 4,0);
        tracep->declBus(c+505,"top de m8 i0 key", false,-1, 31,0);
        tracep->declBus(c+542,"top de m8 i0 default_out", false,-1, 4,0);
        tracep->declQuad(c+547,"top de m8 i0 lut", false,-1, 36,0);
        tracep->declBus(c+545,"top de m8 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<1; i++) {
                tracep->declQuad(c+2+i*2,"top de m8 i0 pair_list", true,(i+0), 36,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+4+i*1,"top de m8 i0 key_list", true,(i+0), 31,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+5+i*1,"top de m8 i0 data_list", true,(i+0), 4,0);}}
        tracep->declBus(c+142,"top de m8 i0 lut_out", false,-1, 4,0);
        tracep->declBit(c+143,"top de m8 i0 hit", false,-1);
        tracep->declBus(c+144,"top de m8 i0 i", false,-1, 31,0);
        tracep->declBus(c+537,"top de m6 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+526,"top de m6 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+526,"top de m6 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+6,"top de m6 out", false,-1, 31,0);
        tracep->declBus(c+505,"top de m6 key", false,-1, 31,0);
        tracep->declBus(c+525,"top de m6 default_out", false,-1, 31,0);
        tracep->declArray(c+145,"top de m6 lut", false,-1, 127,0);
        tracep->declBus(c+537,"top de m6 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+526,"top de m6 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+526,"top de m6 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+536,"top de m6 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+6,"top de m6 i0 out", false,-1, 31,0);
        tracep->declBus(c+505,"top de m6 i0 key", false,-1, 31,0);
        tracep->declBus(c+525,"top de m6 i0 default_out", false,-1, 31,0);
        tracep->declArray(c+145,"top de m6 i0 lut", false,-1, 127,0);
        tracep->declBus(c+539,"top de m6 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+149+i*2,"top de m6 i0 pair_list", true,(i+0), 63,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+153+i*1,"top de m6 i0 key_list", true,(i+0), 31,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+155+i*1,"top de m6 i0 data_list", true,(i+0), 31,0);}}
        tracep->declBus(c+157,"top de m6 i0 lut_out", false,-1, 31,0);
        tracep->declBit(c+158,"top de m6 i0 hit", false,-1);
        tracep->declBus(c+159,"top de m6 i0 i", false,-1, 31,0);
        tracep->declQuad(c+27,"top de add a", false,-1, 63,0);
        tracep->declQuad(c+29,"top de add b", false,-1, 63,0);
        tracep->declQuad(c+25,"top de add out", false,-1, 63,0);
        tracep->declBus(c+537,"top de m4 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+526,"top de m4 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+539,"top de m4 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+27,"top de m4 out", false,-1, 63,0);
        tracep->declBus(c+505,"top de m4 key", false,-1, 31,0);
        tracep->declQuad(c+540,"top de m4 default_out", false,-1, 63,0);
        tracep->declArray(c+160,"top de m4 lut", false,-1, 191,0);
        tracep->declBus(c+537,"top de m4 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+526,"top de m4 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+539,"top de m4 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+536,"top de m4 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+27,"top de m4 i0 out", false,-1, 63,0);
        tracep->declBus(c+505,"top de m4 i0 key", false,-1, 31,0);
        tracep->declQuad(c+540,"top de m4 i0 default_out", false,-1, 63,0);
        tracep->declArray(c+160,"top de m4 i0 lut", false,-1, 191,0);
        tracep->declBus(c+546,"top de m4 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declArray(c+166+i*3,"top de m4 i0 pair_list", true,(i+0), 95,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+172+i*1,"top de m4 i0 key_list", true,(i+0), 31,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+174+i*2,"top de m4 i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+178,"top de m4 i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+180,"top de m4 i0 hit", false,-1);
        tracep->declBus(c+181,"top de m4 i0 i", false,-1, 31,0);
        tracep->declBus(c+537,"top de m5 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+526,"top de m5 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+539,"top de m5 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+29,"top de m5 out", false,-1, 63,0);
        tracep->declBus(c+505,"top de m5 key", false,-1, 31,0);
        tracep->declQuad(c+540,"top de m5 default_out", false,-1, 63,0);
        tracep->declArray(c+182,"top de m5 lut", false,-1, 191,0);
        tracep->declBus(c+537,"top de m5 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+526,"top de m5 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+539,"top de m5 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+536,"top de m5 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+29,"top de m5 i0 out", false,-1, 63,0);
        tracep->declBus(c+505,"top de m5 i0 key", false,-1, 31,0);
        tracep->declQuad(c+540,"top de m5 i0 default_out", false,-1, 63,0);
        tracep->declArray(c+182,"top de m5 i0 lut", false,-1, 191,0);
        tracep->declBus(c+546,"top de m5 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declArray(c+188+i*3,"top de m5 i0 pair_list", true,(i+0), 95,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+194+i*1,"top de m5 i0 key_list", true,(i+0), 31,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+196+i*2,"top de m5 i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+200,"top de m5 i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+202,"top de m5 i0 hit", false,-1);
        tracep->declBus(c+203,"top de m5 i0 i", false,-1, 31,0);
        tracep->declBus(c+549,"top de m1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+543,"top de m1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+539,"top de m1 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+18,"top de m1 out", false,-1, 63,0);
        tracep->declBus(c+10,"top de m1 key", false,-1, 2,0);
        tracep->declQuad(c+540,"top de m1 default_out", false,-1, 63,0);
        tracep->declArray(c+204,"top de m1 lut", false,-1, 401,0);
        tracep->declBus(c+549,"top de m1 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+543,"top de m1 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+539,"top de m1 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+536,"top de m1 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+18,"top de m1 i0 out", false,-1, 63,0);
        tracep->declBus(c+10,"top de m1 i0 key", false,-1, 2,0);
        tracep->declQuad(c+540,"top de m1 i0 default_out", false,-1, 63,0);
        tracep->declArray(c+204,"top de m1 i0 lut", false,-1, 401,0);
        tracep->declBus(c+550,"top de m1 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<6; i++) {
                tracep->declArray(c+217+i*3,"top de m1 i0 pair_list", true,(i+0), 66,0);}}
        {int i; for (i=0; i<6; i++) {
                tracep->declBus(c+235+i*1,"top de m1 i0 key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<6; i++) {
                tracep->declQuad(c+241+i*2,"top de m1 i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+253,"top de m1 i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+255,"top de m1 i0 hit", false,-1);
        tracep->declBus(c+256,"top de m1 i0 i", false,-1, 31,0);
        tracep->declBus(c+549,"top de m7 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+543,"top de m7 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+539,"top de m7 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+20,"top de m7 out", false,-1, 63,0);
        tracep->declBus(c+10,"top de m7 key", false,-1, 2,0);
        tracep->declQuad(c+540,"top de m7 default_out", false,-1, 63,0);
        tracep->declArray(c+257,"top de m7 lut", false,-1, 401,0);
        tracep->declBus(c+549,"top de m7 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+543,"top de m7 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+539,"top de m7 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+536,"top de m7 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+20,"top de m7 i0 out", false,-1, 63,0);
        tracep->declBus(c+10,"top de m7 i0 key", false,-1, 2,0);
        tracep->declQuad(c+540,"top de m7 i0 default_out", false,-1, 63,0);
        tracep->declArray(c+257,"top de m7 i0 lut", false,-1, 401,0);
        tracep->declBus(c+550,"top de m7 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<6; i++) {
                tracep->declArray(c+270+i*3,"top de m7 i0 pair_list", true,(i+0), 66,0);}}
        {int i; for (i=0; i<6; i++) {
                tracep->declBus(c+288+i*1,"top de m7 i0 key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<6; i++) {
                tracep->declQuad(c+294+i*2,"top de m7 i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+306,"top de m7 i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+308,"top de m7 i0 hit", false,-1);
        tracep->declBus(c+309,"top de m7 i0 i", false,-1, 31,0);
    }
}

void Vtop___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vtop___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vtop___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vtop___024root__traceRegister(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vtop___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vtop___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vtop___024root__traceCleanup, vlSelf);
    }
}

void Vtop___024root__traceFullSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vtop___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vtop___024root* const __restrict vlSelf = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vtop___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vtop___024root__traceFullSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullIData(oldp+1,(vlSelf->top__DOT__de__DOT__r0__DOT__i),32);
        tracep->fullQData(oldp+2,(vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__pair_list[0]),37);
        tracep->fullIData(oldp+4,(vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list[0]),32);
        tracep->fullCData(oldp+5,(vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__data_list[0]),5);
        tracep->fullIData(oldp+6,(vlSelf->top__DOT__dnpc),32);
        tracep->fullIData(oldp+7,((IData)(vlSelf->top__DOT__de__DOT__rdata)),32);
        tracep->fullCData(oldp+8,(vlSelf->top__DOT__de__DOT__call_return),2);
        tracep->fullIData(oldp+9,(vlSelf->top__DOT__de__DOT__call_return),32);
        tracep->fullCData(oldp+10,(vlSelf->top__DOT__de__DOT__Type),3);
        tracep->fullCData(oldp+11,(vlSelf->top__DOT__de__DOT__raddr),5);
        tracep->fullQData(oldp+12,(vlSelf->top__DOT__de__DOT__src1),64);
        tracep->fullQData(oldp+14,(vlSelf->top__DOT__de__DOT__src2),64);
        tracep->fullQData(oldp+16,(vlSelf->top__DOT__de__DOT__rdata),64);
        tracep->fullQData(oldp+18,(vlSymsp->TOP__top__DOT__de__DOT__m1.out),64);
        tracep->fullQData(oldp+20,(vlSymsp->TOP__top__DOT__de__DOT__m7.out),64);
        tracep->fullCData(oldp+22,(vlSelf->top__DOT__de__DOT__waddr),5);
        tracep->fullQData(oldp+23,(vlSelf->top__DOT__de__DOT__wdata),64);
        tracep->fullQData(oldp+25,(vlSelf->top__DOT__de__DOT__addresult),64);
        tracep->fullQData(oldp+27,(vlSymsp->TOP__top__DOT__de__DOT__m4.out),64);
        tracep->fullQData(oldp+29,(vlSymsp->TOP__top__DOT__de__DOT__m5.out),64);
        tracep->fullIData(oldp+31,(vlSelf->top__DOT__de__DOT__addi),32);
        tracep->fullQData(oldp+32,(vlSelf->top__DOT__de__DOT__addauipc),64);
        tracep->fullIData(oldp+34,(vlSelf->top__DOT__de__DOT__jalr),32);
        tracep->fullWData(oldp+35,(vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4),175);
        tracep->fullQData(oldp+41,(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[0]),35);
        tracep->fullQData(oldp+43,(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[1]),35);
        tracep->fullQData(oldp+45,(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[2]),35);
        tracep->fullQData(oldp+47,(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[3]),35);
        tracep->fullQData(oldp+49,(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[4]),35);
        tracep->fullIData(oldp+51,(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list[0]),32);
        tracep->fullIData(oldp+52,(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list[1]),32);
        tracep->fullIData(oldp+53,(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list[2]),32);
        tracep->fullIData(oldp+54,(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list[3]),32);
        tracep->fullIData(oldp+55,(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list[4]),32);
        tracep->fullCData(oldp+56,(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list[0]),3);
        tracep->fullCData(oldp+57,(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list[1]),3);
        tracep->fullCData(oldp+58,(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list[2]),3);
        tracep->fullCData(oldp+59,(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list[3]),3);
        tracep->fullCData(oldp+60,(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list[4]),3);
        tracep->fullCData(oldp+61,(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out),3);
        tracep->fullBit(oldp+62,(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit));
        tracep->fullIData(oldp+63,(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__i),32);
        tracep->fullWData(oldp+64,(vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4),185);
        tracep->fullQData(oldp+70,(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list[0]),37);
        tracep->fullQData(oldp+72,(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list[1]),37);
        tracep->fullQData(oldp+74,(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list[2]),37);
        tracep->fullQData(oldp+76,(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list[3]),37);
        tracep->fullQData(oldp+78,(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list[4]),37);
        tracep->fullIData(oldp+80,(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list[0]),32);
        tracep->fullIData(oldp+81,(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list[1]),32);
        tracep->fullIData(oldp+82,(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list[2]),32);
        tracep->fullIData(oldp+83,(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list[3]),32);
        tracep->fullIData(oldp+84,(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list[4]),32);
        tracep->fullCData(oldp+85,(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list[0]),5);
        tracep->fullCData(oldp+86,(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list[1]),5);
        tracep->fullCData(oldp+87,(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list[2]),5);
        tracep->fullCData(oldp+88,(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list[3]),5);
        tracep->fullCData(oldp+89,(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list[4]),5);
        tracep->fullCData(oldp+90,(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out),5);
        tracep->fullBit(oldp+91,(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit));
        tracep->fullIData(oldp+92,(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__i),32);
        tracep->fullWData(oldp+93,(vlSelf->top__DOT__de__DOT____Vcellinp__m3____pinNumber4),480);
        tracep->fullWData(oldp+108,(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list[0]),96);
        tracep->fullWData(oldp+111,(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list[1]),96);
        tracep->fullWData(oldp+114,(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list[2]),96);
        tracep->fullWData(oldp+117,(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list[3]),96);
        tracep->fullWData(oldp+120,(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__pair_list[4]),96);
        tracep->fullIData(oldp+123,(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__key_list[0]),32);
        tracep->fullIData(oldp+124,(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__key_list[1]),32);
        tracep->fullIData(oldp+125,(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__key_list[2]),32);
        tracep->fullIData(oldp+126,(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__key_list[3]),32);
        tracep->fullIData(oldp+127,(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__key_list[4]),32);
        tracep->fullQData(oldp+128,(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+130,(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+132,(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+134,(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+136,(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__data_list[4]),64);
        tracep->fullQData(oldp+138,(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+140,(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__hit));
        tracep->fullIData(oldp+141,(vlSelf->top__DOT__de__DOT__m3__DOT__i0__DOT__i),32);
        tracep->fullCData(oldp+142,(vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__lut_out),5);
        tracep->fullBit(oldp+143,(vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__hit));
        tracep->fullIData(oldp+144,(vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__i),32);
        tracep->fullWData(oldp+145,(vlSelf->top__DOT__de__DOT____Vcellinp__m6____pinNumber4),128);
        tracep->fullQData(oldp+149,(vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list[0]),64);
        tracep->fullQData(oldp+151,(vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__pair_list[1]),64);
        tracep->fullIData(oldp+153,(vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list[0]),32);
        tracep->fullIData(oldp+154,(vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__key_list[1]),32);
        tracep->fullIData(oldp+155,(vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list[0]),32);
        tracep->fullIData(oldp+156,(vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__data_list[1]),32);
        tracep->fullIData(oldp+157,(vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__lut_out),32);
        tracep->fullBit(oldp+158,(vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__hit));
        tracep->fullIData(oldp+159,(vlSelf->top__DOT__de__DOT__m6__DOT__i0__DOT__i),32);
        tracep->fullWData(oldp+160,(vlSelf->top__DOT__de__DOT____Vcellinp__m4____pinNumber4),192);
        tracep->fullWData(oldp+166,(vlSymsp->TOP__top__DOT__de__DOT__m4.__PVT__i0__DOT__pair_list[0]),96);
        tracep->fullWData(oldp+169,(vlSymsp->TOP__top__DOT__de__DOT__m4.__PVT__i0__DOT__pair_list[1]),96);
        tracep->fullIData(oldp+172,(vlSymsp->TOP__top__DOT__de__DOT__m4.__PVT__i0__DOT__key_list[0]),32);
        tracep->fullIData(oldp+173,(vlSymsp->TOP__top__DOT__de__DOT__m4.__PVT__i0__DOT__key_list[1]),32);
        tracep->fullQData(oldp+174,(vlSymsp->TOP__top__DOT__de__DOT__m4.__PVT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+176,(vlSymsp->TOP__top__DOT__de__DOT__m4.__PVT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+178,(vlSymsp->TOP__top__DOT__de__DOT__m4.__PVT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+180,(vlSymsp->TOP__top__DOT__de__DOT__m4.__PVT__i0__DOT__hit));
        tracep->fullIData(oldp+181,(vlSymsp->TOP__top__DOT__de__DOT__m4.__PVT__i0__DOT__i),32);
        tracep->fullWData(oldp+182,(vlSelf->top__DOT__de__DOT____Vcellinp__m5____pinNumber4),192);
        tracep->fullWData(oldp+188,(vlSymsp->TOP__top__DOT__de__DOT__m5.__PVT__i0__DOT__pair_list[0]),96);
        tracep->fullWData(oldp+191,(vlSymsp->TOP__top__DOT__de__DOT__m5.__PVT__i0__DOT__pair_list[1]),96);
        tracep->fullIData(oldp+194,(vlSymsp->TOP__top__DOT__de__DOT__m5.__PVT__i0__DOT__key_list[0]),32);
        tracep->fullIData(oldp+195,(vlSymsp->TOP__top__DOT__de__DOT__m5.__PVT__i0__DOT__key_list[1]),32);
        tracep->fullQData(oldp+196,(vlSymsp->TOP__top__DOT__de__DOT__m5.__PVT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+198,(vlSymsp->TOP__top__DOT__de__DOT__m5.__PVT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+200,(vlSymsp->TOP__top__DOT__de__DOT__m5.__PVT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+202,(vlSymsp->TOP__top__DOT__de__DOT__m5.__PVT__i0__DOT__hit));
        tracep->fullIData(oldp+203,(vlSymsp->TOP__top__DOT__de__DOT__m5.__PVT__i0__DOT__i),32);
        tracep->fullWData(oldp+204,(vlSelf->top__DOT__de__DOT____Vcellinp__m1____pinNumber4),402);
        tracep->fullWData(oldp+217,(vlSymsp->TOP__top__DOT__de__DOT__m1.__PVT__i0__DOT__pair_list[0]),67);
        tracep->fullWData(oldp+220,(vlSymsp->TOP__top__DOT__de__DOT__m1.__PVT__i0__DOT__pair_list[1]),67);
        tracep->fullWData(oldp+223,(vlSymsp->TOP__top__DOT__de__DOT__m1.__PVT__i0__DOT__pair_list[2]),67);
        tracep->fullWData(oldp+226,(vlSymsp->TOP__top__DOT__de__DOT__m1.__PVT__i0__DOT__pair_list[3]),67);
        tracep->fullWData(oldp+229,(vlSymsp->TOP__top__DOT__de__DOT__m1.__PVT__i0__DOT__pair_list[4]),67);
        tracep->fullWData(oldp+232,(vlSymsp->TOP__top__DOT__de__DOT__m1.__PVT__i0__DOT__pair_list[5]),67);
        tracep->fullCData(oldp+235,(vlSymsp->TOP__top__DOT__de__DOT__m1.__PVT__i0__DOT__key_list[0]),3);
        tracep->fullCData(oldp+236,(vlSymsp->TOP__top__DOT__de__DOT__m1.__PVT__i0__DOT__key_list[1]),3);
        tracep->fullCData(oldp+237,(vlSymsp->TOP__top__DOT__de__DOT__m1.__PVT__i0__DOT__key_list[2]),3);
        tracep->fullCData(oldp+238,(vlSymsp->TOP__top__DOT__de__DOT__m1.__PVT__i0__DOT__key_list[3]),3);
        tracep->fullCData(oldp+239,(vlSymsp->TOP__top__DOT__de__DOT__m1.__PVT__i0__DOT__key_list[4]),3);
        tracep->fullCData(oldp+240,(vlSymsp->TOP__top__DOT__de__DOT__m1.__PVT__i0__DOT__key_list[5]),3);
        tracep->fullQData(oldp+241,(vlSymsp->TOP__top__DOT__de__DOT__m1.__PVT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+243,(vlSymsp->TOP__top__DOT__de__DOT__m1.__PVT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+245,(vlSymsp->TOP__top__DOT__de__DOT__m1.__PVT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+247,(vlSymsp->TOP__top__DOT__de__DOT__m1.__PVT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+249,(vlSymsp->TOP__top__DOT__de__DOT__m1.__PVT__i0__DOT__data_list[4]),64);
        tracep->fullQData(oldp+251,(vlSymsp->TOP__top__DOT__de__DOT__m1.__PVT__i0__DOT__data_list[5]),64);
        tracep->fullQData(oldp+253,(vlSymsp->TOP__top__DOT__de__DOT__m1.__PVT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+255,(vlSymsp->TOP__top__DOT__de__DOT__m1.__PVT__i0__DOT__hit));
        tracep->fullIData(oldp+256,(vlSymsp->TOP__top__DOT__de__DOT__m1.__PVT__i0__DOT__i),32);
        tracep->fullWData(oldp+257,(vlSelf->top__DOT__de__DOT____Vcellinp__m7____pinNumber4),402);
        tracep->fullWData(oldp+270,(vlSymsp->TOP__top__DOT__de__DOT__m7.__PVT__i0__DOT__pair_list[0]),67);
        tracep->fullWData(oldp+273,(vlSymsp->TOP__top__DOT__de__DOT__m7.__PVT__i0__DOT__pair_list[1]),67);
        tracep->fullWData(oldp+276,(vlSymsp->TOP__top__DOT__de__DOT__m7.__PVT__i0__DOT__pair_list[2]),67);
        tracep->fullWData(oldp+279,(vlSymsp->TOP__top__DOT__de__DOT__m7.__PVT__i0__DOT__pair_list[3]),67);
        tracep->fullWData(oldp+282,(vlSymsp->TOP__top__DOT__de__DOT__m7.__PVT__i0__DOT__pair_list[4]),67);
        tracep->fullWData(oldp+285,(vlSymsp->TOP__top__DOT__de__DOT__m7.__PVT__i0__DOT__pair_list[5]),67);
        tracep->fullCData(oldp+288,(vlSymsp->TOP__top__DOT__de__DOT__m7.__PVT__i0__DOT__key_list[0]),3);
        tracep->fullCData(oldp+289,(vlSymsp->TOP__top__DOT__de__DOT__m7.__PVT__i0__DOT__key_list[1]),3);
        tracep->fullCData(oldp+290,(vlSymsp->TOP__top__DOT__de__DOT__m7.__PVT__i0__DOT__key_list[2]),3);
        tracep->fullCData(oldp+291,(vlSymsp->TOP__top__DOT__de__DOT__m7.__PVT__i0__DOT__key_list[3]),3);
        tracep->fullCData(oldp+292,(vlSymsp->TOP__top__DOT__de__DOT__m7.__PVT__i0__DOT__key_list[4]),3);
        tracep->fullCData(oldp+293,(vlSymsp->TOP__top__DOT__de__DOT__m7.__PVT__i0__DOT__key_list[5]),3);
        tracep->fullQData(oldp+294,(vlSymsp->TOP__top__DOT__de__DOT__m7.__PVT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+296,(vlSymsp->TOP__top__DOT__de__DOT__m7.__PVT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+298,(vlSymsp->TOP__top__DOT__de__DOT__m7.__PVT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+300,(vlSymsp->TOP__top__DOT__de__DOT__m7.__PVT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+302,(vlSymsp->TOP__top__DOT__de__DOT__m7.__PVT__i0__DOT__data_list[4]),64);
        tracep->fullQData(oldp+304,(vlSymsp->TOP__top__DOT__de__DOT__m7.__PVT__i0__DOT__data_list[5]),64);
        tracep->fullQData(oldp+306,(vlSymsp->TOP__top__DOT__de__DOT__m7.__PVT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+308,(vlSymsp->TOP__top__DOT__de__DOT__m7.__PVT__i0__DOT__hit));
        tracep->fullIData(oldp+309,(vlSymsp->TOP__top__DOT__de__DOT__m7.__PVT__i0__DOT__i),32);
        tracep->fullCData(oldp+310,(vlSelf->top__DOT__count_c),6);
        tracep->fullQData(oldp+311,(vlSelf->top__DOT__de__DOT__array[0]),64);
        tracep->fullQData(oldp+313,(vlSelf->top__DOT__de__DOT__array[1]),64);
        tracep->fullQData(oldp+315,(vlSelf->top__DOT__de__DOT__array[2]),64);
        tracep->fullQData(oldp+317,(vlSelf->top__DOT__de__DOT__array[3]),64);
        tracep->fullQData(oldp+319,(vlSelf->top__DOT__de__DOT__array[4]),64);
        tracep->fullQData(oldp+321,(vlSelf->top__DOT__de__DOT__array[5]),64);
        tracep->fullQData(oldp+323,(vlSelf->top__DOT__de__DOT__array[6]),64);
        tracep->fullQData(oldp+325,(vlSelf->top__DOT__de__DOT__array[7]),64);
        tracep->fullQData(oldp+327,(vlSelf->top__DOT__de__DOT__array[8]),64);
        tracep->fullQData(oldp+329,(vlSelf->top__DOT__de__DOT__array[9]),64);
        tracep->fullQData(oldp+331,(vlSelf->top__DOT__de__DOT__array[10]),64);
        tracep->fullQData(oldp+333,(vlSelf->top__DOT__de__DOT__array[11]),64);
        tracep->fullQData(oldp+335,(vlSelf->top__DOT__de__DOT__array[12]),64);
        tracep->fullQData(oldp+337,(vlSelf->top__DOT__de__DOT__array[13]),64);
        tracep->fullQData(oldp+339,(vlSelf->top__DOT__de__DOT__array[14]),64);
        tracep->fullQData(oldp+341,(vlSelf->top__DOT__de__DOT__array[15]),64);
        tracep->fullQData(oldp+343,(vlSelf->top__DOT__de__DOT__array[16]),64);
        tracep->fullQData(oldp+345,(vlSelf->top__DOT__de__DOT__array[17]),64);
        tracep->fullQData(oldp+347,(vlSelf->top__DOT__de__DOT__array[18]),64);
        tracep->fullQData(oldp+349,(vlSelf->top__DOT__de__DOT__array[19]),64);
        tracep->fullQData(oldp+351,(vlSelf->top__DOT__de__DOT__array[20]),64);
        tracep->fullQData(oldp+353,(vlSelf->top__DOT__de__DOT__array[21]),64);
        tracep->fullQData(oldp+355,(vlSelf->top__DOT__de__DOT__array[22]),64);
        tracep->fullQData(oldp+357,(vlSelf->top__DOT__de__DOT__array[23]),64);
        tracep->fullQData(oldp+359,(vlSelf->top__DOT__de__DOT__array[24]),64);
        tracep->fullQData(oldp+361,(vlSelf->top__DOT__de__DOT__array[25]),64);
        tracep->fullQData(oldp+363,(vlSelf->top__DOT__de__DOT__array[26]),64);
        tracep->fullQData(oldp+365,(vlSelf->top__DOT__de__DOT__array[27]),64);
        tracep->fullQData(oldp+367,(vlSelf->top__DOT__de__DOT__array[28]),64);
        tracep->fullQData(oldp+369,(vlSelf->top__DOT__de__DOT__array[29]),64);
        tracep->fullQData(oldp+371,(vlSelf->top__DOT__de__DOT__array[30]),64);
        tracep->fullQData(oldp+373,(vlSelf->top__DOT__de__DOT__array[31]),64);
        tracep->fullQData(oldp+375,(vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13[0]),64);
        tracep->fullQData(oldp+377,(vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13[1]),64);
        tracep->fullQData(oldp+379,(vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13[2]),64);
        tracep->fullQData(oldp+381,(vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13[3]),64);
        tracep->fullQData(oldp+383,(vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13[4]),64);
        tracep->fullQData(oldp+385,(vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13[5]),64);
        tracep->fullQData(oldp+387,(vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13[6]),64);
        tracep->fullQData(oldp+389,(vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13[7]),64);
        tracep->fullQData(oldp+391,(vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13[8]),64);
        tracep->fullQData(oldp+393,(vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13[9]),64);
        tracep->fullQData(oldp+395,(vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13[10]),64);
        tracep->fullQData(oldp+397,(vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13[11]),64);
        tracep->fullQData(oldp+399,(vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13[12]),64);
        tracep->fullQData(oldp+401,(vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13[13]),64);
        tracep->fullQData(oldp+403,(vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13[14]),64);
        tracep->fullQData(oldp+405,(vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13[15]),64);
        tracep->fullQData(oldp+407,(vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13[16]),64);
        tracep->fullQData(oldp+409,(vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13[17]),64);
        tracep->fullQData(oldp+411,(vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13[18]),64);
        tracep->fullQData(oldp+413,(vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13[19]),64);
        tracep->fullQData(oldp+415,(vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13[20]),64);
        tracep->fullQData(oldp+417,(vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13[21]),64);
        tracep->fullQData(oldp+419,(vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13[22]),64);
        tracep->fullQData(oldp+421,(vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13[23]),64);
        tracep->fullQData(oldp+423,(vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13[24]),64);
        tracep->fullQData(oldp+425,(vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13[25]),64);
        tracep->fullQData(oldp+427,(vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13[26]),64);
        tracep->fullQData(oldp+429,(vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13[27]),64);
        tracep->fullQData(oldp+431,(vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13[28]),64);
        tracep->fullQData(oldp+433,(vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13[29]),64);
        tracep->fullQData(oldp+435,(vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13[30]),64);
        tracep->fullQData(oldp+437,(vlSelf->top__DOT__de__DOT____Vcellout__r0____pinNumber13[31]),64);
        tracep->fullQData(oldp+439,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[0]),64);
        tracep->fullQData(oldp+441,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[1]),64);
        tracep->fullQData(oldp+443,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[2]),64);
        tracep->fullQData(oldp+445,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[3]),64);
        tracep->fullQData(oldp+447,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[4]),64);
        tracep->fullQData(oldp+449,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[5]),64);
        tracep->fullQData(oldp+451,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[6]),64);
        tracep->fullQData(oldp+453,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[7]),64);
        tracep->fullQData(oldp+455,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[8]),64);
        tracep->fullQData(oldp+457,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[9]),64);
        tracep->fullQData(oldp+459,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[10]),64);
        tracep->fullQData(oldp+461,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[11]),64);
        tracep->fullQData(oldp+463,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[12]),64);
        tracep->fullQData(oldp+465,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[13]),64);
        tracep->fullQData(oldp+467,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[14]),64);
        tracep->fullQData(oldp+469,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[15]),64);
        tracep->fullQData(oldp+471,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[16]),64);
        tracep->fullQData(oldp+473,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[17]),64);
        tracep->fullQData(oldp+475,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[18]),64);
        tracep->fullQData(oldp+477,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[19]),64);
        tracep->fullQData(oldp+479,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[20]),64);
        tracep->fullQData(oldp+481,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[21]),64);
        tracep->fullQData(oldp+483,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[22]),64);
        tracep->fullQData(oldp+485,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[23]),64);
        tracep->fullQData(oldp+487,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[24]),64);
        tracep->fullQData(oldp+489,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[25]),64);
        tracep->fullQData(oldp+491,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[26]),64);
        tracep->fullQData(oldp+493,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[27]),64);
        tracep->fullQData(oldp+495,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[28]),64);
        tracep->fullQData(oldp+497,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[29]),64);
        tracep->fullQData(oldp+499,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[30]),64);
        tracep->fullQData(oldp+501,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[31]),64);
        tracep->fullBit(oldp+503,(vlSelf->clk));
        tracep->fullBit(oldp+504,(vlSelf->rst));
        tracep->fullIData(oldp+505,(vlSelf->inst),32);
        tracep->fullIData(oldp+506,(vlSelf->cpupc),32);
        tracep->fullBit(oldp+507,((0x100073U == vlSelf->inst)));
        tracep->fullIData(oldp+508,((0x100073U == vlSelf->inst)),32);
        tracep->fullQData(oldp+509,((QData)((IData)(vlSelf->cpupc))),64);
        tracep->fullCData(oldp+511,((3U & vlSelf->inst)),2);
        tracep->fullCData(oldp+512,((0x1fU & (vlSelf->inst 
                                              >> 2U))),5);
        tracep->fullCData(oldp+513,((7U & (vlSelf->inst 
                                           >> 0xcU))),3);
        tracep->fullCData(oldp+514,((0x1fU & (vlSelf->inst 
                                              >> 0xfU))),5);
        tracep->fullCData(oldp+515,((0x1fU & (vlSelf->inst 
                                              >> 0x14U))),5);
        tracep->fullCData(oldp+516,((0x1fU & (vlSelf->inst 
                                              >> 7U))),5);
        tracep->fullIData(oldp+517,((0x17U | (0xffffff80U 
                                              & vlSelf->inst))),32);
        tracep->fullIData(oldp+518,((0xfffff000U & vlSelf->inst)),32);
        tracep->fullIData(oldp+519,((0x37U | (0xffffff80U 
                                              & vlSelf->inst))),32);
        tracep->fullQData(oldp+520,(((QData)((IData)(
                                                     (vlSelf->inst 
                                                      >> 0xcU))) 
                                     << 0xcU)),64);
        tracep->fullIData(oldp+522,((0x6fU | (0xffffff80U 
                                              & vlSelf->inst))),32);
        tracep->fullQData(oldp+523,((4ULL + (QData)((IData)(vlSelf->cpupc)))),64);
        tracep->fullIData(oldp+525,(((IData)(4U) + vlSelf->cpupc)),32);
        tracep->fullIData(oldp+526,(0x20U),32);
        tracep->fullIData(oldp+527,(0x80000000U),32);
        tracep->fullBit(oldp+528,(1U));
        tracep->fullCData(oldp+529,(1U),3);
        tracep->fullCData(oldp+530,(2U),3);
        tracep->fullCData(oldp+531,(3U),3);
        tracep->fullCData(oldp+532,(4U),3);
        tracep->fullCData(oldp+533,(5U),3);
        tracep->fullCData(oldp+534,(7U),3);
        tracep->fullIData(oldp+535,(5U),32);
        tracep->fullIData(oldp+536,(1U),32);
        tracep->fullIData(oldp+537,(2U),32);
        tracep->fullIData(oldp+538,(0x100073U),32);
        tracep->fullIData(oldp+539,(0x40U),32);
        tracep->fullQData(oldp+540,(0ULL),64);
        tracep->fullCData(oldp+542,(0U),5);
        tracep->fullIData(oldp+543,(3U),32);
        tracep->fullIData(oldp+544,(0x23U),32);
        tracep->fullIData(oldp+545,(0x25U),32);
        tracep->fullIData(oldp+546,(0x60U),32);
        tracep->fullQData(oldp+547,(0x2000e6aULL),37);
        tracep->fullIData(oldp+549,(6U),32);
        tracep->fullIData(oldp+550,(0x43U),32);
    }
}
