// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void Vtop___024root___combo__TOP__16(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__16\n"); );
    // Variables
    VlWide<64>/*2047:0*/ __Vtemp1409;
    VlWide<66>/*2111:0*/ __Vtemp1410;
    VlWide<67>/*2143:0*/ __Vtemp1411;
    VlWide<69>/*2207:0*/ __Vtemp1412;
    VlWide<70>/*2239:0*/ __Vtemp1413;
    VlWide<72>/*2303:0*/ __Vtemp1414;
    VlWide<73>/*2335:0*/ __Vtemp1415;
    VlWide<75>/*2399:0*/ __Vtemp1416;
    VlWide<76>/*2431:0*/ __Vtemp1417;
    VlWide<78>/*2495:0*/ __Vtemp1418;
    VlWide<79>/*2527:0*/ __Vtemp1419;
    VlWide<81>/*2591:0*/ __Vtemp1420;
    VlWide<82>/*2623:0*/ __Vtemp1421;
    VlWide<84>/*2687:0*/ __Vtemp1422;
    VlWide<85>/*2719:0*/ __Vtemp1423;
    VlWide<87>/*2783:0*/ __Vtemp1424;
    VlWide<88>/*2815:0*/ __Vtemp1425;
    VlWide<90>/*2879:0*/ __Vtemp1426;
    VlWide<91>/*2911:0*/ __Vtemp1427;
    VlWide<93>/*2975:0*/ __Vtemp1428;
    VlWide<94>/*3007:0*/ __Vtemp1429;
    VlWide<96>/*3071:0*/ __Vtemp1430;
    VlWide<97>/*3103:0*/ __Vtemp1431;
    VlWide<99>/*3167:0*/ __Vtemp1432;
    VlWide<100>/*3199:0*/ __Vtemp1433;
    VlWide<102>/*3263:0*/ __Vtemp1434;
    VlWide<103>/*3295:0*/ __Vtemp1435;
    VlWide<105>/*3359:0*/ __Vtemp1436;
    VlWide<106>/*3391:0*/ __Vtemp1437;
    VlWide<108>/*3455:0*/ __Vtemp1438;
    VlWide<109>/*3487:0*/ __Vtemp1439;
    VlWide<111>/*3551:0*/ __Vtemp1440;
    VlWide<112>/*3583:0*/ __Vtemp1441;
    VlWide<114>/*3647:0*/ __Vtemp1442;
    VlWide<115>/*3679:0*/ __Vtemp1443;
    VlWide<117>/*3743:0*/ __Vtemp1444;
    VlWide<118>/*3775:0*/ __Vtemp1445;
    VlWide<120>/*3839:0*/ __Vtemp1446;
    VlWide<121>/*3871:0*/ __Vtemp1447;
    VlWide<123>/*3935:0*/ __Vtemp1448;
    VlWide<124>/*3967:0*/ __Vtemp1449;
    VlWide<126>/*4031:0*/ __Vtemp1450;
    VlWide<127>/*4063:0*/ __Vtemp1451;
    VlWide<129>/*4127:0*/ __Vtemp1452;
    VlWide<130>/*4159:0*/ __Vtemp1453;
    VlWide<132>/*4223:0*/ __Vtemp1454;
    VlWide<133>/*4255:0*/ __Vtemp1455;
    VlWide<135>/*4319:0*/ __Vtemp1456;
    VlWide<136>/*4351:0*/ __Vtemp1457;
    VlWide<138>/*4415:0*/ __Vtemp1458;
    VlWide<139>/*4447:0*/ __Vtemp1459;
    VlWide<141>/*4511:0*/ __Vtemp1460;
    VlWide<142>/*4543:0*/ __Vtemp1461;
    VlWide<144>/*4607:0*/ __Vtemp1462;
    VlWide<64>/*2047:0*/ __Vtemp1504;
    VlWide<66>/*2111:0*/ __Vtemp1505;
    VlWide<67>/*2143:0*/ __Vtemp1506;
    VlWide<69>/*2207:0*/ __Vtemp1507;
    VlWide<70>/*2239:0*/ __Vtemp1508;
    VlWide<72>/*2303:0*/ __Vtemp1509;
    VlWide<73>/*2335:0*/ __Vtemp1510;
    VlWide<75>/*2399:0*/ __Vtemp1511;
    VlWide<76>/*2431:0*/ __Vtemp1512;
    VlWide<78>/*2495:0*/ __Vtemp1513;
    VlWide<79>/*2527:0*/ __Vtemp1514;
    VlWide<81>/*2591:0*/ __Vtemp1515;
    VlWide<82>/*2623:0*/ __Vtemp1516;
    VlWide<84>/*2687:0*/ __Vtemp1517;
    VlWide<85>/*2719:0*/ __Vtemp1518;
    VlWide<87>/*2783:0*/ __Vtemp1519;
    VlWide<88>/*2815:0*/ __Vtemp1520;
    VlWide<90>/*2879:0*/ __Vtemp1521;
    VlWide<91>/*2911:0*/ __Vtemp1522;
    VlWide<93>/*2975:0*/ __Vtemp1523;
    VlWide<94>/*3007:0*/ __Vtemp1524;
    VlWide<96>/*3071:0*/ __Vtemp1525;
    VlWide<97>/*3103:0*/ __Vtemp1526;
    VlWide<99>/*3167:0*/ __Vtemp1527;
    VlWide<100>/*3199:0*/ __Vtemp1528;
    VlWide<102>/*3263:0*/ __Vtemp1529;
    VlWide<103>/*3295:0*/ __Vtemp1530;
    VlWide<105>/*3359:0*/ __Vtemp1531;
    VlWide<106>/*3391:0*/ __Vtemp1532;
    VlWide<108>/*3455:0*/ __Vtemp1533;
    VlWide<109>/*3487:0*/ __Vtemp1534;
    VlWide<111>/*3551:0*/ __Vtemp1535;
    VlWide<112>/*3583:0*/ __Vtemp1536;
    VlWide<114>/*3647:0*/ __Vtemp1537;
    VlWide<115>/*3679:0*/ __Vtemp1538;
    VlWide<117>/*3743:0*/ __Vtemp1539;
    VlWide<118>/*3775:0*/ __Vtemp1540;
    VlWide<120>/*3839:0*/ __Vtemp1541;
    VlWide<121>/*3871:0*/ __Vtemp1542;
    VlWide<123>/*3935:0*/ __Vtemp1543;
    VlWide<124>/*3967:0*/ __Vtemp1544;
    VlWide<126>/*4031:0*/ __Vtemp1545;
    VlWide<127>/*4063:0*/ __Vtemp1546;
    VlWide<129>/*4127:0*/ __Vtemp1547;
    VlWide<130>/*4159:0*/ __Vtemp1548;
    VlWide<132>/*4223:0*/ __Vtemp1549;
    VlWide<133>/*4255:0*/ __Vtemp1550;
    VlWide<135>/*4319:0*/ __Vtemp1551;
    VlWide<136>/*4351:0*/ __Vtemp1552;
    VlWide<138>/*4415:0*/ __Vtemp1553;
    VlWide<139>/*4447:0*/ __Vtemp1554;
    VlWide<141>/*4511:0*/ __Vtemp1555;
    VlWide<142>/*4543:0*/ __Vtemp1556;
    VlWide<144>/*4607:0*/ __Vtemp1557;
    // Body
    ++(vlSymsp->__Vcoverage[4133]);
    ++(vlSymsp->__Vcoverage[4133]);
    ++(vlSymsp->__Vcoverage[4133]);
    ++(vlSymsp->__Vcoverage[4133]);
    ++(vlSymsp->__Vcoverage[4133]);
    ++(vlSymsp->__Vcoverage[4133]);
    ++(vlSymsp->__Vcoverage[4133]);
    ++(vlSymsp->__Vcoverage[4133]);
    ++(vlSymsp->__Vcoverage[4133]);
    ++(vlSymsp->__Vcoverage[4133]);
    ++(vlSymsp->__Vcoverage[4133]);
    ++(vlSymsp->__Vcoverage[4133]);
    ++(vlSymsp->__Vcoverage[4133]);
    ++(vlSymsp->__Vcoverage[4133]);
    ++(vlSymsp->__Vcoverage[4133]);
    ++(vlSymsp->__Vcoverage[4133]);
    ++(vlSymsp->__Vcoverage[4133]);
    ++(vlSymsp->__Vcoverage[4133]);
    ++(vlSymsp->__Vcoverage[4133]);
    ++(vlSymsp->__Vcoverage[4133]);
    ++(vlSymsp->__Vcoverage[4133]);
    ++(vlSymsp->__Vcoverage[4133]);
    ++(vlSymsp->__Vcoverage[4133]);
    ++(vlSymsp->__Vcoverage[4133]);
    ++(vlSymsp->__Vcoverage[4133]);
    ++(vlSymsp->__Vcoverage[4133]);
    ++(vlSymsp->__Vcoverage[4133]);
    ++(vlSymsp->__Vcoverage[4133]);
    ++(vlSymsp->__Vcoverage[4133]);
    ++(vlSymsp->__Vcoverage[4133]);
    ++(vlSymsp->__Vcoverage[4133]);
    ++(vlSymsp->__Vcoverage[4133]);
    ++(vlSymsp->__Vcoverage[4133]);
    ++(vlSymsp->__Vcoverage[4133]);
    ++(vlSymsp->__Vcoverage[4133]);
    ++(vlSymsp->__Vcoverage[4133]);
    ++(vlSymsp->__Vcoverage[4133]);
    ++(vlSymsp->__Vcoverage[4133]);
    ++(vlSymsp->__Vcoverage[4133]);
    ++(vlSymsp->__Vcoverage[4133]);
    ++(vlSymsp->__Vcoverage[4133]);
    ++(vlSymsp->__Vcoverage[4133]);
    ++(vlSymsp->__Vcoverage[4135]);
    ++(vlSymsp->__Vcoverage[4136]);
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out 
        = ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__i = 0x2aU;
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit 
        = (vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
                          [8U]))) & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
              [8U]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
              [8U]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
                          [9U]))) & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
              [9U]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
              [9U]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
                          [0xaU]))) & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
              [0xaU]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
              [0xaU]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
                          [0xbU]))) & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
              [0xbU]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
              [0xbU]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
                          [0xcU]))) & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
              [0xcU]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
              [0xcU]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
                          [0xdU]))) & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
              [0xdU]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
              [0xdU]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
                          [0xeU]))) & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
              [0xeU]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
              [0xeU]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
                          [0xfU]))) & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
              [0xfU]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
              [0xfU]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
                          [0x10U]))) & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
              [0x10U]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
              [0x10U]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
                          [0x11U]))) & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
              [0x11U]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
              [0x11U]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
                          [0x12U]))) & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
              [0x12U]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
              [0x12U]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
                          [0x13U]))) & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
              [0x13U]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
              [0x13U]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
                          [0x14U]))) & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
              [0x14U]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
              [0x14U]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
                          [0x15U]))) & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
              [0x15U]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
              [0x15U]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
                          [0x16U]))) & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
              [0x16U]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
              [0x16U]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
                          [0x17U]))) & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
              [0x17U]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
              [0x17U]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
                          [0x18U]))) & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
              [0x18U]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
              [0x18U]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
                          [0x19U]))) & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
              [0x19U]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
              [0x19U]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
                          [0x1aU]))) & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
              [0x1aU]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
              [0x1aU]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
                          [0x1bU]))) & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
              [0x1bU]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
              [0x1bU]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
                          [0x1cU]))) & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
              [0x1cU]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
              [0x1cU]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
                          [0x1dU]))) & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
              [0x1dU]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
              [0x1dU]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
                          [0x1eU]))) & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
              [0x1eU]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
              [0x1eU]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
                          [0x1fU]))) & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
              [0x1fU]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
              [0x1fU]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
                          [0x20U]))) & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
              [0x20U]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
              [0x20U]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
                          [0x21U]))) & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
              [0x21U]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
              [0x21U]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
                          [0x22U]))) & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
              [0x22U]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
              [0x22U]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
                          [0x23U]))) & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
              [0x23U]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
              [0x23U]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
                          [0x24U]))) & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
              [0x24U]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
              [0x24U]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
                          [0x25U]))) & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
              [0x25U]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
              [0x25U]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
                          [0x26U]))) & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
              [0x26U]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
              [0x26U]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
                          [0x27U]))) & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
              [0x27U]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
              [0x27U]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
                          [0x28U]))) & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
              [0x28U]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
              [0x28U]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out) 
           | ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
                          [0x29U]))) & vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__data_list
              [0x29U]));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit) 
           | (vlSelf->inst == vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__key_list
              [0x29U]));
    vlSelf->top__DOT__de__DOT__waddr = ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit)
                                         ? (IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out)
                                         : 0U);
    vlSelf->top__DOT__de__DOT__rdata = vlSelf->top__DOT__de__DOT__r0__DOT__rf
        [vlSelf->top__DOT__de__DOT__raddr];
    vlSelf->top__DOT__de__DOT__src1 = vlSelf->top__DOT__de__DOT__r0__DOT__rf
        [(0x1fU & (vlSelf->inst >> 0xfU))];
    vlSelf->top__DOT__de__DOT__src2 = vlSelf->top__DOT__de__DOT__r0__DOT__rf
        [(0x1fU & (vlSelf->inst >> 0x14U))];
    if (((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit) 
         ^ (IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__hit))) {
        ++(vlSymsp->__Vcoverage[4132]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__hit 
            = vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__hit;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out) 
               ^ (IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[4127]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0x1eU & (IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__lut_out)) 
               | (1U & (IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out) 
               ^ (IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[4128]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0x1dU & (IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__lut_out)) 
               | (2U & (IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out) 
               ^ (IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[4129]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0x1bU & (IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__lut_out)) 
               | (4U & (IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out) 
               ^ (IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[4130]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0x17U & (IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__lut_out)) 
               | (8U & (IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out) 
                  ^ (IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[4131]);
        vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfU & (IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT____Vtogcov__lut_out)) 
               | (0x10U & (IData)(vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__lut_out)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__de__DOT__waddr) 
               ^ (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__waddr)))) {
        ++(vlSymsp->__Vcoverage[860]);
        vlSelf->top__DOT__de__DOT____Vtogcov__waddr 
            = ((0x1eU & (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__waddr)) 
               | (1U & (IData)(vlSelf->top__DOT__de__DOT__waddr)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__de__DOT__waddr) 
               ^ (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__waddr)))) {
        ++(vlSymsp->__Vcoverage[861]);
        vlSelf->top__DOT__de__DOT____Vtogcov__waddr 
            = ((0x1dU & (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__waddr)) 
               | (2U & (IData)(vlSelf->top__DOT__de__DOT__waddr)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__de__DOT__waddr) 
               ^ (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__waddr)))) {
        ++(vlSymsp->__Vcoverage[862]);
        vlSelf->top__DOT__de__DOT____Vtogcov__waddr 
            = ((0x1bU & (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__waddr)) 
               | (4U & (IData)(vlSelf->top__DOT__de__DOT__waddr)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__de__DOT__waddr) 
               ^ (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__waddr)))) {
        ++(vlSymsp->__Vcoverage[863]);
        vlSelf->top__DOT__de__DOT____Vtogcov__waddr 
            = ((0x17U & (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__waddr)) 
               | (8U & (IData)(vlSelf->top__DOT__de__DOT__waddr)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__de__DOT__waddr) 
                  ^ (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__waddr)))) {
        ++(vlSymsp->__Vcoverage[864]);
        vlSelf->top__DOT__de__DOT____Vtogcov__waddr 
            = ((0xfU & (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__waddr)) 
               | (0x10U & (IData)(vlSelf->top__DOT__de__DOT__waddr)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__de__DOT__rdata) 
               ^ vlSelf->top__DOT__de__DOT____Vtogcov__return_a0))) {
        ++(vlSymsp->__Vcoverage[401]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
            = ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__return_a0) 
               | (1U & (IData)(vlSelf->top__DOT__de__DOT__rdata)));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 1U)) ^ (vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
                                   >> 1U)))) {
        ++(vlSymsp->__Vcoverage[402]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
            = ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__return_a0) 
               | (2U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                                 >> 1U)) << 1U)));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 2U)) ^ (vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
                                   >> 2U)))) {
        ++(vlSymsp->__Vcoverage[403]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
            = ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__return_a0) 
               | (4U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                                 >> 2U)) << 2U)));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 3U)) ^ (vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
                                   >> 3U)))) {
        ++(vlSymsp->__Vcoverage[404]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
            = ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__return_a0) 
               | (8U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                                 >> 3U)) << 3U)));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 4U)) ^ (vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
                                   >> 4U)))) {
        ++(vlSymsp->__Vcoverage[405]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
            = ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__return_a0) 
               | (0x10U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                                    >> 4U)) << 4U)));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 5U)) ^ (vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
                                   >> 5U)))) {
        ++(vlSymsp->__Vcoverage[406]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
            = ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__return_a0) 
               | (0x20U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                                    >> 5U)) << 5U)));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 6U)) ^ (vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
                                   >> 6U)))) {
        ++(vlSymsp->__Vcoverage[407]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
            = ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__return_a0) 
               | (0x40U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                                    >> 6U)) << 6U)));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 7U)) ^ (vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
                                   >> 7U)))) {
        ++(vlSymsp->__Vcoverage[408]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
            = ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__return_a0) 
               | (0x80U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                                    >> 7U)) << 7U)));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 8U)) ^ (vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
                                   >> 8U)))) {
        ++(vlSymsp->__Vcoverage[409]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
            = ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__return_a0) 
               | (0x100U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                                     >> 8U)) << 8U)));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 9U)) ^ (vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
                                   >> 9U)))) {
        ++(vlSymsp->__Vcoverage[410]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
            = ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__return_a0) 
               | (0x200U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                                     >> 9U)) << 9U)));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0xaU)) ^ (vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
                                     >> 0xaU)))) {
        ++(vlSymsp->__Vcoverage[411]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
            = ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__return_a0) 
               | (0x400U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                                     >> 0xaU)) << 0xaU)));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0xbU)) ^ (vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
                                     >> 0xbU)))) {
        ++(vlSymsp->__Vcoverage[412]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
            = ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__return_a0) 
               | (0x800U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                                     >> 0xbU)) << 0xbU)));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0xcU)) ^ (vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
                                     >> 0xcU)))) {
        ++(vlSymsp->__Vcoverage[413]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
            = ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__return_a0) 
               | (0x1000U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                                      >> 0xcU)) << 0xcU)));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0xdU)) ^ (vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
                                     >> 0xdU)))) {
        ++(vlSymsp->__Vcoverage[414]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
            = ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__return_a0) 
               | (0x2000U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                                      >> 0xdU)) << 0xdU)));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0xeU)) ^ (vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
                                     >> 0xeU)))) {
        ++(vlSymsp->__Vcoverage[415]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
            = ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__return_a0) 
               | (0x4000U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                                      >> 0xeU)) << 0xeU)));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0xfU)) ^ (vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
                                     >> 0xfU)))) {
        ++(vlSymsp->__Vcoverage[416]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
            = ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__return_a0) 
               | (0x8000U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                                      >> 0xfU)) << 0xfU)));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x10U)) ^ (vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
                                      >> 0x10U)))) {
        ++(vlSymsp->__Vcoverage[417]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
            = ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__return_a0) 
               | (0x10000U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                                       >> 0x10U)) << 0x10U)));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x11U)) ^ (vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
                                      >> 0x11U)))) {
        ++(vlSymsp->__Vcoverage[418]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
            = ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__return_a0) 
               | (0x20000U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                                       >> 0x11U)) << 0x11U)));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x12U)) ^ (vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
                                      >> 0x12U)))) {
        ++(vlSymsp->__Vcoverage[419]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
            = ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__return_a0) 
               | (0x40000U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                                       >> 0x12U)) << 0x12U)));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x13U)) ^ (vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
                                      >> 0x13U)))) {
        ++(vlSymsp->__Vcoverage[420]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
            = ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__return_a0) 
               | (0x80000U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                                       >> 0x13U)) << 0x13U)));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x14U)) ^ (vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
                                      >> 0x14U)))) {
        ++(vlSymsp->__Vcoverage[421]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
            = ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__return_a0) 
               | (0x100000U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                                        >> 0x14U)) 
                               << 0x14U)));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x15U)) ^ (vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
                                      >> 0x15U)))) {
        ++(vlSymsp->__Vcoverage[422]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
            = ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__return_a0) 
               | (0x200000U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                                        >> 0x15U)) 
                               << 0x15U)));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x16U)) ^ (vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
                                      >> 0x16U)))) {
        ++(vlSymsp->__Vcoverage[423]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
            = ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__return_a0) 
               | (0x400000U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                                        >> 0x16U)) 
                               << 0x16U)));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x17U)) ^ (vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
                                      >> 0x17U)))) {
        ++(vlSymsp->__Vcoverage[424]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
            = ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__return_a0) 
               | (0x800000U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                                        >> 0x17U)) 
                               << 0x17U)));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x18U)) ^ (vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
                                      >> 0x18U)))) {
        ++(vlSymsp->__Vcoverage[425]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
            = ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__return_a0) 
               | (0x1000000U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                                         >> 0x18U)) 
                                << 0x18U)));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x19U)) ^ (vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
                                      >> 0x19U)))) {
        ++(vlSymsp->__Vcoverage[426]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
            = ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__return_a0) 
               | (0x2000000U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                                         >> 0x19U)) 
                                << 0x19U)));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x1aU)) ^ (vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
                                      >> 0x1aU)))) {
        ++(vlSymsp->__Vcoverage[427]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
            = ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__return_a0) 
               | (0x4000000U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                                         >> 0x1aU)) 
                                << 0x1aU)));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x1bU)) ^ (vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
                                      >> 0x1bU)))) {
        ++(vlSymsp->__Vcoverage[428]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
            = ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__return_a0) 
               | (0x8000000U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                                         >> 0x1bU)) 
                                << 0x1bU)));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x1cU)) ^ (vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
                                      >> 0x1cU)))) {
        ++(vlSymsp->__Vcoverage[429]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
            = ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__return_a0) 
               | (0x10000000U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                                          >> 0x1cU)) 
                                 << 0x1cU)));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x1dU)) ^ (vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
                                      >> 0x1dU)))) {
        ++(vlSymsp->__Vcoverage[430]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
            = ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__return_a0) 
               | (0x20000000U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                                          >> 0x1dU)) 
                                 << 0x1dU)));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x1eU)) ^ (vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
                                      >> 0x1eU)))) {
        ++(vlSymsp->__Vcoverage[431]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__return_a0) 
               | (0x40000000U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                                          >> 0x1eU)) 
                                 << 0x1eU)));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x1fU)) ^ (vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
                                      >> 0x1fU)))) {
        ++(vlSymsp->__Vcoverage[432]);
        vlSelf->top__DOT__de__DOT____Vtogcov__return_a0 
            = ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__return_a0) 
               | ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                           >> 0x1fU)) << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[700]);
        vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__rdata 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[701]);
        vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__rdata 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[702]);
        vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__rdata 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[703]);
        vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__rdata 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[704]);
        vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__rdata 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[705]);
        vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__rdata 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[706]);
        vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__rdata 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[707]);
        vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__rdata 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[708]);
        vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__rdata 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[709]);
        vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__rdata 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[710]);
        vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__rdata 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[711]);
        vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__rdata 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[712]);
        vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__rdata 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[713]);
        vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__rdata 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[714]);
        vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__rdata 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[715]);
        vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__rdata 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[716]);
        vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__rdata 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[717]);
        vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__rdata 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[718]);
        vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__rdata 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[719]);
        vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__rdata 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[720]);
        vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__rdata 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[721]);
        vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__rdata 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[722]);
        vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__rdata 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[723]);
        vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__rdata 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[724]);
        vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__rdata 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[725]);
        vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__rdata 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[726]);
        vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__rdata 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[727]);
        vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__rdata 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[728]);
        vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__rdata 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[729]);
        vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__rdata 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[730]);
        vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__rdata 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__rdata 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[731]);
        vlSelf->top__DOT__de__DOT____Vtogcov__rdata 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__rdata 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__de__DOT__src1) 
               ^ (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__src1)))) {
        ++(vlSymsp->__Vcoverage[572]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__de__DOT__src1)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[573]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[574]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[575]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[576]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[577]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[578]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[579]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[580]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[581]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[582]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[583]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[584]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[585]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[586]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[587]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[588]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[589]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[590]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[591]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[592]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[593]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[594]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[595]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[596]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[597]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[598]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[599]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[600]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[601]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[602]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[603]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[604]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[605]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[606]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[607]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[608]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[609]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[610]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[611]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[612]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[613]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[614]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[615]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[616]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[617]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[618]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[619]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[620]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[621]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[622]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[623]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[624]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[625]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[626]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[627]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[628]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[629]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[630]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[631]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[632]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[633]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[634]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src1 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src1 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[635]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src1 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src1 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__de__DOT__src2) 
               ^ (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__src2)))) {
        ++(vlSymsp->__Vcoverage[636]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__de__DOT__src2)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[637]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[638]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[639]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[640]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[641]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[642]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[643]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[644]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[645]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[646]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[647]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[648]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[649]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[650]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[651]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[652]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[653]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[654]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[655]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[656]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[657]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[658]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[659]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[660]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[661]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[662]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[663]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[664]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[665]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[666]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[667]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[668]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[669]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[670]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[671]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[672]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[673]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[674]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[675]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[676]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[677]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[678]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[679]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[680]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[681]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[682]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[683]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[684]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[685]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[686]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[687]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[688]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[689]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[690]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[691]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[692]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[693]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[694]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[695]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[696]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[697]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[698]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__src2 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__src2 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[699]);
        vlSelf->top__DOT__de__DOT____Vtogcov__src2 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__src2 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    vlSelf->top__DOT__de__DOT__srawd = VL_SHIFTRS_III(32,32,5, (IData)(vlSelf->top__DOT__de__DOT__src1), 
                                                      (0x1fU 
                                                       & (IData)(vlSelf->top__DOT__de__DOT__src2)));
    vlSelf->top__DOT__de__DOT____Vcellinp__m10____pinNumber4[0U] 
        = (IData)(vlSelf->top__DOT__de__DOT__src2);
    vlSelf->top__DOT__de__DOT____Vcellinp__m10____pinNumber4[1U] 
        = (IData)((vlSelf->top__DOT__de__DOT__src2 
                   >> 0x20U));
    vlSelf->top__DOT__de__DOT____Vcellinp__m10____pinNumber4[2U] 
        = vlSelf->top__DOT__de__DOT__sb;
    vlSelf->top__DOT__de__DOT____Vcellinp__m10____pinNumber4[3U] 
        = (IData)(vlSelf->top__DOT__de__DOT__src2);
    vlSelf->top__DOT__de__DOT____Vcellinp__m10____pinNumber4[4U] 
        = (IData)((vlSelf->top__DOT__de__DOT__src2 
                   >> 0x20U));
    vlSelf->top__DOT__de__DOT____Vcellinp__m10____pinNumber4[5U] 
        = vlSelf->top__DOT__de__DOT__sw;
    vlSelf->top__DOT__de__DOT____Vcellinp__m10____pinNumber4[6U] 
        = (IData)(vlSelf->top__DOT__de__DOT__src2);
    vlSelf->top__DOT__de__DOT____Vcellinp__m10____pinNumber4[7U] 
        = (IData)((vlSelf->top__DOT__de__DOT__src2 
                   >> 0x20U));
    vlSelf->top__DOT__de__DOT____Vcellinp__m10____pinNumber4[8U] 
        = vlSelf->top__DOT__de__DOT__sh;
    vlSelf->top__DOT__de__DOT____Vcellinp__m10____pinNumber4[9U] 
        = (IData)(vlSelf->top__DOT__de__DOT__src2);
    vlSelf->top__DOT__de__DOT____Vcellinp__m10____pinNumber4[0xaU] 
        = (IData)((vlSelf->top__DOT__de__DOT__src2 
                   >> 0x20U));
    vlSelf->top__DOT__de__DOT____Vcellinp__m10____pinNumber4[0xbU] 
        = vlSelf->top__DOT__de__DOT__sd;
    __Vtemp1409[0U] = vlSelf->top__DOT__de__DOT__div;
    __Vtemp1409[1U] = (IData)((QData)((IData)(vlSelf->top__DOT__de__DOT__src1)));
    __Vtemp1409[2U] = (IData)(((QData)((IData)(vlSelf->top__DOT__de__DOT__src1)) 
                               >> 0x20U));
    __Vtemp1409[3U] = vlSelf->top__DOT__de__DOT__divuw;
    __Vtemp1409[4U] = (IData)((QData)((IData)(vlSelf->top__DOT__de__DOT__src1)));
    __Vtemp1409[5U] = (IData)(((QData)((IData)(vlSelf->top__DOT__de__DOT__src1)) 
                               >> 0x20U));
    __Vtemp1409[6U] = vlSelf->top__DOT__de__DOT__divw;
    __Vtemp1409[7U] = (IData)(vlSelf->top__DOT__de__DOT__src1);
    __Vtemp1409[8U] = (IData)((vlSelf->top__DOT__de__DOT__src1 
                               >> 0x20U));
    __Vtemp1409[9U] = vlSelf->top__DOT__de__DOT__mulw;
    __Vtemp1409[0xaU] = (IData)(vlSelf->top__DOT__de__DOT__src1);
    __Vtemp1409[0xbU] = (IData)((vlSelf->top__DOT__de__DOT__src1 
                                 >> 0x20U));
    __Vtemp1409[0xcU] = vlSelf->top__DOT__de__DOT__subw;
    __Vtemp1409[0xdU] = (IData)(vlSelf->top__DOT__de__DOT__src1);
    __Vtemp1409[0xeU] = (IData)((vlSelf->top__DOT__de__DOT__src1 
                                 >> 0x20U));
    __Vtemp1409[0xfU] = vlSelf->top__DOT__de__DOT__addw;
    __Vtemp1409[0x10U] = (IData)(vlSelf->top__DOT__de__DOT__src1);
    __Vtemp1409[0x11U] = (IData)((vlSelf->top__DOT__de__DOT__src1 
                                  >> 0x20U));
    __Vtemp1409[0x12U] = vlSelf->top__DOT__de__DOT__ld;
    __Vtemp1409[0x13U] = (IData)(vlSelf->top__DOT__de__DOT__src1);
    __Vtemp1409[0x14U] = (IData)((vlSelf->top__DOT__de__DOT__src1 
                                  >> 0x20U));
    __Vtemp1409[0x15U] = vlSelf->top__DOT__de__DOT__lhu;
    __Vtemp1409[0x16U] = (IData)(vlSelf->top__DOT__de__DOT__src1);
    __Vtemp1409[0x17U] = (IData)((vlSelf->top__DOT__de__DOT__src1 
                                  >> 0x20U));
    __Vtemp1409[0x18U] = vlSelf->top__DOT__de__DOT__lwu;
    __Vtemp1409[0x19U] = (IData)(vlSelf->top__DOT__de__DOT__src1);
    __Vtemp1409[0x1aU] = (IData)((vlSelf->top__DOT__de__DOT__src1 
                                  >> 0x20U));
    __Vtemp1409[0x1bU] = vlSelf->top__DOT__de__DOT__lbu;
    __Vtemp1409[0x1cU] = (IData)(vlSelf->top__DOT__de__DOT__src1);
    __Vtemp1409[0x1dU] = (IData)((vlSelf->top__DOT__de__DOT__src1 
                                  >> 0x20U));
    __Vtemp1409[0x1eU] = vlSelf->top__DOT__de__DOT__lb;
    __Vtemp1409[0x1fU] = (IData)(vlSelf->top__DOT__de__DOT__src1);
    __Vtemp1409[0x20U] = (IData)((vlSelf->top__DOT__de__DOT__src1 
                                  >> 0x20U));
    __Vtemp1409[0x21U] = vlSelf->top__DOT__de__DOT__lh;
    __Vtemp1409[0x22U] = (IData)(vlSelf->top__DOT__de__DOT__src1);
    __Vtemp1409[0x23U] = (IData)((vlSelf->top__DOT__de__DOT__src1 
                                  >> 0x20U));
    __Vtemp1409[0x24U] = vlSelf->top__DOT__de__DOT__lw;
    __Vtemp1409[0x25U] = (IData)(vlSelf->top__DOT__de__DOT__src1);
    __Vtemp1409[0x26U] = (IData)((vlSelf->top__DOT__de__DOT__src1 
                                  >> 0x20U));
    __Vtemp1409[0x27U] = vlSelf->top__DOT__de__DOT__sb;
    __Vtemp1409[0x28U] = (IData)(vlSelf->top__DOT__de__DOT__src1);
    __Vtemp1409[0x29U] = (IData)((vlSelf->top__DOT__de__DOT__src1 
                                  >> 0x20U));
    __Vtemp1409[0x2aU] = vlSelf->top__DOT__de__DOT__sw;
    __Vtemp1409[0x2bU] = (IData)(vlSelf->top__DOT__de__DOT__src1);
    __Vtemp1409[0x2cU] = (IData)((vlSelf->top__DOT__de__DOT__src1 
                                  >> 0x20U));
    __Vtemp1409[0x2dU] = vlSelf->top__DOT__de__DOT__sh;
    __Vtemp1409[0x2eU] = (IData)(vlSelf->top__DOT__de__DOT__src1);
    __Vtemp1409[0x2fU] = (IData)((vlSelf->top__DOT__de__DOT__src1 
                                  >> 0x20U));
    __Vtemp1409[0x30U] = vlSelf->top__DOT__de__DOT__sd;
    __Vtemp1409[0x31U] = (IData)((QData)((IData)(vlSelf->cpupc)));
    __Vtemp1409[0x32U] = (IData)(((QData)((IData)(vlSelf->cpupc)) 
                                  >> 0x20U));
    __Vtemp1409[0x33U] = (0x17U | (0xffffff80U & vlSelf->inst));
    __Vtemp1409[0x34U] = (IData)(vlSelf->top__DOT__de__DOT__src1);
    __Vtemp1409[0x35U] = (IData)((vlSelf->top__DOT__de__DOT__src1 
                                  >> 0x20U));
    __Vtemp1409[0x36U] = vlSelf->top__DOT__de__DOT__ori;
    __Vtemp1409[0x37U] = (IData)(vlSelf->top__DOT__de__DOT__src1);
    __Vtemp1409[0x38U] = (IData)((vlSelf->top__DOT__de__DOT__src1 
                                  >> 0x20U));
    __Vtemp1409[0x39U] = vlSelf->top__DOT__de__DOT__xori;
    __Vtemp1409[0x3aU] = (IData)(vlSelf->top__DOT__de__DOT__src1);
    __Vtemp1409[0x3bU] = (IData)((vlSelf->top__DOT__de__DOT__src1 
                                  >> 0x20U));
    __Vtemp1409[0x3cU] = vlSelf->top__DOT__de__DOT__andi;
    __Vtemp1409[0x3dU] = (IData)(vlSelf->top__DOT__de__DOT__src1);
    __Vtemp1409[0x3eU] = (IData)((vlSelf->top__DOT__de__DOT__src1 
                                  >> 0x20U));
    __Vtemp1409[0x3fU] = vlSelf->top__DOT__de__DOT__addi;
    VL_CONCAT_WWQ(2112,2048,64, __Vtemp1410, __Vtemp1409, vlSelf->top__DOT__de__DOT__src1);
    VL_CONCAT_WWI(2144,2112,32, __Vtemp1411, __Vtemp1410, vlSelf->top__DOT__de__DOT__remw);
    VL_CONCAT_WWQ(2208,2144,64, __Vtemp1412, __Vtemp1411, (QData)((IData)(vlSelf->top__DOT__de__DOT__src1)));
    VL_CONCAT_WWI(2240,2208,32, __Vtemp1413, __Vtemp1412, vlSelf->top__DOT__de__DOT__sllw);
    VL_CONCAT_WWQ(2304,2240,64, __Vtemp1414, __Vtemp1413, vlSelf->top__DOT__de__DOT__src1);
    VL_CONCAT_WWI(2336,2304,32, __Vtemp1415, __Vtemp1414, vlSelf->top__DOT__de__DOT__sll);
    VL_CONCAT_WWQ(2400,2336,64, __Vtemp1416, __Vtemp1415, vlSelf->top__DOT__de__DOT__src1);
    VL_CONCAT_WWI(2432,2400,32, __Vtemp1417, __Vtemp1416, vlSelf->top__DOT__de__DOT__srlw);
    VL_CONCAT_WWQ(2496,2432,64, __Vtemp1418, __Vtemp1417, (QData)((IData)(vlSelf->top__DOT__de__DOT__src1)));
    VL_CONCAT_WWI(2528,2496,32, __Vtemp1419, __Vtemp1418, vlSelf->top__DOT__de__DOT__Add);
    VL_CONCAT_WWQ(2592,2528,64, __Vtemp1420, __Vtemp1419, vlSelf->top__DOT__de__DOT__src1);
    VL_CONCAT_WWI(2624,2592,32, __Vtemp1421, __Vtemp1420, vlSelf->top__DOT__de__DOT__Mul);
    VL_CONCAT_WWQ(2688,2624,64, __Vtemp1422, __Vtemp1421, vlSelf->top__DOT__de__DOT__src1);
    VL_CONCAT_WWI(2720,2688,32, __Vtemp1423, __Vtemp1422, vlSelf->top__DOT__de__DOT__And);
    VL_CONCAT_WWQ(2784,2720,64, __Vtemp1424, __Vtemp1423, vlSelf->top__DOT__de__DOT__src1);
    VL_CONCAT_WWI(2816,2784,32, __Vtemp1425, __Vtemp1424, vlSelf->top__DOT__de__DOT__Xor);
    VL_CONCAT_WWQ(2880,2816,64, __Vtemp1426, __Vtemp1425, vlSelf->top__DOT__de__DOT__src1);
    VL_CONCAT_WWI(2912,2880,32, __Vtemp1427, __Vtemp1426, vlSelf->top__DOT__de__DOT__Or);
    VL_CONCAT_WWQ(2976,2912,64, __Vtemp1428, __Vtemp1427, vlSelf->top__DOT__de__DOT__src1);
    VL_CONCAT_WWI(3008,2976,32, __Vtemp1429, __Vtemp1428, vlSelf->top__DOT__de__DOT__sltu);
    VL_CONCAT_WWQ(3072,3008,64, __Vtemp1430, __Vtemp1429, vlSelf->top__DOT__de__DOT__src2);
    VL_CONCAT_WWI(3104,3072,32, __Vtemp1431, __Vtemp1430, vlSelf->top__DOT__de__DOT__slt);
    VL_CONCAT_WWQ(3168,3104,64, __Vtemp1432, __Vtemp1431, vlSelf->top__DOT__de__DOT__src1);
    VL_CONCAT_WWI(3200,3168,32, __Vtemp1433, __Vtemp1432, vlSelf->top__DOT__de__DOT__sub);
    VL_CONCAT_WWQ(3264,3200,64, __Vtemp1434, __Vtemp1433, vlSelf->top__DOT__de__DOT__src1);
    VL_CONCAT_WWI(3296,3264,32, __Vtemp1435, __Vtemp1434, vlSelf->top__DOT__de__DOT__sltiu);
    VL_CONCAT_WWQ(3360,3296,64, __Vtemp1436, __Vtemp1435, vlSymsp->TOP__top__DOT__de__DOT__m7.out);
    VL_CONCAT_WWI(3392,3360,32, __Vtemp1437, __Vtemp1436, vlSelf->top__DOT__de__DOT__beq);
    VL_CONCAT_WWQ(3456,3392,64, __Vtemp1438, __Vtemp1437, vlSelf->top__DOT__de__DOT__src1);
    VL_CONCAT_WWI(3488,3456,32, __Vtemp1439, __Vtemp1438, vlSelf->top__DOT__de__DOT__bge);
    VL_CONCAT_WWQ(3552,3488,64, __Vtemp1440, __Vtemp1439, vlSelf->top__DOT__de__DOT__src1);
    VL_CONCAT_WWI(3584,3552,32, __Vtemp1441, __Vtemp1440, vlSelf->top__DOT__de__DOT__bgeu);
    VL_CONCAT_WWQ(3648,3584,64, __Vtemp1442, __Vtemp1441, vlSelf->top__DOT__de__DOT__src1);
    VL_CONCAT_WWI(3680,3648,32, __Vtemp1443, __Vtemp1442, vlSelf->top__DOT__de__DOT__bltu);
    VL_CONCAT_WWQ(3744,3680,64, __Vtemp1444, __Vtemp1443, vlSelf->top__DOT__de__DOT__src2);
    VL_CONCAT_WWI(3776,3744,32, __Vtemp1445, __Vtemp1444, vlSelf->top__DOT__de__DOT__blt);
    VL_CONCAT_WWQ(3840,3776,64, __Vtemp1446, __Vtemp1445, vlSelf->top__DOT__de__DOT__src1);
    VL_CONCAT_WWI(3872,3840,32, __Vtemp1447, __Vtemp1446, vlSelf->top__DOT__de__DOT__bne);
    VL_CONCAT_WWQ(3936,3872,64, __Vtemp1448, __Vtemp1447, vlSelf->top__DOT__de__DOT__src1);
    VL_CONCAT_WWI(3968,3936,32, __Vtemp1449, __Vtemp1448, vlSelf->top__DOT__de__DOT__addiw);
    VL_CONCAT_WWQ(4032,3968,64, __Vtemp1450, __Vtemp1449, vlSelf->top__DOT__de__DOT__src1);
    VL_CONCAT_WWI(4064,4032,32, __Vtemp1451, __Vtemp1450, vlSelf->top__DOT__de__DOT__slliw);
    VL_CONCAT_WWQ(4128,4064,64, __Vtemp1452, __Vtemp1451, vlSelf->top__DOT__de__DOT__src1);
    VL_CONCAT_WWI(4160,4128,32, __Vtemp1453, __Vtemp1452, vlSelf->top__DOT__de__DOT__srliw);
    VL_CONCAT_WWQ(4224,4160,64, __Vtemp1454, __Vtemp1453, (QData)((IData)(vlSelf->top__DOT__de__DOT__src1)));
    VL_CONCAT_WWI(4256,4224,32, __Vtemp1455, __Vtemp1454, vlSelf->top__DOT__de__DOT__sraiw);
    VL_CONCAT_WWQ(4320,4256,64, __Vtemp1456, __Vtemp1455, vlSelf->top__DOT__de__DOT__src1);
    VL_CONCAT_WWI(4352,4320,32, __Vtemp1457, __Vtemp1456, vlSelf->top__DOT__de__DOT__srai);
    VL_CONCAT_WWQ(4416,4352,64, __Vtemp1458, __Vtemp1457, vlSelf->top__DOT__de__DOT__src1);
    VL_CONCAT_WWI(4448,4416,32, __Vtemp1459, __Vtemp1458, vlSelf->top__DOT__de__DOT__slli);
    VL_CONCAT_WWQ(4512,4448,64, __Vtemp1460, __Vtemp1459, vlSelf->top__DOT__de__DOT__src1);
    VL_CONCAT_WWI(4544,4512,32, __Vtemp1461, __Vtemp1460, vlSelf->top__DOT__de__DOT__srli);
    VL_CONCAT_WWQ(4608,4544,64, __Vtemp1462, __Vtemp1461, vlSelf->top__DOT__de__DOT__src1);
    VL_ASSIGN_W(4608,vlSelf->top__DOT__de__DOT____Vcellinp__m4____pinNumber4, __Vtemp1462);
    __Vtemp1504[0U] = vlSelf->top__DOT__de__DOT__div;
    __Vtemp1504[1U] = (IData)((QData)((IData)(vlSelf->top__DOT__de__DOT__src2)));
    __Vtemp1504[2U] = (IData)(((QData)((IData)(vlSelf->top__DOT__de__DOT__src2)) 
                               >> 0x20U));
    __Vtemp1504[3U] = vlSelf->top__DOT__de__DOT__divuw;
    __Vtemp1504[4U] = (IData)((QData)((IData)(vlSelf->top__DOT__de__DOT__src2)));
    __Vtemp1504[5U] = (IData)(((QData)((IData)(vlSelf->top__DOT__de__DOT__src2)) 
                               >> 0x20U));
    __Vtemp1504[6U] = vlSelf->top__DOT__de__DOT__divw;
    __Vtemp1504[7U] = (IData)(vlSelf->top__DOT__de__DOT__src2);
    __Vtemp1504[8U] = (IData)((vlSelf->top__DOT__de__DOT__src2 
                               >> 0x20U));
    __Vtemp1504[9U] = vlSelf->top__DOT__de__DOT__mulw;
    __Vtemp1504[0xaU] = (IData)((- vlSelf->top__DOT__de__DOT__src2));
    __Vtemp1504[0xbU] = (IData)(((- vlSelf->top__DOT__de__DOT__src2) 
                                 >> 0x20U));
    __Vtemp1504[0xcU] = vlSelf->top__DOT__de__DOT__subw;
    __Vtemp1504[0xdU] = (IData)(vlSelf->top__DOT__de__DOT__src2);
    __Vtemp1504[0xeU] = (IData)((vlSelf->top__DOT__de__DOT__src2 
                                 >> 0x20U));
    __Vtemp1504[0xfU] = vlSelf->top__DOT__de__DOT__addw;
    __Vtemp1504[0x10U] = (IData)(vlSymsp->TOP__top__DOT__de__DOT__m7.out);
    __Vtemp1504[0x11U] = (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                  >> 0x20U));
    __Vtemp1504[0x12U] = vlSelf->top__DOT__de__DOT__ld;
    __Vtemp1504[0x13U] = (IData)(vlSymsp->TOP__top__DOT__de__DOT__m7.out);
    __Vtemp1504[0x14U] = (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                  >> 0x20U));
    __Vtemp1504[0x15U] = vlSelf->top__DOT__de__DOT__lhu;
    __Vtemp1504[0x16U] = (IData)(vlSymsp->TOP__top__DOT__de__DOT__m7.out);
    __Vtemp1504[0x17U] = (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                  >> 0x20U));
    __Vtemp1504[0x18U] = vlSelf->top__DOT__de__DOT__lwu;
    __Vtemp1504[0x19U] = (IData)(vlSymsp->TOP__top__DOT__de__DOT__m7.out);
    __Vtemp1504[0x1aU] = (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                  >> 0x20U));
    __Vtemp1504[0x1bU] = vlSelf->top__DOT__de__DOT__lbu;
    __Vtemp1504[0x1cU] = (IData)(vlSymsp->TOP__top__DOT__de__DOT__m7.out);
    __Vtemp1504[0x1dU] = (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                  >> 0x20U));
    __Vtemp1504[0x1eU] = vlSelf->top__DOT__de__DOT__lb;
    __Vtemp1504[0x1fU] = (IData)(vlSymsp->TOP__top__DOT__de__DOT__m7.out);
    __Vtemp1504[0x20U] = (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                  >> 0x20U));
    __Vtemp1504[0x21U] = vlSelf->top__DOT__de__DOT__lh;
    __Vtemp1504[0x22U] = (IData)(vlSymsp->TOP__top__DOT__de__DOT__m7.out);
    __Vtemp1504[0x23U] = (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                  >> 0x20U));
    __Vtemp1504[0x24U] = vlSelf->top__DOT__de__DOT__lw;
    __Vtemp1504[0x25U] = (IData)(vlSymsp->TOP__top__DOT__de__DOT__m7.out);
    __Vtemp1504[0x26U] = (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                  >> 0x20U));
    __Vtemp1504[0x27U] = vlSelf->top__DOT__de__DOT__sb;
    __Vtemp1504[0x28U] = (IData)(vlSymsp->TOP__top__DOT__de__DOT__m7.out);
    __Vtemp1504[0x29U] = (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                  >> 0x20U));
    __Vtemp1504[0x2aU] = vlSelf->top__DOT__de__DOT__sw;
    __Vtemp1504[0x2bU] = (IData)(vlSymsp->TOP__top__DOT__de__DOT__m7.out);
    __Vtemp1504[0x2cU] = (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                  >> 0x20U));
    __Vtemp1504[0x2dU] = vlSelf->top__DOT__de__DOT__sh;
    __Vtemp1504[0x2eU] = (IData)(vlSymsp->TOP__top__DOT__de__DOT__m7.out);
    __Vtemp1504[0x2fU] = (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                  >> 0x20U));
    __Vtemp1504[0x30U] = vlSelf->top__DOT__de__DOT__sd;
    __Vtemp1504[0x31U] = (IData)(vlSelf->top__DOT__de__DOT__addauipc);
    __Vtemp1504[0x32U] = (IData)((vlSelf->top__DOT__de__DOT__addauipc 
                                  >> 0x20U));
    __Vtemp1504[0x33U] = (0x17U | (0xffffff80U & vlSelf->inst));
    __Vtemp1504[0x34U] = (IData)(vlSymsp->TOP__top__DOT__de__DOT__m7.out);
    __Vtemp1504[0x35U] = (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                  >> 0x20U));
    __Vtemp1504[0x36U] = vlSelf->top__DOT__de__DOT__ori;
    __Vtemp1504[0x37U] = (IData)(vlSymsp->TOP__top__DOT__de__DOT__m7.out);
    __Vtemp1504[0x38U] = (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                  >> 0x20U));
    __Vtemp1504[0x39U] = vlSelf->top__DOT__de__DOT__xori;
    __Vtemp1504[0x3aU] = (IData)(vlSymsp->TOP__top__DOT__de__DOT__m7.out);
    __Vtemp1504[0x3bU] = (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                  >> 0x20U));
    __Vtemp1504[0x3cU] = vlSelf->top__DOT__de__DOT__andi;
    __Vtemp1504[0x3dU] = (IData)(vlSymsp->TOP__top__DOT__de__DOT__m7.out);
    __Vtemp1504[0x3eU] = (IData)((vlSymsp->TOP__top__DOT__de__DOT__m7.out 
                                  >> 0x20U));
    __Vtemp1504[0x3fU] = vlSelf->top__DOT__de__DOT__addi;
    VL_CONCAT_WWQ(2112,2048,64, __Vtemp1505, __Vtemp1504, vlSelf->top__DOT__de__DOT__src2);
    VL_CONCAT_WWI(2144,2112,32, __Vtemp1506, __Vtemp1505, vlSelf->top__DOT__de__DOT__remw);
    VL_CONCAT_WWQ(2208,2144,64, __Vtemp1507, __Vtemp1506, (QData)((IData)(vlSelf->top__DOT__de__DOT__src2)));
    VL_CONCAT_WWI(2240,2208,32, __Vtemp1508, __Vtemp1507, vlSelf->top__DOT__de__DOT__sllw);
    VL_CONCAT_WWQ(2304,2240,64, __Vtemp1509, __Vtemp1508, (QData)((IData)(
                                                                          (0x1fU 
                                                                           & (IData)(vlSelf->top__DOT__de__DOT__src2)))));
    VL_CONCAT_WWI(2336,2304,32, __Vtemp1510, __Vtemp1509, vlSelf->top__DOT__de__DOT__sll);
    VL_CONCAT_WWQ(2400,2336,64, __Vtemp1511, __Vtemp1510, (QData)((IData)(
                                                                          (0x3fU 
                                                                           & (IData)(vlSelf->top__DOT__de__DOT__src2)))));
    VL_CONCAT_WWI(2432,2400,32, __Vtemp1512, __Vtemp1511, vlSelf->top__DOT__de__DOT__srlw);
    VL_CONCAT_WWQ(2496,2432,64, __Vtemp1513, __Vtemp1512, (QData)((IData)(
                                                                          (0x1fU 
                                                                           & (IData)(vlSelf->top__DOT__de__DOT__src2)))));
    VL_CONCAT_WWI(2528,2496,32, __Vtemp1514, __Vtemp1513, vlSelf->top__DOT__de__DOT__Add);
    VL_CONCAT_WWQ(2592,2528,64, __Vtemp1515, __Vtemp1514, vlSelf->top__DOT__de__DOT__src2);
    VL_CONCAT_WWI(2624,2592,32, __Vtemp1516, __Vtemp1515, vlSelf->top__DOT__de__DOT__Mul);
    VL_CONCAT_WWQ(2688,2624,64, __Vtemp1517, __Vtemp1516, vlSelf->top__DOT__de__DOT__src2);
    VL_CONCAT_WWI(2720,2688,32, __Vtemp1518, __Vtemp1517, vlSelf->top__DOT__de__DOT__And);
    VL_CONCAT_WWQ(2784,2720,64, __Vtemp1519, __Vtemp1518, vlSelf->top__DOT__de__DOT__src2);
    VL_CONCAT_WWI(2816,2784,32, __Vtemp1520, __Vtemp1519, vlSelf->top__DOT__de__DOT__Xor);
    VL_CONCAT_WWQ(2880,2816,64, __Vtemp1521, __Vtemp1520, vlSelf->top__DOT__de__DOT__src2);
    VL_CONCAT_WWI(2912,2880,32, __Vtemp1522, __Vtemp1521, vlSelf->top__DOT__de__DOT__Or);
    VL_CONCAT_WWQ(2976,2912,64, __Vtemp1523, __Vtemp1522, vlSelf->top__DOT__de__DOT__src2);
    VL_CONCAT_WWI(3008,2976,32, __Vtemp1524, __Vtemp1523, vlSelf->top__DOT__de__DOT__sltu);
    VL_CONCAT_WWQ(3072,3008,64, __Vtemp1525, __Vtemp1524, vlSelf->top__DOT__de__DOT__src1);
    VL_CONCAT_WWI(3104,3072,32, __Vtemp1526, __Vtemp1525, vlSelf->top__DOT__de__DOT__slt);
    VL_CONCAT_WWQ(3168,3104,64, __Vtemp1527, __Vtemp1526, 
                  (- vlSelf->top__DOT__de__DOT__src2));
    VL_CONCAT_WWI(3200,3168,32, __Vtemp1528, __Vtemp1527, vlSelf->top__DOT__de__DOT__sub);
    VL_CONCAT_WWQ(3264,3200,64, __Vtemp1529, __Vtemp1528, 
                  (- vlSelf->top__DOT__de__DOT__src2));
    VL_CONCAT_WWI(3296,3264,32, __Vtemp1530, __Vtemp1529, vlSelf->top__DOT__de__DOT__sltiu);
    VL_CONCAT_WWQ(3360,3296,64, __Vtemp1531, __Vtemp1530, vlSelf->top__DOT__de__DOT__src1);
    VL_CONCAT_WWI(3392,3360,32, __Vtemp1532, __Vtemp1531, vlSelf->top__DOT__de__DOT__beq);
    VL_CONCAT_WWQ(3456,3392,64, __Vtemp1533, __Vtemp1532, 
                  (- vlSelf->top__DOT__de__DOT__src2));
    VL_CONCAT_WWI(3488,3456,32, __Vtemp1534, __Vtemp1533, vlSelf->top__DOT__de__DOT__bge);
    VL_CONCAT_WWQ(3552,3488,64, __Vtemp1535, __Vtemp1534, 
                  (- vlSelf->top__DOT__de__DOT__src2));
    VL_CONCAT_WWI(3584,3552,32, __Vtemp1536, __Vtemp1535, vlSelf->top__DOT__de__DOT__bgeu);
    VL_CONCAT_WWQ(3648,3584,64, __Vtemp1537, __Vtemp1536, vlSelf->top__DOT__de__DOT__src2);
    VL_CONCAT_WWI(3680,3648,32, __Vtemp1538, __Vtemp1537, vlSelf->top__DOT__de__DOT__bltu);
    VL_CONCAT_WWQ(3744,3680,64, __Vtemp1539, __Vtemp1538, vlSelf->top__DOT__de__DOT__src1);
    VL_CONCAT_WWI(3776,3744,32, __Vtemp1540, __Vtemp1539, vlSelf->top__DOT__de__DOT__blt);
    VL_CONCAT_WWQ(3840,3776,64, __Vtemp1541, __Vtemp1540, 
                  (- vlSelf->top__DOT__de__DOT__src2));
    VL_CONCAT_WWI(3872,3840,32, __Vtemp1542, __Vtemp1541, vlSelf->top__DOT__de__DOT__bne);
    VL_CONCAT_WWQ(3936,3872,64, __Vtemp1543, __Vtemp1542, 
                  (- vlSelf->top__DOT__de__DOT__src2));
    VL_CONCAT_WWI(3968,3936,32, __Vtemp1544, __Vtemp1543, vlSelf->top__DOT__de__DOT__addiw);
    VL_CONCAT_WWQ(4032,3968,64, __Vtemp1545, __Vtemp1544, vlSymsp->TOP__top__DOT__de__DOT__m7.out);
    VL_CONCAT_WWI(4064,4032,32, __Vtemp1546, __Vtemp1545, vlSelf->top__DOT__de__DOT__slliw);
    VL_CONCAT_WWQ(4128,4064,64, __Vtemp1547, __Vtemp1546, (QData)((IData)(
                                                                          (0x3fU 
                                                                           & (vlSelf->inst 
                                                                              >> 0x14U)))));
    VL_CONCAT_WWI(4160,4128,32, __Vtemp1548, __Vtemp1547, vlSelf->top__DOT__de__DOT__srliw);
    VL_CONCAT_WWQ(4224,4160,64, __Vtemp1549, __Vtemp1548, (QData)((IData)(
                                                                          (0x3fU 
                                                                           & (vlSelf->inst 
                                                                              >> 0x14U)))));
    VL_CONCAT_WWI(4256,4224,32, __Vtemp1550, __Vtemp1549, vlSelf->top__DOT__de__DOT__sraiw);
    VL_CONCAT_WWQ(4320,4256,64, __Vtemp1551, __Vtemp1550, (QData)((IData)(
                                                                          (0x3fU 
                                                                           & (vlSelf->inst 
                                                                              >> 0x14U)))));
    VL_CONCAT_WWI(4352,4320,32, __Vtemp1552, __Vtemp1551, vlSelf->top__DOT__de__DOT__srai);
    VL_CONCAT_WWQ(4416,4352,64, __Vtemp1553, __Vtemp1552, (QData)((IData)(
                                                                          (0x3fU 
                                                                           & (vlSelf->inst 
                                                                              >> 0x14U)))));
    VL_CONCAT_WWI(4448,4416,32, __Vtemp1554, __Vtemp1553, vlSelf->top__DOT__de__DOT__slli);
    VL_CONCAT_WWQ(4512,4448,64, __Vtemp1555, __Vtemp1554, (QData)((IData)(
                                                                          (0x3fU 
                                                                           & (vlSelf->inst 
                                                                              >> 0x14U)))));
    VL_CONCAT_WWI(4544,4512,32, __Vtemp1556, __Vtemp1555, vlSelf->top__DOT__de__DOT__srli);
    VL_CONCAT_WWQ(4608,4544,64, __Vtemp1557, __Vtemp1556, (QData)((IData)(
                                                                          (0x3fU 
                                                                           & (vlSelf->inst 
                                                                              >> 0x14U)))));
    VL_ASSIGN_W(4608,vlSelf->top__DOT__de__DOT____Vcellinp__m5____pinNumber4, __Vtemp1557);
    if ((1U & (vlSelf->top__DOT__de__DOT__srawd ^ vlSelf->top__DOT__de__DOT____Vtogcov__srawd))) {
        ++(vlSymsp->__Vcoverage[2209]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srawd 
            = ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__srawd) 
               | (1U & vlSelf->top__DOT__de__DOT__srawd));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__srawd ^ vlSelf->top__DOT__de__DOT____Vtogcov__srawd))) {
        ++(vlSymsp->__Vcoverage[2210]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srawd 
            = ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__srawd) 
               | (2U & vlSelf->top__DOT__de__DOT__srawd));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__srawd ^ vlSelf->top__DOT__de__DOT____Vtogcov__srawd))) {
        ++(vlSymsp->__Vcoverage[2211]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srawd 
            = ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__srawd) 
               | (4U & vlSelf->top__DOT__de__DOT__srawd));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__srawd ^ vlSelf->top__DOT__de__DOT____Vtogcov__srawd))) {
        ++(vlSymsp->__Vcoverage[2212]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srawd 
            = ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__srawd) 
               | (8U & vlSelf->top__DOT__de__DOT__srawd));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__srawd 
                  ^ vlSelf->top__DOT__de__DOT____Vtogcov__srawd))) {
        ++(vlSymsp->__Vcoverage[2213]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srawd 
            = ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__srawd) 
               | (0x10U & vlSelf->top__DOT__de__DOT__srawd));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__srawd 
                  ^ vlSelf->top__DOT__de__DOT____Vtogcov__srawd))) {
        ++(vlSymsp->__Vcoverage[2214]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srawd 
            = ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__srawd) 
               | (0x20U & vlSelf->top__DOT__de__DOT__srawd));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__srawd 
                  ^ vlSelf->top__DOT__de__DOT____Vtogcov__srawd))) {
        ++(vlSymsp->__Vcoverage[2215]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srawd 
            = ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__srawd) 
               | (0x40U & vlSelf->top__DOT__de__DOT__srawd));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__srawd 
                  ^ vlSelf->top__DOT__de__DOT____Vtogcov__srawd))) {
        ++(vlSymsp->__Vcoverage[2216]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srawd 
            = ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__srawd) 
               | (0x80U & vlSelf->top__DOT__de__DOT__srawd));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__srawd 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__srawd))) {
        ++(vlSymsp->__Vcoverage[2217]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srawd 
            = ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__srawd) 
               | (0x100U & vlSelf->top__DOT__de__DOT__srawd));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__srawd 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__srawd))) {
        ++(vlSymsp->__Vcoverage[2218]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srawd 
            = ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__srawd) 
               | (0x200U & vlSelf->top__DOT__de__DOT__srawd));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__srawd 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__srawd))) {
        ++(vlSymsp->__Vcoverage[2219]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srawd 
            = ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__srawd) 
               | (0x400U & vlSelf->top__DOT__de__DOT__srawd));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__srawd 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__srawd))) {
        ++(vlSymsp->__Vcoverage[2220]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srawd 
            = ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__srawd) 
               | (0x800U & vlSelf->top__DOT__de__DOT__srawd));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__srawd 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__srawd))) {
        ++(vlSymsp->__Vcoverage[2221]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srawd 
            = ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__srawd) 
               | (0x1000U & vlSelf->top__DOT__de__DOT__srawd));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__srawd 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__srawd))) {
        ++(vlSymsp->__Vcoverage[2222]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srawd 
            = ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__srawd) 
               | (0x2000U & vlSelf->top__DOT__de__DOT__srawd));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__srawd 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__srawd))) {
        ++(vlSymsp->__Vcoverage[2223]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srawd 
            = ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__srawd) 
               | (0x4000U & vlSelf->top__DOT__de__DOT__srawd));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__srawd 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__srawd))) {
        ++(vlSymsp->__Vcoverage[2224]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srawd 
            = ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__srawd) 
               | (0x8000U & vlSelf->top__DOT__de__DOT__srawd));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__srawd 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__srawd))) {
        ++(vlSymsp->__Vcoverage[2225]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srawd 
            = ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srawd) 
               | (0x10000U & vlSelf->top__DOT__de__DOT__srawd));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__srawd 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__srawd))) {
        ++(vlSymsp->__Vcoverage[2226]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srawd 
            = ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srawd) 
               | (0x20000U & vlSelf->top__DOT__de__DOT__srawd));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__srawd 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__srawd))) {
        ++(vlSymsp->__Vcoverage[2227]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srawd 
            = ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srawd) 
               | (0x40000U & vlSelf->top__DOT__de__DOT__srawd));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__srawd 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__srawd))) {
        ++(vlSymsp->__Vcoverage[2228]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srawd 
            = ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srawd) 
               | (0x80000U & vlSelf->top__DOT__de__DOT__srawd));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__srawd 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__srawd))) {
        ++(vlSymsp->__Vcoverage[2229]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srawd 
            = ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srawd) 
               | (0x100000U & vlSelf->top__DOT__de__DOT__srawd));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__srawd 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__srawd))) {
        ++(vlSymsp->__Vcoverage[2230]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srawd 
            = ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srawd) 
               | (0x200000U & vlSelf->top__DOT__de__DOT__srawd));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__srawd 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__srawd))) {
        ++(vlSymsp->__Vcoverage[2231]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srawd 
            = ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srawd) 
               | (0x400000U & vlSelf->top__DOT__de__DOT__srawd));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__srawd 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__srawd))) {
        ++(vlSymsp->__Vcoverage[2232]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srawd 
            = ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srawd) 
               | (0x800000U & vlSelf->top__DOT__de__DOT__srawd));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__srawd 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__srawd))) {
        ++(vlSymsp->__Vcoverage[2233]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srawd 
            = ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srawd) 
               | (0x1000000U & vlSelf->top__DOT__de__DOT__srawd));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__srawd 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__srawd))) {
        ++(vlSymsp->__Vcoverage[2234]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srawd 
            = ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srawd) 
               | (0x2000000U & vlSelf->top__DOT__de__DOT__srawd));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__srawd 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__srawd))) {
        ++(vlSymsp->__Vcoverage[2235]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srawd 
            = ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srawd) 
               | (0x4000000U & vlSelf->top__DOT__de__DOT__srawd));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__srawd 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__srawd))) {
        ++(vlSymsp->__Vcoverage[2236]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srawd 
            = ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srawd) 
               | (0x8000000U & vlSelf->top__DOT__de__DOT__srawd));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__srawd 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__srawd))) {
        ++(vlSymsp->__Vcoverage[2237]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srawd 
            = ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srawd) 
               | (0x10000000U & vlSelf->top__DOT__de__DOT__srawd));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__srawd 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__srawd))) {
        ++(vlSymsp->__Vcoverage[2238]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srawd 
            = ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srawd) 
               | (0x20000000U & vlSelf->top__DOT__de__DOT__srawd));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__srawd 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__srawd))) {
        ++(vlSymsp->__Vcoverage[2239]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srawd 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srawd) 
               | (0x40000000U & vlSelf->top__DOT__de__DOT__srawd));
    }
    if (((vlSelf->top__DOT__de__DOT__srawd ^ vlSelf->top__DOT__de__DOT____Vtogcov__srawd) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2240]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srawd 
            = ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srawd) 
               | (0x80000000U & vlSelf->top__DOT__de__DOT__srawd));
    }
}

void Vtop___024root___combo__TOP__7(Vtop___024root* vlSelf);
void Vtop___024root___combo__TOP__8(Vtop___024root* vlSelf);
void Vtop_MuxKeyWithDefault__N6_K3_D40___settle__TOP__top__DOT__de__DOT__m1__1(Vtop_MuxKeyWithDefault__N6_K3_D40* vlSelf);
void Vtop___024root___settle__TOP__4(Vtop___024root* vlSelf);
void Vtop_MuxKeyWithDefault__N6_K3_D40___settle__TOP__top__DOT__de__DOT__m7__2(Vtop_MuxKeyWithDefault__N6_K3_D40* vlSelf);
void Vtop___024root___settle__TOP__5(Vtop___024root* vlSelf);
void Vtop___024root___sequent__TOP__11(Vtop___024root* vlSelf);
void Vtop_MuxKeyWithDefault__N4_K20_D40___settle__TOP__top__DOT__de__DOT__m10__1(Vtop_MuxKeyWithDefault__N4_K20_D40* vlSelf);
void Vtop_MuxKeyWithDefault__N30_K20_D40___settle__TOP__top__DOT__de__DOT__m4__1(Vtop_MuxKeyWithDefault__N30_K20_D40* vlSelf);
void Vtop_MuxKeyWithDefault__N30_K20_D40___settle__TOP__top__DOT__de__DOT__m5__2(Vtop_MuxKeyWithDefault__N30_K20_D40* vlSelf);
void Vtop___024root___settle__TOP__13(Vtop___024root* vlSelf);
void Vtop___024root___settle__TOP__14(Vtop___024root* vlSelf);
void Vtop_MuxKeyWithDefault__N4_K20_D40___settle__TOP__top__DOT__de__DOT__m9__2(Vtop_MuxKeyWithDefault__N4_K20_D40* vlSelf);
void Vtop___024root___settle__TOP__15(Vtop___024root* vlSelf);

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    Vtop___024root___combo__TOP__7(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vtop___024root___combo__TOP__8(vlSelf);
    Vtop_MuxKeyWithDefault__N6_K3_D40___settle__TOP__top__DOT__de__DOT__m1__1((&vlSymsp->TOP__top__DOT__de__DOT__m1));
    Vtop___024root___settle__TOP__4(vlSelf);
    Vtop_MuxKeyWithDefault__N6_K3_D40___settle__TOP__top__DOT__de__DOT__m7__2((&vlSymsp->TOP__top__DOT__de__DOT__m7));
    Vtop___024root___settle__TOP__5(vlSelf);
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtop___024root___sequent__TOP__11(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    Vtop___024root___combo__TOP__16(vlSelf);
    Vtop_MuxKeyWithDefault__N4_K20_D40___settle__TOP__top__DOT__de__DOT__m10__1((&vlSymsp->TOP__top__DOT__de__DOT__m10));
    Vtop_MuxKeyWithDefault__N30_K20_D40___settle__TOP__top__DOT__de__DOT__m4__1((&vlSymsp->TOP__top__DOT__de__DOT__m4));
    Vtop_MuxKeyWithDefault__N30_K20_D40___settle__TOP__top__DOT__de__DOT__m5__2((&vlSymsp->TOP__top__DOT__de__DOT__m5));
    Vtop___024root___settle__TOP__13(vlSelf);
    Vtop___024root___settle__TOP__14(vlSelf);
    Vtop_MuxKeyWithDefault__N4_K20_D40___settle__TOP__top__DOT__de__DOT__m9__2((&vlSymsp->TOP__top__DOT__de__DOT__m9));
    Vtop___024root___settle__TOP__15(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

QData Vtop___024root___change_request_1(Vtop___024root* vlSelf);

VL_INLINE_OPT QData Vtop___024root___change_request(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___change_request\n"); );
    // Body
    return (Vtop___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vtop___024root___change_request_1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
