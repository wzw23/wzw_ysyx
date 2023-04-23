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
        tracep->declBit(c+699,"clk", false,-1);
        tracep->declBit(c+700,"rst", false,-1);
        tracep->declBus(c+701,"inst", false,-1, 31,0);
        tracep->declQuad(c+702,"cpupc", false,-1, 63,0);
        tracep->declBit(c+704,"ebreak", false,-1);
        tracep->declBit(c+705,"not_have", false,-1);
        tracep->declQuad(c+706,"dnpc", false,-1, 63,0);
        tracep->declBit(c+708,"inst_finish", false,-1);
        tracep->declBit(c+709,"mem_finish", false,-1);
        tracep->declBit(c+710,"inst_update", false,-1);
        tracep->declBit(c+699,"top clk", false,-1);
        tracep->declBit(c+700,"top rst", false,-1);
        tracep->declBus(c+701,"top inst", false,-1, 31,0);
        tracep->declQuad(c+702,"top cpupc", false,-1, 63,0);
        tracep->declBit(c+704,"top ebreak", false,-1);
        tracep->declBit(c+705,"top not_have", false,-1);
        tracep->declQuad(c+706,"top dnpc", false,-1, 63,0);
        tracep->declBit(c+708,"top inst_finish", false,-1);
        tracep->declBit(c+709,"top mem_finish", false,-1);
        tracep->declBit(c+710,"top inst_update", false,-1);
        tracep->declQuad(c+1,"top c_rdata", false,-1, 63,0);
        tracep->declBus(c+3,"top sel_nextpc", false,-1, 1,0);
        tracep->declQuad(c+4,"top imm", false,-1, 63,0);
        tracep->declQuad(c+6,"top src1", false,-1, 63,0);
        tracep->declQuad(c+8,"top src2", false,-1, 63,0);
        tracep->declBus(c+733,"top araddr_0", false,-1, 31,0);
        tracep->declBit(c+734,"top arvalid_0", false,-1);
        tracep->declBit(c+735,"top arready_0", false,-1);
        tracep->declQuad(c+736,"top rdata_0", false,-1, 63,0);
        tracep->declBus(c+738,"top rresp_0", false,-1, 1,0);
        tracep->declBit(c+739,"top rvalid_0", false,-1);
        tracep->declBit(c+740,"top rready_0", false,-1);
        tracep->declBus(c+711,"top rs1", false,-1, 4,0);
        tracep->declBus(c+712,"top rs2", false,-1, 4,0);
        tracep->declBus(c+713,"top rd", false,-1, 4,0);
        tracep->declBus(c+10,"top op_d", false,-1, 11,0);
        tracep->declBus(c+11,"top fu_7_d", false,-1, 4,0);
        tracep->declBus(c+714,"top fu_3_d", false,-1, 7,0);
        tracep->declBus(c+12,"top c_raddr", false,-1, 1,0);
        tracep->declBus(c+12,"top c_waddr", false,-1, 1,0);
        tracep->declBus(c+13,"top e_inst", false,-1, 2,0);
        tracep->declBus(c+14,"top sel_alu_src1", false,-1, 3,0);
        tracep->declBus(c+15,"top sel_alu_src2", false,-1, 2,0);
        tracep->declBus(c+16,"top alu_control", false,-1, 16,0);
        tracep->declBit(c+715,"top rf_wen", false,-1);
        tracep->declBus(c+17,"top sel_rf_res", false,-1, 2,0);
        tracep->declBit(c+18,"top data_ram_en", false,-1);
        tracep->declBit(c+19,"top data_ram_wen", false,-1);
        tracep->declBus(c+20,"top alu_equal", false,-1, 2,0);
        tracep->declBus(c+21,"top l_choose", false,-1, 6,0);
        tracep->declBit(c+22,"top w_choose", false,-1);
        tracep->declBit(c+23,"top c_wchoose", false,-1);
        tracep->declBit(c+716,"top c_wen", false,-1);
        tracep->declBus(c+24,"top wmask", false,-1, 7,0);
        tracep->declBit(c+717,"top c_wen1_2", false,-1);
        tracep->declQuad(c+25,"top alu_result", false,-1, 63,0);
        tracep->declQuad(c+27,"top ram_addr", false,-1, 63,0);
        tracep->declQuad(c+29,"top ram_data", false,-1, 63,0);
        tracep->declQuad(c+31,"top wdata", false,-1, 63,0);
        tracep->declBit(c+699,"top i0 clk", false,-1);
        tracep->declBit(c+700,"top i0 rst", false,-1);
        tracep->declQuad(c+702,"top i0 cpupc", false,-1, 63,0);
        tracep->declBus(c+3,"top i0 sel_nextpc", false,-1, 1,0);
        tracep->declQuad(c+4,"top i0 imm", false,-1, 63,0);
        tracep->declQuad(c+6,"top i0 src1", false,-1, 63,0);
        tracep->declBus(c+701,"top i0 inst", false,-1, 31,0);
        tracep->declQuad(c+706,"top i0 dnpc", false,-1, 63,0);
        tracep->declQuad(c+1,"top i0 c_rdata", false,-1, 63,0);
        tracep->declBit(c+710,"top i0 inst_update", false,-1);
        tracep->declBit(c+709,"top i0 mem_finish", false,-1);
        tracep->declQuad(c+33,"top i0 dnpc_0", false,-1, 63,0);
        tracep->declQuad(c+35,"top i0 rdata_u", false,-1, 63,0);
        tracep->declBus(c+718,"top i0 araddr", false,-1, 31,0);
        tracep->declBus(c+741,"top i0 mux4 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+742,"top i0 mux4 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+743,"top i0 mux4 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+33,"top i0 mux4 out", false,-1, 63,0);
        tracep->declBus(c+3,"top i0 mux4 key", false,-1, 1,0);
        tracep->declArray(c+37,"top i0 mux4 lut", false,-1, 263,0);
        tracep->declBus(c+741,"top i0 mux4 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+742,"top i0 mux4 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+743,"top i0 mux4 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+744,"top i0 mux4 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+33,"top i0 mux4 i0 out", false,-1, 63,0);
        tracep->declBus(c+3,"top i0 mux4 i0 key", false,-1, 1,0);
        tracep->declQuad(c+745,"top i0 mux4 i0 default_out", false,-1, 63,0);
        tracep->declArray(c+37,"top i0 mux4 i0 lut", false,-1, 263,0);
        tracep->declBus(c+747,"top i0 mux4 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declArray(c+46+i*3,"top i0 mux4 i0 pair_list", true,(i+0), 65,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+58+i*1,"top i0 mux4 i0 key_list", true,(i+0), 1,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declQuad(c+62+i*2,"top i0 mux4 i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+70,"top i0 mux4 i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+72,"top i0 mux4 i0 hit", false,-1);
        tracep->declBus(c+748,"top i0 mux4 i0 i", false,-1, 31,0);
        tracep->declBus(c+742,"top i0 mux5 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+749,"top i0 mux5 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+743,"top i0 mux5 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+706,"top i0 mux5 out", false,-1, 63,0);
        tracep->declBus(c+709,"top i0 mux5 key", false,-1, 0,0);
        tracep->declArray(c+73,"top i0 mux5 lut", false,-1, 129,0);
        tracep->declBus(c+742,"top i0 mux5 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+749,"top i0 mux5 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+743,"top i0 mux5 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+744,"top i0 mux5 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+706,"top i0 mux5 i0 out", false,-1, 63,0);
        tracep->declBus(c+709,"top i0 mux5 i0 key", false,-1, 0,0);
        tracep->declQuad(c+745,"top i0 mux5 i0 default_out", false,-1, 63,0);
        tracep->declArray(c+73,"top i0 mux5 i0 lut", false,-1, 129,0);
        tracep->declBus(c+750,"top i0 mux5 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declArray(c+78+i*3,"top i0 mux5 i0 pair_list", true,(i+0), 64,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+84+i*1,"top i0 mux5 i0 key_list", true,(i+0), 0,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+86+i*2,"top i0 mux5 i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+90,"top i0 mux5 i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+92,"top i0 mux5 i0 hit", false,-1);
        tracep->declBus(c+751,"top i0 mux5 i0 i", false,-1, 31,0);
        tracep->declBus(c+743,"top i0 i0 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+752,"top i0 i0 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+699,"top i0 i0 clk", false,-1);
        tracep->declBit(c+700,"top i0 i0 rst", false,-1);
        tracep->declQuad(c+706,"top i0 i0 din", false,-1, 63,0);
        tracep->declQuad(c+702,"top i0 i0 dout", false,-1, 63,0);
        tracep->declBit(c+754,"top i0 i0 wen", false,-1);
        tracep->declBit(c+699,"top i0 icache0 clk", false,-1);
        tracep->declBit(c+700,"top i0 icache0 rst", false,-1);
        tracep->declBus(c+718,"top i0 icache0 araddr", false,-1, 31,0);
        tracep->declQuad(c+35,"top i0 icache0 rdata", false,-1, 63,0);
        tracep->declBit(c+710,"top i0 icache0 inst_update", false,-1);
        tracep->declBit(c+709,"top i0 icache0 mem_finish", false,-1);
        tracep->declBus(c+755,"top i0 icache0 CACHE_SIZE", false,-1, 31,0);
        tracep->declBus(c+743,"top i0 icache0 LINE_SIZE", false,-1, 31,0);
        tracep->declBus(c+743,"top i0 icache0 NUM_LINES", false,-1, 31,0);
        tracep->declBus(c+756,"top i0 icache0 TAGARRAY_WIDTH", false,-1, 31,0);
        tracep->declBus(c+757,"top i0 icache0 INDEX_WIDTH", false,-1, 31,0);
        tracep->declBus(c+757,"top i0 icache0 OFFSET_WIDTH", false,-1, 31,0);
        tracep->declBus(c+758,"top i0 icache0 TAG_WIDTH", false,-1, 31,0);
        tracep->declBus(c+719,"top i0 icache0 addr_offset", false,-1, 5,0);
        tracep->declBus(c+720,"top i0 icache0 addr_index", false,-1, 5,0);
        tracep->declBus(c+721,"top i0 icache0 addr_tag", false,-1, 19,0);
        tracep->declQuad(c+93,"top i0 icache0 rdata_axi", false,-1, 63,0);
        tracep->declBus(c+744,"top i0 icache0 CACHE_IDLE", false,-1, 31,0);
        tracep->declBus(c+749,"top i0 icache0 CACHE_UPDATE_BEGIN", false,-1, 31,0);
        tracep->declBus(c+742,"top i0 icache0 CACHE_MEMREAD", false,-1, 31,0);
        tracep->declBus(c+759,"top i0 icache0 CACHE_GET", false,-1, 31,0);
        tracep->declBus(c+95,"top i0 icache0 cache_state", false,-1, 2,0);
        tracep->declBit(c+96,"top i0 icache0 rvalid", false,-1);
        tracep->declBit(c+97,"top i0 icache0 rready", false,-1);
        tracep->declBit(c+98,"top i0 icache0 arready", false,-1);
        tracep->declBit(c+99,"top i0 icache0 rlast", false,-1);
        tracep->declBus(c+722,"top i0 icache0 araddr_block", false,-1, 31,0);
        tracep->declBus(c+100,"top i0 icache0 d_len", false,-1, 2,0);
        tracep->declBus(c+760,"top i0 icache0 READ_IDLE", false,-1, 2,0);
        tracep->declBus(c+761,"top i0 icache0 READ_ARREADY", false,-1, 2,0);
        tracep->declBus(c+762,"top i0 icache0 READ_TRANS", false,-1, 2,0);
        tracep->declBus(c+763,"top i0 icache0 READ_FINISH", false,-1, 2,0);
        tracep->declBus(c+101,"top i0 icache0 state", false,-1, 2,0);
        tracep->declBit(c+102,"top i0 icache0 arvalid", false,-1);
        tracep->declBus(c+764,"top i0 icache0 arburst", false,-1, 1,0);
        tracep->declBus(c+765,"top i0 icache0 arlen", false,-1, 7,0);
        tracep->declBus(c+763,"top i0 icache0 arsize", false,-1, 2,0);
        tracep->declBus(c+103,"top i0 icache0 rresp", false,-1, 1,0);
        tracep->declBus(c+104,"top i0 icache0 unnamedblk1 i", false,-1, 31,0);
        tracep->declBit(c+699,"top i0 icache0 axi_full_s0 clk", false,-1);
        tracep->declBit(c+700,"top i0 icache0 axi_full_s0 rst", false,-1);
        tracep->declBus(c+722,"top i0 icache0 axi_full_s0 araddr", false,-1, 31,0);
        tracep->declBit(c+102,"top i0 icache0 axi_full_s0 arvalid", false,-1);
        tracep->declBus(c+764,"top i0 icache0 axi_full_s0 arburst", false,-1, 1,0);
        tracep->declBus(c+765,"top i0 icache0 axi_full_s0 arlen", false,-1, 7,0);
        tracep->declBus(c+763,"top i0 icache0 axi_full_s0 arsize", false,-1, 2,0);
        tracep->declBit(c+98,"top i0 icache0 axi_full_s0 arready", false,-1);
        tracep->declQuad(c+93,"top i0 icache0 axi_full_s0 rdata", false,-1, 63,0);
        tracep->declBus(c+103,"top i0 icache0 axi_full_s0 rresp", false,-1, 1,0);
        tracep->declBit(c+96,"top i0 icache0 axi_full_s0 rvalid", false,-1);
        tracep->declBit(c+99,"top i0 icache0 axi_full_s0 rlast", false,-1);
        tracep->declBit(c+97,"top i0 icache0 axi_full_s0 rready", false,-1);
        tracep->declBus(c+105,"top i0 icache0 axi_full_s0 r_araddr", false,-1, 31,0);
        tracep->declBus(c+106,"top i0 icache0 axi_full_s0 c_arlen", false,-1, 7,0);
        tracep->declBus(c+760,"top i0 icache0 axi_full_s0 READ_IDLE", false,-1, 2,0);
        tracep->declBus(c+761,"top i0 icache0 axi_full_s0 READ_ARVALID", false,-1, 2,0);
        tracep->declBus(c+762,"top i0 icache0 axi_full_s0 READ_TRANS", false,-1, 2,0);
        tracep->declBus(c+763,"top i0 icache0 axi_full_s0 READ_FINISH", false,-1, 2,0);
        tracep->declBus(c+107,"top i0 icache0 axi_full_s0 state", false,-1, 2,0);
        tracep->declBus(c+701,"top id_0 inst", false,-1, 31,0);
        tracep->declBus(c+711,"top id_0 rs1", false,-1, 4,0);
        tracep->declBus(c+712,"top id_0 rs2", false,-1, 4,0);
        tracep->declBus(c+713,"top id_0 rd", false,-1, 4,0);
        tracep->declQuad(c+4,"top id_0 imm", false,-1, 63,0);
        tracep->declBus(c+10,"top id_0 op_d", false,-1, 11,0);
        tracep->declBus(c+11,"top id_0 fu_7_d", false,-1, 4,0);
        tracep->declBus(c+714,"top id_0 fu_3_d", false,-1, 7,0);
        tracep->declBus(c+13,"top id_0 e_inst", false,-1, 2,0);
        tracep->declBus(c+12,"top id_0 c_raddr", false,-1, 1,0);
        tracep->declBus(c+12,"top id_0 c_waddr", false,-1, 1,0);
        tracep->declBus(c+723,"top id_0 op", false,-1, 6,0);
        tracep->declBus(c+724,"top id_0 fu_3", false,-1, 2,0);
        tracep->declBus(c+725,"top id_0 fu_7", false,-1, 6,0);
        tracep->declQuad(c+108,"top id_0 immi", false,-1, 63,0);
        tracep->declQuad(c+726,"top id_0 imms", false,-1, 63,0);
        tracep->declQuad(c+728,"top id_0 immb", false,-1, 63,0);
        tracep->declQuad(c+110,"top id_0 immu", false,-1, 63,0);
        tracep->declQuad(c+730,"top id_0 immj", false,-1, 63,0);
        tracep->declBus(c+759,"top id_0 de_3_8 LEN", false,-1, 31,0);
        tracep->declBus(c+766,"top id_0 de_3_8 OLEN", false,-1, 31,0);
        tracep->declBus(c+724,"top id_0 de_3_8 sig", false,-1, 2,0);
        tracep->declBus(c+714,"top id_0 de_3_8 o_h", false,-1, 7,0);
        tracep->declBus(c+767,"top id_0 mux0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+768,"top id_0 mux0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+743,"top id_0 mux0 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+4,"top id_0 mux0 out", false,-1, 63,0);
        tracep->declBus(c+10,"top id_0 mux0 key", false,-1, 11,0);
        tracep->declArray(c+112,"top id_0 mux0 lut", false,-1, 759,0);
        tracep->declBus(c+767,"top id_0 mux0 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+768,"top id_0 mux0 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+743,"top id_0 mux0 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+744,"top id_0 mux0 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+4,"top id_0 mux0 i0 out", false,-1, 63,0);
        tracep->declBus(c+10,"top id_0 mux0 i0 key", false,-1, 11,0);
        tracep->declQuad(c+745,"top id_0 mux0 i0 default_out", false,-1, 63,0);
        tracep->declArray(c+112,"top id_0 mux0 i0 lut", false,-1, 759,0);
        tracep->declBus(c+769,"top id_0 mux0 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<10; i++) {
                tracep->declArray(c+136+i*3,"top id_0 mux0 i0 pair_list", true,(i+0), 75,0);}}
        {int i; for (i=0; i<10; i++) {
                tracep->declBus(c+166+i*1,"top id_0 mux0 i0 key_list", true,(i+0), 11,0);}}
        {int i; for (i=0; i<10; i++) {
                tracep->declQuad(c+176+i*2,"top id_0 mux0 i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+196,"top id_0 mux0 i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+198,"top id_0 mux0 i0 hit", false,-1);
        tracep->declBus(c+770,"top id_0 mux0 i0 i", false,-1, 31,0);
        tracep->declBus(c+10,"top control_0 op_d", false,-1, 11,0);
        tracep->declBus(c+11,"top control_0 fu_7_d", false,-1, 4,0);
        tracep->declBus(c+714,"top control_0 fu_3_d", false,-1, 7,0);
        tracep->declBus(c+14,"top control_0 sel_alu_src1", false,-1, 3,0);
        tracep->declBus(c+15,"top control_0 sel_alu_src2", false,-1, 2,0);
        tracep->declBus(c+16,"top control_0 alu_control", false,-1, 16,0);
        tracep->declBit(c+715,"top control_0 rf_wen", false,-1);
        tracep->declBus(c+17,"top control_0 sel_rf_res", false,-1, 2,0);
        tracep->declBit(c+18,"top control_0 data_ram_en", false,-1);
        tracep->declBit(c+19,"top control_0 data_ram_wen", false,-1);
        tracep->declBus(c+24,"top control_0 wmask", false,-1, 7,0);
        tracep->declBus(c+20,"top control_0 alu_equal", false,-1, 2,0);
        tracep->declBus(c+3,"top control_0 sel_nextpc", false,-1, 1,0);
        tracep->declBus(c+21,"top control_0 l_choose", false,-1, 6,0);
        tracep->declBit(c+705,"top control_0 not_have", false,-1);
        tracep->declBit(c+22,"top control_0 w_choose", false,-1);
        tracep->declBit(c+23,"top control_0 c_wchoose", false,-1);
        tracep->declBit(c+716,"top control_0 c_wen", false,-1);
        tracep->declBus(c+13,"top control_0 e_inst", false,-1, 2,0);
        tracep->declBit(c+710,"top control_0 inst_update", false,-1);
        tracep->declBit(c+717,"top control_0 c_wen1_2", false,-1);
        tracep->declBit(c+709,"top control_0 mem_finish", false,-1);
        tracep->declBit(c+199,"top control_0 addi", false,-1);
        tracep->declBit(c+200,"top control_0 csrrw", false,-1);
        tracep->declBit(c+23,"top control_0 csrrs", false,-1);
        tracep->declBit(c+201,"top control_0 andi", false,-1);
        tracep->declBit(c+202,"top control_0 xori", false,-1);
        tracep->declBit(c+203,"top control_0 ori", false,-1);
        tracep->declBit(c+204,"top control_0 sll", false,-1);
        tracep->declBit(c+205,"top control_0 srl", false,-1);
        tracep->declBit(c+206,"top control_0 sra", false,-1);
        tracep->declBit(c+207,"top control_0 sllw", false,-1);
        tracep->declBit(c+208,"top control_0 srlw", false,-1);
        tracep->declBit(c+209,"top control_0 sraw", false,-1);
        tracep->declBit(c+210,"top control_0 addiw", false,-1);
        tracep->declBit(c+211,"top control_0 slliw", false,-1);
        tracep->declBit(c+212,"top control_0 srliw", false,-1);
        tracep->declBit(c+213,"top control_0 sraiw", false,-1);
        tracep->declBit(c+214,"top control_0 auipc", false,-1);
        tracep->declBit(c+215,"top control_0 lui", false,-1);
        tracep->declBit(c+216,"top control_0 jal", false,-1);
        tracep->declBit(c+217,"top control_0 jalr", false,-1);
        tracep->declBit(c+218,"top control_0 sd", false,-1);
        tracep->declBit(c+219,"top control_0 sh", false,-1);
        tracep->declBit(c+220,"top control_0 sw", false,-1);
        tracep->declBit(c+221,"top control_0 sb", false,-1);
        tracep->declBit(c+222,"top control_0 lw", false,-1);
        tracep->declBit(c+223,"top control_0 lwu", false,-1);
        tracep->declBit(c+224,"top control_0 lh", false,-1);
        tracep->declBit(c+225,"top control_0 lhu", false,-1);
        tracep->declBit(c+226,"top control_0 lb", false,-1);
        tracep->declBit(c+227,"top control_0 lbu", false,-1);
        tracep->declBit(c+228,"top control_0 ld", false,-1);
        tracep->declBit(c+229,"top control_0 addw", false,-1);
        tracep->declBit(c+230,"top control_0 subw", false,-1);
        tracep->declBit(c+231,"top control_0 mulw", false,-1);
        tracep->declBit(c+232,"top control_0 divw", false,-1);
        tracep->declBit(c+233,"top control_0 divuw", false,-1);
        tracep->declBit(c+234,"top control_0 remw", false,-1);
        tracep->declBit(c+235,"top control_0 remuw", false,-1);
        tracep->declBit(c+236,"top control_0 divu", false,-1);
        tracep->declBit(c+237,"top control_0 div", false,-1);
        tracep->declBit(c+238,"top control_0 rem", false,-1);
        tracep->declBit(c+239,"top control_0 remu", false,-1);
        tracep->declBit(c+240,"top control_0 Add", false,-1);
        tracep->declBit(c+241,"top control_0 Mul", false,-1);
        tracep->declBit(c+242,"top control_0 And", false,-1);
        tracep->declBit(c+243,"top control_0 Xor", false,-1);
        tracep->declBit(c+244,"top control_0 Or", false,-1);
        tracep->declBit(c+245,"top control_0 sltu", false,-1);
        tracep->declBit(c+246,"top control_0 slt", false,-1);
        tracep->declBit(c+247,"top control_0 sub", false,-1);
        tracep->declBit(c+248,"top control_0 sltiu", false,-1);
        tracep->declBit(c+249,"top control_0 srai", false,-1);
        tracep->declBit(c+250,"top control_0 slli", false,-1);
        tracep->declBit(c+251,"top control_0 srli", false,-1);
        tracep->declBit(c+252,"top control_0 beq", false,-1);
        tracep->declBit(c+253,"top control_0 bne", false,-1);
        tracep->declBit(c+254,"top control_0 bge", false,-1);
        tracep->declBit(c+255,"top control_0 bgeu", false,-1);
        tracep->declBit(c+256,"top control_0 bltu", false,-1);
        tracep->declBit(c+257,"top control_0 blt", false,-1);
        tracep->declBit(c+699,"top exe_0 clk", false,-1);
        tracep->declBit(c+700,"top exe_0 rst", false,-1);
        tracep->declQuad(c+4,"top exe_0 imm", false,-1, 63,0);
        tracep->declBus(c+711,"top exe_0 rs1", false,-1, 4,0);
        tracep->declBus(c+712,"top exe_0 rs2", false,-1, 4,0);
        tracep->declBus(c+713,"top exe_0 rd", false,-1, 4,0);
        tracep->declBus(c+14,"top exe_0 sel_alu_src1", false,-1, 3,0);
        tracep->declBus(c+15,"top exe_0 sel_alu_src2", false,-1, 2,0);
        tracep->declBus(c+16,"top exe_0 alu_control", false,-1, 16,0);
        tracep->declBit(c+715,"top exe_0 rf_wen", false,-1);
        tracep->declQuad(c+31,"top exe_0 wdata", false,-1, 63,0);
        tracep->declQuad(c+25,"top exe_0 alu_result", false,-1, 63,0);
        tracep->declQuad(c+27,"top exe_0 ram_addr", false,-1, 63,0);
        tracep->declQuad(c+6,"top exe_0 src1", false,-1, 63,0);
        tracep->declBus(c+20,"top exe_0 alu_equal", false,-1, 2,0);
        tracep->declQuad(c+702,"top exe_0 cpupc", false,-1, 63,0);
        tracep->declBit(c+22,"top exe_0 w_choose", false,-1);
        tracep->declQuad(c+8,"top exe_0 src2", false,-1, 63,0);
        tracep->declBit(c+23,"top exe_0 c_wchoose", false,-1);
        tracep->declBit(c+716,"top exe_0 c_wen", false,-1);
        tracep->declBus(c+12,"top exe_0 c_raddr", false,-1, 1,0);
        tracep->declBus(c+12,"top exe_0 c_waddr", false,-1, 1,0);
        tracep->declQuad(c+1,"top exe_0 c_rdata", false,-1, 63,0);
        tracep->declBus(c+13,"top exe_0 e_inst", false,-1, 2,0);
        tracep->declBit(c+717,"top exe_0 c_wen1_2", false,-1);
        tracep->declQuad(c+258,"top exe_0 alu_src1", false,-1, 63,0);
        tracep->declQuad(c+260,"top exe_0 alu_src2", false,-1, 63,0);
        tracep->declQuad(c+262,"top exe_0 c_wdata", false,-1, 63,0);
        tracep->declBus(c+741,"top exe_0 mux1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+741,"top exe_0 mux1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+743,"top exe_0 mux1 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+258,"top exe_0 mux1 out", false,-1, 63,0);
        tracep->declBus(c+14,"top exe_0 mux1 key", false,-1, 3,0);
        tracep->declArray(c+264,"top exe_0 mux1 lut", false,-1, 271,0);
        tracep->declBus(c+741,"top exe_0 mux1 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+741,"top exe_0 mux1 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+743,"top exe_0 mux1 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+744,"top exe_0 mux1 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+258,"top exe_0 mux1 i0 out", false,-1, 63,0);
        tracep->declBus(c+14,"top exe_0 mux1 i0 key", false,-1, 3,0);
        tracep->declQuad(c+745,"top exe_0 mux1 i0 default_out", false,-1, 63,0);
        tracep->declArray(c+264,"top exe_0 mux1 i0 lut", false,-1, 271,0);
        tracep->declBus(c+771,"top exe_0 mux1 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declArray(c+273+i*3,"top exe_0 mux1 i0 pair_list", true,(i+0), 67,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+285+i*1,"top exe_0 mux1 i0 key_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declQuad(c+289+i*2,"top exe_0 mux1 i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+297,"top exe_0 mux1 i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+299,"top exe_0 mux1 i0 hit", false,-1);
        tracep->declBus(c+748,"top exe_0 mux1 i0 i", false,-1, 31,0);
        tracep->declBus(c+759,"top exe_0 mux2 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+759,"top exe_0 mux2 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+743,"top exe_0 mux2 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+260,"top exe_0 mux2 out", false,-1, 63,0);
        tracep->declBus(c+15,"top exe_0 mux2 key", false,-1, 2,0);
        tracep->declArray(c+300,"top exe_0 mux2 lut", false,-1, 200,0);
        tracep->declBus(c+759,"top exe_0 mux2 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+759,"top exe_0 mux2 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+743,"top exe_0 mux2 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+744,"top exe_0 mux2 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+260,"top exe_0 mux2 i0 out", false,-1, 63,0);
        tracep->declBus(c+15,"top exe_0 mux2 i0 key", false,-1, 2,0);
        tracep->declQuad(c+745,"top exe_0 mux2 i0 default_out", false,-1, 63,0);
        tracep->declArray(c+300,"top exe_0 mux2 i0 lut", false,-1, 200,0);
        tracep->declBus(c+772,"top exe_0 mux2 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declArray(c+307+i*3,"top exe_0 mux2 i0 pair_list", true,(i+0), 66,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+316+i*1,"top exe_0 mux2 i0 key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declQuad(c+319+i*2,"top exe_0 mux2 i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+325,"top exe_0 mux2 i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+327,"top exe_0 mux2 i0 hit", false,-1);
        tracep->declBus(c+773,"top exe_0 mux2 i0 i", false,-1, 31,0);
        tracep->declBus(c+742,"top exe_0 mux3 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+749,"top exe_0 mux3 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+743,"top exe_0 mux3 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+262,"top exe_0 mux3 out", false,-1, 63,0);
        tracep->declBus(c+23,"top exe_0 mux3 key", false,-1, 0,0);
        tracep->declArray(c+328,"top exe_0 mux3 lut", false,-1, 129,0);
        tracep->declBus(c+742,"top exe_0 mux3 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+749,"top exe_0 mux3 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+743,"top exe_0 mux3 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+744,"top exe_0 mux3 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+262,"top exe_0 mux3 i0 out", false,-1, 63,0);
        tracep->declBus(c+23,"top exe_0 mux3 i0 key", false,-1, 0,0);
        tracep->declQuad(c+745,"top exe_0 mux3 i0 default_out", false,-1, 63,0);
        tracep->declArray(c+328,"top exe_0 mux3 i0 lut", false,-1, 129,0);
        tracep->declBus(c+750,"top exe_0 mux3 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declArray(c+333+i*3,"top exe_0 mux3 i0 pair_list", true,(i+0), 64,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+339+i*1,"top exe_0 mux3 i0 key_list", true,(i+0), 0,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+341+i*2,"top exe_0 mux3 i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+345,"top exe_0 mux3 i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+347,"top exe_0 mux3 i0 hit", false,-1);
        tracep->declBus(c+751,"top exe_0 mux3 i0 i", false,-1, 31,0);
        tracep->declBus(c+774,"top exe_0 r0 ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+743,"top exe_0 r0 DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+699,"top exe_0 r0 clk", false,-1);
        tracep->declBit(c+700,"top exe_0 r0 rst", false,-1);
        tracep->declBit(c+715,"top exe_0 r0 wen", false,-1);
        tracep->declQuad(c+31,"top exe_0 r0 wdata", false,-1, 63,0);
        tracep->declBus(c+713,"top exe_0 r0 waddr", false,-1, 4,0);
        tracep->declBus(c+711,"top exe_0 r0 raddr1", false,-1, 4,0);
        tracep->declBus(c+712,"top exe_0 r0 raddr2", false,-1, 4,0);
        tracep->declQuad(c+6,"top exe_0 r0 rdata1", false,-1, 63,0);
        tracep->declQuad(c+8,"top exe_0 r0 rdata2", false,-1, 63,0);
        tracep->declBus(c+12,"top exe_0 r0 c_raddr", false,-1, 1,0);
        tracep->declQuad(c+1,"top exe_0 r0 c_rdata", false,-1, 63,0);
        tracep->declQuad(c+262,"top exe_0 r0 c_wdata", false,-1, 63,0);
        tracep->declBus(c+12,"top exe_0 r0 c_waddr", false,-1, 1,0);
        tracep->declBit(c+716,"top exe_0 r0 c_wen", false,-1);
        tracep->declBit(c+717,"top exe_0 r0 c_wen1_2", false,-1);
        tracep->declQuad(c+702,"top exe_0 r0 c_wdata1", false,-1, 63,0);
        tracep->declBus(c+775,"top exe_0 r0 c_waddr1", false,-1, 1,0);
        tracep->declQuad(c+776,"top exe_0 r0 c_wdata2", false,-1, 63,0);
        tracep->declBus(c+778,"top exe_0 r0 c_waddr2", false,-1, 1,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+348+i*2,"top exe_0 r0 rf", true,(i+0), 63,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declQuad(c+412+i*2,"top exe_0 r0 csr", true,(i+0), 63,0);}}
        tracep->declBus(c+420,"top exe_0 r0 i", false,-1, 31,0);
        tracep->declQuad(c+258,"top exe_0 alu2 alu_src1", false,-1, 63,0);
        tracep->declQuad(c+260,"top exe_0 alu2 alu_src2", false,-1, 63,0);
        tracep->declBus(c+16,"top exe_0 alu2 alu_control", false,-1, 16,0);
        tracep->declQuad(c+25,"top exe_0 alu2 alu_result", false,-1, 63,0);
        tracep->declQuad(c+27,"top exe_0 alu2 ram_addr", false,-1, 63,0);
        tracep->declBus(c+20,"top exe_0 alu2 alu_equal", false,-1, 2,0);
        tracep->declBit(c+22,"top exe_0 alu2 w_choose", false,-1);
        tracep->declBit(c+421,"top exe_0 alu2 op_add", false,-1);
        tracep->declBit(c+422,"top exe_0 alu2 op_sub", false,-1);
        tracep->declBit(c+423,"top exe_0 alu2 op_slt", false,-1);
        tracep->declBit(c+424,"top exe_0 alu2 op_sltu", false,-1);
        tracep->declBit(c+425,"top exe_0 alu2 op_and", false,-1);
        tracep->declBit(c+426,"top exe_0 alu2 op_nor", false,-1);
        tracep->declBit(c+427,"top exe_0 alu2 op_or", false,-1);
        tracep->declBit(c+428,"top exe_0 alu2 op_xor", false,-1);
        tracep->declBit(c+429,"top exe_0 alu2 op_sll", false,-1);
        tracep->declBit(c+430,"top exe_0 alu2 op_srl", false,-1);
        tracep->declBit(c+431,"top exe_0 alu2 op_sra", false,-1);
        tracep->declBit(c+432,"top exe_0 alu2 op_lui", false,-1);
        tracep->declBit(c+433,"top exe_0 alu2 op_mul", false,-1);
        tracep->declBit(c+434,"top exe_0 alu2 op_divu", false,-1);
        tracep->declBit(c+435,"top exe_0 alu2 op_div", false,-1);
        tracep->declBit(c+436,"top exe_0 alu2 op_remu", false,-1);
        tracep->declBit(c+437,"top exe_0 alu2 op_rem", false,-1);
        tracep->declQuad(c+27,"top exe_0 alu2 add_sub_result", false,-1, 63,0);
        tracep->declQuad(c+438,"top exe_0 alu2 slt_result", false,-1, 63,0);
        tracep->declQuad(c+440,"top exe_0 alu2 sltu_result", false,-1, 63,0);
        tracep->declQuad(c+442,"top exe_0 alu2 and_result", false,-1, 63,0);
        tracep->declQuad(c+444,"top exe_0 alu2 nor_result", false,-1, 63,0);
        tracep->declQuad(c+446,"top exe_0 alu2 or_result", false,-1, 63,0);
        tracep->declQuad(c+448,"top exe_0 alu2 xor_result", false,-1, 63,0);
        tracep->declQuad(c+450,"top exe_0 alu2 sll_result", false,-1, 63,0);
        tracep->declQuad(c+452,"top exe_0 alu2 srl_result", false,-1, 63,0);
        tracep->declQuad(c+454,"top exe_0 alu2 sra_result", false,-1, 63,0);
        tracep->declQuad(c+456,"top exe_0 alu2 lui_result", false,-1, 63,0);
        tracep->declQuad(c+458,"top exe_0 alu2 mul_result", false,-1, 63,0);
        tracep->declQuad(c+460,"top exe_0 alu2 divu_result", false,-1, 63,0);
        tracep->declQuad(c+462,"top exe_0 alu2 div_result", false,-1, 63,0);
        tracep->declQuad(c+464,"top exe_0 alu2 remu_result", false,-1, 63,0);
        tracep->declQuad(c+466,"top exe_0 alu2 rem_result", false,-1, 63,0);
        tracep->declQuad(c+258,"top exe_0 alu2 adder_a", false,-1, 63,0);
        tracep->declQuad(c+468,"top exe_0 alu2 adder_b", false,-1, 63,0);
        tracep->declBit(c+470,"top exe_0 alu2 adder_cin", false,-1);
        tracep->declQuad(c+27,"top exe_0 alu2 adder_result", false,-1, 63,0);
        tracep->declBit(c+471,"top exe_0 alu2 adder_cout", false,-1);
        tracep->declQuad(c+472,"top exe_0 alu2 alu_result_uw", false,-1, 63,0);
        tracep->declQuad(c+474,"top exe_0 alu2 alu_result_w", false,-1, 63,0);
        tracep->declBus(c+742,"top exe_0 alu2 mux1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+749,"top exe_0 alu2 mux1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+743,"top exe_0 alu2 mux1 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+25,"top exe_0 alu2 mux1 out", false,-1, 63,0);
        tracep->declBus(c+22,"top exe_0 alu2 mux1 key", false,-1, 0,0);
        tracep->declArray(c+476,"top exe_0 alu2 mux1 lut", false,-1, 129,0);
        tracep->declBus(c+742,"top exe_0 alu2 mux1 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+749,"top exe_0 alu2 mux1 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+743,"top exe_0 alu2 mux1 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+744,"top exe_0 alu2 mux1 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+25,"top exe_0 alu2 mux1 i0 out", false,-1, 63,0);
        tracep->declBus(c+22,"top exe_0 alu2 mux1 i0 key", false,-1, 0,0);
        tracep->declQuad(c+745,"top exe_0 alu2 mux1 i0 default_out", false,-1, 63,0);
        tracep->declArray(c+476,"top exe_0 alu2 mux1 i0 lut", false,-1, 129,0);
        tracep->declBus(c+750,"top exe_0 alu2 mux1 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declArray(c+481+i*3,"top exe_0 alu2 mux1 i0 pair_list", true,(i+0), 64,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+487+i*1,"top exe_0 alu2 mux1 i0 key_list", true,(i+0), 0,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+489+i*2,"top exe_0 alu2 mux1 i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+493,"top exe_0 alu2 mux1 i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+495,"top exe_0 alu2 mux1 i0 hit", false,-1);
        tracep->declBus(c+751,"top exe_0 alu2 mux1 i0 i", false,-1, 31,0);
        tracep->declBus(c+743,"top mem_2 ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+743,"top mem_2 DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+699,"top mem_2 clk", false,-1);
        tracep->declBit(c+700,"top mem_2 rst", false,-1);
        tracep->declBit(c+18,"top mem_2 r_ren", false,-1);
        tracep->declQuad(c+27,"top mem_2 r_raddr", false,-1, 63,0);
        tracep->declQuad(c+29,"top mem_2 r_rdata", false,-1, 63,0);
        tracep->declQuad(c+27,"top mem_2 r_waddr", false,-1, 63,0);
        tracep->declBus(c+24,"top mem_2 r_mask", false,-1, 7,0);
        tracep->declBit(c+19,"top mem_2 r_wen", false,-1);
        tracep->declQuad(c+8,"top mem_2 r_wdata", false,-1, 63,0);
        tracep->declBus(c+21,"top mem_2 l_choose", false,-1, 6,0);
        tracep->declBit(c+710,"top mem_2 inst_update", false,-1);
        tracep->declBit(c+709,"top mem_2 mem_finish", false,-1);
        tracep->declBit(c+708,"top mem_2 inst_finish", false,-1);
        tracep->declBit(c+496,"top mem_2 cache_finish", false,-1);
        tracep->declBit(c+497,"top mem_2 use_cache", false,-1);
        tracep->declQuad(c+498,"top mem_2 r_rdata_ld", false,-1, 63,0);
        tracep->declQuad(c+500,"top mem_2 r_rdata_ld_cache", false,-1, 63,0);
        tracep->declQuad(c+502,"top mem_2 r_rdata_ld_device", false,-1, 63,0);
        tracep->declQuad(c+504,"top mem_2 r_rdata_lw", false,-1, 63,0);
        tracep->declQuad(c+506,"top mem_2 r_rdata_lwu", false,-1, 63,0);
        tracep->declQuad(c+508,"top mem_2 r_rdata_lh", false,-1, 63,0);
        tracep->declQuad(c+510,"top mem_2 r_rdata_lhu", false,-1, 63,0);
        tracep->declQuad(c+512,"top mem_2 r_rdata_lb", false,-1, 63,0);
        tracep->declQuad(c+514,"top mem_2 r_rdata_lbu", false,-1, 63,0);
        tracep->declBit(c+732,"top mem_2 device_finish", false,-1);
        tracep->declBus(c+779,"top mem_2 mux3 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+779,"top mem_2 mux3 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+743,"top mem_2 mux3 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+29,"top mem_2 mux3 out", false,-1, 63,0);
        tracep->declBus(c+21,"top mem_2 mux3 key", false,-1, 6,0);
        tracep->declArray(c+516,"top mem_2 mux3 lut", false,-1, 496,0);
        tracep->declBus(c+779,"top mem_2 mux3 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+779,"top mem_2 mux3 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+743,"top mem_2 mux3 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+744,"top mem_2 mux3 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+29,"top mem_2 mux3 i0 out", false,-1, 63,0);
        tracep->declBus(c+21,"top mem_2 mux3 i0 key", false,-1, 6,0);
        tracep->declQuad(c+745,"top mem_2 mux3 i0 default_out", false,-1, 63,0);
        tracep->declArray(c+516,"top mem_2 mux3 i0 lut", false,-1, 496,0);
        tracep->declBus(c+780,"top mem_2 mux3 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<7; i++) {
                tracep->declArray(c+532+i*3,"top mem_2 mux3 i0 pair_list", true,(i+0), 70,0);}}
        {int i; for (i=0; i<7; i++) {
                tracep->declBus(c+553+i*1,"top mem_2 mux3 i0 key_list", true,(i+0), 6,0);}}
        {int i; for (i=0; i<7; i++) {
                tracep->declQuad(c+560+i*2,"top mem_2 mux3 i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+574,"top mem_2 mux3 i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+576,"top mem_2 mux3 i0 hit", false,-1);
        tracep->declBus(c+781,"top mem_2 mux3 i0 i", false,-1, 31,0);
        tracep->declBus(c+749,"top mem_2 finish WIDTH", false,-1, 31,0);
        tracep->declBus(c+782,"top mem_2 finish RESET_VAL", false,-1, 0,0);
        tracep->declBit(c+699,"top mem_2 finish clk", false,-1);
        tracep->declBit(c+700,"top mem_2 finish rst", false,-1);
        tracep->declBus(c+709,"top mem_2 finish din", false,-1, 0,0);
        tracep->declBus(c+708,"top mem_2 finish dout", false,-1, 0,0);
        tracep->declBit(c+754,"top mem_2 finish wen", false,-1);
        tracep->declBit(c+699,"top mem_2 dcache_0 clk", false,-1);
        tracep->declBit(c+700,"top mem_2 dcache_0 rst", false,-1);
        tracep->declBit(c+497,"top mem_2 dcache_0 use_cache", false,-1);
        tracep->declBit(c+18,"top mem_2 dcache_0 r_ren", false,-1);
        tracep->declBus(c+577,"top mem_2 dcache_0 raddr", false,-1, 31,0);
        tracep->declQuad(c+500,"top mem_2 dcache_0 rdata_align", false,-1, 63,0);
        tracep->declBit(c+19,"top mem_2 dcache_0 r_wen", false,-1);
        tracep->declBus(c+577,"top mem_2 dcache_0 waddr", false,-1, 31,0);
        tracep->declQuad(c+8,"top mem_2 dcache_0 wdata", false,-1, 63,0);
        tracep->declBus(c+24,"top mem_2 dcache_0 wmask", false,-1, 7,0);
        tracep->declBit(c+710,"top mem_2 dcache_0 inst_update", false,-1);
        tracep->declBit(c+496,"top mem_2 dcache_0 cache_finish", false,-1);
        tracep->declBus(c+755,"top mem_2 dcache_0 CACHE_SIZE", false,-1, 31,0);
        tracep->declBus(c+743,"top mem_2 dcache_0 LINE_SIZE", false,-1, 31,0);
        tracep->declBus(c+743,"top mem_2 dcache_0 NUM_LINES", false,-1, 31,0);
        tracep->declBus(c+783,"top mem_2 dcache_0 TAGARRAY_WIDTH", false,-1, 31,0);
        tracep->declBus(c+757,"top mem_2 dcache_0 INDEX_WIDTH", false,-1, 31,0);
        tracep->declBus(c+757,"top mem_2 dcache_0 OFFSET_WIDTH", false,-1, 31,0);
        tracep->declBus(c+758,"top mem_2 dcache_0 TAG_WIDTH", false,-1, 31,0);
        tracep->declBus(c+578,"top mem_2 dcache_0 araddr", false,-1, 31,0);
        tracep->declQuad(c+579,"top mem_2 dcache_0 rdata", false,-1, 63,0);
        tracep->declBus(c+581,"top mem_2 dcache_0 araddr_offset", false,-1, 5,0);
        tracep->declBus(c+582,"top mem_2 dcache_0 araddr_index", false,-1, 5,0);
        tracep->declBus(c+583,"top mem_2 dcache_0 araddr_tag", false,-1, 19,0);
        tracep->declBus(c+584,"top mem_2 dcache_0 waddr_index", false,-1, 5,0);
        tracep->declBus(c+585,"top mem_2 dcache_0 waddr_offset", false,-1, 5,0);
        tracep->declBus(c+586,"top mem_2 dcache_0 waddr_tag", false,-1, 19,0);
        tracep->declQuad(c+587,"top mem_2 dcache_0 rdata_axi", false,-1, 63,0);
        tracep->declBit(c+589,"top mem_2 dcache_0 rlast", false,-1);
        tracep->declBus(c+744,"top mem_2 dcache_0 CACHE_IDLE", false,-1, 31,0);
        tracep->declBus(c+749,"top mem_2 dcache_0 CACHE_UPDATE_BEGIN", false,-1, 31,0);
        tracep->declBus(c+742,"top mem_2 dcache_0 CACHE_MEMWRITE", false,-1, 31,0);
        tracep->declBus(c+759,"top mem_2 dcache_0 CACHE_MEMREAD", false,-1, 31,0);
        tracep->declBus(c+741,"top mem_2 dcache_0 CACHE_GET", false,-1, 31,0);
        tracep->declBus(c+774,"top mem_2 dcache_0 CACHE_FINISH", false,-1, 31,0);
        tracep->declBus(c+757,"top mem_2 dcache_0 CACHE_WRITE", false,-1, 31,0);
        tracep->declBus(c+590,"top mem_2 dcache_0 cache_state", false,-1, 2,0);
        tracep->declBit(c+591,"top mem_2 dcache_0 rcache_en", false,-1);
        tracep->declBit(c+592,"top mem_2 dcache_0 wcache_en", false,-1);
        tracep->declBit(c+593,"top mem_2 dcache_0 mem_write_begin", false,-1);
        tracep->declBit(c+594,"top mem_2 dcache_0 mem_write_finish", false,-1);
        tracep->declBit(c+595,"top mem_2 dcache_0 mem_read_finish", false,-1);
        tracep->declBit(c+596,"top mem_2 dcache_0 mem_read_begin", false,-1);
        tracep->declBus(c+597,"top mem_2 dcache_0 araddr_block", false,-1, 31,0);
        tracep->declBus(c+598,"top mem_2 dcache_0 wraddr_block", false,-1, 31,0);
        tracep->declBit(c+599,"top mem_2 dcache_0 rvalid", false,-1);
        tracep->declBit(c+600,"top mem_2 dcache_0 rready", false,-1);
        tracep->declBit(c+601,"top mem_2 dcache_0 arready", false,-1);
        tracep->declBit(c+602,"top mem_2 dcache_0 arvalid", false,-1);
        tracep->declBus(c+603,"top mem_2 dcache_0 d_r_len", false,-1, 2,0);
        tracep->declBus(c+604,"top mem_2 dcache_0 d_w_len", false,-1, 2,0);
        tracep->declBus(c+764,"top mem_2 dcache_0 arburst", false,-1, 1,0);
        tracep->declBus(c+765,"top mem_2 dcache_0 arlen", false,-1, 7,0);
        tracep->declBus(c+763,"top mem_2 dcache_0 arsize", false,-1, 2,0);
        tracep->declBus(c+605,"top mem_2 dcache_0 rresp", false,-1, 1,0);
        tracep->declBus(c+760,"top mem_2 dcache_0 READ_IDLE", false,-1, 2,0);
        tracep->declBus(c+761,"top mem_2 dcache_0 READ_ARREADY", false,-1, 2,0);
        tracep->declBus(c+762,"top mem_2 dcache_0 READ_TRANS", false,-1, 2,0);
        tracep->declBus(c+763,"top mem_2 dcache_0 READ_FINISH", false,-1, 2,0);
        tracep->declBus(c+606,"top mem_2 dcache_0 read_state", false,-1, 2,0);
        tracep->declBus(c+607,"top mem_2 dcache_0 write_state", false,-1, 2,0);
        tracep->declBus(c+764,"top mem_2 dcache_0 awburst", false,-1, 1,0);
        tracep->declBus(c+765,"top mem_2 dcache_0 awlen", false,-1, 7,0);
        tracep->declBit(c+608,"top mem_2 dcache_0 awready", false,-1);
        tracep->declBit(c+609,"top mem_2 dcache_0 wlast", false,-1);
        tracep->declBit(c+610,"top mem_2 dcache_0 wready", false,-1);
        tracep->declBus(c+611,"top mem_2 dcache_0 bresp", false,-1, 1,0);
        tracep->declBit(c+612,"top mem_2 dcache_0 bready", false,-1);
        tracep->declBit(c+613,"top mem_2 dcache_0 bvalid", false,-1);
        tracep->declBus(c+760,"top mem_2 dcache_0 WRITE_IDLE", false,-1, 2,0);
        tracep->declBus(c+761,"top mem_2 dcache_0 WRITE_AW_READY", false,-1, 2,0);
        tracep->declBus(c+762,"top mem_2 dcache_0 WRITE_W_READY", false,-1, 2,0);
        tracep->declBus(c+763,"top mem_2 dcache_0 WRITE_FINISH", false,-1, 2,0);
        tracep->declBit(c+614,"top mem_2 dcache_0 awvalid", false,-1);
        tracep->declBit(c+615,"top mem_2 dcache_0 wvalid", false,-1);
        tracep->declQuad(c+616,"top mem_2 dcache_0 wdata_axi", false,-1, 63,0);
        tracep->declBus(c+598,"top mem_2 dcache_0 awaddr", false,-1, 31,0);
        tracep->declQuad(c+616,"top mem_2 dcache_0 r_wdata", false,-1, 63,0);
        tracep->declBus(c+784,"top mem_2 dcache_0 wstrb", false,-1, 7,0);
        tracep->declBus(c+618,"top mem_2 dcache_0 c_awlen", false,-1, 7,0);
        tracep->declQuad(c+619,"top mem_2 dcache_0 wmask_full", false,-1, 63,0);
        tracep->declQuad(c+621,"top mem_2 dcache_0 wdata_align", false,-1, 63,0);
        tracep->declQuad(c+623,"top mem_2 dcache_0 wmask_align", false,-1, 63,0);
        tracep->declBus(c+785,"top mem_2 dcache_0 testaraddr", false,-1, 31,0);
        tracep->declBus(c+786,"top mem_2 dcache_0 testaraddr_offset", false,-1, 5,0);
        tracep->declBus(c+787,"top mem_2 dcache_0 testaraddr_index", false,-1, 5,0);
        tracep->declQuad(c+625,"top mem_2 dcache_0 testdata", false,-1, 63,0);
        tracep->declBus(c+627,"top mem_2 dcache_0 testtag", false,-1, 21,0);
        tracep->declBus(c+628,"top mem_2 dcache_0 unnamedblk1 i", false,-1, 31,0);
        tracep->declBus(c+629,"top mem_2 dcache_0 unnamedblk2 i", false,-1, 31,0);
        tracep->declBus(c+630,"top mem_2 dcache_0 unnamedblk2 unnamedblk3 j", false,-1, 31,0);
        tracep->declBit(c+699,"top mem_2 dcache_0 axi_full_s2_0 clk", false,-1);
        tracep->declBit(c+700,"top mem_2 dcache_0 axi_full_s2_0 rst", false,-1);
        tracep->declBus(c+597,"top mem_2 dcache_0 axi_full_s2_0 araddr", false,-1, 31,0);
        tracep->declBit(c+602,"top mem_2 dcache_0 axi_full_s2_0 arvalid", false,-1);
        tracep->declBus(c+764,"top mem_2 dcache_0 axi_full_s2_0 arburst", false,-1, 1,0);
        tracep->declBus(c+765,"top mem_2 dcache_0 axi_full_s2_0 arlen", false,-1, 7,0);
        tracep->declBus(c+763,"top mem_2 dcache_0 axi_full_s2_0 arsize", false,-1, 2,0);
        tracep->declBit(c+601,"top mem_2 dcache_0 axi_full_s2_0 arready", false,-1);
        tracep->declQuad(c+587,"top mem_2 dcache_0 axi_full_s2_0 rdata", false,-1, 63,0);
        tracep->declBus(c+605,"top mem_2 dcache_0 axi_full_s2_0 rresp", false,-1, 1,0);
        tracep->declBit(c+599,"top mem_2 dcache_0 axi_full_s2_0 rvalid", false,-1);
        tracep->declBit(c+589,"top mem_2 dcache_0 axi_full_s2_0 rlast", false,-1);
        tracep->declBit(c+600,"top mem_2 dcache_0 axi_full_s2_0 rready", false,-1);
        tracep->declBus(c+598,"top mem_2 dcache_0 axi_full_s2_0 awaddr", false,-1, 31,0);
        tracep->declBit(c+614,"top mem_2 dcache_0 axi_full_s2_0 awvalid", false,-1);
        tracep->declBus(c+764,"top mem_2 dcache_0 axi_full_s2_0 awburst", false,-1, 1,0);
        tracep->declBus(c+765,"top mem_2 dcache_0 axi_full_s2_0 awlen", false,-1, 7,0);
        tracep->declBit(c+608,"top mem_2 dcache_0 axi_full_s2_0 awready", false,-1);
        tracep->declQuad(c+616,"top mem_2 dcache_0 axi_full_s2_0 wdata", false,-1, 63,0);
        tracep->declBit(c+609,"top mem_2 dcache_0 axi_full_s2_0 wlast", false,-1);
        tracep->declBus(c+784,"top mem_2 dcache_0 axi_full_s2_0 wstrb", false,-1, 7,0);
        tracep->declBit(c+615,"top mem_2 dcache_0 axi_full_s2_0 wvalid", false,-1);
        tracep->declBit(c+610,"top mem_2 dcache_0 axi_full_s2_0 wready", false,-1);
        tracep->declBus(c+611,"top mem_2 dcache_0 axi_full_s2_0 bresp", false,-1, 1,0);
        tracep->declBit(c+613,"top mem_2 dcache_0 axi_full_s2_0 bvalid", false,-1);
        tracep->declBit(c+612,"top mem_2 dcache_0 axi_full_s2_0 bready", false,-1);
        tracep->declBus(c+631,"top mem_2 dcache_0 axi_full_s2_0 r_araddr", false,-1, 31,0);
        tracep->declBus(c+632,"top mem_2 dcache_0 axi_full_s2_0 c_arlen", false,-1, 7,0);
        tracep->declBus(c+788,"top mem_2 dcache_0 axi_full_s2_0 c_awlen", false,-1, 7,0);
        tracep->declBus(c+633,"top mem_2 dcache_0 axi_full_s2_0 r_awaddr", false,-1, 31,0);
        tracep->declBit(c+634,"top mem_2 dcache_0 axi_full_s2_0 testwrite", false,-1);
        tracep->declBus(c+760,"top mem_2 dcache_0 axi_full_s2_0 READ_IDLE", false,-1, 2,0);
        tracep->declBus(c+761,"top mem_2 dcache_0 axi_full_s2_0 READ_ARVALID", false,-1, 2,0);
        tracep->declBus(c+762,"top mem_2 dcache_0 axi_full_s2_0 READ_TRANS", false,-1, 2,0);
        tracep->declBus(c+763,"top mem_2 dcache_0 axi_full_s2_0 READ_FINISH", false,-1, 2,0);
        tracep->declBus(c+635,"top mem_2 dcache_0 axi_full_s2_0 state", false,-1, 2,0);
        tracep->declBus(c+636,"top mem_2 dcache_0 axi_full_s2_0 write_state", false,-1, 2,0);
        tracep->declBus(c+760,"top mem_2 dcache_0 axi_full_s2_0 WRITE_IDLE", false,-1, 2,0);
        tracep->declBus(c+761,"top mem_2 dcache_0 axi_full_s2_0 WRITE_AW_VALID", false,-1, 2,0);
        tracep->declBus(c+762,"top mem_2 dcache_0 axi_full_s2_0 WRITE_W_VALID", false,-1, 2,0);
        tracep->declBus(c+763,"top mem_2 dcache_0 axi_full_s2_0 WRITE_FINISH", false,-1, 2,0);
        tracep->declBit(c+699,"top mem_2 mem_read_write_0 clk", false,-1);
        tracep->declBit(c+700,"top mem_2 mem_read_write_0 rst", false,-1);
        tracep->declBit(c+637,"top mem_2 mem_read_write_0 ren", false,-1);
        tracep->declQuad(c+27,"top mem_2 mem_read_write_0 r_raddr", false,-1, 63,0);
        tracep->declQuad(c+502,"top mem_2 mem_read_write_0 r_rdata", false,-1, 63,0);
        tracep->declBit(c+638,"top mem_2 mem_read_write_0 wen", false,-1);
        tracep->declQuad(c+27,"top mem_2 mem_read_write_0 r_waddr", false,-1, 63,0);
        tracep->declQuad(c+8,"top mem_2 mem_read_write_0 r_wdata", false,-1, 63,0);
        tracep->declBus(c+24,"top mem_2 mem_read_write_0 r_mask", false,-1, 7,0);
        tracep->declBit(c+710,"top mem_2 mem_read_write_0 inst_update", false,-1);
        tracep->declBit(c+639,"top mem_2 mem_read_write_0 use_device_en", false,-1);
        tracep->declBit(c+732,"top mem_2 mem_read_write_0 use_device_finish", false,-1);
        tracep->declBit(c+640,"top mem_2 mem_read_write_0 rvalid", false,-1);
        tracep->declBit(c+641,"top mem_2 mem_read_write_0 rready", false,-1);
        tracep->declBit(c+642,"top mem_2 mem_read_write_0 arready", false,-1);
        tracep->declBit(c+643,"top mem_2 mem_read_write_0 arvalid", false,-1);
        tracep->declBit(c+644,"top mem_2 mem_read_write_0 rlast", false,-1);
        tracep->declBus(c+645,"top mem_2 mem_read_write_0 d_r_len", false,-1, 2,0);
        tracep->declBus(c+646,"top mem_2 mem_read_write_0 d_w_len", false,-1, 2,0);
        tracep->declBus(c+764,"top mem_2 mem_read_write_0 arburst", false,-1, 1,0);
        tracep->declBus(c+789,"top mem_2 mem_read_write_0 arlen", false,-1, 7,0);
        tracep->declBus(c+763,"top mem_2 mem_read_write_0 arsize", false,-1, 2,0);
        tracep->declBus(c+647,"top mem_2 mem_read_write_0 rresp", false,-1, 1,0);
        tracep->declQuad(c+648,"top mem_2 mem_read_write_0 rdata_axi", false,-1, 63,0);
        tracep->declBus(c+760,"top mem_2 mem_read_write_0 READ_IDLE", false,-1, 2,0);
        tracep->declBus(c+761,"top mem_2 mem_read_write_0 READ_ARREADY", false,-1, 2,0);
        tracep->declBus(c+762,"top mem_2 mem_read_write_0 READ_TRANS", false,-1, 2,0);
        tracep->declBus(c+763,"top mem_2 mem_read_write_0 READ_FINISH", false,-1, 2,0);
        tracep->declBus(c+650,"top mem_2 mem_read_write_0 read_state", false,-1, 2,0);
        tracep->declBit(c+651,"top mem_2 mem_read_write_0 mem_read_finish", false,-1);
        tracep->declBit(c+652,"top mem_2 mem_read_write_0 mem_write_finish", false,-1);
        tracep->declBus(c+653,"top mem_2 mem_read_write_0 write_state", false,-1, 2,0);
        tracep->declBus(c+764,"top mem_2 mem_read_write_0 awburst", false,-1, 1,0);
        tracep->declBus(c+789,"top mem_2 mem_read_write_0 awlen", false,-1, 7,0);
        tracep->declBit(c+654,"top mem_2 mem_read_write_0 awready", false,-1);
        tracep->declBit(c+655,"top mem_2 mem_read_write_0 wlast", false,-1);
        tracep->declBit(c+656,"top mem_2 mem_read_write_0 wready", false,-1);
        tracep->declBus(c+657,"top mem_2 mem_read_write_0 bresp", false,-1, 1,0);
        tracep->declBit(c+658,"top mem_2 mem_read_write_0 bready", false,-1);
        tracep->declBit(c+659,"top mem_2 mem_read_write_0 bvalid", false,-1);
        tracep->declBus(c+760,"top mem_2 mem_read_write_0 WRITE_IDLE", false,-1, 2,0);
        tracep->declBus(c+761,"top mem_2 mem_read_write_0 WRITE_AW_READY", false,-1, 2,0);
        tracep->declBus(c+762,"top mem_2 mem_read_write_0 WRITE_TRANS", false,-1, 2,0);
        tracep->declBus(c+763,"top mem_2 mem_read_write_0 WRITE_FINISH", false,-1, 2,0);
        tracep->declBit(c+660,"top mem_2 mem_read_write_0 awvalid", false,-1);
        tracep->declBit(c+661,"top mem_2 mem_read_write_0 wvalid", false,-1);
        tracep->declQuad(c+662,"top mem_2 mem_read_write_0 wdata_axi", false,-1, 63,0);
        tracep->declBus(c+577,"top mem_2 mem_read_write_0 awaddr", false,-1, 31,0);
        tracep->declQuad(c+662,"top mem_2 mem_read_write_0 wdata", false,-1, 63,0);
        tracep->declBus(c+24,"top mem_2 mem_read_write_0 wstrb", false,-1, 7,0);
        tracep->declBus(c+664,"top mem_2 mem_read_write_0 c_awlen", false,-1, 7,0);
        tracep->declBit(c+699,"top mem_2 mem_read_write_0 axi_full_s2_1 clk", false,-1);
        tracep->declBit(c+700,"top mem_2 mem_read_write_0 axi_full_s2_1 rst", false,-1);
        tracep->declBus(c+577,"top mem_2 mem_read_write_0 axi_full_s2_1 araddr", false,-1, 31,0);
        tracep->declBit(c+643,"top mem_2 mem_read_write_0 axi_full_s2_1 arvalid", false,-1);
        tracep->declBus(c+764,"top mem_2 mem_read_write_0 axi_full_s2_1 arburst", false,-1, 1,0);
        tracep->declBus(c+789,"top mem_2 mem_read_write_0 axi_full_s2_1 arlen", false,-1, 7,0);
        tracep->declBus(c+763,"top mem_2 mem_read_write_0 axi_full_s2_1 arsize", false,-1, 2,0);
        tracep->declBit(c+642,"top mem_2 mem_read_write_0 axi_full_s2_1 arready", false,-1);
        tracep->declQuad(c+648,"top mem_2 mem_read_write_0 axi_full_s2_1 rdata", false,-1, 63,0);
        tracep->declBus(c+647,"top mem_2 mem_read_write_0 axi_full_s2_1 rresp", false,-1, 1,0);
        tracep->declBit(c+640,"top mem_2 mem_read_write_0 axi_full_s2_1 rvalid", false,-1);
        tracep->declBit(c+644,"top mem_2 mem_read_write_0 axi_full_s2_1 rlast", false,-1);
        tracep->declBit(c+641,"top mem_2 mem_read_write_0 axi_full_s2_1 rready", false,-1);
        tracep->declBus(c+577,"top mem_2 mem_read_write_0 axi_full_s2_1 awaddr", false,-1, 31,0);
        tracep->declBit(c+660,"top mem_2 mem_read_write_0 axi_full_s2_1 awvalid", false,-1);
        tracep->declBus(c+764,"top mem_2 mem_read_write_0 axi_full_s2_1 awburst", false,-1, 1,0);
        tracep->declBus(c+789,"top mem_2 mem_read_write_0 axi_full_s2_1 awlen", false,-1, 7,0);
        tracep->declBit(c+654,"top mem_2 mem_read_write_0 axi_full_s2_1 awready", false,-1);
        tracep->declQuad(c+662,"top mem_2 mem_read_write_0 axi_full_s2_1 wdata", false,-1, 63,0);
        tracep->declBit(c+655,"top mem_2 mem_read_write_0 axi_full_s2_1 wlast", false,-1);
        tracep->declBus(c+24,"top mem_2 mem_read_write_0 axi_full_s2_1 wstrb", false,-1, 7,0);
        tracep->declBit(c+661,"top mem_2 mem_read_write_0 axi_full_s2_1 wvalid", false,-1);
        tracep->declBit(c+656,"top mem_2 mem_read_write_0 axi_full_s2_1 wready", false,-1);
        tracep->declBus(c+657,"top mem_2 mem_read_write_0 axi_full_s2_1 bresp", false,-1, 1,0);
        tracep->declBit(c+659,"top mem_2 mem_read_write_0 axi_full_s2_1 bvalid", false,-1);
        tracep->declBit(c+658,"top mem_2 mem_read_write_0 axi_full_s2_1 bready", false,-1);
        tracep->declBus(c+665,"top mem_2 mem_read_write_0 axi_full_s2_1 r_araddr", false,-1, 31,0);
        tracep->declBus(c+666,"top mem_2 mem_read_write_0 axi_full_s2_1 c_arlen", false,-1, 7,0);
        tracep->declBus(c+790,"top mem_2 mem_read_write_0 axi_full_s2_1 c_awlen", false,-1, 7,0);
        tracep->declBus(c+667,"top mem_2 mem_read_write_0 axi_full_s2_1 r_awaddr", false,-1, 31,0);
        tracep->declBit(c+668,"top mem_2 mem_read_write_0 axi_full_s2_1 testwrite", false,-1);
        tracep->declBus(c+760,"top mem_2 mem_read_write_0 axi_full_s2_1 READ_IDLE", false,-1, 2,0);
        tracep->declBus(c+761,"top mem_2 mem_read_write_0 axi_full_s2_1 READ_ARVALID", false,-1, 2,0);
        tracep->declBus(c+762,"top mem_2 mem_read_write_0 axi_full_s2_1 READ_TRANS", false,-1, 2,0);
        tracep->declBus(c+763,"top mem_2 mem_read_write_0 axi_full_s2_1 READ_FINISH", false,-1, 2,0);
        tracep->declBus(c+669,"top mem_2 mem_read_write_0 axi_full_s2_1 state", false,-1, 2,0);
        tracep->declBus(c+670,"top mem_2 mem_read_write_0 axi_full_s2_1 write_state", false,-1, 2,0);
        tracep->declBus(c+760,"top mem_2 mem_read_write_0 axi_full_s2_1 WRITE_IDLE", false,-1, 2,0);
        tracep->declBus(c+761,"top mem_2 mem_read_write_0 axi_full_s2_1 WRITE_AW_VALID", false,-1, 2,0);
        tracep->declBus(c+762,"top mem_2 mem_read_write_0 axi_full_s2_1 WRITE_W_VALID", false,-1, 2,0);
        tracep->declBus(c+763,"top mem_2 mem_read_write_0 axi_full_s2_1 WRITE_FINISH", false,-1, 2,0);
        tracep->declQuad(c+29,"top wb0 r_data", false,-1, 63,0);
        tracep->declQuad(c+25,"top wb0 alu_result", false,-1, 63,0);
        tracep->declBus(c+17,"top wb0 sel_rf_res", false,-1, 2,0);
        tracep->declQuad(c+31,"top wb0 wdata", false,-1, 63,0);
        tracep->declQuad(c+1,"top wb0 c_rdata", false,-1, 63,0);
        tracep->declBus(c+759,"top wb0 mux3 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+759,"top wb0 mux3 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+743,"top wb0 mux3 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+31,"top wb0 mux3 out", false,-1, 63,0);
        tracep->declBus(c+17,"top wb0 mux3 key", false,-1, 2,0);
        tracep->declArray(c+671,"top wb0 mux3 lut", false,-1, 200,0);
        tracep->declBus(c+759,"top wb0 mux3 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+759,"top wb0 mux3 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+743,"top wb0 mux3 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+744,"top wb0 mux3 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+31,"top wb0 mux3 i0 out", false,-1, 63,0);
        tracep->declBus(c+17,"top wb0 mux3 i0 key", false,-1, 2,0);
        tracep->declQuad(c+745,"top wb0 mux3 i0 default_out", false,-1, 63,0);
        tracep->declArray(c+671,"top wb0 mux3 i0 lut", false,-1, 200,0);
        tracep->declBus(c+772,"top wb0 mux3 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declArray(c+678+i*3,"top wb0 mux3 i0 pair_list", true,(i+0), 66,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+687+i*1,"top wb0 mux3 i0 key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declQuad(c+690+i*2,"top wb0 mux3 i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+696,"top wb0 mux3 i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+698,"top wb0 mux3 i0 hit", false,-1);
        tracep->declBus(c+773,"top wb0 mux3 i0 i", false,-1, 31,0);
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
        tracep->fullQData(oldp+1,(vlSelf->top__DOT__c_rdata),64);
        tracep->fullCData(oldp+3,(vlSelf->top__DOT__sel_nextpc),2);
        tracep->fullQData(oldp+4,(vlSelf->top__DOT__imm),64);
        tracep->fullQData(oldp+6,(vlSelf->top__DOT__src1),64);
        tracep->fullQData(oldp+8,(vlSelf->top__DOT__src2),64);
        tracep->fullSData(oldp+10,(vlSelf->top__DOT__op_d),12);
        tracep->fullCData(oldp+11,(vlSelf->top__DOT__fu_7_d),5);
        tracep->fullCData(oldp+12,(vlSelf->top__DOT__c_raddr),2);
        tracep->fullCData(oldp+13,(vlSelf->top__DOT__e_inst),3);
        tracep->fullCData(oldp+14,(vlSelf->top__DOT__sel_alu_src1),4);
        tracep->fullCData(oldp+15,(vlSelf->top__DOT__sel_alu_src2),3);
        tracep->fullIData(oldp+16,(vlSelf->top__DOT__alu_control),17);
        tracep->fullCData(oldp+17,(vlSelf->top__DOT__sel_rf_res),3);
        tracep->fullBit(oldp+18,(vlSelf->top__DOT__data_ram_en));
        tracep->fullBit(oldp+19,(vlSelf->top__DOT__data_ram_wen));
        tracep->fullCData(oldp+20,(vlSelf->top__DOT__alu_equal),3);
        tracep->fullCData(oldp+21,(vlSelf->top__DOT__l_choose),7);
        tracep->fullBit(oldp+22,(vlSelf->top__DOT__w_choose));
        tracep->fullBit(oldp+23,(vlSelf->top__DOT__control_0__DOT__csrrs));
        tracep->fullCData(oldp+24,(vlSelf->top__DOT__wmask),8);
        tracep->fullQData(oldp+25,(vlSelf->top__DOT__alu_result),64);
        tracep->fullQData(oldp+27,(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__adder_result),64);
        tracep->fullQData(oldp+29,(vlSelf->top__DOT__ram_data),64);
        tracep->fullQData(oldp+31,(vlSelf->top__DOT__wdata),64);
        tracep->fullQData(oldp+33,(vlSelf->top__DOT__i0__DOT__dnpc_0),64);
        tracep->fullQData(oldp+35,(vlSelf->top__DOT__i0__DOT__rdata_u),64);
        tracep->fullWData(oldp+37,(vlSelf->top__DOT__i0__DOT____Vcellinp__mux4____pinNumber3),264);
        tracep->fullWData(oldp+46,(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__pair_list[0]),66);
        tracep->fullWData(oldp+49,(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__pair_list[1]),66);
        tracep->fullWData(oldp+52,(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__pair_list[2]),66);
        tracep->fullWData(oldp+55,(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__pair_list[3]),66);
        tracep->fullCData(oldp+58,(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__key_list[0]),2);
        tracep->fullCData(oldp+59,(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__key_list[1]),2);
        tracep->fullCData(oldp+60,(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__key_list[2]),2);
        tracep->fullCData(oldp+61,(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__key_list[3]),2);
        tracep->fullQData(oldp+62,(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+64,(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+66,(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+68,(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+70,(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+72,(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+73,(vlSelf->top__DOT__i0__DOT____Vcellinp__mux5____pinNumber3),130);
        tracep->fullWData(oldp+78,(vlSelf->top__DOT__i0__DOT__mux5__DOT__i0__DOT__pair_list[0]),65);
        tracep->fullWData(oldp+81,(vlSelf->top__DOT__i0__DOT__mux5__DOT__i0__DOT__pair_list[1]),65);
        tracep->fullBit(oldp+84,(vlSelf->top__DOT__i0__DOT__mux5__DOT__i0__DOT__key_list[0]));
        tracep->fullBit(oldp+85,(vlSelf->top__DOT__i0__DOT__mux5__DOT__i0__DOT__key_list[1]));
        tracep->fullQData(oldp+86,(vlSelf->top__DOT__i0__DOT__mux5__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+88,(vlSelf->top__DOT__i0__DOT__mux5__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+90,(vlSelf->top__DOT__i0__DOT__mux5__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+92,(vlSelf->top__DOT__i0__DOT__mux5__DOT__i0__DOT__hit));
        tracep->fullQData(oldp+93,(vlSelf->top__DOT__i0__DOT__icache0__DOT__rdata_axi),64);
        tracep->fullCData(oldp+95,(vlSelf->top__DOT__i0__DOT__icache0__DOT__cache_state),3);
        tracep->fullBit(oldp+96,(vlSelf->top__DOT__i0__DOT__icache0__DOT__rvalid));
        tracep->fullBit(oldp+97,(vlSelf->top__DOT__i0__DOT__icache0__DOT__rready));
        tracep->fullBit(oldp+98,((0U == (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__state))));
        tracep->fullBit(oldp+99,((8U == (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__c_arlen))));
        tracep->fullCData(oldp+100,(vlSelf->top__DOT__i0__DOT__icache0__DOT__d_len),3);
        tracep->fullCData(oldp+101,(vlSelf->top__DOT__i0__DOT__icache0__DOT__state),3);
        tracep->fullBit(oldp+102,(vlSelf->top__DOT__i0__DOT__icache0__DOT__arvalid));
        tracep->fullCData(oldp+103,(vlSelf->top__DOT__i0__DOT__icache0__DOT__rresp),2);
        tracep->fullIData(oldp+104,(vlSelf->top__DOT__i0__DOT__icache0__DOT__unnamedblk1__DOT__i),32);
        tracep->fullIData(oldp+105,(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__r_araddr),32);
        tracep->fullCData(oldp+106,(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__c_arlen),8);
        tracep->fullCData(oldp+107,(vlSelf->top__DOT__i0__DOT__icache0__DOT__axi_full_s0__DOT__state),3);
        tracep->fullQData(oldp+108,(vlSelf->top__DOT__id_0__DOT__immi),64);
        tracep->fullQData(oldp+110,(vlSelf->top__DOT__id_0__DOT__immu),64);
        tracep->fullWData(oldp+112,(vlSelf->top__DOT__id_0__DOT____Vcellinp__mux0____pinNumber3),760);
        tracep->fullWData(oldp+136,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[0]),76);
        tracep->fullWData(oldp+139,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[1]),76);
        tracep->fullWData(oldp+142,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[2]),76);
        tracep->fullWData(oldp+145,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[3]),76);
        tracep->fullWData(oldp+148,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[4]),76);
        tracep->fullWData(oldp+151,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[5]),76);
        tracep->fullWData(oldp+154,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[6]),76);
        tracep->fullWData(oldp+157,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[7]),76);
        tracep->fullWData(oldp+160,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[8]),76);
        tracep->fullWData(oldp+163,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__pair_list[9]),76);
        tracep->fullSData(oldp+166,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list[0]),12);
        tracep->fullSData(oldp+167,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list[1]),12);
        tracep->fullSData(oldp+168,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list[2]),12);
        tracep->fullSData(oldp+169,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list[3]),12);
        tracep->fullSData(oldp+170,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list[4]),12);
        tracep->fullSData(oldp+171,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list[5]),12);
        tracep->fullSData(oldp+172,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list[6]),12);
        tracep->fullSData(oldp+173,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list[7]),12);
        tracep->fullSData(oldp+174,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list[8]),12);
        tracep->fullSData(oldp+175,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__key_list[9]),12);
        tracep->fullQData(oldp+176,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+178,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+180,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+182,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+184,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list[4]),64);
        tracep->fullQData(oldp+186,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list[5]),64);
        tracep->fullQData(oldp+188,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list[6]),64);
        tracep->fullQData(oldp+190,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list[7]),64);
        tracep->fullQData(oldp+192,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list[8]),64);
        tracep->fullQData(oldp+194,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__data_list[9]),64);
        tracep->fullQData(oldp+196,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+198,(vlSelf->top__DOT__id_0__DOT__mux0__DOT__i0__DOT__hit));
        tracep->fullBit(oldp+199,(vlSelf->top__DOT__control_0__DOT__addi));
        tracep->fullBit(oldp+200,(vlSelf->top__DOT__control_0__DOT__csrrw));
        tracep->fullBit(oldp+201,(vlSelf->top__DOT__control_0__DOT__andi));
        tracep->fullBit(oldp+202,(vlSelf->top__DOT__control_0__DOT__xori));
        tracep->fullBit(oldp+203,(vlSelf->top__DOT__control_0__DOT__ori));
        tracep->fullBit(oldp+204,(vlSelf->top__DOT__control_0__DOT__sll));
        tracep->fullBit(oldp+205,(vlSelf->top__DOT__control_0__DOT__srl));
        tracep->fullBit(oldp+206,(vlSelf->top__DOT__control_0__DOT__sra));
        tracep->fullBit(oldp+207,(vlSelf->top__DOT__control_0__DOT__sllw));
        tracep->fullBit(oldp+208,(vlSelf->top__DOT__control_0__DOT__srlw));
        tracep->fullBit(oldp+209,(vlSelf->top__DOT__control_0__DOT__sraw));
        tracep->fullBit(oldp+210,(vlSelf->top__DOT__control_0__DOT__addiw));
        tracep->fullBit(oldp+211,(vlSelf->top__DOT__control_0__DOT__slliw));
        tracep->fullBit(oldp+212,(vlSelf->top__DOT__control_0__DOT__srliw));
        tracep->fullBit(oldp+213,(vlSelf->top__DOT__control_0__DOT__sraiw));
        tracep->fullBit(oldp+214,((1U & ((IData)(vlSelf->top__DOT__op_d) 
                                         >> 1U))));
        tracep->fullBit(oldp+215,((1U & (IData)(vlSelf->top__DOT__op_d))));
        tracep->fullBit(oldp+216,((1U & ((IData)(vlSelf->top__DOT__op_d) 
                                         >> 2U))));
        tracep->fullBit(oldp+217,(vlSelf->top__DOT__control_0__DOT__jalr));
        tracep->fullBit(oldp+218,(vlSelf->top__DOT__control_0__DOT__sd));
        tracep->fullBit(oldp+219,(vlSelf->top__DOT__control_0__DOT__sh));
        tracep->fullBit(oldp+220,(vlSelf->top__DOT__control_0__DOT__sw));
        tracep->fullBit(oldp+221,(vlSelf->top__DOT__control_0__DOT__sb));
        tracep->fullBit(oldp+222,(vlSelf->top__DOT__control_0__DOT__lw));
        tracep->fullBit(oldp+223,(vlSelf->top__DOT__control_0__DOT__lwu));
        tracep->fullBit(oldp+224,(vlSelf->top__DOT__control_0__DOT__lh));
        tracep->fullBit(oldp+225,(vlSelf->top__DOT__control_0__DOT__lhu));
        tracep->fullBit(oldp+226,(vlSelf->top__DOT__control_0__DOT__lb));
        tracep->fullBit(oldp+227,(vlSelf->top__DOT__control_0__DOT__lbu));
        tracep->fullBit(oldp+228,(vlSelf->top__DOT__control_0__DOT__ld));
        tracep->fullBit(oldp+229,(vlSelf->top__DOT__control_0__DOT__addw));
        tracep->fullBit(oldp+230,(vlSelf->top__DOT__control_0__DOT__subw));
        tracep->fullBit(oldp+231,(vlSelf->top__DOT__control_0__DOT__mulw));
        tracep->fullBit(oldp+232,(vlSelf->top__DOT__control_0__DOT__divw));
        tracep->fullBit(oldp+233,(vlSelf->top__DOT__control_0__DOT__divuw));
        tracep->fullBit(oldp+234,(vlSelf->top__DOT__control_0__DOT__remw));
        tracep->fullBit(oldp+235,(vlSelf->top__DOT__control_0__DOT__remuw));
        tracep->fullBit(oldp+236,(vlSelf->top__DOT__control_0__DOT__divu));
        tracep->fullBit(oldp+237,(vlSelf->top__DOT__control_0__DOT__div));
        tracep->fullBit(oldp+238,(vlSelf->top__DOT__control_0__DOT__rem));
        tracep->fullBit(oldp+239,(vlSelf->top__DOT__control_0__DOT__remu));
        tracep->fullBit(oldp+240,(vlSelf->top__DOT__control_0__DOT__Add));
        tracep->fullBit(oldp+241,(vlSelf->top__DOT__control_0__DOT__Mul));
        tracep->fullBit(oldp+242,(vlSelf->top__DOT__control_0__DOT__And));
        tracep->fullBit(oldp+243,(vlSelf->top__DOT__control_0__DOT__Xor));
        tracep->fullBit(oldp+244,(vlSelf->top__DOT__control_0__DOT__Or));
        tracep->fullBit(oldp+245,(vlSelf->top__DOT__control_0__DOT__sltu));
        tracep->fullBit(oldp+246,(vlSelf->top__DOT__control_0__DOT__slt));
        tracep->fullBit(oldp+247,(vlSelf->top__DOT__control_0__DOT__sub));
        tracep->fullBit(oldp+248,(vlSelf->top__DOT__control_0__DOT__sltiu));
        tracep->fullBit(oldp+249,(vlSelf->top__DOT__control_0__DOT__srai));
        tracep->fullBit(oldp+250,(vlSelf->top__DOT__control_0__DOT__slli));
        tracep->fullBit(oldp+251,(vlSelf->top__DOT__control_0__DOT__srli));
        tracep->fullBit(oldp+252,(vlSelf->top__DOT__control_0__DOT__beq));
        tracep->fullBit(oldp+253,(vlSelf->top__DOT__control_0__DOT__bne));
        tracep->fullBit(oldp+254,(vlSelf->top__DOT__control_0__DOT__bge));
        tracep->fullBit(oldp+255,(vlSelf->top__DOT__control_0__DOT__bgeu));
        tracep->fullBit(oldp+256,(vlSelf->top__DOT__control_0__DOT__bltu));
        tracep->fullBit(oldp+257,(vlSelf->top__DOT__control_0__DOT__blt));
        tracep->fullQData(oldp+258,(vlSelf->top__DOT__exe_0__DOT__alu_src1),64);
        tracep->fullQData(oldp+260,(vlSelf->top__DOT__exe_0__DOT__alu_src2),64);
        tracep->fullQData(oldp+262,(vlSelf->top__DOT__exe_0__DOT__c_wdata),64);
        tracep->fullWData(oldp+264,(vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux1____pinNumber3),272);
        tracep->fullWData(oldp+273,(vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__pair_list[0]),68);
        tracep->fullWData(oldp+276,(vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__pair_list[1]),68);
        tracep->fullWData(oldp+279,(vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__pair_list[2]),68);
        tracep->fullWData(oldp+282,(vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__pair_list[3]),68);
        tracep->fullCData(oldp+285,(vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__key_list[0]),4);
        tracep->fullCData(oldp+286,(vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__key_list[1]),4);
        tracep->fullCData(oldp+287,(vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__key_list[2]),4);
        tracep->fullCData(oldp+288,(vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__key_list[3]),4);
        tracep->fullQData(oldp+289,(vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+291,(vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+293,(vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+295,(vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+297,(vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+299,(vlSelf->top__DOT__exe_0__DOT__mux1__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+300,(vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux2____pinNumber3),201);
        tracep->fullWData(oldp+307,(vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__pair_list[0]),67);
        tracep->fullWData(oldp+310,(vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__pair_list[1]),67);
        tracep->fullWData(oldp+313,(vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__pair_list[2]),67);
        tracep->fullCData(oldp+316,(vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__key_list[0]),3);
        tracep->fullCData(oldp+317,(vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__key_list[1]),3);
        tracep->fullCData(oldp+318,(vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__key_list[2]),3);
        tracep->fullQData(oldp+319,(vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+321,(vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+323,(vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+325,(vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+327,(vlSelf->top__DOT__exe_0__DOT__mux2__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+328,(vlSelf->top__DOT__exe_0__DOT____Vcellinp__mux3____pinNumber3),130);
        tracep->fullWData(oldp+333,(vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__pair_list[0]),65);
        tracep->fullWData(oldp+336,(vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__pair_list[1]),65);
        tracep->fullBit(oldp+339,(vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__key_list[0]));
        tracep->fullBit(oldp+340,(vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__key_list[1]));
        tracep->fullQData(oldp+341,(vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+343,(vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+345,(vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+347,(vlSelf->top__DOT__exe_0__DOT__mux3__DOT__i0__DOT__hit));
        tracep->fullQData(oldp+348,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[0]),64);
        tracep->fullQData(oldp+350,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[1]),64);
        tracep->fullQData(oldp+352,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[2]),64);
        tracep->fullQData(oldp+354,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[3]),64);
        tracep->fullQData(oldp+356,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[4]),64);
        tracep->fullQData(oldp+358,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[5]),64);
        tracep->fullQData(oldp+360,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[6]),64);
        tracep->fullQData(oldp+362,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[7]),64);
        tracep->fullQData(oldp+364,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[8]),64);
        tracep->fullQData(oldp+366,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[9]),64);
        tracep->fullQData(oldp+368,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[10]),64);
        tracep->fullQData(oldp+370,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[11]),64);
        tracep->fullQData(oldp+372,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[12]),64);
        tracep->fullQData(oldp+374,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[13]),64);
        tracep->fullQData(oldp+376,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[14]),64);
        tracep->fullQData(oldp+378,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[15]),64);
        tracep->fullQData(oldp+380,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[16]),64);
        tracep->fullQData(oldp+382,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[17]),64);
        tracep->fullQData(oldp+384,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[18]),64);
        tracep->fullQData(oldp+386,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[19]),64);
        tracep->fullQData(oldp+388,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[20]),64);
        tracep->fullQData(oldp+390,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[21]),64);
        tracep->fullQData(oldp+392,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[22]),64);
        tracep->fullQData(oldp+394,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[23]),64);
        tracep->fullQData(oldp+396,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[24]),64);
        tracep->fullQData(oldp+398,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[25]),64);
        tracep->fullQData(oldp+400,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[26]),64);
        tracep->fullQData(oldp+402,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[27]),64);
        tracep->fullQData(oldp+404,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[28]),64);
        tracep->fullQData(oldp+406,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[29]),64);
        tracep->fullQData(oldp+408,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[30]),64);
        tracep->fullQData(oldp+410,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[31]),64);
        tracep->fullQData(oldp+412,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr[0]),64);
        tracep->fullQData(oldp+414,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr[1]),64);
        tracep->fullQData(oldp+416,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr[2]),64);
        tracep->fullQData(oldp+418,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__csr[3]),64);
        tracep->fullIData(oldp+420,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__i),32);
        tracep->fullBit(oldp+421,((1U & vlSelf->top__DOT__alu_control)));
        tracep->fullBit(oldp+422,((1U & (vlSelf->top__DOT__alu_control 
                                         >> 1U))));
        tracep->fullBit(oldp+423,((1U & (vlSelf->top__DOT__alu_control 
                                         >> 2U))));
        tracep->fullBit(oldp+424,((1U & (vlSelf->top__DOT__alu_control 
                                         >> 3U))));
        tracep->fullBit(oldp+425,((1U & (vlSelf->top__DOT__alu_control 
                                         >> 4U))));
        tracep->fullBit(oldp+426,((1U & (vlSelf->top__DOT__alu_control 
                                         >> 5U))));
        tracep->fullBit(oldp+427,((1U & (vlSelf->top__DOT__alu_control 
                                         >> 6U))));
        tracep->fullBit(oldp+428,((1U & (vlSelf->top__DOT__alu_control 
                                         >> 7U))));
        tracep->fullBit(oldp+429,((1U & (vlSelf->top__DOT__alu_control 
                                         >> 8U))));
        tracep->fullBit(oldp+430,((1U & (vlSelf->top__DOT__alu_control 
                                         >> 9U))));
        tracep->fullBit(oldp+431,((1U & (vlSelf->top__DOT__alu_control 
                                         >> 0xaU))));
        tracep->fullBit(oldp+432,((1U & (vlSelf->top__DOT__alu_control 
                                         >> 0xbU))));
        tracep->fullBit(oldp+433,((1U & (vlSelf->top__DOT__alu_control 
                                         >> 0xcU))));
        tracep->fullBit(oldp+434,((1U & (vlSelf->top__DOT__alu_control 
                                         >> 0xdU))));
        tracep->fullBit(oldp+435,((1U & (vlSelf->top__DOT__alu_control 
                                         >> 0xeU))));
        tracep->fullBit(oldp+436,((1U & (vlSelf->top__DOT__alu_control 
                                         >> 0xfU))));
        tracep->fullBit(oldp+437,((1U & (vlSelf->top__DOT__alu_control 
                                         >> 0x10U))));
        tracep->fullQData(oldp+438,(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__slt_result),64);
        tracep->fullQData(oldp+440,((QData)((IData)(
                                                    (1U 
                                                     & (~ (IData)(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__adder_cout)))))),64);
        tracep->fullQData(oldp+442,((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                                     & vlSelf->top__DOT__exe_0__DOT__alu_src2)),64);
        tracep->fullQData(oldp+444,((~ vlSelf->top__DOT__exe_0__DOT__alu2__DOT__or_result)),64);
        tracep->fullQData(oldp+446,(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__or_result),64);
        tracep->fullQData(oldp+448,((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                                     ^ vlSelf->top__DOT__exe_0__DOT__alu_src2)),64);
        tracep->fullQData(oldp+450,((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                                     << (0x3fU & (IData)(vlSelf->top__DOT__exe_0__DOT__alu_src2)))),64);
        tracep->fullQData(oldp+452,((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                                     >> (0x3fU & (IData)(vlSelf->top__DOT__exe_0__DOT__alu_src2)))),64);
        tracep->fullQData(oldp+454,(VL_SHIFTRS_QQI(64,64,6, vlSelf->top__DOT__exe_0__DOT__alu_src1, 
                                                   (0x3fU 
                                                    & (IData)(vlSelf->top__DOT__exe_0__DOT__alu_src2)))),64);
        tracep->fullQData(oldp+456,((0xfffffffffffff000ULL 
                                     & vlSelf->top__DOT__exe_0__DOT__alu_src2)),64);
        tracep->fullQData(oldp+458,((vlSelf->top__DOT__exe_0__DOT__alu_src1 
                                     * vlSelf->top__DOT__exe_0__DOT__alu_src2)),64);
        tracep->fullQData(oldp+460,(VL_DIV_QQQ(64, vlSelf->top__DOT__exe_0__DOT__alu_src1, vlSelf->top__DOT__exe_0__DOT__alu_src2)),64);
        tracep->fullQData(oldp+462,(VL_DIVS_QQQ(64, vlSelf->top__DOT__exe_0__DOT__alu_src1, vlSelf->top__DOT__exe_0__DOT__alu_src2)),64);
        tracep->fullQData(oldp+464,(VL_MODDIV_QQQ(64, vlSelf->top__DOT__exe_0__DOT__alu_src1, vlSelf->top__DOT__exe_0__DOT__alu_src2)),64);
        tracep->fullQData(oldp+466,(VL_MODDIVS_QQQ(64, vlSelf->top__DOT__exe_0__DOT__alu_src1, vlSelf->top__DOT__exe_0__DOT__alu_src2)),64);
        tracep->fullQData(oldp+468,(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__adder_b),64);
        tracep->fullBit(oldp+470,(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__adder_cin));
        tracep->fullBit(oldp+471,(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__adder_cout));
        tracep->fullQData(oldp+472,(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__alu_result_uw),64);
        tracep->fullQData(oldp+474,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__exe_0__DOT__alu2__DOT__alu_result_uw 
                                                                             >> 0x1fU))))))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__alu_result_uw)))),64);
        tracep->fullWData(oldp+476,(vlSelf->top__DOT__exe_0__DOT__alu2__DOT____Vcellinp__mux1____pinNumber3),130);
        tracep->fullWData(oldp+481,(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__pair_list[0]),65);
        tracep->fullWData(oldp+484,(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__pair_list[1]),65);
        tracep->fullBit(oldp+487,(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__key_list[0]));
        tracep->fullBit(oldp+488,(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__key_list[1]));
        tracep->fullQData(oldp+489,(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+491,(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+493,(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+495,(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__mux1__DOT__i0__DOT__hit));
        tracep->fullBit(oldp+496,((5U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__cache_state))));
        tracep->fullBit(oldp+497,(vlSelf->top__DOT__mem_2__DOT__use_cache));
        tracep->fullQData(oldp+498,(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld),64);
        tracep->fullQData(oldp+500,(((0x3fU >= (0x38U 
                                                & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__araddr 
                                                   << 3U)))
                                      ? (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                                         [(0x3fU & 
                                           (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__araddr 
                                            >> 6U))]
                                         [(7U & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__araddr 
                                                 >> 3U))] 
                                         >> (0x38U 
                                             & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__araddr 
                                                << 3U)))
                                      : 0ULL)),64);
        tracep->fullQData(oldp+502,(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld_device),64);
        tracep->fullQData(oldp+504,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                                                                             >> 0x1fU))))))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))),64);
        tracep->fullQData(oldp+506,((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld))),64);
        tracep->fullQData(oldp+508,((((- (QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                                                                     >> 0xfU)))))) 
                                      << 0x10U) | (QData)((IData)(
                                                                  (0xffffU 
                                                                   & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))))),64);
        tracep->fullQData(oldp+510,((QData)((IData)(
                                                    (0xffffU 
                                                     & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld))))),64);
        tracep->fullQData(oldp+512,((((- (QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                                                                     >> 7U)))))) 
                                      << 8U) | (QData)((IData)(
                                                               (0xffU 
                                                                & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))))),64);
        tracep->fullQData(oldp+514,((QData)((IData)(
                                                    (0xffU 
                                                     & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld))))),64);
        tracep->fullWData(oldp+516,(vlSelf->top__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3),497);
        tracep->fullWData(oldp+532,(vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list[0]),71);
        tracep->fullWData(oldp+535,(vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list[1]),71);
        tracep->fullWData(oldp+538,(vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list[2]),71);
        tracep->fullWData(oldp+541,(vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list[3]),71);
        tracep->fullWData(oldp+544,(vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list[4]),71);
        tracep->fullWData(oldp+547,(vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list[5]),71);
        tracep->fullWData(oldp+550,(vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list[6]),71);
        tracep->fullCData(oldp+553,(vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list[0]),7);
        tracep->fullCData(oldp+554,(vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list[1]),7);
        tracep->fullCData(oldp+555,(vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list[2]),7);
        tracep->fullCData(oldp+556,(vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list[3]),7);
        tracep->fullCData(oldp+557,(vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list[4]),7);
        tracep->fullCData(oldp+558,(vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list[5]),7);
        tracep->fullCData(oldp+559,(vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list[6]),7);
        tracep->fullQData(oldp+560,(vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+562,(vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+564,(vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+566,(vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+568,(vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__data_list[4]),64);
        tracep->fullQData(oldp+570,(vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__data_list[5]),64);
        tracep->fullQData(oldp+572,(vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__data_list[6]),64);
        tracep->fullQData(oldp+574,(vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+576,(vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__hit));
        tracep->fullIData(oldp+577,((IData)(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__adder_result)),32);
        tracep->fullIData(oldp+578,(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__araddr),32);
        tracep->fullQData(oldp+579,(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                                    [(0x3fU & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__araddr 
                                               >> 6U))]
                                    [(7U & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__araddr 
                                            >> 3U))]),64);
        tracep->fullCData(oldp+581,((0x3fU & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__araddr)),6);
        tracep->fullCData(oldp+582,((0x3fU & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__araddr 
                                              >> 6U))),6);
        tracep->fullIData(oldp+583,((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__araddr 
                                     >> 0xcU)),20);
        tracep->fullCData(oldp+584,((0x3fU & (IData)(
                                                     (vlSelf->top__DOT__exe_0__DOT__alu2__DOT__adder_result 
                                                      >> 6U)))),6);
        tracep->fullCData(oldp+585,((0x3fU & (IData)(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__adder_result))),6);
        tracep->fullIData(oldp+586,((0xfffffU & (IData)(
                                                        (vlSelf->top__DOT__exe_0__DOT__alu2__DOT__adder_result 
                                                         >> 0xcU)))),20);
        tracep->fullQData(oldp+587,(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rdata_axi),64);
        tracep->fullBit(oldp+589,((8U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__c_arlen))));
        tracep->fullCData(oldp+590,(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__cache_state),3);
        tracep->fullBit(oldp+591,(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rcache_en));
        tracep->fullBit(oldp+592,(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__wcache_en));
        tracep->fullBit(oldp+593,((2U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__cache_state))));
        tracep->fullBit(oldp+594,((3U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__write_state))));
        tracep->fullBit(oldp+595,((3U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__read_state))));
        tracep->fullBit(oldp+596,((3U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__cache_state))));
        tracep->fullIData(oldp+597,((0xffffffc0U & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__araddr)),32);
        tracep->fullIData(oldp+598,(((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__tagarray
                                      [(0x3fU & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__araddr 
                                                 >> 6U))] 
                                      << 0xcU) | (0xfc0U 
                                                  & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__araddr))),32);
        tracep->fullBit(oldp+599,(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rvalid));
        tracep->fullBit(oldp+600,(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rready));
        tracep->fullBit(oldp+601,((0U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__state))));
        tracep->fullBit(oldp+602,(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__arvalid));
        tracep->fullCData(oldp+603,(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__d_r_len),3);
        tracep->fullCData(oldp+604,(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__d_w_len),3);
        tracep->fullCData(oldp+605,(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rresp),2);
        tracep->fullCData(oldp+606,(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__read_state),3);
        tracep->fullCData(oldp+607,(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__write_state),3);
        tracep->fullBit(oldp+608,((0U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__write_state))));
        tracep->fullBit(oldp+609,((8U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__c_awlen))));
        tracep->fullBit(oldp+610,(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__wready));
        tracep->fullCData(oldp+611,(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__bresp),2);
        tracep->fullBit(oldp+612,(((1U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__write_state)) 
                                   & (2U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__write_state)))));
        tracep->fullBit(oldp+613,((2U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__write_state))));
        tracep->fullBit(oldp+614,(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__awvalid));
        tracep->fullBit(oldp+615,(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__wvalid));
        tracep->fullQData(oldp+616,(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata),64);
        tracep->fullCData(oldp+618,(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__c_awlen),8);
        tracep->fullQData(oldp+619,(((1U == (IData)(vlSelf->top__DOT__wmask))
                                      ? 0xffULL : (
                                                   (3U 
                                                    == (IData)(vlSelf->top__DOT__wmask))
                                                    ? 0xffffULL
                                                    : 
                                                   ((0xfU 
                                                     == (IData)(vlSelf->top__DOT__wmask))
                                                     ? 0xffffffffULL
                                                     : 0xffffffffffffffffULL)))),64);
        tracep->fullQData(oldp+621,(((0x3fU >= (0x38U 
                                                & ((IData)(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__adder_result) 
                                                   << 3U)))
                                      ? (vlSelf->top__DOT__src2 
                                         << (0x38U 
                                             & ((IData)(vlSelf->top__DOT__exe_0__DOT__alu2__DOT__adder_result) 
                                                << 3U)))
                                      : 0ULL)),64);
        tracep->fullQData(oldp+623,(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__wmask_align),64);
        tracep->fullQData(oldp+625,(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                                    [0x38U][3U]),64);
        tracep->fullIData(oldp+627,(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__tagarray
                                    [0U]),22);
        tracep->fullIData(oldp+628,(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__unnamedblk1__DOT__i),32);
        tracep->fullIData(oldp+629,(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__unnamedblk2__DOT__i),32);
        tracep->fullIData(oldp+630,(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j),32);
        tracep->fullIData(oldp+631,(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_araddr),32);
        tracep->fullCData(oldp+632,(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__c_arlen),8);
        tracep->fullIData(oldp+633,(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__r_awaddr),32);
        tracep->fullBit(oldp+634,(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__testwrite));
        tracep->fullCData(oldp+635,(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__state),3);
        tracep->fullCData(oldp+636,(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__write_state),3);
        tracep->fullBit(oldp+637,(vlSelf->top__DOT__mem_2__DOT____Vcellinp__mem_read_write_0__ren));
        tracep->fullBit(oldp+638,(vlSelf->top__DOT__mem_2__DOT____Vcellinp__mem_read_write_0__wen));
        tracep->fullBit(oldp+639,((1U & (~ (IData)(vlSelf->top__DOT__mem_2__DOT__use_cache)))));
        tracep->fullBit(oldp+640,(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__rvalid));
        tracep->fullBit(oldp+641,(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__rready));
        tracep->fullBit(oldp+642,((0U == (IData)(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__axi_full_s2_1__DOT__state))));
        tracep->fullBit(oldp+643,(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__arvalid));
        tracep->fullBit(oldp+644,((1U == (IData)(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__axi_full_s2_1__DOT__c_arlen))));
        tracep->fullCData(oldp+645,(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__d_r_len),3);
        tracep->fullCData(oldp+646,(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__d_w_len),3);
        tracep->fullCData(oldp+647,(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__rresp),2);
        tracep->fullQData(oldp+648,(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__rdata_axi),64);
        tracep->fullCData(oldp+650,(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__read_state),3);
        tracep->fullBit(oldp+651,((3U == (IData)(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__read_state))));
        tracep->fullBit(oldp+652,((3U == (IData)(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__write_state))));
        tracep->fullCData(oldp+653,(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__write_state),3);
        tracep->fullBit(oldp+654,((0U == (IData)(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__axi_full_s2_1__DOT__write_state))));
        tracep->fullBit(oldp+655,((1U == (IData)(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__c_awlen))));
        tracep->fullBit(oldp+656,(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__wready));
        tracep->fullCData(oldp+657,(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__bresp),2);
        tracep->fullBit(oldp+658,(((1U == (IData)(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__write_state)) 
                                   & (2U == (IData)(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__write_state)))));
        tracep->fullBit(oldp+659,((2U == (IData)(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__axi_full_s2_1__DOT__write_state))));
        tracep->fullBit(oldp+660,(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__awvalid));
        tracep->fullBit(oldp+661,(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__wvalid));
        tracep->fullQData(oldp+662,(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__wdata),64);
        tracep->fullCData(oldp+664,(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__c_awlen),8);
        tracep->fullIData(oldp+665,(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__axi_full_s2_1__DOT__r_araddr),32);
        tracep->fullCData(oldp+666,(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__axi_full_s2_1__DOT__c_arlen),8);
        tracep->fullIData(oldp+667,(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__axi_full_s2_1__DOT__r_awaddr),32);
        tracep->fullBit(oldp+668,(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__axi_full_s2_1__DOT__testwrite));
        tracep->fullCData(oldp+669,(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__axi_full_s2_1__DOT__state),3);
        tracep->fullCData(oldp+670,(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__axi_full_s2_1__DOT__write_state),3);
        tracep->fullWData(oldp+671,(vlSelf->top__DOT__wb0__DOT____Vcellinp__mux3____pinNumber3),201);
        tracep->fullWData(oldp+678,(vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__pair_list[0]),67);
        tracep->fullWData(oldp+681,(vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__pair_list[1]),67);
        tracep->fullWData(oldp+684,(vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__pair_list[2]),67);
        tracep->fullCData(oldp+687,(vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__key_list[0]),3);
        tracep->fullCData(oldp+688,(vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__key_list[1]),3);
        tracep->fullCData(oldp+689,(vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__key_list[2]),3);
        tracep->fullQData(oldp+690,(vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+692,(vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+694,(vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+696,(vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+698,(vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__hit));
        tracep->fullBit(oldp+699,(vlSelf->clk));
        tracep->fullBit(oldp+700,(vlSelf->rst));
        tracep->fullIData(oldp+701,(vlSelf->inst),32);
        tracep->fullQData(oldp+702,(vlSelf->cpupc),64);
        tracep->fullBit(oldp+704,(vlSelf->ebreak));
        tracep->fullBit(oldp+705,(vlSelf->not_have));
        tracep->fullQData(oldp+706,(vlSelf->dnpc),64);
        tracep->fullBit(oldp+708,(vlSelf->inst_finish));
        tracep->fullBit(oldp+709,(vlSelf->mem_finish));
        tracep->fullBit(oldp+710,(vlSelf->inst_update));
        tracep->fullCData(oldp+711,((0x1fU & (vlSelf->inst 
                                              >> 0xfU))),5);
        tracep->fullCData(oldp+712,((0x1fU & (vlSelf->inst 
                                              >> 0x14U))),5);
        tracep->fullCData(oldp+713,((0x1fU & (vlSelf->inst 
                                              >> 7U))),5);
        tracep->fullCData(oldp+714,((0xffU & ((IData)(1U) 
                                              << (7U 
                                                  & (vlSelf->inst 
                                                     >> 0xcU))))),8);
        tracep->fullBit(oldp+715,((((((((((((((((((
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
        tracep->fullBit(oldp+716,((((IData)(vlSelf->top__DOT__control_0__DOT__csrrw) 
                                    | (IData)(vlSelf->top__DOT__control_0__DOT__csrrs)) 
                                   & (IData)(vlSelf->mem_finish))));
        tracep->fullBit(oldp+717,(((IData)(vlSelf->mem_finish) 
                                   & ((IData)(vlSelf->top__DOT__e_inst) 
                                      >> 1U))));
        tracep->fullIData(oldp+718,((IData)(vlSelf->cpupc)),32);
        tracep->fullCData(oldp+719,((0x3fU & (IData)(vlSelf->cpupc))),6);
        tracep->fullCData(oldp+720,((0x3fU & (IData)(
                                                     (vlSelf->cpupc 
                                                      >> 6U)))),6);
        tracep->fullIData(oldp+721,((0xfffffU & (IData)(
                                                        (vlSelf->cpupc 
                                                         >> 0xcU)))),20);
        tracep->fullIData(oldp+722,((0xffffffc0U & (IData)(vlSelf->cpupc))),32);
        tracep->fullCData(oldp+723,((0x7fU & vlSelf->inst)),7);
        tracep->fullCData(oldp+724,((7U & (vlSelf->inst 
                                           >> 0xcU))),3);
        tracep->fullCData(oldp+725,((vlSelf->inst >> 0x19U)),7);
        tracep->fullQData(oldp+726,((((- (QData)((IData)(
                                                         (vlSelf->inst 
                                                          >> 0x1fU)))) 
                                      << 0xcU) | (QData)((IData)(
                                                                 ((0xfe0U 
                                                                   & (vlSelf->inst 
                                                                      >> 0x14U)) 
                                                                  | (0x1fU 
                                                                     & (vlSelf->inst 
                                                                        >> 7U))))))),64);
        tracep->fullQData(oldp+728,((((- (QData)((IData)(
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
        tracep->fullQData(oldp+730,((((- (QData)((IData)(
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
        tracep->fullBit(oldp+732,((((IData)(vlSelf->inst_update) 
                                    & (~ (IData)(vlSelf->top__DOT__mem_2__DOT__use_cache))) 
                                   & ((((IData)(vlSelf->top__DOT__mem_2__DOT____Vcellinp__mem_read_write_0__ren) 
                                        & (3U == (IData)(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__read_state))) 
                                       | ((IData)(vlSelf->top__DOT__mem_2__DOT____Vcellinp__mem_read_write_0__wen) 
                                          & (3U == (IData)(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__write_state)))) 
                                      | ((~ (IData)(vlSelf->top__DOT__mem_2__DOT____Vcellinp__mem_read_write_0__ren)) 
                                         & (~ (IData)(vlSelf->top__DOT__mem_2__DOT____Vcellinp__mem_read_write_0__wen)))))));
        tracep->fullIData(oldp+733,(vlSelf->top__DOT__araddr_0),32);
        tracep->fullBit(oldp+734,(vlSelf->top__DOT__arvalid_0));
        tracep->fullBit(oldp+735,(vlSelf->top__DOT__arready_0));
        tracep->fullQData(oldp+736,(vlSelf->top__DOT__rdata_0),64);
        tracep->fullCData(oldp+738,(vlSelf->top__DOT__rresp_0),2);
        tracep->fullBit(oldp+739,(vlSelf->top__DOT__rvalid_0));
        tracep->fullBit(oldp+740,(vlSelf->top__DOT__rready_0));
        tracep->fullIData(oldp+741,(4U),32);
        tracep->fullIData(oldp+742,(2U),32);
        tracep->fullIData(oldp+743,(0x40U),32);
        tracep->fullIData(oldp+744,(0U),32);
        tracep->fullQData(oldp+745,(0ULL),64);
        tracep->fullIData(oldp+747,(0x42U),32);
        tracep->fullIData(oldp+748,(4U),32);
        tracep->fullIData(oldp+749,(1U),32);
        tracep->fullIData(oldp+750,(0x41U),32);
        tracep->fullIData(oldp+751,(2U),32);
        tracep->fullQData(oldp+752,(0x80000000ULL),64);
        tracep->fullBit(oldp+754,(1U));
        tracep->fullIData(oldp+755,(0x1000U),32);
        tracep->fullIData(oldp+756,(0x15U),32);
        tracep->fullIData(oldp+757,(6U),32);
        tracep->fullIData(oldp+758,(0x14U),32);
        tracep->fullIData(oldp+759,(3U),32);
        tracep->fullCData(oldp+760,(0U),3);
        tracep->fullCData(oldp+761,(1U),3);
        tracep->fullCData(oldp+762,(2U),3);
        tracep->fullCData(oldp+763,(3U),3);
        tracep->fullCData(oldp+764,(1U),2);
        tracep->fullCData(oldp+765,(8U),8);
        tracep->fullIData(oldp+766,(8U),32);
        tracep->fullIData(oldp+767,(0xaU),32);
        tracep->fullIData(oldp+768,(0xcU),32);
        tracep->fullIData(oldp+769,(0x4cU),32);
        tracep->fullIData(oldp+770,(0xaU),32);
        tracep->fullIData(oldp+771,(0x44U),32);
        tracep->fullIData(oldp+772,(0x43U),32);
        tracep->fullIData(oldp+773,(3U),32);
        tracep->fullIData(oldp+774,(5U),32);
        tracep->fullCData(oldp+775,(2U),2);
        tracep->fullQData(oldp+776,(0xbULL),64);
        tracep->fullCData(oldp+778,(3U),2);
        tracep->fullIData(oldp+779,(7U),32);
        tracep->fullIData(oldp+780,(0x47U),32);
        tracep->fullIData(oldp+781,(7U),32);
        tracep->fullBit(oldp+782,(0U));
        tracep->fullIData(oldp+783,(0x16U),32);
        tracep->fullCData(oldp+784,(0xffU),8);
        tracep->fullIData(oldp+785,(0x82395e18U),32);
        tracep->fullCData(oldp+786,(0x18U),6);
        tracep->fullCData(oldp+787,(0x38U),6);
        tracep->fullCData(oldp+788,(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__axi_full_s2_0__DOT__c_awlen),8);
        tracep->fullCData(oldp+789,(1U),8);
        tracep->fullCData(oldp+790,(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__axi_full_s2_1__DOT__c_awlen),8);
    }
}
