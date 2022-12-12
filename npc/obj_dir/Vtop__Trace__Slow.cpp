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
        tracep->declBit(c+132,"clk", false,-1);
        tracep->declBit(c+133,"rst", false,-1);
        tracep->declBus(c+134,"inst", false,-1, 31,0);
        tracep->declBus(c+135,"out", false,-1, 31,0);
        tracep->declBit(c+132,"top clk", false,-1);
        tracep->declBit(c+133,"top rst", false,-1);
        tracep->declBus(c+134,"top inst", false,-1, 31,0);
        tracep->declBus(c+135,"top out", false,-1, 31,0);
        tracep->declBus(c+67,"top count_c", false,-1, 3,0);
        tracep->declBit(c+132,"top i0 clk", false,-1);
        tracep->declBit(c+133,"top i0 rst", false,-1);
        tracep->declBus(c+135,"top i0 out", false,-1, 31,0);
        tracep->declBus(c+136,"top i0 zhongjian", false,-1, 31,0);
        tracep->declBus(c+145,"top i0 i0 WIDTH", false,-1, 31,0);
        tracep->declBus(c+146,"top i0 i0 RESET_VAL", false,-1, 31,0);
        tracep->declBit(c+132,"top i0 i0 clk", false,-1);
        tracep->declBit(c+133,"top i0 i0 rst", false,-1);
        tracep->declBus(c+136,"top i0 i0 din", false,-1, 31,0);
        tracep->declBus(c+135,"top i0 i0 dout", false,-1, 31,0);
        tracep->declBit(c+147,"top i0 i0 wen", false,-1);
        tracep->declBit(c+132,"top de clk", false,-1);
        tracep->declBus(c+134,"top de inst", false,-1, 31,0);
        tracep->declBus(c+148,"top de Type_I", false,-1, 2,0);
        tracep->declBus(c+149,"top de Type_S", false,-1, 2,0);
        tracep->declBus(c+150,"top de Type_B", false,-1, 2,0);
        tracep->declBus(c+151,"top de Type_U", false,-1, 2,0);
        tracep->declBus(c+152,"top de Type_J", false,-1, 2,0);
        tracep->declBus(c+153,"top de None", false,-1, 2,0);
        tracep->declBit(c+137,"top de state", false,-1);
        tracep->declBus(c+138,"top de return_state", false,-1, 31,0);
        tracep->declBus(c+2,"top de Type", false,-1, 2,0);
        tracep->declBus(c+139,"top de one_zero", false,-1, 1,0);
        tracep->declBus(c+140,"top de six_two", false,-1, 4,0);
        tracep->declBus(c+141,"top de fth_twl", false,-1, 2,0);
        tracep->declBus(c+142,"top de rs1", false,-1, 4,0);
        tracep->declBus(c+143,"top de rs2", false,-1, 4,0);
        tracep->declQuad(c+3,"top de src1", false,-1, 63,0);
        tracep->declQuad(c+5,"top de src2", false,-1, 63,0);
        tracep->declQuad(c+7,"top de imm", false,-1, 63,0);
        tracep->declBus(c+144,"top de dest", false,-1, 4,0);
        tracep->declBus(c+9,"top de waddr", false,-1, 4,0);
        tracep->declQuad(c+10,"top de wdata", false,-1, 63,0);
        tracep->declQuad(c+12,"top de addidata", false,-1, 63,0);
        tracep->declBus(c+154,"top de r0 ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+155,"top de r0 DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+132,"top de r0 clk", false,-1);
        tracep->declBit(c+147,"top de r0 wen", false,-1);
        tracep->declQuad(c+10,"top de r0 wdata", false,-1, 63,0);
        tracep->declBus(c+9,"top de r0 waddr", false,-1, 4,0);
        tracep->declBus(c+142,"top de r0 raddr1", false,-1, 4,0);
        tracep->declBus(c+143,"top de r0 raddr2", false,-1, 4,0);
        tracep->declQuad(c+3,"top de r0 rdata1", false,-1, 63,0);
        tracep->declQuad(c+5,"top de r0 rdata2", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+68+i*2,"top de r0 rf", true,(i+0), 63,0);}}
        tracep->declBus(c+1,"top de r0 i", false,-1, 31,0);
        tracep->declBus(c+156,"top de m0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+157,"top de m0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+155,"top de m0 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+7,"top de m0 out", false,-1, 63,0);
        tracep->declBus(c+2,"top de m0 key", false,-1, 2,0);
        tracep->declQuad(c+158,"top de m0 default_out", false,-1, 63,0);
        tracep->declArray(c+14,"top de m0 lut", false,-1, 401,0);
        tracep->declBus(c+156,"top de m0 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+157,"top de m0 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+155,"top de m0 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+160,"top de m0 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+7,"top de m0 i0 out", false,-1, 63,0);
        tracep->declBus(c+2,"top de m0 i0 key", false,-1, 2,0);
        tracep->declQuad(c+158,"top de m0 i0 default_out", false,-1, 63,0);
        tracep->declArray(c+14,"top de m0 i0 lut", false,-1, 401,0);
        tracep->declBus(c+161,"top de m0 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<6; i++) {
                tracep->declArray(c+27+i*3,"top de m0 i0 pair_list", true,(i+0), 66,0);}}
        {int i; for (i=0; i<6; i++) {
                tracep->declBus(c+45+i*1,"top de m0 i0 key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<6; i++) {
                tracep->declQuad(c+51+i*2,"top de m0 i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+63,"top de m0 i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+65,"top de m0 i0 hit", false,-1);
        tracep->declBus(c+66,"top de m0 i0 i", false,-1, 31,0);
        tracep->declQuad(c+3,"top de addi a", false,-1, 63,0);
        tracep->declQuad(c+7,"top de addi b", false,-1, 63,0);
        tracep->declQuad(c+12,"top de addi out", false,-1, 63,0);
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
        tracep->fullCData(oldp+2,(vlSelf->top__DOT__de__DOT__Type),3);
        tracep->fullQData(oldp+3,(vlSelf->top__DOT__de__DOT__src1),64);
        tracep->fullQData(oldp+5,(vlSelf->top__DOT__de__DOT__src2),64);
        tracep->fullQData(oldp+7,(vlSelf->top__DOT__de__DOT__imm),64);
        tracep->fullCData(oldp+9,(vlSelf->top__DOT__de__DOT__waddr),5);
        tracep->fullQData(oldp+10,(vlSelf->top__DOT__de__DOT__wdata),64);
        tracep->fullQData(oldp+12,(vlSelf->top__DOT__de__DOT__addidata),64);
        tracep->fullWData(oldp+14,(vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4),402);
        tracep->fullWData(oldp+27,(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[0]),67);
        tracep->fullWData(oldp+30,(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[1]),67);
        tracep->fullWData(oldp+33,(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[2]),67);
        tracep->fullWData(oldp+36,(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[3]),67);
        tracep->fullWData(oldp+39,(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[4]),67);
        tracep->fullWData(oldp+42,(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[5]),67);
        tracep->fullCData(oldp+45,(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list[0]),3);
        tracep->fullCData(oldp+46,(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list[1]),3);
        tracep->fullCData(oldp+47,(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list[2]),3);
        tracep->fullCData(oldp+48,(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list[3]),3);
        tracep->fullCData(oldp+49,(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list[4]),3);
        tracep->fullCData(oldp+50,(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__key_list[5]),3);
        tracep->fullQData(oldp+51,(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+53,(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+55,(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+57,(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+59,(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list[4]),64);
        tracep->fullQData(oldp+61,(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__data_list[5]),64);
        tracep->fullQData(oldp+63,(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+65,(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__hit));
        tracep->fullIData(oldp+66,(vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__i),32);
        tracep->fullCData(oldp+67,(vlSelf->top__DOT__count_c),4);
        tracep->fullQData(oldp+68,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[0]),64);
        tracep->fullQData(oldp+70,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[1]),64);
        tracep->fullQData(oldp+72,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[2]),64);
        tracep->fullQData(oldp+74,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[3]),64);
        tracep->fullQData(oldp+76,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[4]),64);
        tracep->fullQData(oldp+78,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[5]),64);
        tracep->fullQData(oldp+80,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[6]),64);
        tracep->fullQData(oldp+82,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[7]),64);
        tracep->fullQData(oldp+84,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[8]),64);
        tracep->fullQData(oldp+86,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[9]),64);
        tracep->fullQData(oldp+88,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[10]),64);
        tracep->fullQData(oldp+90,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[11]),64);
        tracep->fullQData(oldp+92,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[12]),64);
        tracep->fullQData(oldp+94,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[13]),64);
        tracep->fullQData(oldp+96,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[14]),64);
        tracep->fullQData(oldp+98,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[15]),64);
        tracep->fullQData(oldp+100,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[16]),64);
        tracep->fullQData(oldp+102,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[17]),64);
        tracep->fullQData(oldp+104,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[18]),64);
        tracep->fullQData(oldp+106,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[19]),64);
        tracep->fullQData(oldp+108,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[20]),64);
        tracep->fullQData(oldp+110,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[21]),64);
        tracep->fullQData(oldp+112,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[22]),64);
        tracep->fullQData(oldp+114,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[23]),64);
        tracep->fullQData(oldp+116,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[24]),64);
        tracep->fullQData(oldp+118,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[25]),64);
        tracep->fullQData(oldp+120,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[26]),64);
        tracep->fullQData(oldp+122,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[27]),64);
        tracep->fullQData(oldp+124,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[28]),64);
        tracep->fullQData(oldp+126,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[29]),64);
        tracep->fullQData(oldp+128,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[30]),64);
        tracep->fullQData(oldp+130,(vlSelf->top__DOT__de__DOT__r0__DOT__rf[31]),64);
        tracep->fullBit(oldp+132,(vlSelf->clk));
        tracep->fullBit(oldp+133,(vlSelf->rst));
        tracep->fullIData(oldp+134,(vlSelf->inst),32);
        tracep->fullIData(oldp+135,(vlSelf->out),32);
        tracep->fullIData(oldp+136,(((IData)(4U) + vlSelf->out)),32);
        tracep->fullBit(oldp+137,((0x100073U == vlSelf->inst)));
        tracep->fullIData(oldp+138,((0x100073U == vlSelf->inst)),32);
        tracep->fullCData(oldp+139,((3U & vlSelf->inst)),2);
        tracep->fullCData(oldp+140,((0x1fU & (vlSelf->inst 
                                              >> 2U))),5);
        tracep->fullCData(oldp+141,((7U & (vlSelf->inst 
                                           >> 0xcU))),3);
        tracep->fullCData(oldp+142,((0x1fU & (vlSelf->inst 
                                              >> 0xfU))),5);
        tracep->fullCData(oldp+143,((0x1fU & (vlSelf->inst 
                                              >> 0x14U))),5);
        tracep->fullCData(oldp+144,((0x1fU & (vlSelf->inst 
                                              >> 7U))),5);
        tracep->fullIData(oldp+145,(0x20U),32);
        tracep->fullIData(oldp+146,(0x80000000U),32);
        tracep->fullBit(oldp+147,(1U));
        tracep->fullCData(oldp+148,(1U),3);
        tracep->fullCData(oldp+149,(2U),3);
        tracep->fullCData(oldp+150,(3U),3);
        tracep->fullCData(oldp+151,(4U),3);
        tracep->fullCData(oldp+152,(5U),3);
        tracep->fullCData(oldp+153,(7U),3);
        tracep->fullIData(oldp+154,(5U),32);
        tracep->fullIData(oldp+155,(0x40U),32);
        tracep->fullIData(oldp+156,(6U),32);
        tracep->fullIData(oldp+157,(3U),32);
        tracep->fullQData(oldp+158,(0ULL),64);
        tracep->fullIData(oldp+160,(1U),32);
        tracep->fullIData(oldp+161,(0x43U),32);
    }
}
