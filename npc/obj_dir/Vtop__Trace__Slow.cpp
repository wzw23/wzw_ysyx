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
        tracep->declBit(c+674,"clk", false,-1);
        tracep->declBit(c+675,"rst", false,-1);
        tracep->declBus(c+676,"inst", false,-1, 31,0);
        tracep->declQuad(c+677,"cpupc", false,-1, 63,0);
        tracep->declBit(c+679,"ebreak", false,-1);
        tracep->declBit(c+680,"not_have", false,-1);
        tracep->declQuad(c+681,"dnpc", false,-1, 63,0);
        tracep->declBit(c+683,"inst_finish", false,-1);
        tracep->declBit(c+684,"mem_finish", false,-1);
        tracep->declBit(c+685,"inst_update", false,-1);
        tracep->declBit(c+674,"top clk", false,-1);
        tracep->declBit(c+675,"top rst", false,-1);
        tracep->declBus(c+676,"top inst", false,-1, 31,0);
        tracep->declQuad(c+677,"top cpupc", false,-1, 63,0);
        tracep->declBit(c+679,"top ebreak", false,-1);
        tracep->declBit(c+680,"top not_have", false,-1);
        tracep->declQuad(c+681,"top dnpc", false,-1, 63,0);
        tracep->declBit(c+683,"top inst_finish", false,-1);
        tracep->declBit(c+684,"top mem_finish", false,-1);
        tracep->declBit(c+685,"top inst_update", false,-1);
        tracep->declQuad(c+25,"top c_rdata", false,-1, 63,0);
        tracep->declBus(c+27,"top sel_nextpc", false,-1, 1,0);
        tracep->declQuad(c+28,"top imm", false,-1, 63,0);
        tracep->declQuad(c+30,"top src1", false,-1, 63,0);
        tracep->declQuad(c+32,"top src2", false,-1, 63,0);
        tracep->declBus(c+686,"top araddr_0", false,-1, 31,0);
        tracep->declBit(c+34,"top arvalid_0", false,-1);
        tracep->declBit(c+35,"top arready_0", false,-1);
        tracep->declQuad(c+36,"top rdata_0", false,-1, 63,0);
        tracep->declBus(c+38,"top rresp_0", false,-1, 1,0);
        tracep->declBit(c+39,"top rvalid_0", false,-1);
        tracep->declBit(c+40,"top rready_0", false,-1);
        tracep->declBus(c+687,"top rs1", false,-1, 4,0);
        tracep->declBus(c+688,"top rs2", false,-1, 4,0);
        tracep->declBus(c+689,"top rd", false,-1, 4,0);
        tracep->declBus(c+41,"top op_d", false,-1, 11,0);
        tracep->declBus(c+42,"top fu_7_d", false,-1, 4,0);
        tracep->declBus(c+690,"top fu_3_d", false,-1, 7,0);
        tracep->declBus(c+43,"top c_raddr", false,-1, 1,0);
        tracep->declBus(c+43,"top c_waddr", false,-1, 1,0);
        tracep->declBus(c+44,"top e_inst", false,-1, 2,0);
        tracep->declBus(c+45,"top sel_alu_src1", false,-1, 3,0);
        tracep->declBus(c+46,"top sel_alu_src2", false,-1, 2,0);
        tracep->declBus(c+47,"top alu_control", false,-1, 16,0);
        tracep->declBit(c+691,"top rf_wen", false,-1);
        tracep->declBus(c+48,"top sel_rf_res", false,-1, 2,0);
        tracep->declBit(c+704,"top data_ram_en", false,-1);
        tracep->declBit(c+49,"top data_ram_wen", false,-1);
        tracep->declBus(c+50,"top alu_equal", false,-1, 2,0);
        tracep->declBus(c+51,"top l_choose", false,-1, 6,0);
        tracep->declBit(c+52,"top w_choose", false,-1);
        tracep->declBit(c+53,"top c_wchoose", false,-1);
        tracep->declBit(c+692,"top c_wen", false,-1);
        tracep->declBus(c+54,"top wmask", false,-1, 7,0);
        tracep->declBit(c+693,"top c_wen1_2", false,-1);
        tracep->declQuad(c+55,"top alu_result", false,-1, 63,0);
        tracep->declQuad(c+57,"top ram_addr", false,-1, 63,0);
        tracep->declQuad(c+59,"top ram_data", false,-1, 63,0);
        tracep->declQuad(c+61,"top wdata", false,-1, 63,0);
        tracep->declBus(c+63,"top araddr_1", false,-1, 31,0);
        tracep->declBit(c+64,"top arvalid_1", false,-1);
        tracep->declBit(c+65,"top arready_1", false,-1);
        tracep->declQuad(c+66,"top rdata_1", false,-1, 63,0);
        tracep->declBus(c+68,"top rresp_1", false,-1, 1,0);
        tracep->declBit(c+69,"top rvalid_1", false,-1);
        tracep->declBit(c+70,"top rready_1", false,-1);
        tracep->declBus(c+63,"top awaddr_1", false,-1, 31,0);
        tracep->declBit(c+71,"top awvalid_1", false,-1);
        tracep->declBit(c+72,"top awready_1", false,-1);
        tracep->declQuad(c+32,"top wdata_1", false,-1, 63,0);
        tracep->declBus(c+54,"top wstrb_1", false,-1, 7,0);
        tracep->declBit(c+73,"top wvalid_1", false,-1);
        tracep->declBit(c+72,"top wready_1", false,-1);
        tracep->declBus(c+74,"top bresp_1", false,-1, 1,0);
        tracep->declBit(c+75,"top bvalid_1", false,-1);
        tracep->declBit(c+76,"top bready_1", false,-1);
        tracep->declBit(c+674,"top i0 clk", false,-1);
        tracep->declBit(c+675,"top i0 rst", false,-1);
        tracep->declQuad(c+677,"top i0 cpupc", false,-1, 63,0);
        tracep->declBus(c+27,"top i0 sel_nextpc", false,-1, 1,0);
        tracep->declQuad(c+28,"top i0 imm", false,-1, 63,0);
        tracep->declQuad(c+30,"top i0 src1", false,-1, 63,0);
        tracep->declBus(c+676,"top i0 inst", false,-1, 31,0);
        tracep->declQuad(c+681,"top i0 dnpc", false,-1, 63,0);
        tracep->declQuad(c+25,"top i0 c_rdata", false,-1, 63,0);
        tracep->declBit(c+685,"top i0 inst_update", false,-1);
        tracep->declBit(c+684,"top i0 mem_finish", false,-1);
        tracep->declBus(c+686,"top i0 araddr", false,-1, 31,0);
        tracep->declBit(c+34,"top i0 arvalid", false,-1);
        tracep->declBit(c+35,"top i0 arready", false,-1);
        tracep->declQuad(c+36,"top i0 rdata", false,-1, 63,0);
        tracep->declBus(c+38,"top i0 rresp", false,-1, 1,0);
        tracep->declBit(c+39,"top i0 rvalid", false,-1);
        tracep->declBit(c+40,"top i0 rready", false,-1);
        tracep->declQuad(c+77,"top i0 dnpc_0", false,-1, 63,0);
        tracep->declBit(c+79,"top i0 rvalid_rready", false,-1);
        tracep->declQuad(c+80,"top i0 r_rdata", false,-1, 63,0);
        tracep->declBus(c+705,"top i0 READ_IDLE", false,-1, 2,0);
        tracep->declBus(c+706,"top i0 READ_ARREADY", false,-1, 2,0);
        tracep->declBus(c+707,"top i0 READ_FINISH", false,-1, 2,0);
        tracep->declBus(c+82,"top i0 state", false,-1, 2,0);
        tracep->declBus(c+708,"top i0 mux4 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+709,"top i0 mux4 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+710,"top i0 mux4 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+77,"top i0 mux4 out", false,-1, 63,0);
        tracep->declBus(c+27,"top i0 mux4 key", false,-1, 1,0);
        tracep->declArray(c+83,"top i0 mux4 lut", false,-1, 263,0);
        tracep->declBus(c+708,"top i0 mux4 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+709,"top i0 mux4 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+710,"top i0 mux4 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+711,"top i0 mux4 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+77,"top i0 mux4 i0 out", false,-1, 63,0);
        tracep->declBus(c+27,"top i0 mux4 i0 key", false,-1, 1,0);
        tracep->declQuad(c+712,"top i0 mux4 i0 default_out", false,-1, 63,0);
        tracep->declArray(c+83,"top i0 mux4 i0 lut", false,-1, 263,0);
        tracep->declBus(c+714,"top i0 mux4 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declArray(c+92+i*3,"top i0 mux4 i0 pair_list", true,(i+0), 65,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+104+i*1,"top i0 mux4 i0 key_list", true,(i+0), 1,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declQuad(c+108+i*2,"top i0 mux4 i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+116,"top i0 mux4 i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+118,"top i0 mux4 i0 hit", false,-1);
        tracep->declBus(c+119,"top i0 mux4 i0 i", false,-1, 31,0);
        tracep->declBus(c+709,"top i0 mux5 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+715,"top i0 mux5 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+710,"top i0 mux5 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+681,"top i0 mux5 out", false,-1, 63,0);
        tracep->declBus(c+684,"top i0 mux5 key", false,-1, 0,0);
        tracep->declArray(c+120,"top i0 mux5 lut", false,-1, 129,0);
        tracep->declBus(c+709,"top i0 mux5 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+715,"top i0 mux5 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+710,"top i0 mux5 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+711,"top i0 mux5 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+681,"top i0 mux5 i0 out", false,-1, 63,0);
        tracep->declBus(c+684,"top i0 mux5 i0 key", false,-1, 0,0);
        tracep->declQuad(c+712,"top i0 mux5 i0 default_out", false,-1, 63,0);
        tracep->declArray(c+120,"top i0 mux5 i0 lut", false,-1, 129,0);
        tracep->declBus(c+716,"top i0 mux5 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declArray(c+125+i*3,"top i0 mux5 i0 pair_list", true,(i+0), 64,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+131+i*1,"top i0 mux5 i0 key_list", true,(i+0), 0,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+133+i*2,"top i0 mux5 i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+137,"top i0 mux5 i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+139,"top i0 mux5 i0 hit", false,-1);
        tracep->declBus(c+140,"top i0 mux5 i0 i", false,-1, 31,0);
        tracep->declBus(c+710,"top i0 i0 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+717,"top i0 i0 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+674,"top i0 i0 clk", false,-1);
        tracep->declBit(c+675,"top i0 i0 rst", false,-1);
        tracep->declQuad(c+681,"top i0 i0 din", false,-1, 63,0);
        tracep->declQuad(c+677,"top i0 i0 dout", false,-1, 63,0);
        tracep->declBit(c+704,"top i0 i0 wen", false,-1);
        tracep->declBus(c+719,"top i0 mux1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+719,"top i0 mux1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+715,"top i0 mux1 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+40,"top i0 mux1 out", false,-1, 0,0);
        tracep->declBus(c+82,"top i0 mux1 key", false,-1, 2,0);
        tracep->declBus(c+720,"top i0 mux1 lut", false,-1, 11,0);
        tracep->declBus(c+719,"top i0 mux1 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+719,"top i0 mux1 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+715,"top i0 mux1 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+711,"top i0 mux1 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+40,"top i0 mux1 i0 out", false,-1, 0,0);
        tracep->declBus(c+82,"top i0 mux1 i0 key", false,-1, 2,0);
        tracep->declBus(c+721,"top i0 mux1 i0 default_out", false,-1, 0,0);
        tracep->declBus(c+720,"top i0 mux1 i0 lut", false,-1, 11,0);
        tracep->declBus(c+708,"top i0 mux1 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+1+i*1,"top i0 mux1 i0 pair_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+4+i*1,"top i0 mux1 i0 key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+7+i*1,"top i0 mux1 i0 data_list", true,(i+0), 0,0);}}
        tracep->declBus(c+141,"top i0 mux1 i0 lut_out", false,-1, 0,0);
        tracep->declBit(c+142,"top i0 mux1 i0 hit", false,-1);
        tracep->declBus(c+143,"top i0 mux1 i0 i", false,-1, 31,0);
        tracep->declBus(c+676,"top id_0 inst", false,-1, 31,0);
        tracep->declBus(c+687,"top id_0 rs1", false,-1, 4,0);
        tracep->declBus(c+688,"top id_0 rs2", false,-1, 4,0);
        tracep->declBus(c+689,"top id_0 rd", false,-1, 4,0);
        tracep->declQuad(c+28,"top id_0 imm", false,-1, 63,0);
        tracep->declBus(c+41,"top id_0 op_d", false,-1, 11,0);
        tracep->declBus(c+42,"top id_0 fu_7_d", false,-1, 4,0);
        tracep->declBus(c+690,"top id_0 fu_3_d", false,-1, 7,0);
        tracep->declBus(c+44,"top id_0 e_inst", false,-1, 2,0);
        tracep->declBus(c+43,"top id_0 c_raddr", false,-1, 1,0);
        tracep->declBus(c+43,"top id_0 c_waddr", false,-1, 1,0);
        tracep->declBus(c+694,"top id_0 op", false,-1, 6,0);
        tracep->declBus(c+695,"top id_0 fu_3", false,-1, 2,0);
        tracep->declBus(c+696,"top id_0 fu_7", false,-1, 6,0);
        tracep->declQuad(c+144,"top id_0 immi", false,-1, 63,0);
        tracep->declQuad(c+697,"top id_0 imms", false,-1, 63,0);
        tracep->declQuad(c+699,"top id_0 immb", false,-1, 63,0);
        tracep->declQuad(c+146,"top id_0 immu", false,-1, 63,0);
        tracep->declQuad(c+701,"top id_0 immj", false,-1, 63,0);
        tracep->declBus(c+719,"top id_0 de_3_8 LEN", false,-1, 31,0);
        tracep->declBus(c+722,"top id_0 de_3_8 OLEN", false,-1, 31,0);
        tracep->declBus(c+695,"top id_0 de_3_8 sig", false,-1, 2,0);
        tracep->declBus(c+690,"top id_0 de_3_8 o_h", false,-1, 7,0);
        tracep->declBus(c+723,"top id_0 mux0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+724,"top id_0 mux0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+710,"top id_0 mux0 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+28,"top id_0 mux0 out", false,-1, 63,0);
        tracep->declBus(c+41,"top id_0 mux0 key", false,-1, 11,0);
        tracep->declArray(c+148,"top id_0 mux0 lut", false,-1, 759,0);
        tracep->declBus(c+723,"top id_0 mux0 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+724,"top id_0 mux0 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+710,"top id_0 mux0 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+711,"top id_0 mux0 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+28,"top id_0 mux0 i0 out", false,-1, 63,0);
        tracep->declBus(c+41,"top id_0 mux0 i0 key", false,-1, 11,0);
        tracep->declQuad(c+712,"top id_0 mux0 i0 default_out", false,-1, 63,0);
        tracep->declArray(c+148,"top id_0 mux0 i0 lut", false,-1, 759,0);
        tracep->declBus(c+725,"top id_0 mux0 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<10; i++) {
                tracep->declArray(c+172+i*3,"top id_0 mux0 i0 pair_list", true,(i+0), 75,0);}}
        {int i; for (i=0; i<10; i++) {
                tracep->declBus(c+202+i*1,"top id_0 mux0 i0 key_list", true,(i+0), 11,0);}}
        {int i; for (i=0; i<10; i++) {
                tracep->declQuad(c+212+i*2,"top id_0 mux0 i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+232,"top id_0 mux0 i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+234,"top id_0 mux0 i0 hit", false,-1);
        tracep->declBus(c+235,"top id_0 mux0 i0 i", false,-1, 31,0);
        tracep->declBus(c+41,"top control_0 op_d", false,-1, 11,0);
        tracep->declBus(c+42,"top control_0 fu_7_d", false,-1, 4,0);
        tracep->declBus(c+690,"top control_0 fu_3_d", false,-1, 7,0);
        tracep->declBus(c+45,"top control_0 sel_alu_src1", false,-1, 3,0);
        tracep->declBus(c+46,"top control_0 sel_alu_src2", false,-1, 2,0);
        tracep->declBus(c+47,"top control_0 alu_control", false,-1, 16,0);
        tracep->declBit(c+691,"top control_0 rf_wen", false,-1);
        tracep->declBus(c+48,"top control_0 sel_rf_res", false,-1, 2,0);
        tracep->declBit(c+704,"top control_0 data_ram_en", false,-1);
        tracep->declBit(c+49,"top control_0 data_ram_wen", false,-1);
        tracep->declBus(c+54,"top control_0 wmask", false,-1, 7,0);
        tracep->declBus(c+50,"top control_0 alu_equal", false,-1, 2,0);
        tracep->declBus(c+27,"top control_0 sel_nextpc", false,-1, 1,0);
        tracep->declBus(c+51,"top control_0 l_choose", false,-1, 6,0);
        tracep->declBit(c+680,"top control_0 not_have", false,-1);
        tracep->declBit(c+52,"top control_0 w_choose", false,-1);
        tracep->declBit(c+53,"top control_0 c_wchoose", false,-1);
        tracep->declBit(c+692,"top control_0 c_wen", false,-1);
        tracep->declBus(c+44,"top control_0 e_inst", false,-1, 2,0);
        tracep->declBit(c+685,"top control_0 inst_update", false,-1);
        tracep->declBit(c+693,"top control_0 c_wen1_2", false,-1);
        tracep->declBit(c+684,"top control_0 mem_finish", false,-1);
        tracep->declBit(c+236,"top control_0 addi", false,-1);
        tracep->declBit(c+237,"top control_0 csrrw", false,-1);
        tracep->declBit(c+53,"top control_0 csrrs", false,-1);
        tracep->declBit(c+238,"top control_0 andi", false,-1);
        tracep->declBit(c+239,"top control_0 xori", false,-1);
        tracep->declBit(c+240,"top control_0 ori", false,-1);
        tracep->declBit(c+241,"top control_0 sll", false,-1);
        tracep->declBit(c+242,"top control_0 srl", false,-1);
        tracep->declBit(c+243,"top control_0 sra", false,-1);
        tracep->declBit(c+244,"top control_0 sllw", false,-1);
        tracep->declBit(c+245,"top control_0 srlw", false,-1);
        tracep->declBit(c+246,"top control_0 sraw", false,-1);
        tracep->declBit(c+247,"top control_0 addiw", false,-1);
        tracep->declBit(c+248,"top control_0 slliw", false,-1);
        tracep->declBit(c+249,"top control_0 srliw", false,-1);
        tracep->declBit(c+250,"top control_0 sraiw", false,-1);
        tracep->declBit(c+251,"top control_0 auipc", false,-1);
        tracep->declBit(c+252,"top control_0 lui", false,-1);
        tracep->declBit(c+253,"top control_0 jal", false,-1);
        tracep->declBit(c+254,"top control_0 jalr", false,-1);
        tracep->declBit(c+255,"top control_0 sd", false,-1);
        tracep->declBit(c+256,"top control_0 sh", false,-1);
        tracep->declBit(c+257,"top control_0 sw", false,-1);
        tracep->declBit(c+258,"top control_0 sb", false,-1);
        tracep->declBit(c+259,"top control_0 lw", false,-1);
        tracep->declBit(c+260,"top control_0 lwu", false,-1);
        tracep->declBit(c+261,"top control_0 lh", false,-1);
        tracep->declBit(c+262,"top control_0 lhu", false,-1);
        tracep->declBit(c+263,"top control_0 lb", false,-1);
        tracep->declBit(c+264,"top control_0 lbu", false,-1);
        tracep->declBit(c+265,"top control_0 ld", false,-1);
        tracep->declBit(c+266,"top control_0 addw", false,-1);
        tracep->declBit(c+267,"top control_0 subw", false,-1);
        tracep->declBit(c+268,"top control_0 mulw", false,-1);
        tracep->declBit(c+269,"top control_0 divw", false,-1);
        tracep->declBit(c+270,"top control_0 divuw", false,-1);
        tracep->declBit(c+271,"top control_0 remw", false,-1);
        tracep->declBit(c+272,"top control_0 remuw", false,-1);
        tracep->declBit(c+273,"top control_0 divu", false,-1);
        tracep->declBit(c+274,"top control_0 div", false,-1);
        tracep->declBit(c+275,"top control_0 rem", false,-1);
        tracep->declBit(c+276,"top control_0 remu", false,-1);
        tracep->declBit(c+277,"top control_0 Add", false,-1);
        tracep->declBit(c+278,"top control_0 Mul", false,-1);
        tracep->declBit(c+279,"top control_0 And", false,-1);
        tracep->declBit(c+280,"top control_0 Xor", false,-1);
        tracep->declBit(c+281,"top control_0 Or", false,-1);
        tracep->declBit(c+282,"top control_0 sltu", false,-1);
        tracep->declBit(c+283,"top control_0 slt", false,-1);
        tracep->declBit(c+284,"top control_0 sub", false,-1);
        tracep->declBit(c+285,"top control_0 sltiu", false,-1);
        tracep->declBit(c+286,"top control_0 srai", false,-1);
        tracep->declBit(c+287,"top control_0 slli", false,-1);
        tracep->declBit(c+288,"top control_0 srli", false,-1);
        tracep->declBit(c+289,"top control_0 beq", false,-1);
        tracep->declBit(c+290,"top control_0 bne", false,-1);
        tracep->declBit(c+291,"top control_0 bge", false,-1);
        tracep->declBit(c+292,"top control_0 bgeu", false,-1);
        tracep->declBit(c+293,"top control_0 bltu", false,-1);
        tracep->declBit(c+294,"top control_0 blt", false,-1);
        tracep->declBit(c+674,"top exe_0 clk", false,-1);
        tracep->declBit(c+675,"top exe_0 rst", false,-1);
        tracep->declQuad(c+28,"top exe_0 imm", false,-1, 63,0);
        tracep->declBus(c+687,"top exe_0 rs1", false,-1, 4,0);
        tracep->declBus(c+688,"top exe_0 rs2", false,-1, 4,0);
        tracep->declBus(c+689,"top exe_0 rd", false,-1, 4,0);
        tracep->declBus(c+45,"top exe_0 sel_alu_src1", false,-1, 3,0);
        tracep->declBus(c+46,"top exe_0 sel_alu_src2", false,-1, 2,0);
        tracep->declBus(c+47,"top exe_0 alu_control", false,-1, 16,0);
        tracep->declBit(c+691,"top exe_0 rf_wen", false,-1);
        tracep->declQuad(c+61,"top exe_0 wdata", false,-1, 63,0);
        tracep->declQuad(c+55,"top exe_0 alu_result", false,-1, 63,0);
        tracep->declQuad(c+57,"top exe_0 ram_addr", false,-1, 63,0);
        tracep->declQuad(c+30,"top exe_0 src1", false,-1, 63,0);
        tracep->declBus(c+50,"top exe_0 alu_equal", false,-1, 2,0);
        tracep->declQuad(c+677,"top exe_0 cpupc", false,-1, 63,0);
        tracep->declBit(c+52,"top exe_0 w_choose", false,-1);
        tracep->declQuad(c+32,"top exe_0 src2", false,-1, 63,0);
        tracep->declBit(c+53,"top exe_0 c_wchoose", false,-1);
        tracep->declBit(c+692,"top exe_0 c_wen", false,-1);
        tracep->declBus(c+43,"top exe_0 c_raddr", false,-1, 1,0);
        tracep->declBus(c+43,"top exe_0 c_waddr", false,-1, 1,0);
        tracep->declQuad(c+25,"top exe_0 c_rdata", false,-1, 63,0);
        tracep->declBus(c+44,"top exe_0 e_inst", false,-1, 2,0);
        tracep->declBit(c+693,"top exe_0 c_wen1_2", false,-1);
        tracep->declQuad(c+295,"top exe_0 alu_src1", false,-1, 63,0);
        tracep->declQuad(c+297,"top exe_0 alu_src2", false,-1, 63,0);
        tracep->declQuad(c+299,"top exe_0 c_wdata", false,-1, 63,0);
        tracep->declBus(c+708,"top exe_0 mux1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+708,"top exe_0 mux1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+710,"top exe_0 mux1 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+295,"top exe_0 mux1 out", false,-1, 63,0);
        tracep->declBus(c+45,"top exe_0 mux1 key", false,-1, 3,0);
        tracep->declArray(c+301,"top exe_0 mux1 lut", false,-1, 271,0);
        tracep->declBus(c+708,"top exe_0 mux1 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+708,"top exe_0 mux1 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+710,"top exe_0 mux1 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+711,"top exe_0 mux1 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+295,"top exe_0 mux1 i0 out", false,-1, 63,0);
        tracep->declBus(c+45,"top exe_0 mux1 i0 key", false,-1, 3,0);
        tracep->declQuad(c+712,"top exe_0 mux1 i0 default_out", false,-1, 63,0);
        tracep->declArray(c+301,"top exe_0 mux1 i0 lut", false,-1, 271,0);
        tracep->declBus(c+726,"top exe_0 mux1 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declArray(c+310+i*3,"top exe_0 mux1 i0 pair_list", true,(i+0), 67,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+322+i*1,"top exe_0 mux1 i0 key_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declQuad(c+326+i*2,"top exe_0 mux1 i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+334,"top exe_0 mux1 i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+336,"top exe_0 mux1 i0 hit", false,-1);
        tracep->declBus(c+337,"top exe_0 mux1 i0 i", false,-1, 31,0);
        tracep->declBus(c+719,"top exe_0 mux2 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+719,"top exe_0 mux2 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+710,"top exe_0 mux2 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+297,"top exe_0 mux2 out", false,-1, 63,0);
        tracep->declBus(c+46,"top exe_0 mux2 key", false,-1, 2,0);
        tracep->declArray(c+338,"top exe_0 mux2 lut", false,-1, 200,0);
        tracep->declBus(c+719,"top exe_0 mux2 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+719,"top exe_0 mux2 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+710,"top exe_0 mux2 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+711,"top exe_0 mux2 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+297,"top exe_0 mux2 i0 out", false,-1, 63,0);
        tracep->declBus(c+46,"top exe_0 mux2 i0 key", false,-1, 2,0);
        tracep->declQuad(c+712,"top exe_0 mux2 i0 default_out", false,-1, 63,0);
        tracep->declArray(c+338,"top exe_0 mux2 i0 lut", false,-1, 200,0);
        tracep->declBus(c+727,"top exe_0 mux2 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declArray(c+345+i*3,"top exe_0 mux2 i0 pair_list", true,(i+0), 66,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+354+i*1,"top exe_0 mux2 i0 key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declQuad(c+357+i*2,"top exe_0 mux2 i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+363,"top exe_0 mux2 i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+365,"top exe_0 mux2 i0 hit", false,-1);
        tracep->declBus(c+366,"top exe_0 mux2 i0 i", false,-1, 31,0);
        tracep->declBus(c+709,"top exe_0 mux3 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+715,"top exe_0 mux3 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+710,"top exe_0 mux3 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+299,"top exe_0 mux3 out", false,-1, 63,0);
        tracep->declBus(c+53,"top exe_0 mux3 key", false,-1, 0,0);
        tracep->declArray(c+367,"top exe_0 mux3 lut", false,-1, 129,0);
        tracep->declBus(c+709,"top exe_0 mux3 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+715,"top exe_0 mux3 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+710,"top exe_0 mux3 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+711,"top exe_0 mux3 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+299,"top exe_0 mux3 i0 out", false,-1, 63,0);
        tracep->declBus(c+53,"top exe_0 mux3 i0 key", false,-1, 0,0);
        tracep->declQuad(c+712,"top exe_0 mux3 i0 default_out", false,-1, 63,0);
        tracep->declArray(c+367,"top exe_0 mux3 i0 lut", false,-1, 129,0);
        tracep->declBus(c+716,"top exe_0 mux3 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declArray(c+372+i*3,"top exe_0 mux3 i0 pair_list", true,(i+0), 64,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+378+i*1,"top exe_0 mux3 i0 key_list", true,(i+0), 0,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+380+i*2,"top exe_0 mux3 i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+384,"top exe_0 mux3 i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+386,"top exe_0 mux3 i0 hit", false,-1);
        tracep->declBus(c+387,"top exe_0 mux3 i0 i", false,-1, 31,0);
        tracep->declBus(c+728,"top exe_0 r0 ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+710,"top exe_0 r0 DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+674,"top exe_0 r0 clk", false,-1);
        tracep->declBit(c+675,"top exe_0 r0 rst", false,-1);
        tracep->declBit(c+691,"top exe_0 r0 wen", false,-1);
        tracep->declQuad(c+61,"top exe_0 r0 wdata", false,-1, 63,0);
        tracep->declBus(c+689,"top exe_0 r0 waddr", false,-1, 4,0);
        tracep->declBus(c+687,"top exe_0 r0 raddr1", false,-1, 4,0);
        tracep->declBus(c+688,"top exe_0 r0 raddr2", false,-1, 4,0);
        tracep->declQuad(c+30,"top exe_0 r0 rdata1", false,-1, 63,0);
        tracep->declQuad(c+32,"top exe_0 r0 rdata2", false,-1, 63,0);
        tracep->declBus(c+43,"top exe_0 r0 c_raddr", false,-1, 1,0);
        tracep->declQuad(c+25,"top exe_0 r0 c_rdata", false,-1, 63,0);
        tracep->declQuad(c+299,"top exe_0 r0 c_wdata", false,-1, 63,0);
        tracep->declBus(c+43,"top exe_0 r0 c_waddr", false,-1, 1,0);
        tracep->declBit(c+692,"top exe_0 r0 c_wen", false,-1);
        tracep->declBit(c+693,"top exe_0 r0 c_wen1_2", false,-1);
        tracep->declQuad(c+677,"top exe_0 r0 c_wdata1", false,-1, 63,0);
        tracep->declBus(c+729,"top exe_0 r0 c_waddr1", false,-1, 1,0);
        tracep->declQuad(c+730,"top exe_0 r0 c_wdata2", false,-1, 63,0);
        tracep->declBus(c+732,"top exe_0 r0 c_waddr2", false,-1, 1,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+388+i*2,"top exe_0 r0 rf", true,(i+0), 63,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declQuad(c+452+i*2,"top exe_0 r0 csr", true,(i+0), 63,0);}}
        tracep->declBus(c+460,"top exe_0 r0 i", false,-1, 31,0);
        tracep->declQuad(c+295,"top exe_0 alu2 alu_src1", false,-1, 63,0);
        tracep->declQuad(c+297,"top exe_0 alu2 alu_src2", false,-1, 63,0);
        tracep->declBus(c+47,"top exe_0 alu2 alu_control", false,-1, 16,0);
        tracep->declQuad(c+55,"top exe_0 alu2 alu_result", false,-1, 63,0);
        tracep->declQuad(c+57,"top exe_0 alu2 ram_addr", false,-1, 63,0);
        tracep->declBus(c+50,"top exe_0 alu2 alu_equal", false,-1, 2,0);
        tracep->declBit(c+52,"top exe_0 alu2 w_choose", false,-1);
        tracep->declBit(c+461,"top exe_0 alu2 op_add", false,-1);
        tracep->declBit(c+462,"top exe_0 alu2 op_sub", false,-1);
        tracep->declBit(c+463,"top exe_0 alu2 op_slt", false,-1);
        tracep->declBit(c+464,"top exe_0 alu2 op_sltu", false,-1);
        tracep->declBit(c+465,"top exe_0 alu2 op_and", false,-1);
        tracep->declBit(c+466,"top exe_0 alu2 op_nor", false,-1);
        tracep->declBit(c+467,"top exe_0 alu2 op_or", false,-1);
        tracep->declBit(c+468,"top exe_0 alu2 op_xor", false,-1);
        tracep->declBit(c+469,"top exe_0 alu2 op_sll", false,-1);
        tracep->declBit(c+470,"top exe_0 alu2 op_srl", false,-1);
        tracep->declBit(c+471,"top exe_0 alu2 op_sra", false,-1);
        tracep->declBit(c+472,"top exe_0 alu2 op_lui", false,-1);
        tracep->declBit(c+473,"top exe_0 alu2 op_mul", false,-1);
        tracep->declBit(c+474,"top exe_0 alu2 op_divu", false,-1);
        tracep->declBit(c+475,"top exe_0 alu2 op_div", false,-1);
        tracep->declBit(c+476,"top exe_0 alu2 op_remu", false,-1);
        tracep->declBit(c+477,"top exe_0 alu2 op_rem", false,-1);
        tracep->declQuad(c+57,"top exe_0 alu2 add_sub_result", false,-1, 63,0);
        tracep->declQuad(c+478,"top exe_0 alu2 slt_result", false,-1, 63,0);
        tracep->declQuad(c+480,"top exe_0 alu2 sltu_result", false,-1, 63,0);
        tracep->declQuad(c+482,"top exe_0 alu2 and_result", false,-1, 63,0);
        tracep->declQuad(c+484,"top exe_0 alu2 nor_result", false,-1, 63,0);
        tracep->declQuad(c+486,"top exe_0 alu2 or_result", false,-1, 63,0);
        tracep->declQuad(c+488,"top exe_0 alu2 xor_result", false,-1, 63,0);
        tracep->declQuad(c+490,"top exe_0 alu2 sll_result", false,-1, 63,0);
        tracep->declQuad(c+492,"top exe_0 alu2 srl_result", false,-1, 63,0);
        tracep->declQuad(c+494,"top exe_0 alu2 sra_result", false,-1, 63,0);
        tracep->declQuad(c+496,"top exe_0 alu2 lui_result", false,-1, 63,0);
        tracep->declQuad(c+498,"top exe_0 alu2 mul_result", false,-1, 63,0);
        tracep->declQuad(c+500,"top exe_0 alu2 divu_result", false,-1, 63,0);
        tracep->declQuad(c+502,"top exe_0 alu2 div_result", false,-1, 63,0);
        tracep->declQuad(c+504,"top exe_0 alu2 remu_result", false,-1, 63,0);
        tracep->declQuad(c+506,"top exe_0 alu2 rem_result", false,-1, 63,0);
        tracep->declQuad(c+295,"top exe_0 alu2 adder_a", false,-1, 63,0);
        tracep->declQuad(c+508,"top exe_0 alu2 adder_b", false,-1, 63,0);
        tracep->declBit(c+510,"top exe_0 alu2 adder_cin", false,-1);
        tracep->declQuad(c+57,"top exe_0 alu2 adder_result", false,-1, 63,0);
        tracep->declBit(c+511,"top exe_0 alu2 adder_cout", false,-1);
        tracep->declQuad(c+512,"top exe_0 alu2 alu_result_uw", false,-1, 63,0);
        tracep->declQuad(c+514,"top exe_0 alu2 alu_result_w", false,-1, 63,0);
        tracep->declBus(c+709,"top exe_0 alu2 mux1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+715,"top exe_0 alu2 mux1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+710,"top exe_0 alu2 mux1 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+55,"top exe_0 alu2 mux1 out", false,-1, 63,0);
        tracep->declBus(c+52,"top exe_0 alu2 mux1 key", false,-1, 0,0);
        tracep->declArray(c+516,"top exe_0 alu2 mux1 lut", false,-1, 129,0);
        tracep->declBus(c+709,"top exe_0 alu2 mux1 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+715,"top exe_0 alu2 mux1 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+710,"top exe_0 alu2 mux1 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+711,"top exe_0 alu2 mux1 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+55,"top exe_0 alu2 mux1 i0 out", false,-1, 63,0);
        tracep->declBus(c+52,"top exe_0 alu2 mux1 i0 key", false,-1, 0,0);
        tracep->declQuad(c+712,"top exe_0 alu2 mux1 i0 default_out", false,-1, 63,0);
        tracep->declArray(c+516,"top exe_0 alu2 mux1 i0 lut", false,-1, 129,0);
        tracep->declBus(c+716,"top exe_0 alu2 mux1 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declArray(c+521+i*3,"top exe_0 alu2 mux1 i0 pair_list", true,(i+0), 64,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+527+i*1,"top exe_0 alu2 mux1 i0 key_list", true,(i+0), 0,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+529+i*2,"top exe_0 alu2 mux1 i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+533,"top exe_0 alu2 mux1 i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+535,"top exe_0 alu2 mux1 i0 hit", false,-1);
        tracep->declBus(c+536,"top exe_0 alu2 mux1 i0 i", false,-1, 31,0);
        tracep->declBus(c+710,"top mem0 ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+710,"top mem0 DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+674,"top mem0 clk", false,-1);
        tracep->declBit(c+675,"top mem0 rst", false,-1);
        tracep->declBit(c+704,"top mem0 r_ren", false,-1);
        tracep->declQuad(c+57,"top mem0 r_raddr", false,-1, 63,0);
        tracep->declQuad(c+59,"top mem0 r_rdata", false,-1, 63,0);
        tracep->declQuad(c+57,"top mem0 r_waddr", false,-1, 63,0);
        tracep->declBus(c+54,"top mem0 r_mask", false,-1, 7,0);
        tracep->declBit(c+49,"top mem0 r_wen", false,-1);
        tracep->declQuad(c+32,"top mem0 r_wdata", false,-1, 63,0);
        tracep->declBus(c+51,"top mem0 l_choose", false,-1, 6,0);
        tracep->declBit(c+685,"top mem0 inst_update", false,-1);
        tracep->declBit(c+684,"top mem0 mem_finish", false,-1);
        tracep->declBit(c+683,"top mem0 inst_finish", false,-1);
        tracep->declBus(c+63,"top mem0 araddr", false,-1, 31,0);
        tracep->declBit(c+64,"top mem0 arvalid", false,-1);
        tracep->declBit(c+65,"top mem0 arready", false,-1);
        tracep->declQuad(c+66,"top mem0 rdata", false,-1, 63,0);
        tracep->declBus(c+68,"top mem0 rresp", false,-1, 1,0);
        tracep->declBit(c+69,"top mem0 rvalid", false,-1);
        tracep->declBit(c+70,"top mem0 rready", false,-1);
        tracep->declBus(c+63,"top mem0 awaddr", false,-1, 31,0);
        tracep->declBit(c+71,"top mem0 awvalid", false,-1);
        tracep->declBit(c+72,"top mem0 awready", false,-1);
        tracep->declQuad(c+32,"top mem0 wdata", false,-1, 63,0);
        tracep->declBus(c+54,"top mem0 wstrb", false,-1, 7,0);
        tracep->declBit(c+73,"top mem0 wvalid", false,-1);
        tracep->declBit(c+72,"top mem0 wready", false,-1);
        tracep->declBus(c+74,"top mem0 bresp", false,-1, 1,0);
        tracep->declBit(c+75,"top mem0 bvalid", false,-1);
        tracep->declBit(c+76,"top mem0 bready", false,-1);
        tracep->declQuad(c+537,"top mem0 r_rdata_ld", false,-1, 63,0);
        tracep->declQuad(c+539,"top mem0 r_rdata_lw", false,-1, 63,0);
        tracep->declQuad(c+541,"top mem0 r_rdata_lwu", false,-1, 63,0);
        tracep->declQuad(c+543,"top mem0 r_rdata_lh", false,-1, 63,0);
        tracep->declQuad(c+545,"top mem0 r_rdata_lhu", false,-1, 63,0);
        tracep->declQuad(c+547,"top mem0 r_rdata_lb", false,-1, 63,0);
        tracep->declQuad(c+549,"top mem0 r_rdata_lbu", false,-1, 63,0);
        tracep->declQuad(c+537,"top mem0 reg_rdata", false,-1, 63,0);
        tracep->declBus(c+705,"top mem0 READ_IDLE", false,-1, 2,0);
        tracep->declBus(c+706,"top mem0 READ_ARREADY", false,-1, 2,0);
        tracep->declBus(c+707,"top mem0 READ_FINISH", false,-1, 2,0);
        tracep->declBus(c+551,"top mem0 read_state", false,-1, 2,0);
        tracep->declBus(c+552,"top mem0 write_state", false,-1, 2,0);
        tracep->declBus(c+705,"top mem0 WRITE_IDLE", false,-1, 2,0);
        tracep->declBus(c+706,"top mem0 WRITE_AW_WREADY", false,-1, 2,0);
        tracep->declBus(c+707,"top mem0 WRITE_FINISH", false,-1, 2,0);
        tracep->declBus(c+553,"top mem0 mem_state", false,-1, 2,0);
        tracep->declBus(c+705,"top mem0 MEM_BEGIN", false,-1, 2,0);
        tracep->declBus(c+706,"top mem0 MEM_WAIT_WRITE_FINISH", false,-1, 2,0);
        tracep->declBus(c+707,"top mem0 MEM_WAIT_READ_FINISH", false,-1, 2,0);
        tracep->declBus(c+733,"top mem0 MEM_WAIT_ALL", false,-1, 2,0);
        tracep->declBus(c+734,"top mem0 MEM_FINISH", false,-1, 2,0);
        tracep->declBus(c+735,"top mem0 mux3 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+735,"top mem0 mux3 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+710,"top mem0 mux3 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+59,"top mem0 mux3 out", false,-1, 63,0);
        tracep->declBus(c+51,"top mem0 mux3 key", false,-1, 6,0);
        tracep->declArray(c+554,"top mem0 mux3 lut", false,-1, 496,0);
        tracep->declBus(c+735,"top mem0 mux3 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+735,"top mem0 mux3 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+710,"top mem0 mux3 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+711,"top mem0 mux3 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+59,"top mem0 mux3 i0 out", false,-1, 63,0);
        tracep->declBus(c+51,"top mem0 mux3 i0 key", false,-1, 6,0);
        tracep->declQuad(c+712,"top mem0 mux3 i0 default_out", false,-1, 63,0);
        tracep->declArray(c+554,"top mem0 mux3 i0 lut", false,-1, 496,0);
        tracep->declBus(c+736,"top mem0 mux3 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<7; i++) {
                tracep->declArray(c+570+i*3,"top mem0 mux3 i0 pair_list", true,(i+0), 70,0);}}
        {int i; for (i=0; i<7; i++) {
                tracep->declBus(c+591+i*1,"top mem0 mux3 i0 key_list", true,(i+0), 6,0);}}
        {int i; for (i=0; i<7; i++) {
                tracep->declQuad(c+598+i*2,"top mem0 mux3 i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+612,"top mem0 mux3 i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+614,"top mem0 mux3 i0 hit", false,-1);
        tracep->declBus(c+615,"top mem0 mux3 i0 i", false,-1, 31,0);
        tracep->declBus(c+719,"top mem0 mux1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+719,"top mem0 mux1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+715,"top mem0 mux1 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+70,"top mem0 mux1 out", false,-1, 0,0);
        tracep->declBus(c+551,"top mem0 mux1 key", false,-1, 2,0);
        tracep->declBus(c+720,"top mem0 mux1 lut", false,-1, 11,0);
        tracep->declBus(c+719,"top mem0 mux1 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+719,"top mem0 mux1 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+715,"top mem0 mux1 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+711,"top mem0 mux1 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+70,"top mem0 mux1 i0 out", false,-1, 0,0);
        tracep->declBus(c+551,"top mem0 mux1 i0 key", false,-1, 2,0);
        tracep->declBus(c+721,"top mem0 mux1 i0 default_out", false,-1, 0,0);
        tracep->declBus(c+720,"top mem0 mux1 i0 lut", false,-1, 11,0);
        tracep->declBus(c+708,"top mem0 mux1 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+10+i*1,"top mem0 mux1 i0 pair_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+13+i*1,"top mem0 mux1 i0 key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+16+i*1,"top mem0 mux1 i0 data_list", true,(i+0), 0,0);}}
        tracep->declBus(c+616,"top mem0 mux1 i0 lut_out", false,-1, 0,0);
        tracep->declBit(c+617,"top mem0 mux1 i0 hit", false,-1);
        tracep->declBus(c+618,"top mem0 mux1 i0 i", false,-1, 31,0);
        tracep->declBus(c+715,"top mem0 finish WIDTH", false,-1, 31,0);
        tracep->declBus(c+737,"top mem0 finish RESET_VAL", false,-1, 0,0);
        tracep->declBit(c+674,"top mem0 finish clk", false,-1);
        tracep->declBit(c+675,"top mem0 finish rst", false,-1);
        tracep->declBus(c+684,"top mem0 finish din", false,-1, 0,0);
        tracep->declBus(c+683,"top mem0 finish dout", false,-1, 0,0);
        tracep->declBit(c+704,"top mem0 finish wen", false,-1);
        tracep->declQuad(c+59,"top wb0 r_data", false,-1, 63,0);
        tracep->declQuad(c+55,"top wb0 alu_result", false,-1, 63,0);
        tracep->declBus(c+48,"top wb0 sel_rf_res", false,-1, 2,0);
        tracep->declQuad(c+61,"top wb0 wdata", false,-1, 63,0);
        tracep->declQuad(c+25,"top wb0 c_rdata", false,-1, 63,0);
        tracep->declBus(c+719,"top wb0 mux3 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+719,"top wb0 mux3 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+710,"top wb0 mux3 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+61,"top wb0 mux3 out", false,-1, 63,0);
        tracep->declBus(c+48,"top wb0 mux3 key", false,-1, 2,0);
        tracep->declArray(c+619,"top wb0 mux3 lut", false,-1, 200,0);
        tracep->declBus(c+719,"top wb0 mux3 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+719,"top wb0 mux3 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+710,"top wb0 mux3 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+711,"top wb0 mux3 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+61,"top wb0 mux3 i0 out", false,-1, 63,0);
        tracep->declBus(c+48,"top wb0 mux3 i0 key", false,-1, 2,0);
        tracep->declQuad(c+712,"top wb0 mux3 i0 default_out", false,-1, 63,0);
        tracep->declArray(c+619,"top wb0 mux3 i0 lut", false,-1, 200,0);
        tracep->declBus(c+727,"top wb0 mux3 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declArray(c+626+i*3,"top wb0 mux3 i0 pair_list", true,(i+0), 66,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+635+i*1,"top wb0 mux3 i0 key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declQuad(c+638+i*2,"top wb0 mux3 i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+644,"top wb0 mux3 i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+646,"top wb0 mux3 i0 hit", false,-1);
        tracep->declBus(c+647,"top wb0 mux3 i0 i", false,-1, 31,0);
        tracep->declBit(c+674,"top arbiter_0 clk", false,-1);
        tracep->declBit(c+675,"top arbiter_0 rst", false,-1);
        tracep->declBus(c+686,"top arbiter_0 araddr_0", false,-1, 31,0);
        tracep->declBus(c+63,"top arbiter_0 araddr_1", false,-1, 31,0);
        tracep->declBit(c+34,"top arbiter_0 arvalid_0", false,-1);
        tracep->declBit(c+64,"top arbiter_0 arvalid_1", false,-1);
        tracep->declBit(c+35,"top arbiter_0 arready_0", false,-1);
        tracep->declBit(c+65,"top arbiter_0 arready_1", false,-1);
        tracep->declQuad(c+36,"top arbiter_0 rdata_0", false,-1, 63,0);
        tracep->declQuad(c+66,"top arbiter_0 rdata_1", false,-1, 63,0);
        tracep->declBus(c+38,"top arbiter_0 rresp_0", false,-1, 1,0);
        tracep->declBus(c+68,"top arbiter_0 rresp_1", false,-1, 1,0);
        tracep->declBit(c+39,"top arbiter_0 rvalid_0", false,-1);
        tracep->declBit(c+69,"top arbiter_0 rvalid_1", false,-1);
        tracep->declBit(c+40,"top arbiter_0 rready_0", false,-1);
        tracep->declBit(c+70,"top arbiter_0 rready_1", false,-1);
        tracep->declBus(c+63,"top arbiter_0 awaddr_1", false,-1, 31,0);
        tracep->declBit(c+71,"top arbiter_0 awvalid_1", false,-1);
        tracep->declBit(c+72,"top arbiter_0 awready_1", false,-1);
        tracep->declQuad(c+32,"top arbiter_0 wdata_1", false,-1, 63,0);
        tracep->declBus(c+54,"top arbiter_0 wstrb_1", false,-1, 7,0);
        tracep->declBit(c+73,"top arbiter_0 wvalid_1", false,-1);
        tracep->declBit(c+72,"top arbiter_0 wready_1", false,-1);
        tracep->declBus(c+74,"top arbiter_0 bresp_1", false,-1, 1,0);
        tracep->declBit(c+75,"top arbiter_0 bvalid_1", false,-1);
        tracep->declBit(c+76,"top arbiter_0 bready_1", false,-1);
        tracep->declBit(c+685,"top arbiter_0 inst_update", false,-1);
        tracep->declBit(c+684,"top arbiter_0 mem_finish", false,-1);
        tracep->declBus(c+648,"top arbiter_0 master_state", false,-1, 1,0);
        tracep->declBus(c+711,"top arbiter_0 IDLE", false,-1, 31,0);
        tracep->declBus(c+715,"top arbiter_0 S_MASTER_0", false,-1, 31,0);
        tracep->declBus(c+709,"top arbiter_0 S_MASTER_1", false,-1, 31,0);
        tracep->declBit(c+649,"top arbiter_0 master_0", false,-1);
        tracep->declBit(c+650,"top arbiter_0 master_1", false,-1);
        tracep->declBus(c+703,"top arbiter_0 araddr", false,-1, 31,0);
        tracep->declBit(c+651,"top arbiter_0 arvalid", false,-1);
        tracep->declBit(c+652,"top arbiter_0 arready", false,-1);
        tracep->declQuad(c+653,"top arbiter_0 rdata", false,-1, 63,0);
        tracep->declBus(c+655,"top arbiter_0 rresp", false,-1, 1,0);
        tracep->declBit(c+656,"top arbiter_0 rready", false,-1);
        tracep->declBit(c+657,"top arbiter_0 rvalid", false,-1);
        tracep->declBus(c+658,"top arbiter_0 awaddr", false,-1, 31,0);
        tracep->declBit(c+659,"top arbiter_0 awready", false,-1);
        tracep->declBit(c+660,"top arbiter_0 awvalid", false,-1);
        tracep->declBit(c+659,"top arbiter_0 wready", false,-1);
        tracep->declBit(c+661,"top arbiter_0 wvalid", false,-1);
        tracep->declQuad(c+662,"top arbiter_0 wdata", false,-1, 63,0);
        tracep->declBus(c+664,"top arbiter_0 wstrb", false,-1, 7,0);
        tracep->declBus(c+665,"top arbiter_0 bresp", false,-1, 1,0);
        tracep->declBit(c+666,"top arbiter_0 bvalid", false,-1);
        tracep->declBit(c+667,"top arbiter_0 bready", false,-1);
        tracep->declBit(c+674,"top arbiter_0 axi_lite_s2_0 clk", false,-1);
        tracep->declBit(c+675,"top arbiter_0 axi_lite_s2_0 rst", false,-1);
        tracep->declBus(c+703,"top arbiter_0 axi_lite_s2_0 araddr", false,-1, 31,0);
        tracep->declBit(c+651,"top arbiter_0 axi_lite_s2_0 arvalid", false,-1);
        tracep->declBit(c+652,"top arbiter_0 axi_lite_s2_0 arready", false,-1);
        tracep->declQuad(c+653,"top arbiter_0 axi_lite_s2_0 rdata", false,-1, 63,0);
        tracep->declBus(c+655,"top arbiter_0 axi_lite_s2_0 rresp", false,-1, 1,0);
        tracep->declBit(c+657,"top arbiter_0 axi_lite_s2_0 rvalid", false,-1);
        tracep->declBit(c+656,"top arbiter_0 axi_lite_s2_0 rready", false,-1);
        tracep->declBus(c+658,"top arbiter_0 axi_lite_s2_0 awaddr", false,-1, 31,0);
        tracep->declBit(c+660,"top arbiter_0 axi_lite_s2_0 awvalid", false,-1);
        tracep->declBit(c+659,"top arbiter_0 axi_lite_s2_0 awready", false,-1);
        tracep->declQuad(c+662,"top arbiter_0 axi_lite_s2_0 wdata", false,-1, 63,0);
        tracep->declBus(c+664,"top arbiter_0 axi_lite_s2_0 wstrb", false,-1, 7,0);
        tracep->declBit(c+661,"top arbiter_0 axi_lite_s2_0 wvalid", false,-1);
        tracep->declBit(c+659,"top arbiter_0 axi_lite_s2_0 wready", false,-1);
        tracep->declBus(c+665,"top arbiter_0 axi_lite_s2_0 bresp", false,-1, 1,0);
        tracep->declBit(c+666,"top arbiter_0 axi_lite_s2_0 bvalid", false,-1);
        tracep->declBit(c+667,"top arbiter_0 axi_lite_s2_0 bready", false,-1);
        tracep->declBus(c+668,"top arbiter_0 axi_lite_s2_0 r_araddr", false,-1, 31,0);
        tracep->declBus(c+705,"top arbiter_0 axi_lite_s2_0 READ_IDLE", false,-1, 2,0);
        tracep->declBus(c+706,"top arbiter_0 axi_lite_s2_0 READ_ARVALID", false,-1, 2,0);
        tracep->declBus(c+707,"top arbiter_0 axi_lite_s2_0 READ_FINISH", false,-1, 2,0);
        tracep->declBus(c+669,"top arbiter_0 axi_lite_s2_0 state", false,-1, 2,0);
        tracep->declBus(c+670,"top arbiter_0 axi_lite_s2_0 write_state", false,-1, 2,0);
        tracep->declBus(c+705,"top arbiter_0 axi_lite_s2_0 WRITE_IDLE", false,-1, 2,0);
        tracep->declBus(c+706,"top arbiter_0 axi_lite_s2_0 WRITE_AW_WVALID", false,-1, 2,0);
        tracep->declBus(c+707,"top arbiter_0 axi_lite_s2_0 WRITE_FINISH", false,-1, 2,0);
        tracep->declBus(c+709,"top arbiter_0 axi_lite_s2_0 mux0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+719,"top arbiter_0 axi_lite_s2_0 mux0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+715,"top arbiter_0 axi_lite_s2_0 mux0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+652,"top arbiter_0 axi_lite_s2_0 mux0 out", false,-1, 0,0);
        tracep->declBus(c+669,"top arbiter_0 axi_lite_s2_0 mux0 key", false,-1, 2,0);
        tracep->declBus(c+738,"top arbiter_0 axi_lite_s2_0 mux0 lut", false,-1, 7,0);
        tracep->declBus(c+709,"top arbiter_0 axi_lite_s2_0 mux0 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+719,"top arbiter_0 axi_lite_s2_0 mux0 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+715,"top arbiter_0 axi_lite_s2_0 mux0 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+711,"top arbiter_0 axi_lite_s2_0 mux0 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+652,"top arbiter_0 axi_lite_s2_0 mux0 i0 out", false,-1, 0,0);
        tracep->declBus(c+669,"top arbiter_0 axi_lite_s2_0 mux0 i0 key", false,-1, 2,0);
        tracep->declBus(c+721,"top arbiter_0 axi_lite_s2_0 mux0 i0 default_out", false,-1, 0,0);
        tracep->declBus(c+738,"top arbiter_0 axi_lite_s2_0 mux0 i0 lut", false,-1, 7,0);
        tracep->declBus(c+708,"top arbiter_0 axi_lite_s2_0 mux0 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+19+i*1,"top arbiter_0 axi_lite_s2_0 mux0 i0 pair_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+21+i*1,"top arbiter_0 axi_lite_s2_0 mux0 i0 key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+23+i*1,"top arbiter_0 axi_lite_s2_0 mux0 i0 data_list", true,(i+0), 0,0);}}
        tracep->declBus(c+671,"top arbiter_0 axi_lite_s2_0 mux0 i0 lut_out", false,-1, 0,0);
        tracep->declBit(c+672,"top arbiter_0 axi_lite_s2_0 mux0 i0 hit", false,-1);
        tracep->declBus(c+673,"top arbiter_0 axi_lite_s2_0 mux0 i0 i", false,-1, 31,0);
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
        tracep->fullCData(oldp+1,(vlSelf->top__DOT__i0__DOT__mux1__DOT__i0__DOT__pair_list[0]),4);
        tracep->fullCData(oldp+2,(vlSelf->top__DOT__i0__DOT__mux1__DOT__i0__DOT__pair_list[1]),4);
        tracep->fullCData(oldp+3,(vlSelf->top__DOT__i0__DOT__mux1__DOT__i0__DOT__pair_list[2]),4);
        tracep->fullCData(oldp+4,(vlSelf->top__DOT__i0__DOT__mux1__DOT__i0__DOT__key_list[0]),3);
        tracep->fullCData(oldp+5,(vlSelf->top__DOT__i0__DOT__mux1__DOT__i0__DOT__key_list[1]),3);
        tracep->fullCData(oldp+6,(vlSelf->top__DOT__i0__DOT__mux1__DOT__i0__DOT__key_list[2]),3);
        tracep->fullBit(oldp+7,(vlSelf->top__DOT__i0__DOT__mux1__DOT__i0__DOT__data_list[0]));
        tracep->fullBit(oldp+8,(vlSelf->top__DOT__i0__DOT__mux1__DOT__i0__DOT__data_list[1]));
        tracep->fullBit(oldp+9,(vlSelf->top__DOT__i0__DOT__mux1__DOT__i0__DOT__data_list[2]));
        tracep->fullCData(oldp+10,(vlSelf->top__DOT__mem0__DOT__mux1__DOT__i0__DOT__pair_list[0]),4);
        tracep->fullCData(oldp+11,(vlSelf->top__DOT__mem0__DOT__mux1__DOT__i0__DOT__pair_list[1]),4);
        tracep->fullCData(oldp+12,(vlSelf->top__DOT__mem0__DOT__mux1__DOT__i0__DOT__pair_list[2]),4);
        tracep->fullCData(oldp+13,(vlSelf->top__DOT__mem0__DOT__mux1__DOT__i0__DOT__key_list[0]),3);
        tracep->fullCData(oldp+14,(vlSelf->top__DOT__mem0__DOT__mux1__DOT__i0__DOT__key_list[1]),3);
        tracep->fullCData(oldp+15,(vlSelf->top__DOT__mem0__DOT__mux1__DOT__i0__DOT__key_list[2]),3);
        tracep->fullBit(oldp+16,(vlSelf->top__DOT__mem0__DOT__mux1__DOT__i0__DOT__data_list[0]));
        tracep->fullBit(oldp+17,(vlSelf->top__DOT__mem0__DOT__mux1__DOT__i0__DOT__data_list[1]));
        tracep->fullBit(oldp+18,(vlSelf->top__DOT__mem0__DOT__mux1__DOT__i0__DOT__data_list[2]));
        tracep->fullCData(oldp+19,(vlSelf->top__DOT__arbiter_0__DOT__axi_lite_s2_0__DOT__mux0__DOT__i0__DOT__pair_list[0]),4);
        tracep->fullCData(oldp+20,(vlSelf->top__DOT__arbiter_0__DOT__axi_lite_s2_0__DOT__mux0__DOT__i0__DOT__pair_list[1]),4);
        tracep->fullCData(oldp+21,(vlSelf->top__DOT__arbiter_0__DOT__axi_lite_s2_0__DOT__mux0__DOT__i0__DOT__key_list[0]),3);
        tracep->fullCData(oldp+22,(vlSelf->top__DOT__arbiter_0__DOT__axi_lite_s2_0__DOT__mux0__DOT__i0__DOT__key_list[1]),3);
        tracep->fullBit(oldp+23,(vlSelf->top__DOT__arbiter_0__DOT__axi_lite_s2_0__DOT__mux0__DOT__i0__DOT__data_list[0]));
        tracep->fullBit(oldp+24,(vlSelf->top__DOT__arbiter_0__DOT__axi_lite_s2_0__DOT__mux0__DOT__i0__DOT__data_list[1]));
        tracep->fullQData(oldp+25,(vlSelf->top__DOT__c_rdata),64);
        tracep->fullCData(oldp+27,(vlSelf->top__DOT__sel_nextpc),2);
        tracep->fullQData(oldp+28,(vlSelf->top__DOT__imm),64);
        tracep->fullQData(oldp+30,(vlSelf->top__DOT__src1),64);
        tracep->fullQData(oldp+32,(vlSelf->top__DOT__src2),64);
        tracep->fullBit(oldp+34,((0U == (IData)(vlSelf->top__DOT__i0__DOT__state))));
        tracep->fullBit(oldp+35,(((1U == (IData)(vlSelf->top__DOT__arbiter_0__DOT__master_state))
                                   ? (1U & (IData)(vlSelf->top__DOT__arbiter_0__DOT__arready))
                                   : 0U)));
        tracep->fullQData(oldp+36,(((1U == (IData)(vlSelf->top__DOT__arbiter_0__DOT__master_state))
                                     ? vlSelf->top__DOT__arbiter_0__DOT__rdata
                                     : 0ULL)),64);
        tracep->fullCData(oldp+38,(((1U == (IData)(vlSelf->top__DOT__arbiter_0__DOT__master_state))
                                     ? (3U & (IData)(vlSelf->top__DOT__arbiter_0__DOT__rresp))
                                     : 0U)),2);
        tracep->fullBit(oldp+39,(vlSelf->top__DOT__rvalid_0));
        tracep->fullBit(oldp+40,(vlSelf->top__DOT__rready_0));
        tracep->fullSData(oldp+41,(vlSelf->top__DOT__op_d),12);
        tracep->fullCData(oldp+42,(vlSelf->top__DOT__fu_7_d),5);
        tracep->fullCData(oldp+43,(vlSelf->top__DOT__c_raddr),2);
        tracep->fullCData(oldp+44,(vlSelf->top__DOT__e_inst),3);
        tracep->fullCData(oldp+45,(vlSelf->top__DOT__sel_alu_src1),4);
        tracep->fullCData(oldp+46,(vlSelf->top__DOT__sel_alu_src2),3);
        tracep->fullIData(oldp+47,(vlSelf->top__DOT__alu_control),17);
        tracep->fullCData(oldp+48,(vlSelf->top__DOT__sel_rf_res),3);
        tracep->fullBit(oldp+49,(vlSelf->top__DOT__data_ram_wen));
        tracep->fullCData(oldp+50,(vlSelf->top__DOT__alu_equal),3);
        tracep->fullCData(oldp+51,(vlSelf->top__DOT__l_choose),7);
        tracep->fullBit(oldp+52,(vlSelf->top__DOT__w_choose));
        tracep->fullBit(oldp+53,(vlSelf->top__DOT__control_0__DOT__csrrs));
        tracep->fullCData(oldp+54,(((IData)(vlSelf->top__DOT__control_0__DOT__sb)
                                     ? 1U : ((IData)(vlSelf->top__DOT__control_0__DOT__sh)
                                              ? 3U : 
                                             ((IData)(vlSelf->top__DOT__control_0__DOT__sw)
                                               ? 0xfU
                                               : ((IData)(vlSelf->top__DOT__control_0__DOT__sd)
                                                   ? 0xffU
                                                   : 0U))))),8);
        tracep->fullQData(oldp+55,(vlSelf->top__DOT__alu_result),64);
        tracep->fullQData(oldp+57,(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__adder_result),64);
        tracep->fullQData(oldp+59,(vlSelf->top__DOT__ram_data),64);
        tracep->fullQData(oldp+61,(vlSelf->top__DOT__wdata),64);
        tracep->fullIData(oldp+63,((IData)(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__adder_result)),32);
        tracep->fullBit(oldp+64,(vlSelf->top__DOT__arvalid_1));
        tracep->fullBit(oldp+65,(((2U == (IData)(vlSelf->top__DOT__arbiter_0__DOT__master_state))
                                   ? (1U & (IData)(vlSelf->top__DOT__arbiter_0__DOT__arready))
                                   : 0U)));
        tracep->fullQData(oldp+66,(((2U == (IData)(vlSelf->top__DOT__arbiter_0__DOT__master_state))
                                     ? vlSelf->top__DOT__arbiter_0__DOT__rdata
                                     : 0ULL)),64);
        tracep->fullCData(oldp+68,(((2U == (IData)(vlSelf->top__DOT__arbiter_0__DOT__master_state))
                                     ? (3U & (IData)(vlSelf->top__DOT__arbiter_0__DOT__rresp))
                                     : 0U)),2);
        tracep->fullBit(oldp+69,(vlSelf->top__DOT__rvalid_1));
        tracep->fullBit(oldp+70,(vlSelf->top__DOT__rready_1));
        tracep->fullBit(oldp+71,(vlSelf->top__DOT__awvalid_1));
        tracep->fullBit(oldp+72,(((2U == (IData)(vlSelf->top__DOT__arbiter_0__DOT__master_state))
                                   ? (IData)((0U == (IData)(vlSelf->top__DOT__arbiter_0__DOT__axi_lite_s2_0__DOT__write_state)))
                                   : 0U)));
        tracep->fullBit(oldp+73,(vlSelf->top__DOT__wvalid_1));
        tracep->fullCData(oldp+74,(((2U == (IData)(vlSelf->top__DOT__arbiter_0__DOT__master_state))
                                     ? (3U & (IData)(vlSelf->top__DOT__arbiter_0__DOT__bresp))
                                     : 0U)),2);
        tracep->fullBit(oldp+75,(((2U == (IData)(vlSelf->top__DOT__arbiter_0__DOT__master_state))
                                   ? (1U & (IData)(vlSelf->top__DOT__arbiter_0__DOT__bvalid))
                                   : 0U)));
        tracep->fullBit(oldp+76,((1U == (IData)(vlSelf->top__DOT__mem0__DOT__write_state))));
        tracep->fullQData(oldp+77,(vlSelf->top__DOT__i0__DOT__dnpc_0),64);
        tracep->fullBit(oldp+79,(((IData)(vlSelf->top__DOT__rvalid_0) 
                                  & (IData)(vlSelf->top__DOT__rready_0))));
        tracep->fullQData(oldp+80,(vlSelf->top__DOT__i0__DOT__r_rdata),64);
        tracep->fullCData(oldp+82,(vlSelf->top__DOT__i0__DOT__state),3);
        tracep->fullWData(oldp+83,(vlSelf->top__DOT__i0__DOT____Vcellinp__mux4____pinNumber3),264);
        tracep->fullWData(oldp+92,(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__pair_list[0]),66);
        tracep->fullWData(oldp+95,(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__pair_list[1]),66);
        tracep->fullWData(oldp+98,(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__pair_list[2]),66);
        tracep->fullWData(oldp+101,(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__pair_list[3]),66);
        tracep->fullCData(oldp+104,(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__key_list[0]),2);
        tracep->fullCData(oldp+105,(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__key_list[1]),2);
        tracep->fullCData(oldp+106,(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__key_list[2]),2);
        tracep->fullCData(oldp+107,(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__key_list[3]),2);
        tracep->fullQData(oldp+108,(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+110,(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+112,(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+114,(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+116,(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+118,(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__hit));
        tracep->fullIData(oldp+119,(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__i),32);
        tracep->fullWData(oldp+120,(vlSelf->top__DOT__i0__DOT____Vcellinp__mux5____pinNumber3),130);
        tracep->fullWData(oldp+125,(vlSelf->top__DOT__i0__DOT__mux5__DOT__i0__DOT__pair_list[0]),65);
        tracep->fullWData(oldp+128,(vlSelf->top__DOT__i0__DOT__mux5__DOT__i0__DOT__pair_list[1]),65);
        tracep->fullBit(oldp+131,(vlSelf->top__DOT__i0__DOT__mux5__DOT__i0__DOT__key_list[0]));
        tracep->fullBit(oldp+132,(vlSelf->top__DOT__i0__DOT__mux5__DOT__i0__DOT__key_list[1]));
        tracep->fullQData(oldp+133,(vlSelf->top__DOT__i0__DOT__mux5__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+135,(vlSelf->top__DOT__i0__DOT__mux5__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+137,(vlSelf->top__DOT__i0__DOT__mux5__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+139,(vlSelf->top__DOT__i0__DOT__mux5__DOT__i0__DOT__hit));
        tracep->fullIData(oldp+140,(vlSelf->top__DOT__i0__DOT__mux5__DOT__i0__DOT__i),32);
        tracep->fullBit(oldp+141,(vlSelf->top__DOT__i0__DOT__mux1__DOT__i0__DOT__lut_out));
        tracep->fullBit(oldp+142,(vlSelf->top__DOT__i0__DOT__mux1__DOT__i0__DOT__hit));
        tracep->fullIData(oldp+143,(vlSelf->top__DOT__i0__DOT__mux1__DOT__i0__DOT__i),32);
        tracep->fullQData(oldp+144,(vlSelf->top__DOT__id_0__DOT__immi),64);
        tracep->fullQData(oldp+146,(vlSelf->top__DOT__id_0__DOT__immu),64);
        tracep->fullWData(oldp+148,(vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3),760);
        tracep->fullWData(oldp+172,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[0]),76);
        tracep->fullWData(oldp+175,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[1]),76);
        tracep->fullWData(oldp+178,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[2]),76);
        tracep->fullWData(oldp+181,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[3]),76);
        tracep->fullWData(oldp+184,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[4]),76);
        tracep->fullWData(oldp+187,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[5]),76);
        tracep->fullWData(oldp+190,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[6]),76);
        tracep->fullWData(oldp+193,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[7]),76);
        tracep->fullWData(oldp+196,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[8]),76);
        tracep->fullWData(oldp+199,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[9]),76);
        tracep->fullSData(oldp+202,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list[0]),12);
        tracep->fullSData(oldp+203,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list[1]),12);
        tracep->fullSData(oldp+204,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list[2]),12);
        tracep->fullSData(oldp+205,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list[3]),12);
        tracep->fullSData(oldp+206,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list[4]),12);
        tracep->fullSData(oldp+207,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list[5]),12);
        tracep->fullSData(oldp+208,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list[6]),12);
        tracep->fullSData(oldp+209,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list[7]),12);
        tracep->fullSData(oldp+210,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list[8]),12);
        tracep->fullSData(oldp+211,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list[9]),12);
        tracep->fullQData(oldp+212,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+214,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+216,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+218,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+220,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list[4]),64);
        tracep->fullQData(oldp+222,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list[5]),64);
        tracep->fullQData(oldp+224,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list[6]),64);
        tracep->fullQData(oldp+226,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list[7]),64);
        tracep->fullQData(oldp+228,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list[8]),64);
        tracep->fullQData(oldp+230,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list[9]),64);
        tracep->fullQData(oldp+232,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+234,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__hit));
        tracep->fullIData(oldp+235,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__i),32);
        tracep->fullBit(oldp+236,(vlSelf->top__DOT__control_0__DOT__addi));
        tracep->fullBit(oldp+237,(vlSelf->top__DOT__control_0__DOT__csrrw));
        tracep->fullBit(oldp+238,(vlSelf->top__DOT__control_0__DOT__andi));
        tracep->fullBit(oldp+239,(vlSelf->top__DOT__control_0__DOT__xori));
        tracep->fullBit(oldp+240,(vlSelf->top__DOT__control_0__DOT__ori));
        tracep->fullBit(oldp+241,(vlSelf->top__DOT__control_0__DOT__sll));
        tracep->fullBit(oldp+242,(vlSelf->top__DOT__control_0__DOT__srl));
        tracep->fullBit(oldp+243,(vlSelf->top__DOT__control_0__DOT__sra));
        tracep->fullBit(oldp+244,(vlSelf->top__DOT__control_0__DOT__sllw));
        tracep->fullBit(oldp+245,(vlSelf->top__DOT__control_0__DOT__srlw));
        tracep->fullBit(oldp+246,(vlSelf->top__DOT__control_0__DOT__sraw));
        tracep->fullBit(oldp+247,(vlSelf->top__DOT__control_0__DOT__addiw));
        tracep->fullBit(oldp+248,(vlSelf->top__DOT__control_0__DOT__slliw));
        tracep->fullBit(oldp+249,(vlSelf->top__DOT__control_0__DOT__srliw));
        tracep->fullBit(oldp+250,(vlSelf->top__DOT__control_0__DOT__sraiw));
        tracep->fullBit(oldp+251,((1U & ((IData)(vlSelf->top__DOT__op_d) 
                                         >> 1U))));
        tracep->fullBit(oldp+252,((1U & (IData)(vlSelf->top__DOT__op_d))));
        tracep->fullBit(oldp+253,((1U & ((IData)(vlSelf->top__DOT__op_d) 
                                         >> 2U))));
        tracep->fullBit(oldp+254,(vlSelf->top__DOT__control_0__DOT__jalr));
        tracep->fullBit(oldp+255,(vlSelf->top__DOT__control_0__DOT__sd));
        tracep->fullBit(oldp+256,(vlSelf->top__DOT__control_0__DOT__sh));
        tracep->fullBit(oldp+257,(vlSelf->top__DOT__control_0__DOT__sw));
        tracep->fullBit(oldp+258,(vlSelf->top__DOT__control_0__DOT__sb));
        tracep->fullBit(oldp+259,(vlSelf->top__DOT__control_0__DOT__lw));
        tracep->fullBit(oldp+260,(vlSelf->top__DOT__control_0__DOT__lwu));
        tracep->fullBit(oldp+261,(vlSelf->top__DOT__control_0__DOT__lh));
        tracep->fullBit(oldp+262,(vlSelf->top__DOT__control_0__DOT__lhu));
        tracep->fullBit(oldp+263,(vlSelf->top__DOT__control_0__DOT__lb));
        tracep->fullBit(oldp+264,(vlSelf->top__DOT__control_0__DOT__lbu));
        tracep->fullBit(oldp+265,(vlSelf->top__DOT__control_0__DOT__ld));
        tracep->fullBit(oldp+266,(vlSelf->top__DOT__control_0__DOT__addw));
        tracep->fullBit(oldp+267,(vlSelf->top__DOT__control_0__DOT__subw));
        tracep->fullBit(oldp+268,(vlSelf->top__DOT__control_0__DOT__mulw));
        tracep->fullBit(oldp+269,(vlSelf->top__DOT__control_0__DOT__divw));
        tracep->fullBit(oldp+270,(vlSelf->top__DOT__control_0__DOT__divuw));
        tracep->fullBit(oldp+271,(vlSelf->top__DOT__control_0__DOT__remw));
        tracep->fullBit(oldp+272,(vlSelf->top__DOT__control_0__DOT__remuw));
        tracep->fullBit(oldp+273,(vlSelf->top__DOT__control_0__DOT__divu));
        tracep->fullBit(oldp+274,(vlSelf->top__DOT__control_0__DOT__div));
        tracep->fullBit(oldp+275,(vlSelf->top__DOT__control_0__DOT__rem));
        tracep->fullBit(oldp+276,(vlSelf->top__DOT__control_0__DOT__remu));
        tracep->fullBit(oldp+277,(vlSelf->top__DOT__control_0__DOT__Add));
        tracep->fullBit(oldp+278,(vlSelf->top__DOT__control_0__DOT__Mul));
        tracep->fullBit(oldp+279,(vlSelf->top__DOT__control_0__DOT__And));
        tracep->fullBit(oldp+280,(vlSelf->top__DOT__control_0__DOT__Xor));
        tracep->fullBit(oldp+281,(vlSelf->top__DOT__control_0__DOT__Or));
        tracep->fullBit(oldp+282,(vlSelf->top__DOT__control_0__DOT__sltu));
        tracep->fullBit(oldp+283,(vlSelf->top__DOT__control_0__DOT__slt));
        tracep->fullBit(oldp+284,(vlSelf->top__DOT__control_0__DOT__sub));
        tracep->fullBit(oldp+285,(vlSelf->top__DOT__control_0__DOT__sltiu));
        tracep->fullBit(oldp+286,(vlSelf->top__DOT__control_0__DOT__srai));
        tracep->fullBit(oldp+287,(vlSelf->top__DOT__control_0__DOT__slli));
        tracep->fullBit(oldp+288,(vlSelf->top__DOT__control_0__DOT__srli));
        tracep->fullBit(oldp+289,(vlSelf->top__DOT__control_0__DOT__beq));
        tracep->fullBit(oldp+290,(vlSelf->top__DOT__control_0__DOT__bne));
        tracep->fullBit(oldp+291,(vlSelf->top__DOT__control_0__DOT__bge));
        tracep->fullBit(oldp+292,(vlSelf->top__DOT__control_0__DOT__bgeu));
        tracep->fullBit(oldp+293,(vlSelf->top__DOT__control_0__DOT__bltu));
        tracep->fullBit(oldp+294,(vlSelf->top__DOT__control_0__DOT__blt));
        tracep->fullQData(oldp+295,(vlSelf->top__DOT__exe_0__DOT__alu_src1),64);
        tracep->fullQData(oldp+297,(vlSelf->top__DOT__exe_0__DOT__alu_src2),64);
        tracep->fullQData(oldp+299,(vlSelf->top__DOT__exe_0__DOT__c_wdata),64);
        tracep->fullWData(oldp+301,(vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux1____pinNumber3),272);
        tracep->fullWData(oldp+310,(vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__pair_list[0]),68);
        tracep->fullWData(oldp+313,(vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__pair_list[1]),68);
        tracep->fullWData(oldp+316,(vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__pair_list[2]),68);
        tracep->fullWData(oldp+319,(vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__pair_list[3]),68);
        tracep->fullCData(oldp+322,(vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__key_list[0]),4);
        tracep->fullCData(oldp+323,(vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__key_list[1]),4);
        tracep->fullCData(oldp+324,(vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__key_list[2]),4);
        tracep->fullCData(oldp+325,(vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__key_list[3]),4);
        tracep->fullQData(oldp+326,(vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+328,(vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+330,(vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+332,(vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+334,(vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+336,(vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__hit));
        tracep->fullIData(oldp+337,(vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__i),32);
        tracep->fullWData(oldp+338,(vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux2____pinNumber3),201);
        tracep->fullWData(oldp+345,(vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__pair_list[0]),67);
        tracep->fullWData(oldp+348,(vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__pair_list[1]),67);
        tracep->fullWData(oldp+351,(vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__pair_list[2]),67);
        tracep->fullCData(oldp+354,(vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__key_list[0]),3);
        tracep->fullCData(oldp+355,(vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__key_list[1]),3);
        tracep->fullCData(oldp+356,(vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__key_list[2]),3);
        tracep->fullQData(oldp+357,(vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+359,(vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+361,(vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+363,(vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+365,(vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__hit));
        tracep->fullIData(oldp+366,(vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__i),32);
        tracep->fullWData(oldp+367,(vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux3____pinNumber3),130);
        tracep->fullWData(oldp+372,(vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__pair_list[0]),65);
        tracep->fullWData(oldp+375,(vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__pair_list[1]),65);
        tracep->fullBit(oldp+378,(vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__key_list[0]));
        tracep->fullBit(oldp+379,(vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__key_list[1]));
        tracep->fullQData(oldp+380,(vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+382,(vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+384,(vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+386,(vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__hit));
        tracep->fullIData(oldp+387,(vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__i),32);
        tracep->fullQData(oldp+388,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[0]),64);
        tracep->fullQData(oldp+390,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[1]),64);
        tracep->fullQData(oldp+392,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[2]),64);
        tracep->fullQData(oldp+394,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[3]),64);
        tracep->fullQData(oldp+396,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[4]),64);
        tracep->fullQData(oldp+398,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[5]),64);
        tracep->fullQData(oldp+400,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[6]),64);
        tracep->fullQData(oldp+402,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[7]),64);
        tracep->fullQData(oldp+404,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[8]),64);
        tracep->fullQData(oldp+406,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[9]),64);
        tracep->fullQData(oldp+408,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[10]),64);
        tracep->fullQData(oldp+410,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[11]),64);
        tracep->fullQData(oldp+412,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[12]),64);
        tracep->fullQData(oldp+414,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[13]),64);
        tracep->fullQData(oldp+416,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[14]),64);
        tracep->fullQData(oldp+418,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[15]),64);
        tracep->fullQData(oldp+420,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[16]),64);
        tracep->fullQData(oldp+422,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[17]),64);
        tracep->fullQData(oldp+424,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[18]),64);
        tracep->fullQData(oldp+426,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[19]),64);
        tracep->fullQData(oldp+428,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[20]),64);
        tracep->fullQData(oldp+430,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[21]),64);
        tracep->fullQData(oldp+432,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[22]),64);
        tracep->fullQData(oldp+434,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[23]),64);
        tracep->fullQData(oldp+436,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[24]),64);
        tracep->fullQData(oldp+438,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[25]),64);
        tracep->fullQData(oldp+440,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[26]),64);
        tracep->fullQData(oldp+442,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[27]),64);
        tracep->fullQData(oldp+444,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[28]),64);
        tracep->fullQData(oldp+446,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[29]),64);
        tracep->fullQData(oldp+448,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[30]),64);
        tracep->fullQData(oldp+450,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[31]),64);
        tracep->fullQData(oldp+452,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr[0]),64);
        tracep->fullQData(oldp+454,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr[1]),64);
        tracep->fullQData(oldp+456,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr[2]),64);
        tracep->fullQData(oldp+458,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr[3]),64);
        tracep->fullIData(oldp+460,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__i),32);
        tracep->fullBit(oldp+461,((1U & vlSelf->top__DOT__alu_control)));
        tracep->fullBit(oldp+462,((1U & (vlSelf->top__DOT__alu_control 
                                         >> 1U))));
        tracep->fullBit(oldp+463,((1U & (vlSelf->top__DOT__alu_control 
                                         >> 2U))));
        tracep->fullBit(oldp+464,((1U & (vlSelf->top__DOT__alu_control 
                                         >> 3U))));
        tracep->fullBit(oldp+465,((1U & (vlSelf->top__DOT__alu_control 
                                         >> 4U))));
        tracep->fullBit(oldp+466,((1U & (vlSelf->top__DOT__alu_control 
                                         >> 5U))));
        tracep->fullBit(oldp+467,((1U & (vlSelf->top__DOT__alu_control 
                                         >> 6U))));
        tracep->fullBit(oldp+468,((1U & (vlSelf->top__DOT__alu_control 
                                         >> 7U))));
        tracep->fullBit(oldp+469,((1U & (vlSelf->top__DOT__alu_control 
                                         >> 8U))));
        tracep->fullBit(oldp+470,((1U & (vlSelf->top__DOT__alu_control 
                                         >> 9U))));
        tracep->fullBit(oldp+471,((1U & (vlSelf->top__DOT__alu_control 
                                         >> 0xaU))));
        tracep->fullBit(oldp+472,((1U & (vlSelf->top__DOT__alu_control 
                                         >> 0xbU))));
        tracep->fullBit(oldp+473,((1U & (vlSelf->top__DOT__alu_control 
                                         >> 0xcU))));
        tracep->fullBit(oldp+474,((1U & (vlSelf->top__DOT__alu_control 
                                         >> 0xdU))));
        tracep->fullBit(oldp+475,((1U & (vlSelf->top__DOT__alu_control 
                                         >> 0xeU))));
        tracep->fullBit(oldp+476,((1U & (vlSelf->top__DOT__alu_control 
                                         >> 0xfU))));
        tracep->fullBit(oldp+477,((1U & (vlSelf->top__DOT__alu_control 
                                         >> 0x10U))));
        tracep->fullQData(oldp+478,(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__slt_result),64);
        tracep->fullQData(oldp+480,((QData)((IData)(
                                                    (1U 
                                                     & (~ (IData)(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__adder_cout)))))),64);
        tracep->fullQData(oldp+482,((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                                     & vlSelf->top__DOT__exe_0__DOT__alu_src2)),64);
        tracep->fullQData(oldp+484,((~ vlSelf->top__DOT__exe_0__DOT__alu2__DOT__or_result)),64);
        tracep->fullQData(oldp+486,(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__or_result),64);
        tracep->fullQData(oldp+488,((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                                     ^ vlSelf->top__DOT__exe_0__DOT__alu_src2)),64);
        tracep->fullQData(oldp+490,((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                                     << (0x3fU & (IData)(vlSelf->top__DOT__exe_0__DOT__alu_src2)))),64);
        tracep->fullQData(oldp+492,((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                                     >> (0x3fU & (IData)(vlSelf->top__DOT__exe_0__DOT__alu_src2)))),64);
        tracep->fullQData(oldp+494,(VL_SHIFTRS_QQI(64,64,6, vlSelf->top__DOT__exe_0__DOT__alu_src1, 
                                                   (0x3fU 
                                                    & (IData)(vlSelf->top__DOT__exe_0__DOT__alu_src2)))),64);
        tracep->fullQData(oldp+496,((0xfffffffffffff000ULL 
                                     & vlSelf->top__DOT__exe_0__DOT__alu_src2)),64);
        tracep->fullQData(oldp+498,((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                                     * vlSelf->top__DOT__exe_0__DOT__alu_src2)),64);
        tracep->fullQData(oldp+500,(VL_DIV_QQQ(64, vlSelf->top__DOT__exe_0__DOT__alu_src1, vlSelf->top__DOT__exe_0__DOT__alu_src2)),64);
        tracep->fullQData(oldp+502,(VL_DIVS_QQQ(64, vlSelf->top__DOT__exe_0__DOT__alu_src1, vlSelf->top__DOT__exe_0__DOT__alu_src2)),64);
        tracep->fullQData(oldp+504,(VL_MODDIV_QQQ(64, vlSelf->top__DOT__exe_0__DOT__alu_src1, vlSelf->top__DOT__exe_0__DOT__alu_src2)),64);
        tracep->fullQData(oldp+506,(VL_MODDIVS_QQQ(64, vlSelf->top__DOT__exe_0__DOT__alu_src1, vlSelf->top__DOT__exe_0__DOT__alu_src2)),64);
        tracep->fullQData(oldp+508,(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__adder_b),64);
        tracep->fullBit(oldp+510,(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__adder_cin));
        tracep->fullBit(oldp+511,(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__adder_cout));
        tracep->fullQData(oldp+512,(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__alu_result_uw),64);
        tracep->fullQData(oldp+514,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__exe_0__DOT__alu2__DOT__alu_result_uw 
                                                                             >> 0x1fU))))))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__alu_result_uw)))),64);
        tracep->fullWData(oldp+516,(vlSelf->top__DOT__exe_0__DOT__alu2__DOT____Vcellinp__mux1____pinNumber3),130);
        tracep->fullWData(oldp+521,(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__pair_list[0]),65);
        tracep->fullWData(oldp+524,(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__pair_list[1]),65);
        tracep->fullBit(oldp+527,(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__key_list[0]));
        tracep->fullBit(oldp+528,(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__key_list[1]));
        tracep->fullQData(oldp+529,(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+531,(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+533,(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+535,(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__hit));
        tracep->fullIData(oldp+536,(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__i),32);
        tracep->fullQData(oldp+537,(vlSelf->top__DOT__mem0__DOT__reg_rdata),64);
        tracep->fullQData(oldp+539,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__mem0__DOT__reg_rdata 
                                                                             >> 0x1fU))))))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__mem0__DOT__reg_rdata)))),64);
        tracep->fullQData(oldp+541,((QData)((IData)(vlSelf->top__DOT__mem0__DOT__reg_rdata))),64);
        tracep->fullQData(oldp+543,((((- (QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->top__DOT__mem0__DOT__reg_rdata 
                                                                     >> 0xfU)))))) 
                                      << 0x10U) | (QData)((IData)(
                                                                  (0xffffU 
                                                                   & (IData)(vlSelf->top__DOT__mem0__DOT__reg_rdata)))))),64);
        tracep->fullQData(oldp+545,((QData)((IData)(
                                                    (0xffffU 
                                                     & (IData)(vlSelf->top__DOT__mem0__DOT__reg_rdata))))),64);
        tracep->fullQData(oldp+547,((((- (QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->top__DOT__mem0__DOT__reg_rdata 
                                                                     >> 7U)))))) 
                                      << 8U) | (QData)((IData)(
                                                               (0xffU 
                                                                & (IData)(vlSelf->top__DOT__mem0__DOT__reg_rdata)))))),64);
        tracep->fullQData(oldp+549,((QData)((IData)(
                                                    (0xffU 
                                                     & (IData)(vlSelf->top__DOT__mem0__DOT__reg_rdata))))),64);
        tracep->fullCData(oldp+551,(vlSelf->top__DOT__mem0__DOT__read_state),3);
        tracep->fullCData(oldp+552,(vlSelf->top__DOT__mem0__DOT__write_state),3);
        tracep->fullCData(oldp+553,(vlSelf->top__DOT__mem0__DOT__mem_state),3);
        tracep->fullWData(oldp+554,(vlSelf->top__DOT__mem0__DOT____Vcellinp__mux3____pinNumber3),497);
        tracep->fullWData(oldp+570,(vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__pair_list[0]),71);
        tracep->fullWData(oldp+573,(vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__pair_list[1]),71);
        tracep->fullWData(oldp+576,(vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__pair_list[2]),71);
        tracep->fullWData(oldp+579,(vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__pair_list[3]),71);
        tracep->fullWData(oldp+582,(vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__pair_list[4]),71);
        tracep->fullWData(oldp+585,(vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__pair_list[5]),71);
        tracep->fullWData(oldp+588,(vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__pair_list[6]),71);
        tracep->fullCData(oldp+591,(vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__key_list[0]),7);
        tracep->fullCData(oldp+592,(vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__key_list[1]),7);
        tracep->fullCData(oldp+593,(vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__key_list[2]),7);
        tracep->fullCData(oldp+594,(vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__key_list[3]),7);
        tracep->fullCData(oldp+595,(vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__key_list[4]),7);
        tracep->fullCData(oldp+596,(vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__key_list[5]),7);
        tracep->fullCData(oldp+597,(vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__key_list[6]),7);
        tracep->fullQData(oldp+598,(vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+600,(vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+602,(vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+604,(vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+606,(vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__data_list[4]),64);
        tracep->fullQData(oldp+608,(vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__data_list[5]),64);
        tracep->fullQData(oldp+610,(vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__data_list[6]),64);
        tracep->fullQData(oldp+612,(vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+614,(vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__hit));
        tracep->fullIData(oldp+615,(vlSelf->top__DOT__mem0__DOT__mux3__DOT__i0__DOT__i),32);
        tracep->fullBit(oldp+616,(vlSelf->top__DOT__mem0__DOT__mux1__DOT__i0__DOT__lut_out));
        tracep->fullBit(oldp+617,(vlSelf->top__DOT__mem0__DOT__mux1__DOT__i0__DOT__hit));
        tracep->fullIData(oldp+618,(vlSelf->top__DOT__mem0__DOT__mux1__DOT__i0__DOT__i),32);
        tracep->fullWData(oldp+619,(vlSelf->top__DOT__wb0__DOT____Vcellinp__mux3____pinNumber3),201);
        tracep->fullWData(oldp+626,(vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__pair_list[0]),67);
        tracep->fullWData(oldp+629,(vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__pair_list[1]),67);
        tracep->fullWData(oldp+632,(vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__pair_list[2]),67);
        tracep->fullCData(oldp+635,(vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__key_list[0]),3);
        tracep->fullCData(oldp+636,(vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__key_list[1]),3);
        tracep->fullCData(oldp+637,(vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__key_list[2]),3);
        tracep->fullQData(oldp+638,(vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+640,(vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+642,(vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+644,(vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+646,(vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__hit));
        tracep->fullIData(oldp+647,(vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__i),32);
        tracep->fullCData(oldp+648,(vlSelf->top__DOT__arbiter_0__DOT__master_state),2);
        tracep->fullBit(oldp+649,((1U == (IData)(vlSelf->top__DOT__arbiter_0__DOT__master_state))));
        tracep->fullBit(oldp+650,((2U == (IData)(vlSelf->top__DOT__arbiter_0__DOT__master_state))));
        tracep->fullBit(oldp+651,((1U & ((1U == (IData)(vlSelf->top__DOT__arbiter_0__DOT__master_state))
                                          ? (0U == (IData)(vlSelf->top__DOT__i0__DOT__state))
                                          : ((2U == (IData)(vlSelf->top__DOT__arbiter_0__DOT__master_state))
                                              ? (IData)(vlSelf->top__DOT__arvalid_1)
                                              : 0U)))));
        tracep->fullBit(oldp+652,(vlSelf->top__DOT__arbiter_0__DOT__arready));
        tracep->fullQData(oldp+653,(vlSelf->top__DOT__arbiter_0__DOT__rdata),64);
        tracep->fullCData(oldp+655,(vlSelf->top__DOT__arbiter_0__DOT__rresp),2);
        tracep->fullBit(oldp+656,((1U & ((1U == (IData)(vlSelf->top__DOT__arbiter_0__DOT__master_state))
                                          ? (IData)(vlSelf->top__DOT__rready_0)
                                          : ((2U == (IData)(vlSelf->top__DOT__arbiter_0__DOT__master_state))
                                              ? (IData)(vlSelf->top__DOT__rready_1)
                                              : 0U)))));
        tracep->fullBit(oldp+657,(vlSelf->top__DOT__arbiter_0__DOT__rvalid));
        tracep->fullIData(oldp+658,(((2U == (IData)(vlSelf->top__DOT__arbiter_0__DOT__master_state))
                                      ? (IData)(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__adder_result)
                                      : 0U)),32);
        tracep->fullBit(oldp+659,((0U == (IData)(vlSelf->top__DOT__arbiter_0__DOT__axi_lite_s2_0__DOT__write_state))));
        tracep->fullBit(oldp+660,(((2U == (IData)(vlSelf->top__DOT__arbiter_0__DOT__master_state))
                                    ? (1U & (IData)(vlSelf->top__DOT__awvalid_1))
                                    : 0U)));
        tracep->fullBit(oldp+661,(((2U == (IData)(vlSelf->top__DOT__arbiter_0__DOT__master_state))
                                    ? (1U & (IData)(vlSelf->top__DOT__wvalid_1))
                                    : 0U)));
        tracep->fullQData(oldp+662,(((2U == (IData)(vlSelf->top__DOT__arbiter_0__DOT__master_state))
                                      ? vlSelf->top__DOT__src2
                                      : 0ULL)),64);
        tracep->fullCData(oldp+664,(((2U == (IData)(vlSelf->top__DOT__arbiter_0__DOT__master_state))
                                      ? ((IData)(vlSelf->top__DOT__control_0__DOT__sb)
                                          ? 1U : ((IData)(vlSelf->top__DOT__control_0__DOT__sh)
                                                   ? 3U
                                                   : 
                                                  ((IData)(vlSelf->top__DOT__control_0__DOT__sw)
                                                    ? 0xfU
                                                    : 
                                                   ((IData)(vlSelf->top__DOT__control_0__DOT__sd)
                                                     ? 0xffU
                                                     : 0U))))
                                      : 0U)),8);
        tracep->fullCData(oldp+665,(vlSelf->top__DOT__arbiter_0__DOT__bresp),2);
        tracep->fullBit(oldp+666,(vlSelf->top__DOT__arbiter_0__DOT__bvalid));
        tracep->fullBit(oldp+667,(((2U == (IData)(vlSelf->top__DOT__arbiter_0__DOT__master_state))
                                    ? (IData)((1U == (IData)(vlSelf->top__DOT__mem0__DOT__write_state)))
                                    : 0U)));
        tracep->fullIData(oldp+668,(vlSelf->top__DOT__arbiter_0__DOT__axi_lite_s2_0__DOT__r_araddr),32);
        tracep->fullCData(oldp+669,(vlSelf->top__DOT__arbiter_0__DOT__axi_lite_s2_0__DOT__state),3);
        tracep->fullCData(oldp+670,(vlSelf->top__DOT__arbiter_0__DOT__axi_lite_s2_0__DOT__write_state),3);
        tracep->fullBit(oldp+671,(vlSelf->top__DOT__arbiter_0__DOT__axi_lite_s2_0__DOT__mux0__DOT__i0__DOT__lut_out));
        tracep->fullBit(oldp+672,(vlSelf->top__DOT__arbiter_0__DOT__axi_lite_s2_0__DOT__mux0__DOT__i0__DOT__hit));
        tracep->fullIData(oldp+673,(vlSelf->top__DOT__arbiter_0__DOT__axi_lite_s2_0__DOT__mux0__DOT__i0__DOT__i),32);
        tracep->fullBit(oldp+674,(vlSelf->clk));
        tracep->fullBit(oldp+675,(vlSelf->rst));
        tracep->fullIData(oldp+676,(vlSelf->inst),32);
        tracep->fullQData(oldp+677,(vlSelf->cpupc),64);
        tracep->fullBit(oldp+679,(vlSelf->ebreak));
        tracep->fullBit(oldp+680,(vlSelf->not_have));
        tracep->fullQData(oldp+681,(vlSelf->dnpc),64);
        tracep->fullBit(oldp+683,(vlSelf->inst_finish));
        tracep->fullBit(oldp+684,(vlSelf->mem_finish));
        tracep->fullBit(oldp+685,(vlSelf->inst_update));
        tracep->fullIData(oldp+686,((IData)(vlSelf->cpupc)),32);
        tracep->fullCData(oldp+687,((0x1fU & (vlSelf->inst 
                                              >> 0xfU))),5);
        tracep->fullCData(oldp+688,((0x1fU & (vlSelf->inst 
                                              >> 0x14U))),5);
        tracep->fullCData(oldp+689,((0x1fU & (vlSelf->inst 
                                              >> 7U))),5);
        tracep->fullCData(oldp+690,((0xffU & ((IData)(1U) 
                                              << (7U 
                                                  & (vlSelf->inst 
                                                     >> 0xcU))))),8);
        tracep->fullBit(oldp+691,((((((((((((((((((
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
                                   & (IData)(vlSelf->mem_finish))));
        tracep->fullBit(oldp+692,((((IData)(vlSelf->top__DOT__control_0__DOT__csrrw) 
                                    | (IData)(vlSelf->top__DOT__control_0__DOT__csrrs)) 
                                   & (IData)(vlSelf->mem_finish))));
        tracep->fullBit(oldp+693,(((IData)(vlSelf->mem_finish) 
                                   & ((IData)(vlSelf->top__DOT__e_inst) 
                                      >> 1U))));
        tracep->fullCData(oldp+694,((0x7fU & vlSelf->inst)),7);
        tracep->fullCData(oldp+695,((7U & (vlSelf->inst 
                                           >> 0xcU))),3);
        tracep->fullCData(oldp+696,((vlSelf->inst >> 0x19U)),7);
        tracep->fullQData(oldp+697,((((- (QData)((IData)(
                                                         (vlSelf->inst 
                                                          >> 0x1fU)))) 
                                      << 0xcU) | (QData)((IData)(
                                                                 ((0xfe0U 
                                                                   & (vlSelf->inst 
                                                                      >> 0x14U)) 
                                                                  | (0x1fU 
                                                                     & (vlSelf->inst 
                                                                        >> 7U))))))),64);
        tracep->fullQData(oldp+699,((((- (QData)((IData)(
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
        tracep->fullQData(oldp+701,((((- (QData)((IData)(
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
        tracep->fullIData(oldp+703,(((1U == (IData)(vlSelf->top__DOT__arbiter_0__DOT__master_state))
                                      ? (IData)(vlSelf->cpupc)
                                      : ((2U == (IData)(vlSelf->top__DOT__arbiter_0__DOT__master_state))
                                          ? (IData)(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__adder_result)
                                          : 0U))),32);
        tracep->fullBit(oldp+704,(1U));
        tracep->fullCData(oldp+705,(0U),3);
        tracep->fullCData(oldp+706,(1U),3);
        tracep->fullCData(oldp+707,(2U),3);
        tracep->fullIData(oldp+708,(4U),32);
        tracep->fullIData(oldp+709,(2U),32);
        tracep->fullIData(oldp+710,(0x40U),32);
        tracep->fullIData(oldp+711,(0U),32);
        tracep->fullQData(oldp+712,(0ULL),64);
        tracep->fullIData(oldp+714,(0x42U),32);
        tracep->fullIData(oldp+715,(1U),32);
        tracep->fullIData(oldp+716,(0x41U),32);
        tracep->fullQData(oldp+717,(0x80000000ULL),64);
        tracep->fullIData(oldp+719,(3U),32);
        tracep->fullSData(oldp+720,(0x340U),12);
        tracep->fullBit(oldp+721,(0U));
        tracep->fullIData(oldp+722,(8U),32);
        tracep->fullIData(oldp+723,(0xaU),32);
        tracep->fullIData(oldp+724,(0xcU),32);
        tracep->fullIData(oldp+725,(0x4cU),32);
        tracep->fullIData(oldp+726,(0x44U),32);
        tracep->fullIData(oldp+727,(0x43U),32);
        tracep->fullIData(oldp+728,(5U),32);
        tracep->fullCData(oldp+729,(2U),2);
        tracep->fullQData(oldp+730,(0xbULL),64);
        tracep->fullCData(oldp+732,(3U),2);
        tracep->fullCData(oldp+733,(3U),3);
        tracep->fullCData(oldp+734,(4U),3);
        tracep->fullIData(oldp+735,(7U),32);
        tracep->fullIData(oldp+736,(0x47U),32);
        tracep->fullBit(oldp+737,(0U));
        tracep->fullCData(oldp+738,(0x21U),8);
    }
}
