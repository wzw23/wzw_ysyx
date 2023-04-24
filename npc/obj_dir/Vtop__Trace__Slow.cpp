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
        tracep->declBit(c+724,"clk", false,-1);
        tracep->declBit(c+725,"rst", false,-1);
        tracep->declBus(c+726,"inst", false,-1, 31,0);
        tracep->declQuad(c+727,"cpupc", false,-1, 63,0);
        tracep->declBit(c+729,"ebreak", false,-1);
        tracep->declBit(c+730,"not_have", false,-1);
        tracep->declQuad(c+731,"dnpc", false,-1, 63,0);
        tracep->declBit(c+733,"inst_finish", false,-1);
        tracep->declBit(c+734,"mem_finish", false,-1);
        tracep->declBit(c+735,"inst_update", false,-1);
        tracep->declBit(c+724,"top clk", false,-1);
        tracep->declBit(c+725,"top rst", false,-1);
        tracep->declBus(c+726,"top inst", false,-1, 31,0);
        tracep->declQuad(c+727,"top cpupc", false,-1, 63,0);
        tracep->declBit(c+729,"top ebreak", false,-1);
        tracep->declBit(c+730,"top not_have", false,-1);
        tracep->declQuad(c+731,"top dnpc", false,-1, 63,0);
        tracep->declBit(c+733,"top inst_finish", false,-1);
        tracep->declBit(c+734,"top mem_finish", false,-1);
        tracep->declBit(c+735,"top inst_update", false,-1);
        tracep->declQuad(c+1,"top c_rdata", false,-1, 63,0);
        tracep->declBus(c+3,"top sel_nextpc", false,-1, 1,0);
        tracep->declQuad(c+4,"top imm", false,-1, 63,0);
        tracep->declQuad(c+6,"top src1", false,-1, 63,0);
        tracep->declQuad(c+8,"top src2", false,-1, 63,0);
        tracep->declBus(c+759,"top araddr_1", false,-1, 31,0);
        tracep->declBit(c+760,"top arvalid_1", false,-1);
        tracep->declBit(c+761,"top arready_1", false,-1);
        tracep->declQuad(c+762,"top rdata_1", false,-1, 63,0);
        tracep->declBus(c+764,"top rresp_1", false,-1, 1,0);
        tracep->declBit(c+765,"top rvalid_1", false,-1);
        tracep->declBit(c+766,"top rready_1", false,-1);
        tracep->declBus(c+736,"top araddr1", false,-1, 31,0);
        tracep->declBit(c+10,"top arvalid1", false,-1);
        tracep->declBus(c+767,"top arburst1", false,-1, 1,0);
        tracep->declBus(c+768,"top arlen1", false,-1, 7,0);
        tracep->declBus(c+769,"top arsize1", false,-1, 2,0);
        tracep->declBit(c+11,"top arready1", false,-1);
        tracep->declQuad(c+12,"top rdata1", false,-1, 63,0);
        tracep->declBus(c+14,"top rresp1", false,-1, 1,0);
        tracep->declBit(c+15,"top rvalid1", false,-1);
        tracep->declBit(c+16,"top rlast1", false,-1);
        tracep->declBit(c+17,"top rready1", false,-1);
        tracep->declBus(c+18,"top araddr2", false,-1, 31,0);
        tracep->declBit(c+19,"top arvalid2", false,-1);
        tracep->declBus(c+767,"top arburst2", false,-1, 1,0);
        tracep->declBus(c+768,"top arlen2", false,-1, 7,0);
        tracep->declBus(c+769,"top arsize2", false,-1, 2,0);
        tracep->declBit(c+20,"top arready2", false,-1);
        tracep->declQuad(c+21,"top rdata2", false,-1, 63,0);
        tracep->declBus(c+23,"top rresp2", false,-1, 1,0);
        tracep->declBit(c+24,"top rvalid2", false,-1);
        tracep->declBit(c+25,"top rlast2", false,-1);
        tracep->declBit(c+26,"top rready2", false,-1);
        tracep->declBus(c+27,"top awaddr2", false,-1, 31,0);
        tracep->declBit(c+28,"top awvalid2", false,-1);
        tracep->declBus(c+767,"top awburst2", false,-1, 1,0);
        tracep->declBus(c+768,"top awlen2", false,-1, 7,0);
        tracep->declBit(c+29,"top awready2", false,-1);
        tracep->declQuad(c+30,"top wdata2", false,-1, 63,0);
        tracep->declBit(c+32,"top wlast2", false,-1);
        tracep->declBus(c+770,"top wstrb2", false,-1, 7,0);
        tracep->declBit(c+33,"top wvalid2", false,-1);
        tracep->declBit(c+34,"top wready2", false,-1);
        tracep->declBus(c+35,"top bresp2", false,-1, 1,0);
        tracep->declBit(c+36,"top bvalid2", false,-1);
        tracep->declBit(c+37,"top bready2", false,-1);
        tracep->declBus(c+737,"top rs1", false,-1, 4,0);
        tracep->declBus(c+738,"top rs2", false,-1, 4,0);
        tracep->declBus(c+739,"top rd", false,-1, 4,0);
        tracep->declBus(c+38,"top op_d", false,-1, 11,0);
        tracep->declBus(c+39,"top fu_7_d", false,-1, 4,0);
        tracep->declBus(c+740,"top fu_3_d", false,-1, 7,0);
        tracep->declBus(c+40,"top c_raddr", false,-1, 1,0);
        tracep->declBus(c+40,"top c_waddr", false,-1, 1,0);
        tracep->declBus(c+41,"top e_inst", false,-1, 2,0);
        tracep->declBus(c+42,"top sel_alu_src1", false,-1, 3,0);
        tracep->declBus(c+43,"top sel_alu_src2", false,-1, 2,0);
        tracep->declBus(c+44,"top alu_control", false,-1, 16,0);
        tracep->declBit(c+741,"top rf_wen", false,-1);
        tracep->declBus(c+45,"top sel_rf_res", false,-1, 2,0);
        tracep->declBit(c+46,"top data_ram_en", false,-1);
        tracep->declBit(c+47,"top data_ram_wen", false,-1);
        tracep->declBus(c+48,"top alu_equal", false,-1, 2,0);
        tracep->declBus(c+49,"top l_choose", false,-1, 6,0);
        tracep->declBit(c+50,"top w_choose", false,-1);
        tracep->declBit(c+51,"top c_wchoose", false,-1);
        tracep->declBit(c+742,"top c_wen", false,-1);
        tracep->declBus(c+52,"top wmask", false,-1, 7,0);
        tracep->declBit(c+743,"top c_wen1_2", false,-1);
        tracep->declQuad(c+53,"top alu_result", false,-1, 63,0);
        tracep->declQuad(c+55,"top ram_addr", false,-1, 63,0);
        tracep->declQuad(c+57,"top ram_data", false,-1, 63,0);
        tracep->declQuad(c+59,"top wdata", false,-1, 63,0);
        tracep->declBit(c+724,"top i0 clk", false,-1);
        tracep->declBit(c+725,"top i0 rst", false,-1);
        tracep->declQuad(c+727,"top i0 cpupc", false,-1, 63,0);
        tracep->declBus(c+3,"top i0 sel_nextpc", false,-1, 1,0);
        tracep->declQuad(c+4,"top i0 imm", false,-1, 63,0);
        tracep->declQuad(c+6,"top i0 src1", false,-1, 63,0);
        tracep->declBus(c+726,"top i0 inst", false,-1, 31,0);
        tracep->declQuad(c+731,"top i0 dnpc", false,-1, 63,0);
        tracep->declQuad(c+1,"top i0 c_rdata", false,-1, 63,0);
        tracep->declBit(c+735,"top i0 inst_update", false,-1);
        tracep->declBit(c+734,"top i0 mem_finish", false,-1);
        tracep->declBus(c+736,"top i0 araddr1", false,-1, 31,0);
        tracep->declBit(c+10,"top i0 arvalid1", false,-1);
        tracep->declBus(c+767,"top i0 arburst1", false,-1, 1,0);
        tracep->declBus(c+768,"top i0 arlen1", false,-1, 7,0);
        tracep->declBus(c+769,"top i0 arsize1", false,-1, 2,0);
        tracep->declBit(c+11,"top i0 arready1", false,-1);
        tracep->declQuad(c+12,"top i0 rdata1", false,-1, 63,0);
        tracep->declBus(c+14,"top i0 rresp1", false,-1, 1,0);
        tracep->declBit(c+15,"top i0 rvalid1", false,-1);
        tracep->declBit(c+16,"top i0 rlast1", false,-1);
        tracep->declBit(c+17,"top i0 rready1", false,-1);
        tracep->declQuad(c+61,"top i0 dnpc_0", false,-1, 63,0);
        tracep->declQuad(c+63,"top i0 rdata_u", false,-1, 63,0);
        tracep->declBus(c+744,"top i0 araddr", false,-1, 31,0);
        tracep->declBus(c+771,"top i0 mux4 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+772,"top i0 mux4 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+773,"top i0 mux4 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+61,"top i0 mux4 out", false,-1, 63,0);
        tracep->declBus(c+3,"top i0 mux4 key", false,-1, 1,0);
        tracep->declArray(c+65,"top i0 mux4 lut", false,-1, 263,0);
        tracep->declBus(c+771,"top i0 mux4 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+772,"top i0 mux4 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+773,"top i0 mux4 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+774,"top i0 mux4 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+61,"top i0 mux4 i0 out", false,-1, 63,0);
        tracep->declBus(c+3,"top i0 mux4 i0 key", false,-1, 1,0);
        tracep->declQuad(c+775,"top i0 mux4 i0 default_out", false,-1, 63,0);
        tracep->declArray(c+65,"top i0 mux4 i0 lut", false,-1, 263,0);
        tracep->declBus(c+777,"top i0 mux4 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declArray(c+74+i*3,"top i0 mux4 i0 pair_list", true,(i+0), 65,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+86+i*1,"top i0 mux4 i0 key_list", true,(i+0), 1,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declQuad(c+90+i*2,"top i0 mux4 i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+98,"top i0 mux4 i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+100,"top i0 mux4 i0 hit", false,-1);
        tracep->declBus(c+778,"top i0 mux4 i0 i", false,-1, 31,0);
        tracep->declBus(c+772,"top i0 mux5 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+779,"top i0 mux5 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+773,"top i0 mux5 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+731,"top i0 mux5 out", false,-1, 63,0);
        tracep->declBus(c+734,"top i0 mux5 key", false,-1, 0,0);
        tracep->declArray(c+101,"top i0 mux5 lut", false,-1, 129,0);
        tracep->declBus(c+772,"top i0 mux5 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+779,"top i0 mux5 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+773,"top i0 mux5 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+774,"top i0 mux5 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+731,"top i0 mux5 i0 out", false,-1, 63,0);
        tracep->declBus(c+734,"top i0 mux5 i0 key", false,-1, 0,0);
        tracep->declQuad(c+775,"top i0 mux5 i0 default_out", false,-1, 63,0);
        tracep->declArray(c+101,"top i0 mux5 i0 lut", false,-1, 129,0);
        tracep->declBus(c+780,"top i0 mux5 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declArray(c+106+i*3,"top i0 mux5 i0 pair_list", true,(i+0), 64,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+112+i*1,"top i0 mux5 i0 key_list", true,(i+0), 0,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+114+i*2,"top i0 mux5 i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+118,"top i0 mux5 i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+120,"top i0 mux5 i0 hit", false,-1);
        tracep->declBus(c+781,"top i0 mux5 i0 i", false,-1, 31,0);
        tracep->declBus(c+773,"top i0 i0 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+782,"top i0 i0 RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+724,"top i0 i0 clk", false,-1);
        tracep->declBit(c+725,"top i0 i0 rst", false,-1);
        tracep->declQuad(c+731,"top i0 i0 din", false,-1, 63,0);
        tracep->declQuad(c+727,"top i0 i0 dout", false,-1, 63,0);
        tracep->declBit(c+784,"top i0 i0 wen", false,-1);
        tracep->declBit(c+724,"top i0 icache0 clk", false,-1);
        tracep->declBit(c+725,"top i0 icache0 rst", false,-1);
        tracep->declBus(c+744,"top i0 icache0 araddr", false,-1, 31,0);
        tracep->declQuad(c+63,"top i0 icache0 rdata", false,-1, 63,0);
        tracep->declBit(c+735,"top i0 icache0 inst_update", false,-1);
        tracep->declBit(c+734,"top i0 icache0 mem_finish", false,-1);
        tracep->declBus(c+736,"top i0 icache0 araddr1", false,-1, 31,0);
        tracep->declBit(c+10,"top i0 icache0 arvalid1", false,-1);
        tracep->declBus(c+767,"top i0 icache0 arburst1", false,-1, 1,0);
        tracep->declBus(c+768,"top i0 icache0 arlen1", false,-1, 7,0);
        tracep->declBus(c+769,"top i0 icache0 arsize1", false,-1, 2,0);
        tracep->declBit(c+11,"top i0 icache0 arready1", false,-1);
        tracep->declQuad(c+12,"top i0 icache0 rdata1", false,-1, 63,0);
        tracep->declBus(c+14,"top i0 icache0 rresp1", false,-1, 1,0);
        tracep->declBit(c+15,"top i0 icache0 rvalid1", false,-1);
        tracep->declBit(c+16,"top i0 icache0 rlast1", false,-1);
        tracep->declBit(c+17,"top i0 icache0 rready1", false,-1);
        tracep->declBus(c+785,"top i0 icache0 CACHE_SIZE", false,-1, 31,0);
        tracep->declBus(c+773,"top i0 icache0 LINE_SIZE", false,-1, 31,0);
        tracep->declBus(c+773,"top i0 icache0 NUM_LINES", false,-1, 31,0);
        tracep->declBus(c+786,"top i0 icache0 TAGARRAY_WIDTH", false,-1, 31,0);
        tracep->declBus(c+787,"top i0 icache0 INDEX_WIDTH", false,-1, 31,0);
        tracep->declBus(c+787,"top i0 icache0 OFFSET_WIDTH", false,-1, 31,0);
        tracep->declBus(c+788,"top i0 icache0 TAG_WIDTH", false,-1, 31,0);
        tracep->declBus(c+745,"top i0 icache0 addr_offset", false,-1, 5,0);
        tracep->declBus(c+746,"top i0 icache0 addr_index", false,-1, 5,0);
        tracep->declBus(c+747,"top i0 icache0 addr_tag", false,-1, 19,0);
        tracep->declQuad(c+12,"top i0 icache0 rdata_axi", false,-1, 63,0);
        tracep->declBus(c+774,"top i0 icache0 CACHE_IDLE", false,-1, 31,0);
        tracep->declBus(c+779,"top i0 icache0 CACHE_UPDATE_BEGIN", false,-1, 31,0);
        tracep->declBus(c+772,"top i0 icache0 CACHE_MEMREAD", false,-1, 31,0);
        tracep->declBus(c+789,"top i0 icache0 CACHE_GET", false,-1, 31,0);
        tracep->declBus(c+121,"top i0 icache0 cache_state", false,-1, 2,0);
        tracep->declBit(c+15,"top i0 icache0 rvalid", false,-1);
        tracep->declBit(c+17,"top i0 icache0 rready", false,-1);
        tracep->declBit(c+11,"top i0 icache0 arready", false,-1);
        tracep->declBit(c+16,"top i0 icache0 rlast", false,-1);
        tracep->declBus(c+736,"top i0 icache0 araddr_block", false,-1, 31,0);
        tracep->declBus(c+122,"top i0 icache0 d_len", false,-1, 2,0);
        tracep->declBus(c+790,"top i0 icache0 READ_IDLE", false,-1, 2,0);
        tracep->declBus(c+791,"top i0 icache0 READ_ARREADY", false,-1, 2,0);
        tracep->declBus(c+792,"top i0 icache0 READ_TRANS", false,-1, 2,0);
        tracep->declBus(c+769,"top i0 icache0 READ_FINISH", false,-1, 2,0);
        tracep->declBus(c+123,"top i0 icache0 state", false,-1, 2,0);
        tracep->declBit(c+10,"top i0 icache0 arvalid", false,-1);
        tracep->declBus(c+767,"top i0 icache0 arburst", false,-1, 1,0);
        tracep->declBus(c+768,"top i0 icache0 arlen", false,-1, 7,0);
        tracep->declBus(c+769,"top i0 icache0 arsize", false,-1, 2,0);
        tracep->declBus(c+14,"top i0 icache0 rresp", false,-1, 1,0);
        tracep->declBus(c+124,"top i0 icache0 unnamedblk1 i", false,-1, 31,0);
        tracep->declBus(c+726,"top id_1 inst", false,-1, 31,0);
        tracep->declBus(c+737,"top id_1 rs1", false,-1, 4,0);
        tracep->declBus(c+738,"top id_1 rs2", false,-1, 4,0);
        tracep->declBus(c+739,"top id_1 rd", false,-1, 4,0);
        tracep->declQuad(c+4,"top id_1 imm", false,-1, 63,0);
        tracep->declBus(c+38,"top id_1 op_d", false,-1, 11,0);
        tracep->declBus(c+39,"top id_1 fu_7_d", false,-1, 4,0);
        tracep->declBus(c+740,"top id_1 fu_3_d", false,-1, 7,0);
        tracep->declBus(c+41,"top id_1 e_inst", false,-1, 2,0);
        tracep->declBus(c+40,"top id_1 c_raddr", false,-1, 1,0);
        tracep->declBus(c+40,"top id_1 c_waddr", false,-1, 1,0);
        tracep->declBus(c+748,"top id_1 op", false,-1, 6,0);
        tracep->declBus(c+749,"top id_1 fu_3", false,-1, 2,0);
        tracep->declBus(c+750,"top id_1 fu_7", false,-1, 6,0);
        tracep->declQuad(c+125,"top id_1 immi", false,-1, 63,0);
        tracep->declQuad(c+751,"top id_1 imms", false,-1, 63,0);
        tracep->declQuad(c+753,"top id_1 immb", false,-1, 63,0);
        tracep->declQuad(c+127,"top id_1 immu", false,-1, 63,0);
        tracep->declQuad(c+755,"top id_1 immj", false,-1, 63,0);
        tracep->declBus(c+789,"top id_1 de_3_8 LEN", false,-1, 31,0);
        tracep->declBus(c+793,"top id_1 de_3_8 OLEN", false,-1, 31,0);
        tracep->declBus(c+749,"top id_1 de_3_8 sig", false,-1, 2,0);
        tracep->declBus(c+740,"top id_1 de_3_8 o_h", false,-1, 7,0);
        tracep->declBus(c+794,"top id_1 mux0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+795,"top id_1 mux0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+773,"top id_1 mux0 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+4,"top id_1 mux0 out", false,-1, 63,0);
        tracep->declBus(c+38,"top id_1 mux0 key", false,-1, 11,0);
        tracep->declArray(c+129,"top id_1 mux0 lut", false,-1, 759,0);
        tracep->declBus(c+794,"top id_1 mux0 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+795,"top id_1 mux0 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+773,"top id_1 mux0 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+774,"top id_1 mux0 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+4,"top id_1 mux0 i0 out", false,-1, 63,0);
        tracep->declBus(c+38,"top id_1 mux0 i0 key", false,-1, 11,0);
        tracep->declQuad(c+775,"top id_1 mux0 i0 default_out", false,-1, 63,0);
        tracep->declArray(c+129,"top id_1 mux0 i0 lut", false,-1, 759,0);
        tracep->declBus(c+796,"top id_1 mux0 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<10; i++) {
                tracep->declArray(c+153+i*3,"top id_1 mux0 i0 pair_list", true,(i+0), 75,0);}}
        {int i; for (i=0; i<10; i++) {
                tracep->declBus(c+183+i*1,"top id_1 mux0 i0 key_list", true,(i+0), 11,0);}}
        {int i; for (i=0; i<10; i++) {
                tracep->declQuad(c+193+i*2,"top id_1 mux0 i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+213,"top id_1 mux0 i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+215,"top id_1 mux0 i0 hit", false,-1);
        tracep->declBus(c+797,"top id_1 mux0 i0 i", false,-1, 31,0);
        tracep->declBus(c+38,"top control_1 op_d", false,-1, 11,0);
        tracep->declBus(c+39,"top control_1 fu_7_d", false,-1, 4,0);
        tracep->declBus(c+740,"top control_1 fu_3_d", false,-1, 7,0);
        tracep->declBus(c+42,"top control_1 sel_alu_src1", false,-1, 3,0);
        tracep->declBus(c+43,"top control_1 sel_alu_src2", false,-1, 2,0);
        tracep->declBus(c+44,"top control_1 alu_control", false,-1, 16,0);
        tracep->declBit(c+741,"top control_1 rf_wen", false,-1);
        tracep->declBus(c+45,"top control_1 sel_rf_res", false,-1, 2,0);
        tracep->declBit(c+46,"top control_1 data_ram_en", false,-1);
        tracep->declBit(c+47,"top control_1 data_ram_wen", false,-1);
        tracep->declBus(c+52,"top control_1 wmask", false,-1, 7,0);
        tracep->declBus(c+48,"top control_1 alu_equal", false,-1, 2,0);
        tracep->declBus(c+3,"top control_1 sel_nextpc", false,-1, 1,0);
        tracep->declBus(c+49,"top control_1 l_choose", false,-1, 6,0);
        tracep->declBit(c+730,"top control_1 not_have", false,-1);
        tracep->declBit(c+50,"top control_1 w_choose", false,-1);
        tracep->declBit(c+51,"top control_1 c_wchoose", false,-1);
        tracep->declBit(c+742,"top control_1 c_wen", false,-1);
        tracep->declBus(c+41,"top control_1 e_inst", false,-1, 2,0);
        tracep->declBit(c+735,"top control_1 inst_update", false,-1);
        tracep->declBit(c+743,"top control_1 c_wen1_2", false,-1);
        tracep->declBit(c+734,"top control_1 mem_finish", false,-1);
        tracep->declBit(c+216,"top control_1 addi", false,-1);
        tracep->declBit(c+217,"top control_1 csrrw", false,-1);
        tracep->declBit(c+51,"top control_1 csrrs", false,-1);
        tracep->declBit(c+218,"top control_1 andi", false,-1);
        tracep->declBit(c+219,"top control_1 xori", false,-1);
        tracep->declBit(c+220,"top control_1 ori", false,-1);
        tracep->declBit(c+221,"top control_1 sll", false,-1);
        tracep->declBit(c+222,"top control_1 srl", false,-1);
        tracep->declBit(c+223,"top control_1 sra", false,-1);
        tracep->declBit(c+224,"top control_1 sllw", false,-1);
        tracep->declBit(c+225,"top control_1 srlw", false,-1);
        tracep->declBit(c+226,"top control_1 sraw", false,-1);
        tracep->declBit(c+227,"top control_1 addiw", false,-1);
        tracep->declBit(c+228,"top control_1 slliw", false,-1);
        tracep->declBit(c+229,"top control_1 srliw", false,-1);
        tracep->declBit(c+230,"top control_1 sraiw", false,-1);
        tracep->declBit(c+231,"top control_1 auipc", false,-1);
        tracep->declBit(c+232,"top control_1 lui", false,-1);
        tracep->declBit(c+233,"top control_1 jal", false,-1);
        tracep->declBit(c+234,"top control_1 jalr", false,-1);
        tracep->declBit(c+235,"top control_1 sd", false,-1);
        tracep->declBit(c+236,"top control_1 sh", false,-1);
        tracep->declBit(c+237,"top control_1 sw", false,-1);
        tracep->declBit(c+238,"top control_1 sb", false,-1);
        tracep->declBit(c+239,"top control_1 lw", false,-1);
        tracep->declBit(c+240,"top control_1 lwu", false,-1);
        tracep->declBit(c+241,"top control_1 lh", false,-1);
        tracep->declBit(c+242,"top control_1 lhu", false,-1);
        tracep->declBit(c+243,"top control_1 lb", false,-1);
        tracep->declBit(c+244,"top control_1 lbu", false,-1);
        tracep->declBit(c+245,"top control_1 ld", false,-1);
        tracep->declBit(c+246,"top control_1 addw", false,-1);
        tracep->declBit(c+247,"top control_1 subw", false,-1);
        tracep->declBit(c+248,"top control_1 mulw", false,-1);
        tracep->declBit(c+249,"top control_1 divw", false,-1);
        tracep->declBit(c+250,"top control_1 divuw", false,-1);
        tracep->declBit(c+251,"top control_1 remw", false,-1);
        tracep->declBit(c+252,"top control_1 remuw", false,-1);
        tracep->declBit(c+253,"top control_1 divu", false,-1);
        tracep->declBit(c+254,"top control_1 div", false,-1);
        tracep->declBit(c+255,"top control_1 rem", false,-1);
        tracep->declBit(c+256,"top control_1 remu", false,-1);
        tracep->declBit(c+257,"top control_1 Add", false,-1);
        tracep->declBit(c+258,"top control_1 Mul", false,-1);
        tracep->declBit(c+259,"top control_1 And", false,-1);
        tracep->declBit(c+260,"top control_1 Xor", false,-1);
        tracep->declBit(c+261,"top control_1 Or", false,-1);
        tracep->declBit(c+262,"top control_1 sltu", false,-1);
        tracep->declBit(c+263,"top control_1 slt", false,-1);
        tracep->declBit(c+264,"top control_1 sub", false,-1);
        tracep->declBit(c+265,"top control_1 sltiu", false,-1);
        tracep->declBit(c+266,"top control_1 srai", false,-1);
        tracep->declBit(c+267,"top control_1 slli", false,-1);
        tracep->declBit(c+268,"top control_1 srli", false,-1);
        tracep->declBit(c+269,"top control_1 beq", false,-1);
        tracep->declBit(c+270,"top control_1 bne", false,-1);
        tracep->declBit(c+271,"top control_1 bge", false,-1);
        tracep->declBit(c+272,"top control_1 bgeu", false,-1);
        tracep->declBit(c+273,"top control_1 bltu", false,-1);
        tracep->declBit(c+274,"top control_1 blt", false,-1);
        tracep->declBit(c+724,"top exe_1 clk", false,-1);
        tracep->declBit(c+725,"top exe_1 rst", false,-1);
        tracep->declQuad(c+4,"top exe_1 imm", false,-1, 63,0);
        tracep->declBus(c+737,"top exe_1 rs1", false,-1, 4,0);
        tracep->declBus(c+738,"top exe_1 rs2", false,-1, 4,0);
        tracep->declBus(c+739,"top exe_1 rd", false,-1, 4,0);
        tracep->declBus(c+42,"top exe_1 sel_alu_src1", false,-1, 3,0);
        tracep->declBus(c+43,"top exe_1 sel_alu_src2", false,-1, 2,0);
        tracep->declBus(c+44,"top exe_1 alu_control", false,-1, 16,0);
        tracep->declBit(c+741,"top exe_1 rf_wen", false,-1);
        tracep->declQuad(c+59,"top exe_1 wdata", false,-1, 63,0);
        tracep->declQuad(c+53,"top exe_1 alu_result", false,-1, 63,0);
        tracep->declQuad(c+55,"top exe_1 ram_addr", false,-1, 63,0);
        tracep->declQuad(c+6,"top exe_1 src1", false,-1, 63,0);
        tracep->declBus(c+48,"top exe_1 alu_equal", false,-1, 2,0);
        tracep->declQuad(c+727,"top exe_1 cpupc", false,-1, 63,0);
        tracep->declBit(c+50,"top exe_1 w_choose", false,-1);
        tracep->declQuad(c+8,"top exe_1 src2", false,-1, 63,0);
        tracep->declBit(c+51,"top exe_1 c_wchoose", false,-1);
        tracep->declBit(c+742,"top exe_1 c_wen", false,-1);
        tracep->declBus(c+40,"top exe_1 c_raddr", false,-1, 1,0);
        tracep->declBus(c+40,"top exe_1 c_waddr", false,-1, 1,0);
        tracep->declQuad(c+1,"top exe_1 c_rdata", false,-1, 63,0);
        tracep->declBus(c+41,"top exe_1 e_inst", false,-1, 2,0);
        tracep->declBit(c+743,"top exe_1 c_wen1_2", false,-1);
        tracep->declQuad(c+275,"top exe_1 alu_src1", false,-1, 63,0);
        tracep->declQuad(c+277,"top exe_1 alu_src2", false,-1, 63,0);
        tracep->declQuad(c+279,"top exe_1 c_wdata", false,-1, 63,0);
        tracep->declBus(c+771,"top exe_1 mux1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+771,"top exe_1 mux1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+773,"top exe_1 mux1 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+275,"top exe_1 mux1 out", false,-1, 63,0);
        tracep->declBus(c+42,"top exe_1 mux1 key", false,-1, 3,0);
        tracep->declArray(c+281,"top exe_1 mux1 lut", false,-1, 271,0);
        tracep->declBus(c+771,"top exe_1 mux1 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+771,"top exe_1 mux1 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+773,"top exe_1 mux1 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+774,"top exe_1 mux1 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+275,"top exe_1 mux1 i0 out", false,-1, 63,0);
        tracep->declBus(c+42,"top exe_1 mux1 i0 key", false,-1, 3,0);
        tracep->declQuad(c+775,"top exe_1 mux1 i0 default_out", false,-1, 63,0);
        tracep->declArray(c+281,"top exe_1 mux1 i0 lut", false,-1, 271,0);
        tracep->declBus(c+798,"top exe_1 mux1 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declArray(c+290+i*3,"top exe_1 mux1 i0 pair_list", true,(i+0), 67,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+302+i*1,"top exe_1 mux1 i0 key_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declQuad(c+306+i*2,"top exe_1 mux1 i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+314,"top exe_1 mux1 i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+316,"top exe_1 mux1 i0 hit", false,-1);
        tracep->declBus(c+778,"top exe_1 mux1 i0 i", false,-1, 31,0);
        tracep->declBus(c+789,"top exe_1 mux2 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+789,"top exe_1 mux2 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+773,"top exe_1 mux2 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+277,"top exe_1 mux2 out", false,-1, 63,0);
        tracep->declBus(c+43,"top exe_1 mux2 key", false,-1, 2,0);
        tracep->declArray(c+317,"top exe_1 mux2 lut", false,-1, 200,0);
        tracep->declBus(c+789,"top exe_1 mux2 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+789,"top exe_1 mux2 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+773,"top exe_1 mux2 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+774,"top exe_1 mux2 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+277,"top exe_1 mux2 i0 out", false,-1, 63,0);
        tracep->declBus(c+43,"top exe_1 mux2 i0 key", false,-1, 2,0);
        tracep->declQuad(c+775,"top exe_1 mux2 i0 default_out", false,-1, 63,0);
        tracep->declArray(c+317,"top exe_1 mux2 i0 lut", false,-1, 200,0);
        tracep->declBus(c+799,"top exe_1 mux2 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declArray(c+324+i*3,"top exe_1 mux2 i0 pair_list", true,(i+0), 66,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+333+i*1,"top exe_1 mux2 i0 key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declQuad(c+336+i*2,"top exe_1 mux2 i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+342,"top exe_1 mux2 i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+344,"top exe_1 mux2 i0 hit", false,-1);
        tracep->declBus(c+800,"top exe_1 mux2 i0 i", false,-1, 31,0);
        tracep->declBus(c+772,"top exe_1 mux3 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+779,"top exe_1 mux3 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+773,"top exe_1 mux3 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+279,"top exe_1 mux3 out", false,-1, 63,0);
        tracep->declBus(c+51,"top exe_1 mux3 key", false,-1, 0,0);
        tracep->declArray(c+345,"top exe_1 mux3 lut", false,-1, 129,0);
        tracep->declBus(c+772,"top exe_1 mux3 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+779,"top exe_1 mux3 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+773,"top exe_1 mux3 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+774,"top exe_1 mux3 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+279,"top exe_1 mux3 i0 out", false,-1, 63,0);
        tracep->declBus(c+51,"top exe_1 mux3 i0 key", false,-1, 0,0);
        tracep->declQuad(c+775,"top exe_1 mux3 i0 default_out", false,-1, 63,0);
        tracep->declArray(c+345,"top exe_1 mux3 i0 lut", false,-1, 129,0);
        tracep->declBus(c+780,"top exe_1 mux3 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declArray(c+350+i*3,"top exe_1 mux3 i0 pair_list", true,(i+0), 64,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+356+i*1,"top exe_1 mux3 i0 key_list", true,(i+0), 0,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+358+i*2,"top exe_1 mux3 i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+362,"top exe_1 mux3 i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+364,"top exe_1 mux3 i0 hit", false,-1);
        tracep->declBus(c+781,"top exe_1 mux3 i0 i", false,-1, 31,0);
        tracep->declBus(c+801,"top exe_1 r0 ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+773,"top exe_1 r0 DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+724,"top exe_1 r0 clk", false,-1);
        tracep->declBit(c+725,"top exe_1 r0 rst", false,-1);
        tracep->declBit(c+741,"top exe_1 r0 wen", false,-1);
        tracep->declQuad(c+59,"top exe_1 r0 wdata", false,-1, 63,0);
        tracep->declBus(c+739,"top exe_1 r0 waddr", false,-1, 4,0);
        tracep->declBus(c+737,"top exe_1 r0 raddr1", false,-1, 4,0);
        tracep->declBus(c+738,"top exe_1 r0 raddr2", false,-1, 4,0);
        tracep->declQuad(c+6,"top exe_1 r0 rdata1", false,-1, 63,0);
        tracep->declQuad(c+8,"top exe_1 r0 rdata2", false,-1, 63,0);
        tracep->declBus(c+40,"top exe_1 r0 c_raddr", false,-1, 1,0);
        tracep->declQuad(c+1,"top exe_1 r0 c_rdata", false,-1, 63,0);
        tracep->declQuad(c+279,"top exe_1 r0 c_wdata", false,-1, 63,0);
        tracep->declBus(c+40,"top exe_1 r0 c_waddr", false,-1, 1,0);
        tracep->declBit(c+742,"top exe_1 r0 c_wen", false,-1);
        tracep->declBit(c+743,"top exe_1 r0 c_wen1_2", false,-1);
        tracep->declQuad(c+727,"top exe_1 r0 c_wdata1", false,-1, 63,0);
        tracep->declBus(c+802,"top exe_1 r0 c_waddr1", false,-1, 1,0);
        tracep->declQuad(c+803,"top exe_1 r0 c_wdata2", false,-1, 63,0);
        tracep->declBus(c+805,"top exe_1 r0 c_waddr2", false,-1, 1,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+365+i*2,"top exe_1 r0 rf", true,(i+0), 63,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declQuad(c+429+i*2,"top exe_1 r0 csr", true,(i+0), 63,0);}}
        tracep->declBus(c+437,"top exe_1 r0 i", false,-1, 31,0);
        tracep->declQuad(c+275,"top exe_1 alu2 alu_src1", false,-1, 63,0);
        tracep->declQuad(c+277,"top exe_1 alu2 alu_src2", false,-1, 63,0);
        tracep->declBus(c+44,"top exe_1 alu2 alu_control", false,-1, 16,0);
        tracep->declQuad(c+53,"top exe_1 alu2 alu_result", false,-1, 63,0);
        tracep->declQuad(c+55,"top exe_1 alu2 ram_addr", false,-1, 63,0);
        tracep->declBus(c+48,"top exe_1 alu2 alu_equal", false,-1, 2,0);
        tracep->declBit(c+50,"top exe_1 alu2 w_choose", false,-1);
        tracep->declBit(c+438,"top exe_1 alu2 op_add", false,-1);
        tracep->declBit(c+439,"top exe_1 alu2 op_sub", false,-1);
        tracep->declBit(c+440,"top exe_1 alu2 op_slt", false,-1);
        tracep->declBit(c+441,"top exe_1 alu2 op_sltu", false,-1);
        tracep->declBit(c+442,"top exe_1 alu2 op_and", false,-1);
        tracep->declBit(c+443,"top exe_1 alu2 op_nor", false,-1);
        tracep->declBit(c+444,"top exe_1 alu2 op_or", false,-1);
        tracep->declBit(c+445,"top exe_1 alu2 op_xor", false,-1);
        tracep->declBit(c+446,"top exe_1 alu2 op_sll", false,-1);
        tracep->declBit(c+447,"top exe_1 alu2 op_srl", false,-1);
        tracep->declBit(c+448,"top exe_1 alu2 op_sra", false,-1);
        tracep->declBit(c+449,"top exe_1 alu2 op_lui", false,-1);
        tracep->declBit(c+450,"top exe_1 alu2 op_mul", false,-1);
        tracep->declBit(c+451,"top exe_1 alu2 op_divu", false,-1);
        tracep->declBit(c+452,"top exe_1 alu2 op_div", false,-1);
        tracep->declBit(c+453,"top exe_1 alu2 op_remu", false,-1);
        tracep->declBit(c+454,"top exe_1 alu2 op_rem", false,-1);
        tracep->declQuad(c+55,"top exe_1 alu2 add_sub_result", false,-1, 63,0);
        tracep->declQuad(c+455,"top exe_1 alu2 slt_result", false,-1, 63,0);
        tracep->declQuad(c+457,"top exe_1 alu2 sltu_result", false,-1, 63,0);
        tracep->declQuad(c+459,"top exe_1 alu2 and_result", false,-1, 63,0);
        tracep->declQuad(c+461,"top exe_1 alu2 nor_result", false,-1, 63,0);
        tracep->declQuad(c+463,"top exe_1 alu2 or_result", false,-1, 63,0);
        tracep->declQuad(c+465,"top exe_1 alu2 xor_result", false,-1, 63,0);
        tracep->declQuad(c+467,"top exe_1 alu2 sll_result", false,-1, 63,0);
        tracep->declQuad(c+469,"top exe_1 alu2 srl_result", false,-1, 63,0);
        tracep->declQuad(c+471,"top exe_1 alu2 sra_result", false,-1, 63,0);
        tracep->declQuad(c+473,"top exe_1 alu2 lui_result", false,-1, 63,0);
        tracep->declQuad(c+475,"top exe_1 alu2 mul_result", false,-1, 63,0);
        tracep->declQuad(c+477,"top exe_1 alu2 divu_result", false,-1, 63,0);
        tracep->declQuad(c+479,"top exe_1 alu2 div_result", false,-1, 63,0);
        tracep->declQuad(c+481,"top exe_1 alu2 remu_result", false,-1, 63,0);
        tracep->declQuad(c+483,"top exe_1 alu2 rem_result", false,-1, 63,0);
        tracep->declQuad(c+275,"top exe_1 alu2 adder_a", false,-1, 63,0);
        tracep->declQuad(c+485,"top exe_1 alu2 adder_b", false,-1, 63,0);
        tracep->declBit(c+487,"top exe_1 alu2 adder_cin", false,-1);
        tracep->declQuad(c+55,"top exe_1 alu2 adder_result", false,-1, 63,0);
        tracep->declBit(c+488,"top exe_1 alu2 adder_cout", false,-1);
        tracep->declQuad(c+489,"top exe_1 alu2 alu_result_uw", false,-1, 63,0);
        tracep->declQuad(c+491,"top exe_1 alu2 alu_result_w", false,-1, 63,0);
        tracep->declBus(c+772,"top exe_1 alu2 mux1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+779,"top exe_1 alu2 mux1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+773,"top exe_1 alu2 mux1 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+53,"top exe_1 alu2 mux1 out", false,-1, 63,0);
        tracep->declBus(c+50,"top exe_1 alu2 mux1 key", false,-1, 0,0);
        tracep->declArray(c+493,"top exe_1 alu2 mux1 lut", false,-1, 129,0);
        tracep->declBus(c+772,"top exe_1 alu2 mux1 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+779,"top exe_1 alu2 mux1 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+773,"top exe_1 alu2 mux1 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+774,"top exe_1 alu2 mux1 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+53,"top exe_1 alu2 mux1 i0 out", false,-1, 63,0);
        tracep->declBus(c+50,"top exe_1 alu2 mux1 i0 key", false,-1, 0,0);
        tracep->declQuad(c+775,"top exe_1 alu2 mux1 i0 default_out", false,-1, 63,0);
        tracep->declArray(c+493,"top exe_1 alu2 mux1 i0 lut", false,-1, 129,0);
        tracep->declBus(c+780,"top exe_1 alu2 mux1 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declArray(c+498+i*3,"top exe_1 alu2 mux1 i0 pair_list", true,(i+0), 64,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+504+i*1,"top exe_1 alu2 mux1 i0 key_list", true,(i+0), 0,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+506+i*2,"top exe_1 alu2 mux1 i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+510,"top exe_1 alu2 mux1 i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+512,"top exe_1 alu2 mux1 i0 hit", false,-1);
        tracep->declBus(c+781,"top exe_1 alu2 mux1 i0 i", false,-1, 31,0);
        tracep->declBus(c+773,"top mem_2 ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+773,"top mem_2 DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+724,"top mem_2 clk", false,-1);
        tracep->declBit(c+725,"top mem_2 rst", false,-1);
        tracep->declBit(c+46,"top mem_2 r_ren", false,-1);
        tracep->declQuad(c+55,"top mem_2 r_raddr", false,-1, 63,0);
        tracep->declQuad(c+57,"top mem_2 r_rdata", false,-1, 63,0);
        tracep->declQuad(c+55,"top mem_2 r_waddr", false,-1, 63,0);
        tracep->declBus(c+52,"top mem_2 r_mask", false,-1, 7,0);
        tracep->declBit(c+47,"top mem_2 r_wen", false,-1);
        tracep->declQuad(c+8,"top mem_2 r_wdata", false,-1, 63,0);
        tracep->declBus(c+49,"top mem_2 l_choose", false,-1, 6,0);
        tracep->declBit(c+735,"top mem_2 inst_update", false,-1);
        tracep->declBit(c+734,"top mem_2 mem_finish", false,-1);
        tracep->declBit(c+733,"top mem_2 inst_finish", false,-1);
        tracep->declBus(c+18,"top mem_2 araddr2", false,-1, 31,0);
        tracep->declBit(c+19,"top mem_2 arvalid2", false,-1);
        tracep->declBus(c+767,"top mem_2 arburst2", false,-1, 1,0);
        tracep->declBus(c+768,"top mem_2 arlen2", false,-1, 7,0);
        tracep->declBus(c+769,"top mem_2 arsize2", false,-1, 2,0);
        tracep->declBit(c+20,"top mem_2 arready2", false,-1);
        tracep->declQuad(c+21,"top mem_2 rdata2", false,-1, 63,0);
        tracep->declBus(c+23,"top mem_2 rresp2", false,-1, 1,0);
        tracep->declBit(c+24,"top mem_2 rvalid2", false,-1);
        tracep->declBit(c+25,"top mem_2 rlast2", false,-1);
        tracep->declBit(c+26,"top mem_2 rready2", false,-1);
        tracep->declBus(c+27,"top mem_2 awaddr2", false,-1, 31,0);
        tracep->declBit(c+28,"top mem_2 awvalid2", false,-1);
        tracep->declBus(c+767,"top mem_2 awburst2", false,-1, 1,0);
        tracep->declBus(c+768,"top mem_2 awlen2", false,-1, 7,0);
        tracep->declBit(c+29,"top mem_2 awready2", false,-1);
        tracep->declQuad(c+30,"top mem_2 wdata2", false,-1, 63,0);
        tracep->declBit(c+32,"top mem_2 wlast2", false,-1);
        tracep->declBus(c+770,"top mem_2 wstrb2", false,-1, 7,0);
        tracep->declBit(c+33,"top mem_2 wvalid2", false,-1);
        tracep->declBit(c+34,"top mem_2 wready2", false,-1);
        tracep->declBus(c+35,"top mem_2 bresp2", false,-1, 1,0);
        tracep->declBit(c+36,"top mem_2 bvalid2", false,-1);
        tracep->declBit(c+37,"top mem_2 bready2", false,-1);
        tracep->declBit(c+513,"top mem_2 cache_finish", false,-1);
        tracep->declBit(c+514,"top mem_2 use_cache", false,-1);
        tracep->declQuad(c+515,"top mem_2 r_rdata_ld", false,-1, 63,0);
        tracep->declQuad(c+517,"top mem_2 r_rdata_ld_cache", false,-1, 63,0);
        tracep->declQuad(c+519,"top mem_2 r_rdata_ld_device", false,-1, 63,0);
        tracep->declQuad(c+521,"top mem_2 r_rdata_lw", false,-1, 63,0);
        tracep->declQuad(c+523,"top mem_2 r_rdata_lwu", false,-1, 63,0);
        tracep->declQuad(c+525,"top mem_2 r_rdata_lh", false,-1, 63,0);
        tracep->declQuad(c+527,"top mem_2 r_rdata_lhu", false,-1, 63,0);
        tracep->declQuad(c+529,"top mem_2 r_rdata_lb", false,-1, 63,0);
        tracep->declQuad(c+531,"top mem_2 r_rdata_lbu", false,-1, 63,0);
        tracep->declBit(c+757,"top mem_2 device_finish", false,-1);
        tracep->declBus(c+806,"top mem_2 mux3 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+806,"top mem_2 mux3 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+773,"top mem_2 mux3 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+57,"top mem_2 mux3 out", false,-1, 63,0);
        tracep->declBus(c+49,"top mem_2 mux3 key", false,-1, 6,0);
        tracep->declArray(c+533,"top mem_2 mux3 lut", false,-1, 496,0);
        tracep->declBus(c+806,"top mem_2 mux3 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+806,"top mem_2 mux3 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+773,"top mem_2 mux3 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+774,"top mem_2 mux3 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+57,"top mem_2 mux3 i0 out", false,-1, 63,0);
        tracep->declBus(c+49,"top mem_2 mux3 i0 key", false,-1, 6,0);
        tracep->declQuad(c+775,"top mem_2 mux3 i0 default_out", false,-1, 63,0);
        tracep->declArray(c+533,"top mem_2 mux3 i0 lut", false,-1, 496,0);
        tracep->declBus(c+807,"top mem_2 mux3 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<7; i++) {
                tracep->declArray(c+549+i*3,"top mem_2 mux3 i0 pair_list", true,(i+0), 70,0);}}
        {int i; for (i=0; i<7; i++) {
                tracep->declBus(c+570+i*1,"top mem_2 mux3 i0 key_list", true,(i+0), 6,0);}}
        {int i; for (i=0; i<7; i++) {
                tracep->declQuad(c+577+i*2,"top mem_2 mux3 i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+591,"top mem_2 mux3 i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+593,"top mem_2 mux3 i0 hit", false,-1);
        tracep->declBus(c+808,"top mem_2 mux3 i0 i", false,-1, 31,0);
        tracep->declBus(c+779,"top mem_2 finish WIDTH", false,-1, 31,0);
        tracep->declBus(c+809,"top mem_2 finish RESET_VAL", false,-1, 0,0);
        tracep->declBit(c+724,"top mem_2 finish clk", false,-1);
        tracep->declBit(c+725,"top mem_2 finish rst", false,-1);
        tracep->declBus(c+734,"top mem_2 finish din", false,-1, 0,0);
        tracep->declBus(c+733,"top mem_2 finish dout", false,-1, 0,0);
        tracep->declBit(c+784,"top mem_2 finish wen", false,-1);
        tracep->declBit(c+724,"top mem_2 dcache_0 clk", false,-1);
        tracep->declBit(c+725,"top mem_2 dcache_0 rst", false,-1);
        tracep->declBit(c+514,"top mem_2 dcache_0 use_cache", false,-1);
        tracep->declBit(c+46,"top mem_2 dcache_0 r_ren", false,-1);
        tracep->declBus(c+594,"top mem_2 dcache_0 raddr", false,-1, 31,0);
        tracep->declQuad(c+517,"top mem_2 dcache_0 rdata_align", false,-1, 63,0);
        tracep->declBit(c+47,"top mem_2 dcache_0 r_wen", false,-1);
        tracep->declBus(c+594,"top mem_2 dcache_0 waddr", false,-1, 31,0);
        tracep->declQuad(c+8,"top mem_2 dcache_0 wdata", false,-1, 63,0);
        tracep->declBus(c+52,"top mem_2 dcache_0 wmask", false,-1, 7,0);
        tracep->declBit(c+735,"top mem_2 dcache_0 inst_update", false,-1);
        tracep->declBit(c+513,"top mem_2 dcache_0 cache_finish", false,-1);
        tracep->declBus(c+18,"top mem_2 dcache_0 araddr2", false,-1, 31,0);
        tracep->declBit(c+19,"top mem_2 dcache_0 arvalid2", false,-1);
        tracep->declBus(c+767,"top mem_2 dcache_0 arburst2", false,-1, 1,0);
        tracep->declBus(c+768,"top mem_2 dcache_0 arlen2", false,-1, 7,0);
        tracep->declBus(c+769,"top mem_2 dcache_0 arsize2", false,-1, 2,0);
        tracep->declBit(c+20,"top mem_2 dcache_0 arready2", false,-1);
        tracep->declQuad(c+21,"top mem_2 dcache_0 rdata2", false,-1, 63,0);
        tracep->declBus(c+23,"top mem_2 dcache_0 rresp2", false,-1, 1,0);
        tracep->declBit(c+24,"top mem_2 dcache_0 rvalid2", false,-1);
        tracep->declBit(c+25,"top mem_2 dcache_0 rlast2", false,-1);
        tracep->declBit(c+26,"top mem_2 dcache_0 rready2", false,-1);
        tracep->declBus(c+27,"top mem_2 dcache_0 awaddr2", false,-1, 31,0);
        tracep->declBit(c+28,"top mem_2 dcache_0 awvalid2", false,-1);
        tracep->declBus(c+767,"top mem_2 dcache_0 awburst2", false,-1, 1,0);
        tracep->declBus(c+768,"top mem_2 dcache_0 awlen2", false,-1, 7,0);
        tracep->declBit(c+29,"top mem_2 dcache_0 awready2", false,-1);
        tracep->declQuad(c+30,"top mem_2 dcache_0 wdata2", false,-1, 63,0);
        tracep->declBit(c+32,"top mem_2 dcache_0 wlast2", false,-1);
        tracep->declBus(c+770,"top mem_2 dcache_0 wstrb2", false,-1, 7,0);
        tracep->declBit(c+33,"top mem_2 dcache_0 wvalid2", false,-1);
        tracep->declBit(c+34,"top mem_2 dcache_0 wready2", false,-1);
        tracep->declBus(c+35,"top mem_2 dcache_0 bresp2", false,-1, 1,0);
        tracep->declBit(c+36,"top mem_2 dcache_0 bvalid2", false,-1);
        tracep->declBit(c+37,"top mem_2 dcache_0 bready2", false,-1);
        tracep->declBus(c+785,"top mem_2 dcache_0 CACHE_SIZE", false,-1, 31,0);
        tracep->declBus(c+773,"top mem_2 dcache_0 LINE_SIZE", false,-1, 31,0);
        tracep->declBus(c+773,"top mem_2 dcache_0 NUM_LINES", false,-1, 31,0);
        tracep->declBus(c+810,"top mem_2 dcache_0 TAGARRAY_WIDTH", false,-1, 31,0);
        tracep->declBus(c+787,"top mem_2 dcache_0 INDEX_WIDTH", false,-1, 31,0);
        tracep->declBus(c+787,"top mem_2 dcache_0 OFFSET_WIDTH", false,-1, 31,0);
        tracep->declBus(c+788,"top mem_2 dcache_0 TAG_WIDTH", false,-1, 31,0);
        tracep->declBus(c+595,"top mem_2 dcache_0 araddr", false,-1, 31,0);
        tracep->declQuad(c+596,"top mem_2 dcache_0 rdata", false,-1, 63,0);
        tracep->declBus(c+598,"top mem_2 dcache_0 araddr_offset", false,-1, 5,0);
        tracep->declBus(c+599,"top mem_2 dcache_0 araddr_index", false,-1, 5,0);
        tracep->declBus(c+600,"top mem_2 dcache_0 araddr_tag", false,-1, 19,0);
        tracep->declBus(c+601,"top mem_2 dcache_0 waddr_index", false,-1, 5,0);
        tracep->declBus(c+602,"top mem_2 dcache_0 waddr_offset", false,-1, 5,0);
        tracep->declBus(c+603,"top mem_2 dcache_0 waddr_tag", false,-1, 19,0);
        tracep->declQuad(c+21,"top mem_2 dcache_0 rdata_axi", false,-1, 63,0);
        tracep->declBit(c+25,"top mem_2 dcache_0 rlast", false,-1);
        tracep->declBus(c+774,"top mem_2 dcache_0 CACHE_IDLE", false,-1, 31,0);
        tracep->declBus(c+779,"top mem_2 dcache_0 CACHE_UPDATE_BEGIN", false,-1, 31,0);
        tracep->declBus(c+772,"top mem_2 dcache_0 CACHE_MEMWRITE", false,-1, 31,0);
        tracep->declBus(c+789,"top mem_2 dcache_0 CACHE_MEMREAD", false,-1, 31,0);
        tracep->declBus(c+771,"top mem_2 dcache_0 CACHE_GET", false,-1, 31,0);
        tracep->declBus(c+801,"top mem_2 dcache_0 CACHE_FINISH", false,-1, 31,0);
        tracep->declBus(c+787,"top mem_2 dcache_0 CACHE_WRITE", false,-1, 31,0);
        tracep->declBus(c+604,"top mem_2 dcache_0 cache_state", false,-1, 2,0);
        tracep->declBit(c+605,"top mem_2 dcache_0 rcache_en", false,-1);
        tracep->declBit(c+606,"top mem_2 dcache_0 wcache_en", false,-1);
        tracep->declBit(c+607,"top mem_2 dcache_0 mem_write_begin", false,-1);
        tracep->declBit(c+608,"top mem_2 dcache_0 mem_write_finish", false,-1);
        tracep->declBit(c+609,"top mem_2 dcache_0 mem_read_finish", false,-1);
        tracep->declBit(c+610,"top mem_2 dcache_0 mem_read_begin", false,-1);
        tracep->declBus(c+18,"top mem_2 dcache_0 araddr_block", false,-1, 31,0);
        tracep->declBus(c+27,"top mem_2 dcache_0 wraddr_block", false,-1, 31,0);
        tracep->declBit(c+24,"top mem_2 dcache_0 rvalid", false,-1);
        tracep->declBit(c+26,"top mem_2 dcache_0 rready", false,-1);
        tracep->declBit(c+20,"top mem_2 dcache_0 arready", false,-1);
        tracep->declBit(c+19,"top mem_2 dcache_0 arvalid", false,-1);
        tracep->declBus(c+611,"top mem_2 dcache_0 d_r_len", false,-1, 2,0);
        tracep->declBus(c+612,"top mem_2 dcache_0 d_w_len", false,-1, 2,0);
        tracep->declBus(c+767,"top mem_2 dcache_0 arburst", false,-1, 1,0);
        tracep->declBus(c+768,"top mem_2 dcache_0 arlen", false,-1, 7,0);
        tracep->declBus(c+769,"top mem_2 dcache_0 arsize", false,-1, 2,0);
        tracep->declBus(c+23,"top mem_2 dcache_0 rresp", false,-1, 1,0);
        tracep->declBus(c+790,"top mem_2 dcache_0 READ_IDLE", false,-1, 2,0);
        tracep->declBus(c+791,"top mem_2 dcache_0 READ_ARREADY", false,-1, 2,0);
        tracep->declBus(c+792,"top mem_2 dcache_0 READ_TRANS", false,-1, 2,0);
        tracep->declBus(c+769,"top mem_2 dcache_0 READ_FINISH", false,-1, 2,0);
        tracep->declBus(c+613,"top mem_2 dcache_0 read_state", false,-1, 2,0);
        tracep->declBus(c+614,"top mem_2 dcache_0 write_state", false,-1, 2,0);
        tracep->declBus(c+767,"top mem_2 dcache_0 awburst", false,-1, 1,0);
        tracep->declBus(c+768,"top mem_2 dcache_0 awlen", false,-1, 7,0);
        tracep->declBit(c+29,"top mem_2 dcache_0 awready", false,-1);
        tracep->declBit(c+32,"top mem_2 dcache_0 wlast", false,-1);
        tracep->declBit(c+34,"top mem_2 dcache_0 wready", false,-1);
        tracep->declBus(c+35,"top mem_2 dcache_0 bresp", false,-1, 1,0);
        tracep->declBit(c+37,"top mem_2 dcache_0 bready", false,-1);
        tracep->declBit(c+36,"top mem_2 dcache_0 bvalid", false,-1);
        tracep->declBus(c+790,"top mem_2 dcache_0 WRITE_IDLE", false,-1, 2,0);
        tracep->declBus(c+791,"top mem_2 dcache_0 WRITE_AW_READY", false,-1, 2,0);
        tracep->declBus(c+792,"top mem_2 dcache_0 WRITE_W_READY", false,-1, 2,0);
        tracep->declBus(c+769,"top mem_2 dcache_0 WRITE_FINISH", false,-1, 2,0);
        tracep->declBit(c+28,"top mem_2 dcache_0 awvalid", false,-1);
        tracep->declBit(c+33,"top mem_2 dcache_0 wvalid", false,-1);
        tracep->declQuad(c+30,"top mem_2 dcache_0 wdata_axi", false,-1, 63,0);
        tracep->declBus(c+27,"top mem_2 dcache_0 awaddr", false,-1, 31,0);
        tracep->declQuad(c+30,"top mem_2 dcache_0 r_wdata", false,-1, 63,0);
        tracep->declBus(c+770,"top mem_2 dcache_0 wstrb", false,-1, 7,0);
        tracep->declBus(c+615,"top mem_2 dcache_0 c_awlen", false,-1, 7,0);
        tracep->declQuad(c+616,"top mem_2 dcache_0 wmask_full", false,-1, 63,0);
        tracep->declQuad(c+618,"top mem_2 dcache_0 wdata_align", false,-1, 63,0);
        tracep->declQuad(c+620,"top mem_2 dcache_0 wmask_align", false,-1, 63,0);
        tracep->declBus(c+811,"top mem_2 dcache_0 testaraddr", false,-1, 31,0);
        tracep->declBus(c+812,"top mem_2 dcache_0 testaraddr_offset", false,-1, 5,0);
        tracep->declBus(c+813,"top mem_2 dcache_0 testaraddr_index", false,-1, 5,0);
        tracep->declQuad(c+622,"top mem_2 dcache_0 testdata", false,-1, 63,0);
        tracep->declBus(c+624,"top mem_2 dcache_0 testtag", false,-1, 21,0);
        tracep->declBus(c+625,"top mem_2 dcache_0 unnamedblk1 i", false,-1, 31,0);
        tracep->declBus(c+626,"top mem_2 dcache_0 unnamedblk2 i", false,-1, 31,0);
        tracep->declBus(c+627,"top mem_2 dcache_0 unnamedblk2 unnamedblk3 j", false,-1, 31,0);
        tracep->declBit(c+724,"top mem_2 mem_read_write_0 clk", false,-1);
        tracep->declBit(c+725,"top mem_2 mem_read_write_0 rst", false,-1);
        tracep->declBit(c+628,"top mem_2 mem_read_write_0 ren", false,-1);
        tracep->declQuad(c+55,"top mem_2 mem_read_write_0 r_raddr", false,-1, 63,0);
        tracep->declQuad(c+519,"top mem_2 mem_read_write_0 r_rdata", false,-1, 63,0);
        tracep->declBit(c+629,"top mem_2 mem_read_write_0 wen", false,-1);
        tracep->declQuad(c+55,"top mem_2 mem_read_write_0 r_waddr", false,-1, 63,0);
        tracep->declQuad(c+8,"top mem_2 mem_read_write_0 r_wdata", false,-1, 63,0);
        tracep->declBus(c+52,"top mem_2 mem_read_write_0 r_mask", false,-1, 7,0);
        tracep->declBit(c+735,"top mem_2 mem_read_write_0 inst_update", false,-1);
        tracep->declBit(c+630,"top mem_2 mem_read_write_0 use_device_en", false,-1);
        tracep->declBit(c+757,"top mem_2 mem_read_write_0 use_device_finish", false,-1);
        tracep->declBit(c+631,"top mem_2 mem_read_write_0 rvalid", false,-1);
        tracep->declBit(c+632,"top mem_2 mem_read_write_0 rready", false,-1);
        tracep->declBit(c+633,"top mem_2 mem_read_write_0 arready", false,-1);
        tracep->declBit(c+634,"top mem_2 mem_read_write_0 arvalid", false,-1);
        tracep->declBit(c+635,"top mem_2 mem_read_write_0 rlast", false,-1);
        tracep->declBus(c+636,"top mem_2 mem_read_write_0 d_r_len", false,-1, 2,0);
        tracep->declBus(c+637,"top mem_2 mem_read_write_0 d_w_len", false,-1, 2,0);
        tracep->declBus(c+767,"top mem_2 mem_read_write_0 arburst", false,-1, 1,0);
        tracep->declBus(c+814,"top mem_2 mem_read_write_0 arlen", false,-1, 7,0);
        tracep->declBus(c+769,"top mem_2 mem_read_write_0 arsize", false,-1, 2,0);
        tracep->declBus(c+638,"top mem_2 mem_read_write_0 rresp", false,-1, 1,0);
        tracep->declQuad(c+639,"top mem_2 mem_read_write_0 rdata_axi", false,-1, 63,0);
        tracep->declBus(c+790,"top mem_2 mem_read_write_0 READ_IDLE", false,-1, 2,0);
        tracep->declBus(c+791,"top mem_2 mem_read_write_0 READ_ARREADY", false,-1, 2,0);
        tracep->declBus(c+792,"top mem_2 mem_read_write_0 READ_TRANS", false,-1, 2,0);
        tracep->declBus(c+769,"top mem_2 mem_read_write_0 READ_FINISH", false,-1, 2,0);
        tracep->declBus(c+641,"top mem_2 mem_read_write_0 read_state", false,-1, 2,0);
        tracep->declBit(c+642,"top mem_2 mem_read_write_0 mem_read_finish", false,-1);
        tracep->declBit(c+643,"top mem_2 mem_read_write_0 mem_write_finish", false,-1);
        tracep->declBus(c+644,"top mem_2 mem_read_write_0 write_state", false,-1, 2,0);
        tracep->declBus(c+767,"top mem_2 mem_read_write_0 awburst", false,-1, 1,0);
        tracep->declBus(c+814,"top mem_2 mem_read_write_0 awlen", false,-1, 7,0);
        tracep->declBit(c+645,"top mem_2 mem_read_write_0 awready", false,-1);
        tracep->declBit(c+646,"top mem_2 mem_read_write_0 wlast", false,-1);
        tracep->declBit(c+647,"top mem_2 mem_read_write_0 wready", false,-1);
        tracep->declBus(c+648,"top mem_2 mem_read_write_0 bresp", false,-1, 1,0);
        tracep->declBit(c+649,"top mem_2 mem_read_write_0 bready", false,-1);
        tracep->declBit(c+650,"top mem_2 mem_read_write_0 bvalid", false,-1);
        tracep->declBus(c+790,"top mem_2 mem_read_write_0 WRITE_IDLE", false,-1, 2,0);
        tracep->declBus(c+791,"top mem_2 mem_read_write_0 WRITE_AW_READY", false,-1, 2,0);
        tracep->declBus(c+792,"top mem_2 mem_read_write_0 WRITE_TRANS", false,-1, 2,0);
        tracep->declBus(c+769,"top mem_2 mem_read_write_0 WRITE_FINISH", false,-1, 2,0);
        tracep->declBit(c+651,"top mem_2 mem_read_write_0 awvalid", false,-1);
        tracep->declBit(c+652,"top mem_2 mem_read_write_0 wvalid", false,-1);
        tracep->declQuad(c+653,"top mem_2 mem_read_write_0 wdata_axi", false,-1, 63,0);
        tracep->declBus(c+594,"top mem_2 mem_read_write_0 awaddr", false,-1, 31,0);
        tracep->declQuad(c+653,"top mem_2 mem_read_write_0 wdata", false,-1, 63,0);
        tracep->declBus(c+52,"top mem_2 mem_read_write_0 wstrb", false,-1, 7,0);
        tracep->declBus(c+655,"top mem_2 mem_read_write_0 c_awlen", false,-1, 7,0);
        tracep->declBit(c+724,"top mem_2 mem_read_write_0 axi_full_s2_1 clk", false,-1);
        tracep->declBit(c+725,"top mem_2 mem_read_write_0 axi_full_s2_1 rst", false,-1);
        tracep->declBus(c+594,"top mem_2 mem_read_write_0 axi_full_s2_1 araddr", false,-1, 31,0);
        tracep->declBit(c+634,"top mem_2 mem_read_write_0 axi_full_s2_1 arvalid", false,-1);
        tracep->declBus(c+767,"top mem_2 mem_read_write_0 axi_full_s2_1 arburst", false,-1, 1,0);
        tracep->declBus(c+814,"top mem_2 mem_read_write_0 axi_full_s2_1 arlen", false,-1, 7,0);
        tracep->declBus(c+769,"top mem_2 mem_read_write_0 axi_full_s2_1 arsize", false,-1, 2,0);
        tracep->declBit(c+633,"top mem_2 mem_read_write_0 axi_full_s2_1 arready", false,-1);
        tracep->declQuad(c+639,"top mem_2 mem_read_write_0 axi_full_s2_1 rdata", false,-1, 63,0);
        tracep->declBus(c+638,"top mem_2 mem_read_write_0 axi_full_s2_1 rresp", false,-1, 1,0);
        tracep->declBit(c+631,"top mem_2 mem_read_write_0 axi_full_s2_1 rvalid", false,-1);
        tracep->declBit(c+635,"top mem_2 mem_read_write_0 axi_full_s2_1 rlast", false,-1);
        tracep->declBit(c+632,"top mem_2 mem_read_write_0 axi_full_s2_1 rready", false,-1);
        tracep->declBus(c+594,"top mem_2 mem_read_write_0 axi_full_s2_1 awaddr", false,-1, 31,0);
        tracep->declBit(c+651,"top mem_2 mem_read_write_0 axi_full_s2_1 awvalid", false,-1);
        tracep->declBus(c+767,"top mem_2 mem_read_write_0 axi_full_s2_1 awburst", false,-1, 1,0);
        tracep->declBus(c+814,"top mem_2 mem_read_write_0 axi_full_s2_1 awlen", false,-1, 7,0);
        tracep->declBit(c+645,"top mem_2 mem_read_write_0 axi_full_s2_1 awready", false,-1);
        tracep->declQuad(c+653,"top mem_2 mem_read_write_0 axi_full_s2_1 wdata", false,-1, 63,0);
        tracep->declBit(c+646,"top mem_2 mem_read_write_0 axi_full_s2_1 wlast", false,-1);
        tracep->declBus(c+52,"top mem_2 mem_read_write_0 axi_full_s2_1 wstrb", false,-1, 7,0);
        tracep->declBit(c+652,"top mem_2 mem_read_write_0 axi_full_s2_1 wvalid", false,-1);
        tracep->declBit(c+647,"top mem_2 mem_read_write_0 axi_full_s2_1 wready", false,-1);
        tracep->declBus(c+648,"top mem_2 mem_read_write_0 axi_full_s2_1 bresp", false,-1, 1,0);
        tracep->declBit(c+650,"top mem_2 mem_read_write_0 axi_full_s2_1 bvalid", false,-1);
        tracep->declBit(c+649,"top mem_2 mem_read_write_0 axi_full_s2_1 bready", false,-1);
        tracep->declBus(c+656,"top mem_2 mem_read_write_0 axi_full_s2_1 r_araddr", false,-1, 31,0);
        tracep->declBus(c+657,"top mem_2 mem_read_write_0 axi_full_s2_1 c_arlen", false,-1, 7,0);
        tracep->declBus(c+815,"top mem_2 mem_read_write_0 axi_full_s2_1 c_awlen", false,-1, 7,0);
        tracep->declBus(c+658,"top mem_2 mem_read_write_0 axi_full_s2_1 r_awaddr", false,-1, 31,0);
        tracep->declBit(c+659,"top mem_2 mem_read_write_0 axi_full_s2_1 testwrite", false,-1);
        tracep->declBus(c+790,"top mem_2 mem_read_write_0 axi_full_s2_1 READ_IDLE", false,-1, 2,0);
        tracep->declBus(c+791,"top mem_2 mem_read_write_0 axi_full_s2_1 READ_ARVALID", false,-1, 2,0);
        tracep->declBus(c+792,"top mem_2 mem_read_write_0 axi_full_s2_1 READ_TRANS", false,-1, 2,0);
        tracep->declBus(c+769,"top mem_2 mem_read_write_0 axi_full_s2_1 READ_FINISH", false,-1, 2,0);
        tracep->declBus(c+660,"top mem_2 mem_read_write_0 axi_full_s2_1 state", false,-1, 2,0);
        tracep->declBus(c+661,"top mem_2 mem_read_write_0 axi_full_s2_1 write_state", false,-1, 2,0);
        tracep->declBus(c+790,"top mem_2 mem_read_write_0 axi_full_s2_1 WRITE_IDLE", false,-1, 2,0);
        tracep->declBus(c+791,"top mem_2 mem_read_write_0 axi_full_s2_1 WRITE_AW_VALID", false,-1, 2,0);
        tracep->declBus(c+792,"top mem_2 mem_read_write_0 axi_full_s2_1 WRITE_W_VALID", false,-1, 2,0);
        tracep->declBus(c+769,"top mem_2 mem_read_write_0 axi_full_s2_1 WRITE_FINISH", false,-1, 2,0);
        tracep->declQuad(c+57,"top wb0 r_data", false,-1, 63,0);
        tracep->declQuad(c+53,"top wb0 alu_result", false,-1, 63,0);
        tracep->declBus(c+45,"top wb0 sel_rf_res", false,-1, 2,0);
        tracep->declQuad(c+59,"top wb0 wdata", false,-1, 63,0);
        tracep->declQuad(c+1,"top wb0 c_rdata", false,-1, 63,0);
        tracep->declBus(c+789,"top wb0 mux3 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+789,"top wb0 mux3 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+773,"top wb0 mux3 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+59,"top wb0 mux3 out", false,-1, 63,0);
        tracep->declBus(c+45,"top wb0 mux3 key", false,-1, 2,0);
        tracep->declArray(c+662,"top wb0 mux3 lut", false,-1, 200,0);
        tracep->declBus(c+789,"top wb0 mux3 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+789,"top wb0 mux3 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+773,"top wb0 mux3 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+774,"top wb0 mux3 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+59,"top wb0 mux3 i0 out", false,-1, 63,0);
        tracep->declBus(c+45,"top wb0 mux3 i0 key", false,-1, 2,0);
        tracep->declQuad(c+775,"top wb0 mux3 i0 default_out", false,-1, 63,0);
        tracep->declArray(c+662,"top wb0 mux3 i0 lut", false,-1, 200,0);
        tracep->declBus(c+799,"top wb0 mux3 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declArray(c+669+i*3,"top wb0 mux3 i0 pair_list", true,(i+0), 66,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+678+i*1,"top wb0 mux3 i0 key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declQuad(c+681+i*2,"top wb0 mux3 i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+687,"top wb0 mux3 i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+689,"top wb0 mux3 i0 hit", false,-1);
        tracep->declBus(c+800,"top wb0 mux3 i0 i", false,-1, 31,0);
        tracep->declBit(c+724,"top arbiter_1 clk", false,-1);
        tracep->declBit(c+725,"top arbiter_1 rst", false,-1);
        tracep->declBus(c+736,"top arbiter_1 araddr_1", false,-1, 31,0);
        tracep->declBus(c+18,"top arbiter_1 araddr_2", false,-1, 31,0);
        tracep->declBit(c+10,"top arbiter_1 arvalid_1", false,-1);
        tracep->declBit(c+19,"top arbiter_1 arvalid_2", false,-1);
        tracep->declBus(c+767,"top arbiter_1 arburst_1", false,-1, 1,0);
        tracep->declBus(c+767,"top arbiter_1 arburst_2", false,-1, 1,0);
        tracep->declBus(c+768,"top arbiter_1 arlen_1", false,-1, 7,0);
        tracep->declBus(c+768,"top arbiter_1 arlen_2", false,-1, 7,0);
        tracep->declBus(c+769,"top arbiter_1 arsize_1", false,-1, 2,0);
        tracep->declBus(c+769,"top arbiter_1 arsize_2", false,-1, 2,0);
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
        tracep->declBus(c+767,"top arbiter_1 awburst_2", false,-1, 1,0);
        tracep->declBus(c+768,"top arbiter_1 awlen_2", false,-1, 7,0);
        tracep->declBit(c+29,"top arbiter_1 awready_2", false,-1);
        tracep->declQuad(c+30,"top arbiter_1 wdata_2", false,-1, 63,0);
        tracep->declBit(c+32,"top arbiter_1 wlast_2", false,-1);
        tracep->declBus(c+770,"top arbiter_1 wstrb_2", false,-1, 7,0);
        tracep->declBit(c+33,"top arbiter_1 wvalid_2", false,-1);
        tracep->declBit(c+34,"top arbiter_1 wready_2", false,-1);
        tracep->declBus(c+35,"top arbiter_1 bresp_2", false,-1, 1,0);
        tracep->declBit(c+36,"top arbiter_1 bvalid_2", false,-1);
        tracep->declBit(c+37,"top arbiter_1 bready_2", false,-1);
        tracep->declBit(c+735,"top arbiter_1 inst_update", false,-1);
        tracep->declBit(c+734,"top arbiter_1 mem_finish", false,-1);
        tracep->declBus(c+690,"top arbiter_1 master_state", false,-1, 1,0);
        tracep->declBus(c+774,"top arbiter_1 IDLE", false,-1, 31,0);
        tracep->declBus(c+779,"top arbiter_1 S_MASTER_1", false,-1, 31,0);
        tracep->declBus(c+772,"top arbiter_1 S_MASTER_2", false,-1, 31,0);
        tracep->declBit(c+691,"top arbiter_1 master_1", false,-1);
        tracep->declBit(c+692,"top arbiter_1 master_2", false,-1);
        tracep->declBus(c+758,"top arbiter_1 araddr", false,-1, 31,0);
        tracep->declBit(c+693,"top arbiter_1 arvalid", false,-1);
        tracep->declBit(c+694,"top arbiter_1 arready", false,-1);
        tracep->declBus(c+695,"top arbiter_1 arburst", false,-1, 1,0);
        tracep->declBus(c+696,"top arbiter_1 arlen", false,-1, 7,0);
        tracep->declBus(c+697,"top arbiter_1 arsize", false,-1, 2,0);
        tracep->declQuad(c+698,"top arbiter_1 rdata", false,-1, 63,0);
        tracep->declBus(c+700,"top arbiter_1 rresp", false,-1, 1,0);
        tracep->declBit(c+701,"top arbiter_1 rready", false,-1);
        tracep->declBit(c+702,"top arbiter_1 rvalid", false,-1);
        tracep->declBit(c+703,"top arbiter_1 rlast", false,-1);
        tracep->declBus(c+704,"top arbiter_1 awaddr", false,-1, 31,0);
        tracep->declBit(c+705,"top arbiter_1 awready", false,-1);
        tracep->declBit(c+706,"top arbiter_1 awvalid", false,-1);
        tracep->declBus(c+707,"top arbiter_1 awburst", false,-1, 1,0);
        tracep->declBus(c+708,"top arbiter_1 awlen", false,-1, 7,0);
        tracep->declBit(c+709,"top arbiter_1 wlast", false,-1);
        tracep->declBit(c+710,"top arbiter_1 wready", false,-1);
        tracep->declBit(c+711,"top arbiter_1 wvalid", false,-1);
        tracep->declQuad(c+712,"top arbiter_1 wdata", false,-1, 63,0);
        tracep->declBus(c+714,"top arbiter_1 wstrb", false,-1, 7,0);
        tracep->declBus(c+715,"top arbiter_1 bresp", false,-1, 1,0);
        tracep->declBit(c+716,"top arbiter_1 bvalid", false,-1);
        tracep->declBit(c+717,"top arbiter_1 bready", false,-1);
        tracep->declBit(c+724,"top arbiter_1 axi_full_s2_0 clk", false,-1);
        tracep->declBit(c+725,"top arbiter_1 axi_full_s2_0 rst", false,-1);
        tracep->declBus(c+758,"top arbiter_1 axi_full_s2_0 araddr", false,-1, 31,0);
        tracep->declBit(c+693,"top arbiter_1 axi_full_s2_0 arvalid", false,-1);
        tracep->declBus(c+695,"top arbiter_1 axi_full_s2_0 arburst", false,-1, 1,0);
        tracep->declBus(c+696,"top arbiter_1 axi_full_s2_0 arlen", false,-1, 7,0);
        tracep->declBus(c+697,"top arbiter_1 axi_full_s2_0 arsize", false,-1, 2,0);
        tracep->declBit(c+694,"top arbiter_1 axi_full_s2_0 arready", false,-1);
        tracep->declQuad(c+698,"top arbiter_1 axi_full_s2_0 rdata", false,-1, 63,0);
        tracep->declBus(c+700,"top arbiter_1 axi_full_s2_0 rresp", false,-1, 1,0);
        tracep->declBit(c+702,"top arbiter_1 axi_full_s2_0 rvalid", false,-1);
        tracep->declBit(c+703,"top arbiter_1 axi_full_s2_0 rlast", false,-1);
        tracep->declBit(c+701,"top arbiter_1 axi_full_s2_0 rready", false,-1);
        tracep->declBus(c+704,"top arbiter_1 axi_full_s2_0 awaddr", false,-1, 31,0);
        tracep->declBit(c+706,"top arbiter_1 axi_full_s2_0 awvalid", false,-1);
        tracep->declBus(c+707,"top arbiter_1 axi_full_s2_0 awburst", false,-1, 1,0);
        tracep->declBus(c+708,"top arbiter_1 axi_full_s2_0 awlen", false,-1, 7,0);
        tracep->declBit(c+705,"top arbiter_1 axi_full_s2_0 awready", false,-1);
        tracep->declQuad(c+712,"top arbiter_1 axi_full_s2_0 wdata", false,-1, 63,0);
        tracep->declBit(c+709,"top arbiter_1 axi_full_s2_0 wlast", false,-1);
        tracep->declBus(c+714,"top arbiter_1 axi_full_s2_0 wstrb", false,-1, 7,0);
        tracep->declBit(c+711,"top arbiter_1 axi_full_s2_0 wvalid", false,-1);
        tracep->declBit(c+710,"top arbiter_1 axi_full_s2_0 wready", false,-1);
        tracep->declBus(c+715,"top arbiter_1 axi_full_s2_0 bresp", false,-1, 1,0);
        tracep->declBit(c+716,"top arbiter_1 axi_full_s2_0 bvalid", false,-1);
        tracep->declBit(c+717,"top arbiter_1 axi_full_s2_0 bready", false,-1);
        tracep->declBus(c+718,"top arbiter_1 axi_full_s2_0 r_araddr", false,-1, 31,0);
        tracep->declBus(c+719,"top arbiter_1 axi_full_s2_0 c_arlen", false,-1, 7,0);
        tracep->declBus(c+816,"top arbiter_1 axi_full_s2_0 c_awlen", false,-1, 7,0);
        tracep->declBus(c+720,"top arbiter_1 axi_full_s2_0 r_awaddr", false,-1, 31,0);
        tracep->declBit(c+721,"top arbiter_1 axi_full_s2_0 testwrite", false,-1);
        tracep->declBus(c+790,"top arbiter_1 axi_full_s2_0 READ_IDLE", false,-1, 2,0);
        tracep->declBus(c+791,"top arbiter_1 axi_full_s2_0 READ_ARVALID", false,-1, 2,0);
        tracep->declBus(c+792,"top arbiter_1 axi_full_s2_0 READ_TRANS", false,-1, 2,0);
        tracep->declBus(c+769,"top arbiter_1 axi_full_s2_0 READ_FINISH", false,-1, 2,0);
        tracep->declBus(c+722,"top arbiter_1 axi_full_s2_0 state", false,-1, 2,0);
        tracep->declBus(c+723,"top arbiter_1 axi_full_s2_0 write_state", false,-1, 2,0);
        tracep->declBus(c+790,"top arbiter_1 axi_full_s2_0 WRITE_IDLE", false,-1, 2,0);
        tracep->declBus(c+791,"top arbiter_1 axi_full_s2_0 WRITE_AW_VALID", false,-1, 2,0);
        tracep->declBus(c+792,"top arbiter_1 axi_full_s2_0 WRITE_W_VALID", false,-1, 2,0);
        tracep->declBus(c+769,"top arbiter_1 axi_full_s2_0 WRITE_FINISH", false,-1, 2,0);
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
        tracep->fullBit(oldp+10,(vlSelf->top__DOT__i0__DOT__icache0__DOT__arvalid));
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
        tracep->fullBit(oldp+17,(vlSelf->top__DOT__i0__DOT__icache0__DOT__rready));
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
        tracep->fullQData(oldp+61,(vlSelf->top__DOT__i0__DOT__dnpc_0),64);
        tracep->fullQData(oldp+63,(vlSelf->top__DOT__i0__DOT__rdata_u),64);
        tracep->fullWData(oldp+65,(vlSelf->top__DOT__i0__DOT____Vcellinp__mux4____pinNumber3),264);
        tracep->fullWData(oldp+74,(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__pair_list[0]),66);
        tracep->fullWData(oldp+77,(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__pair_list[1]),66);
        tracep->fullWData(oldp+80,(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__pair_list[2]),66);
        tracep->fullWData(oldp+83,(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__pair_list[3]),66);
        tracep->fullCData(oldp+86,(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__key_list[0]),2);
        tracep->fullCData(oldp+87,(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__key_list[1]),2);
        tracep->fullCData(oldp+88,(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__key_list[2]),2);
        tracep->fullCData(oldp+89,(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__key_list[3]),2);
        tracep->fullQData(oldp+90,(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+92,(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+94,(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+96,(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+98,(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+100,(vlSelf->top__DOT__i0__DOT__mux4__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+101,(vlSelf->top__DOT__i0__DOT____Vcellinp__mux5____pinNumber3),130);
        tracep->fullWData(oldp+106,(vlSelf->top__DOT__i0__DOT__mux5__DOT__i0__DOT__pair_list[0]),65);
        tracep->fullWData(oldp+109,(vlSelf->top__DOT__i0__DOT__mux5__DOT__i0__DOT__pair_list[1]),65);
        tracep->fullBit(oldp+112,(vlSelf->top__DOT__i0__DOT__mux5__DOT__i0__DOT__key_list[0]));
        tracep->fullBit(oldp+113,(vlSelf->top__DOT__i0__DOT__mux5__DOT__i0__DOT__key_list[1]));
        tracep->fullQData(oldp+114,(vlSelf->top__DOT__i0__DOT__mux5__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+116,(vlSelf->top__DOT__i0__DOT__mux5__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+118,(vlSelf->top__DOT__i0__DOT__mux5__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+120,(vlSelf->top__DOT__i0__DOT__mux5__DOT__i0__DOT__hit));
        tracep->fullCData(oldp+121,(vlSelf->top__DOT__i0__DOT__icache0__DOT__cache_state),3);
        tracep->fullCData(oldp+122,(vlSelf->top__DOT__i0__DOT__icache0__DOT__d_len),3);
        tracep->fullCData(oldp+123,(vlSelf->top__DOT__i0__DOT__icache0__DOT__state),3);
        tracep->fullIData(oldp+124,(vlSelf->top__DOT__i0__DOT__icache0__DOT__unnamedblk1__DOT__i),32);
        tracep->fullQData(oldp+125,(vlSelf->top__DOT__id_1__DOT__immi),64);
        tracep->fullQData(oldp+127,(vlSelf->top__DOT__id_1__DOT__immu),64);
        tracep->fullWData(oldp+129,(vlSelf->top__DOT__id_1__DOT____Vcellinp__mux0____pinNumber3),760);
        tracep->fullWData(oldp+153,(vlSelf->top__DOT__id_1__DOT__mux0__DOT__i0__DOT__pair_list[0]),76);
        tracep->fullWData(oldp+156,(vlSelf->top__DOT__id_1__DOT__mux0__DOT__i0__DOT__pair_list[1]),76);
        tracep->fullWData(oldp+159,(vlSelf->top__DOT__id_1__DOT__mux0__DOT__i0__DOT__pair_list[2]),76);
        tracep->fullWData(oldp+162,(vlSelf->top__DOT__id_1__DOT__mux0__DOT__i0__DOT__pair_list[3]),76);
        tracep->fullWData(oldp+165,(vlSelf->top__DOT__id_1__DOT__mux0__DOT__i0__DOT__pair_list[4]),76);
        tracep->fullWData(oldp+168,(vlSelf->top__DOT__id_1__DOT__mux0__DOT__i0__DOT__pair_list[5]),76);
        tracep->fullWData(oldp+171,(vlSelf->top__DOT__id_1__DOT__mux0__DOT__i0__DOT__pair_list[6]),76);
        tracep->fullWData(oldp+174,(vlSelf->top__DOT__id_1__DOT__mux0__DOT__i0__DOT__pair_list[7]),76);
        tracep->fullWData(oldp+177,(vlSelf->top__DOT__id_1__DOT__mux0__DOT__i0__DOT__pair_list[8]),76);
        tracep->fullWData(oldp+180,(vlSelf->top__DOT__id_1__DOT__mux0__DOT__i0__DOT__pair_list[9]),76);
        tracep->fullSData(oldp+183,(vlSelf->top__DOT__id_1__DOT__mux0__DOT__i0__DOT__key_list[0]),12);
        tracep->fullSData(oldp+184,(vlSelf->top__DOT__id_1__DOT__mux0__DOT__i0__DOT__key_list[1]),12);
        tracep->fullSData(oldp+185,(vlSelf->top__DOT__id_1__DOT__mux0__DOT__i0__DOT__key_list[2]),12);
        tracep->fullSData(oldp+186,(vlSelf->top__DOT__id_1__DOT__mux0__DOT__i0__DOT__key_list[3]),12);
        tracep->fullSData(oldp+187,(vlSelf->top__DOT__id_1__DOT__mux0__DOT__i0__DOT__key_list[4]),12);
        tracep->fullSData(oldp+188,(vlSelf->top__DOT__id_1__DOT__mux0__DOT__i0__DOT__key_list[5]),12);
        tracep->fullSData(oldp+189,(vlSelf->top__DOT__id_1__DOT__mux0__DOT__i0__DOT__key_list[6]),12);
        tracep->fullSData(oldp+190,(vlSelf->top__DOT__id_1__DOT__mux0__DOT__i0__DOT__key_list[7]),12);
        tracep->fullSData(oldp+191,(vlSelf->top__DOT__id_1__DOT__mux0__DOT__i0__DOT__key_list[8]),12);
        tracep->fullSData(oldp+192,(vlSelf->top__DOT__id_1__DOT__mux0__DOT__i0__DOT__key_list[9]),12);
        tracep->fullQData(oldp+193,(vlSelf->top__DOT__id_1__DOT__mux0__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+195,(vlSelf->top__DOT__id_1__DOT__mux0__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+197,(vlSelf->top__DOT__id_1__DOT__mux0__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+199,(vlSelf->top__DOT__id_1__DOT__mux0__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+201,(vlSelf->top__DOT__id_1__DOT__mux0__DOT__i0__DOT__data_list[4]),64);
        tracep->fullQData(oldp+203,(vlSelf->top__DOT__id_1__DOT__mux0__DOT__i0__DOT__data_list[5]),64);
        tracep->fullQData(oldp+205,(vlSelf->top__DOT__id_1__DOT__mux0__DOT__i0__DOT__data_list[6]),64);
        tracep->fullQData(oldp+207,(vlSelf->top__DOT__id_1__DOT__mux0__DOT__i0__DOT__data_list[7]),64);
        tracep->fullQData(oldp+209,(vlSelf->top__DOT__id_1__DOT__mux0__DOT__i0__DOT__data_list[8]),64);
        tracep->fullQData(oldp+211,(vlSelf->top__DOT__id_1__DOT__mux0__DOT__i0__DOT__data_list[9]),64);
        tracep->fullQData(oldp+213,(vlSelf->top__DOT__id_1__DOT__mux0__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+215,(vlSelf->top__DOT__id_1__DOT__mux0__DOT__i0__DOT__hit));
        tracep->fullBit(oldp+216,(vlSelf->top__DOT__control_1__DOT__addi));
        tracep->fullBit(oldp+217,(vlSelf->top__DOT__control_1__DOT__csrrw));
        tracep->fullBit(oldp+218,(vlSelf->top__DOT__control_1__DOT__andi));
        tracep->fullBit(oldp+219,(vlSelf->top__DOT__control_1__DOT__xori));
        tracep->fullBit(oldp+220,(vlSelf->top__DOT__control_1__DOT__ori));
        tracep->fullBit(oldp+221,(vlSelf->top__DOT__control_1__DOT__sll));
        tracep->fullBit(oldp+222,(vlSelf->top__DOT__control_1__DOT__srl));
        tracep->fullBit(oldp+223,(vlSelf->top__DOT__control_1__DOT__sra));
        tracep->fullBit(oldp+224,(vlSelf->top__DOT__control_1__DOT__sllw));
        tracep->fullBit(oldp+225,(vlSelf->top__DOT__control_1__DOT__srlw));
        tracep->fullBit(oldp+226,(vlSelf->top__DOT__control_1__DOT__sraw));
        tracep->fullBit(oldp+227,(vlSelf->top__DOT__control_1__DOT__addiw));
        tracep->fullBit(oldp+228,(vlSelf->top__DOT__control_1__DOT__slliw));
        tracep->fullBit(oldp+229,(vlSelf->top__DOT__control_1__DOT__srliw));
        tracep->fullBit(oldp+230,(vlSelf->top__DOT__control_1__DOT__sraiw));
        tracep->fullBit(oldp+231,((1U & ((IData)(vlSelf->top__DOT__op_d) 
                                         >> 1U))));
        tracep->fullBit(oldp+232,((1U & (IData)(vlSelf->top__DOT__op_d))));
        tracep->fullBit(oldp+233,((1U & ((IData)(vlSelf->top__DOT__op_d) 
                                         >> 2U))));
        tracep->fullBit(oldp+234,(vlSelf->top__DOT__control_1__DOT__jalr));
        tracep->fullBit(oldp+235,(vlSelf->top__DOT__control_1__DOT__sd));
        tracep->fullBit(oldp+236,(vlSelf->top__DOT__control_1__DOT__sh));
        tracep->fullBit(oldp+237,(vlSelf->top__DOT__control_1__DOT__sw));
        tracep->fullBit(oldp+238,(vlSelf->top__DOT__control_1__DOT__sb));
        tracep->fullBit(oldp+239,(vlSelf->top__DOT__control_1__DOT__lw));
        tracep->fullBit(oldp+240,(vlSelf->top__DOT__control_1__DOT__lwu));
        tracep->fullBit(oldp+241,(vlSelf->top__DOT__control_1__DOT__lh));
        tracep->fullBit(oldp+242,(vlSelf->top__DOT__control_1__DOT__lhu));
        tracep->fullBit(oldp+243,(vlSelf->top__DOT__control_1__DOT__lb));
        tracep->fullBit(oldp+244,(vlSelf->top__DOT__control_1__DOT__lbu));
        tracep->fullBit(oldp+245,(vlSelf->top__DOT__control_1__DOT__ld));
        tracep->fullBit(oldp+246,(vlSelf->top__DOT__control_1__DOT__addw));
        tracep->fullBit(oldp+247,(vlSelf->top__DOT__control_1__DOT__subw));
        tracep->fullBit(oldp+248,(vlSelf->top__DOT__control_1__DOT__mulw));
        tracep->fullBit(oldp+249,(vlSelf->top__DOT__control_1__DOT__divw));
        tracep->fullBit(oldp+250,(vlSelf->top__DOT__control_1__DOT__divuw));
        tracep->fullBit(oldp+251,(vlSelf->top__DOT__control_1__DOT__remw));
        tracep->fullBit(oldp+252,(vlSelf->top__DOT__control_1__DOT__remuw));
        tracep->fullBit(oldp+253,(vlSelf->top__DOT__control_1__DOT__divu));
        tracep->fullBit(oldp+254,(vlSelf->top__DOT__control_1__DOT__div));
        tracep->fullBit(oldp+255,(vlSelf->top__DOT__control_1__DOT__rem));
        tracep->fullBit(oldp+256,(vlSelf->top__DOT__control_1__DOT__remu));
        tracep->fullBit(oldp+257,(vlSelf->top__DOT__control_1__DOT__Add));
        tracep->fullBit(oldp+258,(vlSelf->top__DOT__control_1__DOT__Mul));
        tracep->fullBit(oldp+259,(vlSelf->top__DOT__control_1__DOT__And));
        tracep->fullBit(oldp+260,(vlSelf->top__DOT__control_1__DOT__Xor));
        tracep->fullBit(oldp+261,(vlSelf->top__DOT__control_1__DOT__Or));
        tracep->fullBit(oldp+262,(vlSelf->top__DOT__control_1__DOT__sltu));
        tracep->fullBit(oldp+263,(vlSelf->top__DOT__control_1__DOT__slt));
        tracep->fullBit(oldp+264,(vlSelf->top__DOT__control_1__DOT__sub));
        tracep->fullBit(oldp+265,(vlSelf->top__DOT__control_1__DOT__sltiu));
        tracep->fullBit(oldp+266,(vlSelf->top__DOT__control_1__DOT__srai));
        tracep->fullBit(oldp+267,(vlSelf->top__DOT__control_1__DOT__slli));
        tracep->fullBit(oldp+268,(vlSelf->top__DOT__control_1__DOT__srli));
        tracep->fullBit(oldp+269,(vlSelf->top__DOT__control_1__DOT__beq));
        tracep->fullBit(oldp+270,(vlSelf->top__DOT__control_1__DOT__bne));
        tracep->fullBit(oldp+271,(vlSelf->top__DOT__control_1__DOT__bge));
        tracep->fullBit(oldp+272,(vlSelf->top__DOT__control_1__DOT__bgeu));
        tracep->fullBit(oldp+273,(vlSelf->top__DOT__control_1__DOT__bltu));
        tracep->fullBit(oldp+274,(vlSelf->top__DOT__control_1__DOT__blt));
        tracep->fullQData(oldp+275,(vlSelf->top__DOT__exe_1__DOT__alu_src1),64);
        tracep->fullQData(oldp+277,(vlSelf->top__DOT__exe_1__DOT__alu_src2),64);
        tracep->fullQData(oldp+279,(vlSelf->top__DOT__exe_1__DOT__c_wdata),64);
        tracep->fullWData(oldp+281,(vlSelf->top__DOT__exe_1__DOT____Vcellinp__mux1____pinNumber3),272);
        tracep->fullWData(oldp+290,(vlSelf->top__DOT__exe_1__DOT__mux1__DOT__i0__DOT__pair_list[0]),68);
        tracep->fullWData(oldp+293,(vlSelf->top__DOT__exe_1__DOT__mux1__DOT__i0__DOT__pair_list[1]),68);
        tracep->fullWData(oldp+296,(vlSelf->top__DOT__exe_1__DOT__mux1__DOT__i0__DOT__pair_list[2]),68);
        tracep->fullWData(oldp+299,(vlSelf->top__DOT__exe_1__DOT__mux1__DOT__i0__DOT__pair_list[3]),68);
        tracep->fullCData(oldp+302,(vlSelf->top__DOT__exe_1__DOT__mux1__DOT__i0__DOT__key_list[0]),4);
        tracep->fullCData(oldp+303,(vlSelf->top__DOT__exe_1__DOT__mux1__DOT__i0__DOT__key_list[1]),4);
        tracep->fullCData(oldp+304,(vlSelf->top__DOT__exe_1__DOT__mux1__DOT__i0__DOT__key_list[2]),4);
        tracep->fullCData(oldp+305,(vlSelf->top__DOT__exe_1__DOT__mux1__DOT__i0__DOT__key_list[3]),4);
        tracep->fullQData(oldp+306,(vlSelf->top__DOT__exe_1__DOT__mux1__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+308,(vlSelf->top__DOT__exe_1__DOT__mux1__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+310,(vlSelf->top__DOT__exe_1__DOT__mux1__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+312,(vlSelf->top__DOT__exe_1__DOT__mux1__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+314,(vlSelf->top__DOT__exe_1__DOT__mux1__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+316,(vlSelf->top__DOT__exe_1__DOT__mux1__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+317,(vlSelf->top__DOT__exe_1__DOT____Vcellinp__mux2____pinNumber3),201);
        tracep->fullWData(oldp+324,(vlSelf->top__DOT__exe_1__DOT__mux2__DOT__i0__DOT__pair_list[0]),67);
        tracep->fullWData(oldp+327,(vlSelf->top__DOT__exe_1__DOT__mux2__DOT__i0__DOT__pair_list[1]),67);
        tracep->fullWData(oldp+330,(vlSelf->top__DOT__exe_1__DOT__mux2__DOT__i0__DOT__pair_list[2]),67);
        tracep->fullCData(oldp+333,(vlSelf->top__DOT__exe_1__DOT__mux2__DOT__i0__DOT__key_list[0]),3);
        tracep->fullCData(oldp+334,(vlSelf->top__DOT__exe_1__DOT__mux2__DOT__i0__DOT__key_list[1]),3);
        tracep->fullCData(oldp+335,(vlSelf->top__DOT__exe_1__DOT__mux2__DOT__i0__DOT__key_list[2]),3);
        tracep->fullQData(oldp+336,(vlSelf->top__DOT__exe_1__DOT__mux2__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+338,(vlSelf->top__DOT__exe_1__DOT__mux2__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+340,(vlSelf->top__DOT__exe_1__DOT__mux2__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+342,(vlSelf->top__DOT__exe_1__DOT__mux2__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+344,(vlSelf->top__DOT__exe_1__DOT__mux2__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+345,(vlSelf->top__DOT__exe_1__DOT____Vcellinp__mux3____pinNumber3),130);
        tracep->fullWData(oldp+350,(vlSelf->top__DOT__exe_1__DOT__mux3__DOT__i0__DOT__pair_list[0]),65);
        tracep->fullWData(oldp+353,(vlSelf->top__DOT__exe_1__DOT__mux3__DOT__i0__DOT__pair_list[1]),65);
        tracep->fullBit(oldp+356,(vlSelf->top__DOT__exe_1__DOT__mux3__DOT__i0__DOT__key_list[0]));
        tracep->fullBit(oldp+357,(vlSelf->top__DOT__exe_1__DOT__mux3__DOT__i0__DOT__key_list[1]));
        tracep->fullQData(oldp+358,(vlSelf->top__DOT__exe_1__DOT__mux3__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+360,(vlSelf->top__DOT__exe_1__DOT__mux3__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+362,(vlSelf->top__DOT__exe_1__DOT__mux3__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+364,(vlSelf->top__DOT__exe_1__DOT__mux3__DOT__i0__DOT__hit));
        tracep->fullQData(oldp+365,(vlSelf->top__DOT__exe_1__DOT__r0__DOT__rf[0]),64);
        tracep->fullQData(oldp+367,(vlSelf->top__DOT__exe_1__DOT__r0__DOT__rf[1]),64);
        tracep->fullQData(oldp+369,(vlSelf->top__DOT__exe_1__DOT__r0__DOT__rf[2]),64);
        tracep->fullQData(oldp+371,(vlSelf->top__DOT__exe_1__DOT__r0__DOT__rf[3]),64);
        tracep->fullQData(oldp+373,(vlSelf->top__DOT__exe_1__DOT__r0__DOT__rf[4]),64);
        tracep->fullQData(oldp+375,(vlSelf->top__DOT__exe_1__DOT__r0__DOT__rf[5]),64);
        tracep->fullQData(oldp+377,(vlSelf->top__DOT__exe_1__DOT__r0__DOT__rf[6]),64);
        tracep->fullQData(oldp+379,(vlSelf->top__DOT__exe_1__DOT__r0__DOT__rf[7]),64);
        tracep->fullQData(oldp+381,(vlSelf->top__DOT__exe_1__DOT__r0__DOT__rf[8]),64);
        tracep->fullQData(oldp+383,(vlSelf->top__DOT__exe_1__DOT__r0__DOT__rf[9]),64);
        tracep->fullQData(oldp+385,(vlSelf->top__DOT__exe_1__DOT__r0__DOT__rf[10]),64);
        tracep->fullQData(oldp+387,(vlSelf->top__DOT__exe_1__DOT__r0__DOT__rf[11]),64);
        tracep->fullQData(oldp+389,(vlSelf->top__DOT__exe_1__DOT__r0__DOT__rf[12]),64);
        tracep->fullQData(oldp+391,(vlSelf->top__DOT__exe_1__DOT__r0__DOT__rf[13]),64);
        tracep->fullQData(oldp+393,(vlSelf->top__DOT__exe_1__DOT__r0__DOT__rf[14]),64);
        tracep->fullQData(oldp+395,(vlSelf->top__DOT__exe_1__DOT__r0__DOT__rf[15]),64);
        tracep->fullQData(oldp+397,(vlSelf->top__DOT__exe_1__DOT__r0__DOT__rf[16]),64);
        tracep->fullQData(oldp+399,(vlSelf->top__DOT__exe_1__DOT__r0__DOT__rf[17]),64);
        tracep->fullQData(oldp+401,(vlSelf->top__DOT__exe_1__DOT__r0__DOT__rf[18]),64);
        tracep->fullQData(oldp+403,(vlSelf->top__DOT__exe_1__DOT__r0__DOT__rf[19]),64);
        tracep->fullQData(oldp+405,(vlSelf->top__DOT__exe_1__DOT__r0__DOT__rf[20]),64);
        tracep->fullQData(oldp+407,(vlSelf->top__DOT__exe_1__DOT__r0__DOT__rf[21]),64);
        tracep->fullQData(oldp+409,(vlSelf->top__DOT__exe_1__DOT__r0__DOT__rf[22]),64);
        tracep->fullQData(oldp+411,(vlSelf->top__DOT__exe_1__DOT__r0__DOT__rf[23]),64);
        tracep->fullQData(oldp+413,(vlSelf->top__DOT__exe_1__DOT__r0__DOT__rf[24]),64);
        tracep->fullQData(oldp+415,(vlSelf->top__DOT__exe_1__DOT__r0__DOT__rf[25]),64);
        tracep->fullQData(oldp+417,(vlSelf->top__DOT__exe_1__DOT__r0__DOT__rf[26]),64);
        tracep->fullQData(oldp+419,(vlSelf->top__DOT__exe_1__DOT__r0__DOT__rf[27]),64);
        tracep->fullQData(oldp+421,(vlSelf->top__DOT__exe_1__DOT__r0__DOT__rf[28]),64);
        tracep->fullQData(oldp+423,(vlSelf->top__DOT__exe_1__DOT__r0__DOT__rf[29]),64);
        tracep->fullQData(oldp+425,(vlSelf->top__DOT__exe_1__DOT__r0__DOT__rf[30]),64);
        tracep->fullQData(oldp+427,(vlSelf->top__DOT__exe_1__DOT__r0__DOT__rf[31]),64);
        tracep->fullQData(oldp+429,(vlSelf->top__DOT__exe_1__DOT__r0__DOT__csr[0]),64);
        tracep->fullQData(oldp+431,(vlSelf->top__DOT__exe_1__DOT__r0__DOT__csr[1]),64);
        tracep->fullQData(oldp+433,(vlSelf->top__DOT__exe_1__DOT__r0__DOT__csr[2]),64);
        tracep->fullQData(oldp+435,(vlSelf->top__DOT__exe_1__DOT__r0__DOT__csr[3]),64);
        tracep->fullIData(oldp+437,(vlSelf->top__DOT__exe_1__DOT__r0__DOT__i),32);
        tracep->fullBit(oldp+438,((1U & vlSelf->top__DOT__alu_control)));
        tracep->fullBit(oldp+439,((1U & (vlSelf->top__DOT__alu_control 
                                         >> 1U))));
        tracep->fullBit(oldp+440,((1U & (vlSelf->top__DOT__alu_control 
                                         >> 2U))));
        tracep->fullBit(oldp+441,((1U & (vlSelf->top__DOT__alu_control 
                                         >> 3U))));
        tracep->fullBit(oldp+442,((1U & (vlSelf->top__DOT__alu_control 
                                         >> 4U))));
        tracep->fullBit(oldp+443,((1U & (vlSelf->top__DOT__alu_control 
                                         >> 5U))));
        tracep->fullBit(oldp+444,((1U & (vlSelf->top__DOT__alu_control 
                                         >> 6U))));
        tracep->fullBit(oldp+445,((1U & (vlSelf->top__DOT__alu_control 
                                         >> 7U))));
        tracep->fullBit(oldp+446,((1U & (vlSelf->top__DOT__alu_control 
                                         >> 8U))));
        tracep->fullBit(oldp+447,((1U & (vlSelf->top__DOT__alu_control 
                                         >> 9U))));
        tracep->fullBit(oldp+448,((1U & (vlSelf->top__DOT__alu_control 
                                         >> 0xaU))));
        tracep->fullBit(oldp+449,((1U & (vlSelf->top__DOT__alu_control 
                                         >> 0xbU))));
        tracep->fullBit(oldp+450,((1U & (vlSelf->top__DOT__alu_control 
                                         >> 0xcU))));
        tracep->fullBit(oldp+451,((1U & (vlSelf->top__DOT__alu_control 
                                         >> 0xdU))));
        tracep->fullBit(oldp+452,((1U & (vlSelf->top__DOT__alu_control 
                                         >> 0xeU))));
        tracep->fullBit(oldp+453,((1U & (vlSelf->top__DOT__alu_control 
                                         >> 0xfU))));
        tracep->fullBit(oldp+454,((1U & (vlSelf->top__DOT__alu_control 
                                         >> 0x10U))));
        tracep->fullQData(oldp+455,(vlSelf->top__DOT__exe_1__DOT__alu2__DOT__slt_result),64);
        tracep->fullQData(oldp+457,((QData)((IData)(
                                                    (1U 
                                                     & (~ (IData)(vlSelf->top__DOT__exe_1__DOT__alu2__DOT__adder_cout)))))),64);
        tracep->fullQData(oldp+459,((vlSelf->top__DOT__exe_1__DOT__alu_src1 
                                     & vlSelf->top__DOT__exe_1__DOT__alu_src2)),64);
        tracep->fullQData(oldp+461,((~ vlSelf->top__DOT__exe_1__DOT__alu2__DOT__or_result)),64);
        tracep->fullQData(oldp+463,(vlSelf->top__DOT__exe_1__DOT__alu2__DOT__or_result),64);
        tracep->fullQData(oldp+465,((vlSelf->top__DOT__exe_1__DOT__alu_src1 
                                     ^ vlSelf->top__DOT__exe_1__DOT__alu_src2)),64);
        tracep->fullQData(oldp+467,((vlSelf->top__DOT__exe_1__DOT__alu_src1 
                                     << (0x3fU & (IData)(vlSelf->top__DOT__exe_1__DOT__alu_src2)))),64);
        tracep->fullQData(oldp+469,((vlSelf->top__DOT__exe_1__DOT__alu_src1 
                                     >> (0x3fU & (IData)(vlSelf->top__DOT__exe_1__DOT__alu_src2)))),64);
        tracep->fullQData(oldp+471,(VL_SHIFTRS_QQI(64,64,6, vlSelf->top__DOT__exe_1__DOT__alu_src1, 
                                                   (0x3fU 
                                                    & (IData)(vlSelf->top__DOT__exe_1__DOT__alu_src2)))),64);
        tracep->fullQData(oldp+473,((0xfffffffffffff000ULL 
                                     & vlSelf->top__DOT__exe_1__DOT__alu_src2)),64);
        tracep->fullQData(oldp+475,((vlSelf->top__DOT__exe_1__DOT__alu_src1 
                                     * vlSelf->top__DOT__exe_1__DOT__alu_src2)),64);
        tracep->fullQData(oldp+477,(VL_DIV_QQQ(64, vlSelf->top__DOT__exe_1__DOT__alu_src1, vlSelf->top__DOT__exe_1__DOT__alu_src2)),64);
        tracep->fullQData(oldp+479,(VL_DIVS_QQQ(64, vlSelf->top__DOT__exe_1__DOT__alu_src1, vlSelf->top__DOT__exe_1__DOT__alu_src2)),64);
        tracep->fullQData(oldp+481,(VL_MODDIV_QQQ(64, vlSelf->top__DOT__exe_1__DOT__alu_src1, vlSelf->top__DOT__exe_1__DOT__alu_src2)),64);
        tracep->fullQData(oldp+483,(VL_MODDIVS_QQQ(64, vlSelf->top__DOT__exe_1__DOT__alu_src1, vlSelf->top__DOT__exe_1__DOT__alu_src2)),64);
        tracep->fullQData(oldp+485,(vlSelf->top__DOT__exe_1__DOT__alu2__DOT__adder_b),64);
        tracep->fullBit(oldp+487,(vlSelf->top__DOT__exe_1__DOT__alu2__DOT__adder_cin));
        tracep->fullBit(oldp+488,(vlSelf->top__DOT__exe_1__DOT__alu2__DOT__adder_cout));
        tracep->fullQData(oldp+489,(vlSelf->top__DOT__exe_1__DOT__alu2__DOT__alu_result_uw),64);
        tracep->fullQData(oldp+491,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__exe_1__DOT__alu2__DOT__alu_result_uw 
                                                                             >> 0x1fU))))))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__exe_1__DOT__alu2__DOT__alu_result_uw)))),64);
        tracep->fullWData(oldp+493,(vlSelf->top__DOT__exe_1__DOT__alu2__DOT____Vcellinp__mux1____pinNumber3),130);
        tracep->fullWData(oldp+498,(vlSelf->top__DOT__exe_1__DOT__alu2__DOT__mux1__DOT__i0__DOT__pair_list[0]),65);
        tracep->fullWData(oldp+501,(vlSelf->top__DOT__exe_1__DOT__alu2__DOT__mux1__DOT__i0__DOT__pair_list[1]),65);
        tracep->fullBit(oldp+504,(vlSelf->top__DOT__exe_1__DOT__alu2__DOT__mux1__DOT__i0__DOT__key_list[0]));
        tracep->fullBit(oldp+505,(vlSelf->top__DOT__exe_1__DOT__alu2__DOT__mux1__DOT__i0__DOT__key_list[1]));
        tracep->fullQData(oldp+506,(vlSelf->top__DOT__exe_1__DOT__alu2__DOT__mux1__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+508,(vlSelf->top__DOT__exe_1__DOT__alu2__DOT__mux1__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+510,(vlSelf->top__DOT__exe_1__DOT__alu2__DOT__mux1__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+512,(vlSelf->top__DOT__exe_1__DOT__alu2__DOT__mux1__DOT__i0__DOT__hit));
        tracep->fullBit(oldp+513,((5U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__cache_state))));
        tracep->fullBit(oldp+514,(vlSelf->top__DOT__mem_2__DOT__use_cache));
        tracep->fullQData(oldp+515,(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld),64);
        tracep->fullQData(oldp+517,(((0x3fU >= (0x38U 
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
        tracep->fullQData(oldp+519,(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld_device),64);
        tracep->fullQData(oldp+521,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                                                                             >> 0x1fU))))))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))),64);
        tracep->fullQData(oldp+523,((QData)((IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld))),64);
        tracep->fullQData(oldp+525,((((- (QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                                                                     >> 0xfU)))))) 
                                      << 0x10U) | (QData)((IData)(
                                                                  (0xffffU 
                                                                   & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))))),64);
        tracep->fullQData(oldp+527,((QData)((IData)(
                                                    (0xffffU 
                                                     & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld))))),64);
        tracep->fullQData(oldp+529,((((- (QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->top__DOT__mem_2__DOT__r_rdata_ld 
                                                                     >> 7U)))))) 
                                      << 8U) | (QData)((IData)(
                                                               (0xffU 
                                                                & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld)))))),64);
        tracep->fullQData(oldp+531,((QData)((IData)(
                                                    (0xffU 
                                                     & (IData)(vlSelf->top__DOT__mem_2__DOT__r_rdata_ld))))),64);
        tracep->fullWData(oldp+533,(vlSelf->top__DOT__mem_2__DOT____Vcellinp__mux3____pinNumber3),497);
        tracep->fullWData(oldp+549,(vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list[0]),71);
        tracep->fullWData(oldp+552,(vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list[1]),71);
        tracep->fullWData(oldp+555,(vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list[2]),71);
        tracep->fullWData(oldp+558,(vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list[3]),71);
        tracep->fullWData(oldp+561,(vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list[4]),71);
        tracep->fullWData(oldp+564,(vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list[5]),71);
        tracep->fullWData(oldp+567,(vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__pair_list[6]),71);
        tracep->fullCData(oldp+570,(vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list[0]),7);
        tracep->fullCData(oldp+571,(vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list[1]),7);
        tracep->fullCData(oldp+572,(vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list[2]),7);
        tracep->fullCData(oldp+573,(vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list[3]),7);
        tracep->fullCData(oldp+574,(vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list[4]),7);
        tracep->fullCData(oldp+575,(vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list[5]),7);
        tracep->fullCData(oldp+576,(vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__key_list[6]),7);
        tracep->fullQData(oldp+577,(vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+579,(vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+581,(vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+583,(vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+585,(vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__data_list[4]),64);
        tracep->fullQData(oldp+587,(vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__data_list[5]),64);
        tracep->fullQData(oldp+589,(vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__data_list[6]),64);
        tracep->fullQData(oldp+591,(vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+593,(vlSelf->top__DOT__mem_2__DOT__mux3__DOT__i0__DOT__hit));
        tracep->fullIData(oldp+594,((IData)(vlSelf->top__DOT__exe_1__DOT__alu2__DOT__adder_result)),32);
        tracep->fullIData(oldp+595,(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__araddr),32);
        tracep->fullQData(oldp+596,(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                                    [(0x3fU & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__araddr 
                                               >> 6U))]
                                    [(7U & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__araddr 
                                            >> 3U))]),64);
        tracep->fullCData(oldp+598,((0x3fU & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__araddr)),6);
        tracep->fullCData(oldp+599,((0x3fU & (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__araddr 
                                              >> 6U))),6);
        tracep->fullIData(oldp+600,((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__araddr 
                                     >> 0xcU)),20);
        tracep->fullCData(oldp+601,((0x3fU & (IData)(
                                                     (vlSelf->top__DOT__exe_1__DOT__alu2__DOT__adder_result 
                                                      >> 6U)))),6);
        tracep->fullCData(oldp+602,((0x3fU & (IData)(vlSelf->top__DOT__exe_1__DOT__alu2__DOT__adder_result))),6);
        tracep->fullIData(oldp+603,((0xfffffU & (IData)(
                                                        (vlSelf->top__DOT__exe_1__DOT__alu2__DOT__adder_result 
                                                         >> 0xcU)))),20);
        tracep->fullCData(oldp+604,(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__cache_state),3);
        tracep->fullBit(oldp+605,(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rcache_en));
        tracep->fullBit(oldp+606,(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__wcache_en));
        tracep->fullBit(oldp+607,((2U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__cache_state))));
        tracep->fullBit(oldp+608,((3U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__write_state))));
        tracep->fullBit(oldp+609,((3U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__read_state))));
        tracep->fullBit(oldp+610,((3U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__cache_state))));
        tracep->fullCData(oldp+611,(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__d_r_len),3);
        tracep->fullCData(oldp+612,(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__d_w_len),3);
        tracep->fullCData(oldp+613,(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__read_state),3);
        tracep->fullCData(oldp+614,(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__write_state),3);
        tracep->fullCData(oldp+615,(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__c_awlen),8);
        tracep->fullQData(oldp+616,(((1U == (IData)(vlSelf->top__DOT__wmask))
                                      ? 0xffULL : (
                                                   (3U 
                                                    == (IData)(vlSelf->top__DOT__wmask))
                                                    ? 0xffffULL
                                                    : 
                                                   ((0xfU 
                                                     == (IData)(vlSelf->top__DOT__wmask))
                                                     ? 0xffffffffULL
                                                     : 0xffffffffffffffffULL)))),64);
        tracep->fullQData(oldp+618,(((0x3fU >= (0x38U 
                                                & ((IData)(vlSelf->top__DOT__exe_1__DOT__alu2__DOT__adder_result) 
                                                   << 3U)))
                                      ? (vlSelf->top__DOT__src2 
                                         << (0x38U 
                                             & ((IData)(vlSelf->top__DOT__exe_1__DOT__alu2__DOT__adder_result) 
                                                << 3U)))
                                      : 0ULL)),64);
        tracep->fullQData(oldp+620,(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__wmask_align),64);
        tracep->fullQData(oldp+622,(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__dataarray
                                    [0x38U][3U]),64);
        tracep->fullIData(oldp+624,(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__tagarray
                                    [0U]),22);
        tracep->fullIData(oldp+625,(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__unnamedblk1__DOT__i),32);
        tracep->fullIData(oldp+626,(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__unnamedblk2__DOT__i),32);
        tracep->fullIData(oldp+627,(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j),32);
        tracep->fullBit(oldp+628,(vlSelf->top__DOT__mem_2__DOT____Vcellinp__mem_read_write_0__ren));
        tracep->fullBit(oldp+629,(vlSelf->top__DOT__mem_2__DOT____Vcellinp__mem_read_write_0__wen));
        tracep->fullBit(oldp+630,((1U & (~ (IData)(vlSelf->top__DOT__mem_2__DOT__use_cache)))));
        tracep->fullBit(oldp+631,(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__rvalid));
        tracep->fullBit(oldp+632,(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__rready));
        tracep->fullBit(oldp+633,((0U == (IData)(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__axi_full_s2_1__DOT__state))));
        tracep->fullBit(oldp+634,(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__arvalid));
        tracep->fullBit(oldp+635,((1U == (IData)(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__axi_full_s2_1__DOT__c_arlen))));
        tracep->fullCData(oldp+636,(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__d_r_len),3);
        tracep->fullCData(oldp+637,(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__d_w_len),3);
        tracep->fullCData(oldp+638,(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__rresp),2);
        tracep->fullQData(oldp+639,(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__rdata_axi),64);
        tracep->fullCData(oldp+641,(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__read_state),3);
        tracep->fullBit(oldp+642,((3U == (IData)(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__read_state))));
        tracep->fullBit(oldp+643,((3U == (IData)(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__write_state))));
        tracep->fullCData(oldp+644,(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__write_state),3);
        tracep->fullBit(oldp+645,((0U == (IData)(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__axi_full_s2_1__DOT__write_state))));
        tracep->fullBit(oldp+646,((1U == (IData)(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__c_awlen))));
        tracep->fullBit(oldp+647,(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__wready));
        tracep->fullCData(oldp+648,(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__bresp),2);
        tracep->fullBit(oldp+649,(((1U == (IData)(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__write_state)) 
                                   & (2U == (IData)(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__write_state)))));
        tracep->fullBit(oldp+650,((2U == (IData)(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__axi_full_s2_1__DOT__write_state))));
        tracep->fullBit(oldp+651,(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__awvalid));
        tracep->fullBit(oldp+652,(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__wvalid));
        tracep->fullQData(oldp+653,(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__wdata),64);
        tracep->fullCData(oldp+655,(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__c_awlen),8);
        tracep->fullIData(oldp+656,(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__axi_full_s2_1__DOT__r_araddr),32);
        tracep->fullCData(oldp+657,(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__axi_full_s2_1__DOT__c_arlen),8);
        tracep->fullIData(oldp+658,(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__axi_full_s2_1__DOT__r_awaddr),32);
        tracep->fullBit(oldp+659,(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__axi_full_s2_1__DOT__testwrite));
        tracep->fullCData(oldp+660,(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__axi_full_s2_1__DOT__state),3);
        tracep->fullCData(oldp+661,(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__axi_full_s2_1__DOT__write_state),3);
        tracep->fullWData(oldp+662,(vlSelf->top__DOT__wb0__DOT____Vcellinp__mux3____pinNumber3),201);
        tracep->fullWData(oldp+669,(vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__pair_list[0]),67);
        tracep->fullWData(oldp+672,(vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__pair_list[1]),67);
        tracep->fullWData(oldp+675,(vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__pair_list[2]),67);
        tracep->fullCData(oldp+678,(vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__key_list[0]),3);
        tracep->fullCData(oldp+679,(vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__key_list[1]),3);
        tracep->fullCData(oldp+680,(vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__key_list[2]),3);
        tracep->fullQData(oldp+681,(vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+683,(vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+685,(vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+687,(vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+689,(vlSelf->top__DOT__wb0__DOT__mux3__DOT__i0__DOT__hit));
        tracep->fullCData(oldp+690,(vlSelf->top__DOT__arbiter_1__DOT__master_state),2);
        tracep->fullBit(oldp+691,((1U == (IData)(vlSelf->top__DOT__arbiter_1__DOT__master_state))));
        tracep->fullBit(oldp+692,((2U == (IData)(vlSelf->top__DOT__arbiter_1__DOT__master_state))));
        tracep->fullBit(oldp+693,(vlSelf->top__DOT__arbiter_1__DOT__arvalid));
        tracep->fullBit(oldp+694,((0U == (IData)(vlSelf->top__DOT__arbiter_1__DOT__axi_full_s2_0__DOT__state))));
        tracep->fullCData(oldp+695,(((1U == (IData)(vlSelf->top__DOT__arbiter_1__DOT__master_state))
                                      ? 1U : ((2U == (IData)(vlSelf->top__DOT__arbiter_1__DOT__master_state))
                                               ? 1U
                                               : 0U))),2);
        tracep->fullCData(oldp+696,(vlSelf->top__DOT__arbiter_1__DOT__arlen),8);
        tracep->fullCData(oldp+697,(((1U == (IData)(vlSelf->top__DOT__arbiter_1__DOT__master_state))
                                      ? 3U : ((2U == (IData)(vlSelf->top__DOT__arbiter_1__DOT__master_state))
                                               ? 3U
                                               : 0U))),3);
        tracep->fullQData(oldp+698,(vlSelf->top__DOT__arbiter_1__DOT__rdata),64);
        tracep->fullCData(oldp+700,(vlSelf->top__DOT__arbiter_1__DOT__rresp),2);
        tracep->fullBit(oldp+701,((1U & ((1U == (IData)(vlSelf->top__DOT__arbiter_1__DOT__master_state))
                                          ? (IData)(vlSelf->top__DOT__i0__DOT__icache0__DOT__rready)
                                          : ((2U == (IData)(vlSelf->top__DOT__arbiter_1__DOT__master_state))
                                              ? (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__rready)
                                              : 0U)))));
        tracep->fullBit(oldp+702,(vlSelf->top__DOT__arbiter_1__DOT__rvalid));
        tracep->fullBit(oldp+703,(vlSelf->top__DOT__arbiter_1__DOT__rlast));
        tracep->fullIData(oldp+704,(((2U == (IData)(vlSelf->top__DOT__arbiter_1__DOT__master_state))
                                      ? ((vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__tagarray
                                          [(0x3fU & 
                                            (vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__araddr 
                                             >> 6U))] 
                                          << 0xcU) 
                                         | (0xfc0U 
                                            & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__araddr))
                                      : 0U)),32);
        tracep->fullBit(oldp+705,((0U == (IData)(vlSelf->top__DOT__arbiter_1__DOT__axi_full_s2_0__DOT__write_state))));
        tracep->fullBit(oldp+706,(vlSelf->top__DOT__arbiter_1__DOT__awvalid));
        tracep->fullCData(oldp+707,(((2U == (IData)(vlSelf->top__DOT__arbiter_1__DOT__master_state))
                                      ? 1U : 0U)),2);
        tracep->fullCData(oldp+708,(((2U == (IData)(vlSelf->top__DOT__arbiter_1__DOT__master_state))
                                      ? 8U : 0U)),8);
        tracep->fullBit(oldp+709,(vlSelf->top__DOT__arbiter_1__DOT__wlast));
        tracep->fullBit(oldp+710,(vlSelf->top__DOT__arbiter_1__DOT__wready));
        tracep->fullBit(oldp+711,(vlSelf->top__DOT__arbiter_1__DOT__wvalid));
        tracep->fullQData(oldp+712,(((2U == (IData)(vlSelf->top__DOT__arbiter_1__DOT__master_state))
                                      ? vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__r_wdata
                                      : 0ULL)),64);
        tracep->fullCData(oldp+714,(((2U == (IData)(vlSelf->top__DOT__arbiter_1__DOT__master_state))
                                      ? 0xffU : 0U)),8);
        tracep->fullCData(oldp+715,(vlSelf->top__DOT__arbiter_1__DOT__bresp),2);
        tracep->fullBit(oldp+716,((2U == (IData)(vlSelf->top__DOT__arbiter_1__DOT__axi_full_s2_0__DOT__write_state))));
        tracep->fullBit(oldp+717,(((2U == (IData)(vlSelf->top__DOT__arbiter_1__DOT__master_state))
                                    ? (1U & ((1U == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__write_state)) 
                                             & (2U 
                                                == (IData)(vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__write_state))))
                                    : 0U)));
        tracep->fullIData(oldp+718,(vlSelf->top__DOT__arbiter_1__DOT__axi_full_s2_0__DOT__r_araddr),32);
        tracep->fullCData(oldp+719,(vlSelf->top__DOT__arbiter_1__DOT__axi_full_s2_0__DOT__c_arlen),8);
        tracep->fullIData(oldp+720,(vlSelf->top__DOT__arbiter_1__DOT__axi_full_s2_0__DOT__r_awaddr),32);
        tracep->fullBit(oldp+721,(vlSelf->top__DOT__arbiter_1__DOT__axi_full_s2_0__DOT__testwrite));
        tracep->fullCData(oldp+722,(vlSelf->top__DOT__arbiter_1__DOT__axi_full_s2_0__DOT__state),3);
        tracep->fullCData(oldp+723,(vlSelf->top__DOT__arbiter_1__DOT__axi_full_s2_0__DOT__write_state),3);
        tracep->fullBit(oldp+724,(vlSelf->clk));
        tracep->fullBit(oldp+725,(vlSelf->rst));
        tracep->fullIData(oldp+726,(vlSelf->inst),32);
        tracep->fullQData(oldp+727,(vlSelf->cpupc),64);
        tracep->fullBit(oldp+729,(vlSelf->ebreak));
        tracep->fullBit(oldp+730,(vlSelf->not_have));
        tracep->fullQData(oldp+731,(vlSelf->dnpc),64);
        tracep->fullBit(oldp+733,(vlSelf->inst_finish));
        tracep->fullBit(oldp+734,(vlSelf->mem_finish));
        tracep->fullBit(oldp+735,(vlSelf->inst_update));
        tracep->fullIData(oldp+736,((0xffffffc0U & (IData)(vlSelf->cpupc))),32);
        tracep->fullCData(oldp+737,((0x1fU & (vlSelf->inst 
                                              >> 0xfU))),5);
        tracep->fullCData(oldp+738,((0x1fU & (vlSelf->inst 
                                              >> 0x14U))),5);
        tracep->fullCData(oldp+739,((0x1fU & (vlSelf->inst 
                                              >> 7U))),5);
        tracep->fullCData(oldp+740,((0xffU & ((IData)(1U) 
                                              << (7U 
                                                  & (vlSelf->inst 
                                                     >> 0xcU))))),8);
        tracep->fullBit(oldp+741,((((((((((((((((((
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
        tracep->fullBit(oldp+742,((((IData)(vlSelf->top__DOT__control_1__DOT__csrrw) 
                                    | (IData)(vlSelf->top__DOT__control_1__DOT__csrrs)) 
                                   & (IData)(vlSelf->mem_finish))));
        tracep->fullBit(oldp+743,(((IData)(vlSelf->mem_finish) 
                                   & ((IData)(vlSelf->top__DOT__e_inst) 
                                      >> 1U))));
        tracep->fullIData(oldp+744,((IData)(vlSelf->cpupc)),32);
        tracep->fullCData(oldp+745,((0x3fU & (IData)(vlSelf->cpupc))),6);
        tracep->fullCData(oldp+746,((0x3fU & (IData)(
                                                     (vlSelf->cpupc 
                                                      >> 6U)))),6);
        tracep->fullIData(oldp+747,((0xfffffU & (IData)(
                                                        (vlSelf->cpupc 
                                                         >> 0xcU)))),20);
        tracep->fullCData(oldp+748,((0x7fU & vlSelf->inst)),7);
        tracep->fullCData(oldp+749,((7U & (vlSelf->inst 
                                           >> 0xcU))),3);
        tracep->fullCData(oldp+750,((vlSelf->inst >> 0x19U)),7);
        tracep->fullQData(oldp+751,((((- (QData)((IData)(
                                                         (vlSelf->inst 
                                                          >> 0x1fU)))) 
                                      << 0xcU) | (QData)((IData)(
                                                                 ((0xfe0U 
                                                                   & (vlSelf->inst 
                                                                      >> 0x14U)) 
                                                                  | (0x1fU 
                                                                     & (vlSelf->inst 
                                                                        >> 7U))))))),64);
        tracep->fullQData(oldp+753,((((- (QData)((IData)(
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
        tracep->fullQData(oldp+755,((((- (QData)((IData)(
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
        tracep->fullBit(oldp+757,((((IData)(vlSelf->inst_update) 
                                    & (~ (IData)(vlSelf->top__DOT__mem_2__DOT__use_cache))) 
                                   & ((((IData)(vlSelf->top__DOT__mem_2__DOT____Vcellinp__mem_read_write_0__ren) 
                                        & (3U == (IData)(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__read_state))) 
                                       | ((IData)(vlSelf->top__DOT__mem_2__DOT____Vcellinp__mem_read_write_0__wen) 
                                          & (3U == (IData)(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__write_state)))) 
                                      | ((~ (IData)(vlSelf->top__DOT__mem_2__DOT____Vcellinp__mem_read_write_0__ren)) 
                                         & (~ (IData)(vlSelf->top__DOT__mem_2__DOT____Vcellinp__mem_read_write_0__wen)))))));
        tracep->fullIData(oldp+758,(((1U == (IData)(vlSelf->top__DOT__arbiter_1__DOT__master_state))
                                      ? (0xffffffc0U 
                                         & (IData)(vlSelf->cpupc))
                                      : ((2U == (IData)(vlSelf->top__DOT__arbiter_1__DOT__master_state))
                                          ? (0xffffffc0U 
                                             & vlSelf->top__DOT__mem_2__DOT__dcache_0__DOT__araddr)
                                          : 0U))),32);
        tracep->fullIData(oldp+759,(vlSelf->top__DOT__araddr_1),32);
        tracep->fullBit(oldp+760,(vlSelf->top__DOT__arvalid_1));
        tracep->fullBit(oldp+761,(vlSelf->top__DOT__arready_1));
        tracep->fullQData(oldp+762,(vlSelf->top__DOT__rdata_1),64);
        tracep->fullCData(oldp+764,(vlSelf->top__DOT__rresp_1),2);
        tracep->fullBit(oldp+765,(vlSelf->top__DOT__rvalid_1));
        tracep->fullBit(oldp+766,(vlSelf->top__DOT__rready_1));
        tracep->fullCData(oldp+767,(1U),2);
        tracep->fullCData(oldp+768,(8U),8);
        tracep->fullCData(oldp+769,(3U),3);
        tracep->fullCData(oldp+770,(0xffU),8);
        tracep->fullIData(oldp+771,(4U),32);
        tracep->fullIData(oldp+772,(2U),32);
        tracep->fullIData(oldp+773,(0x40U),32);
        tracep->fullIData(oldp+774,(0U),32);
        tracep->fullQData(oldp+775,(0ULL),64);
        tracep->fullIData(oldp+777,(0x42U),32);
        tracep->fullIData(oldp+778,(4U),32);
        tracep->fullIData(oldp+779,(1U),32);
        tracep->fullIData(oldp+780,(0x41U),32);
        tracep->fullIData(oldp+781,(2U),32);
        tracep->fullQData(oldp+782,(0x80000000ULL),64);
        tracep->fullBit(oldp+784,(1U));
        tracep->fullIData(oldp+785,(0x1000U),32);
        tracep->fullIData(oldp+786,(0x15U),32);
        tracep->fullIData(oldp+787,(6U),32);
        tracep->fullIData(oldp+788,(0x14U),32);
        tracep->fullIData(oldp+789,(3U),32);
        tracep->fullCData(oldp+790,(0U),3);
        tracep->fullCData(oldp+791,(1U),3);
        tracep->fullCData(oldp+792,(2U),3);
        tracep->fullIData(oldp+793,(8U),32);
        tracep->fullIData(oldp+794,(0xaU),32);
        tracep->fullIData(oldp+795,(0xcU),32);
        tracep->fullIData(oldp+796,(0x4cU),32);
        tracep->fullIData(oldp+797,(0xaU),32);
        tracep->fullIData(oldp+798,(0x44U),32);
        tracep->fullIData(oldp+799,(0x43U),32);
        tracep->fullIData(oldp+800,(3U),32);
        tracep->fullIData(oldp+801,(5U),32);
        tracep->fullCData(oldp+802,(2U),2);
        tracep->fullQData(oldp+803,(0xbULL),64);
        tracep->fullCData(oldp+805,(3U),2);
        tracep->fullIData(oldp+806,(7U),32);
        tracep->fullIData(oldp+807,(0x47U),32);
        tracep->fullIData(oldp+808,(7U),32);
        tracep->fullBit(oldp+809,(0U));
        tracep->fullIData(oldp+810,(0x16U),32);
        tracep->fullIData(oldp+811,(0x82395e18U),32);
        tracep->fullCData(oldp+812,(0x18U),6);
        tracep->fullCData(oldp+813,(0x38U),6);
        tracep->fullCData(oldp+814,(1U),8);
        tracep->fullCData(oldp+815,(vlSelf->top__DOT__mem_2__DOT__mem_read_write_0__DOT__axi_full_s2_1__DOT__c_awlen),8);
        tracep->fullCData(oldp+816,(vlSelf->top__DOT__arbiter_1__DOT__axi_full_s2_0__DOT__c_awlen),8);
    }
}
