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
        tracep->declBit(c+633,"clk", false,-1);
        tracep->declBit(c+634,"rst", false,-1);
        tracep->declBus(c+635,"inst", false,-1, 31,0);
        tracep->declQuad(c+636,"cpupc", false,-1, 63,0);
        tracep->declBit(c+638,"ebreak", false,-1);
        tracep->declBit(c+639,"not_have", false,-1);
        tracep->declQuad(c+640,"dnpc", false,-1, 63,0);
        tracep->declBit(c+642,"inst_finish", false,-1);
        tracep->declBit(c+643,"inst_update", false,-1);
        tracep->declBit(c+633,"top clk", false,-1);
        tracep->declBit(c+634,"top rst", false,-1);
        tracep->declBus(c+635,"top inst", false,-1, 31,0);
        tracep->declQuad(c+636,"top cpupc", false,-1, 63,0);
        tracep->declBit(c+638,"top ebreak", false,-1);
        tracep->declBit(c+639,"top not_have", false,-1);
        tracep->declQuad(c+640,"top dnpc", false,-1, 63,0);
        tracep->declBit(c+642,"top inst_finish", false,-1);
        tracep->declBit(c+643,"top inst_update", false,-1);
        tracep->declQuad(c+25,"top c_rdata", false,-1, 63,0);
        tracep->declBus(c+27,"top sel_nextpc", false,-1, 1,0);
        tracep->declQuad(c+28,"top imm", false,-1, 63,0);
        tracep->declQuad(c+30,"top src1", false,-1, 63,0);
        tracep->declQuad(c+644,"top src2", false,-1, 63,0);
        tracep->declBus(c+646,"top rs1", false,-1, 4,0);
        tracep->declBus(c+647,"top rs2", false,-1, 4,0);
        tracep->declBus(c+648,"top rd", false,-1, 4,0);
        tracep->declBus(c+32,"top op_d", false,-1, 11,0);
        tracep->declBus(c+33,"top fu_7_d", false,-1, 4,0);
        tracep->declBus(c+649,"top fu_3_d", false,-1, 7,0);
        tracep->declBus(c+34,"top c_raddr", false,-1, 1,0);
        tracep->declBus(c+34,"top c_waddr", false,-1, 1,0);
        tracep->declBus(c+35,"top e_inst", false,-1, 2,0);
        tracep->declBus(c+36,"top sel_alu_src1", false,-1, 3,0);
        tracep->declBus(c+37,"top sel_alu_src2", false,-1, 2,0);
        tracep->declBus(c+38,"top alu_control", false,-1, 16,0);
        tracep->declBit(c+650,"top rf_wen", false,-1);
        tracep->declBus(c+39,"top sel_rf_res", false,-1, 2,0);
        tracep->declBit(c+664,"top data_ram_en", false,-1);
        tracep->declBit(c+651,"top data_ram_wen", false,-1);
        tracep->declBus(c+40,"top alu_equal", false,-1, 2,0);
        tracep->declBus(c+41,"top l_choose", false,-1, 6,0);
        tracep->declBit(c+42,"top w_choose", false,-1);
        tracep->declBit(c+43,"top c_wchoose", false,-1);
        tracep->declBit(c+652,"top c_wen", false,-1);
        tracep->declBus(c+44,"top wmask", false,-1, 7,0);
        tracep->declBit(c+653,"top c_wen1_2", false,-1);
        tracep->declQuad(c+45,"top alu_result", false,-1, 63,0);
        tracep->declQuad(c+47,"top ram_addr", false,-1, 63,0);
        tracep->declQuad(c+596,"top ram_data", false,-1, 63,0);
        tracep->declQuad(c+598,"top wdata", false,-1, 63,0);
        tracep->declBit(c+633,"top i0 clk", false,-1);
        tracep->declBit(c+634,"top i0 rst", false,-1);
        tracep->declQuad(c+636,"top i0 cpupc", false,-1, 63,0);
        tracep->declBus(c+27,"top i0 sel_nextpc", false,-1, 1,0);
        tracep->declQuad(c+28,"top i0 imm", false,-1, 63,0);
        tracep->declQuad(c+30,"top i0 src1", false,-1, 63,0);
        tracep->declBus(c+635,"top i0 inst", false,-1, 31,0);
        tracep->declQuad(c+640,"top i0 dnpc", false,-1, 63,0);
        tracep->declQuad(c+25,"top i0 c_rdata", false,-1, 63,0);
        tracep->declBit(c+643,"top i0 inst_update", false,-1);
        tracep->declBit(c+642,"top i0 inst_finish", false,-1);
        tracep->declQuad(c+49,"top i0 dnpc_0", false,-1, 63,0);
        tracep->declBit(c+51,"top i0 arvalid", false,-1);
        tracep->declBit(c+52,"top i0 arready", false,-1);
        tracep->declBus(c+654,"top i0 araddr", false,-1, 31,0);
        tracep->declQuad(c+53,"top i0 rdata", false,-1, 63,0);
        tracep->declBus(c+55,"top i0 rresp", false,-1, 1,0);
        tracep->declBit(c+56,"top i0 rvalid", false,-1);
        tracep->declBit(c+57,"top i0 rready", false,-1);
        tracep->declBit(c+58,"top i0 rvalid_rready", false,-1);
        tracep->declQuad(c+59,"top i0 r_rdata", false,-1, 63,0);
        tracep->declBus(c+665,"top i0 READ_IDLE", false,-1, 2,0);
        tracep->declBus(c+666,"top i0 READ_ARREADY", false,-1, 2,0);
        tracep->declBus(c+667,"top i0 READ_FINISH", false,-1, 2,0);
        tracep->declBus(c+61,"top i0 state", false,-1, 2,0);
        tracep->declBus(c+668,"top i0 finish WIDTH", false,-1, 31,0);
        tracep->declBus(c+669,"top i0 finish RESET_VAL", false,-1, 0,0);
        tracep->declBit(c+633,"top i0 finish clk", false,-1);
        tracep->declBit(c+634,"top i0 finish rst", false,-1);
        tracep->declBus(c+643,"top i0 finish din", false,-1, 0,0);
        tracep->declBus(c+642,"top i0 finish dout", false,-1, 0,0);
        tracep->declBit(c+664,"top i0 finish wen", false,-1);
        tracep->declBus(c+670,"top i0 mux4 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+671,"top i0 mux4 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+672,"top i0 mux4 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+49,"top i0 mux4 out", false,-1, 63,0);
        tracep->declBus(c+27,"top i0 mux4 key", false,-1, 1,0);
        tracep->declArray(c+62,"top i0 mux4 lut", false,-1, 263,0);
        tracep->declBus(c+670,"top i0 mux4 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+671,"top i0 mux4 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+672,"top i0 mux4 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+673,"top i0 mux4 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+49,"top i0 mux4 i0 out", false,-1, 63,0);
        tracep->declBus(c+27,"top i0 mux4 i0 key", false,-1, 1,0);
        tracep->declQuad(c+674,"top i0 mux4 i0 default_out", false,-1, 63,0);
        tracep->declArray(c+62,"top i0 mux4 i0 lut", false,-1, 263,0);
        tracep->declBus(c+676,"top i0 mux4 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declArray(c+71+i*3,"top i0 mux4 i0 pair_list", true,(i+0), 65,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+83+i*1,"top i0 mux4 i0 key_list", true,(i+0), 1,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declQuad(c+87+i*2,"top i0 mux4 i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+95,"top i0 mux4 i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+97,"top i0 mux4 i0 hit", false,-1);
        tracep->declBus(c+98,"top i0 mux4 i0 i", false,-1, 31,0);
        tracep->declBus(c+671,"top i0 mux5 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+668,"top i0 mux5 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+672,"top i0 mux5 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+640,"top i0 mux5 out", false,-1, 63,0);
        tracep->declBus(c+643,"top i0 mux5 key", false,-1, 0,0);
        tracep->declArray(c+99,"top i0 mux5 lut", false,-1, 129,0);
        tracep->declBus(c+671,"top i0 mux5 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+668,"top i0 mux5 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+672,"top i0 mux5 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+673,"top i0 mux5 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+640,"top i0 mux5 i0 out", false,-1, 63,0);
        tracep->declBus(c+643,"top i0 mux5 i0 key", false,-1, 0,0);
        tracep->declQuad(c+674,"top i0 mux5 i0 default_out", false,-1, 63,0);
        tracep->declArray(c+99,"top i0 mux5 i0 lut", false,-1, 129,0);
        tracep->declBus(c+677,"top i0 mux5 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declArray(c+104+i*3,"top i0 mux5 i0 pair_list", true,(i+0), 64,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+110+i*1,"top i0 mux5 i0 key_list", true,(i+0), 0,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+112+i*2,"top i0 mux5 i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+116,"top i0 mux5 i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+118,"top i0 mux5 i0 hit", false,-1);
        tracep->declBus(c+119,"top i0 mux5 i0 i", false,-1, 31,0);
        tracep->declBus(c+672,"top i0 i0 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+678,"top i0 i0 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+633,"top i0 i0 clk", false,-1);
        tracep->declBit(c+634,"top i0 i0 rst", false,-1);
        tracep->declQuad(c+640,"top i0 i0 din", false,-1, 63,0);
        tracep->declQuad(c+636,"top i0 i0 dout", false,-1, 63,0);
        tracep->declBit(c+664,"top i0 i0 wen", false,-1);
        tracep->declBus(c+680,"top i0 mux0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+680,"top i0 mux0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+668,"top i0 mux0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+51,"top i0 mux0 out", false,-1, 0,0);
        tracep->declBus(c+61,"top i0 mux0 key", false,-1, 2,0);
        tracep->declBus(c+681,"top i0 mux0 lut", false,-1, 11,0);
        tracep->declBus(c+680,"top i0 mux0 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+680,"top i0 mux0 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+668,"top i0 mux0 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+673,"top i0 mux0 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+51,"top i0 mux0 i0 out", false,-1, 0,0);
        tracep->declBus(c+61,"top i0 mux0 i0 key", false,-1, 2,0);
        tracep->declBus(c+682,"top i0 mux0 i0 default_out", false,-1, 0,0);
        tracep->declBus(c+681,"top i0 mux0 i0 lut", false,-1, 11,0);
        tracep->declBus(c+670,"top i0 mux0 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+1+i*1,"top i0 mux0 i0 pair_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+4+i*1,"top i0 mux0 i0 key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+7+i*1,"top i0 mux0 i0 data_list", true,(i+0), 0,0);}}
        tracep->declBus(c+120,"top i0 mux0 i0 lut_out", false,-1, 0,0);
        tracep->declBit(c+121,"top i0 mux0 i0 hit", false,-1);
        tracep->declBus(c+122,"top i0 mux0 i0 i", false,-1, 31,0);
        tracep->declBus(c+680,"top i0 mux1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+680,"top i0 mux1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+668,"top i0 mux1 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+57,"top i0 mux1 out", false,-1, 0,0);
        tracep->declBus(c+61,"top i0 mux1 key", false,-1, 2,0);
        tracep->declBus(c+683,"top i0 mux1 lut", false,-1, 11,0);
        tracep->declBus(c+680,"top i0 mux1 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+680,"top i0 mux1 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+668,"top i0 mux1 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+673,"top i0 mux1 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+57,"top i0 mux1 i0 out", false,-1, 0,0);
        tracep->declBus(c+61,"top i0 mux1 i0 key", false,-1, 2,0);
        tracep->declBus(c+682,"top i0 mux1 i0 default_out", false,-1, 0,0);
        tracep->declBus(c+683,"top i0 mux1 i0 lut", false,-1, 11,0);
        tracep->declBus(c+670,"top i0 mux1 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+10+i*1,"top i0 mux1 i0 pair_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+13+i*1,"top i0 mux1 i0 key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+16+i*1,"top i0 mux1 i0 data_list", true,(i+0), 0,0);}}
        tracep->declBus(c+123,"top i0 mux1 i0 lut_out", false,-1, 0,0);
        tracep->declBit(c+124,"top i0 mux1 i0 hit", false,-1);
        tracep->declBus(c+125,"top i0 mux1 i0 i", false,-1, 31,0);
        tracep->declBit(c+633,"top i0 axi_lite_s0 clk", false,-1);
        tracep->declBit(c+634,"top i0 axi_lite_s0 rst", false,-1);
        tracep->declBus(c+654,"top i0 axi_lite_s0 araddr", false,-1, 31,0);
        tracep->declBit(c+51,"top i0 axi_lite_s0 arvalid", false,-1);
        tracep->declBit(c+52,"top i0 axi_lite_s0 arready", false,-1);
        tracep->declQuad(c+53,"top i0 axi_lite_s0 rdata", false,-1, 63,0);
        tracep->declBus(c+55,"top i0 axi_lite_s0 rresp", false,-1, 1,0);
        tracep->declBit(c+56,"top i0 axi_lite_s0 rvalid", false,-1);
        tracep->declBit(c+57,"top i0 axi_lite_s0 rready", false,-1);
        tracep->declBus(c+126,"top i0 axi_lite_s0 r_araddr", false,-1, 31,0);
        tracep->declBus(c+665,"top i0 axi_lite_s0 READ_IDLE", false,-1, 2,0);
        tracep->declBus(c+666,"top i0 axi_lite_s0 READ_ARVALID", false,-1, 2,0);
        tracep->declBus(c+667,"top i0 axi_lite_s0 READ_FINISH", false,-1, 2,0);
        tracep->declBus(c+127,"top i0 axi_lite_s0 state", false,-1, 2,0);
        tracep->declBus(c+671,"top i0 axi_lite_s0 mux0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+680,"top i0 axi_lite_s0 mux0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+668,"top i0 axi_lite_s0 mux0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+52,"top i0 axi_lite_s0 mux0 out", false,-1, 0,0);
        tracep->declBus(c+127,"top i0 axi_lite_s0 mux0 key", false,-1, 2,0);
        tracep->declBus(c+684,"top i0 axi_lite_s0 mux0 lut", false,-1, 7,0);
        tracep->declBus(c+671,"top i0 axi_lite_s0 mux0 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+680,"top i0 axi_lite_s0 mux0 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+668,"top i0 axi_lite_s0 mux0 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+673,"top i0 axi_lite_s0 mux0 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+52,"top i0 axi_lite_s0 mux0 i0 out", false,-1, 0,0);
        tracep->declBus(c+127,"top i0 axi_lite_s0 mux0 i0 key", false,-1, 2,0);
        tracep->declBus(c+682,"top i0 axi_lite_s0 mux0 i0 default_out", false,-1, 0,0);
        tracep->declBus(c+684,"top i0 axi_lite_s0 mux0 i0 lut", false,-1, 7,0);
        tracep->declBus(c+670,"top i0 axi_lite_s0 mux0 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+19+i*1,"top i0 axi_lite_s0 mux0 i0 pair_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+21+i*1,"top i0 axi_lite_s0 mux0 i0 key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+23+i*1,"top i0 axi_lite_s0 mux0 i0 data_list", true,(i+0), 0,0);}}
        tracep->declBus(c+128,"top i0 axi_lite_s0 mux0 i0 lut_out", false,-1, 0,0);
        tracep->declBit(c+129,"top i0 axi_lite_s0 mux0 i0 hit", false,-1);
        tracep->declBus(c+130,"top i0 axi_lite_s0 mux0 i0 i", false,-1, 31,0);
        tracep->declBus(c+635,"top id_0 inst", false,-1, 31,0);
        tracep->declBus(c+646,"top id_0 rs1", false,-1, 4,0);
        tracep->declBus(c+647,"top id_0 rs2", false,-1, 4,0);
        tracep->declBus(c+648,"top id_0 rd", false,-1, 4,0);
        tracep->declQuad(c+28,"top id_0 imm", false,-1, 63,0);
        tracep->declBus(c+32,"top id_0 op_d", false,-1, 11,0);
        tracep->declBus(c+33,"top id_0 fu_7_d", false,-1, 4,0);
        tracep->declBus(c+649,"top id_0 fu_3_d", false,-1, 7,0);
        tracep->declBus(c+35,"top id_0 e_inst", false,-1, 2,0);
        tracep->declBus(c+34,"top id_0 c_raddr", false,-1, 1,0);
        tracep->declBus(c+34,"top id_0 c_waddr", false,-1, 1,0);
        tracep->declBus(c+655,"top id_0 op", false,-1, 6,0);
        tracep->declBus(c+656,"top id_0 fu_3", false,-1, 2,0);
        tracep->declBus(c+657,"top id_0 fu_7", false,-1, 6,0);
        tracep->declQuad(c+131,"top id_0 immi", false,-1, 63,0);
        tracep->declQuad(c+658,"top id_0 imms", false,-1, 63,0);
        tracep->declQuad(c+660,"top id_0 immb", false,-1, 63,0);
        tracep->declQuad(c+133,"top id_0 immu", false,-1, 63,0);
        tracep->declQuad(c+662,"top id_0 immj", false,-1, 63,0);
        tracep->declBus(c+680,"top id_0 de_3_8 LEN", false,-1, 31,0);
        tracep->declBus(c+685,"top id_0 de_3_8 OLEN", false,-1, 31,0);
        tracep->declBus(c+656,"top id_0 de_3_8 sig", false,-1, 2,0);
        tracep->declBus(c+649,"top id_0 de_3_8 o_h", false,-1, 7,0);
        tracep->declBus(c+686,"top id_0 mux0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+687,"top id_0 mux0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+672,"top id_0 mux0 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+28,"top id_0 mux0 out", false,-1, 63,0);
        tracep->declBus(c+32,"top id_0 mux0 key", false,-1, 11,0);
        tracep->declArray(c+135,"top id_0 mux0 lut", false,-1, 759,0);
        tracep->declBus(c+686,"top id_0 mux0 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+687,"top id_0 mux0 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+672,"top id_0 mux0 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+673,"top id_0 mux0 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+28,"top id_0 mux0 i0 out", false,-1, 63,0);
        tracep->declBus(c+32,"top id_0 mux0 i0 key", false,-1, 11,0);
        tracep->declQuad(c+674,"top id_0 mux0 i0 default_out", false,-1, 63,0);
        tracep->declArray(c+135,"top id_0 mux0 i0 lut", false,-1, 759,0);
        tracep->declBus(c+688,"top id_0 mux0 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<10; i++) {
                tracep->declArray(c+159+i*3,"top id_0 mux0 i0 pair_list", true,(i+0), 75,0);}}
        {int i; for (i=0; i<10; i++) {
                tracep->declBus(c+189+i*1,"top id_0 mux0 i0 key_list", true,(i+0), 11,0);}}
        {int i; for (i=0; i<10; i++) {
                tracep->declQuad(c+199+i*2,"top id_0 mux0 i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+219,"top id_0 mux0 i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+221,"top id_0 mux0 i0 hit", false,-1);
        tracep->declBus(c+222,"top id_0 mux0 i0 i", false,-1, 31,0);
        tracep->declBus(c+32,"top control_0 op_d", false,-1, 11,0);
        tracep->declBus(c+33,"top control_0 fu_7_d", false,-1, 4,0);
        tracep->declBus(c+649,"top control_0 fu_3_d", false,-1, 7,0);
        tracep->declBus(c+36,"top control_0 sel_alu_src1", false,-1, 3,0);
        tracep->declBus(c+37,"top control_0 sel_alu_src2", false,-1, 2,0);
        tracep->declBus(c+38,"top control_0 alu_control", false,-1, 16,0);
        tracep->declBit(c+650,"top control_0 rf_wen", false,-1);
        tracep->declBus(c+39,"top control_0 sel_rf_res", false,-1, 2,0);
        tracep->declBit(c+664,"top control_0 data_ram_en", false,-1);
        tracep->declBit(c+651,"top control_0 data_ram_wen", false,-1);
        tracep->declBus(c+44,"top control_0 wmask", false,-1, 7,0);
        tracep->declBus(c+40,"top control_0 alu_equal", false,-1, 2,0);
        tracep->declBus(c+27,"top control_0 sel_nextpc", false,-1, 1,0);
        tracep->declBus(c+41,"top control_0 l_choose", false,-1, 6,0);
        tracep->declBit(c+639,"top control_0 not_have", false,-1);
        tracep->declBit(c+42,"top control_0 w_choose", false,-1);
        tracep->declBit(c+43,"top control_0 c_wchoose", false,-1);
        tracep->declBit(c+652,"top control_0 c_wen", false,-1);
        tracep->declBus(c+35,"top control_0 e_inst", false,-1, 2,0);
        tracep->declBit(c+643,"top control_0 inst_update", false,-1);
        tracep->declBit(c+653,"top control_0 c_wen1_2", false,-1);
        tracep->declBit(c+223,"top control_0 addi", false,-1);
        tracep->declBit(c+224,"top control_0 csrrw", false,-1);
        tracep->declBit(c+43,"top control_0 csrrs", false,-1);
        tracep->declBit(c+225,"top control_0 andi", false,-1);
        tracep->declBit(c+226,"top control_0 xori", false,-1);
        tracep->declBit(c+227,"top control_0 ori", false,-1);
        tracep->declBit(c+228,"top control_0 sll", false,-1);
        tracep->declBit(c+229,"top control_0 srl", false,-1);
        tracep->declBit(c+230,"top control_0 sra", false,-1);
        tracep->declBit(c+231,"top control_0 sllw", false,-1);
        tracep->declBit(c+232,"top control_0 srlw", false,-1);
        tracep->declBit(c+233,"top control_0 sraw", false,-1);
        tracep->declBit(c+234,"top control_0 addiw", false,-1);
        tracep->declBit(c+235,"top control_0 slliw", false,-1);
        tracep->declBit(c+236,"top control_0 srliw", false,-1);
        tracep->declBit(c+237,"top control_0 sraiw", false,-1);
        tracep->declBit(c+238,"top control_0 auipc", false,-1);
        tracep->declBit(c+239,"top control_0 lui", false,-1);
        tracep->declBit(c+240,"top control_0 jal", false,-1);
        tracep->declBit(c+241,"top control_0 jalr", false,-1);
        tracep->declBit(c+242,"top control_0 sd", false,-1);
        tracep->declBit(c+243,"top control_0 sh", false,-1);
        tracep->declBit(c+244,"top control_0 sw", false,-1);
        tracep->declBit(c+245,"top control_0 sb", false,-1);
        tracep->declBit(c+246,"top control_0 lw", false,-1);
        tracep->declBit(c+247,"top control_0 lwu", false,-1);
        tracep->declBit(c+248,"top control_0 lh", false,-1);
        tracep->declBit(c+249,"top control_0 lhu", false,-1);
        tracep->declBit(c+250,"top control_0 lb", false,-1);
        tracep->declBit(c+251,"top control_0 lbu", false,-1);
        tracep->declBit(c+252,"top control_0 ld", false,-1);
        tracep->declBit(c+253,"top control_0 addw", false,-1);
        tracep->declBit(c+254,"top control_0 subw", false,-1);
        tracep->declBit(c+255,"top control_0 mulw", false,-1);
        tracep->declBit(c+256,"top control_0 divw", false,-1);
        tracep->declBit(c+257,"top control_0 divuw", false,-1);
        tracep->declBit(c+258,"top control_0 remw", false,-1);
        tracep->declBit(c+259,"top control_0 remuw", false,-1);
        tracep->declBit(c+260,"top control_0 divu", false,-1);
        tracep->declBit(c+261,"top control_0 div", false,-1);
        tracep->declBit(c+262,"top control_0 rem", false,-1);
        tracep->declBit(c+263,"top control_0 remu", false,-1);
        tracep->declBit(c+264,"top control_0 Add", false,-1);
        tracep->declBit(c+265,"top control_0 Mul", false,-1);
        tracep->declBit(c+266,"top control_0 And", false,-1);
        tracep->declBit(c+267,"top control_0 Xor", false,-1);
        tracep->declBit(c+268,"top control_0 Or", false,-1);
        tracep->declBit(c+269,"top control_0 sltu", false,-1);
        tracep->declBit(c+270,"top control_0 slt", false,-1);
        tracep->declBit(c+271,"top control_0 sub", false,-1);
        tracep->declBit(c+272,"top control_0 sltiu", false,-1);
        tracep->declBit(c+273,"top control_0 srai", false,-1);
        tracep->declBit(c+274,"top control_0 slli", false,-1);
        tracep->declBit(c+275,"top control_0 srli", false,-1);
        tracep->declBit(c+276,"top control_0 beq", false,-1);
        tracep->declBit(c+277,"top control_0 bne", false,-1);
        tracep->declBit(c+278,"top control_0 bge", false,-1);
        tracep->declBit(c+279,"top control_0 bgeu", false,-1);
        tracep->declBit(c+280,"top control_0 bltu", false,-1);
        tracep->declBit(c+281,"top control_0 blt", false,-1);
        tracep->declBit(c+633,"top exe_0 clk", false,-1);
        tracep->declBit(c+634,"top exe_0 rst", false,-1);
        tracep->declQuad(c+28,"top exe_0 imm", false,-1, 63,0);
        tracep->declBus(c+646,"top exe_0 rs1", false,-1, 4,0);
        tracep->declBus(c+647,"top exe_0 rs2", false,-1, 4,0);
        tracep->declBus(c+648,"top exe_0 rd", false,-1, 4,0);
        tracep->declBus(c+36,"top exe_0 sel_alu_src1", false,-1, 3,0);
        tracep->declBus(c+37,"top exe_0 sel_alu_src2", false,-1, 2,0);
        tracep->declBus(c+38,"top exe_0 alu_control", false,-1, 16,0);
        tracep->declBit(c+650,"top exe_0 rf_wen", false,-1);
        tracep->declQuad(c+598,"top exe_0 wdata", false,-1, 63,0);
        tracep->declQuad(c+45,"top exe_0 alu_result", false,-1, 63,0);
        tracep->declQuad(c+47,"top exe_0 ram_addr", false,-1, 63,0);
        tracep->declQuad(c+30,"top exe_0 src1", false,-1, 63,0);
        tracep->declBus(c+40,"top exe_0 alu_equal", false,-1, 2,0);
        tracep->declQuad(c+636,"top exe_0 cpupc", false,-1, 63,0);
        tracep->declBit(c+42,"top exe_0 w_choose", false,-1);
        tracep->declQuad(c+644,"top exe_0 src2", false,-1, 63,0);
        tracep->declBit(c+43,"top exe_0 c_wchoose", false,-1);
        tracep->declBit(c+652,"top exe_0 c_wen", false,-1);
        tracep->declBus(c+34,"top exe_0 c_raddr", false,-1, 1,0);
        tracep->declBus(c+34,"top exe_0 c_waddr", false,-1, 1,0);
        tracep->declQuad(c+25,"top exe_0 c_rdata", false,-1, 63,0);
        tracep->declBus(c+35,"top exe_0 e_inst", false,-1, 2,0);
        tracep->declBit(c+653,"top exe_0 c_wen1_2", false,-1);
        tracep->declQuad(c+282,"top exe_0 alu_src1", false,-1, 63,0);
        tracep->declQuad(c+284,"top exe_0 alu_src2", false,-1, 63,0);
        tracep->declQuad(c+286,"top exe_0 c_wdata", false,-1, 63,0);
        tracep->declBus(c+670,"top exe_0 mux1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+670,"top exe_0 mux1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+672,"top exe_0 mux1 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+282,"top exe_0 mux1 out", false,-1, 63,0);
        tracep->declBus(c+36,"top exe_0 mux1 key", false,-1, 3,0);
        tracep->declArray(c+288,"top exe_0 mux1 lut", false,-1, 271,0);
        tracep->declBus(c+670,"top exe_0 mux1 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+670,"top exe_0 mux1 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+672,"top exe_0 mux1 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+673,"top exe_0 mux1 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+282,"top exe_0 mux1 i0 out", false,-1, 63,0);
        tracep->declBus(c+36,"top exe_0 mux1 i0 key", false,-1, 3,0);
        tracep->declQuad(c+674,"top exe_0 mux1 i0 default_out", false,-1, 63,0);
        tracep->declArray(c+288,"top exe_0 mux1 i0 lut", false,-1, 271,0);
        tracep->declBus(c+689,"top exe_0 mux1 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declArray(c+297+i*3,"top exe_0 mux1 i0 pair_list", true,(i+0), 67,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+309+i*1,"top exe_0 mux1 i0 key_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declQuad(c+313+i*2,"top exe_0 mux1 i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+321,"top exe_0 mux1 i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+323,"top exe_0 mux1 i0 hit", false,-1);
        tracep->declBus(c+324,"top exe_0 mux1 i0 i", false,-1, 31,0);
        tracep->declBus(c+680,"top exe_0 mux2 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+680,"top exe_0 mux2 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+672,"top exe_0 mux2 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+284,"top exe_0 mux2 out", false,-1, 63,0);
        tracep->declBus(c+37,"top exe_0 mux2 key", false,-1, 2,0);
        tracep->declArray(c+325,"top exe_0 mux2 lut", false,-1, 200,0);
        tracep->declBus(c+680,"top exe_0 mux2 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+680,"top exe_0 mux2 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+672,"top exe_0 mux2 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+673,"top exe_0 mux2 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+284,"top exe_0 mux2 i0 out", false,-1, 63,0);
        tracep->declBus(c+37,"top exe_0 mux2 i0 key", false,-1, 2,0);
        tracep->declQuad(c+674,"top exe_0 mux2 i0 default_out", false,-1, 63,0);
        tracep->declArray(c+325,"top exe_0 mux2 i0 lut", false,-1, 200,0);
        tracep->declBus(c+690,"top exe_0 mux2 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declArray(c+332+i*3,"top exe_0 mux2 i0 pair_list", true,(i+0), 66,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+341+i*1,"top exe_0 mux2 i0 key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declQuad(c+344+i*2,"top exe_0 mux2 i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+350,"top exe_0 mux2 i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+352,"top exe_0 mux2 i0 hit", false,-1);
        tracep->declBus(c+353,"top exe_0 mux2 i0 i", false,-1, 31,0);
        tracep->declBus(c+671,"top exe_0 mux3 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+668,"top exe_0 mux3 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+672,"top exe_0 mux3 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+286,"top exe_0 mux3 out", false,-1, 63,0);
        tracep->declBus(c+43,"top exe_0 mux3 key", false,-1, 0,0);
        tracep->declArray(c+354,"top exe_0 mux3 lut", false,-1, 129,0);
        tracep->declBus(c+671,"top exe_0 mux3 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+668,"top exe_0 mux3 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+672,"top exe_0 mux3 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+673,"top exe_0 mux3 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+286,"top exe_0 mux3 i0 out", false,-1, 63,0);
        tracep->declBus(c+43,"top exe_0 mux3 i0 key", false,-1, 0,0);
        tracep->declQuad(c+674,"top exe_0 mux3 i0 default_out", false,-1, 63,0);
        tracep->declArray(c+354,"top exe_0 mux3 i0 lut", false,-1, 129,0);
        tracep->declBus(c+677,"top exe_0 mux3 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declArray(c+359+i*3,"top exe_0 mux3 i0 pair_list", true,(i+0), 64,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+365+i*1,"top exe_0 mux3 i0 key_list", true,(i+0), 0,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+367+i*2,"top exe_0 mux3 i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+371,"top exe_0 mux3 i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+373,"top exe_0 mux3 i0 hit", false,-1);
        tracep->declBus(c+374,"top exe_0 mux3 i0 i", false,-1, 31,0);
        tracep->declBus(c+691,"top exe_0 r0 ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+672,"top exe_0 r0 DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+633,"top exe_0 r0 clk", false,-1);
        tracep->declBit(c+634,"top exe_0 r0 rst", false,-1);
        tracep->declBit(c+650,"top exe_0 r0 wen", false,-1);
        tracep->declQuad(c+598,"top exe_0 r0 wdata", false,-1, 63,0);
        tracep->declBus(c+648,"top exe_0 r0 waddr", false,-1, 4,0);
        tracep->declBus(c+646,"top exe_0 r0 raddr1", false,-1, 4,0);
        tracep->declBus(c+647,"top exe_0 r0 raddr2", false,-1, 4,0);
        tracep->declQuad(c+30,"top exe_0 r0 rdata1", false,-1, 63,0);
        tracep->declQuad(c+644,"top exe_0 r0 rdata2", false,-1, 63,0);
        tracep->declBus(c+34,"top exe_0 r0 c_raddr", false,-1, 1,0);
        tracep->declQuad(c+25,"top exe_0 r0 c_rdata", false,-1, 63,0);
        tracep->declQuad(c+286,"top exe_0 r0 c_wdata", false,-1, 63,0);
        tracep->declBus(c+34,"top exe_0 r0 c_waddr", false,-1, 1,0);
        tracep->declBit(c+652,"top exe_0 r0 c_wen", false,-1);
        tracep->declBit(c+653,"top exe_0 r0 c_wen1_2", false,-1);
        tracep->declQuad(c+636,"top exe_0 r0 c_wdata1", false,-1, 63,0);
        tracep->declBus(c+692,"top exe_0 r0 c_waddr1", false,-1, 1,0);
        tracep->declQuad(c+693,"top exe_0 r0 c_wdata2", false,-1, 63,0);
        tracep->declBus(c+695,"top exe_0 r0 c_waddr2", false,-1, 1,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+375+i*2,"top exe_0 r0 rf", true,(i+0), 63,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declQuad(c+439+i*2,"top exe_0 r0 csr", true,(i+0), 63,0);}}
        tracep->declBus(c+447,"top exe_0 r0 i", false,-1, 31,0);
        tracep->declQuad(c+282,"top exe_0 alu2 alu_src1", false,-1, 63,0);
        tracep->declQuad(c+284,"top exe_0 alu2 alu_src2", false,-1, 63,0);
        tracep->declBus(c+38,"top exe_0 alu2 alu_control", false,-1, 16,0);
        tracep->declQuad(c+45,"top exe_0 alu2 alu_result", false,-1, 63,0);
        tracep->declQuad(c+47,"top exe_0 alu2 ram_addr", false,-1, 63,0);
        tracep->declBus(c+40,"top exe_0 alu2 alu_equal", false,-1, 2,0);
        tracep->declBit(c+42,"top exe_0 alu2 w_choose", false,-1);
        tracep->declBit(c+448,"top exe_0 alu2 op_add", false,-1);
        tracep->declBit(c+449,"top exe_0 alu2 op_sub", false,-1);
        tracep->declBit(c+450,"top exe_0 alu2 op_slt", false,-1);
        tracep->declBit(c+451,"top exe_0 alu2 op_sltu", false,-1);
        tracep->declBit(c+452,"top exe_0 alu2 op_and", false,-1);
        tracep->declBit(c+453,"top exe_0 alu2 op_nor", false,-1);
        tracep->declBit(c+454,"top exe_0 alu2 op_or", false,-1);
        tracep->declBit(c+455,"top exe_0 alu2 op_xor", false,-1);
        tracep->declBit(c+456,"top exe_0 alu2 op_sll", false,-1);
        tracep->declBit(c+457,"top exe_0 alu2 op_srl", false,-1);
        tracep->declBit(c+458,"top exe_0 alu2 op_sra", false,-1);
        tracep->declBit(c+459,"top exe_0 alu2 op_lui", false,-1);
        tracep->declBit(c+460,"top exe_0 alu2 op_mul", false,-1);
        tracep->declBit(c+461,"top exe_0 alu2 op_divu", false,-1);
        tracep->declBit(c+462,"top exe_0 alu2 op_div", false,-1);
        tracep->declBit(c+463,"top exe_0 alu2 op_remu", false,-1);
        tracep->declBit(c+464,"top exe_0 alu2 op_rem", false,-1);
        tracep->declQuad(c+47,"top exe_0 alu2 add_sub_result", false,-1, 63,0);
        tracep->declQuad(c+465,"top exe_0 alu2 slt_result", false,-1, 63,0);
        tracep->declQuad(c+467,"top exe_0 alu2 sltu_result", false,-1, 63,0);
        tracep->declQuad(c+469,"top exe_0 alu2 and_result", false,-1, 63,0);
        tracep->declQuad(c+471,"top exe_0 alu2 nor_result", false,-1, 63,0);
        tracep->declQuad(c+473,"top exe_0 alu2 or_result", false,-1, 63,0);
        tracep->declQuad(c+475,"top exe_0 alu2 xor_result", false,-1, 63,0);
        tracep->declQuad(c+477,"top exe_0 alu2 sll_result", false,-1, 63,0);
        tracep->declQuad(c+479,"top exe_0 alu2 srl_result", false,-1, 63,0);
        tracep->declQuad(c+481,"top exe_0 alu2 sra_result", false,-1, 63,0);
        tracep->declQuad(c+483,"top exe_0 alu2 lui_result", false,-1, 63,0);
        tracep->declQuad(c+485,"top exe_0 alu2 mul_result", false,-1, 63,0);
        tracep->declQuad(c+487,"top exe_0 alu2 divu_result", false,-1, 63,0);
        tracep->declQuad(c+489,"top exe_0 alu2 div_result", false,-1, 63,0);
        tracep->declQuad(c+491,"top exe_0 alu2 remu_result", false,-1, 63,0);
        tracep->declQuad(c+493,"top exe_0 alu2 rem_result", false,-1, 63,0);
        tracep->declQuad(c+282,"top exe_0 alu2 adder_a", false,-1, 63,0);
        tracep->declQuad(c+495,"top exe_0 alu2 adder_b", false,-1, 63,0);
        tracep->declBit(c+497,"top exe_0 alu2 adder_cin", false,-1);
        tracep->declQuad(c+47,"top exe_0 alu2 adder_result", false,-1, 63,0);
        tracep->declBit(c+498,"top exe_0 alu2 adder_cout", false,-1);
        tracep->declQuad(c+499,"top exe_0 alu2 alu_result_uw", false,-1, 63,0);
        tracep->declQuad(c+501,"top exe_0 alu2 alu_result_w", false,-1, 63,0);
        tracep->declBus(c+671,"top exe_0 alu2 mux1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+668,"top exe_0 alu2 mux1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+672,"top exe_0 alu2 mux1 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+45,"top exe_0 alu2 mux1 out", false,-1, 63,0);
        tracep->declBus(c+42,"top exe_0 alu2 mux1 key", false,-1, 0,0);
        tracep->declArray(c+503,"top exe_0 alu2 mux1 lut", false,-1, 129,0);
        tracep->declBus(c+671,"top exe_0 alu2 mux1 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+668,"top exe_0 alu2 mux1 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+672,"top exe_0 alu2 mux1 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+673,"top exe_0 alu2 mux1 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+45,"top exe_0 alu2 mux1 i0 out", false,-1, 63,0);
        tracep->declBus(c+42,"top exe_0 alu2 mux1 i0 key", false,-1, 0,0);
        tracep->declQuad(c+674,"top exe_0 alu2 mux1 i0 default_out", false,-1, 63,0);
        tracep->declArray(c+503,"top exe_0 alu2 mux1 i0 lut", false,-1, 129,0);
        tracep->declBus(c+677,"top exe_0 alu2 mux1 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declArray(c+508+i*3,"top exe_0 alu2 mux1 i0 pair_list", true,(i+0), 64,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+514+i*1,"top exe_0 alu2 mux1 i0 key_list", true,(i+0), 0,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+516+i*2,"top exe_0 alu2 mux1 i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+520,"top exe_0 alu2 mux1 i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+522,"top exe_0 alu2 mux1 i0 hit", false,-1);
        tracep->declBus(c+523,"top exe_0 alu2 mux1 i0 i", false,-1, 31,0);
        tracep->declBus(c+672,"top mem0 ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+672,"top mem0 DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+633,"top mem0 clk", false,-1);
        tracep->declBit(c+634,"top mem0 rst", false,-1);
        tracep->declBit(c+664,"top mem0 r_ren", false,-1);
        tracep->declQuad(c+47,"top mem0 r_raddr", false,-1, 63,0);
        tracep->declQuad(c+596,"top mem0 r_rdata", false,-1, 63,0);
        tracep->declQuad(c+47,"top mem0 r_waddr", false,-1, 63,0);
        tracep->declBus(c+44,"top mem0 r_mask", false,-1, 7,0);
        tracep->declBit(c+651,"top mem0 r_wen", false,-1);
        tracep->declQuad(c+644,"top mem0 r_wdata", false,-1, 63,0);
        tracep->declBus(c+41,"top mem0 l_choose", false,-1, 6,0);
        tracep->declQuad(c+524,"top mem0 r_rdata_ld", false,-1, 63,0);
        tracep->declQuad(c+526,"top mem0 r_rdata_lw", false,-1, 63,0);
        tracep->declQuad(c+528,"top mem0 r_rdata_lwu", false,-1, 63,0);
        tracep->declQuad(c+530,"top mem0 r_rdata_lh", false,-1, 63,0);
        tracep->declQuad(c+532,"top mem0 r_rdata_lhu", false,-1, 63,0);
        tracep->declQuad(c+534,"top mem0 r_rdata_lb", false,-1, 63,0);
        tracep->declQuad(c+536,"top mem0 r_rdata_lbu", false,-1, 63,0);
        tracep->declBus(c+696,"top mem0 mux3 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+696,"top mem0 mux3 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+672,"top mem0 mux3 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+596,"top mem0 mux3 out", false,-1, 63,0);
        tracep->declBus(c+41,"top mem0 mux3 key", false,-1, 6,0);
        tracep->declArray(c+538,"top mem0 mux3 lut", false,-1, 496,0);
        tracep->declBus(c+696,"top mem0 mux3 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+696,"top mem0 mux3 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+672,"top mem0 mux3 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+673,"top mem0 mux3 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+596,"top mem0 mux3 i0 out", false,-1, 63,0);
        tracep->declBus(c+41,"top mem0 mux3 i0 key", false,-1, 6,0);
        tracep->declQuad(c+674,"top mem0 mux3 i0 default_out", false,-1, 63,0);
        tracep->declArray(c+538,"top mem0 mux3 i0 lut", false,-1, 496,0);
        tracep->declBus(c+697,"top mem0 mux3 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<7; i++) {
                tracep->declArray(c+554+i*3,"top mem0 mux3 i0 pair_list", true,(i+0), 70,0);}}
        {int i; for (i=0; i<7; i++) {
                tracep->declBus(c+575+i*1,"top mem0 mux3 i0 key_list", true,(i+0), 6,0);}}
        {int i; for (i=0; i<7; i++) {
                tracep->declQuad(c+582+i*2,"top mem0 mux3 i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+600,"top mem0 mux3 i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+602,"top mem0 mux3 i0 hit", false,-1);
        tracep->declBus(c+603,"top mem0 mux3 i0 i", false,-1, 31,0);
        tracep->declQuad(c+596,"top wb0 r_data", false,-1, 63,0);
        tracep->declQuad(c+45,"top wb0 alu_result", false,-1, 63,0);
        tracep->declBus(c+39,"top wb0 sel_rf_res", false,-1, 2,0);
        tracep->declQuad(c+598,"top wb0 wdata", false,-1, 63,0);
        tracep->declQuad(c+25,"top wb0 c_rdata", false,-1, 63,0);
        tracep->declBus(c+680,"top wb0 mux3 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+680,"top wb0 mux3 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+672,"top wb0 mux3 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+598,"top wb0 mux3 out", false,-1, 63,0);
        tracep->declBus(c+39,"top wb0 mux3 key", false,-1, 2,0);
        tracep->declArray(c+604,"top wb0 mux3 lut", false,-1, 200,0);
        tracep->declBus(c+680,"top wb0 mux3 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+680,"top wb0 mux3 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+672,"top wb0 mux3 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+673,"top wb0 mux3 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+598,"top wb0 mux3 i0 out", false,-1, 63,0);
        tracep->declBus(c+39,"top wb0 mux3 i0 key", false,-1, 2,0);
        tracep->declQuad(c+674,"top wb0 mux3 i0 default_out", false,-1, 63,0);
        tracep->declArray(c+604,"top wb0 mux3 i0 lut", false,-1, 200,0);
        tracep->declBus(c+690,"top wb0 mux3 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declArray(c+611+i*3,"top wb0 mux3 i0 pair_list", true,(i+0), 66,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+620+i*1,"top wb0 mux3 i0 key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declQuad(c+623+i*2,"top wb0 mux3 i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+629,"top wb0 mux3 i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+631,"top wb0 mux3 i0 hit", false,-1);
        tracep->declBus(c+632,"top wb0 mux3 i0 i", false,-1, 31,0);
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
        tracep->fullCData(oldp+1,(vlSelf->top__DOT__i0__DOT__mux0__DOT__i0__DOT__pair_list[0]),4);
        tracep->fullCData(oldp+2,(vlSelf->top__DOT__i0__DOT__mux0__DOT__i0__DOT__pair_list[1]),4);
        tracep->fullCData(oldp+3,(vlSelf->top__DOT__i0__DOT__mux0__DOT__i0__DOT__pair_list[2]),4);
        tracep->fullCData(oldp+4,(vlSelf->top__DOT__i0__DOT__mux0__DOT__i0__DOT__key_list[0]),3);
        tracep->fullCData(oldp+5,(vlSelf->top__DOT__i0__DOT__mux0__DOT__i0__DOT__key_list[1]),3);
        tracep->fullCData(oldp+6,(vlSelf->top__DOT__i0__DOT__mux0__DOT__i0__DOT__key_list[2]),3);
        tracep->fullBit(oldp+7,(vlSelf->top__DOT__i0__DOT__mux0__DOT__i0__DOT__data_list[0]));
        tracep->fullBit(oldp+8,(vlSelf->top__DOT__i0__DOT__mux0__DOT__i0__DOT__data_list[1]));
        tracep->fullBit(oldp+9,(vlSelf->top__DOT__i0__DOT__mux0__DOT__i0__DOT__data_list[2]));
        tracep->fullCData(oldp+10,(vlSelf->top__DOT__i0__DOT__mux1__DOT__i0__DOT__pair_list[0]),4);
        tracep->fullCData(oldp+11,(vlSelf->top__DOT__i0__DOT__mux1__DOT__i0__DOT__pair_list[1]),4);
        tracep->fullCData(oldp+12,(vlSelf->top__DOT__i0__DOT__mux1__DOT__i0__DOT__pair_list[2]),4);
        tracep->fullCData(oldp+13,(vlSelf->top__DOT__i0__DOT__mux1__DOT__i0__DOT__key_list[0]),3);
        tracep->fullCData(oldp+14,(vlSelf->top__DOT__i0__DOT__mux1__DOT__i0__DOT__key_list[1]),3);
        tracep->fullCData(oldp+15,(vlSelf->top__DOT__i0__DOT__mux1__DOT__i0__DOT__key_list[2]),3);
        tracep->fullBit(oldp+16,(vlSelf->top__DOT__i0__DOT__mux1__DOT__i0__DOT__data_list[0]));
        tracep->fullBit(oldp+17,(vlSelf->top__DOT__i0__DOT__mux1__DOT__i0__DOT__data_list[1]));
        tracep->fullBit(oldp+18,(vlSelf->top__DOT__i0__DOT__mux1__DOT__i0__DOT__data_list[2]));
        tracep->fullCData(oldp+19,(vlSelf->top__DOT__i0__DOT__axi_lite_s0__DOT__mux0__DOT__i0__DOT__pair_list[0]),4);
        tracep->fullCData(oldp+20,(vlSelf->top__DOT__i0__DOT__axi_lite_s0__DOT__mux0__DOT__i0__DOT__pair_list[1]),4);
        tracep->fullCData(oldp+21,(vlSelf->top__DOT__i0__DOT__axi_lite_s0__DOT__mux0__DOT__i0__DOT__key_list[0]),3);
        tracep->fullCData(oldp+22,(vlSelf->top__DOT__i0__DOT__axi_lite_s0__DOT__mux0__DOT__i0__DOT__key_list[1]),3);
        tracep->fullBit(oldp+23,(vlSelf->top__DOT__i0__DOT__axi_lite_s0__DOT__mux0__DOT__i0__DOT__data_list[0]));
        tracep->fullBit(oldp+24,(vlSelf->top__DOT__i0__DOT__axi_lite_s0__DOT__mux0__DOT__i0__DOT__data_list[1]));
        tracep->fullQData(oldp+25,(vlSelf->top__DOT__c_rdata),64);
        tracep->fullCData(oldp+27,(vlSelf->top__DOT__sel_nextpc),2);
        tracep->fullQData(oldp+28,(vlSelf->top__DOT__imm),64);
        tracep->fullQData(oldp+30,(vlSelf->top__DOT__src1),64);
        tracep->fullSData(oldp+32,(vlSelf->top__DOT__op_d),12);
        tracep->fullCData(oldp+33,(vlSelf->top__DOT__fu_7_d),5);
        tracep->fullCData(oldp+34,(vlSelf->top__DOT__c_raddr),2);
        tracep->fullCData(oldp+35,(vlSelf->top__DOT__e_inst),3);
        tracep->fullCData(oldp+36,(vlSelf->top__DOT__sel_alu_src1),4);
        tracep->fullCData(oldp+37,(vlSelf->top__DOT__sel_alu_src2),3);
        tracep->fullIData(oldp+38,(vlSelf->top__DOT__alu_control),17);
        tracep->fullCData(oldp+39,(vlSelf->top__DOT__sel_rf_res),3);
        tracep->fullCData(oldp+40,(vlSelf->top__DOT__alu_equal),3);
        tracep->fullCData(oldp+41,(vlSelf->top__DOT__l_choose),7);
        tracep->fullBit(oldp+42,(vlSelf->top__DOT__w_choose));
        tracep->fullBit(oldp+43,(vlSelf->top__DOT__control_0__DOT__csrrs));
        tracep->fullCData(oldp+44,(((IData)(vlSelf->top__DOT__control_0__DOT__sb)
                                     ? 1U : ((IData)(vlSelf->top__DOT__control_0__DOT__sh)
                                              ? 3U : 
                                             ((IData)(vlSelf->top__DOT__control_0__DOT__sw)
                                               ? 0xfU
                                               : ((IData)(vlSelf->top__DOT__control_0__DOT__sd)
                                                   ? 0xffU
                                                   : 0U))))),8);
        tracep->fullQData(oldp+45,(vlSelf->top__DOT__alu_result),64);
        tracep->fullQData(oldp+47,(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__adder_result),64);
        tracep->fullQData(oldp+49,(vlSelf->top__DOT__i0__DOT__dnpc_0),64);
        tracep->fullBit(oldp+51,(vlSelf->top__DOT__i0__DOT__arvalid));
        tracep->fullBit(oldp+52,(vlSelf->top__DOT__i0__DOT__arready));
        tracep->fullQData(oldp+53,(vlSelf->top__DOT__i0__DOT__rdata),64);
        tracep->fullCData(oldp+55,(vlSelf->top__DOT__i0__DOT__rresp),2);
        tracep->fullBit(oldp+56,(vlSelf->top__DOT__i0__DOT__rvalid));
        tracep->fullBit(oldp+57,(vlSelf->top__DOT__i0__DOT__rready));
        tracep->fullBit(oldp+58,(((IData)(vlSelf->top__DOT__i0__DOT__rvalid) 
                                  & (IData)(vlSelf->top__DOT__i0__DOT__rready))));
        tracep->fullQData(oldp+59,(vlSelf->top__DOT__i0__DOT__r_rdata),64);
        tracep->fullCData(oldp+61,(vlSelf->top__DOT__i0__DOT__state),3);
        tracep->fullWData(oldp+62,(vlSelf->top__DOT__i0__DOT____Vcellinp__mux4____pinNumber3),264);
        tracep->fullWData(oldp+71,(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__pair_list[0]),66);
        tracep->fullWData(oldp+74,(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__pair_list[1]),66);
        tracep->fullWData(oldp+77,(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__pair_list[2]),66);
        tracep->fullWData(oldp+80,(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__pair_list[3]),66);
        tracep->fullCData(oldp+83,(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__key_list[0]),2);
        tracep->fullCData(oldp+84,(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__key_list[1]),2);
        tracep->fullCData(oldp+85,(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__key_list[2]),2);
        tracep->fullCData(oldp+86,(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__key_list[3]),2);
        tracep->fullQData(oldp+87,(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+89,(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+91,(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+93,(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+95,(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+97,(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__hit));
        tracep->fullIData(oldp+98,(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__i),32);
        tracep->fullWData(oldp+99,(vlSelf->top__DOT__i0__DOT____Vcellinp__mux5____pinNumber3),130);
        tracep->fullWData(oldp+104,(vlSelf->top__DOT__i0__DOT__mux5__DOT__i0__DOT__pair_list[0]),65);
        tracep->fullWData(oldp+107,(vlSelf->top__DOT__i0__DOT__mux5__DOT__i0__DOT__pair_list[1]),65);
        tracep->fullBit(oldp+110,(vlSelf->top__DOT__i0__DOT__mux5__DOT__i0__DOT__key_list[0]));
        tracep->fullBit(oldp+111,(vlSelf->top__DOT__i0__DOT__mux5__DOT__i0__DOT__key_list[1]));
        tracep->fullQData(oldp+112,(vlSelf->top__DOT__i0__DOT__mux5__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+114,(vlSelf->top__DOT__i0__DOT__mux5__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+116,(vlSelf->top__DOT__i0__DOT__mux5__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+118,(vlSelf->top__DOT__i0__DOT__mux5__DOT__i0__DOT__hit));
        tracep->fullIData(oldp+119,(vlSelf->top__DOT__i0__DOT__mux5__DOT__i0__DOT__i),32);
        tracep->fullBit(oldp+120,(vlSelf->top__DOT__i0__DOT__mux0__DOT__i0__DOT__lut_out));
        tracep->fullBit(oldp+121,(vlSelf->top__DOT__i0__DOT__mux0__DOT__i0__DOT__hit));
        tracep->fullIData(oldp+122,(vlSelf->top__DOT__i0__DOT__mux0__DOT__i0__DOT__i),32);
        tracep->fullBit(oldp+123,(vlSelf->top__DOT__i0__DOT__mux1__DOT__i0__DOT__lut_out));
        tracep->fullBit(oldp+124,(vlSelf->top__DOT__i0__DOT__mux1__DOT__i0__DOT__hit));
        tracep->fullIData(oldp+125,(vlSelf->top__DOT__i0__DOT__mux1__DOT__i0__DOT__i),32);
        tracep->fullIData(oldp+126,(vlSelf->top__DOT__i0__DOT__axi_lite_s0__DOT__r_araddr),32);
        tracep->fullCData(oldp+127,(vlSelf->top__DOT__i0__DOT__axi_lite_s0__DOT__state),3);
        tracep->fullBit(oldp+128,(vlSelf->top__DOT__i0__DOT__axi_lite_s0__DOT__mux0__DOT__i0__DOT__lut_out));
        tracep->fullBit(oldp+129,(vlSelf->top__DOT__i0__DOT__axi_lite_s0__DOT__mux0__DOT__i0__DOT__hit));
        tracep->fullIData(oldp+130,(vlSelf->top__DOT__i0__DOT__axi_lite_s0__DOT__mux0__DOT__i0__DOT__i),32);
        tracep->fullQData(oldp+131,(vlSelf->top__DOT__id_0__DOT__immi),64);
        tracep->fullQData(oldp+133,(vlSelf->top__DOT__id_0__DOT__immu),64);
        tracep->fullWData(oldp+135,(vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3),760);
        tracep->fullWData(oldp+159,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[0]),76);
        tracep->fullWData(oldp+162,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[1]),76);
        tracep->fullWData(oldp+165,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[2]),76);
        tracep->fullWData(oldp+168,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[3]),76);
        tracep->fullWData(oldp+171,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[4]),76);
        tracep->fullWData(oldp+174,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[5]),76);
        tracep->fullWData(oldp+177,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[6]),76);
        tracep->fullWData(oldp+180,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[7]),76);
        tracep->fullWData(oldp+183,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[8]),76);
        tracep->fullWData(oldp+186,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[9]),76);
        tracep->fullSData(oldp+189,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list[0]),12);
        tracep->fullSData(oldp+190,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list[1]),12);
        tracep->fullSData(oldp+191,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list[2]),12);
        tracep->fullSData(oldp+192,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list[3]),12);
        tracep->fullSData(oldp+193,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list[4]),12);
        tracep->fullSData(oldp+194,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list[5]),12);
        tracep->fullSData(oldp+195,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list[6]),12);
        tracep->fullSData(oldp+196,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list[7]),12);
        tracep->fullSData(oldp+197,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list[8]),12);
        tracep->fullSData(oldp+198,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list[9]),12);
        tracep->fullQData(oldp+199,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+201,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+203,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+205,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+207,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list[4]),64);
        tracep->fullQData(oldp+209,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list[5]),64);
        tracep->fullQData(oldp+211,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list[6]),64);
        tracep->fullQData(oldp+213,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list[7]),64);
        tracep->fullQData(oldp+215,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list[8]),64);
        tracep->fullQData(oldp+217,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list[9]),64);
        tracep->fullQData(oldp+219,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+221,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__hit));
        tracep->fullIData(oldp+222,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__i),32);
        tracep->fullBit(oldp+223,(vlSelf->top__DOT__control_0__DOT__addi));
        tracep->fullBit(oldp+224,(vlSelf->top__DOT__control_0__DOT__csrrw));
        tracep->fullBit(oldp+225,(vlSelf->top__DOT__control_0__DOT__andi));
        tracep->fullBit(oldp+226,(vlSelf->top__DOT__control_0__DOT__xori));
        tracep->fullBit(oldp+227,(vlSelf->top__DOT__control_0__DOT__ori));
        tracep->fullBit(oldp+228,(vlSelf->top__DOT__control_0__DOT__sll));
        tracep->fullBit(oldp+229,(vlSelf->top__DOT__control_0__DOT__srl));
        tracep->fullBit(oldp+230,(vlSelf->top__DOT__control_0__DOT__sra));
        tracep->fullBit(oldp+231,(vlSelf->top__DOT__control_0__DOT__sllw));
        tracep->fullBit(oldp+232,(vlSelf->top__DOT__control_0__DOT__srlw));
        tracep->fullBit(oldp+233,(vlSelf->top__DOT__control_0__DOT__sraw));
        tracep->fullBit(oldp+234,(vlSelf->top__DOT__control_0__DOT__addiw));
        tracep->fullBit(oldp+235,(vlSelf->top__DOT__control_0__DOT__slliw));
        tracep->fullBit(oldp+236,(vlSelf->top__DOT__control_0__DOT__srliw));
        tracep->fullBit(oldp+237,(vlSelf->top__DOT__control_0__DOT__sraiw));
        tracep->fullBit(oldp+238,((1U & ((IData)(vlSelf->top__DOT__op_d) 
                                         >> 1U))));
        tracep->fullBit(oldp+239,((1U & (IData)(vlSelf->top__DOT__op_d))));
        tracep->fullBit(oldp+240,((1U & ((IData)(vlSelf->top__DOT__op_d) 
                                         >> 2U))));
        tracep->fullBit(oldp+241,(vlSelf->top__DOT__control_0__DOT__jalr));
        tracep->fullBit(oldp+242,(vlSelf->top__DOT__control_0__DOT__sd));
        tracep->fullBit(oldp+243,(vlSelf->top__DOT__control_0__DOT__sh));
        tracep->fullBit(oldp+244,(vlSelf->top__DOT__control_0__DOT__sw));
        tracep->fullBit(oldp+245,(vlSelf->top__DOT__control_0__DOT__sb));
        tracep->fullBit(oldp+246,(vlSelf->top__DOT__control_0__DOT__lw));
        tracep->fullBit(oldp+247,(vlSelf->top__DOT__control_0__DOT__lwu));
        tracep->fullBit(oldp+248,(vlSelf->top__DOT__control_0__DOT__lh));
        tracep->fullBit(oldp+249,(vlSelf->top__DOT__control_0__DOT__lhu));
        tracep->fullBit(oldp+250,(vlSelf->top__DOT__control_0__DOT__lb));
        tracep->fullBit(oldp+251,(vlSelf->top__DOT__control_0__DOT__lbu));
        tracep->fullBit(oldp+252,(vlSelf->top__DOT__control_0__DOT__ld));
        tracep->fullBit(oldp+253,(vlSelf->top__DOT__control_0__DOT__addw));
        tracep->fullBit(oldp+254,(vlSelf->top__DOT__control_0__DOT__subw));
        tracep->fullBit(oldp+255,(vlSelf->top__DOT__control_0__DOT__mulw));
        tracep->fullBit(oldp+256,(vlSelf->top__DOT__control_0__DOT__divw));
        tracep->fullBit(oldp+257,(vlSelf->top__DOT__control_0__DOT__divuw));
        tracep->fullBit(oldp+258,(vlSelf->top__DOT__control_0__DOT__remw));
        tracep->fullBit(oldp+259,(vlSelf->top__DOT__control_0__DOT__remuw));
        tracep->fullBit(oldp+260,(vlSelf->top__DOT__control_0__DOT__divu));
        tracep->fullBit(oldp+261,(vlSelf->top__DOT__control_0__DOT__div));
        tracep->fullBit(oldp+262,(vlSelf->top__DOT__control_0__DOT__rem));
        tracep->fullBit(oldp+263,(vlSelf->top__DOT__control_0__DOT__remu));
        tracep->fullBit(oldp+264,(vlSelf->top__DOT__control_0__DOT__Add));
        tracep->fullBit(oldp+265,(vlSelf->top__DOT__control_0__DOT__Mul));
        tracep->fullBit(oldp+266,(vlSelf->top__DOT__control_0__DOT__And));
        tracep->fullBit(oldp+267,(vlSelf->top__DOT__control_0__DOT__Xor));
        tracep->fullBit(oldp+268,(vlSelf->top__DOT__control_0__DOT__Or));
        tracep->fullBit(oldp+269,(vlSelf->top__DOT__control_0__DOT__sltu));
        tracep->fullBit(oldp+270,(vlSelf->top__DOT__control_0__DOT__slt));
        tracep->fullBit(oldp+271,(vlSelf->top__DOT__control_0__DOT__sub));
        tracep->fullBit(oldp+272,(vlSelf->top__DOT__control_0__DOT__sltiu));
        tracep->fullBit(oldp+273,(vlSelf->top__DOT__control_0__DOT__srai));
        tracep->fullBit(oldp+274,(vlSelf->top__DOT__control_0__DOT__slli));
        tracep->fullBit(oldp+275,(vlSelf->top__DOT__control_0__DOT__srli));
        tracep->fullBit(oldp+276,(vlSelf->top__DOT__control_0__DOT__beq));
        tracep->fullBit(oldp+277,(vlSelf->top__DOT__control_0__DOT__bne));
        tracep->fullBit(oldp+278,(vlSelf->top__DOT__control_0__DOT__bge));
        tracep->fullBit(oldp+279,(vlSelf->top__DOT__control_0__DOT__bgeu));
        tracep->fullBit(oldp+280,(vlSelf->top__DOT__control_0__DOT__bltu));
        tracep->fullBit(oldp+281,(vlSelf->top__DOT__control_0__DOT__blt));
        tracep->fullQData(oldp+282,(vlSelf->top__DOT__exe_0__DOT__alu_src1),64);
        tracep->fullQData(oldp+284,(vlSelf->top__DOT__exe_0__DOT__alu_src2),64);
        tracep->fullQData(oldp+286,(vlSelf->top__DOT__exe_0__DOT__c_wdata),64);
        tracep->fullWData(oldp+288,(vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux1____pinNumber3),272);
        tracep->fullWData(oldp+297,(vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__pair_list[0]),68);
        tracep->fullWData(oldp+300,(vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__pair_list[1]),68);
        tracep->fullWData(oldp+303,(vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__pair_list[2]),68);
        tracep->fullWData(oldp+306,(vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__pair_list[3]),68);
        tracep->fullCData(oldp+309,(vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__key_list[0]),4);
        tracep->fullCData(oldp+310,(vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__key_list[1]),4);
        tracep->fullCData(oldp+311,(vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__key_list[2]),4);
        tracep->fullCData(oldp+312,(vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__key_list[3]),4);
        tracep->fullQData(oldp+313,(vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+315,(vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+317,(vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+319,(vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+321,(vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+323,(vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__hit));
        tracep->fullIData(oldp+324,(vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__i),32);
        tracep->fullWData(oldp+325,(vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux2____pinNumber3),201);
        tracep->fullWData(oldp+332,(vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__pair_list[0]),67);
        tracep->fullWData(oldp+335,(vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__pair_list[1]),67);
        tracep->fullWData(oldp+338,(vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__pair_list[2]),67);
        tracep->fullCData(oldp+341,(vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__key_list[0]),3);
        tracep->fullCData(oldp+342,(vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__key_list[1]),3);
        tracep->fullCData(oldp+343,(vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__key_list[2]),3);
        tracep->fullQData(oldp+344,(vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+346,(vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+348,(vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+350,(vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+352,(vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__hit));
        tracep->fullIData(oldp+353,(vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__i),32);
        tracep->fullWData(oldp+354,(vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux3____pinNumber3),130);
        tracep->fullWData(oldp+359,(vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__pair_list[0]),65);
        tracep->fullWData(oldp+362,(vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__pair_list[1]),65);
        tracep->fullBit(oldp+365,(vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__key_list[0]));
        tracep->fullBit(oldp+366,(vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__key_list[1]));
        tracep->fullQData(oldp+367,(vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+369,(vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+371,(vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+373,(vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__hit));
        tracep->fullIData(oldp+374,(vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__i),32);
        tracep->fullQData(oldp+375,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[0]),64);
        tracep->fullQData(oldp+377,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[1]),64);
        tracep->fullQData(oldp+379,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[2]),64);
        tracep->fullQData(oldp+381,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[3]),64);
        tracep->fullQData(oldp+383,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[4]),64);
        tracep->fullQData(oldp+385,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[5]),64);
        tracep->fullQData(oldp+387,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[6]),64);
        tracep->fullQData(oldp+389,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[7]),64);
        tracep->fullQData(oldp+391,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[8]),64);
        tracep->fullQData(oldp+393,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[9]),64);
        tracep->fullQData(oldp+395,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[10]),64);
        tracep->fullQData(oldp+397,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[11]),64);
        tracep->fullQData(oldp+399,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[12]),64);
        tracep->fullQData(oldp+401,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[13]),64);
        tracep->fullQData(oldp+403,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[14]),64);
        tracep->fullQData(oldp+405,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[15]),64);
        tracep->fullQData(oldp+407,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[16]),64);
        tracep->fullQData(oldp+409,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[17]),64);
        tracep->fullQData(oldp+411,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[18]),64);
        tracep->fullQData(oldp+413,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[19]),64);
        tracep->fullQData(oldp+415,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[20]),64);
        tracep->fullQData(oldp+417,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[21]),64);
        tracep->fullQData(oldp+419,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[22]),64);
        tracep->fullQData(oldp+421,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[23]),64);
        tracep->fullQData(oldp+423,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[24]),64);
        tracep->fullQData(oldp+425,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[25]),64);
        tracep->fullQData(oldp+427,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[26]),64);
        tracep->fullQData(oldp+429,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[27]),64);
        tracep->fullQData(oldp+431,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[28]),64);
        tracep->fullQData(oldp+433,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[29]),64);
        tracep->fullQData(oldp+435,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[30]),64);
        tracep->fullQData(oldp+437,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[31]),64);
        tracep->fullQData(oldp+439,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr[0]),64);
        tracep->fullQData(oldp+441,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr[1]),64);
        tracep->fullQData(oldp+443,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr[2]),64);
        tracep->fullQData(oldp+445,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr[3]),64);
        tracep->fullIData(oldp+447,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__i),32);
        tracep->fullBit(oldp+448,((1U & vlSelf->top__DOT__alu_control)));
        tracep->fullBit(oldp+449,((1U & (vlSelf->top__DOT__alu_control 
                                         >> 1U))));
        tracep->fullBit(oldp+450,((1U & (vlSelf->top__DOT__alu_control 
                                         >> 2U))));
        tracep->fullBit(oldp+451,((1U & (vlSelf->top__DOT__alu_control 
                                         >> 3U))));
        tracep->fullBit(oldp+452,((1U & (vlSelf->top__DOT__alu_control 
                                         >> 4U))));
        tracep->fullBit(oldp+453,((1U & (vlSelf->top__DOT__alu_control 
                                         >> 5U))));
        tracep->fullBit(oldp+454,((1U & (vlSelf->top__DOT__alu_control 
                                         >> 6U))));
        tracep->fullBit(oldp+455,((1U & (vlSelf->top__DOT__alu_control 
                                         >> 7U))));
        tracep->fullBit(oldp+456,((1U & (vlSelf->top__DOT__alu_control 
                                         >> 8U))));
        tracep->fullBit(oldp+457,((1U & (vlSelf->top__DOT__alu_control 
                                         >> 9U))));
        tracep->fullBit(oldp+458,((1U & (vlSelf->top__DOT__alu_control 
                                         >> 0xaU))));
        tracep->fullBit(oldp+459,((1U & (vlSelf->top__DOT__alu_control 
                                         >> 0xbU))));
        tracep->fullBit(oldp+460,((1U & (vlSelf->top__DOT__alu_control 
                                         >> 0xcU))));
        tracep->fullBit(oldp+461,((1U & (vlSelf->top__DOT__alu_control 
                                         >> 0xdU))));
        tracep->fullBit(oldp+462,((1U & (vlSelf->top__DOT__alu_control 
                                         >> 0xeU))));
        tracep->fullBit(oldp+463,((1U & (vlSelf->top__DOT__alu_control 
                                         >> 0xfU))));
        tracep->fullBit(oldp+464,((1U & (vlSelf->top__DOT__alu_control 
                                         >> 0x10U))));
        tracep->fullQData(oldp+465,(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__slt_result),64);
        tracep->fullQData(oldp+467,((QData)((IData)(
                                                    (1U 
                                                     & (~ (IData)(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__adder_cout)))))),64);
        tracep->fullQData(oldp+469,((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                                     & vlSelf->top__DOT__exe_0__DOT__alu_src2)),64);
        tracep->fullQData(oldp+471,((~ vlSelf->top__DOT__exe_0__DOT__alu2__DOT__or_result)),64);
        tracep->fullQData(oldp+473,(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__or_result),64);
        tracep->fullQData(oldp+475,((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                                     ^ vlSelf->top__DOT__exe_0__DOT__alu_src2)),64);
        tracep->fullQData(oldp+477,((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                                     << (0x3fU & (IData)(vlSelf->top__DOT__exe_0__DOT__alu_src2)))),64);
        tracep->fullQData(oldp+479,((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                                     >> (0x3fU & (IData)(vlSelf->top__DOT__exe_0__DOT__alu_src2)))),64);
        tracep->fullQData(oldp+481,(VL_SHIFTRS_QQI(64,64,6, vlSelf->top__DOT__exe_0__DOT__alu_src1, 
                                                   (0x3fU 
                                                    & (IData)(vlSelf->top__DOT__exe_0__DOT__alu_src2)))),64);
        tracep->fullQData(oldp+483,((0xfffffffffffff000ULL 
                                     & vlSelf->top__DOT__exe_0__DOT__alu_src2)),64);
        tracep->fullQData(oldp+485,((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                                     * vlSelf->top__DOT__exe_0__DOT__alu_src2)),64);
        tracep->fullQData(oldp+487,(VL_DIV_QQQ(64, vlSelf->top__DOT__exe_0__DOT__alu_src1, vlSelf->top__DOT__exe_0__DOT__alu_src2)),64);
        tracep->fullQData(oldp+489,(VL_DIVS_QQQ(64, vlSelf->top__DOT__exe_0__DOT__alu_src1, vlSelf->top__DOT__exe_0__DOT__alu_src2)),64);
        tracep->fullQData(oldp+491,(VL_MODDIV_QQQ(64, vlSelf->top__DOT__exe_0__DOT__alu_src1, vlSelf->top__DOT__exe_0__DOT__alu_src2)),64);
        tracep->fullQData(oldp+493,(VL_MODDIVS_QQQ(64, vlSelf->top__DOT__exe_0__DOT__alu_src1, vlSelf->top__DOT__exe_0__DOT__alu_src2)),64);
        tracep->fullQData(oldp+495,(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__adder_b),64);
        tracep->fullBit(oldp+497,(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__adder_cin));
        tracep->fullBit(oldp+498,(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__adder_cout));
        tracep->fullQData(oldp+499,(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__alu_result_uw),64);
        tracep->fullQData(oldp+501,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__exe_0__DOT__alu2__DOT__alu_result_uw 
                                                                             >> 0x1fU))))))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__alu_result_uw)))),64);
        tracep->fullWData(oldp+503,(vlSelf->top__DOT__exe_0__DOT__alu2__DOT____Vcellinp__mux1____pinNumber3),130);
        tracep->fullWData(oldp+508,(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__pair_list[0]),65);
        tracep->fullWData(oldp+511,(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__pair_list[1]),65);
        tracep->fullBit(oldp+514,(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__key_list[0]));
        tracep->fullBit(oldp+515,(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__key_list[1]));
        tracep->fullQData(oldp+516,(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+518,(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+520,(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+522,(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__hit));
        tracep->fullIData(oldp+523,(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__i),32);
        tracep->fullQData(oldp+524,(vlSelf->top__DOT__mem0__DOT__r_rdata_ld),64);
        tracep->fullQData(oldp+526,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__mem0__DOT__r_rdata_ld 
                                                                             >> 0x1fU))))))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__mem0__DOT__r_rdata_ld)))),64);
        tracep->fullQData(oldp+528,((QData)((IData)(vlSelf->top__DOT__mem0__DOT__r_rdata_ld))),64);
        tracep->fullQData(oldp+530,((((- (QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->top__DOT__mem0__DOT__r_rdata_ld 
                                                                     >> 0xfU)))))) 
                                      << 0x10U) | (QData)((IData)(
                                                                  (0xffffU 
                                                                   & (IData)(vlSelf->top__DOT__mem0__DOT__r_rdata_ld)))))),64);
        tracep->fullQData(oldp+532,((QData)((IData)(
                                                    (0xffffU 
                                                     & (IData)(vlSelf->top__DOT__mem0__DOT__r_rdata_ld))))),64);
        tracep->fullQData(oldp+534,((((- (QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->top__DOT__mem0__DOT__r_rdata_ld 
                                                                     >> 7U)))))) 
                                      << 8U) | (QData)((IData)(
                                                               (0xffU 
                                                                & (IData)(vlSelf->top__DOT__mem0__DOT__r_rdata_ld)))))),64);
        tracep->fullQData(oldp+536,((QData)((IData)(
                                                    (0xffU 
                                                     & (IData)(vlSelf->top__DOT__mem0__DOT__r_rdata_ld))))),64);
        tracep->fullWData(oldp+538,(vlSelf->top__DOT__mem0__DOT____Vcellinp__mux3____pinNumber3),497);
        tracep->fullWData(oldp+554,(vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__pair_list[0]),71);
        tracep->fullWData(oldp+557,(vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__pair_list[1]),71);
        tracep->fullWData(oldp+560,(vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__pair_list[2]),71);
        tracep->fullWData(oldp+563,(vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__pair_list[3]),71);
        tracep->fullWData(oldp+566,(vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__pair_list[4]),71);
        tracep->fullWData(oldp+569,(vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__pair_list[5]),71);
        tracep->fullWData(oldp+572,(vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__pair_list[6]),71);
        tracep->fullCData(oldp+575,(vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__key_list[0]),7);
        tracep->fullCData(oldp+576,(vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__key_list[1]),7);
        tracep->fullCData(oldp+577,(vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__key_list[2]),7);
        tracep->fullCData(oldp+578,(vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__key_list[3]),7);
        tracep->fullCData(oldp+579,(vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__key_list[4]),7);
        tracep->fullCData(oldp+580,(vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__key_list[5]),7);
        tracep->fullCData(oldp+581,(vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__key_list[6]),7);
        tracep->fullQData(oldp+582,(vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+584,(vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+586,(vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+588,(vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+590,(vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__data_list[4]),64);
        tracep->fullQData(oldp+592,(vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__data_list[5]),64);
        tracep->fullQData(oldp+594,(vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__data_list[6]),64);
        tracep->fullQData(oldp+596,(vlSelf->top__DOT__ram_data),64);
        tracep->fullQData(oldp+598,(vlSelf->top__DOT__wdata),64);
        tracep->fullQData(oldp+600,(vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+602,(vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__hit));
        tracep->fullIData(oldp+603,(vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__i),32);
        tracep->fullWData(oldp+604,(vlSelf->top__DOT__wb0__DOT____Vcellinp__mux3____pinNumber3),201);
        tracep->fullWData(oldp+611,(vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__pair_list[0]),67);
        tracep->fullWData(oldp+614,(vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__pair_list[1]),67);
        tracep->fullWData(oldp+617,(vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__pair_list[2]),67);
        tracep->fullCData(oldp+620,(vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__key_list[0]),3);
        tracep->fullCData(oldp+621,(vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__key_list[1]),3);
        tracep->fullCData(oldp+622,(vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__key_list[2]),3);
        tracep->fullQData(oldp+623,(vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+625,(vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+627,(vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+629,(vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+631,(vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__hit));
        tracep->fullIData(oldp+632,(vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__i),32);
        tracep->fullBit(oldp+633,(vlSelf->clk));
        tracep->fullBit(oldp+634,(vlSelf->rst));
        tracep->fullIData(oldp+635,(vlSelf->inst),32);
        tracep->fullQData(oldp+636,(vlSelf->cpupc),64);
        tracep->fullBit(oldp+638,(vlSelf->ebreak));
        tracep->fullBit(oldp+639,(vlSelf->not_have));
        tracep->fullQData(oldp+640,(vlSelf->dnpc),64);
        tracep->fullBit(oldp+642,(vlSelf->inst_finish));
        tracep->fullBit(oldp+643,(vlSelf->inst_update));
        tracep->fullQData(oldp+644,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf
                                    [(0x1fU & (vlSelf->inst 
                                               >> 0x14U))]),64);
        tracep->fullCData(oldp+646,((0x1fU & (vlSelf->inst 
                                              >> 0xfU))),5);
        tracep->fullCData(oldp+647,((0x1fU & (vlSelf->inst 
                                              >> 0x14U))),5);
        tracep->fullCData(oldp+648,((0x1fU & (vlSelf->inst 
                                              >> 7U))),5);
        tracep->fullCData(oldp+649,((0xffU & ((IData)(1U) 
                                              << (7U 
                                                  & (vlSelf->inst 
                                                     >> 0xcU))))),8);
        tracep->fullBit(oldp+650,((((((((((((((((((
                                                   ((((((((((((((((((((((((((((((((((IData)(vlSelf->top__DOT__control_0__DOT__Add) 
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
                                     | (IData)(vlSelf->top__DOT__control_0__DOT__remu)) 
                                    | (IData)(vlSelf->top__DOT__control_0__DOT__remuw)) 
                                   & (IData)(vlSelf->inst_update))));
        tracep->fullBit(oldp+651,(((((((IData)(vlSelf->top__DOT__control_0__DOT__sd) 
                                       | (IData)(vlSelf->top__DOT__control_0__DOT__sb)) 
                                      | (IData)(vlSelf->top__DOT__control_0__DOT__sh)) 
                                     | (IData)(vlSelf->top__DOT__control_0__DOT__sw)) 
                                    | (IData)(vlSelf->top__DOT__control_0__DOT__sb)) 
                                   & (IData)(vlSelf->inst_update))));
        tracep->fullBit(oldp+652,((((IData)(vlSelf->top__DOT__control_0__DOT__csrrw) 
                                    | (IData)(vlSelf->top__DOT__control_0__DOT__csrrs)) 
                                   & (IData)(vlSelf->inst_update))));
        tracep->fullBit(oldp+653,(((IData)(vlSelf->inst_update) 
                                   & ((IData)(vlSelf->top__DOT__e_inst) 
                                      >> 1U))));
        tracep->fullIData(oldp+654,((IData)(vlSelf->cpupc)),32);
        tracep->fullCData(oldp+655,((0x7fU & vlSelf->inst)),7);
        tracep->fullCData(oldp+656,((7U & (vlSelf->inst 
                                           >> 0xcU))),3);
        tracep->fullCData(oldp+657,((vlSelf->inst >> 0x19U)),7);
        tracep->fullQData(oldp+658,((((- (QData)((IData)(
                                                         (vlSelf->inst 
                                                          >> 0x1fU)))) 
                                      << 0xcU) | (QData)((IData)(
                                                                 ((0xfe0U 
                                                                   & (vlSelf->inst 
                                                                      >> 0x14U)) 
                                                                  | (0x1fU 
                                                                     & (vlSelf->inst 
                                                                        >> 7U))))))),64);
        tracep->fullQData(oldp+660,((((- (QData)((IData)(
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
                                                                              >> 7U))))))))),64);
        tracep->fullQData(oldp+662,((((- (QData)((IData)(
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
                                                                               >> 0x14U))))))))),64);
        tracep->fullBit(oldp+664,(1U));
        tracep->fullCData(oldp+665,(0U),3);
        tracep->fullCData(oldp+666,(1U),3);
        tracep->fullCData(oldp+667,(2U),3);
        tracep->fullIData(oldp+668,(1U),32);
        tracep->fullBit(oldp+669,(0U));
        tracep->fullIData(oldp+670,(4U),32);
        tracep->fullIData(oldp+671,(2U),32);
        tracep->fullIData(oldp+672,(0x40U),32);
        tracep->fullIData(oldp+673,(0U),32);
        tracep->fullQData(oldp+674,(0ULL),64);
        tracep->fullIData(oldp+676,(0x42U),32);
        tracep->fullIData(oldp+677,(0x41U),32);
        tracep->fullQData(oldp+678,(0x80000000ULL),64);
        tracep->fullIData(oldp+680,(3U),32);
        tracep->fullSData(oldp+681,(0x241U),12);
        tracep->fullBit(oldp+682,(0U));
        tracep->fullSData(oldp+683,(0x340U),12);
        tracep->fullCData(oldp+684,(0x21U),8);
        tracep->fullIData(oldp+685,(8U),32);
        tracep->fullIData(oldp+686,(0xaU),32);
        tracep->fullIData(oldp+687,(0xcU),32);
        tracep->fullIData(oldp+688,(0x4cU),32);
        tracep->fullIData(oldp+689,(0x44U),32);
        tracep->fullIData(oldp+690,(0x43U),32);
        tracep->fullIData(oldp+691,(5U),32);
        tracep->fullCData(oldp+692,(2U),2);
        tracep->fullQData(oldp+693,(0xbULL),64);
        tracep->fullCData(oldp+695,(3U),2);
        tracep->fullIData(oldp+696,(7U),32);
        tracep->fullIData(oldp+697,(0x47U),32);
    }
}
