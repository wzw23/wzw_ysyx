// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

void Vtop___024root___settle__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__2\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp690;
    VlWide<3>/*95:0*/ __Vtemp691;
    VlWide<4>/*127:0*/ __Vtemp692;
    VlWide<4>/*127:0*/ __Vtemp693;
    VlWide<5>/*159:0*/ __Vtemp694;
    VlWide<5>/*159:0*/ __Vtemp695;
    VlWide<6>/*191:0*/ __Vtemp696;
    VlWide<6>/*191:0*/ __Vtemp697;
    VlWide<7>/*223:0*/ __Vtemp698;
    VlWide<7>/*223:0*/ __Vtemp699;
    VlWide<8>/*255:0*/ __Vtemp700;
    VlWide<8>/*255:0*/ __Vtemp701;
    VlWide<9>/*287:0*/ __Vtemp702;
    VlWide<9>/*287:0*/ __Vtemp703;
    VlWide<30>/*959:0*/ __Vtemp740;
    VlWide<30>/*959:0*/ __Vtemp741;
    VlWide<16>/*511:0*/ __Vtemp776;
    VlWide<16>/*511:0*/ __Vtemp777;
    VlWide<17>/*543:0*/ __Vtemp778;
    VlWide<17>/*543:0*/ __Vtemp779;
    VlWide<18>/*575:0*/ __Vtemp780;
    VlWide<18>/*575:0*/ __Vtemp781;
    VlWide<19>/*607:0*/ __Vtemp782;
    VlWide<19>/*607:0*/ __Vtemp783;
    VlWide<20>/*639:0*/ __Vtemp784;
    VlWide<20>/*639:0*/ __Vtemp785;
    VlWide<21>/*671:0*/ __Vtemp786;
    VlWide<21>/*671:0*/ __Vtemp787;
    VlWide<22>/*703:0*/ __Vtemp788;
    VlWide<22>/*703:0*/ __Vtemp789;
    VlWide<23>/*735:0*/ __Vtemp790;
    VlWide<24>/*767:0*/ __Vtemp791;
    VlWide<25>/*799:0*/ __Vtemp792;
    VlWide<25>/*799:0*/ __Vtemp793;
    VlWide<26>/*831:0*/ __Vtemp794;
    VlWide<26>/*831:0*/ __Vtemp795;
    VlWide<27>/*863:0*/ __Vtemp796;
    VlWide<27>/*863:0*/ __Vtemp797;
    // Body
    if (((vlSelf->top__DOT__de__DOT__slt ^ vlSelf->top__DOT__de__DOT____Vtogcov__slt) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3716]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slt = 
            ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slt) 
             | (0x80000000U & vlSelf->top__DOT__de__DOT__slt));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__sub ^ vlSelf->top__DOT__de__DOT____Vtogcov__sub))) {
        ++(vlSymsp->__Vcoverage[3717]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sub = 
            ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__sub) 
             | (1U & vlSelf->top__DOT__de__DOT__sub));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__sub ^ vlSelf->top__DOT__de__DOT____Vtogcov__sub))) {
        ++(vlSymsp->__Vcoverage[3718]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sub = 
            ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__sub) 
             | (2U & vlSelf->top__DOT__de__DOT__sub));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__sub ^ vlSelf->top__DOT__de__DOT____Vtogcov__sub))) {
        ++(vlSymsp->__Vcoverage[3719]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sub = 
            ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__sub) 
             | (4U & vlSelf->top__DOT__de__DOT__sub));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__sub ^ vlSelf->top__DOT__de__DOT____Vtogcov__sub))) {
        ++(vlSymsp->__Vcoverage[3720]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sub = 
            ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__sub) 
             | (8U & vlSelf->top__DOT__de__DOT__sub));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__sub ^ vlSelf->top__DOT__de__DOT____Vtogcov__sub))) {
        ++(vlSymsp->__Vcoverage[3721]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sub = 
            ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__sub) 
             | (0x10U & vlSelf->top__DOT__de__DOT__sub));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__sub ^ vlSelf->top__DOT__de__DOT____Vtogcov__sub))) {
        ++(vlSymsp->__Vcoverage[3722]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sub = 
            ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__sub) 
             | (0x20U & vlSelf->top__DOT__de__DOT__sub));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__sub ^ vlSelf->top__DOT__de__DOT____Vtogcov__sub))) {
        ++(vlSymsp->__Vcoverage[3723]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sub = 
            ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__sub) 
             | (0x40U & vlSelf->top__DOT__de__DOT__sub));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__sub ^ vlSelf->top__DOT__de__DOT____Vtogcov__sub))) {
        ++(vlSymsp->__Vcoverage[3724]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sub = 
            ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__sub) 
             | (0x80U & vlSelf->top__DOT__de__DOT__sub));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__sub ^ vlSelf->top__DOT__de__DOT____Vtogcov__sub))) {
        ++(vlSymsp->__Vcoverage[3725]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sub = 
            ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__sub) 
             | (0x100U & vlSelf->top__DOT__de__DOT__sub));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__sub ^ vlSelf->top__DOT__de__DOT____Vtogcov__sub))) {
        ++(vlSymsp->__Vcoverage[3726]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sub = 
            ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__sub) 
             | (0x200U & vlSelf->top__DOT__de__DOT__sub));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__sub ^ vlSelf->top__DOT__de__DOT____Vtogcov__sub))) {
        ++(vlSymsp->__Vcoverage[3727]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sub = 
            ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__sub) 
             | (0x400U & vlSelf->top__DOT__de__DOT__sub));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__sub ^ vlSelf->top__DOT__de__DOT____Vtogcov__sub))) {
        ++(vlSymsp->__Vcoverage[3728]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sub = 
            ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__sub) 
             | (0x800U & vlSelf->top__DOT__de__DOT__sub));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__sub 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__sub))) {
        ++(vlSymsp->__Vcoverage[3729]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sub = 
            ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__sub) 
             | (0x1000U & vlSelf->top__DOT__de__DOT__sub));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__sub 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__sub))) {
        ++(vlSymsp->__Vcoverage[3730]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sub = 
            ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__sub) 
             | (0x2000U & vlSelf->top__DOT__de__DOT__sub));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__sub 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__sub))) {
        ++(vlSymsp->__Vcoverage[3731]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sub = 
            ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__sub) 
             | (0x4000U & vlSelf->top__DOT__de__DOT__sub));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__sub 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__sub))) {
        ++(vlSymsp->__Vcoverage[3732]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sub = 
            ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__sub) 
             | (0x8000U & vlSelf->top__DOT__de__DOT__sub));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__sub 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sub))) {
        ++(vlSymsp->__Vcoverage[3733]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sub = 
            ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sub) 
             | (0x10000U & vlSelf->top__DOT__de__DOT__sub));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__sub 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sub))) {
        ++(vlSymsp->__Vcoverage[3734]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sub = 
            ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sub) 
             | (0x20000U & vlSelf->top__DOT__de__DOT__sub));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__sub 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sub))) {
        ++(vlSymsp->__Vcoverage[3735]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sub = 
            ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sub) 
             | (0x40000U & vlSelf->top__DOT__de__DOT__sub));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__sub 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sub))) {
        ++(vlSymsp->__Vcoverage[3736]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sub = 
            ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sub) 
             | (0x80000U & vlSelf->top__DOT__de__DOT__sub));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__sub 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sub))) {
        ++(vlSymsp->__Vcoverage[3737]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sub = 
            ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sub) 
             | (0x100000U & vlSelf->top__DOT__de__DOT__sub));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__sub 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sub))) {
        ++(vlSymsp->__Vcoverage[3738]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sub = 
            ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sub) 
             | (0x200000U & vlSelf->top__DOT__de__DOT__sub));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__sub 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sub))) {
        ++(vlSymsp->__Vcoverage[3739]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sub = 
            ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sub) 
             | (0x400000U & vlSelf->top__DOT__de__DOT__sub));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__sub 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sub))) {
        ++(vlSymsp->__Vcoverage[3740]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sub = 
            ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sub) 
             | (0x800000U & vlSelf->top__DOT__de__DOT__sub));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__sub 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sub))) {
        ++(vlSymsp->__Vcoverage[3741]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sub = 
            ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sub) 
             | (0x1000000U & vlSelf->top__DOT__de__DOT__sub));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__sub 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sub))) {
        ++(vlSymsp->__Vcoverage[3742]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sub = 
            ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sub) 
             | (0x2000000U & vlSelf->top__DOT__de__DOT__sub));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__sub 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sub))) {
        ++(vlSymsp->__Vcoverage[3743]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sub = 
            ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sub) 
             | (0x4000000U & vlSelf->top__DOT__de__DOT__sub));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__sub 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sub))) {
        ++(vlSymsp->__Vcoverage[3744]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sub = 
            ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sub) 
             | (0x8000000U & vlSelf->top__DOT__de__DOT__sub));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__sub 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__sub))) {
        ++(vlSymsp->__Vcoverage[3745]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sub = 
            ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sub) 
             | (0x10000000U & vlSelf->top__DOT__de__DOT__sub));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__sub 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__sub))) {
        ++(vlSymsp->__Vcoverage[3746]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sub = 
            ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sub) 
             | (0x20000000U & vlSelf->top__DOT__de__DOT__sub));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__sub 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__sub))) {
        ++(vlSymsp->__Vcoverage[3747]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sub = 
            ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sub) 
             | (0x40000000U & vlSelf->top__DOT__de__DOT__sub));
    }
    if (((vlSelf->top__DOT__de__DOT__sub ^ vlSelf->top__DOT__de__DOT____Vtogcov__sub) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3748]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sub = 
            ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sub) 
             | (0x80000000U & vlSelf->top__DOT__de__DOT__sub));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__sltiu ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltiu))) {
        ++(vlSymsp->__Vcoverage[3749]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltiu 
            = ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__sltiu) 
               | (1U & vlSelf->top__DOT__de__DOT__sltiu));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__sltiu ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltiu))) {
        ++(vlSymsp->__Vcoverage[3750]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltiu 
            = ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__sltiu) 
               | (2U & vlSelf->top__DOT__de__DOT__sltiu));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__sltiu ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltiu))) {
        ++(vlSymsp->__Vcoverage[3751]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltiu 
            = ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__sltiu) 
               | (4U & vlSelf->top__DOT__de__DOT__sltiu));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__sltiu ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltiu))) {
        ++(vlSymsp->__Vcoverage[3752]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltiu 
            = ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__sltiu) 
               | (8U & vlSelf->top__DOT__de__DOT__sltiu));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__sltiu 
                  ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltiu))) {
        ++(vlSymsp->__Vcoverage[3753]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltiu 
            = ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__sltiu) 
               | (0x10U & vlSelf->top__DOT__de__DOT__sltiu));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__sltiu 
                  ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltiu))) {
        ++(vlSymsp->__Vcoverage[3754]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltiu 
            = ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__sltiu) 
               | (0x20U & vlSelf->top__DOT__de__DOT__sltiu));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__sltiu 
                  ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltiu))) {
        ++(vlSymsp->__Vcoverage[3755]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltiu 
            = ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__sltiu) 
               | (0x40U & vlSelf->top__DOT__de__DOT__sltiu));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__sltiu 
                  ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltiu))) {
        ++(vlSymsp->__Vcoverage[3756]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltiu 
            = ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__sltiu) 
               | (0x80U & vlSelf->top__DOT__de__DOT__sltiu));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__sltiu 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltiu))) {
        ++(vlSymsp->__Vcoverage[3757]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltiu 
            = ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltiu) 
               | (0x100U & vlSelf->top__DOT__de__DOT__sltiu));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__sltiu 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltiu))) {
        ++(vlSymsp->__Vcoverage[3758]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltiu 
            = ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltiu) 
               | (0x200U & vlSelf->top__DOT__de__DOT__sltiu));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__sltiu 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltiu))) {
        ++(vlSymsp->__Vcoverage[3759]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltiu 
            = ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltiu) 
               | (0x400U & vlSelf->top__DOT__de__DOT__sltiu));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__sltiu 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltiu))) {
        ++(vlSymsp->__Vcoverage[3760]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltiu 
            = ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltiu) 
               | (0x800U & vlSelf->top__DOT__de__DOT__sltiu));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__sltiu 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltiu))) {
        ++(vlSymsp->__Vcoverage[3761]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltiu 
            = ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltiu) 
               | (0x1000U & vlSelf->top__DOT__de__DOT__sltiu));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__sltiu 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltiu))) {
        ++(vlSymsp->__Vcoverage[3762]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltiu 
            = ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltiu) 
               | (0x2000U & vlSelf->top__DOT__de__DOT__sltiu));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__sltiu 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltiu))) {
        ++(vlSymsp->__Vcoverage[3763]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltiu 
            = ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltiu) 
               | (0x4000U & vlSelf->top__DOT__de__DOT__sltiu));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__sltiu 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltiu))) {
        ++(vlSymsp->__Vcoverage[3764]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltiu 
            = ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltiu) 
               | (0x8000U & vlSelf->top__DOT__de__DOT__sltiu));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__sltiu 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltiu))) {
        ++(vlSymsp->__Vcoverage[3765]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltiu 
            = ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltiu) 
               | (0x10000U & vlSelf->top__DOT__de__DOT__sltiu));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__sltiu 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltiu))) {
        ++(vlSymsp->__Vcoverage[3766]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltiu 
            = ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltiu) 
               | (0x20000U & vlSelf->top__DOT__de__DOT__sltiu));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__sltiu 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltiu))) {
        ++(vlSymsp->__Vcoverage[3767]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltiu 
            = ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltiu) 
               | (0x40000U & vlSelf->top__DOT__de__DOT__sltiu));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__sltiu 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltiu))) {
        ++(vlSymsp->__Vcoverage[3768]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltiu 
            = ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltiu) 
               | (0x80000U & vlSelf->top__DOT__de__DOT__sltiu));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__sltiu 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltiu))) {
        ++(vlSymsp->__Vcoverage[3769]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltiu 
            = ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltiu) 
               | (0x100000U & vlSelf->top__DOT__de__DOT__sltiu));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__sltiu 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltiu))) {
        ++(vlSymsp->__Vcoverage[3770]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltiu 
            = ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltiu) 
               | (0x200000U & vlSelf->top__DOT__de__DOT__sltiu));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__sltiu 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltiu))) {
        ++(vlSymsp->__Vcoverage[3771]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltiu 
            = ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltiu) 
               | (0x400000U & vlSelf->top__DOT__de__DOT__sltiu));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__sltiu 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltiu))) {
        ++(vlSymsp->__Vcoverage[3772]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltiu 
            = ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltiu) 
               | (0x800000U & vlSelf->top__DOT__de__DOT__sltiu));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__sltiu 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltiu))) {
        ++(vlSymsp->__Vcoverage[3773]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltiu 
            = ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltiu) 
               | (0x1000000U & vlSelf->top__DOT__de__DOT__sltiu));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__sltiu 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltiu))) {
        ++(vlSymsp->__Vcoverage[3774]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltiu 
            = ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltiu) 
               | (0x2000000U & vlSelf->top__DOT__de__DOT__sltiu));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__sltiu 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltiu))) {
        ++(vlSymsp->__Vcoverage[3775]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltiu 
            = ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltiu) 
               | (0x4000000U & vlSelf->top__DOT__de__DOT__sltiu));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__sltiu 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltiu))) {
        ++(vlSymsp->__Vcoverage[3776]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltiu 
            = ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltiu) 
               | (0x8000000U & vlSelf->top__DOT__de__DOT__sltiu));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__sltiu 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltiu))) {
        ++(vlSymsp->__Vcoverage[3777]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltiu 
            = ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltiu) 
               | (0x10000000U & vlSelf->top__DOT__de__DOT__sltiu));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__sltiu 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltiu))) {
        ++(vlSymsp->__Vcoverage[3778]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltiu 
            = ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltiu) 
               | (0x20000000U & vlSelf->top__DOT__de__DOT__sltiu));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__sltiu 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltiu))) {
        ++(vlSymsp->__Vcoverage[3779]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltiu 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltiu) 
               | (0x40000000U & vlSelf->top__DOT__de__DOT__sltiu));
    }
    if (((vlSelf->top__DOT__de__DOT__sltiu ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltiu) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3780]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltiu 
            = ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltiu) 
               | (0x80000000U & vlSelf->top__DOT__de__DOT__sltiu));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__srai ^ vlSelf->top__DOT__de__DOT____Vtogcov__srai))) {
        ++(vlSymsp->__Vcoverage[3781]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srai 
            = ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__srai) 
               | (1U & vlSelf->top__DOT__de__DOT__srai));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__srai ^ vlSelf->top__DOT__de__DOT____Vtogcov__srai))) {
        ++(vlSymsp->__Vcoverage[3782]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srai 
            = ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__srai) 
               | (2U & vlSelf->top__DOT__de__DOT__srai));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__srai ^ vlSelf->top__DOT__de__DOT____Vtogcov__srai))) {
        ++(vlSymsp->__Vcoverage[3783]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srai 
            = ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__srai) 
               | (4U & vlSelf->top__DOT__de__DOT__srai));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__srai ^ vlSelf->top__DOT__de__DOT____Vtogcov__srai))) {
        ++(vlSymsp->__Vcoverage[3784]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srai 
            = ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__srai) 
               | (8U & vlSelf->top__DOT__de__DOT__srai));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__srai ^ vlSelf->top__DOT__de__DOT____Vtogcov__srai))) {
        ++(vlSymsp->__Vcoverage[3785]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srai 
            = ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__srai) 
               | (0x10U & vlSelf->top__DOT__de__DOT__srai));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__srai ^ vlSelf->top__DOT__de__DOT____Vtogcov__srai))) {
        ++(vlSymsp->__Vcoverage[3786]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srai 
            = ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__srai) 
               | (0x20U & vlSelf->top__DOT__de__DOT__srai));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__srai ^ vlSelf->top__DOT__de__DOT____Vtogcov__srai))) {
        ++(vlSymsp->__Vcoverage[3787]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srai 
            = ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__srai) 
               | (0x40U & vlSelf->top__DOT__de__DOT__srai));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__srai ^ vlSelf->top__DOT__de__DOT____Vtogcov__srai))) {
        ++(vlSymsp->__Vcoverage[3788]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srai 
            = ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__srai) 
               | (0x80U & vlSelf->top__DOT__de__DOT__srai));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__srai 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__srai))) {
        ++(vlSymsp->__Vcoverage[3789]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srai 
            = ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__srai) 
               | (0x100U & vlSelf->top__DOT__de__DOT__srai));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__srai 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__srai))) {
        ++(vlSymsp->__Vcoverage[3790]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srai 
            = ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__srai) 
               | (0x200U & vlSelf->top__DOT__de__DOT__srai));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__srai 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__srai))) {
        ++(vlSymsp->__Vcoverage[3791]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srai 
            = ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__srai) 
               | (0x400U & vlSelf->top__DOT__de__DOT__srai));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__srai 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__srai))) {
        ++(vlSymsp->__Vcoverage[3792]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srai 
            = ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__srai) 
               | (0x800U & vlSelf->top__DOT__de__DOT__srai));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__srai 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__srai))) {
        ++(vlSymsp->__Vcoverage[3793]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srai 
            = ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__srai) 
               | (0x1000U & vlSelf->top__DOT__de__DOT__srai));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__srai 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__srai))) {
        ++(vlSymsp->__Vcoverage[3794]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srai 
            = ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__srai) 
               | (0x2000U & vlSelf->top__DOT__de__DOT__srai));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__srai 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__srai))) {
        ++(vlSymsp->__Vcoverage[3795]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srai 
            = ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__srai) 
               | (0x4000U & vlSelf->top__DOT__de__DOT__srai));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__srai 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__srai))) {
        ++(vlSymsp->__Vcoverage[3796]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srai 
            = ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__srai) 
               | (0x8000U & vlSelf->top__DOT__de__DOT__srai));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__srai 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__srai))) {
        ++(vlSymsp->__Vcoverage[3797]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srai 
            = ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srai) 
               | (0x10000U & vlSelf->top__DOT__de__DOT__srai));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__srai 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__srai))) {
        ++(vlSymsp->__Vcoverage[3798]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srai 
            = ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srai) 
               | (0x20000U & vlSelf->top__DOT__de__DOT__srai));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__srai 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__srai))) {
        ++(vlSymsp->__Vcoverage[3799]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srai 
            = ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srai) 
               | (0x40000U & vlSelf->top__DOT__de__DOT__srai));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__srai 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__srai))) {
        ++(vlSymsp->__Vcoverage[3800]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srai 
            = ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srai) 
               | (0x80000U & vlSelf->top__DOT__de__DOT__srai));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__srai 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__srai))) {
        ++(vlSymsp->__Vcoverage[3801]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srai 
            = ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srai) 
               | (0x100000U & vlSelf->top__DOT__de__DOT__srai));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__srai 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__srai))) {
        ++(vlSymsp->__Vcoverage[3802]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srai 
            = ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srai) 
               | (0x200000U & vlSelf->top__DOT__de__DOT__srai));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__srai 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__srai))) {
        ++(vlSymsp->__Vcoverage[3803]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srai 
            = ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srai) 
               | (0x400000U & vlSelf->top__DOT__de__DOT__srai));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__srai 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__srai))) {
        ++(vlSymsp->__Vcoverage[3804]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srai 
            = ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srai) 
               | (0x800000U & vlSelf->top__DOT__de__DOT__srai));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__srai 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__srai))) {
        ++(vlSymsp->__Vcoverage[3805]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srai 
            = ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srai) 
               | (0x1000000U & vlSelf->top__DOT__de__DOT__srai));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__srai 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__srai))) {
        ++(vlSymsp->__Vcoverage[3806]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srai 
            = ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srai) 
               | (0x2000000U & vlSelf->top__DOT__de__DOT__srai));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__srai 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__srai))) {
        ++(vlSymsp->__Vcoverage[3807]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srai 
            = ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srai) 
               | (0x4000000U & vlSelf->top__DOT__de__DOT__srai));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__srai 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__srai))) {
        ++(vlSymsp->__Vcoverage[3808]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srai 
            = ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srai) 
               | (0x8000000U & vlSelf->top__DOT__de__DOT__srai));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__srai 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__srai))) {
        ++(vlSymsp->__Vcoverage[3809]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srai 
            = ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srai) 
               | (0x10000000U & vlSelf->top__DOT__de__DOT__srai));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__srai 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__srai))) {
        ++(vlSymsp->__Vcoverage[3810]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srai 
            = ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srai) 
               | (0x20000000U & vlSelf->top__DOT__de__DOT__srai));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__srai 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__srai))) {
        ++(vlSymsp->__Vcoverage[3811]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srai 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srai) 
               | (0x40000000U & vlSelf->top__DOT__de__DOT__srai));
    }
    if (((vlSelf->top__DOT__de__DOT__srai ^ vlSelf->top__DOT__de__DOT____Vtogcov__srai) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3812]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srai 
            = ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srai) 
               | (0x80000000U & vlSelf->top__DOT__de__DOT__srai));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__slli ^ vlSelf->top__DOT__de__DOT____Vtogcov__slli))) {
        ++(vlSymsp->__Vcoverage[3813]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slli 
            = ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__slli) 
               | (1U & vlSelf->top__DOT__de__DOT__slli));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__slli ^ vlSelf->top__DOT__de__DOT____Vtogcov__slli))) {
        ++(vlSymsp->__Vcoverage[3814]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slli 
            = ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__slli) 
               | (2U & vlSelf->top__DOT__de__DOT__slli));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__slli ^ vlSelf->top__DOT__de__DOT____Vtogcov__slli))) {
        ++(vlSymsp->__Vcoverage[3815]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slli 
            = ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__slli) 
               | (4U & vlSelf->top__DOT__de__DOT__slli));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__slli ^ vlSelf->top__DOT__de__DOT____Vtogcov__slli))) {
        ++(vlSymsp->__Vcoverage[3816]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slli 
            = ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__slli) 
               | (8U & vlSelf->top__DOT__de__DOT__slli));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__slli ^ vlSelf->top__DOT__de__DOT____Vtogcov__slli))) {
        ++(vlSymsp->__Vcoverage[3817]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slli 
            = ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__slli) 
               | (0x10U & vlSelf->top__DOT__de__DOT__slli));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__slli ^ vlSelf->top__DOT__de__DOT____Vtogcov__slli))) {
        ++(vlSymsp->__Vcoverage[3818]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slli 
            = ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__slli) 
               | (0x20U & vlSelf->top__DOT__de__DOT__slli));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__slli ^ vlSelf->top__DOT__de__DOT____Vtogcov__slli))) {
        ++(vlSymsp->__Vcoverage[3819]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slli 
            = ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__slli) 
               | (0x40U & vlSelf->top__DOT__de__DOT__slli));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__slli ^ vlSelf->top__DOT__de__DOT____Vtogcov__slli))) {
        ++(vlSymsp->__Vcoverage[3820]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slli 
            = ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__slli) 
               | (0x80U & vlSelf->top__DOT__de__DOT__slli));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__slli 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__slli))) {
        ++(vlSymsp->__Vcoverage[3821]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slli 
            = ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__slli) 
               | (0x100U & vlSelf->top__DOT__de__DOT__slli));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__slli 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__slli))) {
        ++(vlSymsp->__Vcoverage[3822]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slli 
            = ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__slli) 
               | (0x200U & vlSelf->top__DOT__de__DOT__slli));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__slli 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__slli))) {
        ++(vlSymsp->__Vcoverage[3823]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slli 
            = ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__slli) 
               | (0x400U & vlSelf->top__DOT__de__DOT__slli));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__slli 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__slli))) {
        ++(vlSymsp->__Vcoverage[3824]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slli 
            = ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__slli) 
               | (0x800U & vlSelf->top__DOT__de__DOT__slli));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__slli 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__slli))) {
        ++(vlSymsp->__Vcoverage[3825]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slli 
            = ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__slli) 
               | (0x1000U & vlSelf->top__DOT__de__DOT__slli));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__slli 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__slli))) {
        ++(vlSymsp->__Vcoverage[3826]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slli 
            = ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__slli) 
               | (0x2000U & vlSelf->top__DOT__de__DOT__slli));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__slli 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__slli))) {
        ++(vlSymsp->__Vcoverage[3827]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slli 
            = ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__slli) 
               | (0x4000U & vlSelf->top__DOT__de__DOT__slli));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__slli 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__slli))) {
        ++(vlSymsp->__Vcoverage[3828]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slli 
            = ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__slli) 
               | (0x8000U & vlSelf->top__DOT__de__DOT__slli));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__slli 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__slli))) {
        ++(vlSymsp->__Vcoverage[3829]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slli 
            = ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slli) 
               | (0x10000U & vlSelf->top__DOT__de__DOT__slli));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__slli 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__slli))) {
        ++(vlSymsp->__Vcoverage[3830]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slli 
            = ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slli) 
               | (0x20000U & vlSelf->top__DOT__de__DOT__slli));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__slli 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__slli))) {
        ++(vlSymsp->__Vcoverage[3831]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slli 
            = ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slli) 
               | (0x40000U & vlSelf->top__DOT__de__DOT__slli));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__slli 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__slli))) {
        ++(vlSymsp->__Vcoverage[3832]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slli 
            = ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slli) 
               | (0x80000U & vlSelf->top__DOT__de__DOT__slli));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__slli 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__slli))) {
        ++(vlSymsp->__Vcoverage[3833]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slli 
            = ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slli) 
               | (0x100000U & vlSelf->top__DOT__de__DOT__slli));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__slli 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__slli))) {
        ++(vlSymsp->__Vcoverage[3834]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slli 
            = ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slli) 
               | (0x200000U & vlSelf->top__DOT__de__DOT__slli));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__slli 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__slli))) {
        ++(vlSymsp->__Vcoverage[3835]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slli 
            = ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slli) 
               | (0x400000U & vlSelf->top__DOT__de__DOT__slli));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__slli 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__slli))) {
        ++(vlSymsp->__Vcoverage[3836]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slli 
            = ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slli) 
               | (0x800000U & vlSelf->top__DOT__de__DOT__slli));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__slli 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__slli))) {
        ++(vlSymsp->__Vcoverage[3837]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slli 
            = ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slli) 
               | (0x1000000U & vlSelf->top__DOT__de__DOT__slli));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__slli 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__slli))) {
        ++(vlSymsp->__Vcoverage[3838]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slli 
            = ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slli) 
               | (0x2000000U & vlSelf->top__DOT__de__DOT__slli));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__slli 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__slli))) {
        ++(vlSymsp->__Vcoverage[3839]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slli 
            = ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slli) 
               | (0x4000000U & vlSelf->top__DOT__de__DOT__slli));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__slli 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__slli))) {
        ++(vlSymsp->__Vcoverage[3840]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slli 
            = ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slli) 
               | (0x8000000U & vlSelf->top__DOT__de__DOT__slli));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__slli 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__slli))) {
        ++(vlSymsp->__Vcoverage[3841]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slli 
            = ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slli) 
               | (0x10000000U & vlSelf->top__DOT__de__DOT__slli));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__slli 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__slli))) {
        ++(vlSymsp->__Vcoverage[3842]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slli 
            = ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slli) 
               | (0x20000000U & vlSelf->top__DOT__de__DOT__slli));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__slli 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__slli))) {
        ++(vlSymsp->__Vcoverage[3843]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slli 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slli) 
               | (0x40000000U & vlSelf->top__DOT__de__DOT__slli));
    }
    if (((vlSelf->top__DOT__de__DOT__slli ^ vlSelf->top__DOT__de__DOT____Vtogcov__slli) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3844]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slli 
            = ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slli) 
               | (0x80000000U & vlSelf->top__DOT__de__DOT__slli));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__srli ^ vlSelf->top__DOT__de__DOT____Vtogcov__srli))) {
        ++(vlSymsp->__Vcoverage[3845]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srli 
            = ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__srli) 
               | (1U & vlSelf->top__DOT__de__DOT__srli));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__srli ^ vlSelf->top__DOT__de__DOT____Vtogcov__srli))) {
        ++(vlSymsp->__Vcoverage[3846]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srli 
            = ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__srli) 
               | (2U & vlSelf->top__DOT__de__DOT__srli));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__srli ^ vlSelf->top__DOT__de__DOT____Vtogcov__srli))) {
        ++(vlSymsp->__Vcoverage[3847]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srli 
            = ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__srli) 
               | (4U & vlSelf->top__DOT__de__DOT__srli));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__srli ^ vlSelf->top__DOT__de__DOT____Vtogcov__srli))) {
        ++(vlSymsp->__Vcoverage[3848]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srli 
            = ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__srli) 
               | (8U & vlSelf->top__DOT__de__DOT__srli));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__srli ^ vlSelf->top__DOT__de__DOT____Vtogcov__srli))) {
        ++(vlSymsp->__Vcoverage[3849]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srli 
            = ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__srli) 
               | (0x10U & vlSelf->top__DOT__de__DOT__srli));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__srli ^ vlSelf->top__DOT__de__DOT____Vtogcov__srli))) {
        ++(vlSymsp->__Vcoverage[3850]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srli 
            = ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__srli) 
               | (0x20U & vlSelf->top__DOT__de__DOT__srli));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__srli ^ vlSelf->top__DOT__de__DOT____Vtogcov__srli))) {
        ++(vlSymsp->__Vcoverage[3851]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srli 
            = ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__srli) 
               | (0x40U & vlSelf->top__DOT__de__DOT__srli));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__srli ^ vlSelf->top__DOT__de__DOT____Vtogcov__srli))) {
        ++(vlSymsp->__Vcoverage[3852]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srli 
            = ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__srli) 
               | (0x80U & vlSelf->top__DOT__de__DOT__srli));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__srli 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__srli))) {
        ++(vlSymsp->__Vcoverage[3853]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srli 
            = ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__srli) 
               | (0x100U & vlSelf->top__DOT__de__DOT__srli));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__srli 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__srli))) {
        ++(vlSymsp->__Vcoverage[3854]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srli 
            = ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__srli) 
               | (0x200U & vlSelf->top__DOT__de__DOT__srli));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__srli 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__srli))) {
        ++(vlSymsp->__Vcoverage[3855]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srli 
            = ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__srli) 
               | (0x400U & vlSelf->top__DOT__de__DOT__srli));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__srli 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__srli))) {
        ++(vlSymsp->__Vcoverage[3856]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srli 
            = ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__srli) 
               | (0x800U & vlSelf->top__DOT__de__DOT__srli));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__srli 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__srli))) {
        ++(vlSymsp->__Vcoverage[3857]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srli 
            = ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__srli) 
               | (0x1000U & vlSelf->top__DOT__de__DOT__srli));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__srli 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__srli))) {
        ++(vlSymsp->__Vcoverage[3858]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srli 
            = ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__srli) 
               | (0x2000U & vlSelf->top__DOT__de__DOT__srli));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__srli 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__srli))) {
        ++(vlSymsp->__Vcoverage[3859]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srli 
            = ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__srli) 
               | (0x4000U & vlSelf->top__DOT__de__DOT__srli));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__srli 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__srli))) {
        ++(vlSymsp->__Vcoverage[3860]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srli 
            = ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__srli) 
               | (0x8000U & vlSelf->top__DOT__de__DOT__srli));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__srli 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__srli))) {
        ++(vlSymsp->__Vcoverage[3861]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srli 
            = ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srli) 
               | (0x10000U & vlSelf->top__DOT__de__DOT__srli));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__srli 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__srli))) {
        ++(vlSymsp->__Vcoverage[3862]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srli 
            = ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srli) 
               | (0x20000U & vlSelf->top__DOT__de__DOT__srli));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__srli 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__srli))) {
        ++(vlSymsp->__Vcoverage[3863]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srli 
            = ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srli) 
               | (0x40000U & vlSelf->top__DOT__de__DOT__srli));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__srli 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__srli))) {
        ++(vlSymsp->__Vcoverage[3864]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srli 
            = ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srli) 
               | (0x80000U & vlSelf->top__DOT__de__DOT__srli));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__srli 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__srli))) {
        ++(vlSymsp->__Vcoverage[3865]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srli 
            = ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srli) 
               | (0x100000U & vlSelf->top__DOT__de__DOT__srli));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__srli 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__srli))) {
        ++(vlSymsp->__Vcoverage[3866]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srli 
            = ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srli) 
               | (0x200000U & vlSelf->top__DOT__de__DOT__srli));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__srli 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__srli))) {
        ++(vlSymsp->__Vcoverage[3867]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srli 
            = ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srli) 
               | (0x400000U & vlSelf->top__DOT__de__DOT__srli));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__srli 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__srli))) {
        ++(vlSymsp->__Vcoverage[3868]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srli 
            = ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srli) 
               | (0x800000U & vlSelf->top__DOT__de__DOT__srli));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__srli 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__srli))) {
        ++(vlSymsp->__Vcoverage[3869]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srli 
            = ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srli) 
               | (0x1000000U & vlSelf->top__DOT__de__DOT__srli));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__srli 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__srli))) {
        ++(vlSymsp->__Vcoverage[3870]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srli 
            = ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srli) 
               | (0x2000000U & vlSelf->top__DOT__de__DOT__srli));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__srli 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__srli))) {
        ++(vlSymsp->__Vcoverage[3871]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srli 
            = ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srli) 
               | (0x4000000U & vlSelf->top__DOT__de__DOT__srli));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__srli 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__srli))) {
        ++(vlSymsp->__Vcoverage[3872]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srli 
            = ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srli) 
               | (0x8000000U & vlSelf->top__DOT__de__DOT__srli));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__srli 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__srli))) {
        ++(vlSymsp->__Vcoverage[3873]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srli 
            = ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srli) 
               | (0x10000000U & vlSelf->top__DOT__de__DOT__srli));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__srli 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__srli))) {
        ++(vlSymsp->__Vcoverage[3874]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srli 
            = ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srli) 
               | (0x20000000U & vlSelf->top__DOT__de__DOT__srli));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__srli 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__srli))) {
        ++(vlSymsp->__Vcoverage[3875]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srli 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srli) 
               | (0x40000000U & vlSelf->top__DOT__de__DOT__srli));
    }
    if (((vlSelf->top__DOT__de__DOT__srli ^ vlSelf->top__DOT__de__DOT____Vtogcov__srli) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3876]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srli 
            = ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srli) 
               | (0x80000000U & vlSelf->top__DOT__de__DOT__srli));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__beq ^ vlSelf->top__DOT__de__DOT____Vtogcov__beq))) {
        ++(vlSymsp->__Vcoverage[3877]);
        vlSelf->top__DOT__de__DOT____Vtogcov__beq = 
            ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__beq) 
             | (1U & vlSelf->top__DOT__de__DOT__beq));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__beq ^ vlSelf->top__DOT__de__DOT____Vtogcov__beq))) {
        ++(vlSymsp->__Vcoverage[3878]);
        vlSelf->top__DOT__de__DOT____Vtogcov__beq = 
            ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__beq) 
             | (2U & vlSelf->top__DOT__de__DOT__beq));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__beq ^ vlSelf->top__DOT__de__DOT____Vtogcov__beq))) {
        ++(vlSymsp->__Vcoverage[3879]);
        vlSelf->top__DOT__de__DOT____Vtogcov__beq = 
            ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__beq) 
             | (4U & vlSelf->top__DOT__de__DOT__beq));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__beq ^ vlSelf->top__DOT__de__DOT____Vtogcov__beq))) {
        ++(vlSymsp->__Vcoverage[3880]);
        vlSelf->top__DOT__de__DOT____Vtogcov__beq = 
            ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__beq) 
             | (8U & vlSelf->top__DOT__de__DOT__beq));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__beq ^ vlSelf->top__DOT__de__DOT____Vtogcov__beq))) {
        ++(vlSymsp->__Vcoverage[3881]);
        vlSelf->top__DOT__de__DOT____Vtogcov__beq = 
            ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__beq) 
             | (0x10U & vlSelf->top__DOT__de__DOT__beq));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__beq ^ vlSelf->top__DOT__de__DOT____Vtogcov__beq))) {
        ++(vlSymsp->__Vcoverage[3882]);
        vlSelf->top__DOT__de__DOT____Vtogcov__beq = 
            ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__beq) 
             | (0x20U & vlSelf->top__DOT__de__DOT__beq));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__beq ^ vlSelf->top__DOT__de__DOT____Vtogcov__beq))) {
        ++(vlSymsp->__Vcoverage[3883]);
        vlSelf->top__DOT__de__DOT____Vtogcov__beq = 
            ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__beq) 
             | (0x40U & vlSelf->top__DOT__de__DOT__beq));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__beq ^ vlSelf->top__DOT__de__DOT____Vtogcov__beq))) {
        ++(vlSymsp->__Vcoverage[3884]);
        vlSelf->top__DOT__de__DOT____Vtogcov__beq = 
            ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__beq) 
             | (0x80U & vlSelf->top__DOT__de__DOT__beq));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__beq ^ vlSelf->top__DOT__de__DOT____Vtogcov__beq))) {
        ++(vlSymsp->__Vcoverage[3885]);
        vlSelf->top__DOT__de__DOT____Vtogcov__beq = 
            ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__beq) 
             | (0x100U & vlSelf->top__DOT__de__DOT__beq));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__beq ^ vlSelf->top__DOT__de__DOT____Vtogcov__beq))) {
        ++(vlSymsp->__Vcoverage[3886]);
        vlSelf->top__DOT__de__DOT____Vtogcov__beq = 
            ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__beq) 
             | (0x200U & vlSelf->top__DOT__de__DOT__beq));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__beq ^ vlSelf->top__DOT__de__DOT____Vtogcov__beq))) {
        ++(vlSymsp->__Vcoverage[3887]);
        vlSelf->top__DOT__de__DOT____Vtogcov__beq = 
            ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__beq) 
             | (0x400U & vlSelf->top__DOT__de__DOT__beq));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__beq ^ vlSelf->top__DOT__de__DOT____Vtogcov__beq))) {
        ++(vlSymsp->__Vcoverage[3888]);
        vlSelf->top__DOT__de__DOT____Vtogcov__beq = 
            ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__beq) 
             | (0x800U & vlSelf->top__DOT__de__DOT__beq));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__beq 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__beq))) {
        ++(vlSymsp->__Vcoverage[3889]);
        vlSelf->top__DOT__de__DOT____Vtogcov__beq = 
            ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__beq) 
             | (0x1000U & vlSelf->top__DOT__de__DOT__beq));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__beq 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__beq))) {
        ++(vlSymsp->__Vcoverage[3890]);
        vlSelf->top__DOT__de__DOT____Vtogcov__beq = 
            ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__beq) 
             | (0x2000U & vlSelf->top__DOT__de__DOT__beq));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__beq 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__beq))) {
        ++(vlSymsp->__Vcoverage[3891]);
        vlSelf->top__DOT__de__DOT____Vtogcov__beq = 
            ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__beq) 
             | (0x4000U & vlSelf->top__DOT__de__DOT__beq));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__beq 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__beq))) {
        ++(vlSymsp->__Vcoverage[3892]);
        vlSelf->top__DOT__de__DOT____Vtogcov__beq = 
            ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__beq) 
             | (0x8000U & vlSelf->top__DOT__de__DOT__beq));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__beq 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__beq))) {
        ++(vlSymsp->__Vcoverage[3893]);
        vlSelf->top__DOT__de__DOT____Vtogcov__beq = 
            ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__beq) 
             | (0x10000U & vlSelf->top__DOT__de__DOT__beq));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__beq 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__beq))) {
        ++(vlSymsp->__Vcoverage[3894]);
        vlSelf->top__DOT__de__DOT____Vtogcov__beq = 
            ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__beq) 
             | (0x20000U & vlSelf->top__DOT__de__DOT__beq));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__beq 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__beq))) {
        ++(vlSymsp->__Vcoverage[3895]);
        vlSelf->top__DOT__de__DOT____Vtogcov__beq = 
            ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__beq) 
             | (0x40000U & vlSelf->top__DOT__de__DOT__beq));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__beq 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__beq))) {
        ++(vlSymsp->__Vcoverage[3896]);
        vlSelf->top__DOT__de__DOT____Vtogcov__beq = 
            ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__beq) 
             | (0x80000U & vlSelf->top__DOT__de__DOT__beq));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__beq 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__beq))) {
        ++(vlSymsp->__Vcoverage[3897]);
        vlSelf->top__DOT__de__DOT____Vtogcov__beq = 
            ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__beq) 
             | (0x100000U & vlSelf->top__DOT__de__DOT__beq));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__beq 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__beq))) {
        ++(vlSymsp->__Vcoverage[3898]);
        vlSelf->top__DOT__de__DOT____Vtogcov__beq = 
            ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__beq) 
             | (0x200000U & vlSelf->top__DOT__de__DOT__beq));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__beq 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__beq))) {
        ++(vlSymsp->__Vcoverage[3899]);
        vlSelf->top__DOT__de__DOT____Vtogcov__beq = 
            ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__beq) 
             | (0x400000U & vlSelf->top__DOT__de__DOT__beq));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__beq 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__beq))) {
        ++(vlSymsp->__Vcoverage[3900]);
        vlSelf->top__DOT__de__DOT____Vtogcov__beq = 
            ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__beq) 
             | (0x800000U & vlSelf->top__DOT__de__DOT__beq));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__beq 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__beq))) {
        ++(vlSymsp->__Vcoverage[3901]);
        vlSelf->top__DOT__de__DOT____Vtogcov__beq = 
            ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__beq) 
             | (0x1000000U & vlSelf->top__DOT__de__DOT__beq));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__beq 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__beq))) {
        ++(vlSymsp->__Vcoverage[3902]);
        vlSelf->top__DOT__de__DOT____Vtogcov__beq = 
            ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__beq) 
             | (0x2000000U & vlSelf->top__DOT__de__DOT__beq));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__beq 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__beq))) {
        ++(vlSymsp->__Vcoverage[3903]);
        vlSelf->top__DOT__de__DOT____Vtogcov__beq = 
            ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__beq) 
             | (0x4000000U & vlSelf->top__DOT__de__DOT__beq));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__beq 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__beq))) {
        ++(vlSymsp->__Vcoverage[3904]);
        vlSelf->top__DOT__de__DOT____Vtogcov__beq = 
            ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__beq) 
             | (0x8000000U & vlSelf->top__DOT__de__DOT__beq));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__beq 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__beq))) {
        ++(vlSymsp->__Vcoverage[3905]);
        vlSelf->top__DOT__de__DOT____Vtogcov__beq = 
            ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__beq) 
             | (0x10000000U & vlSelf->top__DOT__de__DOT__beq));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__beq 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__beq))) {
        ++(vlSymsp->__Vcoverage[3906]);
        vlSelf->top__DOT__de__DOT____Vtogcov__beq = 
            ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__beq) 
             | (0x20000000U & vlSelf->top__DOT__de__DOT__beq));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__beq 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__beq))) {
        ++(vlSymsp->__Vcoverage[3907]);
        vlSelf->top__DOT__de__DOT____Vtogcov__beq = 
            ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__beq) 
             | (0x40000000U & vlSelf->top__DOT__de__DOT__beq));
    }
    if (((vlSelf->top__DOT__de__DOT__beq ^ vlSelf->top__DOT__de__DOT____Vtogcov__beq) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3908]);
        vlSelf->top__DOT__de__DOT____Vtogcov__beq = 
            ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__beq) 
             | (0x80000000U & vlSelf->top__DOT__de__DOT__beq));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__bne ^ vlSelf->top__DOT__de__DOT____Vtogcov__bne))) {
        ++(vlSymsp->__Vcoverage[3909]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bne = 
            ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__bne) 
             | (1U & vlSelf->top__DOT__de__DOT__bne));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__bne ^ vlSelf->top__DOT__de__DOT____Vtogcov__bne))) {
        ++(vlSymsp->__Vcoverage[3910]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bne = 
            ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__bne) 
             | (2U & vlSelf->top__DOT__de__DOT__bne));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__bne ^ vlSelf->top__DOT__de__DOT____Vtogcov__bne))) {
        ++(vlSymsp->__Vcoverage[3911]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bne = 
            ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__bne) 
             | (4U & vlSelf->top__DOT__de__DOT__bne));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__bne ^ vlSelf->top__DOT__de__DOT____Vtogcov__bne))) {
        ++(vlSymsp->__Vcoverage[3912]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bne = 
            ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__bne) 
             | (8U & vlSelf->top__DOT__de__DOT__bne));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__bne ^ vlSelf->top__DOT__de__DOT____Vtogcov__bne))) {
        ++(vlSymsp->__Vcoverage[3913]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bne = 
            ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__bne) 
             | (0x10U & vlSelf->top__DOT__de__DOT__bne));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__bne ^ vlSelf->top__DOT__de__DOT____Vtogcov__bne))) {
        ++(vlSymsp->__Vcoverage[3914]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bne = 
            ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__bne) 
             | (0x20U & vlSelf->top__DOT__de__DOT__bne));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__bne ^ vlSelf->top__DOT__de__DOT____Vtogcov__bne))) {
        ++(vlSymsp->__Vcoverage[3915]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bne = 
            ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__bne) 
             | (0x40U & vlSelf->top__DOT__de__DOT__bne));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__bne ^ vlSelf->top__DOT__de__DOT____Vtogcov__bne))) {
        ++(vlSymsp->__Vcoverage[3916]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bne = 
            ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__bne) 
             | (0x80U & vlSelf->top__DOT__de__DOT__bne));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__bne ^ vlSelf->top__DOT__de__DOT____Vtogcov__bne))) {
        ++(vlSymsp->__Vcoverage[3917]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bne = 
            ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__bne) 
             | (0x100U & vlSelf->top__DOT__de__DOT__bne));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__bne ^ vlSelf->top__DOT__de__DOT____Vtogcov__bne))) {
        ++(vlSymsp->__Vcoverage[3918]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bne = 
            ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__bne) 
             | (0x200U & vlSelf->top__DOT__de__DOT__bne));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__bne ^ vlSelf->top__DOT__de__DOT____Vtogcov__bne))) {
        ++(vlSymsp->__Vcoverage[3919]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bne = 
            ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__bne) 
             | (0x400U & vlSelf->top__DOT__de__DOT__bne));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__bne ^ vlSelf->top__DOT__de__DOT____Vtogcov__bne))) {
        ++(vlSymsp->__Vcoverage[3920]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bne = 
            ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__bne) 
             | (0x800U & vlSelf->top__DOT__de__DOT__bne));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__bne 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__bne))) {
        ++(vlSymsp->__Vcoverage[3921]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bne = 
            ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__bne) 
             | (0x1000U & vlSelf->top__DOT__de__DOT__bne));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__bne 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__bne))) {
        ++(vlSymsp->__Vcoverage[3922]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bne = 
            ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__bne) 
             | (0x2000U & vlSelf->top__DOT__de__DOT__bne));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__bne 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__bne))) {
        ++(vlSymsp->__Vcoverage[3923]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bne = 
            ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__bne) 
             | (0x4000U & vlSelf->top__DOT__de__DOT__bne));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__bne 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__bne))) {
        ++(vlSymsp->__Vcoverage[3924]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bne = 
            ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__bne) 
             | (0x8000U & vlSelf->top__DOT__de__DOT__bne));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__bne 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__bne))) {
        ++(vlSymsp->__Vcoverage[3925]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bne = 
            ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bne) 
             | (0x10000U & vlSelf->top__DOT__de__DOT__bne));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__bne 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__bne))) {
        ++(vlSymsp->__Vcoverage[3926]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bne = 
            ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bne) 
             | (0x20000U & vlSelf->top__DOT__de__DOT__bne));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__bne 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__bne))) {
        ++(vlSymsp->__Vcoverage[3927]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bne = 
            ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bne) 
             | (0x40000U & vlSelf->top__DOT__de__DOT__bne));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__bne 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__bne))) {
        ++(vlSymsp->__Vcoverage[3928]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bne = 
            ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bne) 
             | (0x80000U & vlSelf->top__DOT__de__DOT__bne));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__bne 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__bne))) {
        ++(vlSymsp->__Vcoverage[3929]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bne = 
            ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bne) 
             | (0x100000U & vlSelf->top__DOT__de__DOT__bne));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__bne 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__bne))) {
        ++(vlSymsp->__Vcoverage[3930]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bne = 
            ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bne) 
             | (0x200000U & vlSelf->top__DOT__de__DOT__bne));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__bne 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__bne))) {
        ++(vlSymsp->__Vcoverage[3931]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bne = 
            ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bne) 
             | (0x400000U & vlSelf->top__DOT__de__DOT__bne));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__bne 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__bne))) {
        ++(vlSymsp->__Vcoverage[3932]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bne = 
            ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bne) 
             | (0x800000U & vlSelf->top__DOT__de__DOT__bne));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__bne 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__bne))) {
        ++(vlSymsp->__Vcoverage[3933]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bne = 
            ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bne) 
             | (0x1000000U & vlSelf->top__DOT__de__DOT__bne));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__bne 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__bne))) {
        ++(vlSymsp->__Vcoverage[3934]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bne = 
            ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bne) 
             | (0x2000000U & vlSelf->top__DOT__de__DOT__bne));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__bne 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__bne))) {
        ++(vlSymsp->__Vcoverage[3935]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bne = 
            ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bne) 
             | (0x4000000U & vlSelf->top__DOT__de__DOT__bne));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__bne 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__bne))) {
        ++(vlSymsp->__Vcoverage[3936]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bne = 
            ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bne) 
             | (0x8000000U & vlSelf->top__DOT__de__DOT__bne));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__bne 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__bne))) {
        ++(vlSymsp->__Vcoverage[3937]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bne = 
            ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bne) 
             | (0x10000000U & vlSelf->top__DOT__de__DOT__bne));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__bne 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__bne))) {
        ++(vlSymsp->__Vcoverage[3938]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bne = 
            ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bne) 
             | (0x20000000U & vlSelf->top__DOT__de__DOT__bne));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__bne 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__bne))) {
        ++(vlSymsp->__Vcoverage[3939]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bne = 
            ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bne) 
             | (0x40000000U & vlSelf->top__DOT__de__DOT__bne));
    }
    if (((vlSelf->top__DOT__de__DOT__bne ^ vlSelf->top__DOT__de__DOT____Vtogcov__bne) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3940]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bne = 
            ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bne) 
             | (0x80000000U & vlSelf->top__DOT__de__DOT__bne));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__bge ^ vlSelf->top__DOT__de__DOT____Vtogcov__bge))) {
        ++(vlSymsp->__Vcoverage[3941]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bge = 
            ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__bge) 
             | (1U & vlSelf->top__DOT__de__DOT__bge));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__bge ^ vlSelf->top__DOT__de__DOT____Vtogcov__bge))) {
        ++(vlSymsp->__Vcoverage[3942]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bge = 
            ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__bge) 
             | (2U & vlSelf->top__DOT__de__DOT__bge));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__bge ^ vlSelf->top__DOT__de__DOT____Vtogcov__bge))) {
        ++(vlSymsp->__Vcoverage[3943]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bge = 
            ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__bge) 
             | (4U & vlSelf->top__DOT__de__DOT__bge));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__bge ^ vlSelf->top__DOT__de__DOT____Vtogcov__bge))) {
        ++(vlSymsp->__Vcoverage[3944]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bge = 
            ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__bge) 
             | (8U & vlSelf->top__DOT__de__DOT__bge));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__bge ^ vlSelf->top__DOT__de__DOT____Vtogcov__bge))) {
        ++(vlSymsp->__Vcoverage[3945]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bge = 
            ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__bge) 
             | (0x10U & vlSelf->top__DOT__de__DOT__bge));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__bge ^ vlSelf->top__DOT__de__DOT____Vtogcov__bge))) {
        ++(vlSymsp->__Vcoverage[3946]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bge = 
            ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__bge) 
             | (0x20U & vlSelf->top__DOT__de__DOT__bge));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__bge ^ vlSelf->top__DOT__de__DOT____Vtogcov__bge))) {
        ++(vlSymsp->__Vcoverage[3947]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bge = 
            ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__bge) 
             | (0x40U & vlSelf->top__DOT__de__DOT__bge));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__bge ^ vlSelf->top__DOT__de__DOT____Vtogcov__bge))) {
        ++(vlSymsp->__Vcoverage[3948]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bge = 
            ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__bge) 
             | (0x80U & vlSelf->top__DOT__de__DOT__bge));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__bge ^ vlSelf->top__DOT__de__DOT____Vtogcov__bge))) {
        ++(vlSymsp->__Vcoverage[3949]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bge = 
            ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__bge) 
             | (0x100U & vlSelf->top__DOT__de__DOT__bge));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__bge ^ vlSelf->top__DOT__de__DOT____Vtogcov__bge))) {
        ++(vlSymsp->__Vcoverage[3950]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bge = 
            ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__bge) 
             | (0x200U & vlSelf->top__DOT__de__DOT__bge));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__bge ^ vlSelf->top__DOT__de__DOT____Vtogcov__bge))) {
        ++(vlSymsp->__Vcoverage[3951]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bge = 
            ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__bge) 
             | (0x400U & vlSelf->top__DOT__de__DOT__bge));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__bge ^ vlSelf->top__DOT__de__DOT____Vtogcov__bge))) {
        ++(vlSymsp->__Vcoverage[3952]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bge = 
            ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__bge) 
             | (0x800U & vlSelf->top__DOT__de__DOT__bge));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__bge 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__bge))) {
        ++(vlSymsp->__Vcoverage[3953]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bge = 
            ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__bge) 
             | (0x1000U & vlSelf->top__DOT__de__DOT__bge));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__bge 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__bge))) {
        ++(vlSymsp->__Vcoverage[3954]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bge = 
            ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__bge) 
             | (0x2000U & vlSelf->top__DOT__de__DOT__bge));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__bge 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__bge))) {
        ++(vlSymsp->__Vcoverage[3955]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bge = 
            ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__bge) 
             | (0x4000U & vlSelf->top__DOT__de__DOT__bge));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__bge 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__bge))) {
        ++(vlSymsp->__Vcoverage[3956]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bge = 
            ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__bge) 
             | (0x8000U & vlSelf->top__DOT__de__DOT__bge));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__bge 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__bge))) {
        ++(vlSymsp->__Vcoverage[3957]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bge = 
            ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bge) 
             | (0x10000U & vlSelf->top__DOT__de__DOT__bge));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__bge 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__bge))) {
        ++(vlSymsp->__Vcoverage[3958]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bge = 
            ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bge) 
             | (0x20000U & vlSelf->top__DOT__de__DOT__bge));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__bge 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__bge))) {
        ++(vlSymsp->__Vcoverage[3959]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bge = 
            ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bge) 
             | (0x40000U & vlSelf->top__DOT__de__DOT__bge));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__bge 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__bge))) {
        ++(vlSymsp->__Vcoverage[3960]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bge = 
            ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bge) 
             | (0x80000U & vlSelf->top__DOT__de__DOT__bge));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__bge 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__bge))) {
        ++(vlSymsp->__Vcoverage[3961]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bge = 
            ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bge) 
             | (0x100000U & vlSelf->top__DOT__de__DOT__bge));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__bge 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__bge))) {
        ++(vlSymsp->__Vcoverage[3962]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bge = 
            ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bge) 
             | (0x200000U & vlSelf->top__DOT__de__DOT__bge));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__bge 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__bge))) {
        ++(vlSymsp->__Vcoverage[3963]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bge = 
            ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bge) 
             | (0x400000U & vlSelf->top__DOT__de__DOT__bge));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__bge 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__bge))) {
        ++(vlSymsp->__Vcoverage[3964]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bge = 
            ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bge) 
             | (0x800000U & vlSelf->top__DOT__de__DOT__bge));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__bge 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__bge))) {
        ++(vlSymsp->__Vcoverage[3965]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bge = 
            ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bge) 
             | (0x1000000U & vlSelf->top__DOT__de__DOT__bge));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__bge 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__bge))) {
        ++(vlSymsp->__Vcoverage[3966]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bge = 
            ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bge) 
             | (0x2000000U & vlSelf->top__DOT__de__DOT__bge));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__bge 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__bge))) {
        ++(vlSymsp->__Vcoverage[3967]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bge = 
            ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bge) 
             | (0x4000000U & vlSelf->top__DOT__de__DOT__bge));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__bge 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__bge))) {
        ++(vlSymsp->__Vcoverage[3968]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bge = 
            ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bge) 
             | (0x8000000U & vlSelf->top__DOT__de__DOT__bge));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__bge 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__bge))) {
        ++(vlSymsp->__Vcoverage[3969]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bge = 
            ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bge) 
             | (0x10000000U & vlSelf->top__DOT__de__DOT__bge));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__bge 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__bge))) {
        ++(vlSymsp->__Vcoverage[3970]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bge = 
            ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bge) 
             | (0x20000000U & vlSelf->top__DOT__de__DOT__bge));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__bge 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__bge))) {
        ++(vlSymsp->__Vcoverage[3971]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bge = 
            ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bge) 
             | (0x40000000U & vlSelf->top__DOT__de__DOT__bge));
    }
    if (((vlSelf->top__DOT__de__DOT__bge ^ vlSelf->top__DOT__de__DOT____Vtogcov__bge) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3972]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bge = 
            ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bge) 
             | (0x80000000U & vlSelf->top__DOT__de__DOT__bge));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__bgeu ^ vlSelf->top__DOT__de__DOT____Vtogcov__bgeu))) {
        ++(vlSymsp->__Vcoverage[3973]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bgeu 
            = ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__bgeu) 
               | (1U & vlSelf->top__DOT__de__DOT__bgeu));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__bgeu ^ vlSelf->top__DOT__de__DOT____Vtogcov__bgeu))) {
        ++(vlSymsp->__Vcoverage[3974]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bgeu 
            = ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__bgeu) 
               | (2U & vlSelf->top__DOT__de__DOT__bgeu));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__bgeu ^ vlSelf->top__DOT__de__DOT____Vtogcov__bgeu))) {
        ++(vlSymsp->__Vcoverage[3975]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bgeu 
            = ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__bgeu) 
               | (4U & vlSelf->top__DOT__de__DOT__bgeu));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__bgeu ^ vlSelf->top__DOT__de__DOT____Vtogcov__bgeu))) {
        ++(vlSymsp->__Vcoverage[3976]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bgeu 
            = ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__bgeu) 
               | (8U & vlSelf->top__DOT__de__DOT__bgeu));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__bgeu ^ vlSelf->top__DOT__de__DOT____Vtogcov__bgeu))) {
        ++(vlSymsp->__Vcoverage[3977]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bgeu 
            = ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__bgeu) 
               | (0x10U & vlSelf->top__DOT__de__DOT__bgeu));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__bgeu ^ vlSelf->top__DOT__de__DOT____Vtogcov__bgeu))) {
        ++(vlSymsp->__Vcoverage[3978]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bgeu 
            = ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__bgeu) 
               | (0x20U & vlSelf->top__DOT__de__DOT__bgeu));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__bgeu ^ vlSelf->top__DOT__de__DOT____Vtogcov__bgeu))) {
        ++(vlSymsp->__Vcoverage[3979]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bgeu 
            = ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__bgeu) 
               | (0x40U & vlSelf->top__DOT__de__DOT__bgeu));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__bgeu ^ vlSelf->top__DOT__de__DOT____Vtogcov__bgeu))) {
        ++(vlSymsp->__Vcoverage[3980]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bgeu 
            = ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__bgeu) 
               | (0x80U & vlSelf->top__DOT__de__DOT__bgeu));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__bgeu 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__bgeu))) {
        ++(vlSymsp->__Vcoverage[3981]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bgeu 
            = ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__bgeu) 
               | (0x100U & vlSelf->top__DOT__de__DOT__bgeu));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__bgeu 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__bgeu))) {
        ++(vlSymsp->__Vcoverage[3982]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bgeu 
            = ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__bgeu) 
               | (0x200U & vlSelf->top__DOT__de__DOT__bgeu));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__bgeu 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__bgeu))) {
        ++(vlSymsp->__Vcoverage[3983]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bgeu 
            = ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__bgeu) 
               | (0x400U & vlSelf->top__DOT__de__DOT__bgeu));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__bgeu 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__bgeu))) {
        ++(vlSymsp->__Vcoverage[3984]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bgeu 
            = ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__bgeu) 
               | (0x800U & vlSelf->top__DOT__de__DOT__bgeu));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__bgeu 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__bgeu))) {
        ++(vlSymsp->__Vcoverage[3985]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bgeu 
            = ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__bgeu) 
               | (0x1000U & vlSelf->top__DOT__de__DOT__bgeu));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__bgeu 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__bgeu))) {
        ++(vlSymsp->__Vcoverage[3986]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bgeu 
            = ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__bgeu) 
               | (0x2000U & vlSelf->top__DOT__de__DOT__bgeu));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__bgeu 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__bgeu))) {
        ++(vlSymsp->__Vcoverage[3987]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bgeu 
            = ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__bgeu) 
               | (0x4000U & vlSelf->top__DOT__de__DOT__bgeu));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__bgeu 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__bgeu))) {
        ++(vlSymsp->__Vcoverage[3988]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bgeu 
            = ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__bgeu) 
               | (0x8000U & vlSelf->top__DOT__de__DOT__bgeu));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__bgeu 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__bgeu))) {
        ++(vlSymsp->__Vcoverage[3989]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bgeu 
            = ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bgeu) 
               | (0x10000U & vlSelf->top__DOT__de__DOT__bgeu));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__bgeu 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__bgeu))) {
        ++(vlSymsp->__Vcoverage[3990]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bgeu 
            = ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bgeu) 
               | (0x20000U & vlSelf->top__DOT__de__DOT__bgeu));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__bgeu 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__bgeu))) {
        ++(vlSymsp->__Vcoverage[3991]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bgeu 
            = ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bgeu) 
               | (0x40000U & vlSelf->top__DOT__de__DOT__bgeu));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__bgeu 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__bgeu))) {
        ++(vlSymsp->__Vcoverage[3992]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bgeu 
            = ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bgeu) 
               | (0x80000U & vlSelf->top__DOT__de__DOT__bgeu));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__bgeu 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__bgeu))) {
        ++(vlSymsp->__Vcoverage[3993]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bgeu 
            = ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bgeu) 
               | (0x100000U & vlSelf->top__DOT__de__DOT__bgeu));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__bgeu 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__bgeu))) {
        ++(vlSymsp->__Vcoverage[3994]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bgeu 
            = ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bgeu) 
               | (0x200000U & vlSelf->top__DOT__de__DOT__bgeu));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__bgeu 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__bgeu))) {
        ++(vlSymsp->__Vcoverage[3995]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bgeu 
            = ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bgeu) 
               | (0x400000U & vlSelf->top__DOT__de__DOT__bgeu));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__bgeu 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__bgeu))) {
        ++(vlSymsp->__Vcoverage[3996]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bgeu 
            = ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bgeu) 
               | (0x800000U & vlSelf->top__DOT__de__DOT__bgeu));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__bgeu 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__bgeu))) {
        ++(vlSymsp->__Vcoverage[3997]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bgeu 
            = ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bgeu) 
               | (0x1000000U & vlSelf->top__DOT__de__DOT__bgeu));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__bgeu 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__bgeu))) {
        ++(vlSymsp->__Vcoverage[3998]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bgeu 
            = ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bgeu) 
               | (0x2000000U & vlSelf->top__DOT__de__DOT__bgeu));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__bgeu 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__bgeu))) {
        ++(vlSymsp->__Vcoverage[3999]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bgeu 
            = ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bgeu) 
               | (0x4000000U & vlSelf->top__DOT__de__DOT__bgeu));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__bgeu 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__bgeu))) {
        ++(vlSymsp->__Vcoverage[4000]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bgeu 
            = ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bgeu) 
               | (0x8000000U & vlSelf->top__DOT__de__DOT__bgeu));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__bgeu 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__bgeu))) {
        ++(vlSymsp->__Vcoverage[4001]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bgeu 
            = ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bgeu) 
               | (0x10000000U & vlSelf->top__DOT__de__DOT__bgeu));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__bgeu 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__bgeu))) {
        ++(vlSymsp->__Vcoverage[4002]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bgeu 
            = ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bgeu) 
               | (0x20000000U & vlSelf->top__DOT__de__DOT__bgeu));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__bgeu 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__bgeu))) {
        ++(vlSymsp->__Vcoverage[4003]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bgeu 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bgeu) 
               | (0x40000000U & vlSelf->top__DOT__de__DOT__bgeu));
    }
    if (((vlSelf->top__DOT__de__DOT__bgeu ^ vlSelf->top__DOT__de__DOT____Vtogcov__bgeu) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[4004]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bgeu 
            = ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bgeu) 
               | (0x80000000U & vlSelf->top__DOT__de__DOT__bgeu));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__bltu ^ vlSelf->top__DOT__de__DOT____Vtogcov__bltu))) {
        ++(vlSymsp->__Vcoverage[4005]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bltu 
            = ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__bltu) 
               | (1U & vlSelf->top__DOT__de__DOT__bltu));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__bltu ^ vlSelf->top__DOT__de__DOT____Vtogcov__bltu))) {
        ++(vlSymsp->__Vcoverage[4006]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bltu 
            = ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__bltu) 
               | (2U & vlSelf->top__DOT__de__DOT__bltu));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__bltu ^ vlSelf->top__DOT__de__DOT____Vtogcov__bltu))) {
        ++(vlSymsp->__Vcoverage[4007]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bltu 
            = ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__bltu) 
               | (4U & vlSelf->top__DOT__de__DOT__bltu));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__bltu ^ vlSelf->top__DOT__de__DOT____Vtogcov__bltu))) {
        ++(vlSymsp->__Vcoverage[4008]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bltu 
            = ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__bltu) 
               | (8U & vlSelf->top__DOT__de__DOT__bltu));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__bltu ^ vlSelf->top__DOT__de__DOT____Vtogcov__bltu))) {
        ++(vlSymsp->__Vcoverage[4009]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bltu 
            = ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__bltu) 
               | (0x10U & vlSelf->top__DOT__de__DOT__bltu));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__bltu ^ vlSelf->top__DOT__de__DOT____Vtogcov__bltu))) {
        ++(vlSymsp->__Vcoverage[4010]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bltu 
            = ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__bltu) 
               | (0x20U & vlSelf->top__DOT__de__DOT__bltu));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__bltu ^ vlSelf->top__DOT__de__DOT____Vtogcov__bltu))) {
        ++(vlSymsp->__Vcoverage[4011]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bltu 
            = ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__bltu) 
               | (0x40U & vlSelf->top__DOT__de__DOT__bltu));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__bltu ^ vlSelf->top__DOT__de__DOT____Vtogcov__bltu))) {
        ++(vlSymsp->__Vcoverage[4012]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bltu 
            = ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__bltu) 
               | (0x80U & vlSelf->top__DOT__de__DOT__bltu));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__bltu 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__bltu))) {
        ++(vlSymsp->__Vcoverage[4013]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bltu 
            = ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__bltu) 
               | (0x100U & vlSelf->top__DOT__de__DOT__bltu));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__bltu 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__bltu))) {
        ++(vlSymsp->__Vcoverage[4014]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bltu 
            = ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__bltu) 
               | (0x200U & vlSelf->top__DOT__de__DOT__bltu));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__bltu 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__bltu))) {
        ++(vlSymsp->__Vcoverage[4015]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bltu 
            = ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__bltu) 
               | (0x400U & vlSelf->top__DOT__de__DOT__bltu));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__bltu 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__bltu))) {
        ++(vlSymsp->__Vcoverage[4016]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bltu 
            = ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__bltu) 
               | (0x800U & vlSelf->top__DOT__de__DOT__bltu));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__bltu 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__bltu))) {
        ++(vlSymsp->__Vcoverage[4017]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bltu 
            = ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__bltu) 
               | (0x1000U & vlSelf->top__DOT__de__DOT__bltu));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__bltu 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__bltu))) {
        ++(vlSymsp->__Vcoverage[4018]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bltu 
            = ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__bltu) 
               | (0x2000U & vlSelf->top__DOT__de__DOT__bltu));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__bltu 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__bltu))) {
        ++(vlSymsp->__Vcoverage[4019]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bltu 
            = ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__bltu) 
               | (0x4000U & vlSelf->top__DOT__de__DOT__bltu));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__bltu 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__bltu))) {
        ++(vlSymsp->__Vcoverage[4020]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bltu 
            = ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__bltu) 
               | (0x8000U & vlSelf->top__DOT__de__DOT__bltu));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__bltu 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__bltu))) {
        ++(vlSymsp->__Vcoverage[4021]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bltu 
            = ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bltu) 
               | (0x10000U & vlSelf->top__DOT__de__DOT__bltu));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__bltu 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__bltu))) {
        ++(vlSymsp->__Vcoverage[4022]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bltu 
            = ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bltu) 
               | (0x20000U & vlSelf->top__DOT__de__DOT__bltu));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__bltu 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__bltu))) {
        ++(vlSymsp->__Vcoverage[4023]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bltu 
            = ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bltu) 
               | (0x40000U & vlSelf->top__DOT__de__DOT__bltu));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__bltu 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__bltu))) {
        ++(vlSymsp->__Vcoverage[4024]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bltu 
            = ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bltu) 
               | (0x80000U & vlSelf->top__DOT__de__DOT__bltu));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__bltu 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__bltu))) {
        ++(vlSymsp->__Vcoverage[4025]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bltu 
            = ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bltu) 
               | (0x100000U & vlSelf->top__DOT__de__DOT__bltu));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__bltu 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__bltu))) {
        ++(vlSymsp->__Vcoverage[4026]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bltu 
            = ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bltu) 
               | (0x200000U & vlSelf->top__DOT__de__DOT__bltu));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__bltu 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__bltu))) {
        ++(vlSymsp->__Vcoverage[4027]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bltu 
            = ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bltu) 
               | (0x400000U & vlSelf->top__DOT__de__DOT__bltu));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__bltu 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__bltu))) {
        ++(vlSymsp->__Vcoverage[4028]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bltu 
            = ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bltu) 
               | (0x800000U & vlSelf->top__DOT__de__DOT__bltu));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__bltu 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__bltu))) {
        ++(vlSymsp->__Vcoverage[4029]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bltu 
            = ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bltu) 
               | (0x1000000U & vlSelf->top__DOT__de__DOT__bltu));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__bltu 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__bltu))) {
        ++(vlSymsp->__Vcoverage[4030]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bltu 
            = ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bltu) 
               | (0x2000000U & vlSelf->top__DOT__de__DOT__bltu));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__bltu 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__bltu))) {
        ++(vlSymsp->__Vcoverage[4031]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bltu 
            = ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bltu) 
               | (0x4000000U & vlSelf->top__DOT__de__DOT__bltu));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__bltu 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__bltu))) {
        ++(vlSymsp->__Vcoverage[4032]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bltu 
            = ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bltu) 
               | (0x8000000U & vlSelf->top__DOT__de__DOT__bltu));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__bltu 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__bltu))) {
        ++(vlSymsp->__Vcoverage[4033]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bltu 
            = ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bltu) 
               | (0x10000000U & vlSelf->top__DOT__de__DOT__bltu));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__bltu 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__bltu))) {
        ++(vlSymsp->__Vcoverage[4034]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bltu 
            = ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bltu) 
               | (0x20000000U & vlSelf->top__DOT__de__DOT__bltu));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__bltu 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__bltu))) {
        ++(vlSymsp->__Vcoverage[4035]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bltu 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bltu) 
               | (0x40000000U & vlSelf->top__DOT__de__DOT__bltu));
    }
    if (((vlSelf->top__DOT__de__DOT__bltu ^ vlSelf->top__DOT__de__DOT____Vtogcov__bltu) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[4036]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bltu 
            = ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bltu) 
               | (0x80000000U & vlSelf->top__DOT__de__DOT__bltu));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__blt ^ vlSelf->top__DOT__de__DOT____Vtogcov__blt))) {
        ++(vlSymsp->__Vcoverage[4037]);
        vlSelf->top__DOT__de__DOT____Vtogcov__blt = 
            ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__blt) 
             | (1U & vlSelf->top__DOT__de__DOT__blt));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__blt ^ vlSelf->top__DOT__de__DOT____Vtogcov__blt))) {
        ++(vlSymsp->__Vcoverage[4038]);
        vlSelf->top__DOT__de__DOT____Vtogcov__blt = 
            ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__blt) 
             | (2U & vlSelf->top__DOT__de__DOT__blt));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__blt ^ vlSelf->top__DOT__de__DOT____Vtogcov__blt))) {
        ++(vlSymsp->__Vcoverage[4039]);
        vlSelf->top__DOT__de__DOT____Vtogcov__blt = 
            ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__blt) 
             | (4U & vlSelf->top__DOT__de__DOT__blt));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__blt ^ vlSelf->top__DOT__de__DOT____Vtogcov__blt))) {
        ++(vlSymsp->__Vcoverage[4040]);
        vlSelf->top__DOT__de__DOT____Vtogcov__blt = 
            ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__blt) 
             | (8U & vlSelf->top__DOT__de__DOT__blt));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__blt ^ vlSelf->top__DOT__de__DOT____Vtogcov__blt))) {
        ++(vlSymsp->__Vcoverage[4041]);
        vlSelf->top__DOT__de__DOT____Vtogcov__blt = 
            ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__blt) 
             | (0x10U & vlSelf->top__DOT__de__DOT__blt));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__blt ^ vlSelf->top__DOT__de__DOT____Vtogcov__blt))) {
        ++(vlSymsp->__Vcoverage[4042]);
        vlSelf->top__DOT__de__DOT____Vtogcov__blt = 
            ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__blt) 
             | (0x20U & vlSelf->top__DOT__de__DOT__blt));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__blt ^ vlSelf->top__DOT__de__DOT____Vtogcov__blt))) {
        ++(vlSymsp->__Vcoverage[4043]);
        vlSelf->top__DOT__de__DOT____Vtogcov__blt = 
            ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__blt) 
             | (0x40U & vlSelf->top__DOT__de__DOT__blt));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__blt ^ vlSelf->top__DOT__de__DOT____Vtogcov__blt))) {
        ++(vlSymsp->__Vcoverage[4044]);
        vlSelf->top__DOT__de__DOT____Vtogcov__blt = 
            ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__blt) 
             | (0x80U & vlSelf->top__DOT__de__DOT__blt));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__blt ^ vlSelf->top__DOT__de__DOT____Vtogcov__blt))) {
        ++(vlSymsp->__Vcoverage[4045]);
        vlSelf->top__DOT__de__DOT____Vtogcov__blt = 
            ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__blt) 
             | (0x100U & vlSelf->top__DOT__de__DOT__blt));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__blt ^ vlSelf->top__DOT__de__DOT____Vtogcov__blt))) {
        ++(vlSymsp->__Vcoverage[4046]);
        vlSelf->top__DOT__de__DOT____Vtogcov__blt = 
            ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__blt) 
             | (0x200U & vlSelf->top__DOT__de__DOT__blt));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__blt ^ vlSelf->top__DOT__de__DOT____Vtogcov__blt))) {
        ++(vlSymsp->__Vcoverage[4047]);
        vlSelf->top__DOT__de__DOT____Vtogcov__blt = 
            ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__blt) 
             | (0x400U & vlSelf->top__DOT__de__DOT__blt));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__blt ^ vlSelf->top__DOT__de__DOT____Vtogcov__blt))) {
        ++(vlSymsp->__Vcoverage[4048]);
        vlSelf->top__DOT__de__DOT____Vtogcov__blt = 
            ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__blt) 
             | (0x800U & vlSelf->top__DOT__de__DOT__blt));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__blt 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__blt))) {
        ++(vlSymsp->__Vcoverage[4049]);
        vlSelf->top__DOT__de__DOT____Vtogcov__blt = 
            ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__blt) 
             | (0x1000U & vlSelf->top__DOT__de__DOT__blt));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__blt 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__blt))) {
        ++(vlSymsp->__Vcoverage[4050]);
        vlSelf->top__DOT__de__DOT____Vtogcov__blt = 
            ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__blt) 
             | (0x2000U & vlSelf->top__DOT__de__DOT__blt));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__blt 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__blt))) {
        ++(vlSymsp->__Vcoverage[4051]);
        vlSelf->top__DOT__de__DOT____Vtogcov__blt = 
            ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__blt) 
             | (0x4000U & vlSelf->top__DOT__de__DOT__blt));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__blt 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__blt))) {
        ++(vlSymsp->__Vcoverage[4052]);
        vlSelf->top__DOT__de__DOT____Vtogcov__blt = 
            ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__blt) 
             | (0x8000U & vlSelf->top__DOT__de__DOT__blt));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__blt 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__blt))) {
        ++(vlSymsp->__Vcoverage[4053]);
        vlSelf->top__DOT__de__DOT____Vtogcov__blt = 
            ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__blt) 
             | (0x10000U & vlSelf->top__DOT__de__DOT__blt));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__blt 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__blt))) {
        ++(vlSymsp->__Vcoverage[4054]);
        vlSelf->top__DOT__de__DOT____Vtogcov__blt = 
            ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__blt) 
             | (0x20000U & vlSelf->top__DOT__de__DOT__blt));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__blt 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__blt))) {
        ++(vlSymsp->__Vcoverage[4055]);
        vlSelf->top__DOT__de__DOT____Vtogcov__blt = 
            ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__blt) 
             | (0x40000U & vlSelf->top__DOT__de__DOT__blt));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__blt 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__blt))) {
        ++(vlSymsp->__Vcoverage[4056]);
        vlSelf->top__DOT__de__DOT____Vtogcov__blt = 
            ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__blt) 
             | (0x80000U & vlSelf->top__DOT__de__DOT__blt));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__blt 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__blt))) {
        ++(vlSymsp->__Vcoverage[4057]);
        vlSelf->top__DOT__de__DOT____Vtogcov__blt = 
            ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__blt) 
             | (0x100000U & vlSelf->top__DOT__de__DOT__blt));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__blt 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__blt))) {
        ++(vlSymsp->__Vcoverage[4058]);
        vlSelf->top__DOT__de__DOT____Vtogcov__blt = 
            ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__blt) 
             | (0x200000U & vlSelf->top__DOT__de__DOT__blt));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__blt 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__blt))) {
        ++(vlSymsp->__Vcoverage[4059]);
        vlSelf->top__DOT__de__DOT____Vtogcov__blt = 
            ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__blt) 
             | (0x400000U & vlSelf->top__DOT__de__DOT__blt));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__blt 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__blt))) {
        ++(vlSymsp->__Vcoverage[4060]);
        vlSelf->top__DOT__de__DOT____Vtogcov__blt = 
            ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__blt) 
             | (0x800000U & vlSelf->top__DOT__de__DOT__blt));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__blt 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__blt))) {
        ++(vlSymsp->__Vcoverage[4061]);
        vlSelf->top__DOT__de__DOT____Vtogcov__blt = 
            ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__blt) 
             | (0x1000000U & vlSelf->top__DOT__de__DOT__blt));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__blt 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__blt))) {
        ++(vlSymsp->__Vcoverage[4062]);
        vlSelf->top__DOT__de__DOT____Vtogcov__blt = 
            ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__blt) 
             | (0x2000000U & vlSelf->top__DOT__de__DOT__blt));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__blt 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__blt))) {
        ++(vlSymsp->__Vcoverage[4063]);
        vlSelf->top__DOT__de__DOT____Vtogcov__blt = 
            ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__blt) 
             | (0x4000000U & vlSelf->top__DOT__de__DOT__blt));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__blt 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__blt))) {
        ++(vlSymsp->__Vcoverage[4064]);
        vlSelf->top__DOT__de__DOT____Vtogcov__blt = 
            ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__blt) 
             | (0x8000000U & vlSelf->top__DOT__de__DOT__blt));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__blt 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__blt))) {
        ++(vlSymsp->__Vcoverage[4065]);
        vlSelf->top__DOT__de__DOT____Vtogcov__blt = 
            ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__blt) 
             | (0x10000000U & vlSelf->top__DOT__de__DOT__blt));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__blt 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__blt))) {
        ++(vlSymsp->__Vcoverage[4066]);
        vlSelf->top__DOT__de__DOT____Vtogcov__blt = 
            ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__blt) 
             | (0x20000000U & vlSelf->top__DOT__de__DOT__blt));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__blt 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__blt))) {
        ++(vlSymsp->__Vcoverage[4067]);
        vlSelf->top__DOT__de__DOT____Vtogcov__blt = 
            ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__blt) 
             | (0x40000000U & vlSelf->top__DOT__de__DOT__blt));
    }
    if (((vlSelf->top__DOT__de__DOT__blt ^ vlSelf->top__DOT__de__DOT____Vtogcov__blt) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[4068]);
        vlSelf->top__DOT__de__DOT____Vtogcov__blt = 
            ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__blt) 
             | (0x80000000U & vlSelf->top__DOT__de__DOT__blt));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__sd ^ vlSelf->top__DOT__de__DOT____Vtogcov__sd))) {
        ++(vlSymsp->__Vcoverage[2885]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sd = 
            ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__sd) 
             | (1U & vlSelf->top__DOT__de__DOT__sd));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__sd ^ vlSelf->top__DOT__de__DOT____Vtogcov__sd))) {
        ++(vlSymsp->__Vcoverage[2886]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sd = 
            ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__sd) 
             | (2U & vlSelf->top__DOT__de__DOT__sd));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__sd ^ vlSelf->top__DOT__de__DOT____Vtogcov__sd))) {
        ++(vlSymsp->__Vcoverage[2887]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sd = 
            ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__sd) 
             | (4U & vlSelf->top__DOT__de__DOT__sd));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__sd ^ vlSelf->top__DOT__de__DOT____Vtogcov__sd))) {
        ++(vlSymsp->__Vcoverage[2888]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sd = 
            ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__sd) 
             | (8U & vlSelf->top__DOT__de__DOT__sd));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__sd ^ vlSelf->top__DOT__de__DOT____Vtogcov__sd))) {
        ++(vlSymsp->__Vcoverage[2889]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sd = 
            ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__sd) 
             | (0x10U & vlSelf->top__DOT__de__DOT__sd));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__sd ^ vlSelf->top__DOT__de__DOT____Vtogcov__sd))) {
        ++(vlSymsp->__Vcoverage[2890]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sd = 
            ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__sd) 
             | (0x20U & vlSelf->top__DOT__de__DOT__sd));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__sd ^ vlSelf->top__DOT__de__DOT____Vtogcov__sd))) {
        ++(vlSymsp->__Vcoverage[2891]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sd = 
            ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__sd) 
             | (0x40U & vlSelf->top__DOT__de__DOT__sd));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__sd ^ vlSelf->top__DOT__de__DOT____Vtogcov__sd))) {
        ++(vlSymsp->__Vcoverage[2892]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sd = 
            ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__sd) 
             | (0x80U & vlSelf->top__DOT__de__DOT__sd));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__sd ^ vlSelf->top__DOT__de__DOT____Vtogcov__sd))) {
        ++(vlSymsp->__Vcoverage[2893]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sd = 
            ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__sd) 
             | (0x100U & vlSelf->top__DOT__de__DOT__sd));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__sd ^ vlSelf->top__DOT__de__DOT____Vtogcov__sd))) {
        ++(vlSymsp->__Vcoverage[2894]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sd = 
            ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__sd) 
             | (0x200U & vlSelf->top__DOT__de__DOT__sd));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__sd ^ vlSelf->top__DOT__de__DOT____Vtogcov__sd))) {
        ++(vlSymsp->__Vcoverage[2895]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sd = 
            ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__sd) 
             | (0x400U & vlSelf->top__DOT__de__DOT__sd));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__sd ^ vlSelf->top__DOT__de__DOT____Vtogcov__sd))) {
        ++(vlSymsp->__Vcoverage[2896]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sd = 
            ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__sd) 
             | (0x800U & vlSelf->top__DOT__de__DOT__sd));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__sd ^ vlSelf->top__DOT__de__DOT____Vtogcov__sd))) {
        ++(vlSymsp->__Vcoverage[2897]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sd = 
            ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__sd) 
             | (0x1000U & vlSelf->top__DOT__de__DOT__sd));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__sd ^ vlSelf->top__DOT__de__DOT____Vtogcov__sd))) {
        ++(vlSymsp->__Vcoverage[2898]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sd = 
            ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__sd) 
             | (0x2000U & vlSelf->top__DOT__de__DOT__sd));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__sd ^ vlSelf->top__DOT__de__DOT____Vtogcov__sd))) {
        ++(vlSymsp->__Vcoverage[2899]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sd = 
            ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__sd) 
             | (0x4000U & vlSelf->top__DOT__de__DOT__sd));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__sd ^ vlSelf->top__DOT__de__DOT____Vtogcov__sd))) {
        ++(vlSymsp->__Vcoverage[2900]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sd = 
            ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__sd) 
             | (0x8000U & vlSelf->top__DOT__de__DOT__sd));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__sd 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sd))) {
        ++(vlSymsp->__Vcoverage[2901]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sd = 
            ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sd) 
             | (0x10000U & vlSelf->top__DOT__de__DOT__sd));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__sd 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sd))) {
        ++(vlSymsp->__Vcoverage[2902]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sd = 
            ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sd) 
             | (0x20000U & vlSelf->top__DOT__de__DOT__sd));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__sd 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sd))) {
        ++(vlSymsp->__Vcoverage[2903]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sd = 
            ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sd) 
             | (0x40000U & vlSelf->top__DOT__de__DOT__sd));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__sd 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sd))) {
        ++(vlSymsp->__Vcoverage[2904]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sd = 
            ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sd) 
             | (0x80000U & vlSelf->top__DOT__de__DOT__sd));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__sd 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sd))) {
        ++(vlSymsp->__Vcoverage[2905]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sd = 
            ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sd) 
             | (0x100000U & vlSelf->top__DOT__de__DOT__sd));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__sd 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sd))) {
        ++(vlSymsp->__Vcoverage[2906]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sd = 
            ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sd) 
             | (0x200000U & vlSelf->top__DOT__de__DOT__sd));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__sd 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sd))) {
        ++(vlSymsp->__Vcoverage[2907]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sd = 
            ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sd) 
             | (0x400000U & vlSelf->top__DOT__de__DOT__sd));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__sd 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sd))) {
        ++(vlSymsp->__Vcoverage[2908]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sd = 
            ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sd) 
             | (0x800000U & vlSelf->top__DOT__de__DOT__sd));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__sd 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sd))) {
        ++(vlSymsp->__Vcoverage[2909]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sd = 
            ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sd) 
             | (0x1000000U & vlSelf->top__DOT__de__DOT__sd));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__sd 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sd))) {
        ++(vlSymsp->__Vcoverage[2910]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sd = 
            ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sd) 
             | (0x2000000U & vlSelf->top__DOT__de__DOT__sd));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__sd 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sd))) {
        ++(vlSymsp->__Vcoverage[2911]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sd = 
            ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sd) 
             | (0x4000000U & vlSelf->top__DOT__de__DOT__sd));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__sd 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sd))) {
        ++(vlSymsp->__Vcoverage[2912]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sd = 
            ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sd) 
             | (0x8000000U & vlSelf->top__DOT__de__DOT__sd));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__sd 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__sd))) {
        ++(vlSymsp->__Vcoverage[2913]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sd = 
            ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sd) 
             | (0x10000000U & vlSelf->top__DOT__de__DOT__sd));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__sd 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__sd))) {
        ++(vlSymsp->__Vcoverage[2914]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sd = 
            ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sd) 
             | (0x20000000U & vlSelf->top__DOT__de__DOT__sd));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__sd 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__sd))) {
        ++(vlSymsp->__Vcoverage[2915]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sd = 
            ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sd) 
             | (0x40000000U & vlSelf->top__DOT__de__DOT__sd));
    }
    if (((vlSelf->top__DOT__de__DOT__sd ^ vlSelf->top__DOT__de__DOT____Vtogcov__sd) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2916]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sd = 
            ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sd) 
             | (0x80000000U & vlSelf->top__DOT__de__DOT__sd));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__sh ^ vlSelf->top__DOT__de__DOT____Vtogcov__sh))) {
        ++(vlSymsp->__Vcoverage[2917]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sh = 
            ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__sh) 
             | (1U & vlSelf->top__DOT__de__DOT__sh));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__sh ^ vlSelf->top__DOT__de__DOT____Vtogcov__sh))) {
        ++(vlSymsp->__Vcoverage[2918]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sh = 
            ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__sh) 
             | (2U & vlSelf->top__DOT__de__DOT__sh));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__sh ^ vlSelf->top__DOT__de__DOT____Vtogcov__sh))) {
        ++(vlSymsp->__Vcoverage[2919]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sh = 
            ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__sh) 
             | (4U & vlSelf->top__DOT__de__DOT__sh));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__sh ^ vlSelf->top__DOT__de__DOT____Vtogcov__sh))) {
        ++(vlSymsp->__Vcoverage[2920]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sh = 
            ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__sh) 
             | (8U & vlSelf->top__DOT__de__DOT__sh));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__sh ^ vlSelf->top__DOT__de__DOT____Vtogcov__sh))) {
        ++(vlSymsp->__Vcoverage[2921]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sh = 
            ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__sh) 
             | (0x10U & vlSelf->top__DOT__de__DOT__sh));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__sh ^ vlSelf->top__DOT__de__DOT____Vtogcov__sh))) {
        ++(vlSymsp->__Vcoverage[2922]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sh = 
            ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__sh) 
             | (0x20U & vlSelf->top__DOT__de__DOT__sh));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__sh ^ vlSelf->top__DOT__de__DOT____Vtogcov__sh))) {
        ++(vlSymsp->__Vcoverage[2923]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sh = 
            ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__sh) 
             | (0x40U & vlSelf->top__DOT__de__DOT__sh));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__sh ^ vlSelf->top__DOT__de__DOT____Vtogcov__sh))) {
        ++(vlSymsp->__Vcoverage[2924]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sh = 
            ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__sh) 
             | (0x80U & vlSelf->top__DOT__de__DOT__sh));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__sh ^ vlSelf->top__DOT__de__DOT____Vtogcov__sh))) {
        ++(vlSymsp->__Vcoverage[2925]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sh = 
            ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__sh) 
             | (0x100U & vlSelf->top__DOT__de__DOT__sh));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__sh ^ vlSelf->top__DOT__de__DOT____Vtogcov__sh))) {
        ++(vlSymsp->__Vcoverage[2926]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sh = 
            ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__sh) 
             | (0x200U & vlSelf->top__DOT__de__DOT__sh));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__sh ^ vlSelf->top__DOT__de__DOT____Vtogcov__sh))) {
        ++(vlSymsp->__Vcoverage[2927]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sh = 
            ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__sh) 
             | (0x400U & vlSelf->top__DOT__de__DOT__sh));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__sh ^ vlSelf->top__DOT__de__DOT____Vtogcov__sh))) {
        ++(vlSymsp->__Vcoverage[2928]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sh = 
            ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__sh) 
             | (0x800U & vlSelf->top__DOT__de__DOT__sh));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__sh ^ vlSelf->top__DOT__de__DOT____Vtogcov__sh))) {
        ++(vlSymsp->__Vcoverage[2929]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sh = 
            ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__sh) 
             | (0x1000U & vlSelf->top__DOT__de__DOT__sh));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__sh ^ vlSelf->top__DOT__de__DOT____Vtogcov__sh))) {
        ++(vlSymsp->__Vcoverage[2930]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sh = 
            ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__sh) 
             | (0x2000U & vlSelf->top__DOT__de__DOT__sh));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__sh ^ vlSelf->top__DOT__de__DOT____Vtogcov__sh))) {
        ++(vlSymsp->__Vcoverage[2931]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sh = 
            ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__sh) 
             | (0x4000U & vlSelf->top__DOT__de__DOT__sh));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__sh ^ vlSelf->top__DOT__de__DOT____Vtogcov__sh))) {
        ++(vlSymsp->__Vcoverage[2932]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sh = 
            ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__sh) 
             | (0x8000U & vlSelf->top__DOT__de__DOT__sh));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__sh 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sh))) {
        ++(vlSymsp->__Vcoverage[2933]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sh = 
            ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sh) 
             | (0x10000U & vlSelf->top__DOT__de__DOT__sh));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__sh 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sh))) {
        ++(vlSymsp->__Vcoverage[2934]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sh = 
            ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sh) 
             | (0x20000U & vlSelf->top__DOT__de__DOT__sh));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__sh 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sh))) {
        ++(vlSymsp->__Vcoverage[2935]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sh = 
            ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sh) 
             | (0x40000U & vlSelf->top__DOT__de__DOT__sh));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__sh 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sh))) {
        ++(vlSymsp->__Vcoverage[2936]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sh = 
            ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sh) 
             | (0x80000U & vlSelf->top__DOT__de__DOT__sh));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__sh 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sh))) {
        ++(vlSymsp->__Vcoverage[2937]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sh = 
            ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sh) 
             | (0x100000U & vlSelf->top__DOT__de__DOT__sh));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__sh 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sh))) {
        ++(vlSymsp->__Vcoverage[2938]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sh = 
            ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sh) 
             | (0x200000U & vlSelf->top__DOT__de__DOT__sh));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__sh 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sh))) {
        ++(vlSymsp->__Vcoverage[2939]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sh = 
            ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sh) 
             | (0x400000U & vlSelf->top__DOT__de__DOT__sh));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__sh 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sh))) {
        ++(vlSymsp->__Vcoverage[2940]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sh = 
            ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sh) 
             | (0x800000U & vlSelf->top__DOT__de__DOT__sh));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__sh 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sh))) {
        ++(vlSymsp->__Vcoverage[2941]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sh = 
            ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sh) 
             | (0x1000000U & vlSelf->top__DOT__de__DOT__sh));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__sh 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sh))) {
        ++(vlSymsp->__Vcoverage[2942]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sh = 
            ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sh) 
             | (0x2000000U & vlSelf->top__DOT__de__DOT__sh));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__sh 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sh))) {
        ++(vlSymsp->__Vcoverage[2943]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sh = 
            ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sh) 
             | (0x4000000U & vlSelf->top__DOT__de__DOT__sh));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__sh 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sh))) {
        ++(vlSymsp->__Vcoverage[2944]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sh = 
            ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sh) 
             | (0x8000000U & vlSelf->top__DOT__de__DOT__sh));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__sh 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__sh))) {
        ++(vlSymsp->__Vcoverage[2945]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sh = 
            ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sh) 
             | (0x10000000U & vlSelf->top__DOT__de__DOT__sh));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__sh 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__sh))) {
        ++(vlSymsp->__Vcoverage[2946]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sh = 
            ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sh) 
             | (0x20000000U & vlSelf->top__DOT__de__DOT__sh));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__sh 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__sh))) {
        ++(vlSymsp->__Vcoverage[2947]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sh = 
            ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sh) 
             | (0x40000000U & vlSelf->top__DOT__de__DOT__sh));
    }
    if (((vlSelf->top__DOT__de__DOT__sh ^ vlSelf->top__DOT__de__DOT____Vtogcov__sh) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2948]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sh = 
            ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sh) 
             | (0x80000000U & vlSelf->top__DOT__de__DOT__sh));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__sw ^ vlSelf->top__DOT__de__DOT____Vtogcov__sw))) {
        ++(vlSymsp->__Vcoverage[2949]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sw = 
            ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__sw) 
             | (1U & vlSelf->top__DOT__de__DOT__sw));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__sw ^ vlSelf->top__DOT__de__DOT____Vtogcov__sw))) {
        ++(vlSymsp->__Vcoverage[2950]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sw = 
            ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__sw) 
             | (2U & vlSelf->top__DOT__de__DOT__sw));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__sw ^ vlSelf->top__DOT__de__DOT____Vtogcov__sw))) {
        ++(vlSymsp->__Vcoverage[2951]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sw = 
            ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__sw) 
             | (4U & vlSelf->top__DOT__de__DOT__sw));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__sw ^ vlSelf->top__DOT__de__DOT____Vtogcov__sw))) {
        ++(vlSymsp->__Vcoverage[2952]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sw = 
            ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__sw) 
             | (8U & vlSelf->top__DOT__de__DOT__sw));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__sw ^ vlSelf->top__DOT__de__DOT____Vtogcov__sw))) {
        ++(vlSymsp->__Vcoverage[2953]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sw = 
            ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__sw) 
             | (0x10U & vlSelf->top__DOT__de__DOT__sw));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__sw ^ vlSelf->top__DOT__de__DOT____Vtogcov__sw))) {
        ++(vlSymsp->__Vcoverage[2954]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sw = 
            ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__sw) 
             | (0x20U & vlSelf->top__DOT__de__DOT__sw));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__sw ^ vlSelf->top__DOT__de__DOT____Vtogcov__sw))) {
        ++(vlSymsp->__Vcoverage[2955]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sw = 
            ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__sw) 
             | (0x40U & vlSelf->top__DOT__de__DOT__sw));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__sw ^ vlSelf->top__DOT__de__DOT____Vtogcov__sw))) {
        ++(vlSymsp->__Vcoverage[2956]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sw = 
            ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__sw) 
             | (0x80U & vlSelf->top__DOT__de__DOT__sw));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__sw ^ vlSelf->top__DOT__de__DOT____Vtogcov__sw))) {
        ++(vlSymsp->__Vcoverage[2957]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sw = 
            ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__sw) 
             | (0x100U & vlSelf->top__DOT__de__DOT__sw));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__sw ^ vlSelf->top__DOT__de__DOT____Vtogcov__sw))) {
        ++(vlSymsp->__Vcoverage[2958]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sw = 
            ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__sw) 
             | (0x200U & vlSelf->top__DOT__de__DOT__sw));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__sw ^ vlSelf->top__DOT__de__DOT____Vtogcov__sw))) {
        ++(vlSymsp->__Vcoverage[2959]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sw = 
            ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__sw) 
             | (0x400U & vlSelf->top__DOT__de__DOT__sw));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__sw ^ vlSelf->top__DOT__de__DOT____Vtogcov__sw))) {
        ++(vlSymsp->__Vcoverage[2960]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sw = 
            ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__sw) 
             | (0x800U & vlSelf->top__DOT__de__DOT__sw));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__sw ^ vlSelf->top__DOT__de__DOT____Vtogcov__sw))) {
        ++(vlSymsp->__Vcoverage[2961]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sw = 
            ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__sw) 
             | (0x1000U & vlSelf->top__DOT__de__DOT__sw));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__sw ^ vlSelf->top__DOT__de__DOT____Vtogcov__sw))) {
        ++(vlSymsp->__Vcoverage[2962]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sw = 
            ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__sw) 
             | (0x2000U & vlSelf->top__DOT__de__DOT__sw));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__sw ^ vlSelf->top__DOT__de__DOT____Vtogcov__sw))) {
        ++(vlSymsp->__Vcoverage[2963]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sw = 
            ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__sw) 
             | (0x4000U & vlSelf->top__DOT__de__DOT__sw));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__sw ^ vlSelf->top__DOT__de__DOT____Vtogcov__sw))) {
        ++(vlSymsp->__Vcoverage[2964]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sw = 
            ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__sw) 
             | (0x8000U & vlSelf->top__DOT__de__DOT__sw));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__sw 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sw))) {
        ++(vlSymsp->__Vcoverage[2965]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sw = 
            ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sw) 
             | (0x10000U & vlSelf->top__DOT__de__DOT__sw));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__sw 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sw))) {
        ++(vlSymsp->__Vcoverage[2966]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sw = 
            ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sw) 
             | (0x20000U & vlSelf->top__DOT__de__DOT__sw));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__sw 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sw))) {
        ++(vlSymsp->__Vcoverage[2967]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sw = 
            ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sw) 
             | (0x40000U & vlSelf->top__DOT__de__DOT__sw));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__sw 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sw))) {
        ++(vlSymsp->__Vcoverage[2968]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sw = 
            ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sw) 
             | (0x80000U & vlSelf->top__DOT__de__DOT__sw));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__sw 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sw))) {
        ++(vlSymsp->__Vcoverage[2969]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sw = 
            ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sw) 
             | (0x100000U & vlSelf->top__DOT__de__DOT__sw));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__sw 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sw))) {
        ++(vlSymsp->__Vcoverage[2970]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sw = 
            ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sw) 
             | (0x200000U & vlSelf->top__DOT__de__DOT__sw));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__sw 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sw))) {
        ++(vlSymsp->__Vcoverage[2971]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sw = 
            ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sw) 
             | (0x400000U & vlSelf->top__DOT__de__DOT__sw));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__sw 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sw))) {
        ++(vlSymsp->__Vcoverage[2972]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sw = 
            ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sw) 
             | (0x800000U & vlSelf->top__DOT__de__DOT__sw));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__sw 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sw))) {
        ++(vlSymsp->__Vcoverage[2973]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sw = 
            ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sw) 
             | (0x1000000U & vlSelf->top__DOT__de__DOT__sw));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__sw 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sw))) {
        ++(vlSymsp->__Vcoverage[2974]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sw = 
            ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sw) 
             | (0x2000000U & vlSelf->top__DOT__de__DOT__sw));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__sw 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sw))) {
        ++(vlSymsp->__Vcoverage[2975]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sw = 
            ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sw) 
             | (0x4000000U & vlSelf->top__DOT__de__DOT__sw));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__sw 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sw))) {
        ++(vlSymsp->__Vcoverage[2976]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sw = 
            ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sw) 
             | (0x8000000U & vlSelf->top__DOT__de__DOT__sw));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__sw 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__sw))) {
        ++(vlSymsp->__Vcoverage[2977]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sw = 
            ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sw) 
             | (0x10000000U & vlSelf->top__DOT__de__DOT__sw));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__sw 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__sw))) {
        ++(vlSymsp->__Vcoverage[2978]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sw = 
            ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sw) 
             | (0x20000000U & vlSelf->top__DOT__de__DOT__sw));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__sw 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__sw))) {
        ++(vlSymsp->__Vcoverage[2979]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sw = 
            ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sw) 
             | (0x40000000U & vlSelf->top__DOT__de__DOT__sw));
    }
    if (((vlSelf->top__DOT__de__DOT__sw ^ vlSelf->top__DOT__de__DOT____Vtogcov__sw) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2980]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sw = 
            ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sw) 
             | (0x80000000U & vlSelf->top__DOT__de__DOT__sw));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__sb ^ vlSelf->top__DOT__de__DOT____Vtogcov__sb))) {
        ++(vlSymsp->__Vcoverage[2981]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sb = 
            ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__sb) 
             | (1U & vlSelf->top__DOT__de__DOT__sb));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__sb ^ vlSelf->top__DOT__de__DOT____Vtogcov__sb))) {
        ++(vlSymsp->__Vcoverage[2982]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sb = 
            ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__sb) 
             | (2U & vlSelf->top__DOT__de__DOT__sb));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__sb ^ vlSelf->top__DOT__de__DOT____Vtogcov__sb))) {
        ++(vlSymsp->__Vcoverage[2983]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sb = 
            ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__sb) 
             | (4U & vlSelf->top__DOT__de__DOT__sb));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__sb ^ vlSelf->top__DOT__de__DOT____Vtogcov__sb))) {
        ++(vlSymsp->__Vcoverage[2984]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sb = 
            ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__sb) 
             | (8U & vlSelf->top__DOT__de__DOT__sb));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__sb ^ vlSelf->top__DOT__de__DOT____Vtogcov__sb))) {
        ++(vlSymsp->__Vcoverage[2985]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sb = 
            ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__sb) 
             | (0x10U & vlSelf->top__DOT__de__DOT__sb));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__sb ^ vlSelf->top__DOT__de__DOT____Vtogcov__sb))) {
        ++(vlSymsp->__Vcoverage[2986]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sb = 
            ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__sb) 
             | (0x20U & vlSelf->top__DOT__de__DOT__sb));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__sb ^ vlSelf->top__DOT__de__DOT____Vtogcov__sb))) {
        ++(vlSymsp->__Vcoverage[2987]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sb = 
            ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__sb) 
             | (0x40U & vlSelf->top__DOT__de__DOT__sb));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__sb ^ vlSelf->top__DOT__de__DOT____Vtogcov__sb))) {
        ++(vlSymsp->__Vcoverage[2988]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sb = 
            ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__sb) 
             | (0x80U & vlSelf->top__DOT__de__DOT__sb));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__sb ^ vlSelf->top__DOT__de__DOT____Vtogcov__sb))) {
        ++(vlSymsp->__Vcoverage[2989]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sb = 
            ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__sb) 
             | (0x100U & vlSelf->top__DOT__de__DOT__sb));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__sb ^ vlSelf->top__DOT__de__DOT____Vtogcov__sb))) {
        ++(vlSymsp->__Vcoverage[2990]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sb = 
            ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__sb) 
             | (0x200U & vlSelf->top__DOT__de__DOT__sb));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__sb ^ vlSelf->top__DOT__de__DOT____Vtogcov__sb))) {
        ++(vlSymsp->__Vcoverage[2991]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sb = 
            ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__sb) 
             | (0x400U & vlSelf->top__DOT__de__DOT__sb));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__sb ^ vlSelf->top__DOT__de__DOT____Vtogcov__sb))) {
        ++(vlSymsp->__Vcoverage[2992]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sb = 
            ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__sb) 
             | (0x800U & vlSelf->top__DOT__de__DOT__sb));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__sb ^ vlSelf->top__DOT__de__DOT____Vtogcov__sb))) {
        ++(vlSymsp->__Vcoverage[2993]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sb = 
            ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__sb) 
             | (0x1000U & vlSelf->top__DOT__de__DOT__sb));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__sb ^ vlSelf->top__DOT__de__DOT____Vtogcov__sb))) {
        ++(vlSymsp->__Vcoverage[2994]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sb = 
            ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__sb) 
             | (0x2000U & vlSelf->top__DOT__de__DOT__sb));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__sb ^ vlSelf->top__DOT__de__DOT____Vtogcov__sb))) {
        ++(vlSymsp->__Vcoverage[2995]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sb = 
            ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__sb) 
             | (0x4000U & vlSelf->top__DOT__de__DOT__sb));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__sb ^ vlSelf->top__DOT__de__DOT____Vtogcov__sb))) {
        ++(vlSymsp->__Vcoverage[2996]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sb = 
            ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__sb) 
             | (0x8000U & vlSelf->top__DOT__de__DOT__sb));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__sb 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sb))) {
        ++(vlSymsp->__Vcoverage[2997]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sb = 
            ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sb) 
             | (0x10000U & vlSelf->top__DOT__de__DOT__sb));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__sb 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sb))) {
        ++(vlSymsp->__Vcoverage[2998]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sb = 
            ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sb) 
             | (0x20000U & vlSelf->top__DOT__de__DOT__sb));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__sb 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sb))) {
        ++(vlSymsp->__Vcoverage[2999]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sb = 
            ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sb) 
             | (0x40000U & vlSelf->top__DOT__de__DOT__sb));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__sb 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sb))) {
        ++(vlSymsp->__Vcoverage[3000]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sb = 
            ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sb) 
             | (0x80000U & vlSelf->top__DOT__de__DOT__sb));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__sb 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sb))) {
        ++(vlSymsp->__Vcoverage[3001]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sb = 
            ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sb) 
             | (0x100000U & vlSelf->top__DOT__de__DOT__sb));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__sb 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sb))) {
        ++(vlSymsp->__Vcoverage[3002]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sb = 
            ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sb) 
             | (0x200000U & vlSelf->top__DOT__de__DOT__sb));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__sb 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sb))) {
        ++(vlSymsp->__Vcoverage[3003]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sb = 
            ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sb) 
             | (0x400000U & vlSelf->top__DOT__de__DOT__sb));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__sb 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sb))) {
        ++(vlSymsp->__Vcoverage[3004]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sb = 
            ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sb) 
             | (0x800000U & vlSelf->top__DOT__de__DOT__sb));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__sb 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sb))) {
        ++(vlSymsp->__Vcoverage[3005]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sb = 
            ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sb) 
             | (0x1000000U & vlSelf->top__DOT__de__DOT__sb));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__sb 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sb))) {
        ++(vlSymsp->__Vcoverage[3006]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sb = 
            ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sb) 
             | (0x2000000U & vlSelf->top__DOT__de__DOT__sb));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__sb 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sb))) {
        ++(vlSymsp->__Vcoverage[3007]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sb = 
            ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sb) 
             | (0x4000000U & vlSelf->top__DOT__de__DOT__sb));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__sb 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sb))) {
        ++(vlSymsp->__Vcoverage[3008]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sb = 
            ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sb) 
             | (0x8000000U & vlSelf->top__DOT__de__DOT__sb));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__sb 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__sb))) {
        ++(vlSymsp->__Vcoverage[3009]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sb = 
            ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sb) 
             | (0x10000000U & vlSelf->top__DOT__de__DOT__sb));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__sb 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__sb))) {
        ++(vlSymsp->__Vcoverage[3010]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sb = 
            ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sb) 
             | (0x20000000U & vlSelf->top__DOT__de__DOT__sb));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__sb 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__sb))) {
        ++(vlSymsp->__Vcoverage[3011]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sb = 
            ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sb) 
             | (0x40000000U & vlSelf->top__DOT__de__DOT__sb));
    }
    if (((vlSelf->top__DOT__de__DOT__sb ^ vlSelf->top__DOT__de__DOT____Vtogcov__sb) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3012]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sb = 
            ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sb) 
             | (0x80000000U & vlSelf->top__DOT__de__DOT__sb));
    }
    vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U] 
        = (IData)((0x30000000001ULL | ((QData)((IData)(vlSelf->top__DOT__de__DOT__sb)) 
                                       << 8U)));
    vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U] 
        = ((vlSelf->top__DOT__de__DOT__sh << 0x10U) 
           | (IData)(((0x30000000001ULL | ((QData)((IData)(vlSelf->top__DOT__de__DOT__sb)) 
                                           << 8U)) 
                      >> 0x20U)));
    vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U] 
        = (0xf0000U | ((vlSelf->top__DOT__de__DOT__sw 
                        << 0x18U) | (vlSelf->top__DOT__de__DOT__sh 
                                     >> 0x10U)));
    vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U] 
        = (0xff000000U | (vlSelf->top__DOT__de__DOT__sw 
                          >> 8U));
    vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U] 
        = vlSelf->top__DOT__de__DOT__sd;
    if ((1U & (vlSelf->top__DOT__de__DOT__lw ^ vlSelf->top__DOT__de__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[3013]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lw = 
            ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__lw) 
             | (1U & vlSelf->top__DOT__de__DOT__lw));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__lw ^ vlSelf->top__DOT__de__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[3014]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lw = 
            ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__lw) 
             | (2U & vlSelf->top__DOT__de__DOT__lw));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__lw ^ vlSelf->top__DOT__de__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[3015]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lw = 
            ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__lw) 
             | (4U & vlSelf->top__DOT__de__DOT__lw));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__lw ^ vlSelf->top__DOT__de__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[3016]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lw = 
            ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__lw) 
             | (8U & vlSelf->top__DOT__de__DOT__lw));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__lw ^ vlSelf->top__DOT__de__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[3017]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lw = 
            ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__lw) 
             | (0x10U & vlSelf->top__DOT__de__DOT__lw));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__lw ^ vlSelf->top__DOT__de__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[3018]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lw = 
            ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__lw) 
             | (0x20U & vlSelf->top__DOT__de__DOT__lw));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__lw ^ vlSelf->top__DOT__de__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[3019]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lw = 
            ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__lw) 
             | (0x40U & vlSelf->top__DOT__de__DOT__lw));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__lw ^ vlSelf->top__DOT__de__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[3020]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lw = 
            ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__lw) 
             | (0x80U & vlSelf->top__DOT__de__DOT__lw));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__lw ^ vlSelf->top__DOT__de__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[3021]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lw = 
            ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__lw) 
             | (0x100U & vlSelf->top__DOT__de__DOT__lw));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__lw ^ vlSelf->top__DOT__de__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[3022]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lw = 
            ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__lw) 
             | (0x200U & vlSelf->top__DOT__de__DOT__lw));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__lw ^ vlSelf->top__DOT__de__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[3023]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lw = 
            ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__lw) 
             | (0x400U & vlSelf->top__DOT__de__DOT__lw));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__lw ^ vlSelf->top__DOT__de__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[3024]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lw = 
            ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__lw) 
             | (0x800U & vlSelf->top__DOT__de__DOT__lw));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__lw ^ vlSelf->top__DOT__de__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[3025]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lw = 
            ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__lw) 
             | (0x1000U & vlSelf->top__DOT__de__DOT__lw));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__lw ^ vlSelf->top__DOT__de__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[3026]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lw = 
            ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__lw) 
             | (0x2000U & vlSelf->top__DOT__de__DOT__lw));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__lw ^ vlSelf->top__DOT__de__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[3027]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lw = 
            ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__lw) 
             | (0x4000U & vlSelf->top__DOT__de__DOT__lw));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__lw ^ vlSelf->top__DOT__de__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[3028]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lw = 
            ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__lw) 
             | (0x8000U & vlSelf->top__DOT__de__DOT__lw));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__lw 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[3029]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lw = 
            ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lw) 
             | (0x10000U & vlSelf->top__DOT__de__DOT__lw));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__lw 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[3030]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lw = 
            ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lw) 
             | (0x20000U & vlSelf->top__DOT__de__DOT__lw));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__lw 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[3031]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lw = 
            ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lw) 
             | (0x40000U & vlSelf->top__DOT__de__DOT__lw));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__lw 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[3032]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lw = 
            ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lw) 
             | (0x80000U & vlSelf->top__DOT__de__DOT__lw));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__lw 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[3033]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lw = 
            ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lw) 
             | (0x100000U & vlSelf->top__DOT__de__DOT__lw));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__lw 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[3034]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lw = 
            ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lw) 
             | (0x200000U & vlSelf->top__DOT__de__DOT__lw));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__lw 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[3035]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lw = 
            ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lw) 
             | (0x400000U & vlSelf->top__DOT__de__DOT__lw));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__lw 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[3036]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lw = 
            ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lw) 
             | (0x800000U & vlSelf->top__DOT__de__DOT__lw));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__lw 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[3037]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lw = 
            ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lw) 
             | (0x1000000U & vlSelf->top__DOT__de__DOT__lw));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__lw 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[3038]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lw = 
            ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lw) 
             | (0x2000000U & vlSelf->top__DOT__de__DOT__lw));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__lw 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[3039]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lw = 
            ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lw) 
             | (0x4000000U & vlSelf->top__DOT__de__DOT__lw));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__lw 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[3040]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lw = 
            ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lw) 
             | (0x8000000U & vlSelf->top__DOT__de__DOT__lw));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__lw 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[3041]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lw = 
            ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lw) 
             | (0x10000000U & vlSelf->top__DOT__de__DOT__lw));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__lw 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[3042]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lw = 
            ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lw) 
             | (0x20000000U & vlSelf->top__DOT__de__DOT__lw));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__lw 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[3043]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lw = 
            ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lw) 
             | (0x40000000U & vlSelf->top__DOT__de__DOT__lw));
    }
    if (((vlSelf->top__DOT__de__DOT__lw ^ vlSelf->top__DOT__de__DOT____Vtogcov__lw) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3044]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lw = 
            ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lw) 
             | (0x80000000U & vlSelf->top__DOT__de__DOT__lw));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__lh ^ vlSelf->top__DOT__de__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[3045]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lh = 
            ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__lh) 
             | (1U & vlSelf->top__DOT__de__DOT__lh));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__lh ^ vlSelf->top__DOT__de__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[3046]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lh = 
            ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__lh) 
             | (2U & vlSelf->top__DOT__de__DOT__lh));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__lh ^ vlSelf->top__DOT__de__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[3047]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lh = 
            ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__lh) 
             | (4U & vlSelf->top__DOT__de__DOT__lh));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__lh ^ vlSelf->top__DOT__de__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[3048]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lh = 
            ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__lh) 
             | (8U & vlSelf->top__DOT__de__DOT__lh));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__lh ^ vlSelf->top__DOT__de__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[3049]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lh = 
            ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__lh) 
             | (0x10U & vlSelf->top__DOT__de__DOT__lh));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__lh ^ vlSelf->top__DOT__de__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[3050]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lh = 
            ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__lh) 
             | (0x20U & vlSelf->top__DOT__de__DOT__lh));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__lh ^ vlSelf->top__DOT__de__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[3051]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lh = 
            ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__lh) 
             | (0x40U & vlSelf->top__DOT__de__DOT__lh));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__lh ^ vlSelf->top__DOT__de__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[3052]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lh = 
            ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__lh) 
             | (0x80U & vlSelf->top__DOT__de__DOT__lh));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__lh ^ vlSelf->top__DOT__de__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[3053]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lh = 
            ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__lh) 
             | (0x100U & vlSelf->top__DOT__de__DOT__lh));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__lh ^ vlSelf->top__DOT__de__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[3054]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lh = 
            ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__lh) 
             | (0x200U & vlSelf->top__DOT__de__DOT__lh));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__lh ^ vlSelf->top__DOT__de__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[3055]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lh = 
            ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__lh) 
             | (0x400U & vlSelf->top__DOT__de__DOT__lh));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__lh ^ vlSelf->top__DOT__de__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[3056]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lh = 
            ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__lh) 
             | (0x800U & vlSelf->top__DOT__de__DOT__lh));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__lh ^ vlSelf->top__DOT__de__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[3057]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lh = 
            ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__lh) 
             | (0x1000U & vlSelf->top__DOT__de__DOT__lh));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__lh ^ vlSelf->top__DOT__de__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[3058]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lh = 
            ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__lh) 
             | (0x2000U & vlSelf->top__DOT__de__DOT__lh));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__lh ^ vlSelf->top__DOT__de__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[3059]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lh = 
            ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__lh) 
             | (0x4000U & vlSelf->top__DOT__de__DOT__lh));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__lh ^ vlSelf->top__DOT__de__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[3060]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lh = 
            ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__lh) 
             | (0x8000U & vlSelf->top__DOT__de__DOT__lh));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__lh 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[3061]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lh = 
            ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lh) 
             | (0x10000U & vlSelf->top__DOT__de__DOT__lh));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__lh 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[3062]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lh = 
            ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lh) 
             | (0x20000U & vlSelf->top__DOT__de__DOT__lh));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__lh 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[3063]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lh = 
            ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lh) 
             | (0x40000U & vlSelf->top__DOT__de__DOT__lh));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__lh 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[3064]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lh = 
            ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lh) 
             | (0x80000U & vlSelf->top__DOT__de__DOT__lh));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__lh 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[3065]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lh = 
            ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lh) 
             | (0x100000U & vlSelf->top__DOT__de__DOT__lh));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__lh 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[3066]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lh = 
            ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lh) 
             | (0x200000U & vlSelf->top__DOT__de__DOT__lh));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__lh 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[3067]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lh = 
            ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lh) 
             | (0x400000U & vlSelf->top__DOT__de__DOT__lh));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__lh 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[3068]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lh = 
            ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lh) 
             | (0x800000U & vlSelf->top__DOT__de__DOT__lh));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__lh 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[3069]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lh = 
            ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lh) 
             | (0x1000000U & vlSelf->top__DOT__de__DOT__lh));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__lh 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[3070]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lh = 
            ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lh) 
             | (0x2000000U & vlSelf->top__DOT__de__DOT__lh));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__lh 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[3071]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lh = 
            ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lh) 
             | (0x4000000U & vlSelf->top__DOT__de__DOT__lh));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__lh 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[3072]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lh = 
            ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lh) 
             | (0x8000000U & vlSelf->top__DOT__de__DOT__lh));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__lh 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[3073]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lh = 
            ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lh) 
             | (0x10000000U & vlSelf->top__DOT__de__DOT__lh));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__lh 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[3074]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lh = 
            ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lh) 
             | (0x20000000U & vlSelf->top__DOT__de__DOT__lh));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__lh 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[3075]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lh = 
            ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lh) 
             | (0x40000000U & vlSelf->top__DOT__de__DOT__lh));
    }
    if (((vlSelf->top__DOT__de__DOT__lh ^ vlSelf->top__DOT__de__DOT____Vtogcov__lh) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3076]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lh = 
            ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lh) 
             | (0x80000000U & vlSelf->top__DOT__de__DOT__lh));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__lb ^ vlSelf->top__DOT__de__DOT____Vtogcov__lb))) {
        ++(vlSymsp->__Vcoverage[3077]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lb = 
            ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__lb) 
             | (1U & vlSelf->top__DOT__de__DOT__lb));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__lb ^ vlSelf->top__DOT__de__DOT____Vtogcov__lb))) {
        ++(vlSymsp->__Vcoverage[3078]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lb = 
            ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__lb) 
             | (2U & vlSelf->top__DOT__de__DOT__lb));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__lb ^ vlSelf->top__DOT__de__DOT____Vtogcov__lb))) {
        ++(vlSymsp->__Vcoverage[3079]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lb = 
            ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__lb) 
             | (4U & vlSelf->top__DOT__de__DOT__lb));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__lb ^ vlSelf->top__DOT__de__DOT____Vtogcov__lb))) {
        ++(vlSymsp->__Vcoverage[3080]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lb = 
            ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__lb) 
             | (8U & vlSelf->top__DOT__de__DOT__lb));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__lb ^ vlSelf->top__DOT__de__DOT____Vtogcov__lb))) {
        ++(vlSymsp->__Vcoverage[3081]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lb = 
            ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__lb) 
             | (0x10U & vlSelf->top__DOT__de__DOT__lb));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__lb ^ vlSelf->top__DOT__de__DOT____Vtogcov__lb))) {
        ++(vlSymsp->__Vcoverage[3082]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lb = 
            ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__lb) 
             | (0x20U & vlSelf->top__DOT__de__DOT__lb));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__lb ^ vlSelf->top__DOT__de__DOT____Vtogcov__lb))) {
        ++(vlSymsp->__Vcoverage[3083]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lb = 
            ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__lb) 
             | (0x40U & vlSelf->top__DOT__de__DOT__lb));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__lb ^ vlSelf->top__DOT__de__DOT____Vtogcov__lb))) {
        ++(vlSymsp->__Vcoverage[3084]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lb = 
            ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__lb) 
             | (0x80U & vlSelf->top__DOT__de__DOT__lb));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__lb ^ vlSelf->top__DOT__de__DOT____Vtogcov__lb))) {
        ++(vlSymsp->__Vcoverage[3085]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lb = 
            ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__lb) 
             | (0x100U & vlSelf->top__DOT__de__DOT__lb));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__lb ^ vlSelf->top__DOT__de__DOT____Vtogcov__lb))) {
        ++(vlSymsp->__Vcoverage[3086]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lb = 
            ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__lb) 
             | (0x200U & vlSelf->top__DOT__de__DOT__lb));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__lb ^ vlSelf->top__DOT__de__DOT____Vtogcov__lb))) {
        ++(vlSymsp->__Vcoverage[3087]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lb = 
            ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__lb) 
             | (0x400U & vlSelf->top__DOT__de__DOT__lb));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__lb ^ vlSelf->top__DOT__de__DOT____Vtogcov__lb))) {
        ++(vlSymsp->__Vcoverage[3088]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lb = 
            ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__lb) 
             | (0x800U & vlSelf->top__DOT__de__DOT__lb));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__lb ^ vlSelf->top__DOT__de__DOT____Vtogcov__lb))) {
        ++(vlSymsp->__Vcoverage[3089]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lb = 
            ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__lb) 
             | (0x1000U & vlSelf->top__DOT__de__DOT__lb));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__lb ^ vlSelf->top__DOT__de__DOT____Vtogcov__lb))) {
        ++(vlSymsp->__Vcoverage[3090]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lb = 
            ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__lb) 
             | (0x2000U & vlSelf->top__DOT__de__DOT__lb));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__lb ^ vlSelf->top__DOT__de__DOT____Vtogcov__lb))) {
        ++(vlSymsp->__Vcoverage[3091]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lb = 
            ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__lb) 
             | (0x4000U & vlSelf->top__DOT__de__DOT__lb));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__lb ^ vlSelf->top__DOT__de__DOT____Vtogcov__lb))) {
        ++(vlSymsp->__Vcoverage[3092]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lb = 
            ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__lb) 
             | (0x8000U & vlSelf->top__DOT__de__DOT__lb));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__lb 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__lb))) {
        ++(vlSymsp->__Vcoverage[3093]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lb = 
            ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lb) 
             | (0x10000U & vlSelf->top__DOT__de__DOT__lb));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__lb 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__lb))) {
        ++(vlSymsp->__Vcoverage[3094]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lb = 
            ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lb) 
             | (0x20000U & vlSelf->top__DOT__de__DOT__lb));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__lb 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__lb))) {
        ++(vlSymsp->__Vcoverage[3095]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lb = 
            ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lb) 
             | (0x40000U & vlSelf->top__DOT__de__DOT__lb));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__lb 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__lb))) {
        ++(vlSymsp->__Vcoverage[3096]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lb = 
            ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lb) 
             | (0x80000U & vlSelf->top__DOT__de__DOT__lb));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__lb 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__lb))) {
        ++(vlSymsp->__Vcoverage[3097]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lb = 
            ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lb) 
             | (0x100000U & vlSelf->top__DOT__de__DOT__lb));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__lb 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__lb))) {
        ++(vlSymsp->__Vcoverage[3098]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lb = 
            ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lb) 
             | (0x200000U & vlSelf->top__DOT__de__DOT__lb));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__lb 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__lb))) {
        ++(vlSymsp->__Vcoverage[3099]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lb = 
            ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lb) 
             | (0x400000U & vlSelf->top__DOT__de__DOT__lb));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__lb 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__lb))) {
        ++(vlSymsp->__Vcoverage[3100]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lb = 
            ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lb) 
             | (0x800000U & vlSelf->top__DOT__de__DOT__lb));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__lb 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__lb))) {
        ++(vlSymsp->__Vcoverage[3101]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lb = 
            ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lb) 
             | (0x1000000U & vlSelf->top__DOT__de__DOT__lb));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__lb 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__lb))) {
        ++(vlSymsp->__Vcoverage[3102]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lb = 
            ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lb) 
             | (0x2000000U & vlSelf->top__DOT__de__DOT__lb));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__lb 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__lb))) {
        ++(vlSymsp->__Vcoverage[3103]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lb = 
            ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lb) 
             | (0x4000000U & vlSelf->top__DOT__de__DOT__lb));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__lb 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__lb))) {
        ++(vlSymsp->__Vcoverage[3104]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lb = 
            ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lb) 
             | (0x8000000U & vlSelf->top__DOT__de__DOT__lb));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__lb 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__lb))) {
        ++(vlSymsp->__Vcoverage[3105]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lb = 
            ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lb) 
             | (0x10000000U & vlSelf->top__DOT__de__DOT__lb));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__lb 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__lb))) {
        ++(vlSymsp->__Vcoverage[3106]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lb = 
            ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lb) 
             | (0x20000000U & vlSelf->top__DOT__de__DOT__lb));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__lb 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__lb))) {
        ++(vlSymsp->__Vcoverage[3107]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lb = 
            ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lb) 
             | (0x40000000U & vlSelf->top__DOT__de__DOT__lb));
    }
    if (((vlSelf->top__DOT__de__DOT__lb ^ vlSelf->top__DOT__de__DOT____Vtogcov__lb) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3108]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lb = 
            ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lb) 
             | (0x80000000U & vlSelf->top__DOT__de__DOT__lb));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__lbu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lbu))) {
        ++(vlSymsp->__Vcoverage[3109]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lbu = 
            ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__lbu) 
             | (1U & vlSelf->top__DOT__de__DOT__lbu));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__lbu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lbu))) {
        ++(vlSymsp->__Vcoverage[3110]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lbu = 
            ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__lbu) 
             | (2U & vlSelf->top__DOT__de__DOT__lbu));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__lbu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lbu))) {
        ++(vlSymsp->__Vcoverage[3111]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lbu = 
            ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__lbu) 
             | (4U & vlSelf->top__DOT__de__DOT__lbu));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__lbu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lbu))) {
        ++(vlSymsp->__Vcoverage[3112]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lbu = 
            ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__lbu) 
             | (8U & vlSelf->top__DOT__de__DOT__lbu));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__lbu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lbu))) {
        ++(vlSymsp->__Vcoverage[3113]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lbu = 
            ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__lbu) 
             | (0x10U & vlSelf->top__DOT__de__DOT__lbu));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__lbu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lbu))) {
        ++(vlSymsp->__Vcoverage[3114]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lbu = 
            ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__lbu) 
             | (0x20U & vlSelf->top__DOT__de__DOT__lbu));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__lbu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lbu))) {
        ++(vlSymsp->__Vcoverage[3115]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lbu = 
            ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__lbu) 
             | (0x40U & vlSelf->top__DOT__de__DOT__lbu));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__lbu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lbu))) {
        ++(vlSymsp->__Vcoverage[3116]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lbu = 
            ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__lbu) 
             | (0x80U & vlSelf->top__DOT__de__DOT__lbu));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__lbu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lbu))) {
        ++(vlSymsp->__Vcoverage[3117]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lbu = 
            ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__lbu) 
             | (0x100U & vlSelf->top__DOT__de__DOT__lbu));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__lbu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lbu))) {
        ++(vlSymsp->__Vcoverage[3118]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lbu = 
            ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__lbu) 
             | (0x200U & vlSelf->top__DOT__de__DOT__lbu));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__lbu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lbu))) {
        ++(vlSymsp->__Vcoverage[3119]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lbu = 
            ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__lbu) 
             | (0x400U & vlSelf->top__DOT__de__DOT__lbu));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__lbu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lbu))) {
        ++(vlSymsp->__Vcoverage[3120]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lbu = 
            ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__lbu) 
             | (0x800U & vlSelf->top__DOT__de__DOT__lbu));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__lbu 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__lbu))) {
        ++(vlSymsp->__Vcoverage[3121]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lbu = 
            ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__lbu) 
             | (0x1000U & vlSelf->top__DOT__de__DOT__lbu));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__lbu 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__lbu))) {
        ++(vlSymsp->__Vcoverage[3122]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lbu = 
            ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__lbu) 
             | (0x2000U & vlSelf->top__DOT__de__DOT__lbu));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__lbu 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__lbu))) {
        ++(vlSymsp->__Vcoverage[3123]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lbu = 
            ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__lbu) 
             | (0x4000U & vlSelf->top__DOT__de__DOT__lbu));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__lbu 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__lbu))) {
        ++(vlSymsp->__Vcoverage[3124]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lbu = 
            ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__lbu) 
             | (0x8000U & vlSelf->top__DOT__de__DOT__lbu));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__lbu 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__lbu))) {
        ++(vlSymsp->__Vcoverage[3125]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lbu = 
            ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lbu) 
             | (0x10000U & vlSelf->top__DOT__de__DOT__lbu));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__lbu 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__lbu))) {
        ++(vlSymsp->__Vcoverage[3126]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lbu = 
            ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lbu) 
             | (0x20000U & vlSelf->top__DOT__de__DOT__lbu));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__lbu 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__lbu))) {
        ++(vlSymsp->__Vcoverage[3127]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lbu = 
            ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lbu) 
             | (0x40000U & vlSelf->top__DOT__de__DOT__lbu));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__lbu 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__lbu))) {
        ++(vlSymsp->__Vcoverage[3128]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lbu = 
            ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lbu) 
             | (0x80000U & vlSelf->top__DOT__de__DOT__lbu));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__lbu 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__lbu))) {
        ++(vlSymsp->__Vcoverage[3129]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lbu = 
            ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lbu) 
             | (0x100000U & vlSelf->top__DOT__de__DOT__lbu));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__lbu 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__lbu))) {
        ++(vlSymsp->__Vcoverage[3130]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lbu = 
            ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lbu) 
             | (0x200000U & vlSelf->top__DOT__de__DOT__lbu));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__lbu 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__lbu))) {
        ++(vlSymsp->__Vcoverage[3131]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lbu = 
            ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lbu) 
             | (0x400000U & vlSelf->top__DOT__de__DOT__lbu));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__lbu 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__lbu))) {
        ++(vlSymsp->__Vcoverage[3132]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lbu = 
            ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lbu) 
             | (0x800000U & vlSelf->top__DOT__de__DOT__lbu));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__lbu 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__lbu))) {
        ++(vlSymsp->__Vcoverage[3133]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lbu = 
            ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lbu) 
             | (0x1000000U & vlSelf->top__DOT__de__DOT__lbu));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__lbu 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__lbu))) {
        ++(vlSymsp->__Vcoverage[3134]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lbu = 
            ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lbu) 
             | (0x2000000U & vlSelf->top__DOT__de__DOT__lbu));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__lbu 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__lbu))) {
        ++(vlSymsp->__Vcoverage[3135]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lbu = 
            ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lbu) 
             | (0x4000000U & vlSelf->top__DOT__de__DOT__lbu));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__lbu 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__lbu))) {
        ++(vlSymsp->__Vcoverage[3136]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lbu = 
            ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lbu) 
             | (0x8000000U & vlSelf->top__DOT__de__DOT__lbu));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__lbu 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__lbu))) {
        ++(vlSymsp->__Vcoverage[3137]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lbu = 
            ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lbu) 
             | (0x10000000U & vlSelf->top__DOT__de__DOT__lbu));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__lbu 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__lbu))) {
        ++(vlSymsp->__Vcoverage[3138]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lbu = 
            ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lbu) 
             | (0x20000000U & vlSelf->top__DOT__de__DOT__lbu));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__lbu 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__lbu))) {
        ++(vlSymsp->__Vcoverage[3139]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lbu = 
            ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lbu) 
             | (0x40000000U & vlSelf->top__DOT__de__DOT__lbu));
    }
    if (((vlSelf->top__DOT__de__DOT__lbu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lbu) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3140]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lbu = 
            ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lbu) 
             | (0x80000000U & vlSelf->top__DOT__de__DOT__lbu));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__lwu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lwu))) {
        ++(vlSymsp->__Vcoverage[3141]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lwu = 
            ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__lwu) 
             | (1U & vlSelf->top__DOT__de__DOT__lwu));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__lwu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lwu))) {
        ++(vlSymsp->__Vcoverage[3142]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lwu = 
            ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__lwu) 
             | (2U & vlSelf->top__DOT__de__DOT__lwu));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__lwu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lwu))) {
        ++(vlSymsp->__Vcoverage[3143]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lwu = 
            ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__lwu) 
             | (4U & vlSelf->top__DOT__de__DOT__lwu));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__lwu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lwu))) {
        ++(vlSymsp->__Vcoverage[3144]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lwu = 
            ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__lwu) 
             | (8U & vlSelf->top__DOT__de__DOT__lwu));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__lwu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lwu))) {
        ++(vlSymsp->__Vcoverage[3145]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lwu = 
            ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__lwu) 
             | (0x10U & vlSelf->top__DOT__de__DOT__lwu));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__lwu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lwu))) {
        ++(vlSymsp->__Vcoverage[3146]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lwu = 
            ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__lwu) 
             | (0x20U & vlSelf->top__DOT__de__DOT__lwu));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__lwu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lwu))) {
        ++(vlSymsp->__Vcoverage[3147]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lwu = 
            ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__lwu) 
             | (0x40U & vlSelf->top__DOT__de__DOT__lwu));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__lwu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lwu))) {
        ++(vlSymsp->__Vcoverage[3148]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lwu = 
            ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__lwu) 
             | (0x80U & vlSelf->top__DOT__de__DOT__lwu));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__lwu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lwu))) {
        ++(vlSymsp->__Vcoverage[3149]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lwu = 
            ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__lwu) 
             | (0x100U & vlSelf->top__DOT__de__DOT__lwu));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__lwu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lwu))) {
        ++(vlSymsp->__Vcoverage[3150]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lwu = 
            ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__lwu) 
             | (0x200U & vlSelf->top__DOT__de__DOT__lwu));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__lwu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lwu))) {
        ++(vlSymsp->__Vcoverage[3151]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lwu = 
            ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__lwu) 
             | (0x400U & vlSelf->top__DOT__de__DOT__lwu));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__lwu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lwu))) {
        ++(vlSymsp->__Vcoverage[3152]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lwu = 
            ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__lwu) 
             | (0x800U & vlSelf->top__DOT__de__DOT__lwu));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__lwu 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__lwu))) {
        ++(vlSymsp->__Vcoverage[3153]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lwu = 
            ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__lwu) 
             | (0x1000U & vlSelf->top__DOT__de__DOT__lwu));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__lwu 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__lwu))) {
        ++(vlSymsp->__Vcoverage[3154]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lwu = 
            ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__lwu) 
             | (0x2000U & vlSelf->top__DOT__de__DOT__lwu));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__lwu 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__lwu))) {
        ++(vlSymsp->__Vcoverage[3155]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lwu = 
            ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__lwu) 
             | (0x4000U & vlSelf->top__DOT__de__DOT__lwu));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__lwu 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__lwu))) {
        ++(vlSymsp->__Vcoverage[3156]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lwu = 
            ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__lwu) 
             | (0x8000U & vlSelf->top__DOT__de__DOT__lwu));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__lwu 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__lwu))) {
        ++(vlSymsp->__Vcoverage[3157]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lwu = 
            ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lwu) 
             | (0x10000U & vlSelf->top__DOT__de__DOT__lwu));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__lwu 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__lwu))) {
        ++(vlSymsp->__Vcoverage[3158]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lwu = 
            ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lwu) 
             | (0x20000U & vlSelf->top__DOT__de__DOT__lwu));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__lwu 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__lwu))) {
        ++(vlSymsp->__Vcoverage[3159]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lwu = 
            ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lwu) 
             | (0x40000U & vlSelf->top__DOT__de__DOT__lwu));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__lwu 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__lwu))) {
        ++(vlSymsp->__Vcoverage[3160]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lwu = 
            ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lwu) 
             | (0x80000U & vlSelf->top__DOT__de__DOT__lwu));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__lwu 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__lwu))) {
        ++(vlSymsp->__Vcoverage[3161]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lwu = 
            ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lwu) 
             | (0x100000U & vlSelf->top__DOT__de__DOT__lwu));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__lwu 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__lwu))) {
        ++(vlSymsp->__Vcoverage[3162]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lwu = 
            ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lwu) 
             | (0x200000U & vlSelf->top__DOT__de__DOT__lwu));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__lwu 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__lwu))) {
        ++(vlSymsp->__Vcoverage[3163]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lwu = 
            ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lwu) 
             | (0x400000U & vlSelf->top__DOT__de__DOT__lwu));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__lwu 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__lwu))) {
        ++(vlSymsp->__Vcoverage[3164]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lwu = 
            ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lwu) 
             | (0x800000U & vlSelf->top__DOT__de__DOT__lwu));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__lwu 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__lwu))) {
        ++(vlSymsp->__Vcoverage[3165]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lwu = 
            ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lwu) 
             | (0x1000000U & vlSelf->top__DOT__de__DOT__lwu));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__lwu 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__lwu))) {
        ++(vlSymsp->__Vcoverage[3166]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lwu = 
            ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lwu) 
             | (0x2000000U & vlSelf->top__DOT__de__DOT__lwu));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__lwu 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__lwu))) {
        ++(vlSymsp->__Vcoverage[3167]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lwu = 
            ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lwu) 
             | (0x4000000U & vlSelf->top__DOT__de__DOT__lwu));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__lwu 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__lwu))) {
        ++(vlSymsp->__Vcoverage[3168]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lwu = 
            ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lwu) 
             | (0x8000000U & vlSelf->top__DOT__de__DOT__lwu));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__lwu 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__lwu))) {
        ++(vlSymsp->__Vcoverage[3169]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lwu = 
            ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lwu) 
             | (0x10000000U & vlSelf->top__DOT__de__DOT__lwu));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__lwu 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__lwu))) {
        ++(vlSymsp->__Vcoverage[3170]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lwu = 
            ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lwu) 
             | (0x20000000U & vlSelf->top__DOT__de__DOT__lwu));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__lwu 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__lwu))) {
        ++(vlSymsp->__Vcoverage[3171]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lwu = 
            ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lwu) 
             | (0x40000000U & vlSelf->top__DOT__de__DOT__lwu));
    }
    if (((vlSelf->top__DOT__de__DOT__lwu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lwu) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3172]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lwu = 
            ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lwu) 
             | (0x80000000U & vlSelf->top__DOT__de__DOT__lwu));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__lhu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lhu))) {
        ++(vlSymsp->__Vcoverage[3173]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lhu = 
            ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__lhu) 
             | (1U & vlSelf->top__DOT__de__DOT__lhu));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__lhu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lhu))) {
        ++(vlSymsp->__Vcoverage[3174]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lhu = 
            ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__lhu) 
             | (2U & vlSelf->top__DOT__de__DOT__lhu));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__lhu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lhu))) {
        ++(vlSymsp->__Vcoverage[3175]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lhu = 
            ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__lhu) 
             | (4U & vlSelf->top__DOT__de__DOT__lhu));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__lhu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lhu))) {
        ++(vlSymsp->__Vcoverage[3176]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lhu = 
            ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__lhu) 
             | (8U & vlSelf->top__DOT__de__DOT__lhu));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__lhu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lhu))) {
        ++(vlSymsp->__Vcoverage[3177]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lhu = 
            ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__lhu) 
             | (0x10U & vlSelf->top__DOT__de__DOT__lhu));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__lhu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lhu))) {
        ++(vlSymsp->__Vcoverage[3178]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lhu = 
            ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__lhu) 
             | (0x20U & vlSelf->top__DOT__de__DOT__lhu));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__lhu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lhu))) {
        ++(vlSymsp->__Vcoverage[3179]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lhu = 
            ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__lhu) 
             | (0x40U & vlSelf->top__DOT__de__DOT__lhu));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__lhu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lhu))) {
        ++(vlSymsp->__Vcoverage[3180]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lhu = 
            ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__lhu) 
             | (0x80U & vlSelf->top__DOT__de__DOT__lhu));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__lhu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lhu))) {
        ++(vlSymsp->__Vcoverage[3181]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lhu = 
            ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__lhu) 
             | (0x100U & vlSelf->top__DOT__de__DOT__lhu));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__lhu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lhu))) {
        ++(vlSymsp->__Vcoverage[3182]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lhu = 
            ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__lhu) 
             | (0x200U & vlSelf->top__DOT__de__DOT__lhu));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__lhu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lhu))) {
        ++(vlSymsp->__Vcoverage[3183]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lhu = 
            ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__lhu) 
             | (0x400U & vlSelf->top__DOT__de__DOT__lhu));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__lhu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lhu))) {
        ++(vlSymsp->__Vcoverage[3184]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lhu = 
            ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__lhu) 
             | (0x800U & vlSelf->top__DOT__de__DOT__lhu));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__lhu 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__lhu))) {
        ++(vlSymsp->__Vcoverage[3185]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lhu = 
            ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__lhu) 
             | (0x1000U & vlSelf->top__DOT__de__DOT__lhu));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__lhu 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__lhu))) {
        ++(vlSymsp->__Vcoverage[3186]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lhu = 
            ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__lhu) 
             | (0x2000U & vlSelf->top__DOT__de__DOT__lhu));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__lhu 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__lhu))) {
        ++(vlSymsp->__Vcoverage[3187]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lhu = 
            ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__lhu) 
             | (0x4000U & vlSelf->top__DOT__de__DOT__lhu));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__lhu 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__lhu))) {
        ++(vlSymsp->__Vcoverage[3188]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lhu = 
            ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__lhu) 
             | (0x8000U & vlSelf->top__DOT__de__DOT__lhu));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__lhu 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__lhu))) {
        ++(vlSymsp->__Vcoverage[3189]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lhu = 
            ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lhu) 
             | (0x10000U & vlSelf->top__DOT__de__DOT__lhu));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__lhu 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__lhu))) {
        ++(vlSymsp->__Vcoverage[3190]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lhu = 
            ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lhu) 
             | (0x20000U & vlSelf->top__DOT__de__DOT__lhu));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__lhu 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__lhu))) {
        ++(vlSymsp->__Vcoverage[3191]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lhu = 
            ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lhu) 
             | (0x40000U & vlSelf->top__DOT__de__DOT__lhu));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__lhu 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__lhu))) {
        ++(vlSymsp->__Vcoverage[3192]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lhu = 
            ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lhu) 
             | (0x80000U & vlSelf->top__DOT__de__DOT__lhu));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__lhu 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__lhu))) {
        ++(vlSymsp->__Vcoverage[3193]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lhu = 
            ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lhu) 
             | (0x100000U & vlSelf->top__DOT__de__DOT__lhu));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__lhu 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__lhu))) {
        ++(vlSymsp->__Vcoverage[3194]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lhu = 
            ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lhu) 
             | (0x200000U & vlSelf->top__DOT__de__DOT__lhu));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__lhu 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__lhu))) {
        ++(vlSymsp->__Vcoverage[3195]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lhu = 
            ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lhu) 
             | (0x400000U & vlSelf->top__DOT__de__DOT__lhu));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__lhu 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__lhu))) {
        ++(vlSymsp->__Vcoverage[3196]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lhu = 
            ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lhu) 
             | (0x800000U & vlSelf->top__DOT__de__DOT__lhu));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__lhu 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__lhu))) {
        ++(vlSymsp->__Vcoverage[3197]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lhu = 
            ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lhu) 
             | (0x1000000U & vlSelf->top__DOT__de__DOT__lhu));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__lhu 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__lhu))) {
        ++(vlSymsp->__Vcoverage[3198]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lhu = 
            ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lhu) 
             | (0x2000000U & vlSelf->top__DOT__de__DOT__lhu));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__lhu 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__lhu))) {
        ++(vlSymsp->__Vcoverage[3199]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lhu = 
            ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lhu) 
             | (0x4000000U & vlSelf->top__DOT__de__DOT__lhu));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__lhu 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__lhu))) {
        ++(vlSymsp->__Vcoverage[3200]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lhu = 
            ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lhu) 
             | (0x8000000U & vlSelf->top__DOT__de__DOT__lhu));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__lhu 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__lhu))) {
        ++(vlSymsp->__Vcoverage[3201]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lhu = 
            ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lhu) 
             | (0x10000000U & vlSelf->top__DOT__de__DOT__lhu));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__lhu 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__lhu))) {
        ++(vlSymsp->__Vcoverage[3202]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lhu = 
            ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lhu) 
             | (0x20000000U & vlSelf->top__DOT__de__DOT__lhu));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__lhu 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__lhu))) {
        ++(vlSymsp->__Vcoverage[3203]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lhu = 
            ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lhu) 
             | (0x40000000U & vlSelf->top__DOT__de__DOT__lhu));
    }
    if (((vlSelf->top__DOT__de__DOT__lhu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lhu) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3204]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lhu = 
            ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lhu) 
             | (0x80000000U & vlSelf->top__DOT__de__DOT__lhu));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__ld ^ vlSelf->top__DOT__de__DOT____Vtogcov__ld))) {
        ++(vlSymsp->__Vcoverage[3205]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ld = 
            ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__ld) 
             | (1U & vlSelf->top__DOT__de__DOT__ld));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__ld ^ vlSelf->top__DOT__de__DOT____Vtogcov__ld))) {
        ++(vlSymsp->__Vcoverage[3206]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ld = 
            ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__ld) 
             | (2U & vlSelf->top__DOT__de__DOT__ld));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__ld ^ vlSelf->top__DOT__de__DOT____Vtogcov__ld))) {
        ++(vlSymsp->__Vcoverage[3207]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ld = 
            ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__ld) 
             | (4U & vlSelf->top__DOT__de__DOT__ld));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__ld ^ vlSelf->top__DOT__de__DOT____Vtogcov__ld))) {
        ++(vlSymsp->__Vcoverage[3208]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ld = 
            ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__ld) 
             | (8U & vlSelf->top__DOT__de__DOT__ld));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__ld ^ vlSelf->top__DOT__de__DOT____Vtogcov__ld))) {
        ++(vlSymsp->__Vcoverage[3209]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ld = 
            ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__ld) 
             | (0x10U & vlSelf->top__DOT__de__DOT__ld));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__ld ^ vlSelf->top__DOT__de__DOT____Vtogcov__ld))) {
        ++(vlSymsp->__Vcoverage[3210]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ld = 
            ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__ld) 
             | (0x20U & vlSelf->top__DOT__de__DOT__ld));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__ld ^ vlSelf->top__DOT__de__DOT____Vtogcov__ld))) {
        ++(vlSymsp->__Vcoverage[3211]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ld = 
            ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__ld) 
             | (0x40U & vlSelf->top__DOT__de__DOT__ld));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__ld ^ vlSelf->top__DOT__de__DOT____Vtogcov__ld))) {
        ++(vlSymsp->__Vcoverage[3212]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ld = 
            ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__ld) 
             | (0x80U & vlSelf->top__DOT__de__DOT__ld));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__ld ^ vlSelf->top__DOT__de__DOT____Vtogcov__ld))) {
        ++(vlSymsp->__Vcoverage[3213]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ld = 
            ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__ld) 
             | (0x100U & vlSelf->top__DOT__de__DOT__ld));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__ld ^ vlSelf->top__DOT__de__DOT____Vtogcov__ld))) {
        ++(vlSymsp->__Vcoverage[3214]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ld = 
            ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__ld) 
             | (0x200U & vlSelf->top__DOT__de__DOT__ld));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__ld ^ vlSelf->top__DOT__de__DOT____Vtogcov__ld))) {
        ++(vlSymsp->__Vcoverage[3215]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ld = 
            ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__ld) 
             | (0x400U & vlSelf->top__DOT__de__DOT__ld));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__ld ^ vlSelf->top__DOT__de__DOT____Vtogcov__ld))) {
        ++(vlSymsp->__Vcoverage[3216]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ld = 
            ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__ld) 
             | (0x800U & vlSelf->top__DOT__de__DOT__ld));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__ld ^ vlSelf->top__DOT__de__DOT____Vtogcov__ld))) {
        ++(vlSymsp->__Vcoverage[3217]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ld = 
            ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__ld) 
             | (0x1000U & vlSelf->top__DOT__de__DOT__ld));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__ld ^ vlSelf->top__DOT__de__DOT____Vtogcov__ld))) {
        ++(vlSymsp->__Vcoverage[3218]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ld = 
            ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__ld) 
             | (0x2000U & vlSelf->top__DOT__de__DOT__ld));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__ld ^ vlSelf->top__DOT__de__DOT____Vtogcov__ld))) {
        ++(vlSymsp->__Vcoverage[3219]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ld = 
            ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__ld) 
             | (0x4000U & vlSelf->top__DOT__de__DOT__ld));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__ld ^ vlSelf->top__DOT__de__DOT____Vtogcov__ld))) {
        ++(vlSymsp->__Vcoverage[3220]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ld = 
            ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__ld) 
             | (0x8000U & vlSelf->top__DOT__de__DOT__ld));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__ld 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__ld))) {
        ++(vlSymsp->__Vcoverage[3221]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ld = 
            ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__ld) 
             | (0x10000U & vlSelf->top__DOT__de__DOT__ld));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__ld 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__ld))) {
        ++(vlSymsp->__Vcoverage[3222]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ld = 
            ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__ld) 
             | (0x20000U & vlSelf->top__DOT__de__DOT__ld));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__ld 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__ld))) {
        ++(vlSymsp->__Vcoverage[3223]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ld = 
            ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__ld) 
             | (0x40000U & vlSelf->top__DOT__de__DOT__ld));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__ld 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__ld))) {
        ++(vlSymsp->__Vcoverage[3224]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ld = 
            ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__ld) 
             | (0x80000U & vlSelf->top__DOT__de__DOT__ld));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__ld 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__ld))) {
        ++(vlSymsp->__Vcoverage[3225]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ld = 
            ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__ld) 
             | (0x100000U & vlSelf->top__DOT__de__DOT__ld));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__ld 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__ld))) {
        ++(vlSymsp->__Vcoverage[3226]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ld = 
            ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__ld) 
             | (0x200000U & vlSelf->top__DOT__de__DOT__ld));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__ld 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__ld))) {
        ++(vlSymsp->__Vcoverage[3227]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ld = 
            ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__ld) 
             | (0x400000U & vlSelf->top__DOT__de__DOT__ld));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__ld 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__ld))) {
        ++(vlSymsp->__Vcoverage[3228]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ld = 
            ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__ld) 
             | (0x800000U & vlSelf->top__DOT__de__DOT__ld));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__ld 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__ld))) {
        ++(vlSymsp->__Vcoverage[3229]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ld = 
            ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__ld) 
             | (0x1000000U & vlSelf->top__DOT__de__DOT__ld));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__ld 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__ld))) {
        ++(vlSymsp->__Vcoverage[3230]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ld = 
            ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__ld) 
             | (0x2000000U & vlSelf->top__DOT__de__DOT__ld));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__ld 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__ld))) {
        ++(vlSymsp->__Vcoverage[3231]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ld = 
            ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__ld) 
             | (0x4000000U & vlSelf->top__DOT__de__DOT__ld));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__ld 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__ld))) {
        ++(vlSymsp->__Vcoverage[3232]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ld = 
            ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__ld) 
             | (0x8000000U & vlSelf->top__DOT__de__DOT__ld));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__ld 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__ld))) {
        ++(vlSymsp->__Vcoverage[3233]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ld = 
            ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__ld) 
             | (0x10000000U & vlSelf->top__DOT__de__DOT__ld));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__ld 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__ld))) {
        ++(vlSymsp->__Vcoverage[3234]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ld = 
            ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__ld) 
             | (0x20000000U & vlSelf->top__DOT__de__DOT__ld));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__ld 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__ld))) {
        ++(vlSymsp->__Vcoverage[3235]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ld = 
            ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__ld) 
             | (0x40000000U & vlSelf->top__DOT__de__DOT__ld));
    }
    if (((vlSelf->top__DOT__de__DOT__ld ^ vlSelf->top__DOT__de__DOT____Vtogcov__ld) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3236]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ld = 
            ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__ld) 
             | (0x80000000U & vlSelf->top__DOT__de__DOT__ld));
    }
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0U] 
        = (IData)((((QData)((IData)((0x1fU & (vlSelf->inst 
                                              >> 7U)))) 
                    << 0x25U) | (((QData)((IData)(vlSelf->top__DOT__de__DOT__srli)) 
                                  << 5U) | (QData)((IData)(
                                                           (0x1fU 
                                                            & (vlSelf->inst 
                                                               >> 7U)))))));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[1U] 
        = ((vlSelf->top__DOT__de__DOT__slli << 0xaU) 
           | (IData)(((((QData)((IData)((0x1fU & (vlSelf->inst 
                                                  >> 7U)))) 
                        << 0x25U) | (((QData)((IData)(vlSelf->top__DOT__de__DOT__srli)) 
                                      << 5U) | (QData)((IData)(
                                                               (0x1fU 
                                                                & (vlSelf->inst 
                                                                   >> 7U)))))) 
                      >> 0x20U)));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[2U] 
        = ((vlSelf->top__DOT__de__DOT__srai << 0xfU) 
           | ((0x7c00U & (vlSelf->inst << 3U)) | (vlSelf->top__DOT__de__DOT__slli 
                                                  >> 0x16U)));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[3U] 
        = ((vlSelf->top__DOT__de__DOT__ld << 0x14U) 
           | ((0xf8000U & (vlSelf->inst << 8U)) | (vlSelf->top__DOT__de__DOT__srai 
                                                   >> 0x11U)));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[4U] 
        = ((vlSelf->top__DOT__de__DOT__sraiw << 0x19U) 
           | ((0x1f00000U & (vlSelf->inst << 0xdU)) 
              | (vlSelf->top__DOT__de__DOT__ld >> 0xcU)));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[5U] 
        = ((vlSelf->top__DOT__de__DOT__srliw << 0x1eU) 
           | ((0x3e000000U & (vlSelf->inst << 0x12U)) 
              | (vlSelf->top__DOT__de__DOT__sraiw >> 7U)));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[6U] 
        = ((0xc0000000U & (vlSelf->inst << 0x17U)) 
           | (vlSelf->top__DOT__de__DOT__srliw >> 2U));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[7U] 
        = ((vlSelf->top__DOT__de__DOT__slliw << 3U) 
           | (7U & (vlSelf->inst >> 9U)));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[8U] 
        = ((vlSelf->top__DOT__de__DOT__addiw << 8U) 
           | ((0xf8U & (vlSelf->inst >> 4U)) | (vlSelf->top__DOT__de__DOT__slliw 
                                                >> 0x1dU)));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[9U] 
        = ((vlSelf->top__DOT__de__DOT__sltiu << 0xdU) 
           | ((0x1f00U & (vlSelf->inst << 1U)) | (vlSelf->top__DOT__de__DOT__addiw 
                                                  >> 0x18U)));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0xaU] 
        = ((vlSelf->top__DOT__de__DOT__sub << 0x12U) 
           | ((0x3e000U & (vlSelf->inst << 6U)) | (vlSelf->top__DOT__de__DOT__sltiu 
                                                   >> 0x13U)));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0xbU] 
        = ((vlSelf->top__DOT__de__DOT__slt << 0x17U) 
           | ((0x7c0000U & (vlSelf->inst << 0xbU)) 
              | (vlSelf->top__DOT__de__DOT__sub >> 0xeU)));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0xcU] 
        = ((vlSelf->top__DOT__de__DOT__sltu << 0x1cU) 
           | ((0xf800000U & (vlSelf->inst << 0x10U)) 
              | (vlSelf->top__DOT__de__DOT__slt >> 9U)));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0xdU] 
        = ((0xf0000000U & (vlSelf->inst << 0x15U)) 
           | (vlSelf->top__DOT__de__DOT__sltu >> 4U));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0xeU] 
        = ((vlSelf->top__DOT__de__DOT__Or << 1U) | 
           (1U & (vlSelf->inst >> 0xbU)));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0xfU] 
        = ((vlSelf->top__DOT__de__DOT__Or >> 0x1fU) 
           | ((IData)((((QData)((IData)((0x1fU & (vlSelf->inst 
                                                  >> 7U)))) 
                        << 0x25U) | (((QData)((IData)(vlSelf->top__DOT__de__DOT__Xor)) 
                                      << 5U) | (QData)((IData)(
                                                               (0x1fU 
                                                                & (vlSelf->inst 
                                                                   >> 7U))))))) 
              << 1U));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x10U] 
        = (((IData)((((QData)((IData)((0x1fU & (vlSelf->inst 
                                                >> 7U)))) 
                      << 0x25U) | (((QData)((IData)(vlSelf->top__DOT__de__DOT__Xor)) 
                                    << 5U) | (QData)((IData)(
                                                             (0x1fU 
                                                              & (vlSelf->inst 
                                                                 >> 7U))))))) 
            >> 0x1fU) | ((vlSelf->top__DOT__de__DOT__And 
                          << 0xbU) | ((IData)(((((QData)((IData)(
                                                                 (0x1fU 
                                                                  & (vlSelf->inst 
                                                                     >> 7U)))) 
                                                 << 0x25U) 
                                                | (((QData)((IData)(vlSelf->top__DOT__de__DOT__Xor)) 
                                                    << 5U) 
                                                   | (QData)((IData)(
                                                                     (0x1fU 
                                                                      & (vlSelf->inst 
                                                                         >> 7U)))))) 
                                               >> 0x20U)) 
                                      << 1U)));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x11U] 
        = (((1U & (vlSelf->top__DOT__de__DOT__And >> 0x15U)) 
            | ((IData)(((((QData)((IData)((0x1fU & 
                                           (vlSelf->inst 
                                            >> 7U)))) 
                          << 0x25U) | (((QData)((IData)(vlSelf->top__DOT__de__DOT__Xor)) 
                                        << 5U) | (QData)((IData)(
                                                                 (0x1fU 
                                                                  & (vlSelf->inst 
                                                                     >> 7U)))))) 
                        >> 0x20U)) >> 0x1fU)) | ((vlSelf->top__DOT__de__DOT__Mul 
                                                  << 0x10U) 
                                                 | ((0xf800U 
                                                     & (vlSelf->inst 
                                                        << 4U)) 
                                                    | (0x7feU 
                                                       & (vlSelf->top__DOT__de__DOT__And 
                                                          >> 0x15U)))));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x12U] 
        = ((1U & (vlSelf->top__DOT__de__DOT__Mul >> 0x10U)) 
           | ((vlSelf->top__DOT__de__DOT__Add << 0x15U) 
              | ((0x1f0000U & (vlSelf->inst << 9U)) 
                 | (0xfffeU & (vlSelf->top__DOT__de__DOT__Mul 
                               >> 0x10U)))));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x13U] 
        = ((1U & (vlSelf->top__DOT__de__DOT__Add >> 0xbU)) 
           | ((vlSelf->top__DOT__de__DOT__sraw << 0x1aU) 
              | ((0x3e00000U & (vlSelf->inst << 0xeU)) 
                 | (0x1ffffeU & (vlSelf->top__DOT__de__DOT__Add 
                                 >> 0xbU)))));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x14U] 
        = ((1U & (vlSelf->top__DOT__de__DOT__sraw >> 6U)) 
           | ((vlSelf->top__DOT__de__DOT__srlw << 0x1fU) 
              | ((0x7c000000U & (vlSelf->inst << 0x13U)) 
                 | (0x3fffffeU & (vlSelf->top__DOT__de__DOT__sraw 
                                  >> 6U)))));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x15U] 
        = ((1U & (vlSelf->top__DOT__de__DOT__srlw >> 1U)) 
           | ((0x80000000U & (vlSelf->inst << 0x18U)) 
              | (0x7ffffffeU & (vlSelf->top__DOT__de__DOT__srlw 
                                >> 1U))));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x16U] 
        = ((1U & (vlSelf->inst >> 8U)) | ((vlSelf->top__DOT__de__DOT__sll 
                                           << 4U) | 
                                          (0xeU & (vlSelf->inst 
                                                   >> 8U))));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x17U] 
        = ((1U & (vlSelf->top__DOT__de__DOT__sll >> 0x1cU)) 
           | ((vlSelf->top__DOT__de__DOT__sllw << 9U) 
              | ((0x1f0U & (vlSelf->inst >> 3U)) | 
                 (0xeU & (vlSelf->top__DOT__de__DOT__sll 
                          >> 0x1cU)))));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x18U] 
        = ((1U & (vlSelf->top__DOT__de__DOT__sllw >> 0x17U)) 
           | ((vlSelf->top__DOT__de__DOT__remw << 0xeU) 
              | ((0x3e00U & (vlSelf->inst << 2U)) | 
                 (0x1feU & (vlSelf->top__DOT__de__DOT__sllw 
                            >> 0x17U)))));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x19U] 
        = ((1U & (vlSelf->top__DOT__de__DOT__remw >> 0x12U)) 
           | ((vlSelf->top__DOT__de__DOT__rem << 0x13U) 
              | ((0x7c000U & (vlSelf->inst << 7U)) 
                 | (0x3ffeU & (vlSelf->top__DOT__de__DOT__remw 
                               >> 0x12U)))));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x1aU] 
        = ((1U & (vlSelf->top__DOT__de__DOT__rem >> 0xdU)) 
           | ((vlSelf->top__DOT__de__DOT__div << 0x18U) 
              | ((0xf80000U & (vlSelf->inst << 0xcU)) 
                 | (0x7fffeU & (vlSelf->top__DOT__de__DOT__rem 
                                >> 0xdU)))));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x1bU] 
        = ((1U & (vlSelf->top__DOT__de__DOT__div >> 8U)) 
           | ((vlSelf->top__DOT__de__DOT__divuw << 0x1dU) 
              | ((0x1f000000U & (vlSelf->inst << 0x11U)) 
                 | (0xfffffeU & (vlSelf->top__DOT__de__DOT__div 
                                 >> 8U)))));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x1cU] 
        = ((1U & (vlSelf->top__DOT__de__DOT__divuw 
                  >> 3U)) | ((0xe0000000U & (vlSelf->inst 
                                             << 0x16U)) 
                             | (0x1ffffffeU & (vlSelf->top__DOT__de__DOT__divuw 
                                               >> 3U))));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x1dU] 
        = ((1U & (vlSelf->inst >> 0xaU)) | ((vlSelf->top__DOT__de__DOT__divw 
                                             << 2U) 
                                            | (2U & 
                                               (vlSelf->inst 
                                                >> 0xaU))));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x1eU] 
        = ((1U & (vlSelf->top__DOT__de__DOT__divw >> 0x1eU)) 
           | ((vlSelf->top__DOT__de__DOT__mulw << 7U) 
              | ((0x7cU & (vlSelf->inst >> 5U)) | (2U 
                                                   & (vlSelf->top__DOT__de__DOT__divw 
                                                      >> 0x1eU)))));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x1fU] 
        = ((1U & (vlSelf->top__DOT__de__DOT__mulw >> 0x19U)) 
           | ((vlSelf->top__DOT__de__DOT__subw << 0xcU) 
              | ((0xf80U & vlSelf->inst) | (0x7eU & 
                                            (vlSelf->top__DOT__de__DOT__mulw 
                                             >> 0x19U)))));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x20U] 
        = ((1U & (vlSelf->top__DOT__de__DOT__subw >> 0x14U)) 
           | ((vlSelf->top__DOT__de__DOT__addw << 0x11U) 
              | ((0x1f000U & (vlSelf->inst << 5U)) 
                 | (0xffeU & (vlSelf->top__DOT__de__DOT__subw 
                              >> 0x14U)))));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x21U] 
        = ((1U & (vlSelf->top__DOT__de__DOT__addw >> 0xfU)) 
           | ((vlSelf->top__DOT__de__DOT__lhu << 0x16U) 
              | ((0x3e0000U & (vlSelf->inst << 0xaU)) 
                 | (0x1fffeU & (vlSelf->top__DOT__de__DOT__addw 
                                >> 0xfU)))));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x22U] 
        = ((1U & (vlSelf->top__DOT__de__DOT__lhu >> 0xaU)) 
           | ((vlSelf->top__DOT__de__DOT__lwu << 0x1bU) 
              | ((0x7c00000U & (vlSelf->inst << 0xfU)) 
                 | (0x3ffffeU & (vlSelf->top__DOT__de__DOT__lhu 
                                 >> 0xaU)))));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x23U] 
        = ((1U & (vlSelf->top__DOT__de__DOT__lwu >> 5U)) 
           | ((0xf8000000U & (vlSelf->inst << 0x14U)) 
              | (0x7fffffeU & (vlSelf->top__DOT__de__DOT__lwu 
                               >> 5U))));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x24U] 
        = vlSelf->top__DOT__de__DOT__lbu;
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x25U] 
        = ((1U & (vlSelf->inst >> 7U)) | ((vlSelf->top__DOT__de__DOT__lb 
                                           << 5U) | 
                                          (0x1eU & 
                                           (vlSelf->inst 
                                            >> 7U))));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x26U] 
        = ((1U & (vlSelf->top__DOT__de__DOT__lb >> 0x1bU)) 
           | ((vlSelf->top__DOT__de__DOT__lh << 0xaU) 
              | ((0x3e0U & (vlSelf->inst >> 2U)) | 
                 (0x1eU & (vlSelf->top__DOT__de__DOT__lb 
                           >> 0x1bU)))));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x27U] 
        = ((1U & (vlSelf->top__DOT__de__DOT__lh >> 0x16U)) 
           | ((vlSelf->top__DOT__de__DOT__lw << 0xfU) 
              | ((0x7c00U & (vlSelf->inst << 3U)) | 
                 (0x3feU & (vlSelf->top__DOT__de__DOT__lh 
                            >> 0x16U)))));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x28U] 
        = ((1U & (vlSelf->top__DOT__de__DOT__lw >> 0x11U)) 
           | ((vlSelf->top__DOT__de__DOT__jalr << 0x14U) 
              | ((0xf8000U & (vlSelf->inst << 8U)) 
                 | (0x7ffeU & (vlSelf->top__DOT__de__DOT__lw 
                               >> 0x11U)))));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x29U] 
        = (0xde000000U | ((1U & (vlSelf->top__DOT__de__DOT__jalr 
                                 >> 0xcU)) | ((0x1f00000U 
                                               & (vlSelf->inst 
                                                  << 0xdU)) 
                                              | (0xffffeU 
                                                 & (vlSelf->top__DOT__de__DOT__jalr 
                                                    >> 0xcU)))));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x2aU] 
        = (0xc0000000U | ((1U & (vlSelf->inst >> 7U)) 
                          | ((0x3e000000U & (vlSelf->inst 
                                             << 0x12U)) 
                             | (0x1fffffeU & (vlSelf->inst 
                                              >> 7U)))));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x2bU] 
        = (1U | ((0xc0000000U & (vlSelf->inst << 0x17U)) 
                 | (0x3ffffffeU & (0xcU | (0x3fffffe0U 
                                           & (vlSelf->inst 
                                              >> 2U))))));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x2cU] 
        = ((1U & (vlSelf->inst >> 9U)) | ((0xfffffff8U 
                                           & (0xb8U 
                                              | (0xfffffc00U 
                                                 & (vlSelf->inst 
                                                    << 3U)))) 
                                          | (6U & (vlSelf->inst 
                                                   >> 9U))));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x2dU] 
        = ((1U & (vlSelf->inst >> 0x1dU)) | ((vlSelf->top__DOT__de__DOT__ori 
                                              << 8U) 
                                             | ((0xf8U 
                                                 & (vlSelf->inst 
                                                    >> 4U)) 
                                                | (6U 
                                                   & (vlSelf->inst 
                                                      >> 0x1dU)))));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x2eU] 
        = ((1U & (vlSelf->top__DOT__de__DOT__ori >> 0x18U)) 
           | ((vlSelf->top__DOT__de__DOT__xori << 0xdU) 
              | ((0x1f00U & (vlSelf->inst << 1U)) | 
                 (0xfeU & (vlSelf->top__DOT__de__DOT__ori 
                           >> 0x18U)))));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x2fU] 
        = ((1U & (vlSelf->top__DOT__de__DOT__xori >> 0x13U)) 
           | ((vlSelf->top__DOT__de__DOT__andi << 0x12U) 
              | ((0x3e000U & (vlSelf->inst << 6U)) 
                 | (0x1ffeU & (vlSelf->top__DOT__de__DOT__xori 
                               >> 0x13U)))));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x30U] 
        = ((1U & (vlSelf->top__DOT__de__DOT__andi >> 0xeU)) 
           | ((vlSelf->top__DOT__de__DOT__csrrs << 0x17U) 
              | ((0x7c0000U & (vlSelf->inst << 0xbU)) 
                 | (0x3fffeU & (vlSelf->top__DOT__de__DOT__andi 
                                >> 0xeU)))));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x31U] 
        = ((1U & (vlSelf->top__DOT__de__DOT__csrrs 
                  >> 9U)) | ((vlSelf->top__DOT__de__DOT__csrrw 
                              << 0x1cU) | ((0xf800000U 
                                            & (vlSelf->inst 
                                               << 0x10U)) 
                                           | (0x7ffffeU 
                                              & (vlSelf->top__DOT__de__DOT__csrrs 
                                                 >> 9U)))));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x32U] 
        = ((1U & (vlSelf->top__DOT__de__DOT__csrrw 
                  >> 4U)) | ((0xf0000000U & (vlSelf->inst 
                                             << 0x15U)) 
                             | (0xffffffeU & (vlSelf->top__DOT__de__DOT__csrrw 
                                              >> 4U))));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x33U] 
        = ((1U & (vlSelf->inst >> 0xbU)) | (vlSelf->top__DOT__de__DOT__addi 
                                            << 1U));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x34U] 
        = (vlSelf->top__DOT__de__DOT__addi >> 0x1fU);
    __Vtemp690[0U] = (IData)(((QData)((IData)(vlSelf->top__DOT__de__DOT__sllw)) 
                              << 3U));
    __Vtemp690[1U] = ((vlSelf->top__DOT__de__DOT__remw 
                       << 6U) | (IData)((((QData)((IData)(vlSelf->top__DOT__de__DOT__sllw)) 
                                          << 3U) >> 0x20U)));
    __Vtemp690[2U] = (vlSelf->top__DOT__de__DOT__remw 
                      >> 0x1aU);
    VL_EXTEND_WW(73,70, __Vtemp691, __Vtemp690);
    __Vtemp692[0U] = __Vtemp691[0U];
    __Vtemp692[1U] = __Vtemp691[1U];
    __Vtemp692[2U] = ((vlSelf->top__DOT__de__DOT__rem 
                       << 9U) | __Vtemp691[2U]);
    __Vtemp692[3U] = (vlSelf->top__DOT__de__DOT__rem 
                      >> 0x17U);
    VL_EXTEND_WW(108,105, __Vtemp693, __Vtemp692);
    __Vtemp694[0U] = __Vtemp693[0U];
    __Vtemp694[1U] = __Vtemp693[1U];
    __Vtemp694[2U] = __Vtemp693[2U];
    __Vtemp694[3U] = ((vlSelf->top__DOT__de__DOT__div 
                       << 0xcU) | __Vtemp693[3U]);
    __Vtemp694[4U] = (vlSelf->top__DOT__de__DOT__div 
                      >> 0x14U);
    VL_EXTEND_WW(143,140, __Vtemp695, __Vtemp694);
    __Vtemp696[0U] = __Vtemp695[0U];
    __Vtemp696[1U] = __Vtemp695[1U];
    __Vtemp696[2U] = __Vtemp695[2U];
    __Vtemp696[3U] = __Vtemp695[3U];
    __Vtemp696[4U] = ((vlSelf->top__DOT__de__DOT__divuw 
                       << 0xfU) | __Vtemp695[4U]);
    __Vtemp696[5U] = (vlSelf->top__DOT__de__DOT__divuw 
                      >> 0x11U);
    VL_EXTEND_WW(178,175, __Vtemp697, __Vtemp696);
    __Vtemp698[0U] = __Vtemp697[0U];
    __Vtemp698[1U] = __Vtemp697[1U];
    __Vtemp698[2U] = __Vtemp697[2U];
    __Vtemp698[3U] = __Vtemp697[3U];
    __Vtemp698[4U] = __Vtemp697[4U];
    __Vtemp698[5U] = ((vlSelf->top__DOT__de__DOT__divw 
                       << 0x12U) | __Vtemp697[5U]);
    __Vtemp698[6U] = (vlSelf->top__DOT__de__DOT__divw 
                      >> 0xeU);
    VL_EXTEND_WW(213,210, __Vtemp699, __Vtemp698);
    __Vtemp700[0U] = __Vtemp699[0U];
    __Vtemp700[1U] = __Vtemp699[1U];
    __Vtemp700[2U] = __Vtemp699[2U];
    __Vtemp700[3U] = __Vtemp699[3U];
    __Vtemp700[4U] = __Vtemp699[4U];
    __Vtemp700[5U] = __Vtemp699[5U];
    __Vtemp700[6U] = ((vlSelf->top__DOT__de__DOT__mulw 
                       << 0x15U) | __Vtemp699[6U]);
    __Vtemp700[7U] = (vlSelf->top__DOT__de__DOT__mulw 
                      >> 0xbU);
    VL_EXTEND_WW(248,245, __Vtemp701, __Vtemp700);
    __Vtemp702[0U] = __Vtemp701[0U];
    __Vtemp702[1U] = __Vtemp701[1U];
    __Vtemp702[2U] = __Vtemp701[2U];
    __Vtemp702[3U] = __Vtemp701[3U];
    __Vtemp702[4U] = __Vtemp701[4U];
    __Vtemp702[5U] = __Vtemp701[5U];
    __Vtemp702[6U] = __Vtemp701[6U];
    __Vtemp702[7U] = ((vlSelf->top__DOT__de__DOT__subw 
                       << 0x18U) | __Vtemp701[7U]);
    __Vtemp702[8U] = (vlSelf->top__DOT__de__DOT__subw 
                      >> 8U);
    VL_EXTEND_WW(283,280, __Vtemp703, __Vtemp702);
    __Vtemp740[0U] = __Vtemp703[0U];
    __Vtemp740[1U] = __Vtemp703[1U];
    __Vtemp740[2U] = __Vtemp703[2U];
    __Vtemp740[3U] = __Vtemp703[3U];
    __Vtemp740[4U] = __Vtemp703[4U];
    __Vtemp740[5U] = __Vtemp703[5U];
    __Vtemp740[6U] = __Vtemp703[6U];
    __Vtemp740[7U] = __Vtemp703[7U];
    __Vtemp740[8U] = ((vlSelf->top__DOT__de__DOT__addw 
                       << 0x1bU) | __Vtemp703[8U]);
    __Vtemp740[9U] = (0x8000000U | ((vlSelf->top__DOT__de__DOT__ld 
                                     << 0x1eU) | (vlSelf->top__DOT__de__DOT__addw 
                                                  >> 5U)));
    __Vtemp740[0xaU] = (0x40000000U | (vlSelf->top__DOT__de__DOT__ld 
                                       >> 2U));
    __Vtemp740[0xbU] = (vlSelf->top__DOT__de__DOT__lhu 
                        << 1U);
    __Vtemp740[0xcU] = (2U | ((vlSelf->top__DOT__de__DOT__lwu 
                               << 4U) | (vlSelf->top__DOT__de__DOT__lhu 
                                         >> 0x1fU)));
    __Vtemp740[0xdU] = (0x10U | ((vlSelf->top__DOT__de__DOT__lbu 
                                  << 7U) | (vlSelf->top__DOT__de__DOT__lwu 
                                            >> 0x1cU)));
    __Vtemp740[0xeU] = (0x80U | ((vlSelf->top__DOT__de__DOT__lb 
                                  << 0xaU) | (vlSelf->top__DOT__de__DOT__lbu 
                                              >> 0x19U)));
    __Vtemp740[0xfU] = (0x400U | ((vlSelf->top__DOT__de__DOT__lh 
                                   << 0xdU) | (vlSelf->top__DOT__de__DOT__lb 
                                               >> 0x16U)));
    __Vtemp740[0x10U] = (0x2000U | ((vlSelf->top__DOT__de__DOT__lw 
                                     << 0x10U) | (vlSelf->top__DOT__de__DOT__lh 
                                                  >> 0x13U)));
    __Vtemp740[0x11U] = (0x20000U | ((vlSelf->top__DOT__de__DOT__sb 
                                      << 0x13U) | (vlSelf->top__DOT__de__DOT__lw 
                                                   >> 0x10U)));
    __Vtemp740[0x12U] = (0x100000U | ((vlSelf->top__DOT__de__DOT__sw 
                                       << 0x16U) | 
                                      (vlSelf->top__DOT__de__DOT__sb 
                                       >> 0xdU)));
    __Vtemp740[0x13U] = (0x800000U | ((vlSelf->top__DOT__de__DOT__sh 
                                       << 0x19U) | 
                                      (vlSelf->top__DOT__de__DOT__sw 
                                       >> 0xaU)));
    __Vtemp740[0x14U] = (0x4000000U | ((vlSelf->top__DOT__de__DOT__sd 
                                        << 0x1cU) | 
                                       (vlSelf->top__DOT__de__DOT__sh 
                                        >> 7U)));
    __Vtemp740[0x15U] = (0x10000000U | ((vlSelf->top__DOT__de__DOT__jalr 
                                         << 0x1fU) 
                                        | (vlSelf->top__DOT__de__DOT__sd 
                                           >> 4U)));
    __Vtemp740[0x16U] = (0x80000000U | (vlSelf->top__DOT__de__DOT__jalr 
                                        >> 1U));
    __Vtemp740[0x17U] = (2U | (0xfffffffcU & (0x1bcU 
                                              | (0xfffffe00U 
                                                 & (vlSelf->inst 
                                                    << 2U)))));
    __Vtemp740[0x18U] = (0x10U | ((0xffffffe0U & (0x6e0U 
                                                  | (0xfffff000U 
                                                     & (vlSelf->inst 
                                                        << 5U)))) 
                                  | (vlSelf->inst >> 0x1eU)));
    __Vtemp740[0x19U] = (0x80U | ((0xffffff00U & (0x1700U 
                                                  | (0xffff8000U 
                                                     & (vlSelf->inst 
                                                        << 8U)))) 
                                  | (vlSelf->inst >> 0x1bU)));
    __Vtemp740[0x1aU] = (0x100U | ((vlSelf->top__DOT__de__DOT__ori 
                                    << 0xbU) | (vlSelf->inst 
                                                >> 0x18U)));
    __Vtemp740[0x1bU] = (0x800U | ((vlSelf->top__DOT__de__DOT__xori 
                                    << 0xeU) | (vlSelf->top__DOT__de__DOT__ori 
                                                >> 0x15U)));
    __Vtemp740[0x1cU] = (0x4000U | ((vlSelf->top__DOT__de__DOT__andi 
                                     << 0x11U) | (vlSelf->top__DOT__de__DOT__xori 
                                                  >> 0x12U)));
    __Vtemp740[0x1dU] = (vlSelf->top__DOT__de__DOT__andi 
                         >> 0xfU);
    VL_EXTEND_WW(948,945, __Vtemp741, __Vtemp740);
    __Vtemp776[0U] = (IData)((0x800000001ULL | ((QData)((IData)(vlSelf->top__DOT__de__DOT__srliw)) 
                                                << 3U)));
    __Vtemp776[1U] = ((vlSelf->top__DOT__de__DOT__slliw 
                       << 6U) | (IData)(((0x800000001ULL 
                                          | ((QData)((IData)(vlSelf->top__DOT__de__DOT__srliw)) 
                                             << 3U)) 
                                         >> 0x20U)));
    __Vtemp776[2U] = (0x40U | ((vlSelf->top__DOT__de__DOT__sraiw 
                                << 9U) | (vlSelf->top__DOT__de__DOT__slliw 
                                          >> 0x1aU)));
    __Vtemp776[3U] = (0x200U | ((vlSelf->top__DOT__de__DOT__addiw 
                                 << 0xcU) | (vlSelf->top__DOT__de__DOT__sraiw 
                                             >> 0x17U)));
    __Vtemp776[4U] = (0x3000U | ((vlSelf->top__DOT__de__DOT__bne 
                                  << 0xfU) | (vlSelf->top__DOT__de__DOT__addiw 
                                              >> 0x14U)));
    __Vtemp776[5U] = (0x18000U | ((vlSelf->top__DOT__de__DOT__blt 
                                   << 0x12U) | (vlSelf->top__DOT__de__DOT__bne 
                                                >> 0x11U)));
    __Vtemp776[6U] = (0xc0000U | ((vlSelf->top__DOT__de__DOT__bltu 
                                   << 0x15U) | (vlSelf->top__DOT__de__DOT__blt 
                                                >> 0xeU)));
    __Vtemp776[7U] = (0x600000U | ((vlSelf->top__DOT__de__DOT__bgeu 
                                    << 0x18U) | (vlSelf->top__DOT__de__DOT__bltu 
                                                 >> 0xbU)));
    __Vtemp776[8U] = (0x3000000U | ((vlSelf->top__DOT__de__DOT__bge 
                                     << 0x1bU) | (vlSelf->top__DOT__de__DOT__bgeu 
                                                  >> 8U)));
    __Vtemp776[9U] = (0x18000000U | ((vlSelf->top__DOT__de__DOT__beq 
                                      << 0x1eU) | (vlSelf->top__DOT__de__DOT__bge 
                                                   >> 5U)));
    __Vtemp776[0xaU] = (0x40000000U | (vlSelf->top__DOT__de__DOT__beq 
                                       >> 2U));
    __Vtemp776[0xbU] = (vlSelf->top__DOT__de__DOT__srli 
                        << 1U);
    __Vtemp776[0xcU] = (2U | ((vlSelf->top__DOT__de__DOT__slli 
                               << 4U) | (vlSelf->top__DOT__de__DOT__srli 
                                         >> 0x1fU)));
    __Vtemp776[0xdU] = (0x10U | ((vlSelf->top__DOT__de__DOT__srai 
                                  << 7U) | (vlSelf->top__DOT__de__DOT__slli 
                                            >> 0x1cU)));
    __Vtemp776[0xeU] = (0x80U | ((vlSelf->top__DOT__de__DOT__sltiu 
                                  << 0xaU) | (vlSelf->top__DOT__de__DOT__srai 
                                              >> 0x19U)));
    __Vtemp776[0xfU] = (vlSelf->top__DOT__de__DOT__sltiu 
                        >> 0x16U);
    VL_EXTEND_WW(493,490, __Vtemp777, __Vtemp776);
    __Vtemp778[0U] = __Vtemp777[0U];
    __Vtemp778[1U] = __Vtemp777[1U];
    __Vtemp778[2U] = __Vtemp777[2U];
    __Vtemp778[3U] = __Vtemp777[3U];
    __Vtemp778[4U] = __Vtemp777[4U];
    __Vtemp778[5U] = __Vtemp777[5U];
    __Vtemp778[6U] = __Vtemp777[6U];
    __Vtemp778[7U] = __Vtemp777[7U];
    __Vtemp778[8U] = __Vtemp777[8U];
    __Vtemp778[9U] = __Vtemp777[9U];
    __Vtemp778[0xaU] = __Vtemp777[0xaU];
    __Vtemp778[0xbU] = __Vtemp777[0xbU];
    __Vtemp778[0xcU] = __Vtemp777[0xcU];
    __Vtemp778[0xdU] = __Vtemp777[0xdU];
    __Vtemp778[0xeU] = __Vtemp777[0xeU];
    __Vtemp778[0xfU] = ((vlSelf->top__DOT__de__DOT__sub 
                         << 0xdU) | __Vtemp777[0xfU]);
    __Vtemp778[0x10U] = (vlSelf->top__DOT__de__DOT__sub 
                         >> 0x13U);
    VL_EXTEND_WW(528,525, __Vtemp779, __Vtemp778);
    __Vtemp780[0U] = __Vtemp779[0U];
    __Vtemp780[1U] = __Vtemp779[1U];
    __Vtemp780[2U] = __Vtemp779[2U];
    __Vtemp780[3U] = __Vtemp779[3U];
    __Vtemp780[4U] = __Vtemp779[4U];
    __Vtemp780[5U] = __Vtemp779[5U];
    __Vtemp780[6U] = __Vtemp779[6U];
    __Vtemp780[7U] = __Vtemp779[7U];
    __Vtemp780[8U] = __Vtemp779[8U];
    __Vtemp780[9U] = __Vtemp779[9U];
    __Vtemp780[0xaU] = __Vtemp779[0xaU];
    __Vtemp780[0xbU] = __Vtemp779[0xbU];
    __Vtemp780[0xcU] = __Vtemp779[0xcU];
    __Vtemp780[0xdU] = __Vtemp779[0xdU];
    __Vtemp780[0xeU] = __Vtemp779[0xeU];
    __Vtemp780[0xfU] = __Vtemp779[0xfU];
    __Vtemp780[0x10U] = ((vlSelf->top__DOT__de__DOT__slt 
                          << 0x10U) | __Vtemp779[0x10U]);
    __Vtemp780[0x11U] = (vlSelf->top__DOT__de__DOT__slt 
                         >> 0x10U);
    VL_EXTEND_WW(563,560, __Vtemp781, __Vtemp780);
    __Vtemp782[0U] = __Vtemp781[0U];
    __Vtemp782[1U] = __Vtemp781[1U];
    __Vtemp782[2U] = __Vtemp781[2U];
    __Vtemp782[3U] = __Vtemp781[3U];
    __Vtemp782[4U] = __Vtemp781[4U];
    __Vtemp782[5U] = __Vtemp781[5U];
    __Vtemp782[6U] = __Vtemp781[6U];
    __Vtemp782[7U] = __Vtemp781[7U];
    __Vtemp782[8U] = __Vtemp781[8U];
    __Vtemp782[9U] = __Vtemp781[9U];
    __Vtemp782[0xaU] = __Vtemp781[0xaU];
    __Vtemp782[0xbU] = __Vtemp781[0xbU];
    __Vtemp782[0xcU] = __Vtemp781[0xcU];
    __Vtemp782[0xdU] = __Vtemp781[0xdU];
    __Vtemp782[0xeU] = __Vtemp781[0xeU];
    __Vtemp782[0xfU] = __Vtemp781[0xfU];
    __Vtemp782[0x10U] = __Vtemp781[0x10U];
    __Vtemp782[0x11U] = ((vlSelf->top__DOT__de__DOT__sltu 
                          << 0x13U) | __Vtemp781[0x11U]);
    __Vtemp782[0x12U] = (vlSelf->top__DOT__de__DOT__sltu 
                         >> 0xdU);
    VL_EXTEND_WW(598,595, __Vtemp783, __Vtemp782);
    __Vtemp784[0U] = __Vtemp783[0U];
    __Vtemp784[1U] = __Vtemp783[1U];
    __Vtemp784[2U] = __Vtemp783[2U];
    __Vtemp784[3U] = __Vtemp783[3U];
    __Vtemp784[4U] = __Vtemp783[4U];
    __Vtemp784[5U] = __Vtemp783[5U];
    __Vtemp784[6U] = __Vtemp783[6U];
    __Vtemp784[7U] = __Vtemp783[7U];
    __Vtemp784[8U] = __Vtemp783[8U];
    __Vtemp784[9U] = __Vtemp783[9U];
    __Vtemp784[0xaU] = __Vtemp783[0xaU];
    __Vtemp784[0xbU] = __Vtemp783[0xbU];
    __Vtemp784[0xcU] = __Vtemp783[0xcU];
    __Vtemp784[0xdU] = __Vtemp783[0xdU];
    __Vtemp784[0xeU] = __Vtemp783[0xeU];
    __Vtemp784[0xfU] = __Vtemp783[0xfU];
    __Vtemp784[0x10U] = __Vtemp783[0x10U];
    __Vtemp784[0x11U] = __Vtemp783[0x11U];
    __Vtemp784[0x12U] = ((vlSelf->top__DOT__de__DOT__Or 
                          << 0x16U) | __Vtemp783[0x12U]);
    __Vtemp784[0x13U] = (vlSelf->top__DOT__de__DOT__Or 
                         >> 0xaU);
    VL_EXTEND_WW(633,630, __Vtemp785, __Vtemp784);
    __Vtemp786[0U] = __Vtemp785[0U];
    __Vtemp786[1U] = __Vtemp785[1U];
    __Vtemp786[2U] = __Vtemp785[2U];
    __Vtemp786[3U] = __Vtemp785[3U];
    __Vtemp786[4U] = __Vtemp785[4U];
    __Vtemp786[5U] = __Vtemp785[5U];
    __Vtemp786[6U] = __Vtemp785[6U];
    __Vtemp786[7U] = __Vtemp785[7U];
    __Vtemp786[8U] = __Vtemp785[8U];
    __Vtemp786[9U] = __Vtemp785[9U];
    __Vtemp786[0xaU] = __Vtemp785[0xaU];
    __Vtemp786[0xbU] = __Vtemp785[0xbU];
    __Vtemp786[0xcU] = __Vtemp785[0xcU];
    __Vtemp786[0xdU] = __Vtemp785[0xdU];
    __Vtemp786[0xeU] = __Vtemp785[0xeU];
    __Vtemp786[0xfU] = __Vtemp785[0xfU];
    __Vtemp786[0x10U] = __Vtemp785[0x10U];
    __Vtemp786[0x11U] = __Vtemp785[0x11U];
    __Vtemp786[0x12U] = __Vtemp785[0x12U];
    __Vtemp786[0x13U] = ((vlSelf->top__DOT__de__DOT__Xor 
                          << 0x19U) | __Vtemp785[0x13U]);
    __Vtemp786[0x14U] = (vlSelf->top__DOT__de__DOT__Xor 
                         >> 7U);
    VL_EXTEND_WW(668,665, __Vtemp787, __Vtemp786);
    __Vtemp788[0U] = __Vtemp787[0U];
    __Vtemp788[1U] = __Vtemp787[1U];
    __Vtemp788[2U] = __Vtemp787[2U];
    __Vtemp788[3U] = __Vtemp787[3U];
    __Vtemp788[4U] = __Vtemp787[4U];
    __Vtemp788[5U] = __Vtemp787[5U];
    __Vtemp788[6U] = __Vtemp787[6U];
    __Vtemp788[7U] = __Vtemp787[7U];
    __Vtemp788[8U] = __Vtemp787[8U];
    __Vtemp788[9U] = __Vtemp787[9U];
    __Vtemp788[0xaU] = __Vtemp787[0xaU];
    __Vtemp788[0xbU] = __Vtemp787[0xbU];
    __Vtemp788[0xcU] = __Vtemp787[0xcU];
    __Vtemp788[0xdU] = __Vtemp787[0xdU];
    __Vtemp788[0xeU] = __Vtemp787[0xeU];
    __Vtemp788[0xfU] = __Vtemp787[0xfU];
    __Vtemp788[0x10U] = __Vtemp787[0x10U];
    __Vtemp788[0x11U] = __Vtemp787[0x11U];
    __Vtemp788[0x12U] = __Vtemp787[0x12U];
    __Vtemp788[0x13U] = __Vtemp787[0x13U];
    __Vtemp788[0x14U] = ((vlSelf->top__DOT__de__DOT__And 
                          << 0x1cU) | __Vtemp787[0x14U]);
    __Vtemp788[0x15U] = (vlSelf->top__DOT__de__DOT__And 
                         >> 4U);
    VL_EXTEND_WW(703,700, __Vtemp789, __Vtemp788);
    __Vtemp790[0U] = __Vtemp789[0U];
    __Vtemp790[1U] = __Vtemp789[1U];
    __Vtemp790[2U] = __Vtemp789[2U];
    __Vtemp790[3U] = __Vtemp789[3U];
    __Vtemp790[4U] = __Vtemp789[4U];
    __Vtemp790[5U] = __Vtemp789[5U];
    __Vtemp790[6U] = __Vtemp789[6U];
    __Vtemp790[7U] = __Vtemp789[7U];
    __Vtemp790[8U] = __Vtemp789[8U];
    __Vtemp790[9U] = __Vtemp789[9U];
    __Vtemp790[0xaU] = __Vtemp789[0xaU];
    __Vtemp790[0xbU] = __Vtemp789[0xbU];
    __Vtemp790[0xcU] = __Vtemp789[0xcU];
    __Vtemp790[0xdU] = __Vtemp789[0xdU];
    __Vtemp790[0xeU] = __Vtemp789[0xeU];
    __Vtemp790[0xfU] = __Vtemp789[0xfU];
    __Vtemp790[0x10U] = __Vtemp789[0x10U];
    __Vtemp790[0x11U] = __Vtemp789[0x11U];
    __Vtemp790[0x12U] = __Vtemp789[0x12U];
    __Vtemp790[0x13U] = __Vtemp789[0x13U];
    __Vtemp790[0x14U] = __Vtemp789[0x14U];
    __Vtemp790[0x15U] = ((vlSelf->top__DOT__de__DOT__Mul 
                          << 0x1fU) | __Vtemp789[0x15U]);
    __Vtemp790[0x16U] = (vlSelf->top__DOT__de__DOT__Mul 
                         >> 1U);
    VL_EXTEND_WW(738,735, __Vtemp791, __Vtemp790);
    __Vtemp792[0U] = __Vtemp791[0U];
    __Vtemp792[1U] = __Vtemp791[1U];
    __Vtemp792[2U] = __Vtemp791[2U];
    __Vtemp792[3U] = __Vtemp791[3U];
    __Vtemp792[4U] = __Vtemp791[4U];
    __Vtemp792[5U] = __Vtemp791[5U];
    __Vtemp792[6U] = __Vtemp791[6U];
    __Vtemp792[7U] = __Vtemp791[7U];
    __Vtemp792[8U] = __Vtemp791[8U];
    __Vtemp792[9U] = __Vtemp791[9U];
    __Vtemp792[0xaU] = __Vtemp791[0xaU];
    __Vtemp792[0xbU] = __Vtemp791[0xbU];
    __Vtemp792[0xcU] = __Vtemp791[0xcU];
    __Vtemp792[0xdU] = __Vtemp791[0xdU];
    __Vtemp792[0xeU] = __Vtemp791[0xeU];
    __Vtemp792[0xfU] = __Vtemp791[0xfU];
    __Vtemp792[0x10U] = __Vtemp791[0x10U];
    __Vtemp792[0x11U] = __Vtemp791[0x11U];
    __Vtemp792[0x12U] = __Vtemp791[0x12U];
    __Vtemp792[0x13U] = __Vtemp791[0x13U];
    __Vtemp792[0x14U] = __Vtemp791[0x14U];
    __Vtemp792[0x15U] = __Vtemp791[0x15U];
    __Vtemp792[0x16U] = __Vtemp791[0x16U];
    __Vtemp792[0x17U] = ((vlSelf->top__DOT__de__DOT__Add 
                          << 2U) | __Vtemp791[0x17U]);
    __Vtemp792[0x18U] = (vlSelf->top__DOT__de__DOT__Add 
                         >> 0x1eU);
    VL_EXTEND_WW(773,770, __Vtemp793, __Vtemp792);
    __Vtemp794[0U] = __Vtemp793[0U];
    __Vtemp794[1U] = __Vtemp793[1U];
    __Vtemp794[2U] = __Vtemp793[2U];
    __Vtemp794[3U] = __Vtemp793[3U];
    __Vtemp794[4U] = __Vtemp793[4U];
    __Vtemp794[5U] = __Vtemp793[5U];
    __Vtemp794[6U] = __Vtemp793[6U];
    __Vtemp794[7U] = __Vtemp793[7U];
    __Vtemp794[8U] = __Vtemp793[8U];
    __Vtemp794[9U] = __Vtemp793[9U];
    __Vtemp794[0xaU] = __Vtemp793[0xaU];
    __Vtemp794[0xbU] = __Vtemp793[0xbU];
    __Vtemp794[0xcU] = __Vtemp793[0xcU];
    __Vtemp794[0xdU] = __Vtemp793[0xdU];
    __Vtemp794[0xeU] = __Vtemp793[0xeU];
    __Vtemp794[0xfU] = __Vtemp793[0xfU];
    __Vtemp794[0x10U] = __Vtemp793[0x10U];
    __Vtemp794[0x11U] = __Vtemp793[0x11U];
    __Vtemp794[0x12U] = __Vtemp793[0x12U];
    __Vtemp794[0x13U] = __Vtemp793[0x13U];
    __Vtemp794[0x14U] = __Vtemp793[0x14U];
    __Vtemp794[0x15U] = __Vtemp793[0x15U];
    __Vtemp794[0x16U] = __Vtemp793[0x16U];
    __Vtemp794[0x17U] = __Vtemp793[0x17U];
    __Vtemp794[0x18U] = ((vlSelf->top__DOT__de__DOT__sraw 
                          << 5U) | __Vtemp793[0x18U]);
    __Vtemp794[0x19U] = (vlSelf->top__DOT__de__DOT__sraw 
                         >> 0x1bU);
    VL_EXTEND_WW(808,805, __Vtemp795, __Vtemp794);
    __Vtemp796[0U] = __Vtemp795[0U];
    __Vtemp796[1U] = __Vtemp795[1U];
    __Vtemp796[2U] = __Vtemp795[2U];
    __Vtemp796[3U] = __Vtemp795[3U];
    __Vtemp796[4U] = __Vtemp795[4U];
    __Vtemp796[5U] = __Vtemp795[5U];
    __Vtemp796[6U] = __Vtemp795[6U];
    __Vtemp796[7U] = __Vtemp795[7U];
    __Vtemp796[8U] = __Vtemp795[8U];
    __Vtemp796[9U] = __Vtemp795[9U];
    __Vtemp796[0xaU] = __Vtemp795[0xaU];
    __Vtemp796[0xbU] = __Vtemp795[0xbU];
    __Vtemp796[0xcU] = __Vtemp795[0xcU];
    __Vtemp796[0xdU] = __Vtemp795[0xdU];
    __Vtemp796[0xeU] = __Vtemp795[0xeU];
    __Vtemp796[0xfU] = __Vtemp795[0xfU];
    __Vtemp796[0x10U] = __Vtemp795[0x10U];
    __Vtemp796[0x11U] = __Vtemp795[0x11U];
    __Vtemp796[0x12U] = __Vtemp795[0x12U];
    __Vtemp796[0x13U] = __Vtemp795[0x13U];
    __Vtemp796[0x14U] = __Vtemp795[0x14U];
    __Vtemp796[0x15U] = __Vtemp795[0x15U];
    __Vtemp796[0x16U] = __Vtemp795[0x16U];
    __Vtemp796[0x17U] = __Vtemp795[0x17U];
    __Vtemp796[0x18U] = __Vtemp795[0x18U];
    __Vtemp796[0x19U] = ((vlSelf->top__DOT__de__DOT__srlw 
                          << 8U) | __Vtemp795[0x19U]);
    __Vtemp796[0x1aU] = (vlSelf->top__DOT__de__DOT__srlw 
                         >> 0x18U);
    VL_EXTEND_WW(843,840, __Vtemp797, __Vtemp796);
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0U] 
        = __Vtemp797[0U];
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[1U] 
        = __Vtemp797[1U];
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[2U] 
        = __Vtemp797[2U];
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[3U] 
        = __Vtemp797[3U];
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[4U] 
        = __Vtemp797[4U];
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[5U] 
        = __Vtemp797[5U];
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[6U] 
        = __Vtemp797[6U];
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[7U] 
        = __Vtemp797[7U];
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[8U] 
        = __Vtemp797[8U];
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[9U] 
        = __Vtemp797[9U];
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0xaU] 
        = __Vtemp797[0xaU];
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0xbU] 
        = __Vtemp797[0xbU];
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0xcU] 
        = __Vtemp797[0xcU];
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0xdU] 
        = __Vtemp797[0xdU];
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0xeU] 
        = __Vtemp797[0xeU];
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0xfU] 
        = __Vtemp797[0xfU];
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x10U] 
        = __Vtemp797[0x10U];
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x11U] 
        = __Vtemp797[0x11U];
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x12U] 
        = __Vtemp797[0x12U];
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x13U] 
        = __Vtemp797[0x13U];
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x14U] 
        = __Vtemp797[0x14U];
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x15U] 
        = __Vtemp797[0x15U];
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x16U] 
        = __Vtemp797[0x16U];
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x17U] 
        = __Vtemp797[0x17U];
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x18U] 
        = __Vtemp797[0x18U];
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x19U] 
        = __Vtemp797[0x19U];
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x1aU] 
        = ((vlSelf->top__DOT__de__DOT__sll << 0xbU) 
           | __Vtemp797[0x1aU]);
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x1bU] 
        = ((vlSelf->top__DOT__de__DOT__sll >> 0x15U) 
           | (__Vtemp741[0U] << 0xbU));
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x1cU] 
        = ((__Vtemp741[0U] >> 0x15U) | (__Vtemp741[1U] 
                                        << 0xbU));
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x1dU] 
        = ((__Vtemp741[1U] >> 0x15U) | (__Vtemp741[2U] 
                                        << 0xbU));
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x1eU] 
        = ((__Vtemp741[2U] >> 0x15U) | (__Vtemp741[3U] 
                                        << 0xbU));
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x1fU] 
        = ((__Vtemp741[3U] >> 0x15U) | (__Vtemp741[4U] 
                                        << 0xbU));
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x20U] 
        = ((__Vtemp741[4U] >> 0x15U) | (__Vtemp741[5U] 
                                        << 0xbU));
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x21U] 
        = ((__Vtemp741[5U] >> 0x15U) | (__Vtemp741[6U] 
                                        << 0xbU));
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x22U] 
        = ((__Vtemp741[6U] >> 0x15U) | (__Vtemp741[7U] 
                                        << 0xbU));
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x23U] 
        = ((__Vtemp741[7U] >> 0x15U) | (__Vtemp741[8U] 
                                        << 0xbU));
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x24U] 
        = ((__Vtemp741[8U] >> 0x15U) | (__Vtemp741[9U] 
                                        << 0xbU));
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x25U] 
        = ((__Vtemp741[9U] >> 0x15U) | (__Vtemp741[0xaU] 
                                        << 0xbU));
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x26U] 
        = ((__Vtemp741[0xaU] >> 0x15U) | (__Vtemp741[0xbU] 
                                          << 0xbU));
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x27U] 
        = ((__Vtemp741[0xbU] >> 0x15U) | (__Vtemp741[0xcU] 
                                          << 0xbU));
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x28U] 
        = ((__Vtemp741[0xcU] >> 0x15U) | (__Vtemp741[0xdU] 
                                          << 0xbU));
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x29U] 
        = ((__Vtemp741[0xdU] >> 0x15U) | (__Vtemp741[0xeU] 
                                          << 0xbU));
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x2aU] 
        = ((__Vtemp741[0xeU] >> 0x15U) | (__Vtemp741[0xfU] 
                                          << 0xbU));
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x2bU] 
        = ((__Vtemp741[0xfU] >> 0x15U) | (__Vtemp741[0x10U] 
                                          << 0xbU));
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x2cU] 
        = ((__Vtemp741[0x10U] >> 0x15U) | (__Vtemp741[0x11U] 
                                           << 0xbU));
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x2dU] 
        = ((__Vtemp741[0x11U] >> 0x15U) | (__Vtemp741[0x12U] 
                                           << 0xbU));
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x2eU] 
        = ((__Vtemp741[0x12U] >> 0x15U) | (__Vtemp741[0x13U] 
                                           << 0xbU));
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x2fU] 
        = ((__Vtemp741[0x13U] >> 0x15U) | (__Vtemp741[0x14U] 
                                           << 0xbU));
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x30U] 
        = ((__Vtemp741[0x14U] >> 0x15U) | (__Vtemp741[0x15U] 
                                           << 0xbU));
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x31U] 
        = ((__Vtemp741[0x15U] >> 0x15U) | (__Vtemp741[0x16U] 
                                           << 0xbU));
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x32U] 
        = ((__Vtemp741[0x16U] >> 0x15U) | (__Vtemp741[0x17U] 
                                           << 0xbU));
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x33U] 
        = ((__Vtemp741[0x17U] >> 0x15U) | (__Vtemp741[0x18U] 
                                           << 0xbU));
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x34U] 
        = ((__Vtemp741[0x18U] >> 0x15U) | (__Vtemp741[0x19U] 
                                           << 0xbU));
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x35U] 
        = ((__Vtemp741[0x19U] >> 0x15U) | (__Vtemp741[0x1aU] 
                                           << 0xbU));
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x36U] 
        = ((__Vtemp741[0x1aU] >> 0x15U) | (__Vtemp741[0x1bU] 
                                           << 0xbU));
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x37U] 
        = ((__Vtemp741[0x1bU] >> 0x15U) | (__Vtemp741[0x1cU] 
                                           << 0xbU));
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x38U] 
        = (0x80000000U | ((__Vtemp741[0x1cU] >> 0x15U) 
                          | (__Vtemp741[0x1dU] << 0xbU)));
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x39U] 
        = (0x98100039U | (__Vtemp741[0x1dU] >> 0x15U));
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x3aU] = 0x1ccU;
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x3bU] 
        = (4U | ((0x7e0U & (vlSelf->top__DOT__de__DOT__csrrs 
                            << 5U)) | (0xfffff800U 
                                       & (vlSelf->top__DOT__de__DOT__csrrs 
                                          << 5U))));
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x3cU] 
        = (0x20U | (((0x700U & (vlSelf->top__DOT__de__DOT__csrrw 
                                << 8U)) | (vlSelf->top__DOT__de__DOT__csrrs 
                                           >> 0x1bU)) 
                    | (0xfffff800U & (vlSelf->top__DOT__de__DOT__csrrw 
                                      << 8U))));
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x3dU] 
        = (0x100U | ((vlSelf->top__DOT__de__DOT__csrrw 
                      >> 0x18U) | (vlSelf->top__DOT__de__DOT__addi 
                                   << 0xbU)));
    vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x3eU] 
        = (vlSelf->top__DOT__de__DOT__addi >> 0x15U);
    if ((1U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__data_list
               [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[5952]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xffeU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (1U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__data_list
               [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[5953]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xffdU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (2U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__data_list
               [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[5954]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xffbU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (4U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__data_list
               [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[5955]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xff7U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (8U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__data_list
                  [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[5956]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xfefU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (0x10U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__data_list
                  [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[5957]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xfdfU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (0x20U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__data_list
                  [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[5958]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xfbfU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (0x40U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__data_list
                  [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[5959]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xf7fU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (0x80U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__data_list
                   [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[5960]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xeffU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (0x100U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__data_list
                   [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[5961]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xdffU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (0x200U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__data_list
                   [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[5962]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xbffU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (0x400U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__data_list
                   [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[5963]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0x7ffU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (0x800U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__data_list
               [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[5952]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xffeU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (1U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__data_list
               [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[5953]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xffdU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (2U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__data_list
               [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[5954]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xffbU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (4U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__data_list
               [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[5955]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xff7U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (8U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__data_list
                  [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[5956]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xfefU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (0x10U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__data_list
                  [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[5957]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xfdfU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (0x20U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__data_list
                  [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[5958]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xfbfU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (0x40U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__data_list
                  [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[5959]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xf7fU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (0x80U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__data_list
                   [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[5960]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xeffU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (0x100U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__data_list
                   [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[5961]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xdffU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (0x200U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__data_list
                   [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[5962]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xbffU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (0x400U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__data_list
                   [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[5963]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0x7ffU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (0x800U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
               [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[5920]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffffffeU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (1U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
               [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[5921]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffffffdU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (2U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
               [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[5922]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffffffbU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (4U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
               [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[5923]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffffff7U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (8U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                  [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[5924]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffffffefU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x10U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                  [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[5925]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffffffdfU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x20U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                  [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[5926]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffffffbfU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x40U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                  [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[5927]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffffff7fU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x80U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                   [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[5928]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffffeffU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x100U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                   [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[5929]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffffdffU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x200U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                   [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[5930]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffffbffU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x400U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                   [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[5931]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x800U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                    [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[5932]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffffefffU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x1000U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                    [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[5933]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffffdfffU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x2000U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                    [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[5934]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffffbfffU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x4000U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                    [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[5935]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffff7fffU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x8000U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                     [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[5936]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffeffffU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x10000U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                     [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[5937]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffdffffU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x20000U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                     [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[5938]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffbffffU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x40000U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                     [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[5939]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x80000U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                      [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[5940]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffefffffU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x100000U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                      [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[5941]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffdfffffU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x200000U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                      [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[5942]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffbfffffU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x400000U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                      [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[5943]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xff7fffffU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x800000U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                       [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[5944]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfeffffffU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x1000000U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                       [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[5945]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfdffffffU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x2000000U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                       [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[5946]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfbffffffU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x4000000U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                       [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[5947]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x8000000U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                        [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                        [0U]))) {
        ++(vlSymsp->__Vcoverage[5948]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xefffffffU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x10000000U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                        [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                        [0U]))) {
        ++(vlSymsp->__Vcoverage[5949]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xdfffffffU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x20000000U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                        [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                        [0U]))) {
        ++(vlSymsp->__Vcoverage[5950]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x40000000U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                         [0U]));
    }
    if (((vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
          [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
          [0U]) >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[5951]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0x7fffffffU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x80000000U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
               [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[5920]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffffffeU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (1U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
               [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[5921]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffffffdU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (2U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
               [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[5922]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffffffbU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (4U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
               [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[5923]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffffff7U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (8U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                  [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[5924]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffffffefU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x10U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                  [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[5925]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffffffdfU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x20U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                  [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[5926]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffffffbfU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x40U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                  [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[5927]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffffff7fU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x80U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                   [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[5928]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffffeffU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x100U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                   [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[5929]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffffdffU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x200U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                   [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[5930]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffffbffU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x400U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                   [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[5931]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x800U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                    [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[5932]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffffefffU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x1000U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                    [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[5933]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffffdfffU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x2000U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                    [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[5934]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffffbfffU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x4000U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                    [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[5935]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffff7fffU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x8000U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                     [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[5936]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffeffffU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x10000U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                     [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[5937]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffdffffU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x20000U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                     [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[5938]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffbffffU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x40000U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                     [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[5939]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x80000U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                      [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[5940]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffefffffU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x100000U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                      [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[5941]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffdfffffU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x200000U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                      [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[5942]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffbfffffU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x400000U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                      [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[5943]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xff7fffffU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x800000U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                       [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[5944]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfeffffffU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x1000000U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                       [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[5945]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfdffffffU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x2000000U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                       [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[5946]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfbffffffU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x4000000U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                       [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[5947]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x8000000U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                        [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                        [0U]))) {
        ++(vlSymsp->__Vcoverage[5948]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xefffffffU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x10000000U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                        [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                        [0U]))) {
        ++(vlSymsp->__Vcoverage[5949]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xdfffffffU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x20000000U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                        [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                        [0U]))) {
        ++(vlSymsp->__Vcoverage[5950]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x40000000U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                         [0U]));
    }
    if (((vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
          [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
          [0U]) >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[5951]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0x7fffffffU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x80000000U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                         [0U]));
    }
    vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__lut_out 
        = ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__data_list
           [0U]);
    ++(vlSymsp->__Vcoverage[5977]);
    ++(vlSymsp->__Vcoverage[5979]);
    ++(vlSymsp->__Vcoverage[5980]);
    vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__hit 
        = (vlSelf->inst == vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__i = 1U;
    vlSelf->top__DOT__de__DOT__wcsraddr2 = ((IData)(vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__hit)
                                             ? (IData)(vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__lut_out)
                                             : 0U);
    if ((1U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__data_list
               [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__data_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[6311]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0x1eU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (1U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__data_list
               [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__data_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[6312]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0x1dU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (2U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__data_list
               [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__data_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[6313]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0x1bU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (4U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__data_list
               [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__data_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[6314]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0x17U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (8U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__data_list
                  [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__data_list
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[6315]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xfU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (0x10U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__data_list
               [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__data_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[6311]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0x1eU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (1U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__data_list
               [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__data_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[6312]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0x1dU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (2U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__data_list
               [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__data_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[6313]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0x1bU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (4U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__data_list
               [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__data_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[6314]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0x17U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (8U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__data_list
                  [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__data_list
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[6315]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xfU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (0x10U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
               [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[6279]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffffffeU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (1U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
               [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[6280]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffffffdU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (2U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
               [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[6281]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffffffbU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (4U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
               [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[6282]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffffff7U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (8U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                  [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[6283]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffffffefU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x10U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                  [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[6284]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffffffdfU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x20U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                  [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[6285]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffffffbfU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x40U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                  [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[6286]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffffff7fU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x80U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                   [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[6287]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffffeffU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x100U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                   [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[6288]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffffdffU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x200U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                   [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[6289]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffffbffU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x400U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                   [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[6290]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x800U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                    [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[6291]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffffefffU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x1000U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                    [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[6292]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffffdfffU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x2000U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                    [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[6293]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffffbfffU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x4000U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                    [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[6294]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffff7fffU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x8000U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                     [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[6295]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffeffffU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x10000U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                     [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[6296]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffdffffU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x20000U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                     [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[6297]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffbffffU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x40000U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                     [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[6298]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x80000U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                      [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[6299]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffefffffU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x100000U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                      [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[6300]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffdfffffU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x200000U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                      [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[6301]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffbfffffU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x400000U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                      [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[6302]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xff7fffffU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x800000U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                       [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[6303]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfeffffffU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x1000000U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                       [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[6304]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfdffffffU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x2000000U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                       [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[6305]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfbffffffU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x4000000U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                       [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[6306]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x8000000U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                        [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                        [0U]))) {
        ++(vlSymsp->__Vcoverage[6307]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xefffffffU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x10000000U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                        [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                        [0U]))) {
        ++(vlSymsp->__Vcoverage[6308]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xdfffffffU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x20000000U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                        [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                        [0U]))) {
        ++(vlSymsp->__Vcoverage[6309]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x40000000U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                         [0U]));
    }
    if (((vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
          [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
          [0U]) >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[6310]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0x7fffffffU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x80000000U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
               [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[6279]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffffffeU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (1U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
               [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[6280]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffffffdU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (2U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
               [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[6281]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffffffbU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (4U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
               [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[6282]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffffff7U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (8U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                  [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[6283]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffffffefU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x10U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                  [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[6284]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffffffdfU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x20U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                  [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[6285]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffffffbfU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x40U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                  [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[6286]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffffff7fU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x80U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                   [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[6287]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffffeffU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x100U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                   [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[6288]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffffdffU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x200U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                   [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[6289]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffffbffU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x400U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                   [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[6290]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x800U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                    [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[6291]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffffefffU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x1000U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                    [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[6292]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffffdfffU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x2000U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                    [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[6293]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffffbfffU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x4000U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                    [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[6294]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffff7fffU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x8000U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                     [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[6295]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffeffffU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x10000U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                     [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[6296]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffdffffU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x20000U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                     [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[6297]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffbffffU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x40000U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                     [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[6298]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x80000U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                      [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[6299]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffefffffU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x100000U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                      [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[6300]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffdfffffU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x200000U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                      [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[6301]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffbfffffU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x400000U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                      [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[6302]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xff7fffffU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x800000U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                       [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[6303]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfeffffffU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x1000000U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                       [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[6304]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfdffffffU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x2000000U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                       [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[6305]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfbffffffU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x4000000U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                       [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[6306]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x8000000U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                        [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                        [0U]))) {
        ++(vlSymsp->__Vcoverage[6307]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xefffffffU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x10000000U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                        [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                        [0U]))) {
        ++(vlSymsp->__Vcoverage[6308]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xdfffffffU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x20000000U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                        [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                        [0U]))) {
        ++(vlSymsp->__Vcoverage[6309]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x40000000U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                         [0U]));
    }
    if (((vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
          [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
          [0U]) >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[6310]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0x7fffffffU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x80000000U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                         [0U]));
    }
    vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__lut_out 
        = ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__data_list
           [0U]);
    ++(vlSymsp->__Vcoverage[6322]);
    ++(vlSymsp->__Vcoverage[6324]);
    ++(vlSymsp->__Vcoverage[6325]);
    vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__hit 
        = (vlSelf->inst == vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__i = 1U;
    vlSelf->top__DOT__de__DOT__raddr = ((IData)(vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__hit)
                                         ? (IData)(vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__lut_out)
                                         : 0U);
    if ((1U & (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
               [0U] ^ vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[6077]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffffffeU & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (1U & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
               [0U] ^ vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[6078]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffffffdU & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (2U & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
               [0U] ^ vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[6079]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffffffbU & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (4U & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
               [0U] ^ vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[6080]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffffff7U & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (8U & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                  [0U] ^ vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[6081]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffffffefU & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x10U & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                  [0U] ^ vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[6082]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffffffdfU & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x20U & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                  [0U] ^ vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[6083]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffffffbfU & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x40U & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                  [0U] ^ vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[6084]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffffff7fU & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x80U & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                   [0U] ^ vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[6085]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffffeffU & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x100U & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                   [0U] ^ vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[6086]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffffdffU & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x200U & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                   [0U] ^ vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[6087]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffffbffU & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x400U & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                   [0U] ^ vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[6088]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x800U & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                    [0U] ^ vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[6089]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffffefffU & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x1000U & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                    [0U] ^ vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[6090]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffffdfffU & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x2000U & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                    [0U] ^ vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[6091]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffffbfffU & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x4000U & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                    [0U] ^ vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[6092]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffff7fffU & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x8000U & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                     [0U] ^ vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[6093]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffeffffU & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x10000U & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                     [0U] ^ vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[6094]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffdffffU & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x20000U & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                     [0U] ^ vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[6095]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffbffffU & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x40000U & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                     [0U] ^ vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[6096]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x80000U & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                      [0U] ^ vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[6097]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffefffffU & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x100000U & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                      [0U] ^ vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[6098]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffdfffffU & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x200000U & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                      [0U] ^ vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[6099]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffbfffffU & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x400000U & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                      [0U] ^ vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[6100]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xff7fffffU & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x800000U & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                       [0U] ^ vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[6101]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfeffffffU & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x1000000U & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                       [0U] ^ vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[6102]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfdffffffU & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x2000000U & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                       [0U] ^ vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[6103]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfbffffffU & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x4000000U & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                       [0U] ^ vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[6104]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x8000000U & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                        [0U] ^ vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                        [0U]))) {
        ++(vlSymsp->__Vcoverage[6105]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xefffffffU & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x10000000U & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                        [0U] ^ vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                        [0U]))) {
        ++(vlSymsp->__Vcoverage[6106]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xdfffffffU & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x20000000U & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                        [0U] ^ vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                        [0U]))) {
        ++(vlSymsp->__Vcoverage[6107]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x40000000U & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                         [0U]));
    }
    if (((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
          [0U] ^ vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
          [0U]) >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[6108]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0x7fffffffU & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x80000000U & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
               [0U] ^ vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[6077]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffffffeU & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (1U & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
               [0U] ^ vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[6078]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffffffdU & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (2U & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
               [0U] ^ vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[6079]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffffffbU & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (4U & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
               [0U] ^ vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[6080]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffffff7U & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (8U & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                  [0U] ^ vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[6081]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffffffefU & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x10U & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                  [0U] ^ vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[6082]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffffffdfU & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x20U & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                  [0U] ^ vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[6083]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffffffbfU & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x40U & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                  [0U] ^ vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[6084]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffffff7fU & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x80U & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                   [0U] ^ vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[6085]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffffeffU & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x100U & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                   [0U] ^ vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[6086]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffffdffU & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x200U & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                   [0U] ^ vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[6087]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffffbffU & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x400U & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                   [0U] ^ vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[6088]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x800U & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                    [0U] ^ vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[6089]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffffefffU & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x1000U & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                    [0U] ^ vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[6090]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffffdfffU & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x2000U & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                    [0U] ^ vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[6091]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffffbfffU & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x4000U & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                    [0U] ^ vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[6092]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffff7fffU & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x8000U & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                     [0U] ^ vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[6093]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffeffffU & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x10000U & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                     [0U] ^ vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[6094]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffdffffU & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x20000U & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                     [0U] ^ vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[6095]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffbffffU & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x40000U & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                     [0U] ^ vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[6096]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x80000U & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                      [0U] ^ vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[6097]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffefffffU & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x100000U & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                      [0U] ^ vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[6098]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffdfffffU & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x200000U & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                      [0U] ^ vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[6099]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffbfffffU & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x400000U & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                      [0U] ^ vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[6100]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xff7fffffU & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x800000U & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                       [0U] ^ vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[6101]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfeffffffU & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x1000000U & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                       [0U] ^ vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[6102]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfdffffffU & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x2000000U & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                       [0U] ^ vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[6103]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfbffffffU & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x4000000U & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                       [0U] ^ vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[6104]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x8000000U & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                        [0U] ^ vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                        [0U]))) {
        ++(vlSymsp->__Vcoverage[6105]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xefffffffU & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x10000000U & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                        [0U] ^ vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                        [0U]))) {
        ++(vlSymsp->__Vcoverage[6106]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xdfffffffU & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x20000000U & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                        [0U] ^ vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                        [0U]))) {
        ++(vlSymsp->__Vcoverage[6107]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x40000000U & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                         [0U]));
    }
    if (((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
          [0U] ^ vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
          [0U]) >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[6108]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0x7fffffffU & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x80000000U & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                       [0U]) ^ (IData)(vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                                       [0U])))) {
        ++(vlSymsp->__Vcoverage[6109]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (IData)((IData)((1U & (IData)(
                                                      vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                                                      [0U])))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                        [0U] >> 1U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                                                [0U] 
                                                >> 1U))))) {
        ++(vlSymsp->__Vcoverage[6110]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                                                        [0U] 
                                                        >> 1U))))) 
                         << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                        [0U] >> 2U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                                                [0U] 
                                                >> 2U))))) {
        ++(vlSymsp->__Vcoverage[6111]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                                                        [0U] 
                                                        >> 2U))))) 
                         << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                        [0U] >> 3U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                                                [0U] 
                                                >> 3U))))) {
        ++(vlSymsp->__Vcoverage[6112]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                                                        [0U] 
                                                        >> 3U))))) 
                         << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                        [0U] >> 4U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                                                [0U] 
                                                >> 4U))))) {
        ++(vlSymsp->__Vcoverage[6113]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                                                        [0U] 
                                                        >> 4U))))) 
                         << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                        [0U] >> 5U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                                                [0U] 
                                                >> 5U))))) {
        ++(vlSymsp->__Vcoverage[6114]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                                                        [0U] 
                                                        >> 5U))))) 
                         << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                        [0U] >> 6U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                                                [0U] 
                                                >> 6U))))) {
        ++(vlSymsp->__Vcoverage[6115]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                                                        [0U] 
                                                        >> 6U))))) 
                         << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                        [0U] >> 7U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                                                [0U] 
                                                >> 7U))))) {
        ++(vlSymsp->__Vcoverage[6116]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                                                        [0U] 
                                                        >> 7U))))) 
                         << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                        [0U] >> 8U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                                                [0U] 
                                                >> 8U))))) {
        ++(vlSymsp->__Vcoverage[6117]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                                                        [0U] 
                                                        >> 8U))))) 
                         << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                        [0U] >> 9U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                                                [0U] 
                                                >> 9U))))) {
        ++(vlSymsp->__Vcoverage[6118]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                                                        [0U] 
                                                        >> 9U))))) 
                         << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                        [0U] >> 0xaU)) ^ (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                                                  [0U] 
                                                  >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[6119]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                                                        [0U] 
                                                        >> 0xaU))))) 
                         << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                        [0U] >> 0xbU)) ^ (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                                                  [0U] 
                                                  >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[6120]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                                                        [0U] 
                                                        >> 0xbU))))) 
                         << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                        [0U] >> 0xcU)) ^ (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                                                  [0U] 
                                                  >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[6121]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                                                        [0U] 
                                                        >> 0xcU))))) 
                         << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                        [0U] >> 0xdU)) ^ (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                                                  [0U] 
                                                  >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[6122]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                                                        [0U] 
                                                        >> 0xdU))))) 
                         << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                        [0U] >> 0xeU)) ^ (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                                                  [0U] 
                                                  >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[6123]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                                                        [0U] 
                                                        >> 0xeU))))) 
                         << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                        [0U] >> 0xfU)) ^ (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                                                  [0U] 
                                                  >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[6124]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                                                        [0U] 
                                                        >> 0xfU))))) 
                         << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                        [0U] >> 0x10U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                                                   [0U] 
                                                   >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[6125]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                                                        [0U] 
                                                        >> 0x10U))))) 
                         << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                        [0U] >> 0x11U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                                                   [0U] 
                                                   >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[6126]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                                                        [0U] 
                                                        >> 0x11U))))) 
                         << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                        [0U] >> 0x12U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                                                   [0U] 
                                                   >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[6127]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                                                        [0U] 
                                                        >> 0x12U))))) 
                         << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                        [0U] >> 0x13U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                                                   [0U] 
                                                   >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[6128]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                                                        [0U] 
                                                        >> 0x13U))))) 
                         << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                        [0U] >> 0x14U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                                                   [0U] 
                                                   >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[6129]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                                                        [0U] 
                                                        >> 0x14U))))) 
                         << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                        [0U] >> 0x15U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                                                   [0U] 
                                                   >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[6130]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                                                        [0U] 
                                                        >> 0x15U))))) 
                         << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                        [0U] >> 0x16U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                                                   [0U] 
                                                   >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[6131]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                                                        [0U] 
                                                        >> 0x16U))))) 
                         << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                        [0U] >> 0x17U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                                                   [0U] 
                                                   >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[6132]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                                                        [0U] 
                                                        >> 0x17U))))) 
                         << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                        [0U] >> 0x18U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                                                   [0U] 
                                                   >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[6133]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                                                        [0U] 
                                                        >> 0x18U))))) 
                         << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                        [0U] >> 0x19U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                                                   [0U] 
                                                   >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[6134]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                                                        [0U] 
                                                        >> 0x19U))))) 
                         << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                        [0U] >> 0x1aU)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                                                   [0U] 
                                                   >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[6135]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                                                        [0U] 
                                                        >> 0x1aU))))) 
                         << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                        [0U] >> 0x1bU)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                                                   [0U] 
                                                   >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[6136]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                                                        [0U] 
                                                        >> 0x1bU))))) 
                         << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                        [0U] >> 0x1cU)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                                                   [0U] 
                                                   >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[6137]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                                                        [0U] 
                                                        >> 0x1cU))))) 
                         << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                        [0U] >> 0x1dU)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                                                   [0U] 
                                                   >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[6138]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                                                        [0U] 
                                                        >> 0x1dU))))) 
                         << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                        [0U] >> 0x1eU)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                                                   [0U] 
                                                   >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[6139]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                                                        [0U] 
                                                        >> 0x1eU))))) 
                         << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                        [0U] >> 0x1fU)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                                                   [0U] 
                                                   >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[6140]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                                                        [0U] 
                                                        >> 0x1fU))))) 
                         << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                        [0U] >> 0x20U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                                                   [0U] 
                                                   >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[6141]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                                                        [0U] 
                                                        >> 0x20U))))) 
                         << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                        [0U] >> 0x21U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                                                   [0U] 
                                                   >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[6142]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                                                        [0U] 
                                                        >> 0x21U))))) 
                         << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                        [0U] >> 0x22U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                                                   [0U] 
                                                   >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[6143]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                                                        [0U] 
                                                        >> 0x22U))))) 
                         << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                        [0U] >> 0x23U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                                                   [0U] 
                                                   >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[6144]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                                                        [0U] 
                                                        >> 0x23U))))) 
                         << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                        [0U] >> 0x24U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                                                   [0U] 
                                                   >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[6145]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                                                        [0U] 
                                                        >> 0x24U))))) 
                         << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                        [0U] >> 0x25U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                                                   [0U] 
                                                   >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[6146]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                                                        [0U] 
                                                        >> 0x25U))))) 
                         << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                        [0U] >> 0x26U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                                                   [0U] 
                                                   >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[6147]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                                                        [0U] 
                                                        >> 0x26U))))) 
                         << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                        [0U] >> 0x27U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                                                   [0U] 
                                                   >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[6148]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                                                        [0U] 
                                                        >> 0x27U))))) 
                         << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                        [0U] >> 0x28U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                                                   [0U] 
                                                   >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[6149]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                                                        [0U] 
                                                        >> 0x28U))))) 
                         << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                        [0U] >> 0x29U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                                                   [0U] 
                                                   >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[6150]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                                                        [0U] 
                                                        >> 0x29U))))) 
                         << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                        [0U] >> 0x2aU)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                                                   [0U] 
                                                   >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[6151]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                                                        [0U] 
                                                        >> 0x2aU))))) 
                         << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                        [0U] >> 0x2bU)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                                                   [0U] 
                                                   >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[6152]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                                                        [0U] 
                                                        >> 0x2bU))))) 
                         << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                        [0U] >> 0x2cU)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                                                   [0U] 
                                                   >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[6153]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                                                        [0U] 
                                                        >> 0x2cU))))) 
                         << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                        [0U] >> 0x2dU)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                                                   [0U] 
                                                   >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[6154]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                                                        [0U] 
                                                        >> 0x2dU))))) 
                         << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                        [0U] >> 0x2eU)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                                                   [0U] 
                                                   >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[6155]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                                                        [0U] 
                                                        >> 0x2eU))))) 
                         << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                        [0U] >> 0x2fU)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                                                   [0U] 
                                                   >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[6156]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                                                        [0U] 
                                                        >> 0x2fU))))) 
                         << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                        [0U] >> 0x30U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                                                   [0U] 
                                                   >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[6157]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                                                        [0U] 
                                                        >> 0x30U))))) 
                         << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                        [0U] >> 0x31U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                                                   [0U] 
                                                   >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[6158]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                                                        [0U] 
                                                        >> 0x31U))))) 
                         << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                        [0U] >> 0x32U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                                                   [0U] 
                                                   >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[6159]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                                                        [0U] 
                                                        >> 0x32U))))) 
                         << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                        [0U] >> 0x33U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                                                   [0U] 
                                                   >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[6160]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                                                        [0U] 
                                                        >> 0x33U))))) 
                         << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                        [0U] >> 0x34U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                                                   [0U] 
                                                   >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[6161]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                                                        [0U] 
                                                        >> 0x34U))))) 
                         << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                        [0U] >> 0x35U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                                                   [0U] 
                                                   >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[6162]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                                                        [0U] 
                                                        >> 0x35U))))) 
                         << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                        [0U] >> 0x36U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                                                   [0U] 
                                                   >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[6163]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                                                        [0U] 
                                                        >> 0x36U))))) 
                         << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                        [0U] >> 0x37U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                                                   [0U] 
                                                   >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[6164]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                                                        [0U] 
                                                        >> 0x37U))))) 
                         << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                        [0U] >> 0x38U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                                                   [0U] 
                                                   >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[6165]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                                                        [0U] 
                                                        >> 0x38U))))) 
                         << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                        [0U] >> 0x39U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                                                   [0U] 
                                                   >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[6166]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                                                        [0U] 
                                                        >> 0x39U))))) 
                         << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                        [0U] >> 0x3aU)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                                                   [0U] 
                                                   >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[6167]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                                                        [0U] 
                                                        >> 0x3aU))))) 
                         << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                        [0U] >> 0x3bU)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                                                   [0U] 
                                                   >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[6168]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                                                        [0U] 
                                                        >> 0x3bU))))) 
                         << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                        [0U] >> 0x3cU)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                                                   [0U] 
                                                   >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[6169]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                                                        [0U] 
                                                        >> 0x3cU))))) 
                         << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                        [0U] >> 0x3dU)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                                                   [0U] 
                                                   >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[6170]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                                                        [0U] 
                                                        >> 0x3dU))))) 
                         << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                        [0U] >> 0x3eU)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                                                   [0U] 
                                                   >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[6171]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                                                        [0U] 
                                                        >> 0x3eU))))) 
                         << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                        [0U] >> 0x3fU)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                                                   [0U] 
                                                   >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[6172]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                                                        [0U] 
                                                        >> 0x3fU))))) 
                         << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                       [0U]) ^ (IData)(vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                                       [0U])))) {
        ++(vlSymsp->__Vcoverage[6109]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (IData)((IData)((1U & (IData)(
                                                      vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                                                      [0U])))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                        [0U] >> 1U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                                                [0U] 
                                                >> 1U))))) {
        ++(vlSymsp->__Vcoverage[6110]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                                                        [0U] 
                                                        >> 1U))))) 
                         << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                        [0U] >> 2U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                                                [0U] 
                                                >> 2U))))) {
        ++(vlSymsp->__Vcoverage[6111]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                                                        [0U] 
                                                        >> 2U))))) 
                         << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                        [0U] >> 3U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                                                [0U] 
                                                >> 3U))))) {
        ++(vlSymsp->__Vcoverage[6112]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                                                        [0U] 
                                                        >> 3U))))) 
                         << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                        [0U] >> 4U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                                                [0U] 
                                                >> 4U))))) {
        ++(vlSymsp->__Vcoverage[6113]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                                                        [0U] 
                                                        >> 4U))))) 
                         << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                        [0U] >> 5U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                                                [0U] 
                                                >> 5U))))) {
        ++(vlSymsp->__Vcoverage[6114]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                                                        [0U] 
                                                        >> 5U))))) 
                         << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                        [0U] >> 6U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                                                [0U] 
                                                >> 6U))))) {
        ++(vlSymsp->__Vcoverage[6115]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                                                        [0U] 
                                                        >> 6U))))) 
                         << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                        [0U] >> 7U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                                                [0U] 
                                                >> 7U))))) {
        ++(vlSymsp->__Vcoverage[6116]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                                                        [0U] 
                                                        >> 7U))))) 
                         << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                        [0U] >> 8U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                                                [0U] 
                                                >> 8U))))) {
        ++(vlSymsp->__Vcoverage[6117]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                                                        [0U] 
                                                        >> 8U))))) 
                         << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                        [0U] >> 9U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                                                [0U] 
                                                >> 9U))))) {
        ++(vlSymsp->__Vcoverage[6118]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                                                        [0U] 
                                                        >> 9U))))) 
                         << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                        [0U] >> 0xaU)) ^ (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                                                  [0U] 
                                                  >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[6119]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                                                        [0U] 
                                                        >> 0xaU))))) 
                         << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                        [0U] >> 0xbU)) ^ (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                                                  [0U] 
                                                  >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[6120]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                                                        [0U] 
                                                        >> 0xbU))))) 
                         << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                        [0U] >> 0xcU)) ^ (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                                                  [0U] 
                                                  >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[6121]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                                                        [0U] 
                                                        >> 0xcU))))) 
                         << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                        [0U] >> 0xdU)) ^ (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                                                  [0U] 
                                                  >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[6122]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                                                        [0U] 
                                                        >> 0xdU))))) 
                         << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                        [0U] >> 0xeU)) ^ (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                                                  [0U] 
                                                  >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[6123]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                                                        [0U] 
                                                        >> 0xeU))))) 
                         << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                        [0U] >> 0xfU)) ^ (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                                                  [0U] 
                                                  >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[6124]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                                                        [0U] 
                                                        >> 0xfU))))) 
                         << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                        [0U] >> 0x10U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                                                   [0U] 
                                                   >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[6125]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                                                        [0U] 
                                                        >> 0x10U))))) 
                         << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                        [0U] >> 0x11U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                                                   [0U] 
                                                   >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[6126]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                                                        [0U] 
                                                        >> 0x11U))))) 
                         << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                        [0U] >> 0x12U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                                                   [0U] 
                                                   >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[6127]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                                                        [0U] 
                                                        >> 0x12U))))) 
                         << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                        [0U] >> 0x13U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                                                   [0U] 
                                                   >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[6128]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                                                        [0U] 
                                                        >> 0x13U))))) 
                         << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                        [0U] >> 0x14U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                                                   [0U] 
                                                   >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[6129]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                                                        [0U] 
                                                        >> 0x14U))))) 
                         << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                        [0U] >> 0x15U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                                                   [0U] 
                                                   >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[6130]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                                                        [0U] 
                                                        >> 0x15U))))) 
                         << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                        [0U] >> 0x16U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                                                   [0U] 
                                                   >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[6131]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                                                        [0U] 
                                                        >> 0x16U))))) 
                         << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                        [0U] >> 0x17U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                                                   [0U] 
                                                   >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[6132]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                                                        [0U] 
                                                        >> 0x17U))))) 
                         << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                        [0U] >> 0x18U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                                                   [0U] 
                                                   >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[6133]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                                                        [0U] 
                                                        >> 0x18U))))) 
                         << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                        [0U] >> 0x19U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                                                   [0U] 
                                                   >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[6134]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                                                        [0U] 
                                                        >> 0x19U))))) 
                         << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                        [0U] >> 0x1aU)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                                                   [0U] 
                                                   >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[6135]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                                                        [0U] 
                                                        >> 0x1aU))))) 
                         << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                        [0U] >> 0x1bU)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                                                   [0U] 
                                                   >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[6136]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                                                        [0U] 
                                                        >> 0x1bU))))) 
                         << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                        [0U] >> 0x1cU)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                                                   [0U] 
                                                   >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[6137]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                                                        [0U] 
                                                        >> 0x1cU))))) 
                         << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                        [0U] >> 0x1dU)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                                                   [0U] 
                                                   >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[6138]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                                                        [0U] 
                                                        >> 0x1dU))))) 
                         << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                        [0U] >> 0x1eU)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                                                   [0U] 
                                                   >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[6139]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                                                        [0U] 
                                                        >> 0x1eU))))) 
                         << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                        [0U] >> 0x1fU)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                                                   [0U] 
                                                   >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[6140]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                                                        [0U] 
                                                        >> 0x1fU))))) 
                         << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                        [0U] >> 0x20U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                                                   [0U] 
                                                   >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[6141]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                                                        [0U] 
                                                        >> 0x20U))))) 
                         << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                        [0U] >> 0x21U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                                                   [0U] 
                                                   >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[6142]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                                                        [0U] 
                                                        >> 0x21U))))) 
                         << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                        [0U] >> 0x22U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                                                   [0U] 
                                                   >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[6143]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                                                        [0U] 
                                                        >> 0x22U))))) 
                         << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                        [0U] >> 0x23U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                                                   [0U] 
                                                   >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[6144]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                                                        [0U] 
                                                        >> 0x23U))))) 
                         << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                        [0U] >> 0x24U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                                                   [0U] 
                                                   >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[6145]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                                                        [0U] 
                                                        >> 0x24U))))) 
                         << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                        [0U] >> 0x25U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                                                   [0U] 
                                                   >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[6146]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                                                        [0U] 
                                                        >> 0x25U))))) 
                         << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                        [0U] >> 0x26U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                                                   [0U] 
                                                   >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[6147]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                                                        [0U] 
                                                        >> 0x26U))))) 
                         << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                        [0U] >> 0x27U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                                                   [0U] 
                                                   >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[6148]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                                                        [0U] 
                                                        >> 0x27U))))) 
                         << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                        [0U] >> 0x28U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                                                   [0U] 
                                                   >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[6149]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                                                        [0U] 
                                                        >> 0x28U))))) 
                         << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                        [0U] >> 0x29U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                                                   [0U] 
                                                   >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[6150]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                                                        [0U] 
                                                        >> 0x29U))))) 
                         << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                        [0U] >> 0x2aU)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                                                   [0U] 
                                                   >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[6151]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                                                        [0U] 
                                                        >> 0x2aU))))) 
                         << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                        [0U] >> 0x2bU)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                                                   [0U] 
                                                   >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[6152]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                                                        [0U] 
                                                        >> 0x2bU))))) 
                         << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                        [0U] >> 0x2cU)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                                                   [0U] 
                                                   >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[6153]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                                                        [0U] 
                                                        >> 0x2cU))))) 
                         << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                        [0U] >> 0x2dU)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                                                   [0U] 
                                                   >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[6154]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                                                        [0U] 
                                                        >> 0x2dU))))) 
                         << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                        [0U] >> 0x2eU)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                                                   [0U] 
                                                   >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[6155]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                                                        [0U] 
                                                        >> 0x2eU))))) 
                         << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                        [0U] >> 0x2fU)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                                                   [0U] 
                                                   >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[6156]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                                                        [0U] 
                                                        >> 0x2fU))))) 
                         << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                        [0U] >> 0x30U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                                                   [0U] 
                                                   >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[6157]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                                                        [0U] 
                                                        >> 0x30U))))) 
                         << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                        [0U] >> 0x31U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                                                   [0U] 
                                                   >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[6158]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                                                        [0U] 
                                                        >> 0x31U))))) 
                         << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                        [0U] >> 0x32U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                                                   [0U] 
                                                   >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[6159]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                                                        [0U] 
                                                        >> 0x32U))))) 
                         << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                        [0U] >> 0x33U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                                                   [0U] 
                                                   >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[6160]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                                                        [0U] 
                                                        >> 0x33U))))) 
                         << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                        [0U] >> 0x34U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                                                   [0U] 
                                                   >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[6161]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                                                        [0U] 
                                                        >> 0x34U))))) 
                         << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                        [0U] >> 0x35U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                                                   [0U] 
                                                   >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[6162]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                                                        [0U] 
                                                        >> 0x35U))))) 
                         << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                        [0U] >> 0x36U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                                                   [0U] 
                                                   >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[6163]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                                                        [0U] 
                                                        >> 0x36U))))) 
                         << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                        [0U] >> 0x37U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                                                   [0U] 
                                                   >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[6164]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                                                        [0U] 
                                                        >> 0x37U))))) 
                         << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                        [0U] >> 0x38U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                                                   [0U] 
                                                   >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[6165]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                                                        [0U] 
                                                        >> 0x38U))))) 
                         << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                        [0U] >> 0x39U)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                                                   [0U] 
                                                   >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[6166]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                                                        [0U] 
                                                        >> 0x39U))))) 
                         << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                        [0U] >> 0x3aU)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                                                   [0U] 
                                                   >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[6167]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                                                        [0U] 
                                                        >> 0x3aU))))) 
                         << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                        [0U] >> 0x3bU)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                                                   [0U] 
                                                   >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[6168]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                                                        [0U] 
                                                        >> 0x3bU))))) 
                         << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                        [0U] >> 0x3cU)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                                                   [0U] 
                                                   >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[6169]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                                                        [0U] 
                                                        >> 0x3cU))))) 
                         << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                        [0U] >> 0x3dU)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                                                   [0U] 
                                                   >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[6170]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                                                        [0U] 
                                                        >> 0x3dU))))) 
                         << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                        [0U] >> 0x3eU)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                                                   [0U] 
                                                   >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[6171]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                                                        [0U] 
                                                        >> 0x3eU))))) 
                         << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                        [0U] >> 0x3fU)) ^ (IData)((
                                                   vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                                                   [0U] 
                                                   >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[6172]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                                                        [0U] 
                                                        >> 0x3fU))))) 
                         << 0x3fU));
    }
    vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
           [0U]);
    ++(vlSymsp->__Vcoverage[6238]);
    ++(vlSymsp->__Vcoverage[6240]);
    ++(vlSymsp->__Vcoverage[6241]);
    vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__hit 
        = (vlSelf->inst == vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__i = 1U;
    vlSelf->top__DOT__de__DOT__wcsrdata2 = ((IData)(vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__hit)
                                             ? vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out
                                             : 0ULL);
    if ((1U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U] 
               ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[5106]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U] 
            = ((0xfffffffeU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U]) 
               | (1U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U] 
               ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[5107]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U] 
            = ((0xfffffffdU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U]) 
               | (2U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U] 
               ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[5108]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U] 
            = ((0xfffffffbU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U]) 
               | (4U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U]));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U] 
               ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[5109]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U] 
            = ((0xfffffff7U & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U]) 
               | (8U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U]));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U] 
                  ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[5110]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U] 
            = ((0xffffffefU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U]) 
               | (0x10U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U]));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U] 
                  ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[5111]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U] 
            = ((0xffffffdfU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U]) 
               | (0x20U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U]));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U] 
                  ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[5112]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U] 
            = ((0xffffffbfU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U]) 
               | (0x40U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U]));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U] 
                  ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[5113]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U] 
            = ((0xffffff7fU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U]) 
               | (0x80U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U]));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U] 
                   ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[5114]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U] 
            = ((0xfffffeffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U]) 
               | (0x100U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U]));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U] 
                   ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[5115]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U] 
            = ((0xfffffdffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U]) 
               | (0x200U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U]));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U] 
                   ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[5116]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U] 
            = ((0xfffffbffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U]) 
               | (0x400U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U]));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U] 
                   ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[5117]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U]) 
               | (0x800U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U] 
                    ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[5118]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U] 
            = ((0xffffefffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U]) 
               | (0x1000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U] 
                    ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[5119]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U] 
            = ((0xffffdfffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U]) 
               | (0x2000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U] 
                    ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[5120]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U] 
            = ((0xffffbfffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U]) 
               | (0x4000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U] 
                    ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[5121]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U] 
            = ((0xffff7fffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U]) 
               | (0x8000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U] 
                     ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[5122]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U] 
            = ((0xfffeffffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U]) 
               | (0x10000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U] 
                     ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[5123]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U] 
            = ((0xfffdffffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U]) 
               | (0x20000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U] 
                     ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[5124]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U] 
            = ((0xfffbffffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U]) 
               | (0x40000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U] 
                     ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[5125]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U]) 
               | (0x80000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U] 
                      ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[5126]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U] 
            = ((0xffefffffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U]) 
               | (0x100000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U] 
                      ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[5127]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U] 
            = ((0xffdfffffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U]) 
               | (0x200000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U] 
                      ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[5128]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U] 
            = ((0xffbfffffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U]) 
               | (0x400000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U] 
                      ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[5129]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U] 
            = ((0xff7fffffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U]) 
               | (0x800000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U] 
                       ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[5130]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U] 
            = ((0xfeffffffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U]) 
               | (0x1000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U] 
                       ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[5131]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U] 
            = ((0xfdffffffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U]) 
               | (0x2000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U] 
                       ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[5132]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U] 
            = ((0xfbffffffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U]) 
               | (0x4000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U] 
                       ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[5133]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U]) 
               | (0x8000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U] 
                        ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[5134]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U] 
            = ((0xefffffffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U]) 
               | (0x10000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U] 
                        ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[5135]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U] 
            = ((0xdfffffffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U]) 
               | (0x20000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U] 
                        ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[5136]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U] 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U]) 
               | (0x40000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U]));
    }
    if (((vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U] 
          ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[5137]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U] 
            = ((0x7fffffffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U]) 
               | (0x80000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U] 
               ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[5138]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U] 
            = ((0xfffffffeU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U]) 
               | (1U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U] 
               ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[5139]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U] 
            = ((0xfffffffdU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U]) 
               | (2U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U] 
               ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[5140]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U] 
            = ((0xfffffffbU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U]) 
               | (4U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U]));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U] 
               ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[5141]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U] 
            = ((0xfffffff7U & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U]) 
               | (8U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U]));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U] 
                  ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[5142]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U] 
            = ((0xffffffefU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U]) 
               | (0x10U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U]));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U] 
                  ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[5143]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U] 
            = ((0xffffffdfU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U]) 
               | (0x20U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U]));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U] 
                  ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[5144]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U] 
            = ((0xffffffbfU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U]) 
               | (0x40U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U]));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U] 
                  ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[5145]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U] 
            = ((0xffffff7fU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U]) 
               | (0x80U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U]));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U] 
                   ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[5146]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U] 
            = ((0xfffffeffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U]) 
               | (0x100U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U]));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U] 
                   ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[5147]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U] 
            = ((0xfffffdffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U]) 
               | (0x200U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U]));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U] 
                   ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[5148]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U] 
            = ((0xfffffbffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U]) 
               | (0x400U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U]));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U] 
                   ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[5149]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U]) 
               | (0x800U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U] 
                    ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[5150]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U] 
            = ((0xffffefffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U]) 
               | (0x1000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U] 
                    ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[5151]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U] 
            = ((0xffffdfffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U]) 
               | (0x2000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U] 
                    ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[5152]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U] 
            = ((0xffffbfffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U]) 
               | (0x4000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U] 
                    ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[5153]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U] 
            = ((0xffff7fffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U]) 
               | (0x8000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U] 
                     ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[5154]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U] 
            = ((0xfffeffffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U]) 
               | (0x10000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U] 
                     ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[5155]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U] 
            = ((0xfffdffffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U]) 
               | (0x20000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U] 
                     ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[5156]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U] 
            = ((0xfffbffffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U]) 
               | (0x40000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U] 
                     ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[5157]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U]) 
               | (0x80000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U] 
                      ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[5158]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U] 
            = ((0xffefffffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U]) 
               | (0x100000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U] 
                      ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[5159]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U] 
            = ((0xffdfffffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U]) 
               | (0x200000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U] 
                      ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[5160]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U] 
            = ((0xffbfffffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U]) 
               | (0x400000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U] 
                      ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[5161]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U] 
            = ((0xff7fffffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U]) 
               | (0x800000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U] 
                       ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[5162]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U] 
            = ((0xfeffffffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U]) 
               | (0x1000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U] 
                       ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[5163]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U] 
            = ((0xfdffffffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U]) 
               | (0x2000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U] 
                       ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[5164]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U] 
            = ((0xfbffffffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U]) 
               | (0x4000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U] 
                       ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[5165]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U]) 
               | (0x8000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U] 
                        ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[5166]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U] 
            = ((0xefffffffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U]) 
               | (0x10000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U] 
                        ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[5167]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U] 
            = ((0xdfffffffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U]) 
               | (0x20000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U] 
                        ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[5168]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U] 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U]) 
               | (0x40000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U]));
    }
    if (((vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U] 
          ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[5169]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U] 
            = ((0x7fffffffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U]) 
               | (0x80000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U] 
               ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[5170]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U] 
            = ((0xfffffffeU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U]) 
               | (1U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U] 
               ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[5171]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U] 
            = ((0xfffffffdU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U]) 
               | (2U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U] 
               ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[5172]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U] 
            = ((0xfffffffbU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U]) 
               | (4U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U]));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U] 
               ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[5173]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U] 
            = ((0xfffffff7U & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U]) 
               | (8U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U]));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U] 
                  ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[5174]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U] 
            = ((0xffffffefU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U]) 
               | (0x10U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U]));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U] 
                  ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[5175]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U] 
            = ((0xffffffdfU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U]) 
               | (0x20U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U]));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U] 
                  ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[5176]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U] 
            = ((0xffffffbfU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U]) 
               | (0x40U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U]));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U] 
                  ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[5177]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U] 
            = ((0xffffff7fU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U]) 
               | (0x80U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U]));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U] 
                   ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[5178]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U] 
            = ((0xfffffeffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U]) 
               | (0x100U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U]));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U] 
                   ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[5179]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U] 
            = ((0xfffffdffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U]) 
               | (0x200U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U]));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U] 
                   ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[5180]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U] 
            = ((0xfffffbffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U]) 
               | (0x400U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U]));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U] 
                   ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[5181]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U]) 
               | (0x800U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U] 
                    ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[5182]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U] 
            = ((0xffffefffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U]) 
               | (0x1000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U] 
                    ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[5183]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U] 
            = ((0xffffdfffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U]) 
               | (0x2000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U] 
                    ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[5184]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U] 
            = ((0xffffbfffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U]) 
               | (0x4000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U] 
                    ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[5185]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U] 
            = ((0xffff7fffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U]) 
               | (0x8000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U] 
                     ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[5186]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U] 
            = ((0xfffeffffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U]) 
               | (0x10000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U] 
                     ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[5187]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U] 
            = ((0xfffdffffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U]) 
               | (0x20000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U] 
                     ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[5188]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U] 
            = ((0xfffbffffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U]) 
               | (0x40000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U] 
                     ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[5189]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U]) 
               | (0x80000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U] 
                      ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[5190]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U] 
            = ((0xffefffffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U]) 
               | (0x100000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U] 
                      ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[5191]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U] 
            = ((0xffdfffffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U]) 
               | (0x200000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U] 
                      ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[5192]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U] 
            = ((0xffbfffffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U]) 
               | (0x400000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U] 
                      ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[5193]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U] 
            = ((0xff7fffffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U]) 
               | (0x800000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U] 
                       ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[5194]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U] 
            = ((0xfeffffffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U]) 
               | (0x1000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U] 
                       ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[5195]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U] 
            = ((0xfdffffffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U]) 
               | (0x2000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U] 
                       ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[5196]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U] 
            = ((0xfbffffffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U]) 
               | (0x4000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U] 
                       ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[5197]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U]) 
               | (0x8000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U] 
                        ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[5198]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U] 
            = ((0xefffffffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U]) 
               | (0x10000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U] 
                        ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[5199]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U] 
            = ((0xdfffffffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U]) 
               | (0x20000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U] 
                        ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[5200]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U] 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U]) 
               | (0x40000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U]));
    }
    if (((vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U] 
          ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[5201]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U] 
            = ((0x7fffffffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U]) 
               | (0x80000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[3U] 
               ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[5202]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U] 
            = ((0xfffffffeU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U]) 
               | (1U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[3U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[3U] 
               ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[5203]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U] 
            = ((0xfffffffdU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U]) 
               | (2U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[3U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[3U] 
               ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[5204]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U] 
            = ((0xfffffffbU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U]) 
               | (4U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[3U]));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[3U] 
               ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[5205]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U] 
            = ((0xfffffff7U & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U]) 
               | (8U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[3U]));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[3U] 
                  ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[5206]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U] 
            = ((0xffffffefU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U]) 
               | (0x10U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[3U]));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[3U] 
                  ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[5207]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U] 
            = ((0xffffffdfU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U]) 
               | (0x20U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[3U]));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[3U] 
                  ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[5208]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U] 
            = ((0xffffffbfU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U]) 
               | (0x40U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[3U]));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[3U] 
                  ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[5209]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U] 
            = ((0xffffff7fU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U]) 
               | (0x80U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[3U]));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[3U] 
                   ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[5210]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U] 
            = ((0xfffffeffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U]) 
               | (0x100U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[3U]));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[3U] 
                   ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[5211]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U] 
            = ((0xfffffdffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U]) 
               | (0x200U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[3U]));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[3U] 
                   ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[5212]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U] 
            = ((0xfffffbffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U]) 
               | (0x400U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[3U]));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[3U] 
                   ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[5213]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U]) 
               | (0x800U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[3U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[3U] 
                    ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[5214]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U] 
            = ((0xffffefffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U]) 
               | (0x1000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[3U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[3U] 
                    ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[5215]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U] 
            = ((0xffffdfffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U]) 
               | (0x2000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[3U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[3U] 
                    ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[5216]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U] 
            = ((0xffffbfffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U]) 
               | (0x4000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[3U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[3U] 
                    ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[5217]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U] 
            = ((0xffff7fffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U]) 
               | (0x8000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[3U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[3U] 
                     ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[5218]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U] 
            = ((0xfffeffffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U]) 
               | (0x10000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[3U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[3U] 
                     ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[5219]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U] 
            = ((0xfffdffffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U]) 
               | (0x20000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[3U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[3U] 
                     ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[5220]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U] 
            = ((0xfffbffffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U]) 
               | (0x40000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[3U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[3U] 
                     ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[5221]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U]) 
               | (0x80000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[3U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[3U] 
                      ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[5222]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U] 
            = ((0xffefffffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U]) 
               | (0x100000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[3U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[3U] 
                      ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[5223]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U] 
            = ((0xffdfffffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U]) 
               | (0x200000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[3U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[3U] 
                      ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[5224]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U] 
            = ((0xffbfffffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U]) 
               | (0x400000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[3U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[3U] 
                      ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[5225]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U] 
            = ((0xff7fffffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U]) 
               | (0x800000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[3U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[3U] 
                       ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[5226]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U] 
            = ((0xfeffffffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U]) 
               | (0x1000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[3U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[3U] 
                       ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[5227]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U] 
            = ((0xfdffffffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U]) 
               | (0x2000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[3U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[3U] 
                       ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[5228]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U] 
            = ((0xfbffffffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U]) 
               | (0x4000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[3U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[3U] 
                       ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[5229]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U]) 
               | (0x8000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[3U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[3U] 
                        ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[5230]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U] 
            = ((0xefffffffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U]) 
               | (0x10000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[3U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[3U] 
                        ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[5231]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U] 
            = ((0xdfffffffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U]) 
               | (0x20000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[3U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[3U] 
                        ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[5232]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U] 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U]) 
               | (0x40000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[3U]));
    }
    if (((vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[3U] 
          ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[5233]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U] 
            = ((0x7fffffffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U]) 
               | (0x80000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[3U]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[4U] 
               ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[5234]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[4U] 
            = ((0xeU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[4U]) 
               | (1U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[4U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[4U] 
               ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[5235]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[4U] 
            = ((0xdU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[4U]) 
               | (2U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[4U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[4U] 
               ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[5236]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[4U] 
            = ((0xbU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[4U]) 
               | (4U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[4U]));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[4U] 
               ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[5237]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[4U] 
            = ((7U & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[4U]) 
               | (8U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[4U]));
    }
    vlSelf->top__DOT__de__DOT__m20__DOT__i0__DOT__pair_list[0U] 
        = (0xfffffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U]))));
    vlSelf->top__DOT__de__DOT__m20__DOT__i0__DOT__pair_list[1U] 
        = (0xfffffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U])) 
                                << 0x14U) | ((QData)((IData)(
                                                             vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U])) 
                                             >> 0xcU)));
    vlSelf->top__DOT__de__DOT__m20__DOT__i0__DOT__pair_list[2U] 
        = (0xfffffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[4U])) 
                                << 0x28U) | (((QData)((IData)(
                                                              vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[3U])) 
                                              << 8U) 
                                             | ((QData)((IData)(
                                                                vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U])) 
                                                >> 0x18U))));
    if ((1U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U] 
               ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[4561]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U] 
            = ((0xfffffffeU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U]) 
               | (1U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U] 
               ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[4562]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U] 
            = ((0xfffffffdU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U]) 
               | (2U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U] 
               ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[4563]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U] 
            = ((0xfffffffbU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U]) 
               | (4U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U]));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U] 
               ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[4564]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U] 
            = ((0xfffffff7U & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U]) 
               | (8U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U]));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U] 
                  ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[4565]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U] 
            = ((0xffffffefU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U]) 
               | (0x10U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U]));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U] 
                  ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[4566]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U] 
            = ((0xffffffdfU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U]) 
               | (0x20U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U]));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U] 
                  ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[4567]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U] 
            = ((0xffffffbfU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U]) 
               | (0x40U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U]));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U] 
                  ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[4568]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U] 
            = ((0xffffff7fU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U]) 
               | (0x80U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U]));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U] 
                   ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[4569]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U] 
            = ((0xfffffeffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U]) 
               | (0x100U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U]));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U] 
                   ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[4570]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U] 
            = ((0xfffffdffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U]) 
               | (0x200U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U]));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U] 
                   ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[4571]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U] 
            = ((0xfffffbffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U]) 
               | (0x400U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U]));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U] 
                   ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[4572]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U]) 
               | (0x800U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U] 
                    ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[4573]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U] 
            = ((0xffffefffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U]) 
               | (0x1000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U] 
                    ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[4574]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U] 
            = ((0xffffdfffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U]) 
               | (0x2000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U] 
                    ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[4575]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U] 
            = ((0xffffbfffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U]) 
               | (0x4000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U] 
                    ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[4576]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U] 
            = ((0xffff7fffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U]) 
               | (0x8000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U] 
                     ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[4577]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U] 
            = ((0xfffeffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U]) 
               | (0x10000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U] 
                     ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[4578]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U] 
            = ((0xfffdffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U]) 
               | (0x20000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U] 
                     ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[4579]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U] 
            = ((0xfffbffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U]) 
               | (0x40000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U] 
                     ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[4580]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U]) 
               | (0x80000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U] 
                      ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[4581]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U] 
            = ((0xffefffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U]) 
               | (0x100000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U] 
                      ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[4582]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U] 
            = ((0xffdfffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U]) 
               | (0x200000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U] 
                      ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[4583]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U] 
            = ((0xffbfffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U]) 
               | (0x400000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U] 
                      ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[4584]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U] 
            = ((0xff7fffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U]) 
               | (0x800000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U] 
                       ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[4585]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U] 
            = ((0xfeffffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U]) 
               | (0x1000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U] 
                       ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[4586]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U] 
            = ((0xfdffffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U]) 
               | (0x2000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U] 
                       ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[4587]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U] 
            = ((0xfbffffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U]) 
               | (0x4000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U] 
                       ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[4588]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U]) 
               | (0x8000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U] 
                        ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[4589]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U] 
            = ((0xefffffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U]) 
               | (0x10000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U] 
                        ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[4590]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U] 
            = ((0xdfffffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U]) 
               | (0x20000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U] 
                        ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[4591]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U] 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U]) 
               | (0x40000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U]));
    }
    if (((vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U] 
          ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[4592]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U] 
            = ((0x7fffffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U]) 
               | (0x80000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U] 
               ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[4593]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U] 
            = ((0xfffffffeU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U]) 
               | (1U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U] 
               ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[4594]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U] 
            = ((0xfffffffdU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U]) 
               | (2U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U] 
               ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[4595]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U] 
            = ((0xfffffffbU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U]) 
               | (4U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U]));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U] 
               ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[4596]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U] 
            = ((0xfffffff7U & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U]) 
               | (8U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U]));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U] 
                  ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[4597]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U] 
            = ((0xffffffefU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U]) 
               | (0x10U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U]));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U] 
                  ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[4598]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U] 
            = ((0xffffffdfU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U]) 
               | (0x20U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U]));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U] 
                  ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[4599]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U] 
            = ((0xffffffbfU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U]) 
               | (0x40U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U]));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U] 
                  ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[4600]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U] 
            = ((0xffffff7fU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U]) 
               | (0x80U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U]));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U] 
                   ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[4601]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U] 
            = ((0xfffffeffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U]) 
               | (0x100U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U]));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U] 
                   ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[4602]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U] 
            = ((0xfffffdffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U]) 
               | (0x200U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U]));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U] 
                   ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[4603]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U] 
            = ((0xfffffbffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U]) 
               | (0x400U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U]));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U] 
                   ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[4604]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U]) 
               | (0x800U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U] 
                    ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[4605]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U] 
            = ((0xffffefffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U]) 
               | (0x1000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U] 
                    ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[4606]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U] 
            = ((0xffffdfffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U]) 
               | (0x2000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U] 
                    ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[4607]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U] 
            = ((0xffffbfffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U]) 
               | (0x4000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U] 
                    ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[4608]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U] 
            = ((0xffff7fffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U]) 
               | (0x8000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U] 
                     ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[4609]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U] 
            = ((0xfffeffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U]) 
               | (0x10000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U] 
                     ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[4610]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U] 
            = ((0xfffdffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U]) 
               | (0x20000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U] 
                     ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[4611]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U] 
            = ((0xfffbffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U]) 
               | (0x40000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U] 
                     ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[4612]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U]) 
               | (0x80000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U] 
                      ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[4613]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U] 
            = ((0xffefffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U]) 
               | (0x100000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U] 
                      ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[4614]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U] 
            = ((0xffdfffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U]) 
               | (0x200000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U] 
                      ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[4615]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U] 
            = ((0xffbfffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U]) 
               | (0x400000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U] 
                      ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[4616]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U] 
            = ((0xff7fffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U]) 
               | (0x800000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U] 
                       ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[4617]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U] 
            = ((0xfeffffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U]) 
               | (0x1000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U] 
                       ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[4618]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U] 
            = ((0xfdffffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U]) 
               | (0x2000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U] 
                       ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[4619]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U] 
            = ((0xfbffffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U]) 
               | (0x4000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U] 
                       ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[4620]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U]) 
               | (0x8000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U] 
                        ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[4621]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U] 
            = ((0xefffffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U]) 
               | (0x10000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U] 
                        ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[4622]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U] 
            = ((0xdfffffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U]) 
               | (0x20000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U] 
                        ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[4623]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U] 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U]) 
               | (0x40000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U]));
    }
    if (((vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U] 
          ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[4624]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U] 
            = ((0x7fffffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U]) 
               | (0x80000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U] 
               ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[4625]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U] 
            = ((0xfffffffeU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U]) 
               | (1U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U] 
               ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[4626]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U] 
            = ((0xfffffffdU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U]) 
               | (2U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U] 
               ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[4627]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U] 
            = ((0xfffffffbU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U]) 
               | (4U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U]));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U] 
               ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[4628]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U] 
            = ((0xfffffff7U & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U]) 
               | (8U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U]));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U] 
                  ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[4629]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U] 
            = ((0xffffffefU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U]) 
               | (0x10U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U]));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U] 
                  ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[4630]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U] 
            = ((0xffffffdfU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U]) 
               | (0x20U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U]));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U] 
                  ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[4631]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U] 
            = ((0xffffffbfU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U]) 
               | (0x40U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U]));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U] 
                  ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[4632]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U] 
            = ((0xffffff7fU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U]) 
               | (0x80U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U]));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U] 
                   ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[4633]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U] 
            = ((0xfffffeffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U]) 
               | (0x100U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U]));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U] 
                   ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[4634]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U] 
            = ((0xfffffdffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U]) 
               | (0x200U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U]));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U] 
                   ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[4635]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U] 
            = ((0xfffffbffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U]) 
               | (0x400U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U]));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U] 
                   ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[4636]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U]) 
               | (0x800U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U] 
                    ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[4637]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U] 
            = ((0xffffefffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U]) 
               | (0x1000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U] 
                    ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[4638]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U] 
            = ((0xffffdfffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U]) 
               | (0x2000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U] 
                    ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[4639]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U] 
            = ((0xffffbfffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U]) 
               | (0x4000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U] 
                    ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[4640]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U] 
            = ((0xffff7fffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U]) 
               | (0x8000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U] 
                     ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[4641]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U] 
            = ((0xfffeffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U]) 
               | (0x10000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U] 
                     ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[4642]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U] 
            = ((0xfffdffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U]) 
               | (0x20000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U] 
                     ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[4643]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U] 
            = ((0xfffbffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U]) 
               | (0x40000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U] 
                     ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[4644]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U]) 
               | (0x80000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U] 
                      ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[4645]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U] 
            = ((0xffefffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U]) 
               | (0x100000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U] 
                      ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[4646]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U] 
            = ((0xffdfffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U]) 
               | (0x200000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U] 
                      ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[4647]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U] 
            = ((0xffbfffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U]) 
               | (0x400000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U] 
                      ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[4648]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U] 
            = ((0xff7fffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U]) 
               | (0x800000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U] 
                       ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[4649]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U] 
            = ((0xfeffffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U]) 
               | (0x1000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U] 
                       ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[4650]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U] 
            = ((0xfdffffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U]) 
               | (0x2000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U] 
                       ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[4651]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U] 
            = ((0xfbffffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U]) 
               | (0x4000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U] 
                       ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[4652]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U]) 
               | (0x8000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U] 
                        ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[4653]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U] 
            = ((0xefffffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U]) 
               | (0x10000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U] 
                        ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[4654]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U] 
            = ((0xdfffffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U]) 
               | (0x20000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U] 
                        ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[4655]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U] 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U]) 
               | (0x40000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U]));
    }
    if (((vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U] 
          ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[4656]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U] 
            = ((0x7fffffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U]) 
               | (0x80000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[3U] 
               ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[4657]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U] 
            = ((0xfffffffeU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U]) 
               | (1U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[3U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[3U] 
               ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[4658]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U] 
            = ((0xfffffffdU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U]) 
               | (2U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[3U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[3U] 
               ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[4659]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U] 
            = ((0xfffffffbU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U]) 
               | (4U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[3U]));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[3U] 
               ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[4660]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U] 
            = ((0xfffffff7U & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U]) 
               | (8U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[3U]));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[3U] 
                  ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[4661]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U] 
            = ((0xffffffefU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U]) 
               | (0x10U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[3U]));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[3U] 
                  ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[4662]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U] 
            = ((0xffffffdfU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U]) 
               | (0x20U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[3U]));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[3U] 
                  ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[4663]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U] 
            = ((0xffffffbfU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U]) 
               | (0x40U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[3U]));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[3U] 
                  ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[4664]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U] 
            = ((0xffffff7fU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U]) 
               | (0x80U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[3U]));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[3U] 
                   ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[4665]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U] 
            = ((0xfffffeffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U]) 
               | (0x100U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[3U]));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[3U] 
                   ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[4666]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U] 
            = ((0xfffffdffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U]) 
               | (0x200U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[3U]));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[3U] 
                   ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[4667]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U] 
            = ((0xfffffbffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U]) 
               | (0x400U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[3U]));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[3U] 
                   ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[4668]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U]) 
               | (0x800U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[3U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[3U] 
                    ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[4669]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U] 
            = ((0xffffefffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U]) 
               | (0x1000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[3U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[3U] 
                    ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[4670]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U] 
            = ((0xffffdfffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U]) 
               | (0x2000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[3U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[3U] 
                    ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[4671]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U] 
            = ((0xffffbfffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U]) 
               | (0x4000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[3U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[3U] 
                    ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[4672]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U] 
            = ((0xffff7fffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U]) 
               | (0x8000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[3U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[3U] 
                     ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[4673]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U] 
            = ((0xfffeffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U]) 
               | (0x10000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[3U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[3U] 
                     ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[4674]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U] 
            = ((0xfffdffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U]) 
               | (0x20000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[3U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[3U] 
                     ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[4675]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U] 
            = ((0xfffbffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U]) 
               | (0x40000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[3U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[3U] 
                     ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[4676]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U]) 
               | (0x80000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[3U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[3U] 
                      ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[4677]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U] 
            = ((0xffefffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U]) 
               | (0x100000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[3U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[3U] 
                      ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[4678]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U] 
            = ((0xffdfffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U]) 
               | (0x200000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[3U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[3U] 
                      ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[4679]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U] 
            = ((0xffbfffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U]) 
               | (0x400000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[3U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[3U] 
                      ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[4680]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U] 
            = ((0xff7fffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U]) 
               | (0x800000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[3U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[3U] 
                       ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[4681]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U] 
            = ((0xfeffffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U]) 
               | (0x1000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[3U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[3U] 
                       ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[4682]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U] 
            = ((0xfdffffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U]) 
               | (0x2000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[3U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[3U] 
                       ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[4683]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U] 
            = ((0xfbffffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U]) 
               | (0x4000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[3U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[3U] 
                       ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[4684]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U]) 
               | (0x8000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[3U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[3U] 
                        ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[4685]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U] 
            = ((0xefffffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U]) 
               | (0x10000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[3U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[3U] 
                        ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[4686]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U] 
            = ((0xdfffffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U]) 
               | (0x20000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[3U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[3U] 
                        ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[4687]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U] 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U]) 
               | (0x40000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[3U]));
    }
    if (((vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[3U] 
          ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[4688]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U] 
            = ((0x7fffffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U]) 
               | (0x80000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[3U]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[4U] 
               ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[4689]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U] 
            = ((0xfffffffeU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U]) 
               | (1U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[4U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[4U] 
               ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[4690]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U] 
            = ((0xfffffffdU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U]) 
               | (2U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[4U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[4U] 
               ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[4691]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U] 
            = ((0xfffffffbU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U]) 
               | (4U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[4U]));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[4U] 
               ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[4692]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U] 
            = ((0xfffffff7U & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U]) 
               | (8U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[4U]));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[4U] 
                  ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[4693]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U] 
            = ((0xffffffefU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U]) 
               | (0x10U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[4U]));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[4U] 
                  ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[4694]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U] 
            = ((0xffffffdfU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U]) 
               | (0x20U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[4U]));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[4U] 
                  ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[4695]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U] 
            = ((0xffffffbfU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U]) 
               | (0x40U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[4U]));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[4U] 
                  ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[4696]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U] 
            = ((0xffffff7fU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U]) 
               | (0x80U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[4U]));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[4U] 
                   ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[4697]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U] 
            = ((0xfffffeffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U]) 
               | (0x100U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[4U]));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[4U] 
                   ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[4698]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U] 
            = ((0xfffffdffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U]) 
               | (0x200U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[4U]));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[4U] 
                   ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[4699]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U] 
            = ((0xfffffbffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U]) 
               | (0x400U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[4U]));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[4U] 
                   ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[4700]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U]) 
               | (0x800U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[4U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[4U] 
                    ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[4701]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U] 
            = ((0xffffefffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U]) 
               | (0x1000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[4U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[4U] 
                    ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[4702]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U] 
            = ((0xffffdfffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U]) 
               | (0x2000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[4U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[4U] 
                    ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[4703]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U] 
            = ((0xffffbfffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U]) 
               | (0x4000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[4U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[4U] 
                    ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[4704]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U] 
            = ((0xffff7fffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U]) 
               | (0x8000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[4U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[4U] 
                     ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[4705]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U] 
            = ((0xfffeffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U]) 
               | (0x10000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[4U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[4U] 
                     ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[4706]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U] 
            = ((0xfffdffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U]) 
               | (0x20000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[4U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[4U] 
                     ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[4707]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U] 
            = ((0xfffbffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U]) 
               | (0x40000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[4U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[4U] 
                     ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[4708]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U]) 
               | (0x80000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[4U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[4U] 
                      ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[4709]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U] 
            = ((0xffefffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U]) 
               | (0x100000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[4U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[4U] 
                      ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[4710]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U] 
            = ((0xffdfffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U]) 
               | (0x200000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[4U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[4U] 
                      ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[4711]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U] 
            = ((0xffbfffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U]) 
               | (0x400000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[4U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[4U] 
                      ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[4712]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U] 
            = ((0xff7fffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U]) 
               | (0x800000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[4U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[4U] 
                       ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[4713]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U] 
            = ((0xfeffffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U]) 
               | (0x1000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[4U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[4U] 
                       ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[4714]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U] 
            = ((0xfdffffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U]) 
               | (0x2000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[4U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[4U] 
                       ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[4715]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U] 
            = ((0xfbffffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U]) 
               | (0x4000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[4U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[4U] 
                       ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[4716]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U]) 
               | (0x8000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[4U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[4U] 
                        ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[4717]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U] 
            = ((0xefffffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U]) 
               | (0x10000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[4U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[4U] 
                        ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[4718]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U] 
            = ((0xdfffffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U]) 
               | (0x20000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[4U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[4U] 
                        ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[4719]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U] 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U]) 
               | (0x40000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[4U]));
    }
    if (((vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[4U] 
          ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[4720]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U] 
            = ((0x7fffffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U]) 
               | (0x80000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[4U]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[5U] 
               ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[5U]))) {
        ++(vlSymsp->__Vcoverage[4721]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[5U] 
            = ((0xfffeU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[5U]) 
               | (1U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[5U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[5U] 
               ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[5U]))) {
        ++(vlSymsp->__Vcoverage[4722]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[5U] 
            = ((0xfffdU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[5U]) 
               | (2U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[5U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[5U] 
               ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[5U]))) {
        ++(vlSymsp->__Vcoverage[4723]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[5U] 
            = ((0xfffbU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[5U]) 
               | (4U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[5U]));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[5U] 
               ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[5U]))) {
        ++(vlSymsp->__Vcoverage[4724]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[5U] 
            = ((0xfff7U & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[5U]) 
               | (8U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[5U]));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[5U] 
                  ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[5U]))) {
        ++(vlSymsp->__Vcoverage[4725]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[5U] 
            = ((0xffefU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[5U]) 
               | (0x10U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[5U]));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[5U] 
                  ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[5U]))) {
        ++(vlSymsp->__Vcoverage[4726]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[5U] 
            = ((0xffdfU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[5U]) 
               | (0x20U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[5U]));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[5U] 
                  ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[5U]))) {
        ++(vlSymsp->__Vcoverage[4727]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[5U] 
            = ((0xffbfU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[5U]) 
               | (0x40U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[5U]));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[5U] 
                  ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[5U]))) {
        ++(vlSymsp->__Vcoverage[4728]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[5U] 
            = ((0xff7fU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[5U]) 
               | (0x80U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[5U]));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[5U] 
                   ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[5U]))) {
        ++(vlSymsp->__Vcoverage[4729]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[5U] 
            = ((0xfeffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[5U]) 
               | (0x100U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[5U]));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[5U] 
                   ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[5U]))) {
        ++(vlSymsp->__Vcoverage[4730]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[5U] 
            = ((0xfdffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[5U]) 
               | (0x200U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[5U]));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[5U] 
                   ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[5U]))) {
        ++(vlSymsp->__Vcoverage[4731]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[5U] 
            = ((0xfbffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[5U]) 
               | (0x400U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[5U]));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[5U] 
                   ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[5U]))) {
        ++(vlSymsp->__Vcoverage[4732]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[5U] 
            = ((0xf7ffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[5U]) 
               | (0x800U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[5U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[5U] 
                    ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[5U]))) {
        ++(vlSymsp->__Vcoverage[4733]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[5U] 
            = ((0xefffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[5U]) 
               | (0x1000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[5U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[5U] 
                    ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[5U]))) {
        ++(vlSymsp->__Vcoverage[4734]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[5U] 
            = ((0xdfffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[5U]) 
               | (0x2000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[5U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[5U] 
                    ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[5U]))) {
        ++(vlSymsp->__Vcoverage[4735]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[5U] 
            = ((0xbfffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[5U]) 
               | (0x4000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[5U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[5U] 
                    ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[5U]))) {
        ++(vlSymsp->__Vcoverage[4736]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[5U] 
            = ((0x7fffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[5U]) 
               | (0x8000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[5U]));
    }
    vlSelf->top__DOT__de__DOT__m19__DOT__i0__DOT__pair_list[0U] 
        = (0xfffffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U]))));
    vlSelf->top__DOT__de__DOT__m19__DOT__i0__DOT__pair_list[1U] 
        = (0xfffffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U])) 
                                << 0x14U) | ((QData)((IData)(
                                                             vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U])) 
                                             >> 0xcU)));
    vlSelf->top__DOT__de__DOT__m19__DOT__i0__DOT__pair_list[2U] 
        = (0xfffffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[4U])) 
                                << 0x28U) | (((QData)((IData)(
                                                              vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[3U])) 
                                              << 8U) 
                                             | ((QData)((IData)(
                                                                vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U])) 
                                                >> 0x18U))));
    vlSelf->top__DOT__de__DOT__m19__DOT__i0__DOT__pair_list[3U] 
        = (0xfffffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[5U])) 
                                << 0x1cU) | ((QData)((IData)(
                                                             vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[4U])) 
                                             >> 4U)));
    if ((1U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U] 
               ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[6394]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U] 
            = ((0xfffffffeU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]) 
               | (1U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U] 
               ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[6395]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U] 
            = ((0xfffffffdU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]) 
               | (2U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U] 
               ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[6396]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U] 
            = ((0xfffffffbU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]) 
               | (4U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U]));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U] 
               ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[6397]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U] 
            = ((0xfffffff7U & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]) 
               | (8U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U]));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U] 
                  ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[6398]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U] 
            = ((0xffffffefU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]) 
               | (0x10U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U]));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U] 
                  ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[6399]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U] 
            = ((0xffffffdfU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]) 
               | (0x20U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U]));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U] 
                  ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[6400]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U] 
            = ((0xffffffbfU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]) 
               | (0x40U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U]));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U] 
                  ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[6401]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U] 
            = ((0xffffff7fU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]) 
               | (0x80U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U]));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U] 
                   ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[6402]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U] 
            = ((0xfffffeffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]) 
               | (0x100U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U]));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U] 
                   ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[6403]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U] 
            = ((0xfffffdffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]) 
               | (0x200U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U]));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U] 
                   ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[6404]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U] 
            = ((0xfffffbffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]) 
               | (0x400U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U]));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U] 
                   ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[6405]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]) 
               | (0x800U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U] 
                    ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[6406]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U] 
            = ((0xffffefffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]) 
               | (0x1000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U] 
                    ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[6407]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U] 
            = ((0xffffdfffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]) 
               | (0x2000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U] 
                    ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[6408]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U] 
            = ((0xffffbfffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]) 
               | (0x4000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U] 
                    ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[6409]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U] 
            = ((0xffff7fffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]) 
               | (0x8000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U] 
                     ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[6410]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U] 
            = ((0xfffeffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]) 
               | (0x10000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U] 
                     ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[6411]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U] 
            = ((0xfffdffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]) 
               | (0x20000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U] 
                     ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[6412]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U] 
            = ((0xfffbffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]) 
               | (0x40000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U] 
                     ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[6413]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]) 
               | (0x80000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U] 
                      ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[6414]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U] 
            = ((0xffefffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]) 
               | (0x100000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U] 
                      ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[6415]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U] 
            = ((0xffdfffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]) 
               | (0x200000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U] 
                      ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[6416]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U] 
            = ((0xffbfffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]) 
               | (0x400000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U] 
                      ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[6417]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U] 
            = ((0xff7fffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]) 
               | (0x800000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U] 
                       ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[6418]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U] 
            = ((0xfeffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]) 
               | (0x1000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U] 
                       ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[6419]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U] 
            = ((0xfdffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]) 
               | (0x2000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U] 
                       ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[6420]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U] 
            = ((0xfbffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]) 
               | (0x4000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U] 
                       ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[6421]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]) 
               | (0x8000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U] 
                        ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[6422]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U] 
            = ((0xefffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]) 
               | (0x10000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U] 
                        ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[6423]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U] 
            = ((0xdfffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]) 
               | (0x20000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U] 
                        ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[6424]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U] 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]) 
               | (0x40000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U]));
    }
    if (((vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U] 
          ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[6425]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U] 
            = ((0x7fffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]) 
               | (0x80000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U] 
               ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[6426]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U] 
            = ((0xfffffffeU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]) 
               | (1U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U] 
               ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[6427]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U] 
            = ((0xfffffffdU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]) 
               | (2U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U] 
               ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[6428]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U] 
            = ((0xfffffffbU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]) 
               | (4U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U]));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U] 
               ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[6429]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U] 
            = ((0xfffffff7U & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]) 
               | (8U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U]));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U] 
                  ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[6430]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U] 
            = ((0xffffffefU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]) 
               | (0x10U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U]));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U] 
                  ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[6431]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U] 
            = ((0xffffffdfU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]) 
               | (0x20U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U]));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U] 
                  ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[6432]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U] 
            = ((0xffffffbfU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]) 
               | (0x40U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U]));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U] 
                  ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[6433]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U] 
            = ((0xffffff7fU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]) 
               | (0x80U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U]));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U] 
                   ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[6434]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U] 
            = ((0xfffffeffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]) 
               | (0x100U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U]));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U] 
                   ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[6435]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U] 
            = ((0xfffffdffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]) 
               | (0x200U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U]));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U] 
                   ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[6436]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U] 
            = ((0xfffffbffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]) 
               | (0x400U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U]));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U] 
                   ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[6437]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]) 
               | (0x800U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U] 
                    ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[6438]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U] 
            = ((0xffffefffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]) 
               | (0x1000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U] 
                    ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[6439]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U] 
            = ((0xffffdfffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]) 
               | (0x2000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U] 
                    ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[6440]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U] 
            = ((0xffffbfffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]) 
               | (0x4000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U] 
                    ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[6441]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U] 
            = ((0xffff7fffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]) 
               | (0x8000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U] 
                     ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[6442]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U] 
            = ((0xfffeffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]) 
               | (0x10000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U] 
                     ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[6443]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U] 
            = ((0xfffdffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]) 
               | (0x20000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U] 
                     ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[6444]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U] 
            = ((0xfffbffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]) 
               | (0x40000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U] 
                     ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[6445]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]) 
               | (0x80000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U] 
                      ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[6446]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U] 
            = ((0xffefffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]) 
               | (0x100000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U] 
                      ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[6447]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U] 
            = ((0xffdfffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]) 
               | (0x200000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U] 
                      ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[6448]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U] 
            = ((0xffbfffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]) 
               | (0x400000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U] 
                      ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[6449]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U] 
            = ((0xff7fffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]) 
               | (0x800000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U] 
                       ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[6450]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U] 
            = ((0xfeffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]) 
               | (0x1000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U] 
                       ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[6451]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U] 
            = ((0xfdffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]) 
               | (0x2000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U] 
                       ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[6452]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U] 
            = ((0xfbffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]) 
               | (0x4000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U] 
                       ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[6453]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]) 
               | (0x8000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U] 
                        ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[6454]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U] 
            = ((0xefffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]) 
               | (0x10000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U] 
                        ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[6455]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U] 
            = ((0xdfffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]) 
               | (0x20000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U] 
                        ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[6456]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U] 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]) 
               | (0x40000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U]));
    }
    if (((vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U] 
          ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[6457]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U] 
            = ((0x7fffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]) 
               | (0x80000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U] 
               ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[6458]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U] 
            = ((0xfffffffeU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]) 
               | (1U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U] 
               ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[6459]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U] 
            = ((0xfffffffdU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]) 
               | (2U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U] 
               ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[6460]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U] 
            = ((0xfffffffbU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]) 
               | (4U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U]));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U] 
               ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[6461]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U] 
            = ((0xfffffff7U & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]) 
               | (8U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U]));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U] 
                  ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[6462]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U] 
            = ((0xffffffefU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]) 
               | (0x10U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U]));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U] 
                  ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[6463]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U] 
            = ((0xffffffdfU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]) 
               | (0x20U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U]));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U] 
                  ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[6464]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U] 
            = ((0xffffffbfU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]) 
               | (0x40U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U]));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U] 
                  ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[6465]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U] 
            = ((0xffffff7fU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]) 
               | (0x80U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U]));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U] 
                   ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[6466]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U] 
            = ((0xfffffeffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]) 
               | (0x100U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U]));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U] 
                   ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[6467]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U] 
            = ((0xfffffdffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]) 
               | (0x200U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U]));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U] 
                   ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[6468]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U] 
            = ((0xfffffbffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]) 
               | (0x400U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U]));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U] 
                   ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[6469]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]) 
               | (0x800U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U] 
                    ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[6470]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U] 
            = ((0xffffefffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]) 
               | (0x1000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U] 
                    ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[6471]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U] 
            = ((0xffffdfffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]) 
               | (0x2000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U] 
                    ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[6472]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U] 
            = ((0xffffbfffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]) 
               | (0x4000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U] 
                    ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[6473]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U] 
            = ((0xffff7fffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]) 
               | (0x8000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U] 
                     ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[6474]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U] 
            = ((0xfffeffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]) 
               | (0x10000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U] 
                     ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[6475]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U] 
            = ((0xfffdffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]) 
               | (0x20000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U] 
                     ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[6476]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U] 
            = ((0xfffbffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]) 
               | (0x40000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U] 
                     ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[6477]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]) 
               | (0x80000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U] 
                      ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[6478]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U] 
            = ((0xffefffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]) 
               | (0x100000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U] 
                      ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[6479]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U] 
            = ((0xffdfffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]) 
               | (0x200000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U] 
                      ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[6480]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U] 
            = ((0xffbfffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]) 
               | (0x400000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U] 
                      ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[6481]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U] 
            = ((0xff7fffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]) 
               | (0x800000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U] 
                       ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[6482]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U] 
            = ((0xfeffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]) 
               | (0x1000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U] 
                       ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[6483]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U] 
            = ((0xfdffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]) 
               | (0x2000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U] 
                       ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[6484]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U] 
            = ((0xfbffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]) 
               | (0x4000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U] 
                       ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[6485]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]) 
               | (0x8000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U] 
                        ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[6486]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U] 
            = ((0xefffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]) 
               | (0x10000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U] 
                        ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[6487]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U] 
            = ((0xdfffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]) 
               | (0x20000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U] 
                        ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[6488]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U] 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]) 
               | (0x40000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U]));
    }
    if (((vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U] 
          ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[6489]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U] 
            = ((0x7fffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]) 
               | (0x80000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U] 
               ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[6490]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U] 
            = ((0xfffffffeU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]) 
               | (1U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U] 
               ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[6491]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U] 
            = ((0xfffffffdU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]) 
               | (2U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U] 
               ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[6492]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U] 
            = ((0xfffffffbU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]) 
               | (4U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U]));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U] 
               ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[6493]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U] 
            = ((0xfffffff7U & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]) 
               | (8U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U]));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U] 
                  ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[6494]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U] 
            = ((0xffffffefU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]) 
               | (0x10U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U]));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U] 
                  ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[6495]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U] 
            = ((0xffffffdfU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]) 
               | (0x20U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U]));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U] 
                  ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[6496]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U] 
            = ((0xffffffbfU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]) 
               | (0x40U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U]));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U] 
                  ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[6497]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U] 
            = ((0xffffff7fU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]) 
               | (0x80U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U]));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U] 
                   ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[6498]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U] 
            = ((0xfffffeffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]) 
               | (0x100U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U]));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U] 
                   ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[6499]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U] 
            = ((0xfffffdffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]) 
               | (0x200U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U]));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U] 
                   ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[6500]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U] 
            = ((0xfffffbffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]) 
               | (0x400U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U]));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U] 
                   ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[6501]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]) 
               | (0x800U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U] 
                    ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[6502]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U] 
            = ((0xffffefffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]) 
               | (0x1000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U] 
                    ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[6503]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U] 
            = ((0xffffdfffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]) 
               | (0x2000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U] 
                    ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[6504]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U] 
            = ((0xffffbfffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]) 
               | (0x4000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U] 
                    ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[6505]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U] 
            = ((0xffff7fffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]) 
               | (0x8000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U] 
                     ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[6506]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U] 
            = ((0xfffeffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]) 
               | (0x10000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U] 
                     ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[6507]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U] 
            = ((0xfffdffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]) 
               | (0x20000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U] 
                     ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[6508]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U] 
            = ((0xfffbffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]) 
               | (0x40000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U] 
                     ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[6509]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]) 
               | (0x80000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U] 
                      ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[6510]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U] 
            = ((0xffefffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]) 
               | (0x100000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U] 
                      ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[6511]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U] 
            = ((0xffdfffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]) 
               | (0x200000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U] 
                      ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[6512]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U] 
            = ((0xffbfffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]) 
               | (0x400000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U] 
                      ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[6513]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U] 
            = ((0xff7fffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]) 
               | (0x800000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U] 
                       ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[6514]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U] 
            = ((0xfeffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]) 
               | (0x1000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U] 
                       ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[6515]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U] 
            = ((0xfdffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]) 
               | (0x2000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U] 
                       ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[6516]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U] 
            = ((0xfbffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]) 
               | (0x4000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U] 
                       ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[6517]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]) 
               | (0x8000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U] 
                        ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[6518]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U] 
            = ((0xefffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]) 
               | (0x10000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U] 
                        ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[6519]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U] 
            = ((0xdfffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]) 
               | (0x20000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U] 
                        ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[6520]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U] 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]) 
               | (0x40000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U]));
    }
    if (((vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U] 
          ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[6521]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U] 
            = ((0x7fffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]) 
               | (0x80000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U] 
               ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[6522]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U] 
            = ((0xfffffffeU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]) 
               | (1U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U] 
               ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[6523]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U] 
            = ((0xfffffffdU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]) 
               | (2U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U] 
               ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[6524]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U] 
            = ((0xfffffffbU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]) 
               | (4U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U]));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U] 
               ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[6525]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U] 
            = ((0xfffffff7U & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]) 
               | (8U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U]));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U] 
                  ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[6526]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U] 
            = ((0xffffffefU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]) 
               | (0x10U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U]));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U] 
                  ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[6527]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U] 
            = ((0xffffffdfU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]) 
               | (0x20U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U]));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U] 
                  ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[6528]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U] 
            = ((0xffffffbfU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]) 
               | (0x40U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U]));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U] 
                  ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[6529]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U] 
            = ((0xffffff7fU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]) 
               | (0x80U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U]));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U] 
                   ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[6530]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U] 
            = ((0xfffffeffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]) 
               | (0x100U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U]));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U] 
                   ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[6531]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U] 
            = ((0xfffffdffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]) 
               | (0x200U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U]));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U] 
                   ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[6532]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U] 
            = ((0xfffffbffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]) 
               | (0x400U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U]));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U] 
                   ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[6533]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]) 
               | (0x800U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U] 
                    ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[6534]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U] 
            = ((0xffffefffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]) 
               | (0x1000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U] 
                    ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[6535]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U] 
            = ((0xffffdfffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]) 
               | (0x2000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U] 
                    ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[6536]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U] 
            = ((0xffffbfffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]) 
               | (0x4000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U] 
                    ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[6537]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U] 
            = ((0xffff7fffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]) 
               | (0x8000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U] 
                     ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[6538]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U] 
            = ((0xfffeffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]) 
               | (0x10000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U] 
                     ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[6539]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U] 
            = ((0xfffdffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]) 
               | (0x20000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U] 
                     ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[6540]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U] 
            = ((0xfffbffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]) 
               | (0x40000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U] 
                     ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[6541]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]) 
               | (0x80000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U] 
                      ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[6542]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U] 
            = ((0xffefffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]) 
               | (0x100000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U] 
                      ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[6543]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U] 
            = ((0xffdfffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]) 
               | (0x200000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U] 
                      ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[6544]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U] 
            = ((0xffbfffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]) 
               | (0x400000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U] 
                      ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[6545]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U] 
            = ((0xff7fffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]) 
               | (0x800000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U] 
                       ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[6546]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U] 
            = ((0xfeffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]) 
               | (0x1000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U] 
                       ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[6547]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U] 
            = ((0xfdffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]) 
               | (0x2000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U] 
                       ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[6548]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U] 
            = ((0xfbffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]) 
               | (0x4000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U] 
                       ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[6549]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]) 
               | (0x8000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U] 
                        ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[6550]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U] 
            = ((0xefffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]) 
               | (0x10000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U] 
                        ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[6551]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U] 
            = ((0xdfffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]) 
               | (0x20000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U] 
                        ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[6552]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U] 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]) 
               | (0x40000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U]));
    }
    if (((vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U] 
          ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[6553]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U] 
            = ((0x7fffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]) 
               | (0x80000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U]));
    }
    vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__pair_list[0U] 
        = (0xffffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U]))));
    vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__pair_list[1U] 
        = (0xffffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U])) 
                               << 0x18U) | ((QData)((IData)(
                                                            vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U])) 
                                            >> 8U)));
    vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__pair_list[2U] 
        = (0xffffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U])) 
                               << 0x10U) | ((QData)((IData)(
                                                            vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U])) 
                                            >> 0x10U)));
    vlSelf->top__DOT__de__DOT__m12__DOT__i0__DOT__pair_list[3U] 
        = (0xffffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U])) 
                               << 8U) | ((QData)((IData)(
                                                         vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U])) 
                                         >> 0x18U)));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list[0U] 
        = (0x1fffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[1U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0U]))));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list[1U] 
        = (0x1fffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[2U])) 
                               << 0x1bU) | ((QData)((IData)(
                                                            vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[1U])) 
                                            >> 5U)));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list[2U] 
        = (0x1fffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[3U])) 
                               << 0x16U) | ((QData)((IData)(
                                                            vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[2U])) 
                                            >> 0xaU)));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list[3U] 
        = (0x1fffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[4U])) 
                               << 0x11U) | ((QData)((IData)(
                                                            vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[3U])) 
                                            >> 0xfU)));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list[4U] 
        = (0x1fffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[5U])) 
                               << 0xcU) | ((QData)((IData)(
                                                           vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[4U])) 
                                           >> 0x14U)));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list[5U] 
        = (0x1fffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[6U])) 
                               << 7U) | ((QData)((IData)(
                                                         vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[5U])) 
                                         >> 0x19U)));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list[6U] 
        = (0x1fffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[8U])) 
                               << 0x22U) | (((QData)((IData)(
                                                             vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[7U])) 
                                             << 2U) 
                                            | ((QData)((IData)(
                                                               vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[6U])) 
                                               >> 0x1eU))));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list[7U] 
        = (0x1fffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[9U])) 
                               << 0x1dU) | ((QData)((IData)(
                                                            vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[8U])) 
                                            >> 3U)));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list[8U] 
        = (0x1fffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0xaU])) 
                               << 0x18U) | ((QData)((IData)(
                                                            vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[9U])) 
                                            >> 8U)));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list[9U] 
        = (0x1fffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0xbU])) 
                               << 0x13U) | ((QData)((IData)(
                                                            vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0xaU])) 
                                            >> 0xdU)));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list[0xaU] 
        = (0x1fffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0xcU])) 
                               << 0xeU) | ((QData)((IData)(
                                                           vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0xbU])) 
                                           >> 0x12U)));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list[0xbU] 
        = (0x1fffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0xdU])) 
                               << 9U) | ((QData)((IData)(
                                                         vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0xcU])) 
                                         >> 0x17U)));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list[0xcU] 
        = (0x1fffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0xfU])) 
                               << 0x24U) | (((QData)((IData)(
                                                             vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0xeU])) 
                                             << 4U) 
                                            | ((QData)((IData)(
                                                               vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0xdU])) 
                                               >> 0x1cU))));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list[0xdU] 
        = (0x1fffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x10U])) 
                               << 0x1fU) | ((QData)((IData)(
                                                            vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0xfU])) 
                                            >> 1U)));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list[0xeU] 
        = (0x1fffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x11U])) 
                               << 0x1aU) | ((QData)((IData)(
                                                            vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x10U])) 
                                            >> 6U)));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list[0xfU] 
        = (0x1fffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x12U])) 
                               << 0x15U) | ((QData)((IData)(
                                                            vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x11U])) 
                                            >> 0xbU)));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list[0x10U] 
        = (0x1fffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x13U])) 
                               << 0x10U) | ((QData)((IData)(
                                                            vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x12U])) 
                                            >> 0x10U)));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list[0x11U] 
        = (0x1fffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x14U])) 
                               << 0xbU) | ((QData)((IData)(
                                                           vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x13U])) 
                                           >> 0x15U)));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list[0x12U] 
        = (0x1fffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x15U])) 
                               << 6U) | ((QData)((IData)(
                                                         vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x14U])) 
                                         >> 0x1aU)));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list[0x13U] 
        = (0x1fffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x17U])) 
                               << 0x21U) | (((QData)((IData)(
                                                             vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x16U])) 
                                             << 1U) 
                                            | ((QData)((IData)(
                                                               vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x15U])) 
                                               >> 0x1fU))));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list[0x14U] 
        = (0x1fffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x18U])) 
                               << 0x1cU) | ((QData)((IData)(
                                                            vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x17U])) 
                                            >> 4U)));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list[0x15U] 
        = (0x1fffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x19U])) 
                               << 0x17U) | ((QData)((IData)(
                                                            vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x18U])) 
                                            >> 9U)));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list[0x16U] 
        = (0x1fffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x1aU])) 
                               << 0x12U) | ((QData)((IData)(
                                                            vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x19U])) 
                                            >> 0xeU)));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list[0x17U] 
        = (0x1fffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x1bU])) 
                               << 0xdU) | ((QData)((IData)(
                                                           vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x1aU])) 
                                           >> 0x13U)));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list[0x18U] 
        = (0x1fffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x1cU])) 
                               << 8U) | ((QData)((IData)(
                                                         vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x1bU])) 
                                         >> 0x18U)));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list[0x19U] 
        = (0x1fffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x1eU])) 
                               << 0x23U) | (((QData)((IData)(
                                                             vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x1dU])) 
                                             << 3U) 
                                            | ((QData)((IData)(
                                                               vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x1cU])) 
                                               >> 0x1dU))));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list[0x1aU] 
        = (0x1fffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x1fU])) 
                               << 0x1eU) | ((QData)((IData)(
                                                            vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x1eU])) 
                                            >> 2U)));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list[0x1bU] 
        = (0x1fffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x20U])) 
                               << 0x19U) | ((QData)((IData)(
                                                            vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x1fU])) 
                                            >> 7U)));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list[0x1cU] 
        = (0x1fffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x21U])) 
                               << 0x14U) | ((QData)((IData)(
                                                            vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x20U])) 
                                            >> 0xcU)));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list[0x1dU] 
        = (0x1fffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x22U])) 
                               << 0xfU) | ((QData)((IData)(
                                                           vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x21U])) 
                                           >> 0x11U)));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list[0x1eU] 
        = (0x1fffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x23U])) 
                               << 0xaU) | ((QData)((IData)(
                                                           vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x22U])) 
                                           >> 0x16U)));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list[0x1fU] 
        = (0x1fffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x24U])) 
                               << 5U) | ((QData)((IData)(
                                                         vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x23U])) 
                                         >> 0x1bU)));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list[0x20U] 
        = (0x1fffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x26U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x25U]))));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list[0x21U] 
        = (0x1fffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x27U])) 
                               << 0x1bU) | ((QData)((IData)(
                                                            vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x26U])) 
                                            >> 5U)));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list[0x22U] 
        = (0x1fffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x28U])) 
                               << 0x16U) | ((QData)((IData)(
                                                            vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x27U])) 
                                            >> 0xaU)));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list[0x23U] 
        = (0x1fffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x29U])) 
                               << 0x11U) | ((QData)((IData)(
                                                            vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x28U])) 
                                            >> 0xfU)));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list[0x24U] 
        = (0x1fffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x2aU])) 
                               << 0xcU) | ((QData)((IData)(
                                                           vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x29U])) 
                                           >> 0x14U)));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list[0x25U] 
        = (0x1fffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x2bU])) 
                               << 7U) | ((QData)((IData)(
                                                         vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x2aU])) 
                                         >> 0x19U)));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list[0x26U] 
        = (0x1fffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x2dU])) 
                               << 0x22U) | (((QData)((IData)(
                                                             vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x2cU])) 
                                             << 2U) 
                                            | ((QData)((IData)(
                                                               vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x2bU])) 
                                               >> 0x1eU))));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list[0x27U] 
        = (0x1fffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x2eU])) 
                               << 0x1dU) | ((QData)((IData)(
                                                            vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x2dU])) 
                                            >> 3U)));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list[0x28U] 
        = (0x1fffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x2fU])) 
                               << 0x18U) | ((QData)((IData)(
                                                            vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x2eU])) 
                                            >> 8U)));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list[0x29U] 
        = (0x1fffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x30U])) 
                               << 0x13U) | ((QData)((IData)(
                                                            vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x2fU])) 
                                            >> 0xdU)));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list[0x2aU] 
        = (0x1fffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x31U])) 
                               << 0xeU) | ((QData)((IData)(
                                                           vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x30U])) 
                                           >> 0x12U)));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list[0x2bU] 
        = (0x1fffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x32U])) 
                               << 9U) | ((QData)((IData)(
                                                         vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x31U])) 
                                         >> 0x17U)));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list[0x2cU] 
        = (0x1fffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x34U])) 
                               << 0x24U) | (((QData)((IData)(
                                                             vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x33U])) 
                                             << 4U) 
                                            | ((QData)((IData)(
                                                               vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x32U])) 
                                               >> 0x1cU))));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[0U] 
        = (0x7ffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[1U])) 
                              << 0x20U) | (QData)((IData)(
                                                          vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0U]))));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[1U] 
        = (0x7ffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[2U])) 
                              << 0x1dU) | ((QData)((IData)(
                                                           vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[1U])) 
                                           >> 3U)));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[2U] 
        = (0x7ffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[3U])) 
                              << 0x1aU) | ((QData)((IData)(
                                                           vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[2U])) 
                                           >> 6U)));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[3U] 
        = (0x7ffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[4U])) 
                              << 0x17U) | ((QData)((IData)(
                                                           vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[3U])) 
                                           >> 9U)));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[4U] 
        = (0x7ffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[5U])) 
                              << 0x14U) | ((QData)((IData)(
                                                           vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[4U])) 
                                           >> 0xcU)));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[5U] 
        = (0x7ffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[6U])) 
                              << 0x11U) | ((QData)((IData)(
                                                           vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[5U])) 
                                           >> 0xfU)));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[6U] 
        = (0x7ffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[7U])) 
                              << 0xeU) | ((QData)((IData)(
                                                          vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[6U])) 
                                          >> 0x12U)));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[7U] 
        = (0x7ffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[8U])) 
                              << 0xbU) | ((QData)((IData)(
                                                          vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[7U])) 
                                          >> 0x15U)));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[8U] 
        = (0x7ffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[9U])) 
                              << 8U) | ((QData)((IData)(
                                                        vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[8U])) 
                                        >> 0x18U)));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[9U] 
        = (0x7ffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0xaU])) 
                              << 5U) | ((QData)((IData)(
                                                        vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[9U])) 
                                        >> 0x1bU)));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[0xaU] 
        = (0x7ffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0xcU])) 
                              << 0x22U) | (((QData)((IData)(
                                                            vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0xbU])) 
                                            << 2U) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0xaU])) 
                                              >> 0x1eU))));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[0xbU] 
        = (0x7ffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0xdU])) 
                              << 0x1fU) | ((QData)((IData)(
                                                           vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0xcU])) 
                                           >> 1U)));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[0xcU] 
        = (0x7ffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0xeU])) 
                              << 0x1cU) | ((QData)((IData)(
                                                           vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0xdU])) 
                                           >> 4U)));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[0xdU] 
        = (0x7ffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0xfU])) 
                              << 0x19U) | ((QData)((IData)(
                                                           vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0xeU])) 
                                           >> 7U)));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[0xeU] 
        = (0x7ffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x10U])) 
                              << 0x16U) | ((QData)((IData)(
                                                           vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0xfU])) 
                                           >> 0xaU)));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[0xfU] 
        = (0x7ffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x11U])) 
                              << 0x13U) | ((QData)((IData)(
                                                           vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x10U])) 
                                           >> 0xdU)));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[0x10U] 
        = (0x7ffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x12U])) 
                              << 0x10U) | ((QData)((IData)(
                                                           vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x11U])) 
                                           >> 0x10U)));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[0x11U] 
        = (0x7ffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x13U])) 
                              << 0xdU) | ((QData)((IData)(
                                                          vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x12U])) 
                                          >> 0x13U)));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[0x12U] 
        = (0x7ffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x14U])) 
                              << 0xaU) | ((QData)((IData)(
                                                          vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x13U])) 
                                          >> 0x16U)));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[0x13U] 
        = (0x7ffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x15U])) 
                              << 7U) | ((QData)((IData)(
                                                        vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x14U])) 
                                        >> 0x19U)));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[0x14U] 
        = (0x7ffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x16U])) 
                              << 4U) | ((QData)((IData)(
                                                        vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x15U])) 
                                        >> 0x1cU)));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[0x15U] 
        = (0x7ffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x18U])) 
                              << 0x21U) | (((QData)((IData)(
                                                            vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x17U])) 
                                            << 1U) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x16U])) 
                                              >> 0x1fU))));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[0x16U] 
        = (0x7ffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x19U])) 
                              << 0x1eU) | ((QData)((IData)(
                                                           vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x18U])) 
                                           >> 2U)));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[0x17U] 
        = (0x7ffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x1aU])) 
                              << 0x1bU) | ((QData)((IData)(
                                                           vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x19U])) 
                                           >> 5U)));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[0x18U] 
        = (0x7ffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x1bU])) 
                              << 0x18U) | ((QData)((IData)(
                                                           vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x1aU])) 
                                           >> 8U)));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[0x19U] 
        = (0x7ffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x1cU])) 
                              << 0x15U) | ((QData)((IData)(
                                                           vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x1bU])) 
                                           >> 0xbU)));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[0x1aU] 
        = (0x7ffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x1dU])) 
                              << 0x12U) | ((QData)((IData)(
                                                           vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x1cU])) 
                                           >> 0xeU)));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[0x1bU] 
        = (0x7ffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x1eU])) 
                              << 0xfU) | ((QData)((IData)(
                                                          vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x1dU])) 
                                          >> 0x11U)));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[0x1cU] 
        = (0x7ffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x1fU])) 
                              << 0xcU) | ((QData)((IData)(
                                                          vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x1eU])) 
                                          >> 0x14U)));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[0x1dU] 
        = (0x7ffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x20U])) 
                              << 9U) | ((QData)((IData)(
                                                        vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x1fU])) 
                                        >> 0x17U)));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[0x1eU] 
        = (0x7ffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x21U])) 
                              << 6U) | ((QData)((IData)(
                                                        vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x20U])) 
                                        >> 0x1aU)));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[0x1fU] 
        = (0x7ffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x22U])) 
                              << 3U) | ((QData)((IData)(
                                                        vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x21U])) 
                                        >> 0x1dU)));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[0x20U] 
        = (0x7ffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x24U])) 
                              << 0x20U) | (QData)((IData)(
                                                          vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x23U]))));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[0x21U] 
        = (0x7ffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x25U])) 
                              << 0x1dU) | ((QData)((IData)(
                                                           vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x24U])) 
                                           >> 3U)));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[0x22U] 
        = (0x7ffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x26U])) 
                              << 0x1aU) | ((QData)((IData)(
                                                           vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x25U])) 
                                           >> 6U)));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[0x23U] 
        = (0x7ffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x27U])) 
                              << 0x17U) | ((QData)((IData)(
                                                           vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x26U])) 
                                           >> 9U)));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[0x24U] 
        = (0x7ffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x28U])) 
                              << 0x14U) | ((QData)((IData)(
                                                           vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x27U])) 
                                           >> 0xcU)));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[0x25U] 
        = (0x7ffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x29U])) 
                              << 0x11U) | ((QData)((IData)(
                                                           vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x28U])) 
                                           >> 0xfU)));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[0x26U] 
        = (0x7ffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x2aU])) 
                              << 0xeU) | ((QData)((IData)(
                                                          vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x29U])) 
                                          >> 0x12U)));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[0x27U] 
        = (0x7ffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x2bU])) 
                              << 0xbU) | ((QData)((IData)(
                                                          vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x2aU])) 
                                          >> 0x15U)));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[0x28U] 
        = (0x7ffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x2cU])) 
                              << 8U) | ((QData)((IData)(
                                                        vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x2bU])) 
                                        >> 0x18U)));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[0x29U] 
        = (0x7ffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x2dU])) 
                              << 5U) | ((QData)((IData)(
                                                        vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x2cU])) 
                                        >> 0x1bU)));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[0x2aU] 
        = (0x7ffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x2fU])) 
                              << 0x22U) | (((QData)((IData)(
                                                            vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x2eU])) 
                                            << 2U) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x2dU])) 
                                              >> 0x1eU))));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[0x2bU] 
        = (0x7ffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x30U])) 
                              << 0x1fU) | ((QData)((IData)(
                                                           vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x2fU])) 
                                           >> 1U)));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[0x2cU] 
        = (0x7ffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x31U])) 
                              << 0x1cU) | ((QData)((IData)(
                                                           vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x30U])) 
                                           >> 4U)));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[0x2dU] 
        = (0x7ffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x32U])) 
                              << 0x19U) | ((QData)((IData)(
                                                           vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x31U])) 
                                           >> 7U)));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[0x2eU] 
        = (0x7ffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x33U])) 
                              << 0x16U) | ((QData)((IData)(
                                                           vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x32U])) 
                                           >> 0xaU)));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[0x2fU] 
        = (0x7ffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x34U])) 
                              << 0x13U) | ((QData)((IData)(
                                                           vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x33U])) 
                                           >> 0xdU)));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[0x30U] 
        = (0x7ffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x35U])) 
                              << 0x10U) | ((QData)((IData)(
                                                           vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x34U])) 
                                           >> 0x10U)));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[0x31U] 
        = (0x7ffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x36U])) 
                              << 0xdU) | ((QData)((IData)(
                                                          vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x35U])) 
                                          >> 0x13U)));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[0x32U] 
        = (0x7ffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x37U])) 
                              << 0xaU) | ((QData)((IData)(
                                                          vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x36U])) 
                                          >> 0x16U)));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[0x33U] 
        = (0x7ffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x38U])) 
                              << 7U) | ((QData)((IData)(
                                                        vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x37U])) 
                                        >> 0x19U)));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[0x34U] 
        = (0x7ffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x39U])) 
                              << 4U) | ((QData)((IData)(
                                                        vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x38U])) 
                                        >> 0x1cU)));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[0x35U] 
        = (0x7ffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x3bU])) 
                              << 0x21U) | (((QData)((IData)(
                                                            vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x3aU])) 
                                            << 1U) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x39U])) 
                                              >> 0x1fU))));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[0x36U] 
        = (0x7ffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x3cU])) 
                              << 0x1eU) | ((QData)((IData)(
                                                           vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x3bU])) 
                                           >> 2U)));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[0x37U] 
        = (0x7ffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x3dU])) 
                              << 0x1bU) | ((QData)((IData)(
                                                           vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x3cU])) 
                                           >> 5U)));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[0x38U] 
        = (0x7ffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x3eU])) 
                              << 0x18U) | ((QData)((IData)(
                                                           vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x3dU])) 
                                           >> 8U)));
    if (((IData)(vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__hit) 
         ^ (IData)(vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__hit))) {
        ++(vlSymsp->__Vcoverage[5976]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__hit 
            = vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__hit;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__lut_out) 
               ^ (IData)(vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[5964]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffeU & (IData)(vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__lut_out)) 
               | (1U & (IData)(vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__lut_out)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__lut_out) 
               ^ (IData)(vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[5965]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffdU & (IData)(vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__lut_out)) 
               | (2U & (IData)(vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__lut_out)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__lut_out) 
               ^ (IData)(vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[5966]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffbU & (IData)(vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__lut_out)) 
               | (4U & (IData)(vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__lut_out)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__lut_out) 
               ^ (IData)(vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[5967]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xff7U & (IData)(vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__lut_out)) 
               | (8U & (IData)(vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__lut_out)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__lut_out) 
                  ^ (IData)(vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[5968]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfefU & (IData)(vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__lut_out)) 
               | (0x10U & (IData)(vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__lut_out)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__lut_out) 
                  ^ (IData)(vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[5969]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfdfU & (IData)(vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__lut_out)) 
               | (0x20U & (IData)(vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__lut_out)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__lut_out) 
                  ^ (IData)(vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[5970]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfbfU & (IData)(vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__lut_out)) 
               | (0x40U & (IData)(vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__lut_out)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__lut_out) 
                  ^ (IData)(vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[5971]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xf7fU & (IData)(vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__lut_out)) 
               | (0x80U & (IData)(vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__lut_out)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__lut_out) 
                   ^ (IData)(vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[5972]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xeffU & (IData)(vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__lut_out)) 
               | (0x100U & (IData)(vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__lut_out)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__lut_out) 
                   ^ (IData)(vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[5973]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xdffU & (IData)(vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__lut_out)) 
               | (0x200U & (IData)(vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__lut_out)));
    }
    if ((0x400U & ((IData)(vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__lut_out) 
                   ^ (IData)(vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[5974]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xbffU & (IData)(vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__lut_out)) 
               | (0x400U & (IData)(vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__lut_out)));
    }
    if ((0x800U & ((IData)(vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__lut_out) 
                   ^ (IData)(vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[5975]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0x7ffU & (IData)(vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__lut_out)) 
               | (0x800U & (IData)(vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__lut_out)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__de__DOT__wcsraddr2) 
               ^ (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__wcsraddr2)))) {
        ++(vlSymsp->__Vcoverage[596]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wcsraddr2 
            = ((0xffeU & (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__wcsraddr2)) 
               | (1U & (IData)(vlSelf->top__DOT__de__DOT__wcsraddr2)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__de__DOT__wcsraddr2) 
               ^ (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__wcsraddr2)))) {
        ++(vlSymsp->__Vcoverage[597]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wcsraddr2 
            = ((0xffdU & (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__wcsraddr2)) 
               | (2U & (IData)(vlSelf->top__DOT__de__DOT__wcsraddr2)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__de__DOT__wcsraddr2) 
               ^ (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__wcsraddr2)))) {
        ++(vlSymsp->__Vcoverage[598]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wcsraddr2 
            = ((0xffbU & (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__wcsraddr2)) 
               | (4U & (IData)(vlSelf->top__DOT__de__DOT__wcsraddr2)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__de__DOT__wcsraddr2) 
               ^ (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__wcsraddr2)))) {
        ++(vlSymsp->__Vcoverage[599]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wcsraddr2 
            = ((0xff7U & (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__wcsraddr2)) 
               | (8U & (IData)(vlSelf->top__DOT__de__DOT__wcsraddr2)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__de__DOT__wcsraddr2) 
                  ^ (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__wcsraddr2)))) {
        ++(vlSymsp->__Vcoverage[600]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wcsraddr2 
            = ((0xfefU & (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__wcsraddr2)) 
               | (0x10U & (IData)(vlSelf->top__DOT__de__DOT__wcsraddr2)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__de__DOT__wcsraddr2) 
                  ^ (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__wcsraddr2)))) {
        ++(vlSymsp->__Vcoverage[601]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wcsraddr2 
            = ((0xfdfU & (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__wcsraddr2)) 
               | (0x20U & (IData)(vlSelf->top__DOT__de__DOT__wcsraddr2)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__de__DOT__wcsraddr2) 
                  ^ (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__wcsraddr2)))) {
        ++(vlSymsp->__Vcoverage[602]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wcsraddr2 
            = ((0xfbfU & (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__wcsraddr2)) 
               | (0x40U & (IData)(vlSelf->top__DOT__de__DOT__wcsraddr2)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__de__DOT__wcsraddr2) 
                  ^ (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__wcsraddr2)))) {
        ++(vlSymsp->__Vcoverage[603]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wcsraddr2 
            = ((0xf7fU & (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__wcsraddr2)) 
               | (0x80U & (IData)(vlSelf->top__DOT__de__DOT__wcsraddr2)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__de__DOT__wcsraddr2) 
                   ^ (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__wcsraddr2)))) {
        ++(vlSymsp->__Vcoverage[604]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wcsraddr2 
            = ((0xeffU & (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__wcsraddr2)) 
               | (0x100U & (IData)(vlSelf->top__DOT__de__DOT__wcsraddr2)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__de__DOT__wcsraddr2) 
                   ^ (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__wcsraddr2)))) {
        ++(vlSymsp->__Vcoverage[605]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wcsraddr2 
            = ((0xdffU & (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__wcsraddr2)) 
               | (0x200U & (IData)(vlSelf->top__DOT__de__DOT__wcsraddr2)));
    }
    if ((0x400U & ((IData)(vlSelf->top__DOT__de__DOT__wcsraddr2) 
                   ^ (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__wcsraddr2)))) {
        ++(vlSymsp->__Vcoverage[606]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wcsraddr2 
            = ((0xbffU & (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__wcsraddr2)) 
               | (0x400U & (IData)(vlSelf->top__DOT__de__DOT__wcsraddr2)));
    }
    if ((0x800U & ((IData)(vlSelf->top__DOT__de__DOT__wcsraddr2) 
                   ^ (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__wcsraddr2)))) {
        ++(vlSymsp->__Vcoverage[607]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wcsraddr2 
            = ((0x7ffU & (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__wcsraddr2)) 
               | (0x800U & (IData)(vlSelf->top__DOT__de__DOT__wcsraddr2)));
    }
    if (((IData)(vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__hit) 
         ^ (IData)(vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__hit))) {
        ++(vlSymsp->__Vcoverage[6321]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__hit 
            = vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__hit;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__lut_out) 
               ^ (IData)(vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[6316]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0x1eU & (IData)(vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__lut_out)) 
               | (1U & (IData)(vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__lut_out)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__lut_out) 
               ^ (IData)(vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[6317]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0x1dU & (IData)(vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__lut_out)) 
               | (2U & (IData)(vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__lut_out)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__lut_out) 
               ^ (IData)(vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[6318]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0x1bU & (IData)(vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__lut_out)) 
               | (4U & (IData)(vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__lut_out)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__lut_out) 
               ^ (IData)(vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[6319]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0x17U & (IData)(vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__lut_out)) 
               | (8U & (IData)(vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__lut_out)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__lut_out) 
                  ^ (IData)(vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[6320]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfU & (IData)(vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__lut_out)) 
               | (0x10U & (IData)(vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__lut_out)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__de__DOT__raddr) 
               ^ (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__raddr)))) {
        ++(vlSymsp->__Vcoverage[567]);
        vlSelf->top__DOT__de__DOT____Vtogcov__raddr 
            = ((0x1eU & (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__raddr)) 
               | (1U & (IData)(vlSelf->top__DOT__de__DOT__raddr)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__de__DOT__raddr) 
               ^ (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__raddr)))) {
        ++(vlSymsp->__Vcoverage[568]);
        vlSelf->top__DOT__de__DOT____Vtogcov__raddr 
            = ((0x1dU & (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__raddr)) 
               | (2U & (IData)(vlSelf->top__DOT__de__DOT__raddr)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__de__DOT__raddr) 
               ^ (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__raddr)))) {
        ++(vlSymsp->__Vcoverage[569]);
        vlSelf->top__DOT__de__DOT____Vtogcov__raddr 
            = ((0x1bU & (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__raddr)) 
               | (4U & (IData)(vlSelf->top__DOT__de__DOT__raddr)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__de__DOT__raddr) 
               ^ (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__raddr)))) {
        ++(vlSymsp->__Vcoverage[570]);
        vlSelf->top__DOT__de__DOT____Vtogcov__raddr 
            = ((0x17U & (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__raddr)) 
               | (8U & (IData)(vlSelf->top__DOT__de__DOT__raddr)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__de__DOT__raddr) 
                  ^ (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__raddr)))) {
        ++(vlSymsp->__Vcoverage[571]);
        vlSelf->top__DOT__de__DOT____Vtogcov__raddr 
            = ((0xfU & (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__raddr)) 
               | (0x10U & (IData)(vlSelf->top__DOT__de__DOT__raddr)));
    }
    if (((IData)(vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__hit) 
         ^ (IData)(vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__hit))) {
        ++(vlSymsp->__Vcoverage[6237]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__hit 
            = vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__hit;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out) 
               ^ (IData)(vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[6173]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[6174]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[6175]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[6176]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[6177]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[6178]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[6179]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[6180]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[6181]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[6182]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[6183]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[6184]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[6185]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[6186]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[6187]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[6188]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[6189]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[6190]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[6191]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[6192]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[6193]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[6194]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[6195]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[6196]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[6197]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[6198]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[6199]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[6200]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[6201]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[6202]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[6203]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[6204]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[6205]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[6206]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[6207]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[6208]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[6209]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[6210]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[6211]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[6212]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[6213]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[6214]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[6215]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[6216]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[6217]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[6218]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[6219]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[6220]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[6221]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[6222]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[6223]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[6224]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[6225]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[6226]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[6227]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[6228]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[6229]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[6230]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[6231]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[6232]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[6233]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[6234]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[6235]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[6236]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__de__DOT__wcsrdata2) 
               ^ (IData)(vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2)))) {
        ++(vlSymsp->__Vcoverage[1093]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__de__DOT__wcsrdata2)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wcsrdata2 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[1094]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wcsrdata2 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wcsrdata2 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[1095]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wcsrdata2 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wcsrdata2 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[1096]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wcsrdata2 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wcsrdata2 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[1097]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wcsrdata2 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wcsrdata2 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[1098]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wcsrdata2 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wcsrdata2 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[1099]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wcsrdata2 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wcsrdata2 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[1100]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wcsrdata2 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wcsrdata2 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[1101]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wcsrdata2 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wcsrdata2 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[1102]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wcsrdata2 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wcsrdata2 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[1103]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wcsrdata2 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wcsrdata2 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[1104]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wcsrdata2 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wcsrdata2 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[1105]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wcsrdata2 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wcsrdata2 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[1106]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wcsrdata2 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wcsrdata2 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[1107]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wcsrdata2 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wcsrdata2 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[1108]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wcsrdata2 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wcsrdata2 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[1109]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wcsrdata2 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wcsrdata2 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[1110]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wcsrdata2 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wcsrdata2 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[1111]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wcsrdata2 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wcsrdata2 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[1112]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wcsrdata2 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wcsrdata2 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[1113]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wcsrdata2 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wcsrdata2 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[1114]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wcsrdata2 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wcsrdata2 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[1115]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wcsrdata2 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wcsrdata2 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[1116]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wcsrdata2 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wcsrdata2 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[1117]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wcsrdata2 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wcsrdata2 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[1118]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wcsrdata2 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wcsrdata2 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[1119]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wcsrdata2 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wcsrdata2 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[1120]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wcsrdata2 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wcsrdata2 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[1121]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wcsrdata2 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wcsrdata2 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[1122]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wcsrdata2 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wcsrdata2 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[1123]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wcsrdata2 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wcsrdata2 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[1124]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wcsrdata2 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wcsrdata2 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[1125]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wcsrdata2 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wcsrdata2 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[1126]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wcsrdata2 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wcsrdata2 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[1127]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wcsrdata2 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wcsrdata2 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[1128]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wcsrdata2 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wcsrdata2 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[1129]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wcsrdata2 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wcsrdata2 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[1130]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wcsrdata2 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wcsrdata2 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[1131]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wcsrdata2 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wcsrdata2 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[1132]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wcsrdata2 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wcsrdata2 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[1133]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wcsrdata2 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wcsrdata2 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[1134]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wcsrdata2 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wcsrdata2 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[1135]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wcsrdata2 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wcsrdata2 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[1136]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wcsrdata2 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wcsrdata2 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[1137]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wcsrdata2 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wcsrdata2 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[1138]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wcsrdata2 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wcsrdata2 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[1139]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wcsrdata2 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wcsrdata2 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[1140]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wcsrdata2 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wcsrdata2 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[1141]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wcsrdata2 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wcsrdata2 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[1142]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wcsrdata2 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wcsrdata2 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[1143]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wcsrdata2 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wcsrdata2 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[1144]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wcsrdata2 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wcsrdata2 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[1145]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wcsrdata2 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wcsrdata2 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[1146]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wcsrdata2 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wcsrdata2 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[1147]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wcsrdata2 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wcsrdata2 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[1148]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wcsrdata2 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wcsrdata2 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[1149]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wcsrdata2 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wcsrdata2 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[1150]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wcsrdata2 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wcsrdata2 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[1151]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wcsrdata2 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wcsrdata2 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[1152]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wcsrdata2 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wcsrdata2 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[1153]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wcsrdata2 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wcsrdata2 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[1154]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wcsrdata2 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wcsrdata2 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[1155]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wcsrdata2 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__wcsrdata2 
                        >> 0x3fU)) ^ (IData)((vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[1156]);
        vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__de__DOT____Vtogcov__wcsrdata2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__wcsrdata2 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__de__DOT__m20__DOT__i0__DOT__pair_list
                       [0U]) ^ (IData)(vlSelf->top__DOT__de__DOT__m20__DOT__i0__DOT____Vtogcov__pair_list
                                       [0U])))) {
        ++(vlSymsp->__Vcoverage[5238]);
        vlSelf->top__DOT__de__DOT__m20__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0xffffffffffeULL & vlSelf->top__DOT__de__DOT__m20__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | (IData)((IData)((1U & (IData)(
                                                      vlSelf->top__DOT__de__DOT__m20__DOT__i0__DOT__pair_list
                                                      [0U])))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m20__DOT__i0__DOT__pair_list
                        [0U] >> 1U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m20__DOT__i0__DOT____Vtogcov__pair_list
                                                [0U] 
                                                >> 1U))))) {
        ++(vlSymsp->__Vcoverage[5239]);
        vlSelf->top__DOT__de__DOT__m20__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0xffffffffffdULL & vlSelf->top__DOT__de__DOT__m20__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m20__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 1U))))) 
                         << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m20__DOT__i0__DOT__pair_list
                        [0U] >> 2U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m20__DOT__i0__DOT____Vtogcov__pair_list
                                                [0U] 
                                                >> 2U))))) {
        ++(vlSymsp->__Vcoverage[5240]);
        vlSelf->top__DOT__de__DOT__m20__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0xffffffffffbULL & vlSelf->top__DOT__de__DOT__m20__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m20__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 2U))))) 
                         << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m20__DOT__i0__DOT__pair_list
                        [0U] >> 3U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m20__DOT__i0__DOT____Vtogcov__pair_list
                                                [0U] 
                                                >> 3U))))) {
        ++(vlSymsp->__Vcoverage[5241]);
        vlSelf->top__DOT__de__DOT__m20__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0xffffffffff7ULL & vlSelf->top__DOT__de__DOT__m20__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m20__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 3U))))) 
                         << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m20__DOT__i0__DOT__pair_list
                        [0U] >> 4U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m20__DOT__i0__DOT____Vtogcov__pair_list
                                                [0U] 
                                                >> 4U))))) {
        ++(vlSymsp->__Vcoverage[5242]);
        vlSelf->top__DOT__de__DOT__m20__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0xfffffffffefULL & vlSelf->top__DOT__de__DOT__m20__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m20__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 4U))))) 
                         << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m20__DOT__i0__DOT__pair_list
                        [0U] >> 5U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m20__DOT__i0__DOT____Vtogcov__pair_list
                                                [0U] 
                                                >> 5U))))) {
        ++(vlSymsp->__Vcoverage[5243]);
        vlSelf->top__DOT__de__DOT__m20__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0xfffffffffdfULL & vlSelf->top__DOT__de__DOT__m20__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m20__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 5U))))) 
                         << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m20__DOT__i0__DOT__pair_list
                        [0U] >> 6U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m20__DOT__i0__DOT____Vtogcov__pair_list
                                                [0U] 
                                                >> 6U))))) {
        ++(vlSymsp->__Vcoverage[5244]);
        vlSelf->top__DOT__de__DOT__m20__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0xfffffffffbfULL & vlSelf->top__DOT__de__DOT__m20__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m20__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 6U))))) 
                         << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m20__DOT__i0__DOT__pair_list
                        [0U] >> 7U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m20__DOT__i0__DOT____Vtogcov__pair_list
                                                [0U] 
                                                >> 7U))))) {
        ++(vlSymsp->__Vcoverage[5245]);
        vlSelf->top__DOT__de__DOT__m20__DOT__i0__DOT____Vtogcov__pair_list[0U] 
            = ((0xfffffffff7fULL & vlSelf->top__DOT__de__DOT__m20__DOT__i0__DOT____Vtogcov__pair_list
                [0U]) | ((QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__de__DOT__m20__DOT__i0__DOT__pair_list
                                                        [0U] 
                                                        >> 7U))))) 
                         << 7U));
    }
}
