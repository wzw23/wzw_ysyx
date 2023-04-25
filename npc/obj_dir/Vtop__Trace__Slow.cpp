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
        tracep->declBit(c+731,"clk", false,-1);
        tracep->declBit(c+732,"rst", false,-1);
        tracep->declBus(c+733,"inst", false,-1, 31,0);
        tracep->declQuad(c+734,"cpupc", false,-1, 63,0);
        tracep->declBit(c+736,"ebreak", false,-1);
        tracep->declBit(c+737,"not_have", false,-1);
        tracep->declQuad(c+738,"dnpc", false,-1, 63,0);
        tracep->declBit(c+740,"inst_finish", false,-1);
        tracep->declBit(c+741,"mem_finish", false,-1);
        tracep->declBit(c+742,"inst_update", false,-1);
        tracep->declBit(c+731,"top clk", false,-1);
        tracep->declBit(c+732,"top rst", false,-1);
        tracep->declBus(c+733,"top inst", false,-1, 31,0);
        tracep->declQuad(c+734,"top cpupc", false,-1, 63,0);
        tracep->declBit(c+736,"top ebreak", false,-1);
        tracep->declBit(c+737,"top not_have", false,-1);
        tracep->declQuad(c+738,"top dnpc", false,-1, 63,0);
        tracep->declBit(c+740,"top inst_finish", false,-1);
        tracep->declBit(c+741,"top mem_finish", false,-1);
        tracep->declBit(c+742,"top inst_update", false,-1);
        tracep->declQuad(c+1,"top c_rdata", false,-1, 63,0);
        tracep->declBus(c+3,"top sel_nextpc", false,-1, 1,0);
        tracep->declQuad(c+4,"top imm", false,-1, 63,0);
        tracep->declQuad(c+6,"top src1", false,-1, 63,0);
        tracep->declQuad(c+8,"top src2", false,-1, 63,0);
        tracep->declBus(c+743,"top araddr1", false,-1, 31,0);
        tracep->declBit(c+10,"top arvalid1", false,-1);
        tracep->declBus(c+766,"top arburst1", false,-1, 1,0);
        tracep->declBus(c+767,"top arlen1", false,-1, 7,0);
        tracep->declBus(c+768,"top arsize1", false,-1, 2,0);
        tracep->declBit(c+11,"top arready1", false,-1);
        tracep->declQuad(c+12,"top rdata1", false,-1, 63,0);
        tracep->declBus(c+14,"top rresp1", false,-1, 1,0);
        tracep->declBit(c+15,"top rvalid1", false,-1);
        tracep->declBit(c+16,"top rlast1", false,-1);
        tracep->declBit(c+17,"top rready1", false,-1);
        tracep->declBus(c+18,"top araddr2", false,-1, 31,0);
        tracep->declBit(c+19,"top arvalid2", false,-1);
        tracep->declBus(c+766,"top arburst2", false,-1, 1,0);
        tracep->declBus(c+767,"top arlen2", false,-1, 7,0);
        tracep->declBus(c+768,"top arsize2", false,-1, 2,0);
        tracep->declBit(c+20,"top arready2", false,-1);
        tracep->declQuad(c+21,"top rdata2", false,-1, 63,0);
        tracep->declBus(c+23,"top rresp2", false,-1, 1,0);
        tracep->declBit(c+24,"top rvalid2", false,-1);
        tracep->declBit(c+25,"top rlast2", false,-1);
        tracep->declBit(c+26,"top rready2", false,-1);
        tracep->declBus(c+27,"top awaddr2", false,-1, 31,0);
        tracep->declBit(c+28,"top awvalid2", false,-1);
        tracep->declBus(c+766,"top awburst2", false,-1, 1,0);
        tracep->declBus(c+767,"top awlen2", false,-1, 7,0);
        tracep->declBit(c+29,"top awready2", false,-1);
        tracep->declQuad(c+30,"top wdata2", false,-1, 63,0);
        tracep->declBit(c+32,"top wlast2", false,-1);
        tracep->declBus(c+769,"top wstrb2", false,-1, 7,0);
        tracep->declBit(c+33,"top wvalid2", false,-1);
        tracep->declBit(c+34,"top wready2", false,-1);
        tracep->declBus(c+35,"top bresp2", false,-1, 1,0);
        tracep->declBit(c+36,"top bvalid2", false,-1);
        tracep->declBit(c+37,"top bready2", false,-1);
        tracep->declBus(c+744,"top rs1", false,-1, 4,0);
        tracep->declBus(c+745,"top rs2", false,-1, 4,0);
        tracep->declBus(c+746,"top rd", false,-1, 4,0);
        tracep->declBus(c+38,"top op_d", false,-1, 11,0);
        tracep->declBus(c+39,"top fu_7_d", false,-1, 4,0);
        tracep->declBus(c+747,"top fu_3_d", false,-1, 7,0);
        tracep->declBus(c+40,"top c_raddr", false,-1, 1,0);
        tracep->declBus(c+40,"top c_waddr", false,-1, 1,0);
        tracep->declBus(c+41,"top e_inst", false,-1, 2,0);
        tracep->declBus(c+42,"top sel_alu_src1", false,-1, 3,0);
        tracep->declBus(c+43,"top sel_alu_src2", false,-1, 2,0);
        tracep->declBus(c+44,"top alu_control", false,-1, 16,0);
        tracep->declBit(c+748,"top rf_wen", false,-1);
        tracep->declBus(c+45,"top sel_rf_res", false,-1, 2,0);
        tracep->declBit(c+46,"top data_ram_en", false,-1);
        tracep->declBit(c+47,"top data_ram_wen", false,-1);
        tracep->declBus(c+48,"top alu_equal", false,-1, 2,0);
        tracep->declBus(c+49,"top l_choose", false,-1, 6,0);
        tracep->declBit(c+50,"top w_choose", false,-1);
        tracep->declBit(c+51,"top c_wchoose", false,-1);
        tracep->declBit(c+749,"top c_wen", false,-1);
        tracep->declBus(c+52,"top wmask", false,-1, 7,0);
        tracep->declBit(c+750,"top c_wen1_2", false,-1);
        tracep->declQuad(c+53,"top alu_result", false,-1, 63,0);
        tracep->declQuad(c+55,"top ram_addr", false,-1, 63,0);
        tracep->declQuad(c+57,"top ram_data", false,-1, 63,0);
        tracep->declQuad(c+59,"top wdata", false,-1, 63,0);
        tracep->declBit(c+731,"top if_0 clk", false,-1);
        tracep->declBit(c+732,"top if_0 rst", false,-1);
        tracep->declQuad(c+734,"top if_0 cpupc", false,-1, 63,0);
        tracep->declBus(c+3,"top if_0 sel_nextpc", false,-1, 1,0);
        tracep->declQuad(c+4,"top if_0 imm", false,-1, 63,0);
        tracep->declQuad(c+6,"top if_0 src1", false,-1, 63,0);
        tracep->declBus(c+733,"top if_0 inst", false,-1, 31,0);
        tracep->declQuad(c+738,"top if_0 dnpc", false,-1, 63,0);
        tracep->declQuad(c+1,"top if_0 c_rdata", false,-1, 63,0);
        tracep->declBit(c+742,"top if_0 inst_update", false,-1);
        tracep->declBit(c+741,"top if_0 mem_finish", false,-1);
        tracep->declBus(c+743,"top if_0 araddr1", false,-1, 31,0);
        tracep->declBit(c+10,"top if_0 arvalid1", false,-1);
        tracep->declBus(c+766,"top if_0 arburst1", false,-1, 1,0);
        tracep->declBus(c+767,"top if_0 arlen1", false,-1, 7,0);
        tracep->declBus(c+768,"top if_0 arsize1", false,-1, 2,0);
        tracep->declBit(c+11,"top if_0 arready1", false,-1);
        tracep->declQuad(c+12,"top if_0 rdata1", false,-1, 63,0);
        tracep->declBus(c+14,"top if_0 rresp1", false,-1, 1,0);
        tracep->declBit(c+15,"top if_0 rvalid1", false,-1);
        tracep->declBit(c+16,"top if_0 rlast1", false,-1);
        tracep->declBit(c+17,"top if_0 rready1", false,-1);
        tracep->declQuad(c+61,"top if_0 dnpc_0", false,-1, 63,0);
        tracep->declQuad(c+63,"top if_0 rdata_u", false,-1, 63,0);
        tracep->declBus(c+751,"top if_0 araddr", false,-1, 31,0);
        tracep->declBus(c+770,"top if_0 mux4 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+771,"top if_0 mux4 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+772,"top if_0 mux4 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+61,"top if_0 mux4 out", false,-1, 63,0);
        tracep->declBus(c+3,"top if_0 mux4 key", false,-1, 1,0);
        tracep->declArray(c+65,"top if_0 mux4 lut", false,-1, 263,0);
        tracep->declBus(c+770,"top if_0 mux4 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+771,"top if_0 mux4 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+772,"top if_0 mux4 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+773,"top if_0 mux4 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+61,"top if_0 mux4 i0 out", false,-1, 63,0);
        tracep->declBus(c+3,"top if_0 mux4 i0 key", false,-1, 1,0);
        tracep->declQuad(c+774,"top if_0 mux4 i0 default_out", false,-1, 63,0);
        tracep->declArray(c+65,"top if_0 mux4 i0 lut", false,-1, 263,0);
        tracep->declBus(c+776,"top if_0 mux4 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declArray(c+74+i*3,"top if_0 mux4 i0 pair_list", true,(i+0), 65,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+86+i*1,"top if_0 mux4 i0 key_list", true,(i+0), 1,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declQuad(c+90+i*2,"top if_0 mux4 i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+98,"top if_0 mux4 i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+100,"top if_0 mux4 i0 hit", false,-1);
        tracep->declBus(c+101,"top if_0 mux4 i0 i", false,-1, 31,0);
        tracep->declBus(c+771,"top if_0 mux5 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+777,"top if_0 mux5 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+772,"top if_0 mux5 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+738,"top if_0 mux5 out", false,-1, 63,0);
        tracep->declBus(c+741,"top if_0 mux5 key", false,-1, 0,0);
        tracep->declArray(c+102,"top if_0 mux5 lut", false,-1, 129,0);
        tracep->declBus(c+771,"top if_0 mux5 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+777,"top if_0 mux5 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+772,"top if_0 mux5 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+773,"top if_0 mux5 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+738,"top if_0 mux5 i0 out", false,-1, 63,0);
        tracep->declBus(c+741,"top if_0 mux5 i0 key", false,-1, 0,0);
        tracep->declQuad(c+774,"top if_0 mux5 i0 default_out", false,-1, 63,0);
        tracep->declArray(c+102,"top if_0 mux5 i0 lut", false,-1, 129,0);
        tracep->declBus(c+778,"top if_0 mux5 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declArray(c+107+i*3,"top if_0 mux5 i0 pair_list", true,(i+0), 64,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+113+i*1,"top if_0 mux5 i0 key_list", true,(i+0), 0,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+115+i*2,"top if_0 mux5 i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+119,"top if_0 mux5 i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+121,"top if_0 mux5 i0 hit", false,-1);
        tracep->declBus(c+122,"top if_0 mux5 i0 i", false,-1, 31,0);
        tracep->declBus(c+772,"top if_0 i0 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+779,"top if_0 i0 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+731,"top if_0 i0 clk", false,-1);
        tracep->declBit(c+732,"top if_0 i0 rst", false,-1);
        tracep->declQuad(c+738,"top if_0 i0 din", false,-1, 63,0);
        tracep->declQuad(c+734,"top if_0 i0 dout", false,-1, 63,0);
        tracep->declBit(c+781,"top if_0 i0 wen", false,-1);
        tracep->declBit(c+731,"top if_0 icache_9 clk", false,-1);
        tracep->declBit(c+732,"top if_0 icache_9 rst", false,-1);
        tracep->declBus(c+751,"top if_0 icache_9 araddr", false,-1, 31,0);
        tracep->declQuad(c+63,"top if_0 icache_9 rdata", false,-1, 63,0);
        tracep->declBit(c+742,"top if_0 icache_9 inst_update", false,-1);
        tracep->declBit(c+741,"top if_0 icache_9 mem_finish", false,-1);
        tracep->declBus(c+743,"top if_0 icache_9 araddr1", false,-1, 31,0);
        tracep->declBit(c+10,"top if_0 icache_9 arvalid1", false,-1);
        tracep->declBus(c+766,"top if_0 icache_9 arburst1", false,-1, 1,0);
        tracep->declBus(c+767,"top if_0 icache_9 arlen1", false,-1, 7,0);
        tracep->declBus(c+768,"top if_0 icache_9 arsize1", false,-1, 2,0);
        tracep->declBit(c+11,"top if_0 icache_9 arready1", false,-1);
        tracep->declQuad(c+12,"top if_0 icache_9 rdata1", false,-1, 63,0);
        tracep->declBus(c+14,"top if_0 icache_9 rresp1", false,-1, 1,0);
        tracep->declBit(c+15,"top if_0 icache_9 rvalid1", false,-1);
        tracep->declBit(c+16,"top if_0 icache_9 rlast1", false,-1);
        tracep->declBit(c+17,"top if_0 icache_9 rready1", false,-1);
        tracep->declBus(c+782,"top if_0 icache_9 CACHE_SIZE", false,-1, 31,0);
        tracep->declBus(c+772,"top if_0 icache_9 LINE_SIZE", false,-1, 31,0);
        tracep->declBus(c+772,"top if_0 icache_9 NUM_LINES", false,-1, 31,0);
        tracep->declBus(c+783,"top if_0 icache_9 TAGARRAY_WIDTH", false,-1, 31,0);
        tracep->declBus(c+784,"top if_0 icache_9 INDEX_WIDTH", false,-1, 31,0);
        tracep->declBus(c+784,"top if_0 icache_9 OFFSET_WIDTH", false,-1, 31,0);
        tracep->declBus(c+785,"top if_0 icache_9 TAG_WIDTH", false,-1, 31,0);
        tracep->declBus(c+752,"top if_0 icache_9 addr_offset", false,-1, 5,0);
        tracep->declBus(c+753,"top if_0 icache_9 addr_index", false,-1, 5,0);
        tracep->declBus(c+754,"top if_0 icache_9 addr_tag", false,-1, 19,0);
        tracep->declQuad(c+12,"top if_0 icache_9 rdata_axi", false,-1, 63,0);
        tracep->declBus(c+773,"top if_0 icache_9 CACHE_IDLE", false,-1, 31,0);
        tracep->declBus(c+777,"top if_0 icache_9 CACHE_UPDATE_BEGIN", false,-1, 31,0);
        tracep->declBus(c+771,"top if_0 icache_9 CACHE_MEMREAD", false,-1, 31,0);
        tracep->declBus(c+786,"top if_0 icache_9 CACHE_GET", false,-1, 31,0);
        tracep->declBus(c+123,"top if_0 icache_9 cache_state", false,-1, 2,0);
        tracep->declBit(c+15,"top if_0 icache_9 rvalid", false,-1);
        tracep->declBit(c+17,"top if_0 icache_9 rready", false,-1);
        tracep->declBit(c+11,"top if_0 icache_9 arready", false,-1);
        tracep->declBit(c+16,"top if_0 icache_9 rlast", false,-1);
        tracep->declBus(c+743,"top if_0 icache_9 araddr_block", false,-1, 31,0);
        tracep->declBus(c+124,"top if_0 icache_9 d_len", false,-1, 2,0);
        tracep->declBus(c+787,"top if_0 icache_9 READ_IDLE", false,-1, 2,0);
        tracep->declBus(c+788,"top if_0 icache_9 READ_ARREADY", false,-1, 2,0);
        tracep->declBus(c+789,"top if_0 icache_9 READ_TRANS", false,-1, 2,0);
        tracep->declBus(c+768,"top if_0 icache_9 READ_FINISH", false,-1, 2,0);
        tracep->declBus(c+125,"top if_0 icache_9 state", false,-1, 2,0);
        tracep->declBit(c+10,"top if_0 icache_9 arvalid", false,-1);
        tracep->declBit(c+126,"top if_0 icache_9 rvalid_rready", false,-1);
        tracep->declQuad(c+127,"top if_0 icache_9 rdata_test3", false,-1, 63,0);
        tracep->declBus(c+766,"top if_0 icache_9 arburst", false,-1, 1,0);
        tracep->declBus(c+767,"top if_0 icache_9 arlen", false,-1, 7,0);
        tracep->declBus(c+768,"top if_0 icache_9 arsize", false,-1, 2,0);
        tracep->declBus(c+14,"top if_0 icache_9 rresp", false,-1, 1,0);
        tracep->declBus(c+129,"top if_0 icache_9 unnamedblk1 i", false,-1, 31,0);
        tracep->declBus(c+130,"top if_0 icache_9 unnamedblk2 j", false,-1, 31,0);
        tracep->declBus(c+131,"top if_0 icache_9 unnamedblk2 unnamedblk3 k", false,-1, 31,0);
        tracep->declBus(c+733,"top id_1 inst", false,-1, 31,0);
        tracep->declBus(c+744,"top id_1 rs1", false,-1, 4,0);
        tracep->declBus(c+745,"top id_1 rs2", false,-1, 4,0);
        tracep->declBus(c+746,"top id_1 rd", false,-1, 4,0);
        tracep->declQuad(c+4,"top id_1 imm", false,-1, 63,0);
        tracep->declBus(c+38,"top id_1 op_d", false,-1, 11,0);
        tracep->declBus(c+39,"top id_1 fu_7_d", false,-1, 4,0);
        tracep->declBus(c+747,"top id_1 fu_3_d", false,-1, 7,0);
        tracep->declBus(c+41,"top id_1 e_inst", false,-1, 2,0);
        tracep->declBus(c+40,"top id_1 c_raddr", false,-1, 1,0);
        tracep->declBus(c+40,"top id_1 c_waddr", false,-1, 1,0);
        tracep->declBus(c+755,"top id_1 op", false,-1, 6,0);
        tracep->declBus(c+756,"top id_1 fu_3", false,-1, 2,0);
        tracep->declBus(c+757,"top id_1 fu_7", false,-1, 6,0);
        tracep->declQuad(c+132,"top id_1 immi", false,-1, 63,0);
        tracep->declQuad(c+758,"top id_1 imms", false,-1, 63,0);
        tracep->declQuad(c+760,"top id_1 immb", false,-1, 63,0);
        tracep->declQuad(c+134,"top id_1 immu", false,-1, 63,0);
        tracep->declQuad(c+762,"top id_1 immj", false,-1, 63,0);
        tracep->declBus(c+786,"top id_1 de_3_8 LEN", false,-1, 31,0);
        tracep->declBus(c+790,"top id_1 de_3_8 OLEN", false,-1, 31,0);
        tracep->declBus(c+756,"top id_1 de_3_8 sig", false,-1, 2,0);
        tracep->declBus(c+747,"top id_1 de_3_8 o_h", false,-1, 7,0);
        tracep->declBus(c+791,"top id_1 mux0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+792,"top id_1 mux0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+772,"top id_1 mux0 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+4,"top id_1 mux0 out", false,-1, 63,0);
        tracep->declBus(c+38,"top id_1 mux0 key", false,-1, 11,0);
        tracep->declArray(c+136,"top id_1 mux0 lut", false,-1, 759,0);
        tracep->declBus(c+791,"top id_1 mux0 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+792,"top id_1 mux0 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+772,"top id_1 mux0 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+773,"top id_1 mux0 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+4,"top id_1 mux0 i0 out", false,-1, 63,0);
        tracep->declBus(c+38,"top id_1 mux0 i0 key", false,-1, 11,0);
        tracep->declQuad(c+774,"top id_1 mux0 i0 default_out", false,-1, 63,0);
        tracep->declArray(c+136,"top id_1 mux0 i0 lut", false,-1, 759,0);
        tracep->declBus(c+793,"top id_1 mux0 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<10; i++) {
                tracep->declArray(c+160+i*3,"top id_1 mux0 i0 pair_list", true,(i+0), 75,0);}}
        {int i; for (i=0; i<10; i++) {
                tracep->declBus(c+190+i*1,"top id_1 mux0 i0 key_list", true,(i+0), 11,0);}}
        {int i; for (i=0; i<10; i++) {
                tracep->declQuad(c+200+i*2,"top id_1 mux0 i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+220,"top id_1 mux0 i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+222,"top id_1 mux0 i0 hit", false,-1);
        tracep->declBus(c+223,"top id_1 mux0 i0 i", false,-1, 31,0);
        tracep->declBus(c+38,"top control_1 op_d", false,-1, 11,0);
        tracep->declBus(c+39,"top control_1 fu_7_d", false,-1, 4,0);
        tracep->declBus(c+747,"top control_1 fu_3_d", false,-1, 7,0);
        tracep->declBus(c+42,"top control_1 sel_alu_src1", false,-1, 3,0);
        tracep->declBus(c+43,"top control_1 sel_alu_src2", false,-1, 2,0);
        tracep->declBus(c+44,"top control_1 alu_control", false,-1, 16,0);
        tracep->declBit(c+748,"top control_1 rf_wen", false,-1);
        tracep->declBus(c+45,"top control_1 sel_rf_res", false,-1, 2,0);
        tracep->declBit(c+46,"top control_1 data_ram_en", false,-1);
        tracep->declBit(c+47,"top control_1 data_ram_wen", false,-1);
        tracep->declBus(c+52,"top control_1 wmask", false,-1, 7,0);
        tracep->declBus(c+48,"top control_1 alu_equal", false,-1, 2,0);
        tracep->declBus(c+3,"top control_1 sel_nextpc", false,-1, 1,0);
        tracep->declBus(c+49,"top control_1 l_choose", false,-1, 6,0);
        tracep->declBit(c+737,"top control_1 not_have", false,-1);
        tracep->declBit(c+50,"top control_1 w_choose", false,-1);
        tracep->declBit(c+51,"top control_1 c_wchoose", false,-1);
        tracep->declBit(c+749,"top control_1 c_wen", false,-1);
        tracep->declBus(c+41,"top control_1 e_inst", false,-1, 2,0);
        tracep->declBit(c+742,"top control_1 inst_update", false,-1);
        tracep->declBit(c+750,"top control_1 c_wen1_2", false,-1);
        tracep->declBit(c+741,"top control_1 mem_finish", false,-1);
        tracep->declBit(c+224,"top control_1 addi", false,-1);
        tracep->declBit(c+225,"top control_1 csrrw", false,-1);
        tracep->declBit(c+51,"top control_1 csrrs", false,-1);
        tracep->declBit(c+226,"top control_1 andi", false,-1);
        tracep->declBit(c+227,"top control_1 xori", false,-1);
        tracep->declBit(c+228,"top control_1 ori", false,-1);
        tracep->declBit(c+229,"top control_1 sll", false,-1);
        tracep->declBit(c+230,"top control_1 srl", false,-1);
        tracep->declBit(c+231,"top control_1 sra", false,-1);
        tracep->declBit(c+232,"top control_1 sllw", false,-1);
        tracep->declBit(c+233,"top control_1 srlw", false,-1);
        tracep->declBit(c+234,"top control_1 sraw", false,-1);
        tracep->declBit(c+235,"top control_1 addiw", false,-1);
        tracep->declBit(c+236,"top control_1 slliw", false,-1);
        tracep->declBit(c+237,"top control_1 srliw", false,-1);
        tracep->declBit(c+238,"top control_1 sraiw", false,-1);
        tracep->declBit(c+239,"top control_1 auipc", false,-1);
        tracep->declBit(c+240,"top control_1 lui", false,-1);
        tracep->declBit(c+241,"top control_1 jal", false,-1);
        tracep->declBit(c+242,"top control_1 jalr", false,-1);
        tracep->declBit(c+243,"top control_1 sd", false,-1);
        tracep->declBit(c+244,"top control_1 sh", false,-1);
        tracep->declBit(c+245,"top control_1 sw", false,-1);
        tracep->declBit(c+246,"top control_1 sb", false,-1);
        tracep->declBit(c+247,"top control_1 lw", false,-1);
        tracep->declBit(c+248,"top control_1 lwu", false,-1);
        tracep->declBit(c+249,"top control_1 lh", false,-1);
        tracep->declBit(c+250,"top control_1 lhu", false,-1);
        tracep->declBit(c+251,"top control_1 lb", false,-1);
        tracep->declBit(c+252,"top control_1 lbu", false,-1);
        tracep->declBit(c+253,"top control_1 ld", false,-1);
        tracep->declBit(c+254,"top control_1 addw", false,-1);
        tracep->declBit(c+255,"top control_1 subw", false,-1);
        tracep->declBit(c+256,"top control_1 mulw", false,-1);
        tracep->declBit(c+257,"top control_1 divw", false,-1);
        tracep->declBit(c+258,"top control_1 divuw", false,-1);
        tracep->declBit(c+259,"top control_1 remw", false,-1);
        tracep->declBit(c+260,"top control_1 remuw", false,-1);
        tracep->declBit(c+261,"top control_1 divu", false,-1);
        tracep->declBit(c+262,"top control_1 div", false,-1);
        tracep->declBit(c+263,"top control_1 rem", false,-1);
        tracep->declBit(c+264,"top control_1 remu", false,-1);
        tracep->declBit(c+265,"top control_1 Add", false,-1);
        tracep->declBit(c+266,"top control_1 Mul", false,-1);
        tracep->declBit(c+267,"top control_1 And", false,-1);
        tracep->declBit(c+268,"top control_1 Xor", false,-1);
        tracep->declBit(c+269,"top control_1 Or", false,-1);
        tracep->declBit(c+270,"top control_1 sltu", false,-1);
        tracep->declBit(c+271,"top control_1 slt", false,-1);
        tracep->declBit(c+272,"top control_1 sub", false,-1);
        tracep->declBit(c+273,"top control_1 sltiu", false,-1);
        tracep->declBit(c+274,"top control_1 srai", false,-1);
        tracep->declBit(c+275,"top control_1 slli", false,-1);
        tracep->declBit(c+276,"top control_1 srli", false,-1);
        tracep->declBit(c+277,"top control_1 beq", false,-1);
        tracep->declBit(c+278,"top control_1 bne", false,-1);
        tracep->declBit(c+279,"top control_1 bge", false,-1);
        tracep->declBit(c+280,"top control_1 bgeu", false,-1);
        tracep->declBit(c+281,"top control_1 bltu", false,-1);
        tracep->declBit(c+282,"top control_1 blt", false,-1);
        tracep->declBit(c+731,"top exe_1 clk", false,-1);
        tracep->declBit(c+732,"top exe_1 rst", false,-1);
        tracep->declQuad(c+4,"top exe_1 imm", false,-1, 63,0);
        tracep->declBus(c+744,"top exe_1 rs1", false,-1, 4,0);
        tracep->declBus(c+745,"top exe_1 rs2", false,-1, 4,0);
        tracep->declBus(c+746,"top exe_1 rd", false,-1, 4,0);
        tracep->declBus(c+42,"top exe_1 sel_alu_src1", false,-1, 3,0);
        tracep->declBus(c+43,"top exe_1 sel_alu_src2", false,-1, 2,0);
        tracep->declBus(c+44,"top exe_1 alu_control", false,-1, 16,0);
        tracep->declBit(c+748,"top exe_1 rf_wen", false,-1);
        tracep->declQuad(c+59,"top exe_1 wdata", false,-1, 63,0);
        tracep->declQuad(c+53,"top exe_1 alu_result", false,-1, 63,0);
        tracep->declQuad(c+55,"top exe_1 ram_addr", false,-1, 63,0);
        tracep->declQuad(c+6,"top exe_1 src1", false,-1, 63,0);
        tracep->declBus(c+48,"top exe_1 alu_equal", false,-1, 2,0);
        tracep->declQuad(c+734,"top exe_1 cpupc", false,-1, 63,0);
        tracep->declBit(c+50,"top exe_1 w_choose", false,-1);
        tracep->declQuad(c+8,"top exe_1 src2", false,-1, 63,0);
        tracep->declBit(c+51,"top exe_1 c_wchoose", false,-1);
        tracep->declBit(c+749,"top exe_1 c_wen", false,-1);
        tracep->declBus(c+40,"top exe_1 c_raddr", false,-1, 1,0);
        tracep->declBus(c+40,"top exe_1 c_waddr", false,-1, 1,0);
        tracep->declQuad(c+1,"top exe_1 c_rdata", false,-1, 63,0);
        tracep->declBus(c+41,"top exe_1 e_inst", false,-1, 2,0);
        tracep->declBit(c+750,"top exe_1 c_wen1_2", false,-1);
        tracep->declQuad(c+283,"top exe_1 alu_src1", false,-1, 63,0);
        tracep->declQuad(c+285,"top exe_1 alu_src2", false,-1, 63,0);
        tracep->declQuad(c+287,"top exe_1 c_wdata", false,-1, 63,0);
        tracep->declBus(c+770,"top exe_1 mux1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+770,"top exe_1 mux1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+772,"top exe_1 mux1 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+283,"top exe_1 mux1 out", false,-1, 63,0);
        tracep->declBus(c+42,"top exe_1 mux1 key", false,-1, 3,0);
        tracep->declArray(c+289,"top exe_1 mux1 lut", false,-1, 271,0);
        tracep->declBus(c+770,"top exe_1 mux1 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+770,"top exe_1 mux1 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+772,"top exe_1 mux1 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+773,"top exe_1 mux1 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+283,"top exe_1 mux1 i0 out", false,-1, 63,0);
        tracep->declBus(c+42,"top exe_1 mux1 i0 key", false,-1, 3,0);
        tracep->declQuad(c+774,"top exe_1 mux1 i0 default_out", false,-1, 63,0);
        tracep->declArray(c+289,"top exe_1 mux1 i0 lut", false,-1, 271,0);
        tracep->declBus(c+794,"top exe_1 mux1 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declArray(c+298+i*3,"top exe_1 mux1 i0 pair_list", true,(i+0), 67,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+310+i*1,"top exe_1 mux1 i0 key_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declQuad(c+314+i*2,"top exe_1 mux1 i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+322,"top exe_1 mux1 i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+324,"top exe_1 mux1 i0 hit", false,-1);
        tracep->declBus(c+325,"top exe_1 mux1 i0 i", false,-1, 31,0);
        tracep->declBus(c+786,"top exe_1 mux2 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+786,"top exe_1 mux2 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+772,"top exe_1 mux2 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+285,"top exe_1 mux2 out", false,-1, 63,0);
        tracep->declBus(c+43,"top exe_1 mux2 key", false,-1, 2,0);
        tracep->declArray(c+326,"top exe_1 mux2 lut", false,-1, 200,0);
        tracep->declBus(c+786,"top exe_1 mux2 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+786,"top exe_1 mux2 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+772,"top exe_1 mux2 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+773,"top exe_1 mux2 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+285,"top exe_1 mux2 i0 out", false,-1, 63,0);
        tracep->declBus(c+43,"top exe_1 mux2 i0 key", false,-1, 2,0);
        tracep->declQuad(c+774,"top exe_1 mux2 i0 default_out", false,-1, 63,0);
        tracep->declArray(c+326,"top exe_1 mux2 i0 lut", false,-1, 200,0);
        tracep->declBus(c+795,"top exe_1 mux2 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declArray(c+333+i*3,"top exe_1 mux2 i0 pair_list", true,(i+0), 66,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+342+i*1,"top exe_1 mux2 i0 key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declQuad(c+345+i*2,"top exe_1 mux2 i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+351,"top exe_1 mux2 i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+353,"top exe_1 mux2 i0 hit", false,-1);
        tracep->declBus(c+354,"top exe_1 mux2 i0 i", false,-1, 31,0);
        tracep->declBus(c+771,"top exe_1 mux3 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+777,"top exe_1 mux3 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+772,"top exe_1 mux3 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+287,"top exe_1 mux3 out", false,-1, 63,0);
        tracep->declBus(c+51,"top exe_1 mux3 key", false,-1, 0,0);
        tracep->declArray(c+355,"top exe_1 mux3 lut", false,-1, 129,0);
        tracep->declBus(c+771,"top exe_1 mux3 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+777,"top exe_1 mux3 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+772,"top exe_1 mux3 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+773,"top exe_1 mux3 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+287,"top exe_1 mux3 i0 out", false,-1, 63,0);
        tracep->declBus(c+51,"top exe_1 mux3 i0 key", false,-1, 0,0);
        tracep->declQuad(c+774,"top exe_1 mux3 i0 default_out", false,-1, 63,0);
        tracep->declArray(c+355,"top exe_1 mux3 i0 lut", false,-1, 129,0);
        tracep->declBus(c+778,"top exe_1 mux3 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declArray(c+360+i*3,"top exe_1 mux3 i0 pair_list", true,(i+0), 64,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+366+i*1,"top exe_1 mux3 i0 key_list", true,(i+0), 0,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+368+i*2,"top exe_1 mux3 i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+372,"top exe_1 mux3 i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+374,"top exe_1 mux3 i0 hit", false,-1);
        tracep->declBus(c+375,"top exe_1 mux3 i0 i", false,-1, 31,0);
        tracep->declBus(c+796,"top exe_1 r0 ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+772,"top exe_1 r0 DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+731,"top exe_1 r0 clk", false,-1);
        tracep->declBit(c+732,"top exe_1 r0 rst", false,-1);
        tracep->declBit(c+748,"top exe_1 r0 wen", false,-1);
        tracep->declQuad(c+59,"top exe_1 r0 wdata", false,-1, 63,0);
        tracep->declBus(c+746,"top exe_1 r0 waddr", false,-1, 4,0);
        tracep->declBus(c+744,"top exe_1 r0 raddr1", false,-1, 4,0);
        tracep->declBus(c+745,"top exe_1 r0 raddr2", false,-1, 4,0);
        tracep->declQuad(c+6,"top exe_1 r0 rdata1", false,-1, 63,0);
        tracep->declQuad(c+8,"top exe_1 r0 rdata2", false,-1, 63,0);
        tracep->declBus(c+40,"top exe_1 r0 c_raddr", false,-1, 1,0);
        tracep->declQuad(c+1,"top exe_1 r0 c_rdata", false,-1, 63,0);
        tracep->declQuad(c+287,"top exe_1 r0 c_wdata", false,-1, 63,0);
        tracep->declBus(c+40,"top exe_1 r0 c_waddr", false,-1, 1,0);
        tracep->declBit(c+749,"top exe_1 r0 c_wen", false,-1);
        tracep->declBit(c+750,"top exe_1 r0 c_wen1_2", false,-1);
        tracep->declQuad(c+734,"top exe_1 r0 c_wdata1", false,-1, 63,0);
        tracep->declBus(c+797,"top exe_1 r0 c_waddr1", false,-1, 1,0);
        tracep->declQuad(c+798,"top exe_1 r0 c_wdata2", false,-1, 63,0);
        tracep->declBus(c+800,"top exe_1 r0 c_waddr2", false,-1, 1,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+376+i*2,"top exe_1 r0 rf", true,(i+0), 63,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declQuad(c+440+i*2,"top exe_1 r0 csr", true,(i+0), 63,0);}}
        tracep->declBus(c+448,"top exe_1 r0 i", false,-1, 31,0);
        tracep->declQuad(c+283,"top exe_1 alu2 alu_src1", false,-1, 63,0);
        tracep->declQuad(c+285,"top exe_1 alu2 alu_src2", false,-1, 63,0);
        tracep->declBus(c+44,"top exe_1 alu2 alu_control", false,-1, 16,0);
        tracep->declQuad(c+53,"top exe_1 alu2 alu_result", false,-1, 63,0);
        tracep->declQuad(c+55,"top exe_1 alu2 ram_addr", false,-1, 63,0);
        tracep->declBus(c+48,"top exe_1 alu2 alu_equal", false,-1, 2,0);
        tracep->declBit(c+50,"top exe_1 alu2 w_choose", false,-1);
        tracep->declBit(c+449,"top exe_1 alu2 op_add", false,-1);
        tracep->declBit(c+450,"top exe_1 alu2 op_sub", false,-1);
        tracep->declBit(c+451,"top exe_1 alu2 op_slt", false,-1);
        tracep->declBit(c+452,"top exe_1 alu2 op_sltu", false,-1);
        tracep->declBit(c+453,"top exe_1 alu2 op_and", false,-1);
        tracep->declBit(c+454,"top exe_1 alu2 op_nor", false,-1);
        tracep->declBit(c+455,"top exe_1 alu2 op_or", false,-1);
        tracep->declBit(c+456,"top exe_1 alu2 op_xor", false,-1);
        tracep->declBit(c+457,"top exe_1 alu2 op_sll", false,-1);
        tracep->declBit(c+458,"top exe_1 alu2 op_srl", false,-1);
        tracep->declBit(c+459,"top exe_1 alu2 op_sra", false,-1);
        tracep->declBit(c+460,"top exe_1 alu2 op_lui", false,-1);
        tracep->declBit(c+461,"top exe_1 alu2 op_mul", false,-1);
        tracep->declBit(c+462,"top exe_1 alu2 op_divu", false,-1);
        tracep->declBit(c+463,"top exe_1 alu2 op_div", false,-1);
        tracep->declBit(c+464,"top exe_1 alu2 op_remu", false,-1);
        tracep->declBit(c+465,"top exe_1 alu2 op_rem", false,-1);
        tracep->declQuad(c+55,"top exe_1 alu2 add_sub_result", false,-1, 63,0);
        tracep->declQuad(c+466,"top exe_1 alu2 slt_result", false,-1, 63,0);
        tracep->declQuad(c+468,"top exe_1 alu2 sltu_result", false,-1, 63,0);
        tracep->declQuad(c+470,"top exe_1 alu2 and_result", false,-1, 63,0);
        tracep->declQuad(c+472,"top exe_1 alu2 nor_result", false,-1, 63,0);
        tracep->declQuad(c+474,"top exe_1 alu2 or_result", false,-1, 63,0);
        tracep->declQuad(c+476,"top exe_1 alu2 xor_result", false,-1, 63,0);
        tracep->declQuad(c+478,"top exe_1 alu2 sll_result", false,-1, 63,0);
        tracep->declQuad(c+480,"top exe_1 alu2 srl_result", false,-1, 63,0);
        tracep->declQuad(c+482,"top exe_1 alu2 sra_result", false,-1, 63,0);
        tracep->declQuad(c+484,"top exe_1 alu2 lui_result", false,-1, 63,0);
        tracep->declQuad(c+486,"top exe_1 alu2 mul_result", false,-1, 63,0);
        tracep->declQuad(c+488,"top exe_1 alu2 divu_result", false,-1, 63,0);
        tracep->declQuad(c+490,"top exe_1 alu2 div_result", false,-1, 63,0);
        tracep->declQuad(c+492,"top exe_1 alu2 remu_result", false,-1, 63,0);
        tracep->declQuad(c+494,"top exe_1 alu2 rem_result", false,-1, 63,0);
        tracep->declQuad(c+283,"top exe_1 alu2 adder_a", false,-1, 63,0);
        tracep->declQuad(c+496,"top exe_1 alu2 adder_b", false,-1, 63,0);
        tracep->declBit(c+498,"top exe_1 alu2 adder_cin", false,-1);
        tracep->declQuad(c+55,"top exe_1 alu2 adder_result", false,-1, 63,0);
        tracep->declBit(c+499,"top exe_1 alu2 adder_cout", false,-1);
        tracep->declQuad(c+500,"top exe_1 alu2 alu_result_uw", false,-1, 63,0);
        tracep->declQuad(c+502,"top exe_1 alu2 alu_result_w", false,-1, 63,0);
        tracep->declBus(c+771,"top exe_1 alu2 mux1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+777,"top exe_1 alu2 mux1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+772,"top exe_1 alu2 mux1 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+53,"top exe_1 alu2 mux1 out", false,-1, 63,0);
        tracep->declBus(c+50,"top exe_1 alu2 mux1 key", false,-1, 0,0);
        tracep->declArray(c+504,"top exe_1 alu2 mux1 lut", false,-1, 129,0);
        tracep->declBus(c+771,"top exe_1 alu2 mux1 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+777,"top exe_1 alu2 mux1 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+772,"top exe_1 alu2 mux1 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+773,"top exe_1 alu2 mux1 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+53,"top exe_1 alu2 mux1 i0 out", false,-1, 63,0);
        tracep->declBus(c+50,"top exe_1 alu2 mux1 i0 key", false,-1, 0,0);
        tracep->declQuad(c+774,"top exe_1 alu2 mux1 i0 default_out", false,-1, 63,0);
        tracep->declArray(c+504,"top exe_1 alu2 mux1 i0 lut", false,-1, 129,0);
        tracep->declBus(c+778,"top exe_1 alu2 mux1 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declArray(c+509+i*3,"top exe_1 alu2 mux1 i0 pair_list", true,(i+0), 64,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+515+i*1,"top exe_1 alu2 mux1 i0 key_list", true,(i+0), 0,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+517+i*2,"top exe_1 alu2 mux1 i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+521,"top exe_1 alu2 mux1 i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+523,"top exe_1 alu2 mux1 i0 hit", false,-1);
        tracep->declBus(c+524,"top exe_1 alu2 mux1 i0 i", false,-1, 31,0);
        tracep->declBus(c+772,"top mem_2 ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+772,"top mem_2 DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+731,"top mem_2 clk", false,-1);
        tracep->declBit(c+732,"top mem_2 rst", false,-1);
        tracep->declBit(c+46,"top mem_2 r_ren", false,-1);
        tracep->declQuad(c+55,"top mem_2 r_raddr", false,-1, 63,0);
        tracep->declQuad(c+57,"top mem_2 r_rdata", false,-1, 63,0);
        tracep->declQuad(c+55,"top mem_2 r_waddr", false,-1, 63,0);
        tracep->declBus(c+52,"top mem_2 r_mask", false,-1, 7,0);
        tracep->declBit(c+47,"top mem_2 r_wen", false,-1);
        tracep->declQuad(c+8,"top mem_2 r_wdata", false,-1, 63,0);
        tracep->declBus(c+49,"top mem_2 l_choose", false,-1, 6,0);
        tracep->declBit(c+742,"top mem_2 inst_update", false,-1);
        tracep->declBit(c+741,"top mem_2 mem_finish", false,-1);
        tracep->declBit(c+740,"top mem_2 inst_finish", false,-1);
        tracep->declBus(c+18,"top mem_2 araddr2", false,-1, 31,0);
        tracep->declBit(c+19,"top mem_2 arvalid2", false,-1);
        tracep->declBus(c+766,"top mem_2 arburst2", false,-1, 1,0);
        tracep->declBus(c+767,"top mem_2 arlen2", false,-1, 7,0);
        tracep->declBus(c+768,"top mem_2 arsize2", false,-1, 2,0);
        tracep->declBit(c+20,"top mem_2 arready2", false,-1);
        tracep->declQuad(c+21,"top mem_2 rdata2", false,-1, 63,0);
        tracep->declBus(c+23,"top mem_2 rresp2", false,-1, 1,0);
        tracep->declBit(c+24,"top mem_2 rvalid2", false,-1);
        tracep->declBit(c+25,"top mem_2 rlast2", false,-1);
        tracep->declBit(c+26,"top mem_2 rready2", false,-1);
        tracep->declBus(c+27,"top mem_2 awaddr2", false,-1, 31,0);
        tracep->declBit(c+28,"top mem_2 awvalid2", false,-1);
        tracep->declBus(c+766,"top mem_2 awburst2", false,-1, 1,0);
        tracep->declBus(c+767,"top mem_2 awlen2", false,-1, 7,0);
        tracep->declBit(c+29,"top mem_2 awready2", false,-1);
        tracep->declQuad(c+30,"top mem_2 wdata2", false,-1, 63,0);
        tracep->declBit(c+32,"top mem_2 wlast2", false,-1);
        tracep->declBus(c+769,"top mem_2 wstrb2", false,-1, 7,0);
        tracep->declBit(c+33,"top mem_2 wvalid2", false,-1);
        tracep->declBit(c+34,"top mem_2 wready2", false,-1);
        tracep->declBus(c+35,"top mem_2 bresp2", false,-1, 1,0);
        tracep->declBit(c+36,"top mem_2 bvalid2", false,-1);
        tracep->declBit(c+37,"top mem_2 bready2", false,-1);
        tracep->declBit(c+525,"top mem_2 cache_finish", false,-1);
        tracep->declBit(c+526,"top mem_2 use_cache", false,-1);
        tracep->declQuad(c+527,"top mem_2 r_rdata_ld", false,-1, 63,0);
        tracep->declQuad(c+529,"top mem_2 r_rdata_ld_cache", false,-1, 63,0);
        tracep->declQuad(c+531,"top mem_2 r_rdata_ld_device", false,-1, 63,0);
        tracep->declQuad(c+533,"top mem_2 r_rdata_lw", false,-1, 63,0);
        tracep->declQuad(c+535,"top mem_2 r_rdata_lwu", false,-1, 63,0);
        tracep->declQuad(c+537,"top mem_2 r_rdata_lh", false,-1, 63,0);
        tracep->declQuad(c+539,"top mem_2 r_rdata_lhu", false,-1, 63,0);
        tracep->declQuad(c+541,"top mem_2 r_rdata_lb", false,-1, 63,0);
        tracep->declQuad(c+543,"top mem_2 r_rdata_lbu", false,-1, 63,0);
        tracep->declBit(c+764,"top mem_2 device_finish", false,-1);
        tracep->declBus(c+801,"top mem_2 mux3 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+801,"top mem_2 mux3 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+772,"top mem_2 mux3 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+57,"top mem_2 mux3 out", false,-1, 63,0);
        tracep->declBus(c+49,"top mem_2 mux3 key", false,-1, 6,0);
        tracep->declArray(c+545,"top mem_2 mux3 lut", false,-1, 496,0);
        tracep->declBus(c+801,"top mem_2 mux3 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+801,"top mem_2 mux3 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+772,"top mem_2 mux3 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+773,"top mem_2 mux3 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+57,"top mem_2 mux3 i0 out", false,-1, 63,0);
        tracep->declBus(c+49,"top mem_2 mux3 i0 key", false,-1, 6,0);
        tracep->declQuad(c+774,"top mem_2 mux3 i0 default_out", false,-1, 63,0);
        tracep->declArray(c+545,"top mem_2 mux3 i0 lut", false,-1, 496,0);
        tracep->declBus(c+802,"top mem_2 mux3 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<7; i++) {
                tracep->declArray(c+561+i*3,"top mem_2 mux3 i0 pair_list", true,(i+0), 70,0);}}
        {int i; for (i=0; i<7; i++) {
                tracep->declBus(c+582+i*1,"top mem_2 mux3 i0 key_list", true,(i+0), 6,0);}}
        {int i; for (i=0; i<7; i++) {
                tracep->declQuad(c+589+i*2,"top mem_2 mux3 i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+603,"top mem_2 mux3 i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+605,"top mem_2 mux3 i0 hit", false,-1);
        tracep->declBus(c+606,"top mem_2 mux3 i0 i", false,-1, 31,0);
        tracep->declBus(c+777,"top mem_2 finish WIDTH", false,-1, 31,0);
        tracep->declBus(c+803,"top mem_2 finish RESET_VAL", false,-1, 0,0);
        tracep->declBit(c+731,"top mem_2 finish clk", false,-1);
        tracep->declBit(c+732,"top mem_2 finish rst", false,-1);
        tracep->declBus(c+741,"top mem_2 finish din", false,-1, 0,0);
        tracep->declBus(c+740,"top mem_2 finish dout", false,-1, 0,0);
        tracep->declBit(c+781,"top mem_2 finish wen", false,-1);
        tracep->declBit(c+731,"top mem_2 dcache_0 clk", false,-1);
        tracep->declBit(c+732,"top mem_2 dcache_0 rst", false,-1);
        tracep->declBit(c+526,"top mem_2 dcache_0 use_cache", false,-1);
        tracep->declBit(c+46,"top mem_2 dcache_0 r_ren", false,-1);
        tracep->declBus(c+607,"top mem_2 dcache_0 raddr", false,-1, 31,0);
        tracep->declQuad(c+529,"top mem_2 dcache_0 rdata_align", false,-1, 63,0);
        tracep->declBit(c+47,"top mem_2 dcache_0 r_wen", false,-1);
        tracep->declBus(c+607,"top mem_2 dcache_0 waddr", false,-1, 31,0);
        tracep->declQuad(c+8,"top mem_2 dcache_0 wdata", false,-1, 63,0);
        tracep->declBus(c+52,"top mem_2 dcache_0 wmask", false,-1, 7,0);
        tracep->declBit(c+742,"top mem_2 dcache_0 inst_update", false,-1);
        tracep->declBit(c+525,"top mem_2 dcache_0 cache_finish", false,-1);
        tracep->declBus(c+18,"top mem_2 dcache_0 araddr2", false,-1, 31,0);
        tracep->declBit(c+19,"top mem_2 dcache_0 arvalid2", false,-1);
        tracep->declBus(c+766,"top mem_2 dcache_0 arburst2", false,-1, 1,0);
        tracep->declBus(c+767,"top mem_2 dcache_0 arlen2", false,-1, 7,0);
        tracep->declBus(c+768,"top mem_2 dcache_0 arsize2", false,-1, 2,0);
        tracep->declBit(c+20,"top mem_2 dcache_0 arready2", false,-1);
        tracep->declQuad(c+21,"top mem_2 dcache_0 rdata2", false,-1, 63,0);
        tracep->declBus(c+23,"top mem_2 dcache_0 rresp2", false,-1, 1,0);
        tracep->declBit(c+24,"top mem_2 dcache_0 rvalid2", false,-1);
        tracep->declBit(c+25,"top mem_2 dcache_0 rlast2", false,-1);
        tracep->declBit(c+26,"top mem_2 dcache_0 rready2", false,-1);
        tracep->declBus(c+27,"top mem_2 dcache_0 awaddr2", false,-1, 31,0);
        tracep->declBit(c+28,"top mem_2 dcache_0 awvalid2", false,-1);
        tracep->declBus(c+766,"top mem_2 dcache_0 awburst2", false,-1, 1,0);
        tracep->declBus(c+767,"top mem_2 dcache_0 awlen2", false,-1, 7,0);
        tracep->declBit(c+29,"top mem_2 dcache_0 awready2", false,-1);
        tracep->declQuad(c+30,"top mem_2 dcache_0 wdata2", false,-1, 63,0);
        tracep->declBit(c+32,"top mem_2 dcache_0 wlast2", false,-1);
        tracep->declBus(c+769,"top mem_2 dcache_0 wstrb2", false,-1, 7,0);
        tracep->declBit(c+33,"top mem_2 dcache_0 wvalid2", false,-1);
        tracep->declBit(c+34,"top mem_2 dcache_0 wready2", false,-1);
        tracep->declBus(c+35,"top mem_2 dcache_0 bresp2", false,-1, 1,0);
        tracep->declBit(c+36,"top mem_2 dcache_0 bvalid2", false,-1);
        tracep->declBit(c+37,"top mem_2 dcache_0 bready2", false,-1);
        tracep->declBus(c+782,"top mem_2 dcache_0 CACHE_SIZE", false,-1, 31,0);
        tracep->declBus(c+772,"top mem_2 dcache_0 LINE_SIZE", false,-1, 31,0);
        tracep->declBus(c+772,"top mem_2 dcache_0 NUM_LINES", false,-1, 31,0);
        tracep->declBus(c+804,"top mem_2 dcache_0 TAGARRAY_WIDTH", false,-1, 31,0);
        tracep->declBus(c+784,"top mem_2 dcache_0 INDEX_WIDTH", false,-1, 31,0);
        tracep->declBus(c+784,"top mem_2 dcache_0 OFFSET_WIDTH", false,-1, 31,0);
        tracep->declBus(c+785,"top mem_2 dcache_0 TAG_WIDTH", false,-1, 31,0);
        tracep->declBus(c+608,"top mem_2 dcache_0 araddr", false,-1, 31,0);
        tracep->declQuad(c+609,"top mem_2 dcache_0 rdata", false,-1, 63,0);
        tracep->declBus(c+611,"top mem_2 dcache_0 araddr_offset", false,-1, 5,0);
        tracep->declBus(c+612,"top mem_2 dcache_0 araddr_index", false,-1, 5,0);
        tracep->declBus(c+613,"top mem_2 dcache_0 araddr_tag", false,-1, 19,0);
        tracep->declBus(c+614,"top mem_2 dcache_0 waddr_index", false,-1, 5,0);
        tracep->declBus(c+615,"top mem_2 dcache_0 waddr_offset", false,-1, 5,0);
        tracep->declQuad(c+21,"top mem_2 dcache_0 rdata_axi", false,-1, 63,0);
        tracep->declBit(c+25,"top mem_2 dcache_0 rlast", false,-1);
        tracep->declBus(c+773,"top mem_2 dcache_0 CACHE_IDLE", false,-1, 31,0);
        tracep->declBus(c+777,"top mem_2 dcache_0 CACHE_UPDATE_BEGIN", false,-1, 31,0);
        tracep->declBus(c+771,"top mem_2 dcache_0 CACHE_MEMWRITE", false,-1, 31,0);
        tracep->declBus(c+786,"top mem_2 dcache_0 CACHE_MEMREAD", false,-1, 31,0);
        tracep->declBus(c+770,"top mem_2 dcache_0 CACHE_GET", false,-1, 31,0);
        tracep->declBus(c+796,"top mem_2 dcache_0 CACHE_FINISH", false,-1, 31,0);
        tracep->declBus(c+784,"top mem_2 dcache_0 CACHE_WRITE", false,-1, 31,0);
        tracep->declBus(c+616,"top mem_2 dcache_0 cache_state", false,-1, 2,0);
        tracep->declBit(c+617,"top mem_2 dcache_0 rcache_en", false,-1);
        tracep->declBit(c+618,"top mem_2 dcache_0 wcache_en", false,-1);
        tracep->declBit(c+619,"top mem_2 dcache_0 mem_write_begin", false,-1);
        tracep->declBit(c+620,"top mem_2 dcache_0 mem_write_finish", false,-1);
        tracep->declBit(c+621,"top mem_2 dcache_0 mem_read_begin", false,-1);
        tracep->declBus(c+18,"top mem_2 dcache_0 araddr_block", false,-1, 31,0);
        tracep->declBus(c+27,"top mem_2 dcache_0 wraddr_block", false,-1, 31,0);
        tracep->declBit(c+24,"top mem_2 dcache_0 rvalid", false,-1);
        tracep->declBit(c+26,"top mem_2 dcache_0 rready", false,-1);
        tracep->declBit(c+20,"top mem_2 dcache_0 arready", false,-1);
        tracep->declBit(c+19,"top mem_2 dcache_0 arvalid", false,-1);
        tracep->declBus(c+622,"top mem_2 dcache_0 d_r_len", false,-1, 2,0);
        tracep->declBus(c+623,"top mem_2 dcache_0 d_w_len", false,-1, 2,0);
        tracep->declBus(c+766,"top mem_2 dcache_0 arburst", false,-1, 1,0);
        tracep->declBus(c+767,"top mem_2 dcache_0 arlen", false,-1, 7,0);
        tracep->declBus(c+768,"top mem_2 dcache_0 arsize", false,-1, 2,0);
        tracep->declBus(c+23,"top mem_2 dcache_0 rresp", false,-1, 1,0);
        tracep->declBus(c+787,"top mem_2 dcache_0 READ_IDLE", false,-1, 2,0);
        tracep->declBus(c+788,"top mem_2 dcache_0 READ_ARREADY", false,-1, 2,0);
        tracep->declBus(c+789,"top mem_2 dcache_0 READ_TRANS", false,-1, 2,0);
        tracep->declBus(c+768,"top mem_2 dcache_0 READ_FINISH", false,-1, 2,0);
        tracep->declBus(c+624,"top mem_2 dcache_0 read_state", false,-1, 2,0);
        tracep->declBus(c+625,"top mem_2 dcache_0 write_state", false,-1, 2,0);
        tracep->declBus(c+766,"top mem_2 dcache_0 awburst", false,-1, 1,0);
        tracep->declBus(c+767,"top mem_2 dcache_0 awlen", false,-1, 7,0);
        tracep->declBit(c+29,"top mem_2 dcache_0 awready", false,-1);
        tracep->declBit(c+32,"top mem_2 dcache_0 wlast", false,-1);
        tracep->declBit(c+34,"top mem_2 dcache_0 wready", false,-1);
        tracep->declBus(c+35,"top mem_2 dcache_0 bresp", false,-1, 1,0);
        tracep->declBit(c+37,"top mem_2 dcache_0 bready", false,-1);
        tracep->declBit(c+36,"top mem_2 dcache_0 bvalid", false,-1);
        tracep->declBus(c+787,"top mem_2 dcache_0 WRITE_IDLE", false,-1, 2,0);
        tracep->declBus(c+788,"top mem_2 dcache_0 WRITE_AW_READY", false,-1, 2,0);
        tracep->declBus(c+789,"top mem_2 dcache_0 WRITE_W_READY", false,-1, 2,0);
        tracep->declBus(c+768,"top mem_2 dcache_0 WRITE_FINISH", false,-1, 2,0);
        tracep->declBit(c+28,"top mem_2 dcache_0 awvalid", false,-1);
        tracep->declBit(c+33,"top mem_2 dcache_0 wvalid", false,-1);
        tracep->declQuad(c+30,"top mem_2 dcache_0 wdata_axi", false,-1, 63,0);
        tracep->declBus(c+27,"top mem_2 dcache_0 awaddr", false,-1, 31,0);
        tracep->declQuad(c+30,"top mem_2 dcache_0 r_wdata", false,-1, 63,0);
        tracep->declBus(c+769,"top mem_2 dcache_0 wstrb", false,-1, 7,0);
        tracep->declBus(c+626,"top mem_2 dcache_0 c_awlen", false,-1, 7,0);
        tracep->declQuad(c+627,"top mem_2 dcache_0 wmask_full", false,-1, 63,0);
        tracep->declQuad(c+629,"top mem_2 dcache_0 wdata_align", false,-1, 63,0);
        tracep->declQuad(c+631,"top mem_2 dcache_0 wmask_align", false,-1, 63,0);
        tracep->declBus(c+633,"top mem_2 dcache_0 unnamedblk1 i", false,-1, 31,0);
        tracep->declBus(c+634,"top mem_2 dcache_0 unnamedblk2 i", false,-1, 31,0);
        tracep->declBus(c+635,"top mem_2 dcache_0 unnamedblk2 unnamedblk3 j", false,-1, 31,0);
        tracep->declBit(c+731,"top mem_2 mem_read_write_0 clk", false,-1);
        tracep->declBit(c+732,"top mem_2 mem_read_write_0 rst", false,-1);
        tracep->declBit(c+636,"top mem_2 mem_read_write_0 ren", false,-1);
        tracep->declQuad(c+55,"top mem_2 mem_read_write_0 r_raddr", false,-1, 63,0);
        tracep->declQuad(c+531,"top mem_2 mem_read_write_0 r_rdata", false,-1, 63,0);
        tracep->declBit(c+637,"top mem_2 mem_read_write_0 wen", false,-1);
        tracep->declQuad(c+55,"top mem_2 mem_read_write_0 r_waddr", false,-1, 63,0);
        tracep->declQuad(c+8,"top mem_2 mem_read_write_0 r_wdata", false,-1, 63,0);
        tracep->declBus(c+52,"top mem_2 mem_read_write_0 r_mask", false,-1, 7,0);
        tracep->declBit(c+742,"top mem_2 mem_read_write_0 inst_update", false,-1);
        tracep->declBit(c+638,"top mem_2 mem_read_write_0 use_device_en", false,-1);
        tracep->declBit(c+764,"top mem_2 mem_read_write_0 use_device_finish", false,-1);
        tracep->declBit(c+639,"top mem_2 mem_read_write_0 rvalid", false,-1);
        tracep->declBit(c+640,"top mem_2 mem_read_write_0 rready", false,-1);
        tracep->declBit(c+641,"top mem_2 mem_read_write_0 arready", false,-1);
        tracep->declBit(c+642,"top mem_2 mem_read_write_0 arvalid", false,-1);
        tracep->declBit(c+643,"top mem_2 mem_read_write_0 rlast", false,-1);
        tracep->declBus(c+644,"top mem_2 mem_read_write_0 d_r_len", false,-1, 2,0);
        tracep->declBus(c+645,"top mem_2 mem_read_write_0 d_w_len", false,-1, 2,0);
        tracep->declBus(c+766,"top mem_2 mem_read_write_0 arburst", false,-1, 1,0);
        tracep->declBus(c+805,"top mem_2 mem_read_write_0 arlen", false,-1, 7,0);
        tracep->declBus(c+768,"top mem_2 mem_read_write_0 arsize", false,-1, 2,0);
        tracep->declBus(c+646,"top mem_2 mem_read_write_0 rresp", false,-1, 1,0);
        tracep->declQuad(c+647,"top mem_2 mem_read_write_0 rdata_axi", false,-1, 63,0);
        tracep->declBus(c+787,"top mem_2 mem_read_write_0 READ_IDLE", false,-1, 2,0);
        tracep->declBus(c+788,"top mem_2 mem_read_write_0 READ_ARREADY", false,-1, 2,0);
        tracep->declBus(c+789,"top mem_2 mem_read_write_0 READ_TRANS", false,-1, 2,0);
        tracep->declBus(c+768,"top mem_2 mem_read_write_0 READ_FINISH", false,-1, 2,0);
        tracep->declBus(c+649,"top mem_2 mem_read_write_0 read_state", false,-1, 2,0);
        tracep->declBit(c+650,"top mem_2 mem_read_write_0 mem_read_finish", false,-1);
        tracep->declBit(c+651,"top mem_2 mem_read_write_0 mem_write_finish", false,-1);
        tracep->declBus(c+652,"top mem_2 mem_read_write_0 write_state", false,-1, 2,0);
        tracep->declBus(c+766,"top mem_2 mem_read_write_0 awburst", false,-1, 1,0);
        tracep->declBus(c+805,"top mem_2 mem_read_write_0 awlen", false,-1, 7,0);
        tracep->declBit(c+653,"top mem_2 mem_read_write_0 awready", false,-1);
        tracep->declBit(c+654,"top mem_2 mem_read_write_0 wlast", false,-1);
        tracep->declBit(c+655,"top mem_2 mem_read_write_0 wready", false,-1);
        tracep->declBus(c+656,"top mem_2 mem_read_write_0 bresp", false,-1, 1,0);
        tracep->declBit(c+657,"top mem_2 mem_read_write_0 bready", false,-1);
        tracep->declBit(c+658,"top mem_2 mem_read_write_0 bvalid", false,-1);
        tracep->declBus(c+787,"top mem_2 mem_read_write_0 WRITE_IDLE", false,-1, 2,0);
        tracep->declBus(c+788,"top mem_2 mem_read_write_0 WRITE_AW_READY", false,-1, 2,0);
        tracep->declBus(c+789,"top mem_2 mem_read_write_0 WRITE_TRANS", false,-1, 2,0);
        tracep->declBus(c+768,"top mem_2 mem_read_write_0 WRITE_FINISH", false,-1, 2,0);
        tracep->declBit(c+659,"top mem_2 mem_read_write_0 awvalid", false,-1);
        tracep->declBit(c+660,"top mem_2 mem_read_write_0 wvalid", false,-1);
        tracep->declQuad(c+661,"top mem_2 mem_read_write_0 wdata_axi", false,-1, 63,0);
        tracep->declBus(c+607,"top mem_2 mem_read_write_0 awaddr", false,-1, 31,0);
        tracep->declQuad(c+661,"top mem_2 mem_read_write_0 wdata", false,-1, 63,0);
        tracep->declBus(c+52,"top mem_2 mem_read_write_0 wstrb", false,-1, 7,0);
        tracep->declBus(c+663,"top mem_2 mem_read_write_0 c_awlen", false,-1, 7,0);
        tracep->declBit(c+731,"top mem_2 mem_read_write_0 axi_full_s2_1 clk", false,-1);
        tracep->declBit(c+732,"top mem_2 mem_read_write_0 axi_full_s2_1 rst", false,-1);
        tracep->declBus(c+607,"top mem_2 mem_read_write_0 axi_full_s2_1 araddr", false,-1, 31,0);
        tracep->declBit(c+642,"top mem_2 mem_read_write_0 axi_full_s2_1 arvalid", false,-1);
        tracep->declBus(c+766,"top mem_2 mem_read_write_0 axi_full_s2_1 arburst", false,-1, 1,0);
        tracep->declBus(c+805,"top mem_2 mem_read_write_0 axi_full_s2_1 arlen", false,-1, 7,0);
        tracep->declBus(c+768,"top mem_2 mem_read_write_0 axi_full_s2_1 arsize", false,-1, 2,0);
        tracep->declBit(c+641,"top mem_2 mem_read_write_0 axi_full_s2_1 arready", false,-1);
        tracep->declQuad(c+647,"top mem_2 mem_read_write_0 axi_full_s2_1 rdata", false,-1, 63,0);
        tracep->declBus(c+646,"top mem_2 mem_read_write_0 axi_full_s2_1 rresp", false,-1, 1,0);
        tracep->declBit(c+639,"top mem_2 mem_read_write_0 axi_full_s2_1 rvalid", false,-1);
        tracep->declBit(c+643,"top mem_2 mem_read_write_0 axi_full_s2_1 rlast", false,-1);
        tracep->declBit(c+640,"top mem_2 mem_read_write_0 axi_full_s2_1 rready", false,-1);
        tracep->declBus(c+607,"top mem_2 mem_read_write_0 axi_full_s2_1 awaddr", false,-1, 31,0);
        tracep->declBit(c+659,"top mem_2 mem_read_write_0 axi_full_s2_1 awvalid", false,-1);
        tracep->declBus(c+766,"top mem_2 mem_read_write_0 axi_full_s2_1 awburst", false,-1, 1,0);
        tracep->declBus(c+805,"top mem_2 mem_read_write_0 axi_full_s2_1 awlen", false,-1, 7,0);
        tracep->declBit(c+653,"top mem_2 mem_read_write_0 axi_full_s2_1 awready", false,-1);
        tracep->declQuad(c+661,"top mem_2 mem_read_write_0 axi_full_s2_1 wdata", false,-1, 63,0);
        tracep->declBit(c+654,"top mem_2 mem_read_write_0 axi_full_s2_1 wlast", false,-1);
        tracep->declBus(c+52,"top mem_2 mem_read_write_0 axi_full_s2_1 wstrb", false,-1, 7,0);
        tracep->declBit(c+660,"top mem_2 mem_read_write_0 axi_full_s2_1 wvalid", false,-1);
        tracep->declBit(c+655,"top mem_2 mem_read_write_0 axi_full_s2_1 wready", false,-1);
        tracep->declBus(c+656,"top mem_2 mem_read_write_0 axi_full_s2_1 bresp", false,-1, 1,0);
        tracep->declBit(c+658,"top mem_2 mem_read_write_0 axi_full_s2_1 bvalid", false,-1);
        tracep->declBit(c+657,"top mem_2 mem_read_write_0 axi_full_s2_1 bready", false,-1);
        tracep->declBus(c+664,"top mem_2 mem_read_write_0 axi_full_s2_1 r_araddr", false,-1, 31,0);
        tracep->declBus(c+665,"top mem_2 mem_read_write_0 axi_full_s2_1 c_arlen", false,-1, 7,0);
        tracep->declBus(c+666,"top mem_2 mem_read_write_0 axi_full_s2_1 r_awaddr", false,-1, 31,0);
        tracep->declBus(c+787,"top mem_2 mem_read_write_0 axi_full_s2_1 READ_IDLE", false,-1, 2,0);
        tracep->declBus(c+788,"top mem_2 mem_read_write_0 axi_full_s2_1 READ_ARVALID", false,-1, 2,0);
        tracep->declBus(c+789,"top mem_2 mem_read_write_0 axi_full_s2_1 READ_TRANS", false,-1, 2,0);
        tracep->declBus(c+768,"top mem_2 mem_read_write_0 axi_full_s2_1 READ_FINISH", false,-1, 2,0);
        tracep->declBus(c+667,"top mem_2 mem_read_write_0 axi_full_s2_1 state", false,-1, 2,0);
        tracep->declBus(c+668,"top mem_2 mem_read_write_0 axi_full_s2_1 write_state", false,-1, 2,0);
        tracep->declBus(c+787,"top mem_2 mem_read_write_0 axi_full_s2_1 WRITE_IDLE", false,-1, 2,0);
        tracep->declBus(c+788,"top mem_2 mem_read_write_0 axi_full_s2_1 WRITE_AW_VALID", false,-1, 2,0);
        tracep->declBus(c+789,"top mem_2 mem_read_write_0 axi_full_s2_1 WRITE_W_VALID", false,-1, 2,0);
        tracep->declBus(c+768,"top mem_2 mem_read_write_0 axi_full_s2_1 WRITE_FINISH", false,-1, 2,0);
        tracep->declQuad(c+57,"top wb0 r_data", false,-1, 63,0);
        tracep->declQuad(c+53,"top wb0 alu_result", false,-1, 63,0);
        tracep->declBus(c+45,"top wb0 sel_rf_res", false,-1, 2,0);
        tracep->declQuad(c+59,"top wb0 wdata", false,-1, 63,0);
        tracep->declQuad(c+1,"top wb0 c_rdata", false,-1, 63,0);
        tracep->declBus(c+786,"top wb0 mux3 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+786,"top wb0 mux3 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+772,"top wb0 mux3 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+59,"top wb0 mux3 out", false,-1, 63,0);
        tracep->declBus(c+45,"top wb0 mux3 key", false,-1, 2,0);
        tracep->declArray(c+669,"top wb0 mux3 lut", false,-1, 200,0);
        tracep->declBus(c+786,"top wb0 mux3 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+786,"top wb0 mux3 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+772,"top wb0 mux3 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+773,"top wb0 mux3 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+59,"top wb0 mux3 i0 out", false,-1, 63,0);
        tracep->declBus(c+45,"top wb0 mux3 i0 key", false,-1, 2,0);
        tracep->declQuad(c+774,"top wb0 mux3 i0 default_out", false,-1, 63,0);
        tracep->declArray(c+669,"top wb0 mux3 i0 lut", false,-1, 200,0);
        tracep->declBus(c+795,"top wb0 mux3 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declArray(c+676+i*3,"top wb0 mux3 i0 pair_list", true,(i+0), 66,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+685+i*1,"top wb0 mux3 i0 key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declQuad(c+688+i*2,"top wb0 mux3 i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+694,"top wb0 mux3 i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+696,"top wb0 mux3 i0 hit", false,-1);
        tracep->declBus(c+697,"top wb0 mux3 i0 i", false,-1, 31,0);
        tracep->declBit(c+731,"top arbiter_1 clk", false,-1);
        tracep->declBit(c+732,"top arbiter_1 rst", false,-1);
        tracep->declBus(c+743,"top arbiter_1 araddr_1", false,-1, 31,0);
        tracep->declBus(c+18,"top arbiter_1 araddr_2", false,-1, 31,0);
        tracep->declBit(c+10,"top arbiter_1 arvalid_1", false,-1);
        tracep->declBit(c+19,"top arbiter_1 arvalid_2", false,-1);
        tracep->declBus(c+766,"top arbiter_1 arburst_1", false,-1, 1,0);
        tracep->declBus(c+766,"top arbiter_1 arburst_2", false,-1, 1,0);
        tracep->declBus(c+767,"top arbiter_1 arlen_1", false,-1, 7,0);
        tracep->declBus(c+767,"top arbiter_1 arlen_2", false,-1, 7,0);
        tracep->declBus(c+768,"top arbiter_1 arsize_1", false,-1, 2,0);
        tracep->declBus(c+768,"top arbiter_1 arsize_2", false,-1, 2,0);
        tracep->declBit(c+11,"top arbiter_1 arready_1", false,-1);
        tracep->declBit(c+20,"top arbiter_1 arready_2", false,-1);
        tracep->declQuad(c+12,"top arbiter_1 rdata_1", false,-1, 63,0);
        tracep->declQuad(c+21,"top arbiter_1 rdata_2", false,-1, 63,0);
        tracep->declBus(c+14,"top arbiter_1 rresp_1", false,-1, 1,0);
        tracep->declBus(c+23,"top arbiter_1 rresp_2", false,-1, 1,0);
        tracep->declBit(c+15,"top arbiter_1 rvalid_1", false,-1);
        tracep->declBit(c+24,"top arbiter_1 rvalid_2", false,-1);
        tracep->declBit(c+16,"top arbiter_1 rlast_1", false,-1);
        tracep->declBit(c+25,"top arbiter_1 rlast_2", false,-1);
        tracep->declBit(c+17,"top arbiter_1 rready_1", false,-1);
        tracep->declBit(c+26,"top arbiter_1 rready_2", false,-1);
        tracep->declBus(c+27,"top arbiter_1 awaddr_2", false,-1, 31,0);
        tracep->declBit(c+28,"top arbiter_1 awvalid_2", false,-1);
        tracep->declBus(c+766,"top arbiter_1 awburst_2", false,-1, 1,0);
        tracep->declBus(c+767,"top arbiter_1 awlen_2", false,-1, 7,0);
        tracep->declBit(c+29,"top arbiter_1 awready_2", false,-1);
        tracep->declQuad(c+30,"top arbiter_1 wdata_2", false,-1, 63,0);
        tracep->declBit(c+32,"top arbiter_1 wlast_2", false,-1);
        tracep->declBus(c+769,"top arbiter_1 wstrb_2", false,-1, 7,0);
        tracep->declBit(c+33,"top arbiter_1 wvalid_2", false,-1);
        tracep->declBit(c+34,"top arbiter_1 wready_2", false,-1);
        tracep->declBus(c+35,"top arbiter_1 bresp_2", false,-1, 1,0);
        tracep->declBit(c+36,"top arbiter_1 bvalid_2", false,-1);
        tracep->declBit(c+37,"top arbiter_1 bready_2", false,-1);
        tracep->declBit(c+742,"top arbiter_1 inst_update", false,-1);
        tracep->declBit(c+741,"top arbiter_1 mem_finish", false,-1);
        tracep->declBus(c+698,"top arbiter_1 master_state", false,-1, 1,0);
        tracep->declBus(c+773,"top arbiter_1 IDLE", false,-1, 31,0);
        tracep->declBus(c+777,"top arbiter_1 S_MASTER_1", false,-1, 31,0);
        tracep->declBus(c+771,"top arbiter_1 S_MASTER_2", false,-1, 31,0);
        tracep->declBit(c+699,"top arbiter_1 master_1", false,-1);
        tracep->declBit(c+700,"top arbiter_1 master_2", false,-1);
        tracep->declBus(c+765,"top arbiter_1 araddr", false,-1, 31,0);
        tracep->declBit(c+701,"top arbiter_1 arvalid", false,-1);
        tracep->declBit(c+702,"top arbiter_1 arready", false,-1);
        tracep->declBus(c+703,"top arbiter_1 arburst", false,-1, 1,0);
        tracep->declBus(c+704,"top arbiter_1 arlen", false,-1, 7,0);
        tracep->declBus(c+705,"top arbiter_1 arsize", false,-1, 2,0);
        tracep->declQuad(c+706,"top arbiter_1 rdata", false,-1, 63,0);
        tracep->declBus(c+708,"top arbiter_1 rresp", false,-1, 1,0);
        tracep->declBit(c+709,"top arbiter_1 rready", false,-1);
        tracep->declBit(c+710,"top arbiter_1 rvalid", false,-1);
        tracep->declBit(c+711,"top arbiter_1 rlast", false,-1);
        tracep->declBus(c+712,"top arbiter_1 awaddr", false,-1, 31,0);
        tracep->declBit(c+713,"top arbiter_1 awready", false,-1);
        tracep->declBit(c+714,"top arbiter_1 awvalid", false,-1);
        tracep->declBus(c+715,"top arbiter_1 awburst", false,-1, 1,0);
        tracep->declBus(c+716,"top arbiter_1 awlen", false,-1, 7,0);
        tracep->declBit(c+717,"top arbiter_1 wlast", false,-1);
        tracep->declBit(c+718,"top arbiter_1 wready", false,-1);
        tracep->declBit(c+719,"top arbiter_1 wvalid", false,-1);
        tracep->declQuad(c+720,"top arbiter_1 wdata", false,-1, 63,0);
        tracep->declBus(c+722,"top arbiter_1 wstrb", false,-1, 7,0);
        tracep->declBus(c+723,"top arbiter_1 bresp", false,-1, 1,0);
        tracep->declBit(c+724,"top arbiter_1 bvalid", false,-1);
        tracep->declBit(c+725,"top arbiter_1 bready", false,-1);
        tracep->declBit(c+731,"top arbiter_1 axi_full_s2_0 clk", false,-1);
        tracep->declBit(c+732,"top arbiter_1 axi_full_s2_0 rst", false,-1);
        tracep->declBus(c+765,"top arbiter_1 axi_full_s2_0 araddr", false,-1, 31,0);
        tracep->declBit(c+701,"top arbiter_1 axi_full_s2_0 arvalid", false,-1);
        tracep->declBus(c+703,"top arbiter_1 axi_full_s2_0 arburst", false,-1, 1,0);
        tracep->declBus(c+704,"top arbiter_1 axi_full_s2_0 arlen", false,-1, 7,0);
        tracep->declBus(c+705,"top arbiter_1 axi_full_s2_0 arsize", false,-1, 2,0);
        tracep->declBit(c+702,"top arbiter_1 axi_full_s2_0 arready", false,-1);
        tracep->declQuad(c+706,"top arbiter_1 axi_full_s2_0 rdata", false,-1, 63,0);
        tracep->declBus(c+708,"top arbiter_1 axi_full_s2_0 rresp", false,-1, 1,0);
        tracep->declBit(c+710,"top arbiter_1 axi_full_s2_0 rvalid", false,-1);
        tracep->declBit(c+711,"top arbiter_1 axi_full_s2_0 rlast", false,-1);
        tracep->declBit(c+709,"top arbiter_1 axi_full_s2_0 rready", false,-1);
        tracep->declBus(c+712,"top arbiter_1 axi_full_s2_0 awaddr", false,-1, 31,0);
        tracep->declBit(c+714,"top arbiter_1 axi_full_s2_0 awvalid", false,-1);
        tracep->declBus(c+715,"top arbiter_1 axi_full_s2_0 awburst", false,-1, 1,0);
        tracep->declBus(c+716,"top arbiter_1 axi_full_s2_0 awlen", false,-1, 7,0);
        tracep->declBit(c+713,"top arbiter_1 axi_full_s2_0 awready", false,-1);
        tracep->declQuad(c+720,"top arbiter_1 axi_full_s2_0 wdata", false,-1, 63,0);
        tracep->declBit(c+717,"top arbiter_1 axi_full_s2_0 wlast", false,-1);
        tracep->declBus(c+722,"top arbiter_1 axi_full_s2_0 wstrb", false,-1, 7,0);
        tracep->declBit(c+719,"top arbiter_1 axi_full_s2_0 wvalid", false,-1);
        tracep->declBit(c+718,"top arbiter_1 axi_full_s2_0 wready", false,-1);
        tracep->declBus(c+723,"top arbiter_1 axi_full_s2_0 bresp", false,-1, 1,0);
        tracep->declBit(c+724,"top arbiter_1 axi_full_s2_0 bvalid", false,-1);
        tracep->declBit(c+725,"top arbiter_1 axi_full_s2_0 bready", false,-1);
        tracep->declBus(c+726,"top arbiter_1 axi_full_s2_0 r_araddr", false,-1, 31,0);
        tracep->declBus(c+727,"top arbiter_1 axi_full_s2_0 c_arlen", false,-1, 7,0);
        tracep->declBus(c+728,"top arbiter_1 axi_full_s2_0 r_awaddr", false,-1, 31,0);
        tracep->declBus(c+787,"top arbiter_1 axi_full_s2_0 READ_IDLE", false,-1, 2,0);
        tracep->declBus(c+788,"top arbiter_1 axi_full_s2_0 READ_ARVALID", false,-1, 2,0);
        tracep->declBus(c+789,"top arbiter_1 axi_full_s2_0 READ_TRANS", false,-1, 2,0);
        tracep->declBus(c+768,"top arbiter_1 axi_full_s2_0 READ_FINISH", false,-1, 2,0);
        tracep->declBus(c+729,"top arbiter_1 axi_full_s2_0 state", false,-1, 2,0);
        tracep->declBus(c+730,"top arbiter_1 axi_full_s2_0 write_state", false,-1, 2,0);
        tracep->declBus(c+787,"top arbiter_1 axi_full_s2_0 WRITE_IDLE", false,-1, 2,0);
        tracep->declBus(c+788,"top arbiter_1 axi_full_s2_0 WRITE_AW_VALID", false,-1, 2,0);
        tracep->declBus(c+789,"top arbiter_1 axi_full_s2_0 WRITE_W_VALID", false,-1, 2,0);
        tracep->declBus(c+768,"top arbiter_1 axi_full_s2_0 WRITE_FINISH", false,-1, 2,0);
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
        tracep->fullBit(oldp+10,(vlSelf->top__DOT__if_0__DOT__icache_9__DOT__arvalid));
        tracep->fullBit(oldp+11,(((1U == (IData)(vlSelf->top__DOT__arbiter_1__DOT__master_state))
                                   ? (IData)((0U == (IData)(vlSelf->top__DOT__arbiter_1__DOT__axi_full_s2_0__DOT__state)))
                                   : 0U)));
        tracep->fullQData(oldp+12,(((1U == (IData)(vlSelf->top__DOT__arbiter_1__DOT__master_state))
                                     ? vlSelf->top__DOT__arbiter_1__DOT__rdata
                                     : 0ULL)),64);
        tracep->fullCData(oldp+14,(((1U == (IData)(vlSelf->top__DOT__arbiter_1__DOT__master_state))
                                     ? (3U & (IData)(vlSelf->top__DOT__arbiter_1__DOT__rresp))
                                     : 0U)),2);
        tracep->fullBit(oldp+15,(vlSelf->top__DOT__rvalid1));
        tracep->fullBit(oldp+16,(vlSelf->top__DOT__rlast1));
        tracep->fullBit(oldp+17,(vlSelf->top__DOT__if_0__DOT__icache_9__DOT__rready));
        tracep->fullIData(oldp+18,((0xffffffc0U & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__araddr)),32);
        tracep->fullBit(oldp+19,(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__arvalid));
        tracep->fullBit(oldp+20,(((2U == (IData)(vlSelf->top__DOT__arbiter_1__DOT__master_state))
                                   ? (IData)((0U == (IData)(vlSelf->top__DOT__arbiter_1__DOT__axi_full_s2_0__DOT__state)))
                                   : 0U)));
        tracep->fullQData(oldp+21,(((2U == (IData)(vlSelf->top__DOT__arbiter_1__DOT__master_state))
                                     ? vlSelf->top__DOT__arbiter_1__DOT__rdata
                                     : 0ULL)),64);
        tracep->fullCData(oldp+23,(((2U == (IData)(vlSelf->top__DOT__arbiter_1__DOT__master_state))
                                     ? (3U & (IData)(vlSelf->top__DOT__arbiter_1__DOT__rresp))
                                     : 0U)),2);
        tracep->fullBit(oldp+24,(vlSelf->top__DOT__rvalid2));
        tracep->fullBit(oldp+25,(vlSelf->top__DOT__rlast2));
        tracep->fullBit(oldp+26,(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rready));
        tracep->fullIData(oldp+27,(((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__tagarray
                                     [(0x3fU & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__araddr 
                                                >> 6U))] 
                                     << 0xcU) | (0xfc0U 
                                                 & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__araddr))),32);
        tracep->fullBit(oldp+28,(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__awvalid));
        tracep->fullBit(oldp+29,(((2U == (IData)(vlSelf->top__DOT__arbiter_1__DOT__master_state))
                                   ? (IData)((0U == (IData)(vlSelf->top__DOT__arbiter_1__DOT__axi_full_s2_0__DOT__write_state)))
                                   : 0U)));
        tracep->fullQData(oldp+30,(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata),64);
        tracep->fullBit(oldp+32,((8U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__c_awlen))));
        tracep->fullBit(oldp+33,(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__wvalid));
        tracep->fullBit(oldp+34,(vlSelf->top__DOT__wready2));
        tracep->fullCData(oldp+35,(((2U == (IData)(vlSelf->top__DOT__arbiter_1__DOT__master_state))
                                     ? (3U & (IData)(vlSelf->top__DOT__arbiter_1__DOT__bresp))
                                     : 0U)),2);
        tracep->fullBit(oldp+36,(((2U == (IData)(vlSelf->top__DOT__arbiter_1__DOT__master_state))
                                   ? (IData)((2U == (IData)(vlSelf->top__DOT__arbiter_1__DOT__axi_full_s2_0__DOT__write_state)))
                                   : 0U)));
        tracep->fullBit(oldp+37,(((1U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__write_state)) 
                                  & (2U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__write_state)))));
        tracep->fullSData(oldp+38,(vlSelf->top__DOT__op_d),12);
        tracep->fullCData(oldp+39,(vlSelf->top__DOT__fu_7_d),5);
        tracep->fullCData(oldp+40,(vlSelf->top__DOT__c_raddr),2);
        tracep->fullCData(oldp+41,(vlSelf->top__DOT__e_inst),3);
        tracep->fullCData(oldp+42,(vlSelf->top__DOT__sel_alu_src1),4);
        tracep->fullCData(oldp+43,(vlSelf->top__DOT__sel_alu_src2),3);
        tracep->fullIData(oldp+44,(vlSelf->top__DOT__alu_control),17);
        tracep->fullCData(oldp+45,(vlSelf->top__DOT__sel_rf_res),3);
        tracep->fullBit(oldp+46,(vlSelf->top__DOT__data_ram_en));
        tracep->fullBit(oldp+47,(vlSelf->top__DOT__data_ram_wen));
        tracep->fullCData(oldp+48,(vlSelf->top__DOT__alu_equal),3);
        tracep->fullCData(oldp+49,(vlSelf->top__DOT__l_choose),7);
        tracep->fullBit(oldp+50,(vlSelf->top__DOT__w_choose));
        tracep->fullBit(oldp+51,(vlSelf->top__DOT__control_1__DOT__csrrs));
        tracep->fullCData(oldp+52,(vlSelf->top__DOT__wmask),8);
        tracep->fullQData(oldp+53,(vlSelf->top__DOT__alu_result),64);
        tracep->fullQData(oldp+55,(vlSelf->top__DOT__exe_1__DOT__alu2__DOT__adder_result),64);
        tracep->fullQData(oldp+57,(vlSelf->top__DOT__ram_data),64);
        tracep->fullQData(oldp+59,(vlSelf->top__DOT__wdata),64);
        tracep->fullQData(oldp+61,(vlSelf->top__DOT__if_0__DOT__dnpc_0),64);
        tracep->fullQData(oldp+63,(vlSelf->top__DOT__if_0__DOT__rdata_u),64);
        tracep->fullWData(oldp+65,(vlSelf->top__DOT__if_0__DOT____Vcellinp__mux4____pinNumber3),264);
        tracep->fullWData(oldp+74,(vlSelf->top__DOT__if_0__DOT__mux4__DOT__i0__DOT__pair_list[0]),66);
        tracep->fullWData(oldp+77,(vlSelf->top__DOT__if_0__DOT__mux4__DOT__i0__DOT__pair_list[1]),66);
        tracep->fullWData(oldp+80,(vlSelf->top__DOT__if_0__DOT__mux4__DOT__i0__DOT__pair_list[2]),66);
        tracep->fullWData(oldp+83,(vlSelf->top__DOT__if_0__DOT__mux4__DOT__i0__DOT__pair_list[3]),66);
        tracep->fullCData(oldp+86,(vlSelf->top__DOT__if_0__DOT__mux4__DOT__i0__DOT__key_list[0]),2);
        tracep->fullCData(oldp+87,(vlSelf->top__DOT__if_0__DOT__mux4__DOT__i0__DOT__key_list[1]),2);
        tracep->fullCData(oldp+88,(vlSelf->top__DOT__if_0__DOT__mux4__DOT__i0__DOT__key_list[2]),2);
        tracep->fullCData(oldp+89,(vlSelf->top__DOT__if_0__DOT__mux4__DOT__i0__DOT__key_list[3]),2);
        tracep->fullQData(oldp+90,(vlSelf->top__DOT__if_0__DOT__mux4__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+92,(vlSelf->top__DOT__if_0__DOT__mux4__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+94,(vlSelf->top__DOT__if_0__DOT__mux4__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+96,(vlSelf->top__DOT__if_0__DOT__mux4__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+98,(vlSelf->top__DOT__if_0__DOT__mux4__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+100,(vlSelf->top__DOT__if_0__DOT__mux4__DOT__i0__DOT__hit));
        tracep->fullIData(oldp+101,(vlSelf->top__DOT__if_0__DOT__mux4__DOT__i0__DOT__i),32);
        tracep->fullWData(oldp+102,(vlSelf->top__DOT__if_0__DOT____Vcellinp__mux5____pinNumber3),130);
        tracep->fullWData(oldp+107,(vlSelf->top__DOT__if_0__DOT__mux5__DOT__i0__DOT__pair_list[0]),65);
        tracep->fullWData(oldp+110,(vlSelf->top__DOT__if_0__DOT__mux5__DOT__i0__DOT__pair_list[1]),65);
        tracep->fullBit(oldp+113,(vlSelf->top__DOT__if_0__DOT__mux5__DOT__i0__DOT__key_list[0]));
        tracep->fullBit(oldp+114,(vlSelf->top__DOT__if_0__DOT__mux5__DOT__i0__DOT__key_list[1]));
        tracep->fullQData(oldp+115,(vlSelf->top__DOT__if_0__DOT__mux5__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+117,(vlSelf->top__DOT__if_0__DOT__mux5__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+119,(vlSelf->top__DOT__if_0__DOT__mux5__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+121,(vlSelf->top__DOT__if_0__DOT__mux5__DOT__i0__DOT__hit));
        tracep->fullIData(oldp+122,(vlSelf->top__DOT__if_0__DOT__mux5__DOT__i0__DOT__i),32);
        tracep->fullCData(oldp+123,(vlSelf->top__DOT__if_0__DOT__icache_9__DOT__cache_state),3);
        tracep->fullCData(oldp+124,(vlSelf->top__DOT__if_0__DOT__icache_9__DOT__d_len),3);
        tracep->fullCData(oldp+125,(vlSelf->top__DOT__if_0__DOT__icache_9__DOT__state),3);
        tracep->fullBit(oldp+126,(vlSelf->top__DOT__if_0__DOT__icache_9__DOT__rvalid_rready));
        tracep->fullQData(oldp+127,(vlSelf->top__DOT__if_0__DOT__icache_9__DOT__rdata_test3),64);
        tracep->fullIData(oldp+129,(vlSelf->top__DOT__if_0__DOT__icache_9__DOT__unnamedblk1__DOT__i),32);
        tracep->fullIData(oldp+130,(vlSelf->top__DOT__if_0__DOT__icache_9__DOT__unnamedblk2__DOT__j),32);
        tracep->fullIData(oldp+131,(vlSelf->top__DOT__if_0__DOT__icache_9__DOT__unnamedblk2__DOT__unnamedblk3__DOT__k),32);
        tracep->fullQData(oldp+132,(vlSelf->top__DOT__id_1__DOT__immi),64);
        tracep->fullQData(oldp+134,(vlSelf->top__DOT__id_1__DOT__immu),64);
        tracep->fullWData(oldp+136,(vlSelf->top__DOT__id_1__DOT____Vcellinp__mux0____pinNumber3),760);
        tracep->fullWData(oldp+160,(vlSelf->top__DOT__id_1__DOT__mux0__DOT__i0__DOT__pair_list[0]),76);
        tracep->fullWData(oldp+163,(vlSelf->top__DOT__id_1__DOT__mux0__DOT__i0__DOT__pair_list[1]),76);
        tracep->fullWData(oldp+166,(vlSelf->top__DOT__id_1__DOT__mux0__DOT__i0__DOT__pair_list[2]),76);
        tracep->fullWData(oldp+169,(vlSelf->top__DOT__id_1__DOT__mux0__DOT__i0__DOT__pair_list[3]),76);
        tracep->fullWData(oldp+172,(vlSelf->top__DOT__id_1__DOT__mux0__DOT__i0__DOT__pair_list[4]),76);
        tracep->fullWData(oldp+175,(vlSelf->top__DOT__id_1__DOT__mux0__DOT__i0__DOT__pair_list[5]),76);
        tracep->fullWData(oldp+178,(vlSelf->top__DOT__id_1__DOT__mux0__DOT__i0__DOT__pair_list[6]),76);
        tracep->fullWData(oldp+181,(vlSelf->top__DOT__id_1__DOT__mux0__DOT__i0__DOT__pair_list[7]),76);
        tracep->fullWData(oldp+184,(vlSelf->top__DOT__id_1__DOT__mux0__DOT__i0__DOT__pair_list[8]),76);
        tracep->fullWData(oldp+187,(vlSelf->top__DOT__id_1__DOT__mux0__DOT__i0__DOT__pair_list[9]),76);
        tracep->fullSData(oldp+190,(vlSelf->top__DOT__id_1__DOT__mux0__DOT__i0__DOT__key_list[0]),12);
        tracep->fullSData(oldp+191,(vlSelf->top__DOT__id_1__DOT__mux0__DOT__i0__DOT__key_list[1]),12);
        tracep->fullSData(oldp+192,(vlSelf->top__DOT__id_1__DOT__mux0__DOT__i0__DOT__key_list[2]),12);
        tracep->fullSData(oldp+193,(vlSelf->top__DOT__id_1__DOT__mux0__DOT__i0__DOT__key_list[3]),12);
        tracep->fullSData(oldp+194,(vlSelf->top__DOT__id_1__DOT__mux0__DOT__i0__DOT__key_list[4]),12);
        tracep->fullSData(oldp+195,(vlSelf->top__DOT__id_1__DOT__mux0__DOT__i0__DOT__key_list[5]),12);
        tracep->fullSData(oldp+196,(vlSelf->top__DOT__id_1__DOT__mux0__DOT__i0__DOT__key_list[6]),12);
        tracep->fullSData(oldp+197,(vlSelf->top__DOT__id_1__DOT__mux0__DOT__i0__DOT__key_list[7]),12);
        tracep->fullSData(oldp+198,(vlSelf->top__DOT__id_1__DOT__mux0__DOT__i0__DOT__key_list[8]),12);
        tracep->fullSData(oldp+199,(vlSelf->top__DOT__id_1__DOT__mux0__DOT__i0__DOT__key_list[9]),12);
        tracep->fullQData(oldp+200,(vlSelf->top__DOT__id_1__DOT__mux0__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+202,(vlSelf->top__DOT__id_1__DOT__mux0__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+204,(vlSelf->top__DOT__id_1__DOT__mux0__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+206,(vlSelf->top__DOT__id_1__DOT__mux0__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+208,(vlSelf->top__DOT__id_1__DOT__mux0__DOT__i0__DOT__data_list[4]),64);
        tracep->fullQData(oldp+210,(vlSelf->top__DOT__id_1__DOT__mux0__DOT__i0__DOT__data_list[5]),64);
        tracep->fullQData(oldp+212,(vlSelf->top__DOT__id_1__DOT__mux0__DOT__i0__DOT__data_list[6]),64);
        tracep->fullQData(oldp+214,(vlSelf->top__DOT__id_1__DOT__mux0__DOT__i0__DOT__data_list[7]),64);
        tracep->fullQData(oldp+216,(vlSelf->top__DOT__id_1__DOT__mux0__DOT__i0__DOT__data_list[8]),64);
        tracep->fullQData(oldp+218,(vlSelf->top__DOT__id_1__DOT__mux0__DOT__i0__DOT__data_list[9]),64);
        tracep->fullQData(oldp+220,(vlSelf->top__DOT__id_1__DOT__mux0__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+222,(vlSelf->top__DOT__id_1__DOT__mux0__DOT__i0__DOT__hit));
        tracep->fullIData(oldp+223,(vlSelf->top__DOT__id_1__DOT__mux0__DOT__i0__DOT__i),32);
        tracep->fullBit(oldp+224,(vlSelf->top__DOT__control_1__DOT__addi));
        tracep->fullBit(oldp+225,(vlSelf->top__DOT__control_1__DOT__csrrw));
        tracep->fullBit(oldp+226,(vlSelf->top__DOT__control_1__DOT__andi));
        tracep->fullBit(oldp+227,(vlSelf->top__DOT__control_1__DOT__xori));
        tracep->fullBit(oldp+228,(vlSelf->top__DOT__control_1__DOT__ori));
        tracep->fullBit(oldp+229,(vlSelf->top__DOT__control_1__DOT__sll));
        tracep->fullBit(oldp+230,(vlSelf->top__DOT__control_1__DOT__srl));
        tracep->fullBit(oldp+231,(vlSelf->top__DOT__control_1__DOT__sra));
        tracep->fullBit(oldp+232,(vlSelf->top__DOT__control_1__DOT__sllw));
        tracep->fullBit(oldp+233,(vlSelf->top__DOT__control_1__DOT__srlw));
        tracep->fullBit(oldp+234,(vlSelf->top__DOT__control_1__DOT__sraw));
        tracep->fullBit(oldp+235,(vlSelf->top__DOT__control_1__DOT__addiw));
        tracep->fullBit(oldp+236,(vlSelf->top__DOT__control_1__DOT__slliw));
        tracep->fullBit(oldp+237,(vlSelf->top__DOT__control_1__DOT__srliw));
        tracep->fullBit(oldp+238,(vlSelf->top__DOT__control_1__DOT__sraiw));
        tracep->fullBit(oldp+239,((1U & ((IData)(vlSelf->top__DOT__op_d) 
                                         >> 1U))));
        tracep->fullBit(oldp+240,((1U & (IData)(vlSelf->top__DOT__op_d))));
        tracep->fullBit(oldp+241,((1U & ((IData)(vlSelf->top__DOT__op_d) 
                                         >> 2U))));
        tracep->fullBit(oldp+242,(vlSelf->top__DOT__control_1__DOT__jalr));
        tracep->fullBit(oldp+243,(vlSelf->top__DOT__control_1__DOT__sd));
        tracep->fullBit(oldp+244,(vlSelf->top__DOT__control_1__DOT__sh));
        tracep->fullBit(oldp+245,(vlSelf->top__DOT__control_1__DOT__sw));
        tracep->fullBit(oldp+246,(vlSelf->top__DOT__control_1__DOT__sb));
        tracep->fullBit(oldp+247,(vlSelf->top__DOT__control_1__DOT__lw));
        tracep->fullBit(oldp+248,(vlSelf->top__DOT__control_1__DOT__lwu));
        tracep->fullBit(oldp+249,(vlSelf->top__DOT__control_1__DOT__lh));
        tracep->fullBit(oldp+250,(vlSelf->top__DOT__control_1__DOT__lhu));
        tracep->fullBit(oldp+251,(vlSelf->top__DOT__control_1__DOT__lb));
        tracep->fullBit(oldp+252,(vlSelf->top__DOT__control_1__DOT__lbu));
        tracep->fullBit(oldp+253,(vlSelf->top__DOT__control_1__DOT__ld));
        tracep->fullBit(oldp+254,(vlSelf->top__DOT__control_1__DOT__addw));
        tracep->fullBit(oldp+255,(vlSelf->top__DOT__control_1__DOT__subw));
        tracep->fullBit(oldp+256,(vlSelf->top__DOT__control_1__DOT__mulw));
        tracep->fullBit(oldp+257,(vlSelf->top__DOT__control_1__DOT__divw));
        tracep->fullBit(oldp+258,(vlSelf->top__DOT__control_1__DOT__divuw));
        tracep->fullBit(oldp+259,(vlSelf->top__DOT__control_1__DOT__remw));
        tracep->fullBit(oldp+260,(vlSelf->top__DOT__control_1__DOT__remuw));
        tracep->fullBit(oldp+261,(vlSelf->top__DOT__control_1__DOT__divu));
        tracep->fullBit(oldp+262,(vlSelf->top__DOT__control_1__DOT__div));
        tracep->fullBit(oldp+263,(vlSelf->top__DOT__control_1__DOT__rem));
        tracep->fullBit(oldp+264,(vlSelf->top__DOT__control_1__DOT__remu));
        tracep->fullBit(oldp+265,(vlSelf->top__DOT__control_1__DOT__Add));
        tracep->fullBit(oldp+266,(vlSelf->top__DOT__control_1__DOT__Mul));
        tracep->fullBit(oldp+267,(vlSelf->top__DOT__control_1__DOT__And));
        tracep->fullBit(oldp+268,(vlSelf->top__DOT__control_1__DOT__Xor));
        tracep->fullBit(oldp+269,(vlSelf->top__DOT__control_1__DOT__Or));
        tracep->fullBit(oldp+270,(vlSelf->top__DOT__control_1__DOT__sltu));
        tracep->fullBit(oldp+271,(vlSelf->top__DOT__control_1__DOT__slt));
        tracep->fullBit(oldp+272,(vlSelf->top__DOT__control_1__DOT__sub));
        tracep->fullBit(oldp+273,(vlSelf->top__DOT__control_1__DOT__sltiu));
        tracep->fullBit(oldp+274,(vlSelf->top__DOT__control_1__DOT__srai));
        tracep->fullBit(oldp+275,(vlSelf->top__DOT__control_1__DOT__slli));
        tracep->fullBit(oldp+276,(vlSelf->top__DOT__control_1__DOT__srli));
        tracep->fullBit(oldp+277,(vlSelf->top__DOT__control_1__DOT__beq));
        tracep->fullBit(oldp+278,(vlSelf->top__DOT__control_1__DOT__bne));
        tracep->fullBit(oldp+279,(vlSelf->top__DOT__control_1__DOT__bge));
        tracep->fullBit(oldp+280,(vlSelf->top__DOT__control_1__DOT__bgeu));
        tracep->fullBit(oldp+281,(vlSelf->top__DOT__control_1__DOT__bltu));
        tracep->fullBit(oldp+282,(vlSelf->top__DOT__control_1__DOT__blt));
        tracep->fullQData(oldp+283,(vlSelf->top__DOT__exe_1__DOT__alu_src1),64);
        tracep->fullQData(oldp+285,(vlSelf->top__DOT__exe_1__DOT__alu_src2),64);
        tracep->fullQData(oldp+287,(vlSelf->top__DOT__exe_1__DOT__c_wdata),64);
        tracep->fullWData(oldp+289,(vlSelf->top__DOT__exe_1__DOT____Vcellinp__mux1____pinNumber3),272);
        tracep->fullWData(oldp+298,(vlSelf->top__DOT__exe_1__DOT__mux1__DOT__i0__DOT__pair_list[0]),68);
        tracep->fullWData(oldp+301,(vlSelf->top__DOT__exe_1__DOT__mux1__DOT__i0__DOT__pair_list[1]),68);
        tracep->fullWData(oldp+304,(vlSelf->top__DOT__exe_1__DOT__mux1__DOT__i0__DOT__pair_list[2]),68);
        tracep->fullWData(oldp+307,(vlSelf->top__DOT__exe_1__DOT__mux1__DOT__i0__DOT__pair_list[3]),68);
        tracep->fullCData(oldp+310,(vlSelf->top__DOT__exe_1__DOT__mux1__DOT__i0__DOT__key_list[0]),4);
        tracep->fullCData(oldp+311,(vlSelf->top__DOT__exe_1__DOT__mux1__DOT__i0__DOT__key_list[1]),4);
        tracep->fullCData(oldp+312,(vlSelf->top__DOT__exe_1__DOT__mux1__DOT__i0__DOT__key_list[2]),4);
        tracep->fullCData(oldp+313,(vlSelf->top__DOT__exe_1__DOT__mux1__DOT__i0__DOT__key_list[3]),4);
        tracep->fullQData(oldp+314,(vlSelf->top__DOT__exe_1__DOT__mux1__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+316,(vlSelf->top__DOT__exe_1__DOT__mux1__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+318,(vlSelf->top__DOT__exe_1__DOT__mux1__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+320,(vlSelf->top__DOT__exe_1__DOT__mux1__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+322,(vlSelf->top__DOT__exe_1__DOT__mux1__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+324,(vlSelf->top__DOT__exe_1__DOT__mux1__DOT__i0__DOT__hit));
        tracep->fullIData(oldp+325,(vlSelf->top__DOT__exe_1__DOT__mux1__DOT__i0__DOT__i),32);
        tracep->fullWData(oldp+326,(vlSelf->top__DOT__exe_1__DOT____Vcellinp__mux2____pinNumber3),201);
        tracep->fullWData(oldp+333,(vlSelf->top__DOT__exe_1__DOT__mux2__DOT__i0__DOT__pair_list[0]),67);
        tracep->fullWData(oldp+336,(vlSelf->top__DOT__exe_1__DOT__mux2__DOT__i0__DOT__pair_list[1]),67);
        tracep->fullWData(oldp+339,(vlSelf->top__DOT__exe_1__DOT__mux2__DOT__i0__DOT__pair_list[2]),67);
        tracep->fullCData(oldp+342,(vlSelf->top__DOT__exe_1__DOT__mux2__DOT__i0__DOT__key_list[0]),3);
        tracep->fullCData(oldp+343,(vlSelf->top__DOT__exe_1__DOT__mux2__DOT__i0__DOT__key_list[1]),3);
        tracep->fullCData(oldp+344,(vlSelf->top__DOT__exe_1__DOT__mux2__DOT__i0__DOT__key_list[2]),3);
        tracep->fullQData(oldp+345,(vlSelf->top__DOT__exe_1__DOT__mux2__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+347,(vlSelf->top__DOT__exe_1__DOT__mux2__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+349,(vlSelf->top__DOT__exe_1__DOT__mux2__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+351,(vlSelf->top__DOT__exe_1__DOT__mux2__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+353,(vlSelf->top__DOT__exe_1__DOT__mux2__DOT__i0__DOT__hit));
        tracep->fullIData(oldp+354,(vlSelf->top__DOT__exe_1__DOT__mux2__DOT__i0__DOT__i),32);
        tracep->fullWData(oldp+355,(vlSelf->top__DOT__exe_1__DOT____Vcellinp__mux3____pinNumber3),130);
        tracep->fullWData(oldp+360,(vlSelf->top__DOT__exe_1__DOT__mux3__DOT__i0__DOT__pair_list[0]),65);
        tracep->fullWData(oldp+363,(vlSelf->top__DOT__exe_1__DOT__mux3__DOT__i0__DOT__pair_list[1]),65);
        tracep->fullBit(oldp+366,(vlSelf->top__DOT__exe_1__DOT__mux3__DOT__i0__DOT__key_list[0]));
        tracep->fullBit(oldp+367,(vlSelf->top__DOT__exe_1__DOT__mux3__DOT__i0__DOT__key_list[1]));
        tracep->fullQData(oldp+368,(vlSelf->top__DOT__exe_1__DOT__mux3__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+370,(vlSelf->top__DOT__exe_1__DOT__mux3__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+372,(vlSelf->top__DOT__exe_1__DOT__mux3__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+374,(vlSelf->top__DOT__exe_1__DOT__mux3__DOT__i0__DOT__hit));
        tracep->fullIData(oldp+375,(vlSelf->top__DOT__exe_1__DOT__mux3__DOT__i0__DOT__i),32);
        tracep->fullQData(oldp+376,(vlSelf->top__DOT__exe_1__DOT__r0__DOT__rf[0]),64);
        tracep->fullQData(oldp+378,(vlSelf->top__DOT__exe_1__DOT__r0__DOT__rf[1]),64);
        tracep->fullQData(oldp+380,(vlSelf->top__DOT__exe_1__DOT__r0__DOT__rf[2]),64);
        tracep->fullQData(oldp+382,(vlSelf->top__DOT__exe_1__DOT__r0__DOT__rf[3]),64);
        tracep->fullQData(oldp+384,(vlSelf->top__DOT__exe_1__DOT__r0__DOT__rf[4]),64);
        tracep->fullQData(oldp+386,(vlSelf->top__DOT__exe_1__DOT__r0__DOT__rf[5]),64);
        tracep->fullQData(oldp+388,(vlSelf->top__DOT__exe_1__DOT__r0__DOT__rf[6]),64);
        tracep->fullQData(oldp+390,(vlSelf->top__DOT__exe_1__DOT__r0__DOT__rf[7]),64);
        tracep->fullQData(oldp+392,(vlSelf->top__DOT__exe_1__DOT__r0__DOT__rf[8]),64);
        tracep->fullQData(oldp+394,(vlSelf->top__DOT__exe_1__DOT__r0__DOT__rf[9]),64);
        tracep->fullQData(oldp+396,(vlSelf->top__DOT__exe_1__DOT__r0__DOT__rf[10]),64);
        tracep->fullQData(oldp+398,(vlSelf->top__DOT__exe_1__DOT__r0__DOT__rf[11]),64);
        tracep->fullQData(oldp+400,(vlSelf->top__DOT__exe_1__DOT__r0__DOT__rf[12]),64);
        tracep->fullQData(oldp+402,(vlSelf->top__DOT__exe_1__DOT__r0__DOT__rf[13]),64);
        tracep->fullQData(oldp+404,(vlSelf->top__DOT__exe_1__DOT__r0__DOT__rf[14]),64);
        tracep->fullQData(oldp+406,(vlSelf->top__DOT__exe_1__DOT__r0__DOT__rf[15]),64);
        tracep->fullQData(oldp+408,(vlSelf->top__DOT__exe_1__DOT__r0__DOT__rf[16]),64);
        tracep->fullQData(oldp+410,(vlSelf->top__DOT__exe_1__DOT__r0__DOT__rf[17]),64);
        tracep->fullQData(oldp+412,(vlSelf->top__DOT__exe_1__DOT__r0__DOT__rf[18]),64);
        tracep->fullQData(oldp+414,(vlSelf->top__DOT__exe_1__DOT__r0__DOT__rf[19]),64);
        tracep->fullQData(oldp+416,(vlSelf->top__DOT__exe_1__DOT__r0__DOT__rf[20]),64);
        tracep->fullQData(oldp+418,(vlSelf->top__DOT__exe_1__DOT__r0__DOT__rf[21]),64);
        tracep->fullQData(oldp+420,(vlSelf->top__DOT__exe_1__DOT__r0__DOT__rf[22]),64);
        tracep->fullQData(oldp+422,(vlSelf->top__DOT__exe_1__DOT__r0__DOT__rf[23]),64);
        tracep->fullQData(oldp+424,(vlSelf->top__DOT__exe_1__DOT__r0__DOT__rf[24]),64);
        tracep->fullQData(oldp+426,(vlSelf->top__DOT__exe_1__DOT__r0__DOT__rf[25]),64);
        tracep->fullQData(oldp+428,(vlSelf->top__DOT__exe_1__DOT__r0__DOT__rf[26]),64);
        tracep->fullQData(oldp+430,(vlSelf->top__DOT__exe_1__DOT__r0__DOT__rf[27]),64);
        tracep->fullQData(oldp+432,(vlSelf->top__DOT__exe_1__DOT__r0__DOT__rf[28]),64);
        tracep->fullQData(oldp+434,(vlSelf->top__DOT__exe_1__DOT__r0__DOT__rf[29]),64);
        tracep->fullQData(oldp+436,(vlSelf->top__DOT__exe_1__DOT__r0__DOT__rf[30]),64);
        tracep->fullQData(oldp+438,(vlSelf->top__DOT__exe_1__DOT__r0__DOT__rf[31]),64);
        tracep->fullQData(oldp+440,(vlSelf->top__DOT__exe_1__DOT__r0__DOT__csr[0]),64);
        tracep->fullQData(oldp+442,(vlSelf->top__DOT__exe_1__DOT__r0__DOT__csr[1]),64);
        tracep->fullQData(oldp+444,(vlSelf->top__DOT__exe_1__DOT__r0__DOT__csr[2]),64);
        tracep->fullQData(oldp+446,(vlSelf->top__DOT__exe_1__DOT__r0__DOT__csr[3]),64);
        tracep->fullIData(oldp+448,(vlSelf->top__DOT__exe_1__DOT__r0__DOT__i),32);
        tracep->fullBit(oldp+449,((1U & vlSelf->top__DOT__alu_control)));
        tracep->fullBit(oldp+450,((1U & (vlSelf->top__DOT__alu_control 
                                         >> 1U))));
        tracep->fullBit(oldp+451,((1U & (vlSelf->top__DOT__alu_control 
                                         >> 2U))));
        tracep->fullBit(oldp+452,((1U & (vlSelf->top__DOT__alu_control 
                                         >> 3U))));
        tracep->fullBit(oldp+453,((1U & (vlSelf->top__DOT__alu_control 
                                         >> 4U))));
        tracep->fullBit(oldp+454,((1U & (vlSelf->top__DOT__alu_control 
                                         >> 5U))));
        tracep->fullBit(oldp+455,((1U & (vlSelf->top__DOT__alu_control 
                                         >> 6U))));
        tracep->fullBit(oldp+456,((1U & (vlSelf->top__DOT__alu_control 
                                         >> 7U))));
        tracep->fullBit(oldp+457,((1U & (vlSelf->top__DOT__alu_control 
                                         >> 8U))));
        tracep->fullBit(oldp+458,((1U & (vlSelf->top__DOT__alu_control 
                                         >> 9U))));
        tracep->fullBit(oldp+459,((1U & (vlSelf->top__DOT__alu_control 
                                         >> 0xaU))));
        tracep->fullBit(oldp+460,((1U & (vlSelf->top__DOT__alu_control 
                                         >> 0xbU))));
        tracep->fullBit(oldp+461,((1U & (vlSelf->top__DOT__alu_control 
                                         >> 0xcU))));
        tracep->fullBit(oldp+462,((1U & (vlSelf->top__DOT__alu_control 
                                         >> 0xdU))));
        tracep->fullBit(oldp+463,((1U & (vlSelf->top__DOT__alu_control 
                                         >> 0xeU))));
        tracep->fullBit(oldp+464,((1U & (vlSelf->top__DOT__alu_control 
                                         >> 0xfU))));
        tracep->fullBit(oldp+465,((1U & (vlSelf->top__DOT__alu_control 
                                         >> 0x10U))));
        tracep->fullQData(oldp+466,(vlSelf->top__DOT__exe_1__DOT__alu2__DOT__slt_result),64);
        tracep->fullQData(oldp+468,((QData)((IData)(
                                                    (1U 
                                                     & (~ (IData)(vlSelf->top__DOT__exe_1__DOT__alu2__DOT__adder_cout)))))),64);
        tracep->fullQData(oldp+470,((vlSelf->top__DOT__exe_1__DOT__alu_src1 
                                     & vlSelf->top__DOT__exe_1__DOT__alu_src2)),64);
        tracep->fullQData(oldp+472,((~ vlSelf->top__DOT__exe_1__DOT__alu2__DOT__or_result)),64);
        tracep->fullQData(oldp+474,(vlSelf->top__DOT__exe_1__DOT__alu2__DOT__or_result),64);
        tracep->fullQData(oldp+476,((vlSelf->top__DOT__exe_1__DOT__alu_src1 
                                     ^ vlSelf->top__DOT__exe_1__DOT__alu_src2)),64);
        tracep->fullQData(oldp+478,((vlSelf->top__DOT__exe_1__DOT__alu_src1 
                                     << (0x3fU & (IData)(vlSelf->top__DOT__exe_1__DOT__alu_src2)))),64);
        tracep->fullQData(oldp+480,((vlSelf->top__DOT__exe_1__DOT__alu_src1 
                                     >> (0x3fU & (IData)(vlSelf->top__DOT__exe_1__DOT__alu_src2)))),64);
        tracep->fullQData(oldp+482,(VL_SHIFTRS_QQI(64,64,6, vlSelf->top__DOT__exe_1__DOT__alu_src1, 
                                                   (0x3fU 
                                                    & (IData)(vlSelf->top__DOT__exe_1__DOT__alu_src2)))),64);
        tracep->fullQData(oldp+484,((0xfffffffffffff000ULL 
                                     & vlSelf->top__DOT__exe_1__DOT__alu_src2)),64);
        tracep->fullQData(oldp+486,((vlSelf->top__DOT__exe_1__DOT__alu_src1 
                                     * vlSelf->top__DOT__exe_1__DOT__alu_src2)),64);
        tracep->fullQData(oldp+488,(VL_DIV_QQQ(64, vlSelf->top__DOT__exe_1__DOT__alu_src1, vlSelf->top__DOT__exe_1__DOT__alu_src2)),64);
        tracep->fullQData(oldp+490,(VL_DIVS_QQQ(64, vlSelf->top__DOT__exe_1__DOT__alu_src1, vlSelf->top__DOT__exe_1__DOT__alu_src2)),64);
        tracep->fullQData(oldp+492,(VL_MODDIV_QQQ(64, vlSelf->top__DOT__exe_1__DOT__alu_src1, vlSelf->top__DOT__exe_1__DOT__alu_src2)),64);
        tracep->fullQData(oldp+494,(VL_MODDIVS_QQQ(64, vlSelf->top__DOT__exe_1__DOT__alu_src1, vlSelf->top__DOT__exe_1__DOT__alu_src2)),64);
        tracep->fullQData(oldp+496,(vlSelf->top__DOT__exe_1__DOT__alu2__DOT__adder_b),64);
        tracep->fullBit(oldp+498,(vlSelf->top__DOT__exe_1__DOT__alu2__DOT__adder_cin));
        tracep->fullBit(oldp+499,(vlSelf->top__DOT__exe_1__DOT__alu2__DOT__adder_cout));
        tracep->fullQData(oldp+500,(vlSelf->top__DOT__exe_1__DOT__alu2__DOT__alu_result_uw),64);
        tracep->fullQData(oldp+502,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__exe_1__DOT__alu2__DOT__alu_result_uw 
                                                                             >> 0x1fU))))))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__exe_1__DOT__alu2__DOT__alu_result_uw)))),64);
        tracep->fullWData(oldp+504,(vlSelf->top__DOT__exe_1__DOT__alu2__DOT____Vcellinp__mux1____pinNumber3),130);
        tracep->fullWData(oldp+509,(vlSelf->top__DOT__exe_1__DOT__alu2__DOT__mux1__DOT__i0__DOT__pair_list[0]),65);
        tracep->fullWData(oldp+512,(vlSelf->top__DOT__exe_1__DOT__alu2__DOT__mux1__DOT__i0__DOT__pair_list[1]),65);
        tracep->fullBit(oldp+515,(vlSelf->top__DOT__exe_1__DOT__alu2__DOT__mux1__DOT__i0__DOT__key_list[0]));
        tracep->fullBit(oldp+516,(vlSelf->top__DOT__exe_1__DOT__alu2__DOT__mux1__DOT__i0__DOT__key_list[1]));
        tracep->fullQData(oldp+517,(vlSelf->top__DOT__exe_1__DOT__alu2__DOT__mux1__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+519,(vlSelf->top__DOT__exe_1__DOT__alu2__DOT__mux1__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+521,(vlSelf->top__DOT__exe_1__DOT__alu2__DOT__mux1__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+523,(vlSelf->top__DOT__exe_1__DOT__alu2__DOT__mux1__DOT__i0__DOT__hit));
        tracep->fullIData(oldp+524,(vlSelf->top__DOT__exe_1__DOT__alu2__DOT__mux1__DOT__i0__DOT__i),32);
        tracep->fullBit(oldp+525,((5U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__cache_state))));
        tracep->fullBit(oldp+526,(vlSelf->top__DOT__mem_2__DOT__use_cache));
        tracep->fullQData(oldp+527,(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld),64);
        tracep->fullQData(oldp+529,(((0x3fU >= (0x38U 
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
        tracep->fullQData(oldp+531,(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld_device),64);
        tracep->fullQData(oldp+533,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                                                                             >> 0x1fU))))))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))),64);
        tracep->fullQData(oldp+535,((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld))),64);
        tracep->fullQData(oldp+537,((((- (QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                                                                     >> 0xfU)))))) 
                                      << 0x10U) | (QData)((IData)(
                                                                  (0xffffU 
                                                                   & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))))),64);
        tracep->fullQData(oldp+539,((QData)((IData)(
                                                    (0xffffU 
                                                     & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld))))),64);
        tracep->fullQData(oldp+541,((((- (QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                                                                     >> 7U)))))) 
                                      << 8U) | (QData)((IData)(
                                                               (0xffU 
                                                                & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))))),64);
        tracep->fullQData(oldp+543,((QData)((IData)(
                                                    (0xffU 
                                                     & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld))))),64);
        tracep->fullWData(oldp+545,(vlSelf->top__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3),497);
        tracep->fullWData(oldp+561,(vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list[0]),71);
        tracep->fullWData(oldp+564,(vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list[1]),71);
        tracep->fullWData(oldp+567,(vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list[2]),71);
        tracep->fullWData(oldp+570,(vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list[3]),71);
        tracep->fullWData(oldp+573,(vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list[4]),71);
        tracep->fullWData(oldp+576,(vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list[5]),71);
        tracep->fullWData(oldp+579,(vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list[6]),71);
        tracep->fullCData(oldp+582,(vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list[0]),7);
        tracep->fullCData(oldp+583,(vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list[1]),7);
        tracep->fullCData(oldp+584,(vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list[2]),7);
        tracep->fullCData(oldp+585,(vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list[3]),7);
        tracep->fullCData(oldp+586,(vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list[4]),7);
        tracep->fullCData(oldp+587,(vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list[5]),7);
        tracep->fullCData(oldp+588,(vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list[6]),7);
        tracep->fullQData(oldp+589,(vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+591,(vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+593,(vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+595,(vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+597,(vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__data_list[4]),64);
        tracep->fullQData(oldp+599,(vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__data_list[5]),64);
        tracep->fullQData(oldp+601,(vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__data_list[6]),64);
        tracep->fullQData(oldp+603,(vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+605,(vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__hit));
        tracep->fullIData(oldp+606,(vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__i),32);
        tracep->fullIData(oldp+607,((IData)(vlSelf->top__DOT__exe_1__DOT__alu2__DOT__adder_result)),32);
        tracep->fullIData(oldp+608,(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__araddr),32);
        tracep->fullQData(oldp+609,(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                                    [(0x3fU & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__araddr 
                                               >> 6U))]
                                    [(7U & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__araddr 
                                            >> 3U))]),64);
        tracep->fullCData(oldp+611,((0x3fU & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__araddr)),6);
        tracep->fullCData(oldp+612,((0x3fU & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__araddr 
                                              >> 6U))),6);
        tracep->fullIData(oldp+613,((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__araddr 
                                     >> 0xcU)),20);
        tracep->fullCData(oldp+614,((0x3fU & (IData)(
                                                     (vlSelf->top__DOT__exe_1__DOT__alu2__DOT__adder_result 
                                                      >> 6U)))),6);
        tracep->fullCData(oldp+615,((0x3fU & (IData)(vlSelf->top__DOT__exe_1__DOT__alu2__DOT__adder_result))),6);
        tracep->fullCData(oldp+616,(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__cache_state),3);
        tracep->fullBit(oldp+617,(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rcache_en));
        tracep->fullBit(oldp+618,(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__wcache_en));
        tracep->fullBit(oldp+619,((2U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__cache_state))));
        tracep->fullBit(oldp+620,((3U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__write_state))));
        tracep->fullBit(oldp+621,((3U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__cache_state))));
        tracep->fullCData(oldp+622,(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__d_r_len),3);
        tracep->fullCData(oldp+623,(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__d_w_len),3);
        tracep->fullCData(oldp+624,(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__read_state),3);
        tracep->fullCData(oldp+625,(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__write_state),3);
        tracep->fullCData(oldp+626,(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__c_awlen),8);
        tracep->fullQData(oldp+627,(((1U == (IData)(vlSelf->top__DOT__wmask))
                                      ? 0xffULL : (
                                                   (3U 
                                                    == (IData)(vlSelf->top__DOT__wmask))
                                                    ? 0xffffULL
                                                    : 
                                                   ((0xfU 
                                                     == (IData)(vlSelf->top__DOT__wmask))
                                                     ? 0xffffffffULL
                                                     : 0xffffffffffffffffULL)))),64);
        tracep->fullQData(oldp+629,(((0x3fU >= (0x38U 
                                                & ((IData)(vlSelf->top__DOT__exe_1__DOT__alu2__DOT__adder_result) 
                                                   << 3U)))
                                      ? (vlSelf->top__DOT__src2 
                                         << (0x38U 
                                             & ((IData)(vlSelf->top__DOT__exe_1__DOT__alu2__DOT__adder_result) 
                                                << 3U)))
                                      : 0ULL)),64);
        tracep->fullQData(oldp+631,(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__wmask_align),64);
        tracep->fullIData(oldp+633,(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__unnamedblk1__DOT__i),32);
        tracep->fullIData(oldp+634,(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__unnamedblk2__DOT__i),32);
        tracep->fullIData(oldp+635,(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j),32);
        tracep->fullBit(oldp+636,(vlSelf->top__DOT__mem_2__DOT____Vcellinp__mem_read_write_0__ren));
        tracep->fullBit(oldp+637,(vlSelf->top__DOT__mem_2__DOT____Vcellinp__mem_read_write_0__wen));
        tracep->fullBit(oldp+638,((1U & (~ (IData)(vlSelf->top__DOT__mem_2__DOT__use_cache)))));
        tracep->fullBit(oldp+639,(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__rvalid));
        tracep->fullBit(oldp+640,(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__rready));
        tracep->fullBit(oldp+641,((0U == (IData)(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__axi_full_s2_1__DOT__state))));
        tracep->fullBit(oldp+642,(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__arvalid));
        tracep->fullBit(oldp+643,((1U == (IData)(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__axi_full_s2_1__DOT__c_arlen))));
        tracep->fullCData(oldp+644,(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__d_r_len),3);
        tracep->fullCData(oldp+645,(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__d_w_len),3);
        tracep->fullCData(oldp+646,(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__rresp),2);
        tracep->fullQData(oldp+647,(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__rdata_axi),64);
        tracep->fullCData(oldp+649,(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__read_state),3);
        tracep->fullBit(oldp+650,((3U == (IData)(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__read_state))));
        tracep->fullBit(oldp+651,((3U == (IData)(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__write_state))));
        tracep->fullCData(oldp+652,(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__write_state),3);
        tracep->fullBit(oldp+653,((0U == (IData)(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__axi_full_s2_1__DOT__write_state))));
        tracep->fullBit(oldp+654,((1U == (IData)(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__c_awlen))));
        tracep->fullBit(oldp+655,(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__wready));
        tracep->fullCData(oldp+656,(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__bresp),2);
        tracep->fullBit(oldp+657,(((1U == (IData)(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__write_state)) 
                                   & (2U == (IData)(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__write_state)))));
        tracep->fullBit(oldp+658,((2U == (IData)(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__axi_full_s2_1__DOT__write_state))));
        tracep->fullBit(oldp+659,(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__awvalid));
        tracep->fullBit(oldp+660,(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__wvalid));
        tracep->fullQData(oldp+661,(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__wdata),64);
        tracep->fullCData(oldp+663,(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__c_awlen),8);
        tracep->fullIData(oldp+664,(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__axi_full_s2_1__DOT__r_araddr),32);
        tracep->fullCData(oldp+665,(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__axi_full_s2_1__DOT__c_arlen),8);
        tracep->fullIData(oldp+666,(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__axi_full_s2_1__DOT__r_awaddr),32);
        tracep->fullCData(oldp+667,(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__axi_full_s2_1__DOT__state),3);
        tracep->fullCData(oldp+668,(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__axi_full_s2_1__DOT__write_state),3);
        tracep->fullWData(oldp+669,(vlSelf->top__DOT__wb0__DOT____Vcellinp__mux3____pinNumber3),201);
        tracep->fullWData(oldp+676,(vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__pair_list[0]),67);
        tracep->fullWData(oldp+679,(vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__pair_list[1]),67);
        tracep->fullWData(oldp+682,(vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__pair_list[2]),67);
        tracep->fullCData(oldp+685,(vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__key_list[0]),3);
        tracep->fullCData(oldp+686,(vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__key_list[1]),3);
        tracep->fullCData(oldp+687,(vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__key_list[2]),3);
        tracep->fullQData(oldp+688,(vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+690,(vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+692,(vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+694,(vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+696,(vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__hit));
        tracep->fullIData(oldp+697,(vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__i),32);
        tracep->fullCData(oldp+698,(vlSelf->top__DOT__arbiter_1__DOT__master_state),2);
        tracep->fullBit(oldp+699,((1U == (IData)(vlSelf->top__DOT__arbiter_1__DOT__master_state))));
        tracep->fullBit(oldp+700,((2U == (IData)(vlSelf->top__DOT__arbiter_1__DOT__master_state))));
        tracep->fullBit(oldp+701,(vlSelf->top__DOT__arbiter_1__DOT__arvalid));
        tracep->fullBit(oldp+702,((0U == (IData)(vlSelf->top__DOT__arbiter_1__DOT__axi_full_s2_0__DOT__state))));
        tracep->fullCData(oldp+703,(((1U == (IData)(vlSelf->top__DOT__arbiter_1__DOT__master_state))
                                      ? 1U : ((2U == (IData)(vlSelf->top__DOT__arbiter_1__DOT__master_state))
                                               ? 1U
                                               : 0U))),2);
        tracep->fullCData(oldp+704,(vlSelf->top__DOT__arbiter_1__DOT__arlen),8);
        tracep->fullCData(oldp+705,(((1U == (IData)(vlSelf->top__DOT__arbiter_1__DOT__master_state))
                                      ? 3U : ((2U == (IData)(vlSelf->top__DOT__arbiter_1__DOT__master_state))
                                               ? 3U
                                               : 0U))),3);
        tracep->fullQData(oldp+706,(vlSelf->top__DOT__arbiter_1__DOT__rdata),64);
        tracep->fullCData(oldp+708,(vlSelf->top__DOT__arbiter_1__DOT__rresp),2);
        tracep->fullBit(oldp+709,((1U & ((1U == (IData)(vlSelf->top__DOT__arbiter_1__DOT__master_state))
                                          ? (IData)(vlSelf->top__DOT__if_0__DOT__icache_9__DOT__rready)
                                          : ((2U == (IData)(vlSelf->top__DOT__arbiter_1__DOT__master_state))
                                              ? (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rready)
                                              : 0U)))));
        tracep->fullBit(oldp+710,(vlSelf->top__DOT__arbiter_1__DOT__rvalid));
        tracep->fullBit(oldp+711,(vlSelf->top__DOT__arbiter_1__DOT__rlast));
        tracep->fullIData(oldp+712,(((2U == (IData)(vlSelf->top__DOT__arbiter_1__DOT__master_state))
                                      ? ((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__tagarray
                                          [(0x3fU & 
                                            (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__araddr 
                                             >> 6U))] 
                                          << 0xcU) 
                                         | (0xfc0U 
                                            & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__araddr))
                                      : 0U)),32);
        tracep->fullBit(oldp+713,((0U == (IData)(vlSelf->top__DOT__arbiter_1__DOT__axi_full_s2_0__DOT__write_state))));
        tracep->fullBit(oldp+714,(vlSelf->top__DOT__arbiter_1__DOT__awvalid));
        tracep->fullCData(oldp+715,(((2U == (IData)(vlSelf->top__DOT__arbiter_1__DOT__master_state))
                                      ? 1U : 0U)),2);
        tracep->fullCData(oldp+716,(((2U == (IData)(vlSelf->top__DOT__arbiter_1__DOT__master_state))
                                      ? 8U : 0U)),8);
        tracep->fullBit(oldp+717,(vlSelf->top__DOT__arbiter_1__DOT__wlast));
        tracep->fullBit(oldp+718,(vlSelf->top__DOT__arbiter_1__DOT__wready));
        tracep->fullBit(oldp+719,(vlSelf->top__DOT__arbiter_1__DOT__wvalid));
        tracep->fullQData(oldp+720,(((2U == (IData)(vlSelf->top__DOT__arbiter_1__DOT__master_state))
                                      ? vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata
                                      : 0ULL)),64);
        tracep->fullCData(oldp+722,(((2U == (IData)(vlSelf->top__DOT__arbiter_1__DOT__master_state))
                                      ? 0xffU : 0U)),8);
        tracep->fullCData(oldp+723,(vlSelf->top__DOT__arbiter_1__DOT__bresp),2);
        tracep->fullBit(oldp+724,((2U == (IData)(vlSelf->top__DOT__arbiter_1__DOT__axi_full_s2_0__DOT__write_state))));
        tracep->fullBit(oldp+725,(((2U == (IData)(vlSelf->top__DOT__arbiter_1__DOT__master_state))
                                    ? (1U & ((1U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__write_state)) 
                                             & (2U 
                                                == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__write_state))))
                                    : 0U)));
        tracep->fullIData(oldp+726,(vlSelf->top__DOT__arbiter_1__DOT__axi_full_s2_0__DOT__r_araddr),32);
        tracep->fullCData(oldp+727,(vlSelf->top__DOT__arbiter_1__DOT__axi_full_s2_0__DOT__c_arlen),8);
        tracep->fullIData(oldp+728,(vlSelf->top__DOT__arbiter_1__DOT__axi_full_s2_0__DOT__r_awaddr),32);
        tracep->fullCData(oldp+729,(vlSelf->top__DOT__arbiter_1__DOT__axi_full_s2_0__DOT__state),3);
        tracep->fullCData(oldp+730,(vlSelf->top__DOT__arbiter_1__DOT__axi_full_s2_0__DOT__write_state),3);
        tracep->fullBit(oldp+731,(vlSelf->clk));
        tracep->fullBit(oldp+732,(vlSelf->rst));
        tracep->fullIData(oldp+733,(vlSelf->inst),32);
        tracep->fullQData(oldp+734,(vlSelf->cpupc),64);
        tracep->fullBit(oldp+736,(vlSelf->ebreak));
        tracep->fullBit(oldp+737,(vlSelf->not_have));
        tracep->fullQData(oldp+738,(vlSelf->dnpc),64);
        tracep->fullBit(oldp+740,(vlSelf->inst_finish));
        tracep->fullBit(oldp+741,(vlSelf->mem_finish));
        tracep->fullBit(oldp+742,(vlSelf->inst_update));
        tracep->fullIData(oldp+743,((0xffffffc0U & (IData)(vlSelf->cpupc))),32);
        tracep->fullCData(oldp+744,((0x1fU & (vlSelf->inst 
                                              >> 0xfU))),5);
        tracep->fullCData(oldp+745,((0x1fU & (vlSelf->inst 
                                              >> 0x14U))),5);
        tracep->fullCData(oldp+746,((0x1fU & (vlSelf->inst 
                                              >> 7U))),5);
        tracep->fullCData(oldp+747,((0xffU & ((IData)(1U) 
                                              << (7U 
                                                  & (vlSelf->inst 
                                                     >> 0xcU))))),8);
        tracep->fullBit(oldp+748,((((((((((((((((((
                                                   ((((((((((((((((((((((((((((((((((IData)(vlSelf->top__DOT__control_1__DOT__Add) 
                                                                                | (IData)(vlSelf->top__DOT__control_1__DOT__addi)) 
                                                                                | (IData)(vlSelf->top__DOT__control_1__DOT__ld)) 
                                                                                | ((IData)(vlSelf->top__DOT__op_d) 
                                                                                >> 2U)) 
                                                                                | (IData)(vlSelf->top__DOT__control_1__DOT__jalr)) 
                                                                                | (IData)(vlSelf->top__DOT__control_1__DOT__slt)) 
                                                                               | (IData)(vlSelf->top__DOT__control_1__DOT__sltu)) 
                                                                              | (IData)(vlSelf->top__DOT__control_1__DOT__sll)) 
                                                                             | (IData)(vlSelf->top__DOT__control_1__DOT__srl)) 
                                                                            | (IData)(vlSelf->top__DOT__control_1__DOT__sra)) 
                                                                           | (IData)(vlSelf->top__DOT__control_1__DOT__sltiu)) 
                                                                          | (IData)(vlSelf->top__DOT__control_1__DOT__andi)) 
                                                                         | (IData)(vlSelf->top__DOT__control_1__DOT__ori)) 
                                                                        | (IData)(vlSelf->top__DOT__control_1__DOT__xori)) 
                                                                       | (IData)(vlSelf->top__DOT__control_1__DOT__lw)) 
                                                                      | (IData)(vlSelf->top__DOT__control_1__DOT__lwu)) 
                                                                     | (IData)(vlSelf->top__DOT__control_1__DOT__lh)) 
                                                                    | (IData)(vlSelf->top__DOT__control_1__DOT__lhu)) 
                                                                   | (IData)(vlSelf->top__DOT__control_1__DOT__lb)) 
                                                                  | (IData)(vlSelf->top__DOT__control_1__DOT__lbu)) 
                                                                 | ((IData)(vlSelf->top__DOT__op_d) 
                                                                    >> 1U)) 
                                                                | (IData)(vlSelf->top__DOT__control_1__DOT__sub)) 
                                                               | (IData)(vlSelf->top__DOT__control_1__DOT__sllw)) 
                                                              | (IData)(vlSelf->top__DOT__control_1__DOT__srlw)) 
                                                             | (IData)(vlSelf->top__DOT__control_1__DOT__sraw)) 
                                                            | (IData)(vlSelf->top__DOT__control_1__DOT__addiw)) 
                                                           | (IData)(vlSelf->top__DOT__control_1__DOT__slliw)) 
                                                          | (IData)(vlSelf->top__DOT__control_1__DOT__srliw)) 
                                                         | (IData)(vlSelf->top__DOT__control_1__DOT__sraiw)) 
                                                        | (IData)(vlSelf->top__DOT__control_1__DOT__addw)) 
                                                       | (IData)(vlSelf->top__DOT__control_1__DOT__srli)) 
                                                      | (IData)(vlSelf->top__DOT__control_1__DOT__srai)) 
                                                     | (IData)(vlSelf->top__DOT__control_1__DOT__slli)) 
                                                    | (IData)(vlSelf->top__DOT__control_1__DOT__And)) 
                                                   | (IData)(vlSelf->top__DOT__control_1__DOT__Or)) 
                                                  | (IData)(vlSelf->top__DOT__control_1__DOT__mulw)) 
                                                 | (IData)(vlSelf->top__DOT__control_1__DOT__divw)) 
                                                | (IData)(vlSelf->top__DOT__control_1__DOT__remw)) 
                                               | (IData)(vlSelf->top__DOT__op_d)) 
                                              | (IData)(vlSelf->top__DOT__control_1__DOT__subw)) 
                                             | (IData)(vlSelf->top__DOT__control_1__DOT__Mul)) 
                                            | (IData)(vlSelf->top__DOT__control_1__DOT__Xor)) 
                                           | (IData)(vlSelf->top__DOT__control_1__DOT__divu)) 
                                          | (IData)(vlSelf->top__DOT__control_1__DOT__divuw)) 
                                         | (IData)(vlSelf->top__DOT__control_1__DOT__rem)) 
                                        | (IData)(vlSelf->top__DOT__control_1__DOT__div)) 
                                       | (IData)(vlSelf->top__DOT__control_1__DOT__csrrs)) 
                                      | (IData)(vlSelf->top__DOT__control_1__DOT__csrrw)) 
                                     | (IData)(vlSelf->top__DOT__control_1__DOT__remu)) 
                                    | (IData)(vlSelf->top__DOT__control_1__DOT__remuw)) 
                                   & (IData)(vlSelf->mem_finish))));
        tracep->fullBit(oldp+749,((((IData)(vlSelf->top__DOT__control_1__DOT__csrrw) 
                                    | (IData)(vlSelf->top__DOT__control_1__DOT__csrrs)) 
                                   & (IData)(vlSelf->mem_finish))));
        tracep->fullBit(oldp+750,(((IData)(vlSelf->mem_finish) 
                                   & ((IData)(vlSelf->top__DOT__e_inst) 
                                      >> 1U))));
        tracep->fullIData(oldp+751,((IData)(vlSelf->cpupc)),32);
        tracep->fullCData(oldp+752,((0x3fU & (IData)(vlSelf->cpupc))),6);
        tracep->fullCData(oldp+753,((0x3fU & (IData)(
                                                     (vlSelf->cpupc 
                                                      >> 6U)))),6);
        tracep->fullIData(oldp+754,((0xfffffU & (IData)(
                                                        (vlSelf->cpupc 
                                                         >> 0xcU)))),20);
        tracep->fullCData(oldp+755,((0x7fU & vlSelf->inst)),7);
        tracep->fullCData(oldp+756,((7U & (vlSelf->inst 
                                           >> 0xcU))),3);
        tracep->fullCData(oldp+757,((vlSelf->inst >> 0x19U)),7);
        tracep->fullQData(oldp+758,((((- (QData)((IData)(
                                                         (vlSelf->inst 
                                                          >> 0x1fU)))) 
                                      << 0xcU) | (QData)((IData)(
                                                                 ((0xfe0U 
                                                                   & (vlSelf->inst 
                                                                      >> 0x14U)) 
                                                                  | (0x1fU 
                                                                     & (vlSelf->inst 
                                                                        >> 7U))))))),64);
        tracep->fullQData(oldp+760,((((- (QData)((IData)(
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
        tracep->fullQData(oldp+762,((((- (QData)((IData)(
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
        tracep->fullBit(oldp+764,((((IData)(vlSelf->inst_update) 
                                    & (~ (IData)(vlSelf->top__DOT__mem_2__DOT__use_cache))) 
                                   & ((((IData)(vlSelf->top__DOT__mem_2__DOT____Vcellinp__mem_read_write_0__ren) 
                                        & (3U == (IData)(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__read_state))) 
                                       | ((IData)(vlSelf->top__DOT__mem_2__DOT____Vcellinp__mem_read_write_0__wen) 
                                          & (3U == (IData)(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__write_state)))) 
                                      | ((~ (IData)(vlSelf->top__DOT__mem_2__DOT____Vcellinp__mem_read_write_0__ren)) 
                                         & (~ (IData)(vlSelf->top__DOT__mem_2__DOT____Vcellinp__mem_read_write_0__wen)))))));
        tracep->fullIData(oldp+765,(((1U == (IData)(vlSelf->top__DOT__arbiter_1__DOT__master_state))
                                      ? (0xffffffc0U 
                                         & (IData)(vlSelf->cpupc))
                                      : ((2U == (IData)(vlSelf->top__DOT__arbiter_1__DOT__master_state))
                                          ? (0xffffffc0U 
                                             & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__araddr)
                                          : 0U))),32);
        tracep->fullCData(oldp+766,(1U),2);
        tracep->fullCData(oldp+767,(8U),8);
        tracep->fullCData(oldp+768,(3U),3);
        tracep->fullCData(oldp+769,(0xffU),8);
        tracep->fullIData(oldp+770,(4U),32);
        tracep->fullIData(oldp+771,(2U),32);
        tracep->fullIData(oldp+772,(0x40U),32);
        tracep->fullIData(oldp+773,(0U),32);
        tracep->fullQData(oldp+774,(0ULL),64);
        tracep->fullIData(oldp+776,(0x42U),32);
        tracep->fullIData(oldp+777,(1U),32);
        tracep->fullIData(oldp+778,(0x41U),32);
        tracep->fullQData(oldp+779,(0x80000000ULL),64);
        tracep->fullBit(oldp+781,(1U));
        tracep->fullIData(oldp+782,(0x1000U),32);
        tracep->fullIData(oldp+783,(0x15U),32);
        tracep->fullIData(oldp+784,(6U),32);
        tracep->fullIData(oldp+785,(0x14U),32);
        tracep->fullIData(oldp+786,(3U),32);
        tracep->fullCData(oldp+787,(0U),3);
        tracep->fullCData(oldp+788,(1U),3);
        tracep->fullCData(oldp+789,(2U),3);
        tracep->fullIData(oldp+790,(8U),32);
        tracep->fullIData(oldp+791,(0xaU),32);
        tracep->fullIData(oldp+792,(0xcU),32);
        tracep->fullIData(oldp+793,(0x4cU),32);
        tracep->fullIData(oldp+794,(0x44U),32);
        tracep->fullIData(oldp+795,(0x43U),32);
        tracep->fullIData(oldp+796,(5U),32);
        tracep->fullCData(oldp+797,(2U),2);
        tracep->fullQData(oldp+798,(0xbULL),64);
        tracep->fullCData(oldp+800,(3U),2);
        tracep->fullIData(oldp+801,(7U),32);
        tracep->fullIData(oldp+802,(0x47U),32);
        tracep->fullBit(oldp+803,(0U));
        tracep->fullIData(oldp+804,(0x16U),32);
        tracep->fullCData(oldp+805,(1U),8);
    }
}
