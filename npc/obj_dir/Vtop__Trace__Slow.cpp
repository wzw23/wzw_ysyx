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
        tracep->declBit(c+101,"clk", false,-1);
        tracep->declBit(c+102,"rst", false,-1);
        tracep->declBus(c+103,"inst", false,-1, 31,0);
        tracep->declBus(c+104,"cpupc", false,-1, 31,0);
        tracep->declBit(c+101,"top clk", false,-1);
        tracep->declBit(c+102,"top rst", false,-1);
        tracep->declBus(c+103,"top inst", false,-1, 31,0);
        tracep->declBus(c+104,"top cpupc", false,-1, 31,0);
        tracep->declBus(c+168,"top dnpc", false,-1, 31,0);
        tracep->declBus(c+105,"top rs1", false,-1, 4,0);
        tracep->declBus(c+106,"top rs2", false,-1, 4,0);
        tracep->declBus(c+107,"top rd", false,-1, 4,0);
        tracep->declQuad(c+1,"top imm", false,-1, 63,0);
        tracep->declBus(c+108,"top op", false,-1, 6,0);
        tracep->declBus(c+109,"top fu_7", false,-1, 6,0);
        tracep->declBus(c+110,"top fu_3", false,-1, 2,0);
        tracep->declBus(c+3,"top sel_alu_src1", false,-1, 2,0);
        tracep->declBus(c+4,"top sel_alu_src2", false,-1, 2,0);
        tracep->declBus(c+5,"top alu_control", false,-1, 11,0);
        tracep->declBit(c+6,"top rf_wen", false,-1);
        tracep->declBit(c+7,"top sel_rf_res", false,-1);
        tracep->declBit(c+8,"top data_ram_wen", false,-1);
        tracep->declQuad(c+9,"top alu_result", false,-1, 63,0);
        tracep->declQuad(c+11,"top ram_addr", false,-1, 63,0);
        tracep->declQuad(c+13,"top ram_data", false,-1, 63,0);
        tracep->declQuad(c+15,"top src1", false,-1, 63,0);
        tracep->declBus(c+17,"top wmask", false,-1, 7,0);
        tracep->declBit(c+101,"top i0 clk", false,-1);
        tracep->declBit(c+102,"top i0 rst", false,-1);
        tracep->declBus(c+168,"top i0 dnpc", false,-1, 31,0);
        tracep->declBus(c+104,"top i0 cpupc", false,-1, 31,0);
        tracep->declBus(c+169,"top i0 i0 WIDTH", false,-1, 31,0);
        tracep->declBus(c+170,"top i0 i0 RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+101,"top i0 i0 clk", false,-1);
        tracep->declBit(c+102,"top i0 i0 rst", false,-1);
        tracep->declBus(c+168,"top i0 i0 din", false,-1, 31,0);
        tracep->declBus(c+104,"top i0 i0 dout", false,-1, 31,0);
        tracep->declBit(c+171,"top i0 i0 wen", false,-1);
        tracep->declBus(c+103,"top id_0 inst", false,-1, 31,0);
        tracep->declBus(c+105,"top id_0 rs1", false,-1, 4,0);
        tracep->declBus(c+106,"top id_0 rs2", false,-1, 4,0);
        tracep->declBus(c+107,"top id_0 rd", false,-1, 4,0);
        tracep->declQuad(c+1,"top id_0 imm", false,-1, 63,0);
        tracep->declBus(c+108,"top id_0 op", false,-1, 6,0);
        tracep->declBus(c+109,"top id_0 fu_7", false,-1, 6,0);
        tracep->declBus(c+110,"top id_0 fu_3", false,-1, 2,0);
        tracep->declBus(c+108,"top control_0 op", false,-1, 6,0);
        tracep->declBus(c+109,"top control_0 fu_7", false,-1, 6,0);
        tracep->declBus(c+110,"top control_0 fu_3", false,-1, 2,0);
        tracep->declBus(c+3,"top control_0 sel_alu_src1", false,-1, 2,0);
        tracep->declBus(c+4,"top control_0 sel_alu_src2", false,-1, 2,0);
        tracep->declBus(c+5,"top control_0 alu_control", false,-1, 11,0);
        tracep->declBit(c+6,"top control_0 rf_wen", false,-1);
        tracep->declBit(c+7,"top control_0 sel_rf_res", false,-1);
        tracep->declBit(c+8,"top control_0 data_ram_wen", false,-1);
        tracep->declBus(c+17,"top control_0 wmask", false,-1, 7,0);
        tracep->declBit(c+111,"top control_0 op_0010011", false,-1);
        tracep->declBit(c+112,"top control_0 op_1110011", false,-1);
        tracep->declBit(c+113,"top control_0 op_0111011", false,-1);
        tracep->declBit(c+114,"top control_0 op_0110011", false,-1);
        tracep->declBit(c+115,"top control_0 op_1100011", false,-1);
        tracep->declBit(c+116,"top control_0 op_0000011", false,-1);
        tracep->declBit(c+117,"top control_0 op_0011011", false,-1);
        tracep->declBit(c+118,"top control_0 op_0100011", false,-1);
        tracep->declBit(c+119,"top control_0 fu_7_0000000", false,-1);
        tracep->declBit(c+120,"top control_0 fu_7_0100000", false,-1);
        tracep->declBit(c+121,"top control_0 fu_7_0000001", false,-1);
        tracep->declBit(c+122,"top control_0 fu_3_000", false,-1);
        tracep->declBit(c+123,"top control_0 fu_3_001", false,-1);
        tracep->declBit(c+124,"top control_0 fu_3_010", false,-1);
        tracep->declBit(c+125,"top control_0 fu_3_011", false,-1);
        tracep->declBit(c+126,"top control_0 fu_3_100", false,-1);
        tracep->declBit(c+127,"top control_0 fu_3_101", false,-1);
        tracep->declBit(c+128,"top control_0 fu_3_110", false,-1);
        tracep->declBit(c+129,"top control_0 fu_3_111", false,-1);
        tracep->declBit(c+18,"top control_0 addi", false,-1);
        tracep->declBit(c+130,"top control_0 csrrw", false,-1);
        tracep->declBit(c+131,"top control_0 csrrs", false,-1);
        tracep->declBit(c+132,"top control_0 andi", false,-1);
        tracep->declBit(c+133,"top control_0 xori", false,-1);
        tracep->declBit(c+134,"top control_0 ori", false,-1);
        tracep->declBit(c+135,"top control_0 sllw", false,-1);
        tracep->declBit(c+136,"top control_0 sll", false,-1);
        tracep->declBit(c+137,"top control_0 srlw", false,-1);
        tracep->declBit(c+138,"top control_0 sraw", false,-1);
        tracep->declBit(c+139,"top control_0 addiw", false,-1);
        tracep->declBit(c+19,"top control_0 slliw", false,-1);
        tracep->declBit(c+172,"top control_0 srliw", false,-1);
        tracep->declBit(c+20,"top control_0 sraiw", false,-1);
        tracep->declBit(c+173,"top control_0 auipc", false,-1);
        tracep->declBit(c+174,"top control_0 lui", false,-1);
        tracep->declBit(c+140,"top control_0 jal", false,-1);
        tracep->declBit(c+175,"top control_0 jalr", false,-1);
        tracep->declBit(c+21,"top control_0 sd", false,-1);
        tracep->declBit(c+22,"top control_0 sh", false,-1);
        tracep->declBit(c+23,"top control_0 sw", false,-1);
        tracep->declBit(c+24,"top control_0 sb", false,-1);
        tracep->declBit(c+7,"top control_0 lw", false,-1);
        tracep->declBit(c+141,"top control_0 lh", false,-1);
        tracep->declBit(c+142,"top control_0 lb", false,-1);
        tracep->declBit(c+143,"top control_0 lbu", false,-1);
        tracep->declBit(c+144,"top control_0 lwu", false,-1);
        tracep->declBit(c+145,"top control_0 lhu", false,-1);
        tracep->declBit(c+146,"top control_0 ld", false,-1);
        tracep->declBit(c+147,"top control_0 addw", false,-1);
        tracep->declBit(c+148,"top control_0 subw", false,-1);
        tracep->declBit(c+149,"top control_0 mulw", false,-1);
        tracep->declBit(c+25,"top control_0 divw", false,-1);
        tracep->declBit(c+176,"top control_0 divuw", false,-1);
        tracep->declBit(c+150,"top control_0 divu", false,-1);
        tracep->declBit(c+151,"top control_0 div", false,-1);
        tracep->declBit(c+152,"top control_0 rem", false,-1);
        tracep->declBit(c+26,"top control_0 remu", false,-1);
        tracep->declBit(c+177,"top control_0 remw", false,-1);
        tracep->declBit(c+27,"top control_0 Add", false,-1);
        tracep->declBit(c+153,"top control_0 Mul", false,-1);
        tracep->declBit(c+154,"top control_0 And", false,-1);
        tracep->declBit(c+155,"top control_0 Xor", false,-1);
        tracep->declBit(c+156,"top control_0 Or", false,-1);
        tracep->declBit(c+157,"top control_0 sltu", false,-1);
        tracep->declBit(c+158,"top control_0 slt", false,-1);
        tracep->declBit(c+159,"top control_0 sub", false,-1);
        tracep->declBit(c+160,"top control_0 sltiu", false,-1);
        tracep->declBit(c+161,"top control_0 srai", false,-1);
        tracep->declBit(c+162,"top control_0 beq", false,-1);
        tracep->declBit(c+163,"top control_0 bne", false,-1);
        tracep->declBit(c+164,"top control_0 bge", false,-1);
        tracep->declBit(c+165,"top control_0 bgeu", false,-1);
        tracep->declBit(c+166,"top control_0 bltu", false,-1);
        tracep->declBit(c+167,"top control_0 blt", false,-1);
        tracep->declBit(c+101,"top exe_0 clk", false,-1);
        tracep->declBit(c+102,"top exe_0 rst", false,-1);
        tracep->declQuad(c+1,"top exe_0 imm", false,-1, 63,0);
        tracep->declBus(c+105,"top exe_0 rs1", false,-1, 4,0);
        tracep->declBus(c+106,"top exe_0 rs2", false,-1, 4,0);
        tracep->declBus(c+107,"top exe_0 rd", false,-1, 4,0);
        tracep->declBus(c+3,"top exe_0 sel_alu_src1", false,-1, 2,0);
        tracep->declBus(c+4,"top exe_0 sel_alu_src2", false,-1, 2,0);
        tracep->declBus(c+5,"top exe_0 alu_control", false,-1, 11,0);
        tracep->declBit(c+6,"top exe_0 rf_wen", false,-1);
        tracep->declBit(c+7,"top exe_0 sel_rf_res", false,-1);
        tracep->declQuad(c+9,"top exe_0 alu_result", false,-1, 63,0);
        tracep->declQuad(c+11,"top exe_0 ram_addr", false,-1, 63,0);
        tracep->declQuad(c+15,"top exe_0 src1", false,-1, 63,0);
        tracep->declQuad(c+28,"top exe_0 src2", false,-1, 63,0);
        tracep->declQuad(c+30,"top exe_0 alu_src1", false,-1, 63,0);
        tracep->declQuad(c+32,"top exe_0 alu_src2", false,-1, 63,0);
        tracep->declQuad(c+34,"top exe_0 wdata", false,-1, 63,0);
        tracep->declBus(c+178,"top exe_0 r0 ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+179,"top exe_0 r0 DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+101,"top exe_0 r0 clk", false,-1);
        tracep->declBit(c+102,"top exe_0 r0 rst", false,-1);
        tracep->declBit(c+6,"top exe_0 r0 wen", false,-1);
        tracep->declQuad(c+34,"top exe_0 r0 wdata", false,-1, 63,0);
        tracep->declBus(c+107,"top exe_0 r0 waddr", false,-1, 4,0);
        tracep->declBus(c+105,"top exe_0 r0 raddr1", false,-1, 4,0);
        tracep->declBus(c+106,"top exe_0 r0 raddr2", false,-1, 4,0);
        tracep->declQuad(c+15,"top exe_0 r0 rdata1", false,-1, 63,0);
        tracep->declQuad(c+28,"top exe_0 r0 rdata2", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+36+i*2,"top exe_0 r0 rf", true,(i+0), 63,0);}}
        tracep->declBus(c+100,"top exe_0 r0 i", false,-1, 31,0);
        tracep->declQuad(c+30,"top exe_0 alu2 alu_src1", false,-1, 63,0);
        tracep->declQuad(c+32,"top exe_0 alu2 alu_src2", false,-1, 63,0);
        tracep->declBus(c+5,"top exe_0 alu2 alu_control", false,-1, 11,0);
        tracep->declQuad(c+9,"top exe_0 alu2 alu_result", false,-1, 63,0);
        tracep->declQuad(c+11,"top exe_0 alu2 ram_addr", false,-1, 63,0);
        tracep->declBus(c+179,"top mem0 ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+179,"top mem0 DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+101,"top mem0 clk", false,-1);
        tracep->declBit(c+102,"top mem0 rst", false,-1);
        tracep->declQuad(c+11,"top mem0 r_raddr", false,-1, 63,0);
        tracep->declQuad(c+13,"top mem0 r_rdata", false,-1, 63,0);
        tracep->declQuad(c+11,"top mem0 r_waddr", false,-1, 63,0);
        tracep->declBus(c+17,"top mem0 r_mask", false,-1, 7,0);
        tracep->declBit(c+8,"top mem0 r_wen", false,-1);
        tracep->declQuad(c+15,"top mem0 r_wdata", false,-1, 63,0);
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
        tracep->fullQData(oldp+1,(vlSelf->top__DOT__imm),64);
        tracep->fullCData(oldp+3,((1U & (- (IData)((IData)(vlSelf->top__DOT__control_0__DOT__Add))))),3);
        tracep->fullCData(oldp+4,(vlSelf->top__DOT__sel_alu_src2),3);
        tracep->fullSData(oldp+5,(vlSelf->top__DOT__alu_control),12);
        tracep->fullBit(oldp+6,(vlSelf->top__DOT__rf_wen));
        tracep->fullBit(oldp+7,(vlSelf->top__DOT__control_0__DOT__lw));
        tracep->fullBit(oldp+8,(vlSelf->top__DOT__data_ram_wen));
        tracep->fullQData(oldp+9,(vlSelf->top__DOT__alu_result),64);
        tracep->fullQData(oldp+11,(vlSelf->top__DOT__ram_addr),64);
        tracep->fullQData(oldp+13,(vlSelf->top__DOT__ram_data),64);
        tracep->fullQData(oldp+15,(vlSelf->top__DOT__src1),64);
        tracep->fullCData(oldp+17,(vlSelf->top__DOT__wmask),8);
        tracep->fullBit(oldp+18,(vlSelf->top__DOT__control_0__DOT__addi));
        tracep->fullBit(oldp+19,(vlSelf->top__DOT__control_0__DOT__slliw));
        tracep->fullBit(oldp+20,(vlSelf->top__DOT__control_0__DOT__sraiw));
        tracep->fullBit(oldp+21,(vlSelf->top__DOT__control_0__DOT__sd));
        tracep->fullBit(oldp+22,(vlSelf->top__DOT__control_0__DOT__sh));
        tracep->fullBit(oldp+23,(vlSelf->top__DOT__control_0__DOT__sw));
        tracep->fullBit(oldp+24,(vlSelf->top__DOT__control_0__DOT__sb));
        tracep->fullBit(oldp+25,(vlSelf->top__DOT__control_0__DOT__divw));
        tracep->fullBit(oldp+26,(vlSelf->top__DOT__control_0__DOT__remu));
        tracep->fullBit(oldp+27,(vlSelf->top__DOT__control_0__DOT__Add));
        tracep->fullQData(oldp+28,(vlSelf->top__DOT__exe_0__DOT__src2),64);
        tracep->fullQData(oldp+30,(vlSelf->top__DOT__exe_0__DOT__alu_src1),64);
        tracep->fullQData(oldp+32,(vlSelf->top__DOT__exe_0__DOT__alu_src2),64);
        tracep->fullQData(oldp+34,(vlSelf->top__DOT__exe_0__DOT__wdata),64);
        tracep->fullQData(oldp+36,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[0]),64);
        tracep->fullQData(oldp+38,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[1]),64);
        tracep->fullQData(oldp+40,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[2]),64);
        tracep->fullQData(oldp+42,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[3]),64);
        tracep->fullQData(oldp+44,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[4]),64);
        tracep->fullQData(oldp+46,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[5]),64);
        tracep->fullQData(oldp+48,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[6]),64);
        tracep->fullQData(oldp+50,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[7]),64);
        tracep->fullQData(oldp+52,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[8]),64);
        tracep->fullQData(oldp+54,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[9]),64);
        tracep->fullQData(oldp+56,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[10]),64);
        tracep->fullQData(oldp+58,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[11]),64);
        tracep->fullQData(oldp+60,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[12]),64);
        tracep->fullQData(oldp+62,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[13]),64);
        tracep->fullQData(oldp+64,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[14]),64);
        tracep->fullQData(oldp+66,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[15]),64);
        tracep->fullQData(oldp+68,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[16]),64);
        tracep->fullQData(oldp+70,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[17]),64);
        tracep->fullQData(oldp+72,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[18]),64);
        tracep->fullQData(oldp+74,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[19]),64);
        tracep->fullQData(oldp+76,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[20]),64);
        tracep->fullQData(oldp+78,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[21]),64);
        tracep->fullQData(oldp+80,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[22]),64);
        tracep->fullQData(oldp+82,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[23]),64);
        tracep->fullQData(oldp+84,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[24]),64);
        tracep->fullQData(oldp+86,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[25]),64);
        tracep->fullQData(oldp+88,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[26]),64);
        tracep->fullQData(oldp+90,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[27]),64);
        tracep->fullQData(oldp+92,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[28]),64);
        tracep->fullQData(oldp+94,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[29]),64);
        tracep->fullQData(oldp+96,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[30]),64);
        tracep->fullQData(oldp+98,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__rf[31]),64);
        tracep->fullIData(oldp+100,(vlSelf->top__DOT__exe_0__DOT__r0__DOT__i),32);
        tracep->fullBit(oldp+101,(vlSelf->clk));
        tracep->fullBit(oldp+102,(vlSelf->rst));
        tracep->fullIData(oldp+103,(vlSelf->inst),32);
        tracep->fullIData(oldp+104,(vlSelf->cpupc),32);
        tracep->fullCData(oldp+105,((0x1fU & (vlSelf->inst 
                                              >> 0xfU))),5);
        tracep->fullCData(oldp+106,((0x1fU & (vlSelf->inst 
                                              >> 0x14U))),5);
        tracep->fullCData(oldp+107,((0x1fU & (vlSelf->inst 
                                              >> 7U))),5);
        tracep->fullCData(oldp+108,((0x7fU & vlSelf->inst)),7);
        tracep->fullCData(oldp+109,((vlSelf->inst >> 0x19U)),7);
        tracep->fullCData(oldp+110,((7U & (vlSelf->inst 
                                           >> 0xcU))),3);
        tracep->fullBit(oldp+111,((0x13U == (0x7fU 
                                             & vlSelf->inst))));
        tracep->fullBit(oldp+112,((0x73U == (0x7fU 
                                             & vlSelf->inst))));
        tracep->fullBit(oldp+113,((0x3bU == (0x7fU 
                                             & vlSelf->inst))));
        tracep->fullBit(oldp+114,((0x33U == (0x7fU 
                                             & vlSelf->inst))));
        tracep->fullBit(oldp+115,((0x63U == (0x7fU 
                                             & vlSelf->inst))));
        tracep->fullBit(oldp+116,((3U == (0x7fU & vlSelf->inst))));
        tracep->fullBit(oldp+117,((0x1bU == (0x7fU 
                                             & vlSelf->inst))));
        tracep->fullBit(oldp+118,((0x23U == (0x7fU 
                                             & vlSelf->inst))));
        tracep->fullBit(oldp+119,((0U == (vlSelf->inst 
                                          >> 0x19U))));
        tracep->fullBit(oldp+120,((0x20U == (vlSelf->inst 
                                             >> 0x19U))));
        tracep->fullBit(oldp+121,((1U == (vlSelf->inst 
                                          >> 0x19U))));
        tracep->fullBit(oldp+122,((0U == (7U & (vlSelf->inst 
                                                >> 0xcU)))));
        tracep->fullBit(oldp+123,((1U == (7U & (vlSelf->inst 
                                                >> 0xcU)))));
        tracep->fullBit(oldp+124,((2U == (7U & (vlSelf->inst 
                                                >> 0xcU)))));
        tracep->fullBit(oldp+125,((3U == (7U & (vlSelf->inst 
                                                >> 0xcU)))));
        tracep->fullBit(oldp+126,((4U == (7U & (vlSelf->inst 
                                                >> 0xcU)))));
        tracep->fullBit(oldp+127,((5U == (7U & (vlSelf->inst 
                                                >> 0xcU)))));
        tracep->fullBit(oldp+128,((6U == (7U & (vlSelf->inst 
                                                >> 0xcU)))));
        tracep->fullBit(oldp+129,((7U == (7U & (vlSelf->inst 
                                                >> 0xcU)))));
        tracep->fullBit(oldp+130,((IData)((0x1073U 
                                           == (0x707fU 
                                               & vlSelf->inst)))));
        tracep->fullBit(oldp+131,((IData)((0x2073U 
                                           == (0x707fU 
                                               & vlSelf->inst)))));
        tracep->fullBit(oldp+132,((IData)((0x7013U 
                                           == (0x707fU 
                                               & vlSelf->inst)))));
        tracep->fullBit(oldp+133,((IData)((0x4013U 
                                           == (0x707fU 
                                               & vlSelf->inst)))));
        tracep->fullBit(oldp+134,((IData)((0x6013U 
                                           == (0x707fU 
                                               & vlSelf->inst)))));
        tracep->fullBit(oldp+135,((IData)(((0x103bU 
                                            == (0x707fU 
                                                & vlSelf->inst)) 
                                           & (0U == 
                                              (vlSelf->inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+136,((IData)(((0x1033U 
                                            == (0x707fU 
                                                & vlSelf->inst)) 
                                           & (0U == 
                                              (vlSelf->inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+137,((IData)(((0x503bU 
                                            == (0x707fU 
                                                & vlSelf->inst)) 
                                           & (0U == 
                                              (vlSelf->inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+138,((IData)(((0x503bU 
                                            == (0x707fU 
                                                & vlSelf->inst)) 
                                           & (0x20U 
                                              == (vlSelf->inst 
                                                  >> 0x19U))))));
        tracep->fullBit(oldp+139,((IData)((0x1bU == 
                                           (0x707fU 
                                            & vlSelf->inst)))));
        tracep->fullBit(oldp+140,((0x6fU == (0x7fU 
                                             & vlSelf->inst))));
        tracep->fullBit(oldp+141,((IData)((0x1003U 
                                           == (0x707fU 
                                               & vlSelf->inst)))));
        tracep->fullBit(oldp+142,((IData)((3U == (0x707fU 
                                                  & vlSelf->inst)))));
        tracep->fullBit(oldp+143,((IData)((0x4003U 
                                           == (0x707fU 
                                               & vlSelf->inst)))));
        tracep->fullBit(oldp+144,((IData)((0x6003U 
                                           == (0x707fU 
                                               & vlSelf->inst)))));
        tracep->fullBit(oldp+145,((IData)((0x5003U 
                                           == (0x707fU 
                                               & vlSelf->inst)))));
        tracep->fullBit(oldp+146,((IData)((0x3003U 
                                           == (0x707fU 
                                               & vlSelf->inst)))));
        tracep->fullBit(oldp+147,((IData)(((0x3bU == 
                                            (0x707fU 
                                             & vlSelf->inst)) 
                                           & (0U == 
                                              (vlSelf->inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+148,((IData)(((0x3bU == 
                                            (0x707fU 
                                             & vlSelf->inst)) 
                                           & (0x20U 
                                              == (vlSelf->inst 
                                                  >> 0x19U))))));
        tracep->fullBit(oldp+149,((IData)(((0x3bU == 
                                            (0x707fU 
                                             & vlSelf->inst)) 
                                           & (1U == 
                                              (vlSelf->inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+150,((IData)(((0x5033U 
                                            == (0x707fU 
                                                & vlSelf->inst)) 
                                           & (1U == 
                                              (vlSelf->inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+151,((IData)(((0x4033U 
                                            == (0x707fU 
                                                & vlSelf->inst)) 
                                           & (1U == 
                                              (vlSelf->inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+152,((IData)(((0x6033U 
                                            == (0x707fU 
                                                & vlSelf->inst)) 
                                           & (1U == 
                                              (vlSelf->inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+153,((IData)(((0x33U == 
                                            (0x707fU 
                                             & vlSelf->inst)) 
                                           & (1U == 
                                              (vlSelf->inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+154,((IData)(((0x7033U 
                                            == (0x707fU 
                                                & vlSelf->inst)) 
                                           & (0U == 
                                              (vlSelf->inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+155,((IData)(((0x4033U 
                                            == (0x707fU 
                                                & vlSelf->inst)) 
                                           & (0U == 
                                              (vlSelf->inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+156,((IData)(((0x6033U 
                                            == (0x707fU 
                                                & vlSelf->inst)) 
                                           & (0U == 
                                              (vlSelf->inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+157,((IData)(((0x3033U 
                                            == (0x707fU 
                                                & vlSelf->inst)) 
                                           & (0U == 
                                              (vlSelf->inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+158,((IData)(((0x2033U 
                                            == (0x707fU 
                                                & vlSelf->inst)) 
                                           & (0U == 
                                              (vlSelf->inst 
                                               >> 0x19U))))));
        tracep->fullBit(oldp+159,((IData)(((0x33U == 
                                            (0x707fU 
                                             & vlSelf->inst)) 
                                           & (0x20U 
                                              == (vlSelf->inst 
                                                  >> 0x19U))))));
        tracep->fullBit(oldp+160,((IData)((0x3013U 
                                           == (0x707fU 
                                               & vlSelf->inst)))));
        tracep->fullBit(oldp+161,((IData)(((0x5013U 
                                            == (0x707fU 
                                                & vlSelf->inst)) 
                                           & (0x20U 
                                              == (vlSelf->inst 
                                                  >> 0x19U))))));
        tracep->fullBit(oldp+162,((IData)((0x63U == 
                                           (0x707fU 
                                            & vlSelf->inst)))));
        tracep->fullBit(oldp+163,((IData)((0x1063U 
                                           == (0x707fU 
                                               & vlSelf->inst)))));
        tracep->fullBit(oldp+164,((IData)((0x5063U 
                                           == (0x707fU 
                                               & vlSelf->inst)))));
        tracep->fullBit(oldp+165,((IData)((0x7063U 
                                           == (0x707fU 
                                               & vlSelf->inst)))));
        tracep->fullBit(oldp+166,((IData)((0x6063U 
                                           == (0x707fU 
                                               & vlSelf->inst)))));
        tracep->fullBit(oldp+167,((IData)((0x4063U 
                                           == (0x707fU 
                                               & vlSelf->inst)))));
        tracep->fullIData(oldp+168,(0x80000004U),32);
        tracep->fullIData(oldp+169,(0x20U),32);
        tracep->fullIData(oldp+170,(0x80000000U),32);
        tracep->fullBit(oldp+171,(1U));
        tracep->fullBit(oldp+172,(vlSelf->top__DOT__control_0__DOT__srliw));
        tracep->fullBit(oldp+173,(vlSelf->top__DOT__control_0__DOT__auipc));
        tracep->fullBit(oldp+174,(vlSelf->top__DOT__control_0__DOT__lui));
        tracep->fullBit(oldp+175,(vlSelf->top__DOT__control_0__DOT__jalr));
        tracep->fullBit(oldp+176,(vlSelf->top__DOT__control_0__DOT__divuw));
        tracep->fullBit(oldp+177,(vlSelf->top__DOT__control_0__DOT__remw));
        tracep->fullIData(oldp+178,(5U),32);
        tracep->fullIData(oldp+179,(0x40U),32);
    }
}
