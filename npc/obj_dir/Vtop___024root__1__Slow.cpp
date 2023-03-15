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
    VlWide<3>/*95:0*/ __Vtemp694;
    VlWide<3>/*95:0*/ __Vtemp695;
    VlWide<4>/*127:0*/ __Vtemp696;
    VlWide<4>/*127:0*/ __Vtemp697;
    VlWide<5>/*159:0*/ __Vtemp698;
    VlWide<5>/*159:0*/ __Vtemp699;
    VlWide<6>/*191:0*/ __Vtemp700;
    VlWide<6>/*191:0*/ __Vtemp701;
    VlWide<7>/*223:0*/ __Vtemp702;
    VlWide<7>/*223:0*/ __Vtemp703;
    VlWide<8>/*255:0*/ __Vtemp704;
    VlWide<8>/*255:0*/ __Vtemp705;
    VlWide<9>/*287:0*/ __Vtemp706;
    VlWide<9>/*287:0*/ __Vtemp707;
    VlWide<30>/*959:0*/ __Vtemp744;
    VlWide<30>/*959:0*/ __Vtemp745;
    VlWide<36>/*1151:0*/ __Vtemp755;
    VlWide<16>/*511:0*/ __Vtemp780;
    VlWide<16>/*511:0*/ __Vtemp781;
    VlWide<17>/*543:0*/ __Vtemp782;
    VlWide<17>/*543:0*/ __Vtemp783;
    VlWide<18>/*575:0*/ __Vtemp784;
    VlWide<18>/*575:0*/ __Vtemp785;
    VlWide<19>/*607:0*/ __Vtemp786;
    VlWide<19>/*607:0*/ __Vtemp787;
    VlWide<20>/*639:0*/ __Vtemp788;
    VlWide<20>/*639:0*/ __Vtemp789;
    VlWide<21>/*671:0*/ __Vtemp790;
    VlWide<21>/*671:0*/ __Vtemp791;
    VlWide<22>/*703:0*/ __Vtemp792;
    VlWide<22>/*703:0*/ __Vtemp793;
    VlWide<23>/*735:0*/ __Vtemp794;
    VlWide<24>/*767:0*/ __Vtemp795;
    VlWide<25>/*799:0*/ __Vtemp796;
    VlWide<25>/*799:0*/ __Vtemp797;
    VlWide<26>/*831:0*/ __Vtemp798;
    VlWide<26>/*831:0*/ __Vtemp799;
    VlWide<27>/*863:0*/ __Vtemp800;
    VlWide<27>/*863:0*/ __Vtemp801;
    VlWide<28>/*895:0*/ __Vtemp802;
    VlWide<28>/*895:0*/ __Vtemp803;
    VlWide<29>/*927:0*/ __Vtemp804;
    VlWide<29>/*927:0*/ __Vtemp805;
    VlWide<65>/*2079:0*/ __Vtemp806;
    // Body
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__Xor 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__Xor))) {
        ++(vlSymsp->__Vcoverage[3776]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Xor = 
            ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Xor) 
             | (0x8000000U & vlSelf->top__DOT__de__DOT__Xor));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__Xor 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__Xor))) {
        ++(vlSymsp->__Vcoverage[3777]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Xor = 
            ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Xor) 
             | (0x10000000U & vlSelf->top__DOT__de__DOT__Xor));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__Xor 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__Xor))) {
        ++(vlSymsp->__Vcoverage[3778]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Xor = 
            ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Xor) 
             | (0x20000000U & vlSelf->top__DOT__de__DOT__Xor));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__Xor 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__Xor))) {
        ++(vlSymsp->__Vcoverage[3779]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Xor = 
            ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Xor) 
             | (0x40000000U & vlSelf->top__DOT__de__DOT__Xor));
    }
    if (((vlSelf->top__DOT__de__DOT__Xor ^ vlSelf->top__DOT__de__DOT____Vtogcov__Xor) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3780]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Xor = 
            ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Xor) 
             | (0x80000000U & vlSelf->top__DOT__de__DOT__Xor));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__Or ^ vlSelf->top__DOT__de__DOT____Vtogcov__Or))) {
        ++(vlSymsp->__Vcoverage[3781]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Or = 
            ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__Or) 
             | (1U & vlSelf->top__DOT__de__DOT__Or));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__Or ^ vlSelf->top__DOT__de__DOT____Vtogcov__Or))) {
        ++(vlSymsp->__Vcoverage[3782]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Or = 
            ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__Or) 
             | (2U & vlSelf->top__DOT__de__DOT__Or));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__Or ^ vlSelf->top__DOT__de__DOT____Vtogcov__Or))) {
        ++(vlSymsp->__Vcoverage[3783]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Or = 
            ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__Or) 
             | (4U & vlSelf->top__DOT__de__DOT__Or));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__Or ^ vlSelf->top__DOT__de__DOT____Vtogcov__Or))) {
        ++(vlSymsp->__Vcoverage[3784]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Or = 
            ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__Or) 
             | (8U & vlSelf->top__DOT__de__DOT__Or));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__Or ^ vlSelf->top__DOT__de__DOT____Vtogcov__Or))) {
        ++(vlSymsp->__Vcoverage[3785]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Or = 
            ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__Or) 
             | (0x10U & vlSelf->top__DOT__de__DOT__Or));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__Or ^ vlSelf->top__DOT__de__DOT____Vtogcov__Or))) {
        ++(vlSymsp->__Vcoverage[3786]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Or = 
            ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__Or) 
             | (0x20U & vlSelf->top__DOT__de__DOT__Or));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__Or ^ vlSelf->top__DOT__de__DOT____Vtogcov__Or))) {
        ++(vlSymsp->__Vcoverage[3787]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Or = 
            ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__Or) 
             | (0x40U & vlSelf->top__DOT__de__DOT__Or));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__Or ^ vlSelf->top__DOT__de__DOT____Vtogcov__Or))) {
        ++(vlSymsp->__Vcoverage[3788]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Or = 
            ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__Or) 
             | (0x80U & vlSelf->top__DOT__de__DOT__Or));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__Or ^ vlSelf->top__DOT__de__DOT____Vtogcov__Or))) {
        ++(vlSymsp->__Vcoverage[3789]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Or = 
            ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__Or) 
             | (0x100U & vlSelf->top__DOT__de__DOT__Or));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__Or ^ vlSelf->top__DOT__de__DOT____Vtogcov__Or))) {
        ++(vlSymsp->__Vcoverage[3790]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Or = 
            ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__Or) 
             | (0x200U & vlSelf->top__DOT__de__DOT__Or));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__Or ^ vlSelf->top__DOT__de__DOT____Vtogcov__Or))) {
        ++(vlSymsp->__Vcoverage[3791]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Or = 
            ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__Or) 
             | (0x400U & vlSelf->top__DOT__de__DOT__Or));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__Or ^ vlSelf->top__DOT__de__DOT____Vtogcov__Or))) {
        ++(vlSymsp->__Vcoverage[3792]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Or = 
            ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__Or) 
             | (0x800U & vlSelf->top__DOT__de__DOT__Or));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__Or ^ vlSelf->top__DOT__de__DOT____Vtogcov__Or))) {
        ++(vlSymsp->__Vcoverage[3793]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Or = 
            ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__Or) 
             | (0x1000U & vlSelf->top__DOT__de__DOT__Or));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__Or ^ vlSelf->top__DOT__de__DOT____Vtogcov__Or))) {
        ++(vlSymsp->__Vcoverage[3794]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Or = 
            ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__Or) 
             | (0x2000U & vlSelf->top__DOT__de__DOT__Or));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__Or ^ vlSelf->top__DOT__de__DOT____Vtogcov__Or))) {
        ++(vlSymsp->__Vcoverage[3795]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Or = 
            ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__Or) 
             | (0x4000U & vlSelf->top__DOT__de__DOT__Or));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__Or ^ vlSelf->top__DOT__de__DOT____Vtogcov__Or))) {
        ++(vlSymsp->__Vcoverage[3796]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Or = 
            ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__Or) 
             | (0x8000U & vlSelf->top__DOT__de__DOT__Or));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__Or 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__Or))) {
        ++(vlSymsp->__Vcoverage[3797]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Or = 
            ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Or) 
             | (0x10000U & vlSelf->top__DOT__de__DOT__Or));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__Or 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__Or))) {
        ++(vlSymsp->__Vcoverage[3798]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Or = 
            ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Or) 
             | (0x20000U & vlSelf->top__DOT__de__DOT__Or));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__Or 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__Or))) {
        ++(vlSymsp->__Vcoverage[3799]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Or = 
            ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Or) 
             | (0x40000U & vlSelf->top__DOT__de__DOT__Or));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__Or 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__Or))) {
        ++(vlSymsp->__Vcoverage[3800]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Or = 
            ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Or) 
             | (0x80000U & vlSelf->top__DOT__de__DOT__Or));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__Or 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__Or))) {
        ++(vlSymsp->__Vcoverage[3801]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Or = 
            ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Or) 
             | (0x100000U & vlSelf->top__DOT__de__DOT__Or));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__Or 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__Or))) {
        ++(vlSymsp->__Vcoverage[3802]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Or = 
            ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Or) 
             | (0x200000U & vlSelf->top__DOT__de__DOT__Or));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__Or 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__Or))) {
        ++(vlSymsp->__Vcoverage[3803]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Or = 
            ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Or) 
             | (0x400000U & vlSelf->top__DOT__de__DOT__Or));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__Or 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__Or))) {
        ++(vlSymsp->__Vcoverage[3804]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Or = 
            ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Or) 
             | (0x800000U & vlSelf->top__DOT__de__DOT__Or));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__Or 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__Or))) {
        ++(vlSymsp->__Vcoverage[3805]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Or = 
            ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Or) 
             | (0x1000000U & vlSelf->top__DOT__de__DOT__Or));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__Or 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__Or))) {
        ++(vlSymsp->__Vcoverage[3806]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Or = 
            ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Or) 
             | (0x2000000U & vlSelf->top__DOT__de__DOT__Or));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__Or 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__Or))) {
        ++(vlSymsp->__Vcoverage[3807]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Or = 
            ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Or) 
             | (0x4000000U & vlSelf->top__DOT__de__DOT__Or));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__Or 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__Or))) {
        ++(vlSymsp->__Vcoverage[3808]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Or = 
            ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Or) 
             | (0x8000000U & vlSelf->top__DOT__de__DOT__Or));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__Or 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__Or))) {
        ++(vlSymsp->__Vcoverage[3809]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Or = 
            ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Or) 
             | (0x10000000U & vlSelf->top__DOT__de__DOT__Or));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__Or 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__Or))) {
        ++(vlSymsp->__Vcoverage[3810]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Or = 
            ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Or) 
             | (0x20000000U & vlSelf->top__DOT__de__DOT__Or));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__Or 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__Or))) {
        ++(vlSymsp->__Vcoverage[3811]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Or = 
            ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Or) 
             | (0x40000000U & vlSelf->top__DOT__de__DOT__Or));
    }
    if (((vlSelf->top__DOT__de__DOT__Or ^ vlSelf->top__DOT__de__DOT____Vtogcov__Or) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3812]);
        vlSelf->top__DOT__de__DOT____Vtogcov__Or = 
            ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__Or) 
             | (0x80000000U & vlSelf->top__DOT__de__DOT__Or));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__sltu ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltu))) {
        ++(vlSymsp->__Vcoverage[3813]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltu 
            = ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__sltu) 
               | (1U & vlSelf->top__DOT__de__DOT__sltu));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__sltu ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltu))) {
        ++(vlSymsp->__Vcoverage[3814]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltu 
            = ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__sltu) 
               | (2U & vlSelf->top__DOT__de__DOT__sltu));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__sltu ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltu))) {
        ++(vlSymsp->__Vcoverage[3815]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltu 
            = ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__sltu) 
               | (4U & vlSelf->top__DOT__de__DOT__sltu));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__sltu ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltu))) {
        ++(vlSymsp->__Vcoverage[3816]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltu 
            = ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__sltu) 
               | (8U & vlSelf->top__DOT__de__DOT__sltu));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__sltu ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltu))) {
        ++(vlSymsp->__Vcoverage[3817]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltu 
            = ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__sltu) 
               | (0x10U & vlSelf->top__DOT__de__DOT__sltu));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__sltu ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltu))) {
        ++(vlSymsp->__Vcoverage[3818]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltu 
            = ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__sltu) 
               | (0x20U & vlSelf->top__DOT__de__DOT__sltu));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__sltu ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltu))) {
        ++(vlSymsp->__Vcoverage[3819]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltu 
            = ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__sltu) 
               | (0x40U & vlSelf->top__DOT__de__DOT__sltu));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__sltu ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltu))) {
        ++(vlSymsp->__Vcoverage[3820]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltu 
            = ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__sltu) 
               | (0x80U & vlSelf->top__DOT__de__DOT__sltu));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__sltu 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltu))) {
        ++(vlSymsp->__Vcoverage[3821]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltu 
            = ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltu) 
               | (0x100U & vlSelf->top__DOT__de__DOT__sltu));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__sltu 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltu))) {
        ++(vlSymsp->__Vcoverage[3822]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltu 
            = ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltu) 
               | (0x200U & vlSelf->top__DOT__de__DOT__sltu));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__sltu 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltu))) {
        ++(vlSymsp->__Vcoverage[3823]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltu 
            = ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltu) 
               | (0x400U & vlSelf->top__DOT__de__DOT__sltu));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__sltu 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltu))) {
        ++(vlSymsp->__Vcoverage[3824]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltu 
            = ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltu) 
               | (0x800U & vlSelf->top__DOT__de__DOT__sltu));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__sltu 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltu))) {
        ++(vlSymsp->__Vcoverage[3825]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltu 
            = ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltu) 
               | (0x1000U & vlSelf->top__DOT__de__DOT__sltu));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__sltu 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltu))) {
        ++(vlSymsp->__Vcoverage[3826]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltu 
            = ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltu) 
               | (0x2000U & vlSelf->top__DOT__de__DOT__sltu));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__sltu 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltu))) {
        ++(vlSymsp->__Vcoverage[3827]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltu 
            = ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltu) 
               | (0x4000U & vlSelf->top__DOT__de__DOT__sltu));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__sltu 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltu))) {
        ++(vlSymsp->__Vcoverage[3828]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltu 
            = ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltu) 
               | (0x8000U & vlSelf->top__DOT__de__DOT__sltu));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__sltu 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltu))) {
        ++(vlSymsp->__Vcoverage[3829]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltu 
            = ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltu) 
               | (0x10000U & vlSelf->top__DOT__de__DOT__sltu));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__sltu 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltu))) {
        ++(vlSymsp->__Vcoverage[3830]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltu 
            = ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltu) 
               | (0x20000U & vlSelf->top__DOT__de__DOT__sltu));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__sltu 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltu))) {
        ++(vlSymsp->__Vcoverage[3831]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltu 
            = ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltu) 
               | (0x40000U & vlSelf->top__DOT__de__DOT__sltu));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__sltu 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltu))) {
        ++(vlSymsp->__Vcoverage[3832]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltu 
            = ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltu) 
               | (0x80000U & vlSelf->top__DOT__de__DOT__sltu));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__sltu 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltu))) {
        ++(vlSymsp->__Vcoverage[3833]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltu 
            = ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltu) 
               | (0x100000U & vlSelf->top__DOT__de__DOT__sltu));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__sltu 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltu))) {
        ++(vlSymsp->__Vcoverage[3834]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltu 
            = ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltu) 
               | (0x200000U & vlSelf->top__DOT__de__DOT__sltu));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__sltu 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltu))) {
        ++(vlSymsp->__Vcoverage[3835]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltu 
            = ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltu) 
               | (0x400000U & vlSelf->top__DOT__de__DOT__sltu));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__sltu 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltu))) {
        ++(vlSymsp->__Vcoverage[3836]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltu 
            = ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltu) 
               | (0x800000U & vlSelf->top__DOT__de__DOT__sltu));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__sltu 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltu))) {
        ++(vlSymsp->__Vcoverage[3837]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltu 
            = ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltu) 
               | (0x1000000U & vlSelf->top__DOT__de__DOT__sltu));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__sltu 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltu))) {
        ++(vlSymsp->__Vcoverage[3838]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltu 
            = ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltu) 
               | (0x2000000U & vlSelf->top__DOT__de__DOT__sltu));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__sltu 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltu))) {
        ++(vlSymsp->__Vcoverage[3839]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltu 
            = ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltu) 
               | (0x4000000U & vlSelf->top__DOT__de__DOT__sltu));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__sltu 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltu))) {
        ++(vlSymsp->__Vcoverage[3840]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltu 
            = ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltu) 
               | (0x8000000U & vlSelf->top__DOT__de__DOT__sltu));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__sltu 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltu))) {
        ++(vlSymsp->__Vcoverage[3841]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltu 
            = ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltu) 
               | (0x10000000U & vlSelf->top__DOT__de__DOT__sltu));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__sltu 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltu))) {
        ++(vlSymsp->__Vcoverage[3842]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltu 
            = ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltu) 
               | (0x20000000U & vlSelf->top__DOT__de__DOT__sltu));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__sltu 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltu))) {
        ++(vlSymsp->__Vcoverage[3843]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltu 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltu) 
               | (0x40000000U & vlSelf->top__DOT__de__DOT__sltu));
    }
    if (((vlSelf->top__DOT__de__DOT__sltu ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltu) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3844]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltu 
            = ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltu) 
               | (0x80000000U & vlSelf->top__DOT__de__DOT__sltu));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__slt ^ vlSelf->top__DOT__de__DOT____Vtogcov__slt))) {
        ++(vlSymsp->__Vcoverage[3845]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slt = 
            ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__slt) 
             | (1U & vlSelf->top__DOT__de__DOT__slt));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__slt ^ vlSelf->top__DOT__de__DOT____Vtogcov__slt))) {
        ++(vlSymsp->__Vcoverage[3846]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slt = 
            ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__slt) 
             | (2U & vlSelf->top__DOT__de__DOT__slt));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__slt ^ vlSelf->top__DOT__de__DOT____Vtogcov__slt))) {
        ++(vlSymsp->__Vcoverage[3847]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slt = 
            ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__slt) 
             | (4U & vlSelf->top__DOT__de__DOT__slt));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__slt ^ vlSelf->top__DOT__de__DOT____Vtogcov__slt))) {
        ++(vlSymsp->__Vcoverage[3848]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slt = 
            ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__slt) 
             | (8U & vlSelf->top__DOT__de__DOT__slt));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__slt ^ vlSelf->top__DOT__de__DOT____Vtogcov__slt))) {
        ++(vlSymsp->__Vcoverage[3849]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slt = 
            ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__slt) 
             | (0x10U & vlSelf->top__DOT__de__DOT__slt));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__slt ^ vlSelf->top__DOT__de__DOT____Vtogcov__slt))) {
        ++(vlSymsp->__Vcoverage[3850]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slt = 
            ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__slt) 
             | (0x20U & vlSelf->top__DOT__de__DOT__slt));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__slt ^ vlSelf->top__DOT__de__DOT____Vtogcov__slt))) {
        ++(vlSymsp->__Vcoverage[3851]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slt = 
            ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__slt) 
             | (0x40U & vlSelf->top__DOT__de__DOT__slt));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__slt ^ vlSelf->top__DOT__de__DOT____Vtogcov__slt))) {
        ++(vlSymsp->__Vcoverage[3852]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slt = 
            ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__slt) 
             | (0x80U & vlSelf->top__DOT__de__DOT__slt));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__slt ^ vlSelf->top__DOT__de__DOT____Vtogcov__slt))) {
        ++(vlSymsp->__Vcoverage[3853]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slt = 
            ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__slt) 
             | (0x100U & vlSelf->top__DOT__de__DOT__slt));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__slt ^ vlSelf->top__DOT__de__DOT____Vtogcov__slt))) {
        ++(vlSymsp->__Vcoverage[3854]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slt = 
            ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__slt) 
             | (0x200U & vlSelf->top__DOT__de__DOT__slt));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__slt ^ vlSelf->top__DOT__de__DOT____Vtogcov__slt))) {
        ++(vlSymsp->__Vcoverage[3855]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slt = 
            ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__slt) 
             | (0x400U & vlSelf->top__DOT__de__DOT__slt));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__slt ^ vlSelf->top__DOT__de__DOT____Vtogcov__slt))) {
        ++(vlSymsp->__Vcoverage[3856]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slt = 
            ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__slt) 
             | (0x800U & vlSelf->top__DOT__de__DOT__slt));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__slt 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__slt))) {
        ++(vlSymsp->__Vcoverage[3857]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slt = 
            ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__slt) 
             | (0x1000U & vlSelf->top__DOT__de__DOT__slt));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__slt 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__slt))) {
        ++(vlSymsp->__Vcoverage[3858]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slt = 
            ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__slt) 
             | (0x2000U & vlSelf->top__DOT__de__DOT__slt));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__slt 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__slt))) {
        ++(vlSymsp->__Vcoverage[3859]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slt = 
            ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__slt) 
             | (0x4000U & vlSelf->top__DOT__de__DOT__slt));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__slt 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__slt))) {
        ++(vlSymsp->__Vcoverage[3860]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slt = 
            ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__slt) 
             | (0x8000U & vlSelf->top__DOT__de__DOT__slt));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__slt 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__slt))) {
        ++(vlSymsp->__Vcoverage[3861]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slt = 
            ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slt) 
             | (0x10000U & vlSelf->top__DOT__de__DOT__slt));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__slt 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__slt))) {
        ++(vlSymsp->__Vcoverage[3862]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slt = 
            ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slt) 
             | (0x20000U & vlSelf->top__DOT__de__DOT__slt));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__slt 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__slt))) {
        ++(vlSymsp->__Vcoverage[3863]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slt = 
            ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slt) 
             | (0x40000U & vlSelf->top__DOT__de__DOT__slt));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__slt 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__slt))) {
        ++(vlSymsp->__Vcoverage[3864]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slt = 
            ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slt) 
             | (0x80000U & vlSelf->top__DOT__de__DOT__slt));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__slt 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__slt))) {
        ++(vlSymsp->__Vcoverage[3865]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slt = 
            ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slt) 
             | (0x100000U & vlSelf->top__DOT__de__DOT__slt));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__slt 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__slt))) {
        ++(vlSymsp->__Vcoverage[3866]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slt = 
            ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slt) 
             | (0x200000U & vlSelf->top__DOT__de__DOT__slt));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__slt 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__slt))) {
        ++(vlSymsp->__Vcoverage[3867]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slt = 
            ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slt) 
             | (0x400000U & vlSelf->top__DOT__de__DOT__slt));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__slt 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__slt))) {
        ++(vlSymsp->__Vcoverage[3868]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slt = 
            ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slt) 
             | (0x800000U & vlSelf->top__DOT__de__DOT__slt));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__slt 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__slt))) {
        ++(vlSymsp->__Vcoverage[3869]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slt = 
            ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slt) 
             | (0x1000000U & vlSelf->top__DOT__de__DOT__slt));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__slt 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__slt))) {
        ++(vlSymsp->__Vcoverage[3870]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slt = 
            ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slt) 
             | (0x2000000U & vlSelf->top__DOT__de__DOT__slt));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__slt 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__slt))) {
        ++(vlSymsp->__Vcoverage[3871]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slt = 
            ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slt) 
             | (0x4000000U & vlSelf->top__DOT__de__DOT__slt));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__slt 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__slt))) {
        ++(vlSymsp->__Vcoverage[3872]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slt = 
            ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slt) 
             | (0x8000000U & vlSelf->top__DOT__de__DOT__slt));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__slt 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__slt))) {
        ++(vlSymsp->__Vcoverage[3873]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slt = 
            ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slt) 
             | (0x10000000U & vlSelf->top__DOT__de__DOT__slt));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__slt 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__slt))) {
        ++(vlSymsp->__Vcoverage[3874]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slt = 
            ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slt) 
             | (0x20000000U & vlSelf->top__DOT__de__DOT__slt));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__slt 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__slt))) {
        ++(vlSymsp->__Vcoverage[3875]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slt = 
            ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slt) 
             | (0x40000000U & vlSelf->top__DOT__de__DOT__slt));
    }
    if (((vlSelf->top__DOT__de__DOT__slt ^ vlSelf->top__DOT__de__DOT____Vtogcov__slt) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3876]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slt = 
            ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slt) 
             | (0x80000000U & vlSelf->top__DOT__de__DOT__slt));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__sub ^ vlSelf->top__DOT__de__DOT____Vtogcov__sub))) {
        ++(vlSymsp->__Vcoverage[3877]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sub = 
            ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__sub) 
             | (1U & vlSelf->top__DOT__de__DOT__sub));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__sub ^ vlSelf->top__DOT__de__DOT____Vtogcov__sub))) {
        ++(vlSymsp->__Vcoverage[3878]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sub = 
            ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__sub) 
             | (2U & vlSelf->top__DOT__de__DOT__sub));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__sub ^ vlSelf->top__DOT__de__DOT____Vtogcov__sub))) {
        ++(vlSymsp->__Vcoverage[3879]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sub = 
            ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__sub) 
             | (4U & vlSelf->top__DOT__de__DOT__sub));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__sub ^ vlSelf->top__DOT__de__DOT____Vtogcov__sub))) {
        ++(vlSymsp->__Vcoverage[3880]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sub = 
            ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__sub) 
             | (8U & vlSelf->top__DOT__de__DOT__sub));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__sub ^ vlSelf->top__DOT__de__DOT____Vtogcov__sub))) {
        ++(vlSymsp->__Vcoverage[3881]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sub = 
            ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__sub) 
             | (0x10U & vlSelf->top__DOT__de__DOT__sub));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__sub ^ vlSelf->top__DOT__de__DOT____Vtogcov__sub))) {
        ++(vlSymsp->__Vcoverage[3882]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sub = 
            ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__sub) 
             | (0x20U & vlSelf->top__DOT__de__DOT__sub));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__sub ^ vlSelf->top__DOT__de__DOT____Vtogcov__sub))) {
        ++(vlSymsp->__Vcoverage[3883]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sub = 
            ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__sub) 
             | (0x40U & vlSelf->top__DOT__de__DOT__sub));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__sub ^ vlSelf->top__DOT__de__DOT____Vtogcov__sub))) {
        ++(vlSymsp->__Vcoverage[3884]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sub = 
            ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__sub) 
             | (0x80U & vlSelf->top__DOT__de__DOT__sub));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__sub ^ vlSelf->top__DOT__de__DOT____Vtogcov__sub))) {
        ++(vlSymsp->__Vcoverage[3885]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sub = 
            ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__sub) 
             | (0x100U & vlSelf->top__DOT__de__DOT__sub));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__sub ^ vlSelf->top__DOT__de__DOT____Vtogcov__sub))) {
        ++(vlSymsp->__Vcoverage[3886]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sub = 
            ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__sub) 
             | (0x200U & vlSelf->top__DOT__de__DOT__sub));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__sub ^ vlSelf->top__DOT__de__DOT____Vtogcov__sub))) {
        ++(vlSymsp->__Vcoverage[3887]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sub = 
            ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__sub) 
             | (0x400U & vlSelf->top__DOT__de__DOT__sub));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__sub ^ vlSelf->top__DOT__de__DOT____Vtogcov__sub))) {
        ++(vlSymsp->__Vcoverage[3888]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sub = 
            ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__sub) 
             | (0x800U & vlSelf->top__DOT__de__DOT__sub));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__sub 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__sub))) {
        ++(vlSymsp->__Vcoverage[3889]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sub = 
            ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__sub) 
             | (0x1000U & vlSelf->top__DOT__de__DOT__sub));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__sub 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__sub))) {
        ++(vlSymsp->__Vcoverage[3890]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sub = 
            ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__sub) 
             | (0x2000U & vlSelf->top__DOT__de__DOT__sub));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__sub 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__sub))) {
        ++(vlSymsp->__Vcoverage[3891]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sub = 
            ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__sub) 
             | (0x4000U & vlSelf->top__DOT__de__DOT__sub));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__sub 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__sub))) {
        ++(vlSymsp->__Vcoverage[3892]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sub = 
            ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__sub) 
             | (0x8000U & vlSelf->top__DOT__de__DOT__sub));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__sub 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sub))) {
        ++(vlSymsp->__Vcoverage[3893]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sub = 
            ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sub) 
             | (0x10000U & vlSelf->top__DOT__de__DOT__sub));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__sub 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sub))) {
        ++(vlSymsp->__Vcoverage[3894]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sub = 
            ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sub) 
             | (0x20000U & vlSelf->top__DOT__de__DOT__sub));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__sub 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sub))) {
        ++(vlSymsp->__Vcoverage[3895]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sub = 
            ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sub) 
             | (0x40000U & vlSelf->top__DOT__de__DOT__sub));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__sub 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sub))) {
        ++(vlSymsp->__Vcoverage[3896]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sub = 
            ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sub) 
             | (0x80000U & vlSelf->top__DOT__de__DOT__sub));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__sub 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sub))) {
        ++(vlSymsp->__Vcoverage[3897]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sub = 
            ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sub) 
             | (0x100000U & vlSelf->top__DOT__de__DOT__sub));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__sub 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sub))) {
        ++(vlSymsp->__Vcoverage[3898]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sub = 
            ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sub) 
             | (0x200000U & vlSelf->top__DOT__de__DOT__sub));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__sub 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sub))) {
        ++(vlSymsp->__Vcoverage[3899]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sub = 
            ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sub) 
             | (0x400000U & vlSelf->top__DOT__de__DOT__sub));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__sub 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sub))) {
        ++(vlSymsp->__Vcoverage[3900]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sub = 
            ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sub) 
             | (0x800000U & vlSelf->top__DOT__de__DOT__sub));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__sub 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sub))) {
        ++(vlSymsp->__Vcoverage[3901]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sub = 
            ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sub) 
             | (0x1000000U & vlSelf->top__DOT__de__DOT__sub));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__sub 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sub))) {
        ++(vlSymsp->__Vcoverage[3902]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sub = 
            ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sub) 
             | (0x2000000U & vlSelf->top__DOT__de__DOT__sub));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__sub 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sub))) {
        ++(vlSymsp->__Vcoverage[3903]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sub = 
            ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sub) 
             | (0x4000000U & vlSelf->top__DOT__de__DOT__sub));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__sub 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sub))) {
        ++(vlSymsp->__Vcoverage[3904]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sub = 
            ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sub) 
             | (0x8000000U & vlSelf->top__DOT__de__DOT__sub));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__sub 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__sub))) {
        ++(vlSymsp->__Vcoverage[3905]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sub = 
            ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sub) 
             | (0x10000000U & vlSelf->top__DOT__de__DOT__sub));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__sub 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__sub))) {
        ++(vlSymsp->__Vcoverage[3906]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sub = 
            ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sub) 
             | (0x20000000U & vlSelf->top__DOT__de__DOT__sub));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__sub 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__sub))) {
        ++(vlSymsp->__Vcoverage[3907]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sub = 
            ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sub) 
             | (0x40000000U & vlSelf->top__DOT__de__DOT__sub));
    }
    if (((vlSelf->top__DOT__de__DOT__sub ^ vlSelf->top__DOT__de__DOT____Vtogcov__sub) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3908]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sub = 
            ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sub) 
             | (0x80000000U & vlSelf->top__DOT__de__DOT__sub));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__sltiu ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltiu))) {
        ++(vlSymsp->__Vcoverage[3909]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltiu 
            = ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__sltiu) 
               | (1U & vlSelf->top__DOT__de__DOT__sltiu));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__sltiu ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltiu))) {
        ++(vlSymsp->__Vcoverage[3910]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltiu 
            = ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__sltiu) 
               | (2U & vlSelf->top__DOT__de__DOT__sltiu));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__sltiu ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltiu))) {
        ++(vlSymsp->__Vcoverage[3911]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltiu 
            = ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__sltiu) 
               | (4U & vlSelf->top__DOT__de__DOT__sltiu));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__sltiu ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltiu))) {
        ++(vlSymsp->__Vcoverage[3912]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltiu 
            = ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__sltiu) 
               | (8U & vlSelf->top__DOT__de__DOT__sltiu));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__sltiu 
                  ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltiu))) {
        ++(vlSymsp->__Vcoverage[3913]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltiu 
            = ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__sltiu) 
               | (0x10U & vlSelf->top__DOT__de__DOT__sltiu));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__sltiu 
                  ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltiu))) {
        ++(vlSymsp->__Vcoverage[3914]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltiu 
            = ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__sltiu) 
               | (0x20U & vlSelf->top__DOT__de__DOT__sltiu));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__sltiu 
                  ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltiu))) {
        ++(vlSymsp->__Vcoverage[3915]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltiu 
            = ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__sltiu) 
               | (0x40U & vlSelf->top__DOT__de__DOT__sltiu));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__sltiu 
                  ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltiu))) {
        ++(vlSymsp->__Vcoverage[3916]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltiu 
            = ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__sltiu) 
               | (0x80U & vlSelf->top__DOT__de__DOT__sltiu));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__sltiu 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltiu))) {
        ++(vlSymsp->__Vcoverage[3917]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltiu 
            = ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltiu) 
               | (0x100U & vlSelf->top__DOT__de__DOT__sltiu));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__sltiu 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltiu))) {
        ++(vlSymsp->__Vcoverage[3918]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltiu 
            = ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltiu) 
               | (0x200U & vlSelf->top__DOT__de__DOT__sltiu));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__sltiu 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltiu))) {
        ++(vlSymsp->__Vcoverage[3919]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltiu 
            = ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltiu) 
               | (0x400U & vlSelf->top__DOT__de__DOT__sltiu));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__sltiu 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltiu))) {
        ++(vlSymsp->__Vcoverage[3920]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltiu 
            = ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltiu) 
               | (0x800U & vlSelf->top__DOT__de__DOT__sltiu));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__sltiu 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltiu))) {
        ++(vlSymsp->__Vcoverage[3921]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltiu 
            = ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltiu) 
               | (0x1000U & vlSelf->top__DOT__de__DOT__sltiu));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__sltiu 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltiu))) {
        ++(vlSymsp->__Vcoverage[3922]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltiu 
            = ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltiu) 
               | (0x2000U & vlSelf->top__DOT__de__DOT__sltiu));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__sltiu 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltiu))) {
        ++(vlSymsp->__Vcoverage[3923]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltiu 
            = ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltiu) 
               | (0x4000U & vlSelf->top__DOT__de__DOT__sltiu));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__sltiu 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltiu))) {
        ++(vlSymsp->__Vcoverage[3924]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltiu 
            = ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltiu) 
               | (0x8000U & vlSelf->top__DOT__de__DOT__sltiu));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__sltiu 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltiu))) {
        ++(vlSymsp->__Vcoverage[3925]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltiu 
            = ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltiu) 
               | (0x10000U & vlSelf->top__DOT__de__DOT__sltiu));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__sltiu 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltiu))) {
        ++(vlSymsp->__Vcoverage[3926]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltiu 
            = ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltiu) 
               | (0x20000U & vlSelf->top__DOT__de__DOT__sltiu));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__sltiu 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltiu))) {
        ++(vlSymsp->__Vcoverage[3927]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltiu 
            = ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltiu) 
               | (0x40000U & vlSelf->top__DOT__de__DOT__sltiu));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__sltiu 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltiu))) {
        ++(vlSymsp->__Vcoverage[3928]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltiu 
            = ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltiu) 
               | (0x80000U & vlSelf->top__DOT__de__DOT__sltiu));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__sltiu 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltiu))) {
        ++(vlSymsp->__Vcoverage[3929]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltiu 
            = ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltiu) 
               | (0x100000U & vlSelf->top__DOT__de__DOT__sltiu));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__sltiu 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltiu))) {
        ++(vlSymsp->__Vcoverage[3930]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltiu 
            = ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltiu) 
               | (0x200000U & vlSelf->top__DOT__de__DOT__sltiu));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__sltiu 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltiu))) {
        ++(vlSymsp->__Vcoverage[3931]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltiu 
            = ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltiu) 
               | (0x400000U & vlSelf->top__DOT__de__DOT__sltiu));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__sltiu 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltiu))) {
        ++(vlSymsp->__Vcoverage[3932]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltiu 
            = ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltiu) 
               | (0x800000U & vlSelf->top__DOT__de__DOT__sltiu));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__sltiu 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltiu))) {
        ++(vlSymsp->__Vcoverage[3933]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltiu 
            = ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltiu) 
               | (0x1000000U & vlSelf->top__DOT__de__DOT__sltiu));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__sltiu 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltiu))) {
        ++(vlSymsp->__Vcoverage[3934]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltiu 
            = ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltiu) 
               | (0x2000000U & vlSelf->top__DOT__de__DOT__sltiu));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__sltiu 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltiu))) {
        ++(vlSymsp->__Vcoverage[3935]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltiu 
            = ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltiu) 
               | (0x4000000U & vlSelf->top__DOT__de__DOT__sltiu));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__sltiu 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltiu))) {
        ++(vlSymsp->__Vcoverage[3936]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltiu 
            = ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltiu) 
               | (0x8000000U & vlSelf->top__DOT__de__DOT__sltiu));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__sltiu 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltiu))) {
        ++(vlSymsp->__Vcoverage[3937]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltiu 
            = ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltiu) 
               | (0x10000000U & vlSelf->top__DOT__de__DOT__sltiu));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__sltiu 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltiu))) {
        ++(vlSymsp->__Vcoverage[3938]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltiu 
            = ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltiu) 
               | (0x20000000U & vlSelf->top__DOT__de__DOT__sltiu));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__sltiu 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltiu))) {
        ++(vlSymsp->__Vcoverage[3939]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltiu 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltiu) 
               | (0x40000000U & vlSelf->top__DOT__de__DOT__sltiu));
    }
    if (((vlSelf->top__DOT__de__DOT__sltiu ^ vlSelf->top__DOT__de__DOT____Vtogcov__sltiu) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3940]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sltiu 
            = ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sltiu) 
               | (0x80000000U & vlSelf->top__DOT__de__DOT__sltiu));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__srai ^ vlSelf->top__DOT__de__DOT____Vtogcov__srai))) {
        ++(vlSymsp->__Vcoverage[3941]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srai 
            = ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__srai) 
               | (1U & vlSelf->top__DOT__de__DOT__srai));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__srai ^ vlSelf->top__DOT__de__DOT____Vtogcov__srai))) {
        ++(vlSymsp->__Vcoverage[3942]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srai 
            = ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__srai) 
               | (2U & vlSelf->top__DOT__de__DOT__srai));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__srai ^ vlSelf->top__DOT__de__DOT____Vtogcov__srai))) {
        ++(vlSymsp->__Vcoverage[3943]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srai 
            = ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__srai) 
               | (4U & vlSelf->top__DOT__de__DOT__srai));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__srai ^ vlSelf->top__DOT__de__DOT____Vtogcov__srai))) {
        ++(vlSymsp->__Vcoverage[3944]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srai 
            = ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__srai) 
               | (8U & vlSelf->top__DOT__de__DOT__srai));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__srai ^ vlSelf->top__DOT__de__DOT____Vtogcov__srai))) {
        ++(vlSymsp->__Vcoverage[3945]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srai 
            = ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__srai) 
               | (0x10U & vlSelf->top__DOT__de__DOT__srai));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__srai ^ vlSelf->top__DOT__de__DOT____Vtogcov__srai))) {
        ++(vlSymsp->__Vcoverage[3946]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srai 
            = ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__srai) 
               | (0x20U & vlSelf->top__DOT__de__DOT__srai));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__srai ^ vlSelf->top__DOT__de__DOT____Vtogcov__srai))) {
        ++(vlSymsp->__Vcoverage[3947]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srai 
            = ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__srai) 
               | (0x40U & vlSelf->top__DOT__de__DOT__srai));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__srai ^ vlSelf->top__DOT__de__DOT____Vtogcov__srai))) {
        ++(vlSymsp->__Vcoverage[3948]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srai 
            = ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__srai) 
               | (0x80U & vlSelf->top__DOT__de__DOT__srai));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__srai 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__srai))) {
        ++(vlSymsp->__Vcoverage[3949]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srai 
            = ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__srai) 
               | (0x100U & vlSelf->top__DOT__de__DOT__srai));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__srai 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__srai))) {
        ++(vlSymsp->__Vcoverage[3950]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srai 
            = ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__srai) 
               | (0x200U & vlSelf->top__DOT__de__DOT__srai));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__srai 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__srai))) {
        ++(vlSymsp->__Vcoverage[3951]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srai 
            = ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__srai) 
               | (0x400U & vlSelf->top__DOT__de__DOT__srai));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__srai 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__srai))) {
        ++(vlSymsp->__Vcoverage[3952]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srai 
            = ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__srai) 
               | (0x800U & vlSelf->top__DOT__de__DOT__srai));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__srai 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__srai))) {
        ++(vlSymsp->__Vcoverage[3953]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srai 
            = ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__srai) 
               | (0x1000U & vlSelf->top__DOT__de__DOT__srai));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__srai 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__srai))) {
        ++(vlSymsp->__Vcoverage[3954]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srai 
            = ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__srai) 
               | (0x2000U & vlSelf->top__DOT__de__DOT__srai));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__srai 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__srai))) {
        ++(vlSymsp->__Vcoverage[3955]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srai 
            = ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__srai) 
               | (0x4000U & vlSelf->top__DOT__de__DOT__srai));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__srai 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__srai))) {
        ++(vlSymsp->__Vcoverage[3956]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srai 
            = ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__srai) 
               | (0x8000U & vlSelf->top__DOT__de__DOT__srai));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__srai 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__srai))) {
        ++(vlSymsp->__Vcoverage[3957]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srai 
            = ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srai) 
               | (0x10000U & vlSelf->top__DOT__de__DOT__srai));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__srai 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__srai))) {
        ++(vlSymsp->__Vcoverage[3958]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srai 
            = ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srai) 
               | (0x20000U & vlSelf->top__DOT__de__DOT__srai));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__srai 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__srai))) {
        ++(vlSymsp->__Vcoverage[3959]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srai 
            = ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srai) 
               | (0x40000U & vlSelf->top__DOT__de__DOT__srai));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__srai 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__srai))) {
        ++(vlSymsp->__Vcoverage[3960]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srai 
            = ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srai) 
               | (0x80000U & vlSelf->top__DOT__de__DOT__srai));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__srai 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__srai))) {
        ++(vlSymsp->__Vcoverage[3961]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srai 
            = ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srai) 
               | (0x100000U & vlSelf->top__DOT__de__DOT__srai));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__srai 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__srai))) {
        ++(vlSymsp->__Vcoverage[3962]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srai 
            = ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srai) 
               | (0x200000U & vlSelf->top__DOT__de__DOT__srai));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__srai 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__srai))) {
        ++(vlSymsp->__Vcoverage[3963]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srai 
            = ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srai) 
               | (0x400000U & vlSelf->top__DOT__de__DOT__srai));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__srai 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__srai))) {
        ++(vlSymsp->__Vcoverage[3964]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srai 
            = ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srai) 
               | (0x800000U & vlSelf->top__DOT__de__DOT__srai));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__srai 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__srai))) {
        ++(vlSymsp->__Vcoverage[3965]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srai 
            = ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srai) 
               | (0x1000000U & vlSelf->top__DOT__de__DOT__srai));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__srai 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__srai))) {
        ++(vlSymsp->__Vcoverage[3966]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srai 
            = ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srai) 
               | (0x2000000U & vlSelf->top__DOT__de__DOT__srai));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__srai 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__srai))) {
        ++(vlSymsp->__Vcoverage[3967]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srai 
            = ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srai) 
               | (0x4000000U & vlSelf->top__DOT__de__DOT__srai));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__srai 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__srai))) {
        ++(vlSymsp->__Vcoverage[3968]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srai 
            = ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srai) 
               | (0x8000000U & vlSelf->top__DOT__de__DOT__srai));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__srai 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__srai))) {
        ++(vlSymsp->__Vcoverage[3969]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srai 
            = ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srai) 
               | (0x10000000U & vlSelf->top__DOT__de__DOT__srai));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__srai 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__srai))) {
        ++(vlSymsp->__Vcoverage[3970]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srai 
            = ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srai) 
               | (0x20000000U & vlSelf->top__DOT__de__DOT__srai));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__srai 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__srai))) {
        ++(vlSymsp->__Vcoverage[3971]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srai 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srai) 
               | (0x40000000U & vlSelf->top__DOT__de__DOT__srai));
    }
    if (((vlSelf->top__DOT__de__DOT__srai ^ vlSelf->top__DOT__de__DOT____Vtogcov__srai) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3972]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srai 
            = ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srai) 
               | (0x80000000U & vlSelf->top__DOT__de__DOT__srai));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__slli ^ vlSelf->top__DOT__de__DOT____Vtogcov__slli))) {
        ++(vlSymsp->__Vcoverage[3973]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slli 
            = ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__slli) 
               | (1U & vlSelf->top__DOT__de__DOT__slli));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__slli ^ vlSelf->top__DOT__de__DOT____Vtogcov__slli))) {
        ++(vlSymsp->__Vcoverage[3974]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slli 
            = ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__slli) 
               | (2U & vlSelf->top__DOT__de__DOT__slli));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__slli ^ vlSelf->top__DOT__de__DOT____Vtogcov__slli))) {
        ++(vlSymsp->__Vcoverage[3975]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slli 
            = ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__slli) 
               | (4U & vlSelf->top__DOT__de__DOT__slli));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__slli ^ vlSelf->top__DOT__de__DOT____Vtogcov__slli))) {
        ++(vlSymsp->__Vcoverage[3976]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slli 
            = ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__slli) 
               | (8U & vlSelf->top__DOT__de__DOT__slli));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__slli ^ vlSelf->top__DOT__de__DOT____Vtogcov__slli))) {
        ++(vlSymsp->__Vcoverage[3977]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slli 
            = ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__slli) 
               | (0x10U & vlSelf->top__DOT__de__DOT__slli));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__slli ^ vlSelf->top__DOT__de__DOT____Vtogcov__slli))) {
        ++(vlSymsp->__Vcoverage[3978]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slli 
            = ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__slli) 
               | (0x20U & vlSelf->top__DOT__de__DOT__slli));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__slli ^ vlSelf->top__DOT__de__DOT____Vtogcov__slli))) {
        ++(vlSymsp->__Vcoverage[3979]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slli 
            = ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__slli) 
               | (0x40U & vlSelf->top__DOT__de__DOT__slli));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__slli ^ vlSelf->top__DOT__de__DOT____Vtogcov__slli))) {
        ++(vlSymsp->__Vcoverage[3980]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slli 
            = ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__slli) 
               | (0x80U & vlSelf->top__DOT__de__DOT__slli));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__slli 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__slli))) {
        ++(vlSymsp->__Vcoverage[3981]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slli 
            = ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__slli) 
               | (0x100U & vlSelf->top__DOT__de__DOT__slli));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__slli 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__slli))) {
        ++(vlSymsp->__Vcoverage[3982]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slli 
            = ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__slli) 
               | (0x200U & vlSelf->top__DOT__de__DOT__slli));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__slli 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__slli))) {
        ++(vlSymsp->__Vcoverage[3983]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slli 
            = ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__slli) 
               | (0x400U & vlSelf->top__DOT__de__DOT__slli));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__slli 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__slli))) {
        ++(vlSymsp->__Vcoverage[3984]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slli 
            = ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__slli) 
               | (0x800U & vlSelf->top__DOT__de__DOT__slli));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__slli 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__slli))) {
        ++(vlSymsp->__Vcoverage[3985]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slli 
            = ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__slli) 
               | (0x1000U & vlSelf->top__DOT__de__DOT__slli));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__slli 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__slli))) {
        ++(vlSymsp->__Vcoverage[3986]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slli 
            = ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__slli) 
               | (0x2000U & vlSelf->top__DOT__de__DOT__slli));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__slli 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__slli))) {
        ++(vlSymsp->__Vcoverage[3987]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slli 
            = ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__slli) 
               | (0x4000U & vlSelf->top__DOT__de__DOT__slli));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__slli 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__slli))) {
        ++(vlSymsp->__Vcoverage[3988]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slli 
            = ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__slli) 
               | (0x8000U & vlSelf->top__DOT__de__DOT__slli));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__slli 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__slli))) {
        ++(vlSymsp->__Vcoverage[3989]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slli 
            = ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slli) 
               | (0x10000U & vlSelf->top__DOT__de__DOT__slli));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__slli 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__slli))) {
        ++(vlSymsp->__Vcoverage[3990]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slli 
            = ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slli) 
               | (0x20000U & vlSelf->top__DOT__de__DOT__slli));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__slli 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__slli))) {
        ++(vlSymsp->__Vcoverage[3991]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slli 
            = ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slli) 
               | (0x40000U & vlSelf->top__DOT__de__DOT__slli));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__slli 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__slli))) {
        ++(vlSymsp->__Vcoverage[3992]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slli 
            = ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slli) 
               | (0x80000U & vlSelf->top__DOT__de__DOT__slli));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__slli 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__slli))) {
        ++(vlSymsp->__Vcoverage[3993]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slli 
            = ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slli) 
               | (0x100000U & vlSelf->top__DOT__de__DOT__slli));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__slli 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__slli))) {
        ++(vlSymsp->__Vcoverage[3994]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slli 
            = ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slli) 
               | (0x200000U & vlSelf->top__DOT__de__DOT__slli));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__slli 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__slli))) {
        ++(vlSymsp->__Vcoverage[3995]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slli 
            = ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slli) 
               | (0x400000U & vlSelf->top__DOT__de__DOT__slli));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__slli 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__slli))) {
        ++(vlSymsp->__Vcoverage[3996]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slli 
            = ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slli) 
               | (0x800000U & vlSelf->top__DOT__de__DOT__slli));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__slli 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__slli))) {
        ++(vlSymsp->__Vcoverage[3997]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slli 
            = ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slli) 
               | (0x1000000U & vlSelf->top__DOT__de__DOT__slli));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__slli 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__slli))) {
        ++(vlSymsp->__Vcoverage[3998]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slli 
            = ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slli) 
               | (0x2000000U & vlSelf->top__DOT__de__DOT__slli));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__slli 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__slli))) {
        ++(vlSymsp->__Vcoverage[3999]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slli 
            = ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slli) 
               | (0x4000000U & vlSelf->top__DOT__de__DOT__slli));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__slli 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__slli))) {
        ++(vlSymsp->__Vcoverage[4000]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slli 
            = ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slli) 
               | (0x8000000U & vlSelf->top__DOT__de__DOT__slli));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__slli 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__slli))) {
        ++(vlSymsp->__Vcoverage[4001]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slli 
            = ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slli) 
               | (0x10000000U & vlSelf->top__DOT__de__DOT__slli));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__slli 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__slli))) {
        ++(vlSymsp->__Vcoverage[4002]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slli 
            = ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slli) 
               | (0x20000000U & vlSelf->top__DOT__de__DOT__slli));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__slli 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__slli))) {
        ++(vlSymsp->__Vcoverage[4003]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slli 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slli) 
               | (0x40000000U & vlSelf->top__DOT__de__DOT__slli));
    }
    if (((vlSelf->top__DOT__de__DOT__slli ^ vlSelf->top__DOT__de__DOT____Vtogcov__slli) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[4004]);
        vlSelf->top__DOT__de__DOT____Vtogcov__slli 
            = ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__slli) 
               | (0x80000000U & vlSelf->top__DOT__de__DOT__slli));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__srli ^ vlSelf->top__DOT__de__DOT____Vtogcov__srli))) {
        ++(vlSymsp->__Vcoverage[4005]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srli 
            = ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__srli) 
               | (1U & vlSelf->top__DOT__de__DOT__srli));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__srli ^ vlSelf->top__DOT__de__DOT____Vtogcov__srli))) {
        ++(vlSymsp->__Vcoverage[4006]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srli 
            = ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__srli) 
               | (2U & vlSelf->top__DOT__de__DOT__srli));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__srli ^ vlSelf->top__DOT__de__DOT____Vtogcov__srli))) {
        ++(vlSymsp->__Vcoverage[4007]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srli 
            = ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__srli) 
               | (4U & vlSelf->top__DOT__de__DOT__srli));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__srli ^ vlSelf->top__DOT__de__DOT____Vtogcov__srli))) {
        ++(vlSymsp->__Vcoverage[4008]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srli 
            = ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__srli) 
               | (8U & vlSelf->top__DOT__de__DOT__srli));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__srli ^ vlSelf->top__DOT__de__DOT____Vtogcov__srli))) {
        ++(vlSymsp->__Vcoverage[4009]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srli 
            = ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__srli) 
               | (0x10U & vlSelf->top__DOT__de__DOT__srli));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__srli ^ vlSelf->top__DOT__de__DOT____Vtogcov__srli))) {
        ++(vlSymsp->__Vcoverage[4010]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srli 
            = ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__srli) 
               | (0x20U & vlSelf->top__DOT__de__DOT__srli));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__srli ^ vlSelf->top__DOT__de__DOT____Vtogcov__srli))) {
        ++(vlSymsp->__Vcoverage[4011]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srli 
            = ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__srli) 
               | (0x40U & vlSelf->top__DOT__de__DOT__srli));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__srli ^ vlSelf->top__DOT__de__DOT____Vtogcov__srli))) {
        ++(vlSymsp->__Vcoverage[4012]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srli 
            = ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__srli) 
               | (0x80U & vlSelf->top__DOT__de__DOT__srli));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__srli 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__srli))) {
        ++(vlSymsp->__Vcoverage[4013]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srli 
            = ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__srli) 
               | (0x100U & vlSelf->top__DOT__de__DOT__srli));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__srli 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__srli))) {
        ++(vlSymsp->__Vcoverage[4014]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srli 
            = ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__srli) 
               | (0x200U & vlSelf->top__DOT__de__DOT__srli));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__srli 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__srli))) {
        ++(vlSymsp->__Vcoverage[4015]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srli 
            = ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__srli) 
               | (0x400U & vlSelf->top__DOT__de__DOT__srli));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__srli 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__srli))) {
        ++(vlSymsp->__Vcoverage[4016]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srli 
            = ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__srli) 
               | (0x800U & vlSelf->top__DOT__de__DOT__srli));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__srli 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__srli))) {
        ++(vlSymsp->__Vcoverage[4017]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srli 
            = ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__srli) 
               | (0x1000U & vlSelf->top__DOT__de__DOT__srli));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__srli 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__srli))) {
        ++(vlSymsp->__Vcoverage[4018]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srli 
            = ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__srli) 
               | (0x2000U & vlSelf->top__DOT__de__DOT__srli));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__srli 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__srli))) {
        ++(vlSymsp->__Vcoverage[4019]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srli 
            = ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__srli) 
               | (0x4000U & vlSelf->top__DOT__de__DOT__srli));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__srli 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__srli))) {
        ++(vlSymsp->__Vcoverage[4020]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srli 
            = ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__srli) 
               | (0x8000U & vlSelf->top__DOT__de__DOT__srli));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__srli 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__srli))) {
        ++(vlSymsp->__Vcoverage[4021]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srli 
            = ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srli) 
               | (0x10000U & vlSelf->top__DOT__de__DOT__srli));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__srli 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__srli))) {
        ++(vlSymsp->__Vcoverage[4022]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srli 
            = ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srli) 
               | (0x20000U & vlSelf->top__DOT__de__DOT__srli));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__srli 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__srli))) {
        ++(vlSymsp->__Vcoverage[4023]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srli 
            = ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srli) 
               | (0x40000U & vlSelf->top__DOT__de__DOT__srli));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__srli 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__srli))) {
        ++(vlSymsp->__Vcoverage[4024]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srli 
            = ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srli) 
               | (0x80000U & vlSelf->top__DOT__de__DOT__srli));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__srli 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__srli))) {
        ++(vlSymsp->__Vcoverage[4025]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srli 
            = ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srli) 
               | (0x100000U & vlSelf->top__DOT__de__DOT__srli));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__srli 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__srli))) {
        ++(vlSymsp->__Vcoverage[4026]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srli 
            = ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srli) 
               | (0x200000U & vlSelf->top__DOT__de__DOT__srli));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__srli 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__srli))) {
        ++(vlSymsp->__Vcoverage[4027]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srli 
            = ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srli) 
               | (0x400000U & vlSelf->top__DOT__de__DOT__srli));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__srli 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__srli))) {
        ++(vlSymsp->__Vcoverage[4028]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srli 
            = ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srli) 
               | (0x800000U & vlSelf->top__DOT__de__DOT__srli));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__srli 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__srli))) {
        ++(vlSymsp->__Vcoverage[4029]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srli 
            = ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srli) 
               | (0x1000000U & vlSelf->top__DOT__de__DOT__srli));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__srli 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__srli))) {
        ++(vlSymsp->__Vcoverage[4030]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srli 
            = ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srli) 
               | (0x2000000U & vlSelf->top__DOT__de__DOT__srli));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__srli 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__srli))) {
        ++(vlSymsp->__Vcoverage[4031]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srli 
            = ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srli) 
               | (0x4000000U & vlSelf->top__DOT__de__DOT__srli));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__srli 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__srli))) {
        ++(vlSymsp->__Vcoverage[4032]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srli 
            = ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srli) 
               | (0x8000000U & vlSelf->top__DOT__de__DOT__srli));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__srli 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__srli))) {
        ++(vlSymsp->__Vcoverage[4033]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srli 
            = ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srli) 
               | (0x10000000U & vlSelf->top__DOT__de__DOT__srli));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__srli 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__srli))) {
        ++(vlSymsp->__Vcoverage[4034]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srli 
            = ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srli) 
               | (0x20000000U & vlSelf->top__DOT__de__DOT__srli));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__srli 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__srli))) {
        ++(vlSymsp->__Vcoverage[4035]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srli 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srli) 
               | (0x40000000U & vlSelf->top__DOT__de__DOT__srli));
    }
    if (((vlSelf->top__DOT__de__DOT__srli ^ vlSelf->top__DOT__de__DOT____Vtogcov__srli) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[4036]);
        vlSelf->top__DOT__de__DOT____Vtogcov__srli 
            = ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__srli) 
               | (0x80000000U & vlSelf->top__DOT__de__DOT__srli));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__beq ^ vlSelf->top__DOT__de__DOT____Vtogcov__beq))) {
        ++(vlSymsp->__Vcoverage[4037]);
        vlSelf->top__DOT__de__DOT____Vtogcov__beq = 
            ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__beq) 
             | (1U & vlSelf->top__DOT__de__DOT__beq));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__beq ^ vlSelf->top__DOT__de__DOT____Vtogcov__beq))) {
        ++(vlSymsp->__Vcoverage[4038]);
        vlSelf->top__DOT__de__DOT____Vtogcov__beq = 
            ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__beq) 
             | (2U & vlSelf->top__DOT__de__DOT__beq));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__beq ^ vlSelf->top__DOT__de__DOT____Vtogcov__beq))) {
        ++(vlSymsp->__Vcoverage[4039]);
        vlSelf->top__DOT__de__DOT____Vtogcov__beq = 
            ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__beq) 
             | (4U & vlSelf->top__DOT__de__DOT__beq));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__beq ^ vlSelf->top__DOT__de__DOT____Vtogcov__beq))) {
        ++(vlSymsp->__Vcoverage[4040]);
        vlSelf->top__DOT__de__DOT____Vtogcov__beq = 
            ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__beq) 
             | (8U & vlSelf->top__DOT__de__DOT__beq));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__beq ^ vlSelf->top__DOT__de__DOT____Vtogcov__beq))) {
        ++(vlSymsp->__Vcoverage[4041]);
        vlSelf->top__DOT__de__DOT____Vtogcov__beq = 
            ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__beq) 
             | (0x10U & vlSelf->top__DOT__de__DOT__beq));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__beq ^ vlSelf->top__DOT__de__DOT____Vtogcov__beq))) {
        ++(vlSymsp->__Vcoverage[4042]);
        vlSelf->top__DOT__de__DOT____Vtogcov__beq = 
            ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__beq) 
             | (0x20U & vlSelf->top__DOT__de__DOT__beq));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__beq ^ vlSelf->top__DOT__de__DOT____Vtogcov__beq))) {
        ++(vlSymsp->__Vcoverage[4043]);
        vlSelf->top__DOT__de__DOT____Vtogcov__beq = 
            ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__beq) 
             | (0x40U & vlSelf->top__DOT__de__DOT__beq));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__beq ^ vlSelf->top__DOT__de__DOT____Vtogcov__beq))) {
        ++(vlSymsp->__Vcoverage[4044]);
        vlSelf->top__DOT__de__DOT____Vtogcov__beq = 
            ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__beq) 
             | (0x80U & vlSelf->top__DOT__de__DOT__beq));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__beq ^ vlSelf->top__DOT__de__DOT____Vtogcov__beq))) {
        ++(vlSymsp->__Vcoverage[4045]);
        vlSelf->top__DOT__de__DOT____Vtogcov__beq = 
            ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__beq) 
             | (0x100U & vlSelf->top__DOT__de__DOT__beq));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__beq ^ vlSelf->top__DOT__de__DOT____Vtogcov__beq))) {
        ++(vlSymsp->__Vcoverage[4046]);
        vlSelf->top__DOT__de__DOT____Vtogcov__beq = 
            ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__beq) 
             | (0x200U & vlSelf->top__DOT__de__DOT__beq));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__beq ^ vlSelf->top__DOT__de__DOT____Vtogcov__beq))) {
        ++(vlSymsp->__Vcoverage[4047]);
        vlSelf->top__DOT__de__DOT____Vtogcov__beq = 
            ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__beq) 
             | (0x400U & vlSelf->top__DOT__de__DOT__beq));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__beq ^ vlSelf->top__DOT__de__DOT____Vtogcov__beq))) {
        ++(vlSymsp->__Vcoverage[4048]);
        vlSelf->top__DOT__de__DOT____Vtogcov__beq = 
            ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__beq) 
             | (0x800U & vlSelf->top__DOT__de__DOT__beq));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__beq 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__beq))) {
        ++(vlSymsp->__Vcoverage[4049]);
        vlSelf->top__DOT__de__DOT____Vtogcov__beq = 
            ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__beq) 
             | (0x1000U & vlSelf->top__DOT__de__DOT__beq));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__beq 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__beq))) {
        ++(vlSymsp->__Vcoverage[4050]);
        vlSelf->top__DOT__de__DOT____Vtogcov__beq = 
            ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__beq) 
             | (0x2000U & vlSelf->top__DOT__de__DOT__beq));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__beq 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__beq))) {
        ++(vlSymsp->__Vcoverage[4051]);
        vlSelf->top__DOT__de__DOT____Vtogcov__beq = 
            ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__beq) 
             | (0x4000U & vlSelf->top__DOT__de__DOT__beq));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__beq 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__beq))) {
        ++(vlSymsp->__Vcoverage[4052]);
        vlSelf->top__DOT__de__DOT____Vtogcov__beq = 
            ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__beq) 
             | (0x8000U & vlSelf->top__DOT__de__DOT__beq));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__beq 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__beq))) {
        ++(vlSymsp->__Vcoverage[4053]);
        vlSelf->top__DOT__de__DOT____Vtogcov__beq = 
            ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__beq) 
             | (0x10000U & vlSelf->top__DOT__de__DOT__beq));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__beq 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__beq))) {
        ++(vlSymsp->__Vcoverage[4054]);
        vlSelf->top__DOT__de__DOT____Vtogcov__beq = 
            ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__beq) 
             | (0x20000U & vlSelf->top__DOT__de__DOT__beq));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__beq 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__beq))) {
        ++(vlSymsp->__Vcoverage[4055]);
        vlSelf->top__DOT__de__DOT____Vtogcov__beq = 
            ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__beq) 
             | (0x40000U & vlSelf->top__DOT__de__DOT__beq));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__beq 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__beq))) {
        ++(vlSymsp->__Vcoverage[4056]);
        vlSelf->top__DOT__de__DOT____Vtogcov__beq = 
            ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__beq) 
             | (0x80000U & vlSelf->top__DOT__de__DOT__beq));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__beq 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__beq))) {
        ++(vlSymsp->__Vcoverage[4057]);
        vlSelf->top__DOT__de__DOT____Vtogcov__beq = 
            ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__beq) 
             | (0x100000U & vlSelf->top__DOT__de__DOT__beq));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__beq 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__beq))) {
        ++(vlSymsp->__Vcoverage[4058]);
        vlSelf->top__DOT__de__DOT____Vtogcov__beq = 
            ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__beq) 
             | (0x200000U & vlSelf->top__DOT__de__DOT__beq));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__beq 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__beq))) {
        ++(vlSymsp->__Vcoverage[4059]);
        vlSelf->top__DOT__de__DOT____Vtogcov__beq = 
            ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__beq) 
             | (0x400000U & vlSelf->top__DOT__de__DOT__beq));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__beq 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__beq))) {
        ++(vlSymsp->__Vcoverage[4060]);
        vlSelf->top__DOT__de__DOT____Vtogcov__beq = 
            ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__beq) 
             | (0x800000U & vlSelf->top__DOT__de__DOT__beq));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__beq 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__beq))) {
        ++(vlSymsp->__Vcoverage[4061]);
        vlSelf->top__DOT__de__DOT____Vtogcov__beq = 
            ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__beq) 
             | (0x1000000U & vlSelf->top__DOT__de__DOT__beq));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__beq 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__beq))) {
        ++(vlSymsp->__Vcoverage[4062]);
        vlSelf->top__DOT__de__DOT____Vtogcov__beq = 
            ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__beq) 
             | (0x2000000U & vlSelf->top__DOT__de__DOT__beq));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__beq 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__beq))) {
        ++(vlSymsp->__Vcoverage[4063]);
        vlSelf->top__DOT__de__DOT____Vtogcov__beq = 
            ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__beq) 
             | (0x4000000U & vlSelf->top__DOT__de__DOT__beq));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__beq 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__beq))) {
        ++(vlSymsp->__Vcoverage[4064]);
        vlSelf->top__DOT__de__DOT____Vtogcov__beq = 
            ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__beq) 
             | (0x8000000U & vlSelf->top__DOT__de__DOT__beq));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__beq 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__beq))) {
        ++(vlSymsp->__Vcoverage[4065]);
        vlSelf->top__DOT__de__DOT____Vtogcov__beq = 
            ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__beq) 
             | (0x10000000U & vlSelf->top__DOT__de__DOT__beq));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__beq 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__beq))) {
        ++(vlSymsp->__Vcoverage[4066]);
        vlSelf->top__DOT__de__DOT____Vtogcov__beq = 
            ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__beq) 
             | (0x20000000U & vlSelf->top__DOT__de__DOT__beq));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__beq 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__beq))) {
        ++(vlSymsp->__Vcoverage[4067]);
        vlSelf->top__DOT__de__DOT____Vtogcov__beq = 
            ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__beq) 
             | (0x40000000U & vlSelf->top__DOT__de__DOT__beq));
    }
    if (((vlSelf->top__DOT__de__DOT__beq ^ vlSelf->top__DOT__de__DOT____Vtogcov__beq) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[4068]);
        vlSelf->top__DOT__de__DOT____Vtogcov__beq = 
            ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__beq) 
             | (0x80000000U & vlSelf->top__DOT__de__DOT__beq));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__bne ^ vlSelf->top__DOT__de__DOT____Vtogcov__bne))) {
        ++(vlSymsp->__Vcoverage[4069]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bne = 
            ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__bne) 
             | (1U & vlSelf->top__DOT__de__DOT__bne));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__bne ^ vlSelf->top__DOT__de__DOT____Vtogcov__bne))) {
        ++(vlSymsp->__Vcoverage[4070]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bne = 
            ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__bne) 
             | (2U & vlSelf->top__DOT__de__DOT__bne));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__bne ^ vlSelf->top__DOT__de__DOT____Vtogcov__bne))) {
        ++(vlSymsp->__Vcoverage[4071]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bne = 
            ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__bne) 
             | (4U & vlSelf->top__DOT__de__DOT__bne));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__bne ^ vlSelf->top__DOT__de__DOT____Vtogcov__bne))) {
        ++(vlSymsp->__Vcoverage[4072]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bne = 
            ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__bne) 
             | (8U & vlSelf->top__DOT__de__DOT__bne));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__bne ^ vlSelf->top__DOT__de__DOT____Vtogcov__bne))) {
        ++(vlSymsp->__Vcoverage[4073]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bne = 
            ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__bne) 
             | (0x10U & vlSelf->top__DOT__de__DOT__bne));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__bne ^ vlSelf->top__DOT__de__DOT____Vtogcov__bne))) {
        ++(vlSymsp->__Vcoverage[4074]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bne = 
            ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__bne) 
             | (0x20U & vlSelf->top__DOT__de__DOT__bne));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__bne ^ vlSelf->top__DOT__de__DOT____Vtogcov__bne))) {
        ++(vlSymsp->__Vcoverage[4075]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bne = 
            ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__bne) 
             | (0x40U & vlSelf->top__DOT__de__DOT__bne));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__bne ^ vlSelf->top__DOT__de__DOT____Vtogcov__bne))) {
        ++(vlSymsp->__Vcoverage[4076]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bne = 
            ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__bne) 
             | (0x80U & vlSelf->top__DOT__de__DOT__bne));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__bne ^ vlSelf->top__DOT__de__DOT____Vtogcov__bne))) {
        ++(vlSymsp->__Vcoverage[4077]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bne = 
            ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__bne) 
             | (0x100U & vlSelf->top__DOT__de__DOT__bne));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__bne ^ vlSelf->top__DOT__de__DOT____Vtogcov__bne))) {
        ++(vlSymsp->__Vcoverage[4078]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bne = 
            ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__bne) 
             | (0x200U & vlSelf->top__DOT__de__DOT__bne));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__bne ^ vlSelf->top__DOT__de__DOT____Vtogcov__bne))) {
        ++(vlSymsp->__Vcoverage[4079]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bne = 
            ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__bne) 
             | (0x400U & vlSelf->top__DOT__de__DOT__bne));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__bne ^ vlSelf->top__DOT__de__DOT____Vtogcov__bne))) {
        ++(vlSymsp->__Vcoverage[4080]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bne = 
            ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__bne) 
             | (0x800U & vlSelf->top__DOT__de__DOT__bne));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__bne 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__bne))) {
        ++(vlSymsp->__Vcoverage[4081]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bne = 
            ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__bne) 
             | (0x1000U & vlSelf->top__DOT__de__DOT__bne));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__bne 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__bne))) {
        ++(vlSymsp->__Vcoverage[4082]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bne = 
            ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__bne) 
             | (0x2000U & vlSelf->top__DOT__de__DOT__bne));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__bne 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__bne))) {
        ++(vlSymsp->__Vcoverage[4083]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bne = 
            ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__bne) 
             | (0x4000U & vlSelf->top__DOT__de__DOT__bne));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__bne 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__bne))) {
        ++(vlSymsp->__Vcoverage[4084]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bne = 
            ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__bne) 
             | (0x8000U & vlSelf->top__DOT__de__DOT__bne));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__bne 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__bne))) {
        ++(vlSymsp->__Vcoverage[4085]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bne = 
            ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bne) 
             | (0x10000U & vlSelf->top__DOT__de__DOT__bne));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__bne 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__bne))) {
        ++(vlSymsp->__Vcoverage[4086]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bne = 
            ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bne) 
             | (0x20000U & vlSelf->top__DOT__de__DOT__bne));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__bne 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__bne))) {
        ++(vlSymsp->__Vcoverage[4087]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bne = 
            ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bne) 
             | (0x40000U & vlSelf->top__DOT__de__DOT__bne));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__bne 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__bne))) {
        ++(vlSymsp->__Vcoverage[4088]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bne = 
            ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bne) 
             | (0x80000U & vlSelf->top__DOT__de__DOT__bne));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__bne 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__bne))) {
        ++(vlSymsp->__Vcoverage[4089]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bne = 
            ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bne) 
             | (0x100000U & vlSelf->top__DOT__de__DOT__bne));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__bne 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__bne))) {
        ++(vlSymsp->__Vcoverage[4090]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bne = 
            ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bne) 
             | (0x200000U & vlSelf->top__DOT__de__DOT__bne));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__bne 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__bne))) {
        ++(vlSymsp->__Vcoverage[4091]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bne = 
            ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bne) 
             | (0x400000U & vlSelf->top__DOT__de__DOT__bne));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__bne 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__bne))) {
        ++(vlSymsp->__Vcoverage[4092]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bne = 
            ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bne) 
             | (0x800000U & vlSelf->top__DOT__de__DOT__bne));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__bne 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__bne))) {
        ++(vlSymsp->__Vcoverage[4093]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bne = 
            ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bne) 
             | (0x1000000U & vlSelf->top__DOT__de__DOT__bne));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__bne 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__bne))) {
        ++(vlSymsp->__Vcoverage[4094]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bne = 
            ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bne) 
             | (0x2000000U & vlSelf->top__DOT__de__DOT__bne));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__bne 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__bne))) {
        ++(vlSymsp->__Vcoverage[4095]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bne = 
            ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bne) 
             | (0x4000000U & vlSelf->top__DOT__de__DOT__bne));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__bne 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__bne))) {
        ++(vlSymsp->__Vcoverage[4096]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bne = 
            ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bne) 
             | (0x8000000U & vlSelf->top__DOT__de__DOT__bne));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__bne 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__bne))) {
        ++(vlSymsp->__Vcoverage[4097]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bne = 
            ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bne) 
             | (0x10000000U & vlSelf->top__DOT__de__DOT__bne));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__bne 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__bne))) {
        ++(vlSymsp->__Vcoverage[4098]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bne = 
            ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bne) 
             | (0x20000000U & vlSelf->top__DOT__de__DOT__bne));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__bne 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__bne))) {
        ++(vlSymsp->__Vcoverage[4099]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bne = 
            ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bne) 
             | (0x40000000U & vlSelf->top__DOT__de__DOT__bne));
    }
    if (((vlSelf->top__DOT__de__DOT__bne ^ vlSelf->top__DOT__de__DOT____Vtogcov__bne) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[4100]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bne = 
            ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bne) 
             | (0x80000000U & vlSelf->top__DOT__de__DOT__bne));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__bge ^ vlSelf->top__DOT__de__DOT____Vtogcov__bge))) {
        ++(vlSymsp->__Vcoverage[4101]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bge = 
            ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__bge) 
             | (1U & vlSelf->top__DOT__de__DOT__bge));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__bge ^ vlSelf->top__DOT__de__DOT____Vtogcov__bge))) {
        ++(vlSymsp->__Vcoverage[4102]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bge = 
            ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__bge) 
             | (2U & vlSelf->top__DOT__de__DOT__bge));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__bge ^ vlSelf->top__DOT__de__DOT____Vtogcov__bge))) {
        ++(vlSymsp->__Vcoverage[4103]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bge = 
            ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__bge) 
             | (4U & vlSelf->top__DOT__de__DOT__bge));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__bge ^ vlSelf->top__DOT__de__DOT____Vtogcov__bge))) {
        ++(vlSymsp->__Vcoverage[4104]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bge = 
            ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__bge) 
             | (8U & vlSelf->top__DOT__de__DOT__bge));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__bge ^ vlSelf->top__DOT__de__DOT____Vtogcov__bge))) {
        ++(vlSymsp->__Vcoverage[4105]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bge = 
            ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__bge) 
             | (0x10U & vlSelf->top__DOT__de__DOT__bge));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__bge ^ vlSelf->top__DOT__de__DOT____Vtogcov__bge))) {
        ++(vlSymsp->__Vcoverage[4106]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bge = 
            ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__bge) 
             | (0x20U & vlSelf->top__DOT__de__DOT__bge));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__bge ^ vlSelf->top__DOT__de__DOT____Vtogcov__bge))) {
        ++(vlSymsp->__Vcoverage[4107]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bge = 
            ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__bge) 
             | (0x40U & vlSelf->top__DOT__de__DOT__bge));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__bge ^ vlSelf->top__DOT__de__DOT____Vtogcov__bge))) {
        ++(vlSymsp->__Vcoverage[4108]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bge = 
            ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__bge) 
             | (0x80U & vlSelf->top__DOT__de__DOT__bge));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__bge ^ vlSelf->top__DOT__de__DOT____Vtogcov__bge))) {
        ++(vlSymsp->__Vcoverage[4109]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bge = 
            ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__bge) 
             | (0x100U & vlSelf->top__DOT__de__DOT__bge));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__bge ^ vlSelf->top__DOT__de__DOT____Vtogcov__bge))) {
        ++(vlSymsp->__Vcoverage[4110]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bge = 
            ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__bge) 
             | (0x200U & vlSelf->top__DOT__de__DOT__bge));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__bge ^ vlSelf->top__DOT__de__DOT____Vtogcov__bge))) {
        ++(vlSymsp->__Vcoverage[4111]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bge = 
            ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__bge) 
             | (0x400U & vlSelf->top__DOT__de__DOT__bge));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__bge ^ vlSelf->top__DOT__de__DOT____Vtogcov__bge))) {
        ++(vlSymsp->__Vcoverage[4112]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bge = 
            ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__bge) 
             | (0x800U & vlSelf->top__DOT__de__DOT__bge));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__bge 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__bge))) {
        ++(vlSymsp->__Vcoverage[4113]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bge = 
            ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__bge) 
             | (0x1000U & vlSelf->top__DOT__de__DOT__bge));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__bge 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__bge))) {
        ++(vlSymsp->__Vcoverage[4114]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bge = 
            ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__bge) 
             | (0x2000U & vlSelf->top__DOT__de__DOT__bge));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__bge 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__bge))) {
        ++(vlSymsp->__Vcoverage[4115]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bge = 
            ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__bge) 
             | (0x4000U & vlSelf->top__DOT__de__DOT__bge));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__bge 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__bge))) {
        ++(vlSymsp->__Vcoverage[4116]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bge = 
            ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__bge) 
             | (0x8000U & vlSelf->top__DOT__de__DOT__bge));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__bge 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__bge))) {
        ++(vlSymsp->__Vcoverage[4117]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bge = 
            ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bge) 
             | (0x10000U & vlSelf->top__DOT__de__DOT__bge));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__bge 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__bge))) {
        ++(vlSymsp->__Vcoverage[4118]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bge = 
            ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bge) 
             | (0x20000U & vlSelf->top__DOT__de__DOT__bge));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__bge 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__bge))) {
        ++(vlSymsp->__Vcoverage[4119]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bge = 
            ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bge) 
             | (0x40000U & vlSelf->top__DOT__de__DOT__bge));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__bge 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__bge))) {
        ++(vlSymsp->__Vcoverage[4120]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bge = 
            ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bge) 
             | (0x80000U & vlSelf->top__DOT__de__DOT__bge));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__bge 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__bge))) {
        ++(vlSymsp->__Vcoverage[4121]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bge = 
            ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bge) 
             | (0x100000U & vlSelf->top__DOT__de__DOT__bge));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__bge 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__bge))) {
        ++(vlSymsp->__Vcoverage[4122]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bge = 
            ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bge) 
             | (0x200000U & vlSelf->top__DOT__de__DOT__bge));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__bge 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__bge))) {
        ++(vlSymsp->__Vcoverage[4123]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bge = 
            ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bge) 
             | (0x400000U & vlSelf->top__DOT__de__DOT__bge));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__bge 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__bge))) {
        ++(vlSymsp->__Vcoverage[4124]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bge = 
            ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bge) 
             | (0x800000U & vlSelf->top__DOT__de__DOT__bge));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__bge 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__bge))) {
        ++(vlSymsp->__Vcoverage[4125]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bge = 
            ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bge) 
             | (0x1000000U & vlSelf->top__DOT__de__DOT__bge));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__bge 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__bge))) {
        ++(vlSymsp->__Vcoverage[4126]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bge = 
            ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bge) 
             | (0x2000000U & vlSelf->top__DOT__de__DOT__bge));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__bge 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__bge))) {
        ++(vlSymsp->__Vcoverage[4127]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bge = 
            ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bge) 
             | (0x4000000U & vlSelf->top__DOT__de__DOT__bge));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__bge 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__bge))) {
        ++(vlSymsp->__Vcoverage[4128]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bge = 
            ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bge) 
             | (0x8000000U & vlSelf->top__DOT__de__DOT__bge));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__bge 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__bge))) {
        ++(vlSymsp->__Vcoverage[4129]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bge = 
            ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bge) 
             | (0x10000000U & vlSelf->top__DOT__de__DOT__bge));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__bge 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__bge))) {
        ++(vlSymsp->__Vcoverage[4130]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bge = 
            ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bge) 
             | (0x20000000U & vlSelf->top__DOT__de__DOT__bge));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__bge 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__bge))) {
        ++(vlSymsp->__Vcoverage[4131]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bge = 
            ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bge) 
             | (0x40000000U & vlSelf->top__DOT__de__DOT__bge));
    }
    if (((vlSelf->top__DOT__de__DOT__bge ^ vlSelf->top__DOT__de__DOT____Vtogcov__bge) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[4132]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bge = 
            ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bge) 
             | (0x80000000U & vlSelf->top__DOT__de__DOT__bge));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__bgeu ^ vlSelf->top__DOT__de__DOT____Vtogcov__bgeu))) {
        ++(vlSymsp->__Vcoverage[4133]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bgeu 
            = ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__bgeu) 
               | (1U & vlSelf->top__DOT__de__DOT__bgeu));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__bgeu ^ vlSelf->top__DOT__de__DOT____Vtogcov__bgeu))) {
        ++(vlSymsp->__Vcoverage[4134]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bgeu 
            = ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__bgeu) 
               | (2U & vlSelf->top__DOT__de__DOT__bgeu));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__bgeu ^ vlSelf->top__DOT__de__DOT____Vtogcov__bgeu))) {
        ++(vlSymsp->__Vcoverage[4135]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bgeu 
            = ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__bgeu) 
               | (4U & vlSelf->top__DOT__de__DOT__bgeu));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__bgeu ^ vlSelf->top__DOT__de__DOT____Vtogcov__bgeu))) {
        ++(vlSymsp->__Vcoverage[4136]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bgeu 
            = ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__bgeu) 
               | (8U & vlSelf->top__DOT__de__DOT__bgeu));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__bgeu ^ vlSelf->top__DOT__de__DOT____Vtogcov__bgeu))) {
        ++(vlSymsp->__Vcoverage[4137]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bgeu 
            = ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__bgeu) 
               | (0x10U & vlSelf->top__DOT__de__DOT__bgeu));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__bgeu ^ vlSelf->top__DOT__de__DOT____Vtogcov__bgeu))) {
        ++(vlSymsp->__Vcoverage[4138]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bgeu 
            = ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__bgeu) 
               | (0x20U & vlSelf->top__DOT__de__DOT__bgeu));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__bgeu ^ vlSelf->top__DOT__de__DOT____Vtogcov__bgeu))) {
        ++(vlSymsp->__Vcoverage[4139]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bgeu 
            = ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__bgeu) 
               | (0x40U & vlSelf->top__DOT__de__DOT__bgeu));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__bgeu ^ vlSelf->top__DOT__de__DOT____Vtogcov__bgeu))) {
        ++(vlSymsp->__Vcoverage[4140]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bgeu 
            = ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__bgeu) 
               | (0x80U & vlSelf->top__DOT__de__DOT__bgeu));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__bgeu 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__bgeu))) {
        ++(vlSymsp->__Vcoverage[4141]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bgeu 
            = ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__bgeu) 
               | (0x100U & vlSelf->top__DOT__de__DOT__bgeu));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__bgeu 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__bgeu))) {
        ++(vlSymsp->__Vcoverage[4142]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bgeu 
            = ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__bgeu) 
               | (0x200U & vlSelf->top__DOT__de__DOT__bgeu));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__bgeu 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__bgeu))) {
        ++(vlSymsp->__Vcoverage[4143]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bgeu 
            = ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__bgeu) 
               | (0x400U & vlSelf->top__DOT__de__DOT__bgeu));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__bgeu 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__bgeu))) {
        ++(vlSymsp->__Vcoverage[4144]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bgeu 
            = ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__bgeu) 
               | (0x800U & vlSelf->top__DOT__de__DOT__bgeu));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__bgeu 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__bgeu))) {
        ++(vlSymsp->__Vcoverage[4145]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bgeu 
            = ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__bgeu) 
               | (0x1000U & vlSelf->top__DOT__de__DOT__bgeu));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__bgeu 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__bgeu))) {
        ++(vlSymsp->__Vcoverage[4146]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bgeu 
            = ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__bgeu) 
               | (0x2000U & vlSelf->top__DOT__de__DOT__bgeu));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__bgeu 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__bgeu))) {
        ++(vlSymsp->__Vcoverage[4147]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bgeu 
            = ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__bgeu) 
               | (0x4000U & vlSelf->top__DOT__de__DOT__bgeu));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__bgeu 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__bgeu))) {
        ++(vlSymsp->__Vcoverage[4148]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bgeu 
            = ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__bgeu) 
               | (0x8000U & vlSelf->top__DOT__de__DOT__bgeu));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__bgeu 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__bgeu))) {
        ++(vlSymsp->__Vcoverage[4149]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bgeu 
            = ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bgeu) 
               | (0x10000U & vlSelf->top__DOT__de__DOT__bgeu));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__bgeu 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__bgeu))) {
        ++(vlSymsp->__Vcoverage[4150]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bgeu 
            = ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bgeu) 
               | (0x20000U & vlSelf->top__DOT__de__DOT__bgeu));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__bgeu 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__bgeu))) {
        ++(vlSymsp->__Vcoverage[4151]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bgeu 
            = ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bgeu) 
               | (0x40000U & vlSelf->top__DOT__de__DOT__bgeu));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__bgeu 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__bgeu))) {
        ++(vlSymsp->__Vcoverage[4152]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bgeu 
            = ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bgeu) 
               | (0x80000U & vlSelf->top__DOT__de__DOT__bgeu));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__bgeu 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__bgeu))) {
        ++(vlSymsp->__Vcoverage[4153]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bgeu 
            = ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bgeu) 
               | (0x100000U & vlSelf->top__DOT__de__DOT__bgeu));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__bgeu 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__bgeu))) {
        ++(vlSymsp->__Vcoverage[4154]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bgeu 
            = ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bgeu) 
               | (0x200000U & vlSelf->top__DOT__de__DOT__bgeu));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__bgeu 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__bgeu))) {
        ++(vlSymsp->__Vcoverage[4155]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bgeu 
            = ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bgeu) 
               | (0x400000U & vlSelf->top__DOT__de__DOT__bgeu));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__bgeu 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__bgeu))) {
        ++(vlSymsp->__Vcoverage[4156]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bgeu 
            = ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bgeu) 
               | (0x800000U & vlSelf->top__DOT__de__DOT__bgeu));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__bgeu 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__bgeu))) {
        ++(vlSymsp->__Vcoverage[4157]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bgeu 
            = ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bgeu) 
               | (0x1000000U & vlSelf->top__DOT__de__DOT__bgeu));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__bgeu 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__bgeu))) {
        ++(vlSymsp->__Vcoverage[4158]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bgeu 
            = ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bgeu) 
               | (0x2000000U & vlSelf->top__DOT__de__DOT__bgeu));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__bgeu 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__bgeu))) {
        ++(vlSymsp->__Vcoverage[4159]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bgeu 
            = ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bgeu) 
               | (0x4000000U & vlSelf->top__DOT__de__DOT__bgeu));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__bgeu 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__bgeu))) {
        ++(vlSymsp->__Vcoverage[4160]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bgeu 
            = ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bgeu) 
               | (0x8000000U & vlSelf->top__DOT__de__DOT__bgeu));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__bgeu 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__bgeu))) {
        ++(vlSymsp->__Vcoverage[4161]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bgeu 
            = ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bgeu) 
               | (0x10000000U & vlSelf->top__DOT__de__DOT__bgeu));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__bgeu 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__bgeu))) {
        ++(vlSymsp->__Vcoverage[4162]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bgeu 
            = ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bgeu) 
               | (0x20000000U & vlSelf->top__DOT__de__DOT__bgeu));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__bgeu 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__bgeu))) {
        ++(vlSymsp->__Vcoverage[4163]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bgeu 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bgeu) 
               | (0x40000000U & vlSelf->top__DOT__de__DOT__bgeu));
    }
    if (((vlSelf->top__DOT__de__DOT__bgeu ^ vlSelf->top__DOT__de__DOT____Vtogcov__bgeu) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[4164]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bgeu 
            = ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bgeu) 
               | (0x80000000U & vlSelf->top__DOT__de__DOT__bgeu));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__bltu ^ vlSelf->top__DOT__de__DOT____Vtogcov__bltu))) {
        ++(vlSymsp->__Vcoverage[4165]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bltu 
            = ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__bltu) 
               | (1U & vlSelf->top__DOT__de__DOT__bltu));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__bltu ^ vlSelf->top__DOT__de__DOT____Vtogcov__bltu))) {
        ++(vlSymsp->__Vcoverage[4166]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bltu 
            = ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__bltu) 
               | (2U & vlSelf->top__DOT__de__DOT__bltu));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__bltu ^ vlSelf->top__DOT__de__DOT____Vtogcov__bltu))) {
        ++(vlSymsp->__Vcoverage[4167]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bltu 
            = ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__bltu) 
               | (4U & vlSelf->top__DOT__de__DOT__bltu));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__bltu ^ vlSelf->top__DOT__de__DOT____Vtogcov__bltu))) {
        ++(vlSymsp->__Vcoverage[4168]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bltu 
            = ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__bltu) 
               | (8U & vlSelf->top__DOT__de__DOT__bltu));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__bltu ^ vlSelf->top__DOT__de__DOT____Vtogcov__bltu))) {
        ++(vlSymsp->__Vcoverage[4169]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bltu 
            = ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__bltu) 
               | (0x10U & vlSelf->top__DOT__de__DOT__bltu));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__bltu ^ vlSelf->top__DOT__de__DOT____Vtogcov__bltu))) {
        ++(vlSymsp->__Vcoverage[4170]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bltu 
            = ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__bltu) 
               | (0x20U & vlSelf->top__DOT__de__DOT__bltu));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__bltu ^ vlSelf->top__DOT__de__DOT____Vtogcov__bltu))) {
        ++(vlSymsp->__Vcoverage[4171]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bltu 
            = ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__bltu) 
               | (0x40U & vlSelf->top__DOT__de__DOT__bltu));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__bltu ^ vlSelf->top__DOT__de__DOT____Vtogcov__bltu))) {
        ++(vlSymsp->__Vcoverage[4172]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bltu 
            = ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__bltu) 
               | (0x80U & vlSelf->top__DOT__de__DOT__bltu));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__bltu 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__bltu))) {
        ++(vlSymsp->__Vcoverage[4173]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bltu 
            = ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__bltu) 
               | (0x100U & vlSelf->top__DOT__de__DOT__bltu));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__bltu 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__bltu))) {
        ++(vlSymsp->__Vcoverage[4174]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bltu 
            = ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__bltu) 
               | (0x200U & vlSelf->top__DOT__de__DOT__bltu));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__bltu 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__bltu))) {
        ++(vlSymsp->__Vcoverage[4175]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bltu 
            = ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__bltu) 
               | (0x400U & vlSelf->top__DOT__de__DOT__bltu));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__bltu 
                   ^ vlSelf->top__DOT__de__DOT____Vtogcov__bltu))) {
        ++(vlSymsp->__Vcoverage[4176]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bltu 
            = ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__bltu) 
               | (0x800U & vlSelf->top__DOT__de__DOT__bltu));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__bltu 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__bltu))) {
        ++(vlSymsp->__Vcoverage[4177]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bltu 
            = ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__bltu) 
               | (0x1000U & vlSelf->top__DOT__de__DOT__bltu));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__bltu 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__bltu))) {
        ++(vlSymsp->__Vcoverage[4178]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bltu 
            = ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__bltu) 
               | (0x2000U & vlSelf->top__DOT__de__DOT__bltu));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__bltu 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__bltu))) {
        ++(vlSymsp->__Vcoverage[4179]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bltu 
            = ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__bltu) 
               | (0x4000U & vlSelf->top__DOT__de__DOT__bltu));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__bltu 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__bltu))) {
        ++(vlSymsp->__Vcoverage[4180]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bltu 
            = ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__bltu) 
               | (0x8000U & vlSelf->top__DOT__de__DOT__bltu));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__bltu 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__bltu))) {
        ++(vlSymsp->__Vcoverage[4181]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bltu 
            = ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bltu) 
               | (0x10000U & vlSelf->top__DOT__de__DOT__bltu));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__bltu 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__bltu))) {
        ++(vlSymsp->__Vcoverage[4182]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bltu 
            = ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bltu) 
               | (0x20000U & vlSelf->top__DOT__de__DOT__bltu));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__bltu 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__bltu))) {
        ++(vlSymsp->__Vcoverage[4183]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bltu 
            = ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bltu) 
               | (0x40000U & vlSelf->top__DOT__de__DOT__bltu));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__bltu 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__bltu))) {
        ++(vlSymsp->__Vcoverage[4184]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bltu 
            = ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bltu) 
               | (0x80000U & vlSelf->top__DOT__de__DOT__bltu));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__bltu 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__bltu))) {
        ++(vlSymsp->__Vcoverage[4185]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bltu 
            = ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bltu) 
               | (0x100000U & vlSelf->top__DOT__de__DOT__bltu));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__bltu 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__bltu))) {
        ++(vlSymsp->__Vcoverage[4186]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bltu 
            = ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bltu) 
               | (0x200000U & vlSelf->top__DOT__de__DOT__bltu));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__bltu 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__bltu))) {
        ++(vlSymsp->__Vcoverage[4187]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bltu 
            = ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bltu) 
               | (0x400000U & vlSelf->top__DOT__de__DOT__bltu));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__bltu 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__bltu))) {
        ++(vlSymsp->__Vcoverage[4188]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bltu 
            = ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bltu) 
               | (0x800000U & vlSelf->top__DOT__de__DOT__bltu));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__bltu 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__bltu))) {
        ++(vlSymsp->__Vcoverage[4189]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bltu 
            = ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bltu) 
               | (0x1000000U & vlSelf->top__DOT__de__DOT__bltu));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__bltu 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__bltu))) {
        ++(vlSymsp->__Vcoverage[4190]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bltu 
            = ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bltu) 
               | (0x2000000U & vlSelf->top__DOT__de__DOT__bltu));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__bltu 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__bltu))) {
        ++(vlSymsp->__Vcoverage[4191]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bltu 
            = ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bltu) 
               | (0x4000000U & vlSelf->top__DOT__de__DOT__bltu));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__bltu 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__bltu))) {
        ++(vlSymsp->__Vcoverage[4192]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bltu 
            = ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bltu) 
               | (0x8000000U & vlSelf->top__DOT__de__DOT__bltu));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__bltu 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__bltu))) {
        ++(vlSymsp->__Vcoverage[4193]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bltu 
            = ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bltu) 
               | (0x10000000U & vlSelf->top__DOT__de__DOT__bltu));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__bltu 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__bltu))) {
        ++(vlSymsp->__Vcoverage[4194]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bltu 
            = ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bltu) 
               | (0x20000000U & vlSelf->top__DOT__de__DOT__bltu));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__bltu 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__bltu))) {
        ++(vlSymsp->__Vcoverage[4195]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bltu 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bltu) 
               | (0x40000000U & vlSelf->top__DOT__de__DOT__bltu));
    }
    if (((vlSelf->top__DOT__de__DOT__bltu ^ vlSelf->top__DOT__de__DOT____Vtogcov__bltu) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[4196]);
        vlSelf->top__DOT__de__DOT____Vtogcov__bltu 
            = ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__bltu) 
               | (0x80000000U & vlSelf->top__DOT__de__DOT__bltu));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__blt ^ vlSelf->top__DOT__de__DOT____Vtogcov__blt))) {
        ++(vlSymsp->__Vcoverage[4197]);
        vlSelf->top__DOT__de__DOT____Vtogcov__blt = 
            ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__blt) 
             | (1U & vlSelf->top__DOT__de__DOT__blt));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__blt ^ vlSelf->top__DOT__de__DOT____Vtogcov__blt))) {
        ++(vlSymsp->__Vcoverage[4198]);
        vlSelf->top__DOT__de__DOT____Vtogcov__blt = 
            ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__blt) 
             | (2U & vlSelf->top__DOT__de__DOT__blt));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__blt ^ vlSelf->top__DOT__de__DOT____Vtogcov__blt))) {
        ++(vlSymsp->__Vcoverage[4199]);
        vlSelf->top__DOT__de__DOT____Vtogcov__blt = 
            ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__blt) 
             | (4U & vlSelf->top__DOT__de__DOT__blt));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__blt ^ vlSelf->top__DOT__de__DOT____Vtogcov__blt))) {
        ++(vlSymsp->__Vcoverage[4200]);
        vlSelf->top__DOT__de__DOT____Vtogcov__blt = 
            ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__blt) 
             | (8U & vlSelf->top__DOT__de__DOT__blt));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__blt ^ vlSelf->top__DOT__de__DOT____Vtogcov__blt))) {
        ++(vlSymsp->__Vcoverage[4201]);
        vlSelf->top__DOT__de__DOT____Vtogcov__blt = 
            ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__blt) 
             | (0x10U & vlSelf->top__DOT__de__DOT__blt));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__blt ^ vlSelf->top__DOT__de__DOT____Vtogcov__blt))) {
        ++(vlSymsp->__Vcoverage[4202]);
        vlSelf->top__DOT__de__DOT____Vtogcov__blt = 
            ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__blt) 
             | (0x20U & vlSelf->top__DOT__de__DOT__blt));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__blt ^ vlSelf->top__DOT__de__DOT____Vtogcov__blt))) {
        ++(vlSymsp->__Vcoverage[4203]);
        vlSelf->top__DOT__de__DOT____Vtogcov__blt = 
            ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__blt) 
             | (0x40U & vlSelf->top__DOT__de__DOT__blt));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__blt ^ vlSelf->top__DOT__de__DOT____Vtogcov__blt))) {
        ++(vlSymsp->__Vcoverage[4204]);
        vlSelf->top__DOT__de__DOT____Vtogcov__blt = 
            ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__blt) 
             | (0x80U & vlSelf->top__DOT__de__DOT__blt));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__blt ^ vlSelf->top__DOT__de__DOT____Vtogcov__blt))) {
        ++(vlSymsp->__Vcoverage[4205]);
        vlSelf->top__DOT__de__DOT____Vtogcov__blt = 
            ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__blt) 
             | (0x100U & vlSelf->top__DOT__de__DOT__blt));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__blt ^ vlSelf->top__DOT__de__DOT____Vtogcov__blt))) {
        ++(vlSymsp->__Vcoverage[4206]);
        vlSelf->top__DOT__de__DOT____Vtogcov__blt = 
            ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__blt) 
             | (0x200U & vlSelf->top__DOT__de__DOT__blt));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__blt ^ vlSelf->top__DOT__de__DOT____Vtogcov__blt))) {
        ++(vlSymsp->__Vcoverage[4207]);
        vlSelf->top__DOT__de__DOT____Vtogcov__blt = 
            ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__blt) 
             | (0x400U & vlSelf->top__DOT__de__DOT__blt));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__blt ^ vlSelf->top__DOT__de__DOT____Vtogcov__blt))) {
        ++(vlSymsp->__Vcoverage[4208]);
        vlSelf->top__DOT__de__DOT____Vtogcov__blt = 
            ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__blt) 
             | (0x800U & vlSelf->top__DOT__de__DOT__blt));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__blt 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__blt))) {
        ++(vlSymsp->__Vcoverage[4209]);
        vlSelf->top__DOT__de__DOT____Vtogcov__blt = 
            ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__blt) 
             | (0x1000U & vlSelf->top__DOT__de__DOT__blt));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__blt 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__blt))) {
        ++(vlSymsp->__Vcoverage[4210]);
        vlSelf->top__DOT__de__DOT____Vtogcov__blt = 
            ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__blt) 
             | (0x2000U & vlSelf->top__DOT__de__DOT__blt));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__blt 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__blt))) {
        ++(vlSymsp->__Vcoverage[4211]);
        vlSelf->top__DOT__de__DOT____Vtogcov__blt = 
            ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__blt) 
             | (0x4000U & vlSelf->top__DOT__de__DOT__blt));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__blt 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__blt))) {
        ++(vlSymsp->__Vcoverage[4212]);
        vlSelf->top__DOT__de__DOT____Vtogcov__blt = 
            ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__blt) 
             | (0x8000U & vlSelf->top__DOT__de__DOT__blt));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__blt 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__blt))) {
        ++(vlSymsp->__Vcoverage[4213]);
        vlSelf->top__DOT__de__DOT____Vtogcov__blt = 
            ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__blt) 
             | (0x10000U & vlSelf->top__DOT__de__DOT__blt));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__blt 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__blt))) {
        ++(vlSymsp->__Vcoverage[4214]);
        vlSelf->top__DOT__de__DOT____Vtogcov__blt = 
            ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__blt) 
             | (0x20000U & vlSelf->top__DOT__de__DOT__blt));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__blt 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__blt))) {
        ++(vlSymsp->__Vcoverage[4215]);
        vlSelf->top__DOT__de__DOT____Vtogcov__blt = 
            ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__blt) 
             | (0x40000U & vlSelf->top__DOT__de__DOT__blt));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__blt 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__blt))) {
        ++(vlSymsp->__Vcoverage[4216]);
        vlSelf->top__DOT__de__DOT____Vtogcov__blt = 
            ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__blt) 
             | (0x80000U & vlSelf->top__DOT__de__DOT__blt));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__blt 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__blt))) {
        ++(vlSymsp->__Vcoverage[4217]);
        vlSelf->top__DOT__de__DOT____Vtogcov__blt = 
            ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__blt) 
             | (0x100000U & vlSelf->top__DOT__de__DOT__blt));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__blt 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__blt))) {
        ++(vlSymsp->__Vcoverage[4218]);
        vlSelf->top__DOT__de__DOT____Vtogcov__blt = 
            ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__blt) 
             | (0x200000U & vlSelf->top__DOT__de__DOT__blt));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__blt 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__blt))) {
        ++(vlSymsp->__Vcoverage[4219]);
        vlSelf->top__DOT__de__DOT____Vtogcov__blt = 
            ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__blt) 
             | (0x400000U & vlSelf->top__DOT__de__DOT__blt));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__blt 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__blt))) {
        ++(vlSymsp->__Vcoverage[4220]);
        vlSelf->top__DOT__de__DOT____Vtogcov__blt = 
            ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__blt) 
             | (0x800000U & vlSelf->top__DOT__de__DOT__blt));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__blt 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__blt))) {
        ++(vlSymsp->__Vcoverage[4221]);
        vlSelf->top__DOT__de__DOT____Vtogcov__blt = 
            ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__blt) 
             | (0x1000000U & vlSelf->top__DOT__de__DOT__blt));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__blt 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__blt))) {
        ++(vlSymsp->__Vcoverage[4222]);
        vlSelf->top__DOT__de__DOT____Vtogcov__blt = 
            ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__blt) 
             | (0x2000000U & vlSelf->top__DOT__de__DOT__blt));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__blt 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__blt))) {
        ++(vlSymsp->__Vcoverage[4223]);
        vlSelf->top__DOT__de__DOT____Vtogcov__blt = 
            ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__blt) 
             | (0x4000000U & vlSelf->top__DOT__de__DOT__blt));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__blt 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__blt))) {
        ++(vlSymsp->__Vcoverage[4224]);
        vlSelf->top__DOT__de__DOT____Vtogcov__blt = 
            ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__blt) 
             | (0x8000000U & vlSelf->top__DOT__de__DOT__blt));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__blt 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__blt))) {
        ++(vlSymsp->__Vcoverage[4225]);
        vlSelf->top__DOT__de__DOT____Vtogcov__blt = 
            ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__blt) 
             | (0x10000000U & vlSelf->top__DOT__de__DOT__blt));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__blt 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__blt))) {
        ++(vlSymsp->__Vcoverage[4226]);
        vlSelf->top__DOT__de__DOT____Vtogcov__blt = 
            ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__blt) 
             | (0x20000000U & vlSelf->top__DOT__de__DOT__blt));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__blt 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__blt))) {
        ++(vlSymsp->__Vcoverage[4227]);
        vlSelf->top__DOT__de__DOT____Vtogcov__blt = 
            ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__blt) 
             | (0x40000000U & vlSelf->top__DOT__de__DOT__blt));
    }
    if (((vlSelf->top__DOT__de__DOT__blt ^ vlSelf->top__DOT__de__DOT____Vtogcov__blt) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[4228]);
        vlSelf->top__DOT__de__DOT____Vtogcov__blt = 
            ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__blt) 
             | (0x80000000U & vlSelf->top__DOT__de__DOT__blt));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__sd ^ vlSelf->top__DOT__de__DOT____Vtogcov__sd))) {
        ++(vlSymsp->__Vcoverage[2981]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sd = 
            ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__sd) 
             | (1U & vlSelf->top__DOT__de__DOT__sd));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__sd ^ vlSelf->top__DOT__de__DOT____Vtogcov__sd))) {
        ++(vlSymsp->__Vcoverage[2982]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sd = 
            ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__sd) 
             | (2U & vlSelf->top__DOT__de__DOT__sd));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__sd ^ vlSelf->top__DOT__de__DOT____Vtogcov__sd))) {
        ++(vlSymsp->__Vcoverage[2983]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sd = 
            ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__sd) 
             | (4U & vlSelf->top__DOT__de__DOT__sd));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__sd ^ vlSelf->top__DOT__de__DOT____Vtogcov__sd))) {
        ++(vlSymsp->__Vcoverage[2984]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sd = 
            ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__sd) 
             | (8U & vlSelf->top__DOT__de__DOT__sd));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__sd ^ vlSelf->top__DOT__de__DOT____Vtogcov__sd))) {
        ++(vlSymsp->__Vcoverage[2985]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sd = 
            ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__sd) 
             | (0x10U & vlSelf->top__DOT__de__DOT__sd));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__sd ^ vlSelf->top__DOT__de__DOT____Vtogcov__sd))) {
        ++(vlSymsp->__Vcoverage[2986]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sd = 
            ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__sd) 
             | (0x20U & vlSelf->top__DOT__de__DOT__sd));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__sd ^ vlSelf->top__DOT__de__DOT____Vtogcov__sd))) {
        ++(vlSymsp->__Vcoverage[2987]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sd = 
            ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__sd) 
             | (0x40U & vlSelf->top__DOT__de__DOT__sd));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__sd ^ vlSelf->top__DOT__de__DOT____Vtogcov__sd))) {
        ++(vlSymsp->__Vcoverage[2988]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sd = 
            ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__sd) 
             | (0x80U & vlSelf->top__DOT__de__DOT__sd));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__sd ^ vlSelf->top__DOT__de__DOT____Vtogcov__sd))) {
        ++(vlSymsp->__Vcoverage[2989]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sd = 
            ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__sd) 
             | (0x100U & vlSelf->top__DOT__de__DOT__sd));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__sd ^ vlSelf->top__DOT__de__DOT____Vtogcov__sd))) {
        ++(vlSymsp->__Vcoverage[2990]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sd = 
            ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__sd) 
             | (0x200U & vlSelf->top__DOT__de__DOT__sd));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__sd ^ vlSelf->top__DOT__de__DOT____Vtogcov__sd))) {
        ++(vlSymsp->__Vcoverage[2991]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sd = 
            ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__sd) 
             | (0x400U & vlSelf->top__DOT__de__DOT__sd));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__sd ^ vlSelf->top__DOT__de__DOT____Vtogcov__sd))) {
        ++(vlSymsp->__Vcoverage[2992]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sd = 
            ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__sd) 
             | (0x800U & vlSelf->top__DOT__de__DOT__sd));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__sd ^ vlSelf->top__DOT__de__DOT____Vtogcov__sd))) {
        ++(vlSymsp->__Vcoverage[2993]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sd = 
            ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__sd) 
             | (0x1000U & vlSelf->top__DOT__de__DOT__sd));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__sd ^ vlSelf->top__DOT__de__DOT____Vtogcov__sd))) {
        ++(vlSymsp->__Vcoverage[2994]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sd = 
            ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__sd) 
             | (0x2000U & vlSelf->top__DOT__de__DOT__sd));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__sd ^ vlSelf->top__DOT__de__DOT____Vtogcov__sd))) {
        ++(vlSymsp->__Vcoverage[2995]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sd = 
            ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__sd) 
             | (0x4000U & vlSelf->top__DOT__de__DOT__sd));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__sd ^ vlSelf->top__DOT__de__DOT____Vtogcov__sd))) {
        ++(vlSymsp->__Vcoverage[2996]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sd = 
            ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__sd) 
             | (0x8000U & vlSelf->top__DOT__de__DOT__sd));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__sd 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sd))) {
        ++(vlSymsp->__Vcoverage[2997]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sd = 
            ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sd) 
             | (0x10000U & vlSelf->top__DOT__de__DOT__sd));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__sd 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sd))) {
        ++(vlSymsp->__Vcoverage[2998]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sd = 
            ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sd) 
             | (0x20000U & vlSelf->top__DOT__de__DOT__sd));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__sd 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sd))) {
        ++(vlSymsp->__Vcoverage[2999]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sd = 
            ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sd) 
             | (0x40000U & vlSelf->top__DOT__de__DOT__sd));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__sd 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sd))) {
        ++(vlSymsp->__Vcoverage[3000]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sd = 
            ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sd) 
             | (0x80000U & vlSelf->top__DOT__de__DOT__sd));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__sd 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sd))) {
        ++(vlSymsp->__Vcoverage[3001]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sd = 
            ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sd) 
             | (0x100000U & vlSelf->top__DOT__de__DOT__sd));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__sd 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sd))) {
        ++(vlSymsp->__Vcoverage[3002]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sd = 
            ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sd) 
             | (0x200000U & vlSelf->top__DOT__de__DOT__sd));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__sd 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sd))) {
        ++(vlSymsp->__Vcoverage[3003]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sd = 
            ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sd) 
             | (0x400000U & vlSelf->top__DOT__de__DOT__sd));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__sd 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sd))) {
        ++(vlSymsp->__Vcoverage[3004]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sd = 
            ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sd) 
             | (0x800000U & vlSelf->top__DOT__de__DOT__sd));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__sd 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sd))) {
        ++(vlSymsp->__Vcoverage[3005]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sd = 
            ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sd) 
             | (0x1000000U & vlSelf->top__DOT__de__DOT__sd));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__sd 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sd))) {
        ++(vlSymsp->__Vcoverage[3006]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sd = 
            ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sd) 
             | (0x2000000U & vlSelf->top__DOT__de__DOT__sd));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__sd 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sd))) {
        ++(vlSymsp->__Vcoverage[3007]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sd = 
            ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sd) 
             | (0x4000000U & vlSelf->top__DOT__de__DOT__sd));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__sd 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sd))) {
        ++(vlSymsp->__Vcoverage[3008]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sd = 
            ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sd) 
             | (0x8000000U & vlSelf->top__DOT__de__DOT__sd));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__sd 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__sd))) {
        ++(vlSymsp->__Vcoverage[3009]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sd = 
            ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sd) 
             | (0x10000000U & vlSelf->top__DOT__de__DOT__sd));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__sd 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__sd))) {
        ++(vlSymsp->__Vcoverage[3010]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sd = 
            ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sd) 
             | (0x20000000U & vlSelf->top__DOT__de__DOT__sd));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__sd 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__sd))) {
        ++(vlSymsp->__Vcoverage[3011]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sd = 
            ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sd) 
             | (0x40000000U & vlSelf->top__DOT__de__DOT__sd));
    }
    if (((vlSelf->top__DOT__de__DOT__sd ^ vlSelf->top__DOT__de__DOT____Vtogcov__sd) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3012]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sd = 
            ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sd) 
             | (0x80000000U & vlSelf->top__DOT__de__DOT__sd));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__sh ^ vlSelf->top__DOT__de__DOT____Vtogcov__sh))) {
        ++(vlSymsp->__Vcoverage[3013]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sh = 
            ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__sh) 
             | (1U & vlSelf->top__DOT__de__DOT__sh));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__sh ^ vlSelf->top__DOT__de__DOT____Vtogcov__sh))) {
        ++(vlSymsp->__Vcoverage[3014]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sh = 
            ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__sh) 
             | (2U & vlSelf->top__DOT__de__DOT__sh));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__sh ^ vlSelf->top__DOT__de__DOT____Vtogcov__sh))) {
        ++(vlSymsp->__Vcoverage[3015]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sh = 
            ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__sh) 
             | (4U & vlSelf->top__DOT__de__DOT__sh));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__sh ^ vlSelf->top__DOT__de__DOT____Vtogcov__sh))) {
        ++(vlSymsp->__Vcoverage[3016]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sh = 
            ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__sh) 
             | (8U & vlSelf->top__DOT__de__DOT__sh));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__sh ^ vlSelf->top__DOT__de__DOT____Vtogcov__sh))) {
        ++(vlSymsp->__Vcoverage[3017]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sh = 
            ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__sh) 
             | (0x10U & vlSelf->top__DOT__de__DOT__sh));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__sh ^ vlSelf->top__DOT__de__DOT____Vtogcov__sh))) {
        ++(vlSymsp->__Vcoverage[3018]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sh = 
            ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__sh) 
             | (0x20U & vlSelf->top__DOT__de__DOT__sh));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__sh ^ vlSelf->top__DOT__de__DOT____Vtogcov__sh))) {
        ++(vlSymsp->__Vcoverage[3019]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sh = 
            ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__sh) 
             | (0x40U & vlSelf->top__DOT__de__DOT__sh));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__sh ^ vlSelf->top__DOT__de__DOT____Vtogcov__sh))) {
        ++(vlSymsp->__Vcoverage[3020]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sh = 
            ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__sh) 
             | (0x80U & vlSelf->top__DOT__de__DOT__sh));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__sh ^ vlSelf->top__DOT__de__DOT____Vtogcov__sh))) {
        ++(vlSymsp->__Vcoverage[3021]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sh = 
            ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__sh) 
             | (0x100U & vlSelf->top__DOT__de__DOT__sh));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__sh ^ vlSelf->top__DOT__de__DOT____Vtogcov__sh))) {
        ++(vlSymsp->__Vcoverage[3022]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sh = 
            ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__sh) 
             | (0x200U & vlSelf->top__DOT__de__DOT__sh));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__sh ^ vlSelf->top__DOT__de__DOT____Vtogcov__sh))) {
        ++(vlSymsp->__Vcoverage[3023]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sh = 
            ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__sh) 
             | (0x400U & vlSelf->top__DOT__de__DOT__sh));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__sh ^ vlSelf->top__DOT__de__DOT____Vtogcov__sh))) {
        ++(vlSymsp->__Vcoverage[3024]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sh = 
            ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__sh) 
             | (0x800U & vlSelf->top__DOT__de__DOT__sh));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__sh ^ vlSelf->top__DOT__de__DOT____Vtogcov__sh))) {
        ++(vlSymsp->__Vcoverage[3025]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sh = 
            ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__sh) 
             | (0x1000U & vlSelf->top__DOT__de__DOT__sh));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__sh ^ vlSelf->top__DOT__de__DOT____Vtogcov__sh))) {
        ++(vlSymsp->__Vcoverage[3026]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sh = 
            ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__sh) 
             | (0x2000U & vlSelf->top__DOT__de__DOT__sh));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__sh ^ vlSelf->top__DOT__de__DOT____Vtogcov__sh))) {
        ++(vlSymsp->__Vcoverage[3027]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sh = 
            ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__sh) 
             | (0x4000U & vlSelf->top__DOT__de__DOT__sh));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__sh ^ vlSelf->top__DOT__de__DOT____Vtogcov__sh))) {
        ++(vlSymsp->__Vcoverage[3028]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sh = 
            ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__sh) 
             | (0x8000U & vlSelf->top__DOT__de__DOT__sh));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__sh 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sh))) {
        ++(vlSymsp->__Vcoverage[3029]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sh = 
            ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sh) 
             | (0x10000U & vlSelf->top__DOT__de__DOT__sh));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__sh 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sh))) {
        ++(vlSymsp->__Vcoverage[3030]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sh = 
            ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sh) 
             | (0x20000U & vlSelf->top__DOT__de__DOT__sh));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__sh 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sh))) {
        ++(vlSymsp->__Vcoverage[3031]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sh = 
            ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sh) 
             | (0x40000U & vlSelf->top__DOT__de__DOT__sh));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__sh 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sh))) {
        ++(vlSymsp->__Vcoverage[3032]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sh = 
            ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sh) 
             | (0x80000U & vlSelf->top__DOT__de__DOT__sh));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__sh 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sh))) {
        ++(vlSymsp->__Vcoverage[3033]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sh = 
            ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sh) 
             | (0x100000U & vlSelf->top__DOT__de__DOT__sh));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__sh 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sh))) {
        ++(vlSymsp->__Vcoverage[3034]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sh = 
            ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sh) 
             | (0x200000U & vlSelf->top__DOT__de__DOT__sh));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__sh 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sh))) {
        ++(vlSymsp->__Vcoverage[3035]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sh = 
            ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sh) 
             | (0x400000U & vlSelf->top__DOT__de__DOT__sh));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__sh 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sh))) {
        ++(vlSymsp->__Vcoverage[3036]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sh = 
            ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sh) 
             | (0x800000U & vlSelf->top__DOT__de__DOT__sh));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__sh 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sh))) {
        ++(vlSymsp->__Vcoverage[3037]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sh = 
            ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sh) 
             | (0x1000000U & vlSelf->top__DOT__de__DOT__sh));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__sh 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sh))) {
        ++(vlSymsp->__Vcoverage[3038]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sh = 
            ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sh) 
             | (0x2000000U & vlSelf->top__DOT__de__DOT__sh));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__sh 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sh))) {
        ++(vlSymsp->__Vcoverage[3039]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sh = 
            ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sh) 
             | (0x4000000U & vlSelf->top__DOT__de__DOT__sh));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__sh 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sh))) {
        ++(vlSymsp->__Vcoverage[3040]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sh = 
            ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sh) 
             | (0x8000000U & vlSelf->top__DOT__de__DOT__sh));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__sh 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__sh))) {
        ++(vlSymsp->__Vcoverage[3041]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sh = 
            ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sh) 
             | (0x10000000U & vlSelf->top__DOT__de__DOT__sh));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__sh 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__sh))) {
        ++(vlSymsp->__Vcoverage[3042]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sh = 
            ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sh) 
             | (0x20000000U & vlSelf->top__DOT__de__DOT__sh));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__sh 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__sh))) {
        ++(vlSymsp->__Vcoverage[3043]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sh = 
            ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sh) 
             | (0x40000000U & vlSelf->top__DOT__de__DOT__sh));
    }
    if (((vlSelf->top__DOT__de__DOT__sh ^ vlSelf->top__DOT__de__DOT____Vtogcov__sh) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3044]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sh = 
            ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sh) 
             | (0x80000000U & vlSelf->top__DOT__de__DOT__sh));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__sw ^ vlSelf->top__DOT__de__DOT____Vtogcov__sw))) {
        ++(vlSymsp->__Vcoverage[3045]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sw = 
            ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__sw) 
             | (1U & vlSelf->top__DOT__de__DOT__sw));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__sw ^ vlSelf->top__DOT__de__DOT____Vtogcov__sw))) {
        ++(vlSymsp->__Vcoverage[3046]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sw = 
            ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__sw) 
             | (2U & vlSelf->top__DOT__de__DOT__sw));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__sw ^ vlSelf->top__DOT__de__DOT____Vtogcov__sw))) {
        ++(vlSymsp->__Vcoverage[3047]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sw = 
            ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__sw) 
             | (4U & vlSelf->top__DOT__de__DOT__sw));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__sw ^ vlSelf->top__DOT__de__DOT____Vtogcov__sw))) {
        ++(vlSymsp->__Vcoverage[3048]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sw = 
            ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__sw) 
             | (8U & vlSelf->top__DOT__de__DOT__sw));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__sw ^ vlSelf->top__DOT__de__DOT____Vtogcov__sw))) {
        ++(vlSymsp->__Vcoverage[3049]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sw = 
            ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__sw) 
             | (0x10U & vlSelf->top__DOT__de__DOT__sw));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__sw ^ vlSelf->top__DOT__de__DOT____Vtogcov__sw))) {
        ++(vlSymsp->__Vcoverage[3050]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sw = 
            ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__sw) 
             | (0x20U & vlSelf->top__DOT__de__DOT__sw));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__sw ^ vlSelf->top__DOT__de__DOT____Vtogcov__sw))) {
        ++(vlSymsp->__Vcoverage[3051]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sw = 
            ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__sw) 
             | (0x40U & vlSelf->top__DOT__de__DOT__sw));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__sw ^ vlSelf->top__DOT__de__DOT____Vtogcov__sw))) {
        ++(vlSymsp->__Vcoverage[3052]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sw = 
            ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__sw) 
             | (0x80U & vlSelf->top__DOT__de__DOT__sw));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__sw ^ vlSelf->top__DOT__de__DOT____Vtogcov__sw))) {
        ++(vlSymsp->__Vcoverage[3053]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sw = 
            ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__sw) 
             | (0x100U & vlSelf->top__DOT__de__DOT__sw));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__sw ^ vlSelf->top__DOT__de__DOT____Vtogcov__sw))) {
        ++(vlSymsp->__Vcoverage[3054]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sw = 
            ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__sw) 
             | (0x200U & vlSelf->top__DOT__de__DOT__sw));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__sw ^ vlSelf->top__DOT__de__DOT____Vtogcov__sw))) {
        ++(vlSymsp->__Vcoverage[3055]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sw = 
            ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__sw) 
             | (0x400U & vlSelf->top__DOT__de__DOT__sw));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__sw ^ vlSelf->top__DOT__de__DOT____Vtogcov__sw))) {
        ++(vlSymsp->__Vcoverage[3056]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sw = 
            ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__sw) 
             | (0x800U & vlSelf->top__DOT__de__DOT__sw));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__sw ^ vlSelf->top__DOT__de__DOT____Vtogcov__sw))) {
        ++(vlSymsp->__Vcoverage[3057]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sw = 
            ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__sw) 
             | (0x1000U & vlSelf->top__DOT__de__DOT__sw));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__sw ^ vlSelf->top__DOT__de__DOT____Vtogcov__sw))) {
        ++(vlSymsp->__Vcoverage[3058]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sw = 
            ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__sw) 
             | (0x2000U & vlSelf->top__DOT__de__DOT__sw));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__sw ^ vlSelf->top__DOT__de__DOT____Vtogcov__sw))) {
        ++(vlSymsp->__Vcoverage[3059]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sw = 
            ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__sw) 
             | (0x4000U & vlSelf->top__DOT__de__DOT__sw));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__sw ^ vlSelf->top__DOT__de__DOT____Vtogcov__sw))) {
        ++(vlSymsp->__Vcoverage[3060]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sw = 
            ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__sw) 
             | (0x8000U & vlSelf->top__DOT__de__DOT__sw));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__sw 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sw))) {
        ++(vlSymsp->__Vcoverage[3061]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sw = 
            ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sw) 
             | (0x10000U & vlSelf->top__DOT__de__DOT__sw));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__sw 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sw))) {
        ++(vlSymsp->__Vcoverage[3062]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sw = 
            ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sw) 
             | (0x20000U & vlSelf->top__DOT__de__DOT__sw));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__sw 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sw))) {
        ++(vlSymsp->__Vcoverage[3063]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sw = 
            ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sw) 
             | (0x40000U & vlSelf->top__DOT__de__DOT__sw));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__sw 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sw))) {
        ++(vlSymsp->__Vcoverage[3064]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sw = 
            ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sw) 
             | (0x80000U & vlSelf->top__DOT__de__DOT__sw));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__sw 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sw))) {
        ++(vlSymsp->__Vcoverage[3065]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sw = 
            ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sw) 
             | (0x100000U & vlSelf->top__DOT__de__DOT__sw));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__sw 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sw))) {
        ++(vlSymsp->__Vcoverage[3066]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sw = 
            ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sw) 
             | (0x200000U & vlSelf->top__DOT__de__DOT__sw));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__sw 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sw))) {
        ++(vlSymsp->__Vcoverage[3067]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sw = 
            ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sw) 
             | (0x400000U & vlSelf->top__DOT__de__DOT__sw));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__sw 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sw))) {
        ++(vlSymsp->__Vcoverage[3068]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sw = 
            ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sw) 
             | (0x800000U & vlSelf->top__DOT__de__DOT__sw));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__sw 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sw))) {
        ++(vlSymsp->__Vcoverage[3069]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sw = 
            ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sw) 
             | (0x1000000U & vlSelf->top__DOT__de__DOT__sw));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__sw 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sw))) {
        ++(vlSymsp->__Vcoverage[3070]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sw = 
            ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sw) 
             | (0x2000000U & vlSelf->top__DOT__de__DOT__sw));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__sw 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sw))) {
        ++(vlSymsp->__Vcoverage[3071]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sw = 
            ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sw) 
             | (0x4000000U & vlSelf->top__DOT__de__DOT__sw));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__sw 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sw))) {
        ++(vlSymsp->__Vcoverage[3072]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sw = 
            ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sw) 
             | (0x8000000U & vlSelf->top__DOT__de__DOT__sw));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__sw 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__sw))) {
        ++(vlSymsp->__Vcoverage[3073]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sw = 
            ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sw) 
             | (0x10000000U & vlSelf->top__DOT__de__DOT__sw));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__sw 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__sw))) {
        ++(vlSymsp->__Vcoverage[3074]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sw = 
            ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sw) 
             | (0x20000000U & vlSelf->top__DOT__de__DOT__sw));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__sw 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__sw))) {
        ++(vlSymsp->__Vcoverage[3075]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sw = 
            ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sw) 
             | (0x40000000U & vlSelf->top__DOT__de__DOT__sw));
    }
    if (((vlSelf->top__DOT__de__DOT__sw ^ vlSelf->top__DOT__de__DOT____Vtogcov__sw) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3076]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sw = 
            ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sw) 
             | (0x80000000U & vlSelf->top__DOT__de__DOT__sw));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__sb ^ vlSelf->top__DOT__de__DOT____Vtogcov__sb))) {
        ++(vlSymsp->__Vcoverage[3077]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sb = 
            ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__sb) 
             | (1U & vlSelf->top__DOT__de__DOT__sb));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__sb ^ vlSelf->top__DOT__de__DOT____Vtogcov__sb))) {
        ++(vlSymsp->__Vcoverage[3078]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sb = 
            ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__sb) 
             | (2U & vlSelf->top__DOT__de__DOT__sb));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__sb ^ vlSelf->top__DOT__de__DOT____Vtogcov__sb))) {
        ++(vlSymsp->__Vcoverage[3079]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sb = 
            ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__sb) 
             | (4U & vlSelf->top__DOT__de__DOT__sb));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__sb ^ vlSelf->top__DOT__de__DOT____Vtogcov__sb))) {
        ++(vlSymsp->__Vcoverage[3080]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sb = 
            ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__sb) 
             | (8U & vlSelf->top__DOT__de__DOT__sb));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__sb ^ vlSelf->top__DOT__de__DOT____Vtogcov__sb))) {
        ++(vlSymsp->__Vcoverage[3081]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sb = 
            ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__sb) 
             | (0x10U & vlSelf->top__DOT__de__DOT__sb));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__sb ^ vlSelf->top__DOT__de__DOT____Vtogcov__sb))) {
        ++(vlSymsp->__Vcoverage[3082]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sb = 
            ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__sb) 
             | (0x20U & vlSelf->top__DOT__de__DOT__sb));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__sb ^ vlSelf->top__DOT__de__DOT____Vtogcov__sb))) {
        ++(vlSymsp->__Vcoverage[3083]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sb = 
            ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__sb) 
             | (0x40U & vlSelf->top__DOT__de__DOT__sb));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__sb ^ vlSelf->top__DOT__de__DOT____Vtogcov__sb))) {
        ++(vlSymsp->__Vcoverage[3084]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sb = 
            ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__sb) 
             | (0x80U & vlSelf->top__DOT__de__DOT__sb));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__sb ^ vlSelf->top__DOT__de__DOT____Vtogcov__sb))) {
        ++(vlSymsp->__Vcoverage[3085]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sb = 
            ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__sb) 
             | (0x100U & vlSelf->top__DOT__de__DOT__sb));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__sb ^ vlSelf->top__DOT__de__DOT____Vtogcov__sb))) {
        ++(vlSymsp->__Vcoverage[3086]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sb = 
            ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__sb) 
             | (0x200U & vlSelf->top__DOT__de__DOT__sb));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__sb ^ vlSelf->top__DOT__de__DOT____Vtogcov__sb))) {
        ++(vlSymsp->__Vcoverage[3087]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sb = 
            ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__sb) 
             | (0x400U & vlSelf->top__DOT__de__DOT__sb));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__sb ^ vlSelf->top__DOT__de__DOT____Vtogcov__sb))) {
        ++(vlSymsp->__Vcoverage[3088]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sb = 
            ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__sb) 
             | (0x800U & vlSelf->top__DOT__de__DOT__sb));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__sb ^ vlSelf->top__DOT__de__DOT____Vtogcov__sb))) {
        ++(vlSymsp->__Vcoverage[3089]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sb = 
            ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__sb) 
             | (0x1000U & vlSelf->top__DOT__de__DOT__sb));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__sb ^ vlSelf->top__DOT__de__DOT____Vtogcov__sb))) {
        ++(vlSymsp->__Vcoverage[3090]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sb = 
            ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__sb) 
             | (0x2000U & vlSelf->top__DOT__de__DOT__sb));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__sb ^ vlSelf->top__DOT__de__DOT____Vtogcov__sb))) {
        ++(vlSymsp->__Vcoverage[3091]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sb = 
            ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__sb) 
             | (0x4000U & vlSelf->top__DOT__de__DOT__sb));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__sb ^ vlSelf->top__DOT__de__DOT____Vtogcov__sb))) {
        ++(vlSymsp->__Vcoverage[3092]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sb = 
            ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__sb) 
             | (0x8000U & vlSelf->top__DOT__de__DOT__sb));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__sb 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sb))) {
        ++(vlSymsp->__Vcoverage[3093]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sb = 
            ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sb) 
             | (0x10000U & vlSelf->top__DOT__de__DOT__sb));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__sb 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sb))) {
        ++(vlSymsp->__Vcoverage[3094]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sb = 
            ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sb) 
             | (0x20000U & vlSelf->top__DOT__de__DOT__sb));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__sb 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sb))) {
        ++(vlSymsp->__Vcoverage[3095]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sb = 
            ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sb) 
             | (0x40000U & vlSelf->top__DOT__de__DOT__sb));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__sb 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__sb))) {
        ++(vlSymsp->__Vcoverage[3096]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sb = 
            ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sb) 
             | (0x80000U & vlSelf->top__DOT__de__DOT__sb));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__sb 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sb))) {
        ++(vlSymsp->__Vcoverage[3097]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sb = 
            ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sb) 
             | (0x100000U & vlSelf->top__DOT__de__DOT__sb));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__sb 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sb))) {
        ++(vlSymsp->__Vcoverage[3098]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sb = 
            ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sb) 
             | (0x200000U & vlSelf->top__DOT__de__DOT__sb));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__sb 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sb))) {
        ++(vlSymsp->__Vcoverage[3099]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sb = 
            ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sb) 
             | (0x400000U & vlSelf->top__DOT__de__DOT__sb));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__sb 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__sb))) {
        ++(vlSymsp->__Vcoverage[3100]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sb = 
            ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sb) 
             | (0x800000U & vlSelf->top__DOT__de__DOT__sb));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__sb 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sb))) {
        ++(vlSymsp->__Vcoverage[3101]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sb = 
            ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sb) 
             | (0x1000000U & vlSelf->top__DOT__de__DOT__sb));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__sb 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sb))) {
        ++(vlSymsp->__Vcoverage[3102]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sb = 
            ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sb) 
             | (0x2000000U & vlSelf->top__DOT__de__DOT__sb));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__sb 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sb))) {
        ++(vlSymsp->__Vcoverage[3103]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sb = 
            ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sb) 
             | (0x4000000U & vlSelf->top__DOT__de__DOT__sb));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__sb 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__sb))) {
        ++(vlSymsp->__Vcoverage[3104]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sb = 
            ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sb) 
             | (0x8000000U & vlSelf->top__DOT__de__DOT__sb));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__sb 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__sb))) {
        ++(vlSymsp->__Vcoverage[3105]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sb = 
            ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sb) 
             | (0x10000000U & vlSelf->top__DOT__de__DOT__sb));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__sb 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__sb))) {
        ++(vlSymsp->__Vcoverage[3106]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sb = 
            ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sb) 
             | (0x20000000U & vlSelf->top__DOT__de__DOT__sb));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__sb 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__sb))) {
        ++(vlSymsp->__Vcoverage[3107]);
        vlSelf->top__DOT__de__DOT____Vtogcov__sb = 
            ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__sb) 
             | (0x40000000U & vlSelf->top__DOT__de__DOT__sb));
    }
    if (((vlSelf->top__DOT__de__DOT__sb ^ vlSelf->top__DOT__de__DOT____Vtogcov__sb) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3108]);
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
        ++(vlSymsp->__Vcoverage[3109]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lw = 
            ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__lw) 
             | (1U & vlSelf->top__DOT__de__DOT__lw));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__lw ^ vlSelf->top__DOT__de__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[3110]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lw = 
            ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__lw) 
             | (2U & vlSelf->top__DOT__de__DOT__lw));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__lw ^ vlSelf->top__DOT__de__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[3111]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lw = 
            ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__lw) 
             | (4U & vlSelf->top__DOT__de__DOT__lw));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__lw ^ vlSelf->top__DOT__de__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[3112]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lw = 
            ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__lw) 
             | (8U & vlSelf->top__DOT__de__DOT__lw));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__lw ^ vlSelf->top__DOT__de__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[3113]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lw = 
            ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__lw) 
             | (0x10U & vlSelf->top__DOT__de__DOT__lw));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__lw ^ vlSelf->top__DOT__de__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[3114]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lw = 
            ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__lw) 
             | (0x20U & vlSelf->top__DOT__de__DOT__lw));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__lw ^ vlSelf->top__DOT__de__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[3115]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lw = 
            ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__lw) 
             | (0x40U & vlSelf->top__DOT__de__DOT__lw));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__lw ^ vlSelf->top__DOT__de__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[3116]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lw = 
            ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__lw) 
             | (0x80U & vlSelf->top__DOT__de__DOT__lw));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__lw ^ vlSelf->top__DOT__de__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[3117]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lw = 
            ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__lw) 
             | (0x100U & vlSelf->top__DOT__de__DOT__lw));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__lw ^ vlSelf->top__DOT__de__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[3118]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lw = 
            ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__lw) 
             | (0x200U & vlSelf->top__DOT__de__DOT__lw));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__lw ^ vlSelf->top__DOT__de__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[3119]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lw = 
            ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__lw) 
             | (0x400U & vlSelf->top__DOT__de__DOT__lw));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__lw ^ vlSelf->top__DOT__de__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[3120]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lw = 
            ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__lw) 
             | (0x800U & vlSelf->top__DOT__de__DOT__lw));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__lw ^ vlSelf->top__DOT__de__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[3121]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lw = 
            ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__lw) 
             | (0x1000U & vlSelf->top__DOT__de__DOT__lw));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__lw ^ vlSelf->top__DOT__de__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[3122]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lw = 
            ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__lw) 
             | (0x2000U & vlSelf->top__DOT__de__DOT__lw));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__lw ^ vlSelf->top__DOT__de__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[3123]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lw = 
            ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__lw) 
             | (0x4000U & vlSelf->top__DOT__de__DOT__lw));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__lw ^ vlSelf->top__DOT__de__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[3124]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lw = 
            ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__lw) 
             | (0x8000U & vlSelf->top__DOT__de__DOT__lw));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__lw 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[3125]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lw = 
            ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lw) 
             | (0x10000U & vlSelf->top__DOT__de__DOT__lw));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__lw 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[3126]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lw = 
            ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lw) 
             | (0x20000U & vlSelf->top__DOT__de__DOT__lw));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__lw 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[3127]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lw = 
            ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lw) 
             | (0x40000U & vlSelf->top__DOT__de__DOT__lw));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__lw 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[3128]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lw = 
            ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lw) 
             | (0x80000U & vlSelf->top__DOT__de__DOT__lw));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__lw 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[3129]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lw = 
            ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lw) 
             | (0x100000U & vlSelf->top__DOT__de__DOT__lw));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__lw 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[3130]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lw = 
            ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lw) 
             | (0x200000U & vlSelf->top__DOT__de__DOT__lw));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__lw 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[3131]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lw = 
            ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lw) 
             | (0x400000U & vlSelf->top__DOT__de__DOT__lw));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__lw 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[3132]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lw = 
            ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lw) 
             | (0x800000U & vlSelf->top__DOT__de__DOT__lw));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__lw 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[3133]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lw = 
            ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lw) 
             | (0x1000000U & vlSelf->top__DOT__de__DOT__lw));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__lw 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[3134]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lw = 
            ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lw) 
             | (0x2000000U & vlSelf->top__DOT__de__DOT__lw));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__lw 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[3135]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lw = 
            ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lw) 
             | (0x4000000U & vlSelf->top__DOT__de__DOT__lw));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__lw 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[3136]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lw = 
            ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lw) 
             | (0x8000000U & vlSelf->top__DOT__de__DOT__lw));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__lw 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[3137]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lw = 
            ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lw) 
             | (0x10000000U & vlSelf->top__DOT__de__DOT__lw));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__lw 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[3138]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lw = 
            ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lw) 
             | (0x20000000U & vlSelf->top__DOT__de__DOT__lw));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__lw 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__lw))) {
        ++(vlSymsp->__Vcoverage[3139]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lw = 
            ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lw) 
             | (0x40000000U & vlSelf->top__DOT__de__DOT__lw));
    }
    if (((vlSelf->top__DOT__de__DOT__lw ^ vlSelf->top__DOT__de__DOT____Vtogcov__lw) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3140]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lw = 
            ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lw) 
             | (0x80000000U & vlSelf->top__DOT__de__DOT__lw));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__lh ^ vlSelf->top__DOT__de__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[3141]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lh = 
            ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__lh) 
             | (1U & vlSelf->top__DOT__de__DOT__lh));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__lh ^ vlSelf->top__DOT__de__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[3142]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lh = 
            ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__lh) 
             | (2U & vlSelf->top__DOT__de__DOT__lh));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__lh ^ vlSelf->top__DOT__de__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[3143]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lh = 
            ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__lh) 
             | (4U & vlSelf->top__DOT__de__DOT__lh));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__lh ^ vlSelf->top__DOT__de__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[3144]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lh = 
            ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__lh) 
             | (8U & vlSelf->top__DOT__de__DOT__lh));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__lh ^ vlSelf->top__DOT__de__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[3145]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lh = 
            ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__lh) 
             | (0x10U & vlSelf->top__DOT__de__DOT__lh));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__lh ^ vlSelf->top__DOT__de__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[3146]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lh = 
            ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__lh) 
             | (0x20U & vlSelf->top__DOT__de__DOT__lh));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__lh ^ vlSelf->top__DOT__de__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[3147]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lh = 
            ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__lh) 
             | (0x40U & vlSelf->top__DOT__de__DOT__lh));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__lh ^ vlSelf->top__DOT__de__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[3148]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lh = 
            ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__lh) 
             | (0x80U & vlSelf->top__DOT__de__DOT__lh));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__lh ^ vlSelf->top__DOT__de__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[3149]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lh = 
            ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__lh) 
             | (0x100U & vlSelf->top__DOT__de__DOT__lh));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__lh ^ vlSelf->top__DOT__de__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[3150]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lh = 
            ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__lh) 
             | (0x200U & vlSelf->top__DOT__de__DOT__lh));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__lh ^ vlSelf->top__DOT__de__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[3151]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lh = 
            ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__lh) 
             | (0x400U & vlSelf->top__DOT__de__DOT__lh));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__lh ^ vlSelf->top__DOT__de__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[3152]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lh = 
            ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__lh) 
             | (0x800U & vlSelf->top__DOT__de__DOT__lh));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__lh ^ vlSelf->top__DOT__de__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[3153]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lh = 
            ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__lh) 
             | (0x1000U & vlSelf->top__DOT__de__DOT__lh));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__lh ^ vlSelf->top__DOT__de__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[3154]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lh = 
            ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__lh) 
             | (0x2000U & vlSelf->top__DOT__de__DOT__lh));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__lh ^ vlSelf->top__DOT__de__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[3155]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lh = 
            ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__lh) 
             | (0x4000U & vlSelf->top__DOT__de__DOT__lh));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__lh ^ vlSelf->top__DOT__de__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[3156]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lh = 
            ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__lh) 
             | (0x8000U & vlSelf->top__DOT__de__DOT__lh));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__lh 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[3157]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lh = 
            ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lh) 
             | (0x10000U & vlSelf->top__DOT__de__DOT__lh));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__lh 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[3158]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lh = 
            ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lh) 
             | (0x20000U & vlSelf->top__DOT__de__DOT__lh));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__lh 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[3159]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lh = 
            ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lh) 
             | (0x40000U & vlSelf->top__DOT__de__DOT__lh));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__lh 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[3160]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lh = 
            ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lh) 
             | (0x80000U & vlSelf->top__DOT__de__DOT__lh));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__lh 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[3161]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lh = 
            ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lh) 
             | (0x100000U & vlSelf->top__DOT__de__DOT__lh));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__lh 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[3162]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lh = 
            ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lh) 
             | (0x200000U & vlSelf->top__DOT__de__DOT__lh));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__lh 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[3163]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lh = 
            ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lh) 
             | (0x400000U & vlSelf->top__DOT__de__DOT__lh));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__lh 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[3164]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lh = 
            ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lh) 
             | (0x800000U & vlSelf->top__DOT__de__DOT__lh));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__lh 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[3165]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lh = 
            ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lh) 
             | (0x1000000U & vlSelf->top__DOT__de__DOT__lh));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__lh 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[3166]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lh = 
            ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lh) 
             | (0x2000000U & vlSelf->top__DOT__de__DOT__lh));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__lh 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[3167]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lh = 
            ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lh) 
             | (0x4000000U & vlSelf->top__DOT__de__DOT__lh));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__lh 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[3168]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lh = 
            ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lh) 
             | (0x8000000U & vlSelf->top__DOT__de__DOT__lh));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__lh 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[3169]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lh = 
            ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lh) 
             | (0x10000000U & vlSelf->top__DOT__de__DOT__lh));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__lh 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[3170]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lh = 
            ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lh) 
             | (0x20000000U & vlSelf->top__DOT__de__DOT__lh));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__lh 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__lh))) {
        ++(vlSymsp->__Vcoverage[3171]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lh = 
            ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lh) 
             | (0x40000000U & vlSelf->top__DOT__de__DOT__lh));
    }
    if (((vlSelf->top__DOT__de__DOT__lh ^ vlSelf->top__DOT__de__DOT____Vtogcov__lh) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3172]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lh = 
            ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lh) 
             | (0x80000000U & vlSelf->top__DOT__de__DOT__lh));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__lb ^ vlSelf->top__DOT__de__DOT____Vtogcov__lb))) {
        ++(vlSymsp->__Vcoverage[3173]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lb = 
            ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__lb) 
             | (1U & vlSelf->top__DOT__de__DOT__lb));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__lb ^ vlSelf->top__DOT__de__DOT____Vtogcov__lb))) {
        ++(vlSymsp->__Vcoverage[3174]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lb = 
            ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__lb) 
             | (2U & vlSelf->top__DOT__de__DOT__lb));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__lb ^ vlSelf->top__DOT__de__DOT____Vtogcov__lb))) {
        ++(vlSymsp->__Vcoverage[3175]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lb = 
            ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__lb) 
             | (4U & vlSelf->top__DOT__de__DOT__lb));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__lb ^ vlSelf->top__DOT__de__DOT____Vtogcov__lb))) {
        ++(vlSymsp->__Vcoverage[3176]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lb = 
            ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__lb) 
             | (8U & vlSelf->top__DOT__de__DOT__lb));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__lb ^ vlSelf->top__DOT__de__DOT____Vtogcov__lb))) {
        ++(vlSymsp->__Vcoverage[3177]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lb = 
            ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__lb) 
             | (0x10U & vlSelf->top__DOT__de__DOT__lb));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__lb ^ vlSelf->top__DOT__de__DOT____Vtogcov__lb))) {
        ++(vlSymsp->__Vcoverage[3178]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lb = 
            ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__lb) 
             | (0x20U & vlSelf->top__DOT__de__DOT__lb));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__lb ^ vlSelf->top__DOT__de__DOT____Vtogcov__lb))) {
        ++(vlSymsp->__Vcoverage[3179]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lb = 
            ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__lb) 
             | (0x40U & vlSelf->top__DOT__de__DOT__lb));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__lb ^ vlSelf->top__DOT__de__DOT____Vtogcov__lb))) {
        ++(vlSymsp->__Vcoverage[3180]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lb = 
            ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__lb) 
             | (0x80U & vlSelf->top__DOT__de__DOT__lb));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__lb ^ vlSelf->top__DOT__de__DOT____Vtogcov__lb))) {
        ++(vlSymsp->__Vcoverage[3181]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lb = 
            ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__lb) 
             | (0x100U & vlSelf->top__DOT__de__DOT__lb));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__lb ^ vlSelf->top__DOT__de__DOT____Vtogcov__lb))) {
        ++(vlSymsp->__Vcoverage[3182]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lb = 
            ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__lb) 
             | (0x200U & vlSelf->top__DOT__de__DOT__lb));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__lb ^ vlSelf->top__DOT__de__DOT____Vtogcov__lb))) {
        ++(vlSymsp->__Vcoverage[3183]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lb = 
            ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__lb) 
             | (0x400U & vlSelf->top__DOT__de__DOT__lb));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__lb ^ vlSelf->top__DOT__de__DOT____Vtogcov__lb))) {
        ++(vlSymsp->__Vcoverage[3184]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lb = 
            ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__lb) 
             | (0x800U & vlSelf->top__DOT__de__DOT__lb));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__lb ^ vlSelf->top__DOT__de__DOT____Vtogcov__lb))) {
        ++(vlSymsp->__Vcoverage[3185]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lb = 
            ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__lb) 
             | (0x1000U & vlSelf->top__DOT__de__DOT__lb));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__lb ^ vlSelf->top__DOT__de__DOT____Vtogcov__lb))) {
        ++(vlSymsp->__Vcoverage[3186]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lb = 
            ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__lb) 
             | (0x2000U & vlSelf->top__DOT__de__DOT__lb));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__lb ^ vlSelf->top__DOT__de__DOT____Vtogcov__lb))) {
        ++(vlSymsp->__Vcoverage[3187]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lb = 
            ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__lb) 
             | (0x4000U & vlSelf->top__DOT__de__DOT__lb));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__lb ^ vlSelf->top__DOT__de__DOT____Vtogcov__lb))) {
        ++(vlSymsp->__Vcoverage[3188]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lb = 
            ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__lb) 
             | (0x8000U & vlSelf->top__DOT__de__DOT__lb));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__lb 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__lb))) {
        ++(vlSymsp->__Vcoverage[3189]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lb = 
            ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lb) 
             | (0x10000U & vlSelf->top__DOT__de__DOT__lb));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__lb 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__lb))) {
        ++(vlSymsp->__Vcoverage[3190]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lb = 
            ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lb) 
             | (0x20000U & vlSelf->top__DOT__de__DOT__lb));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__lb 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__lb))) {
        ++(vlSymsp->__Vcoverage[3191]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lb = 
            ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lb) 
             | (0x40000U & vlSelf->top__DOT__de__DOT__lb));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__lb 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__lb))) {
        ++(vlSymsp->__Vcoverage[3192]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lb = 
            ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lb) 
             | (0x80000U & vlSelf->top__DOT__de__DOT__lb));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__lb 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__lb))) {
        ++(vlSymsp->__Vcoverage[3193]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lb = 
            ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lb) 
             | (0x100000U & vlSelf->top__DOT__de__DOT__lb));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__lb 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__lb))) {
        ++(vlSymsp->__Vcoverage[3194]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lb = 
            ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lb) 
             | (0x200000U & vlSelf->top__DOT__de__DOT__lb));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__lb 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__lb))) {
        ++(vlSymsp->__Vcoverage[3195]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lb = 
            ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lb) 
             | (0x400000U & vlSelf->top__DOT__de__DOT__lb));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__lb 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__lb))) {
        ++(vlSymsp->__Vcoverage[3196]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lb = 
            ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lb) 
             | (0x800000U & vlSelf->top__DOT__de__DOT__lb));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__lb 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__lb))) {
        ++(vlSymsp->__Vcoverage[3197]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lb = 
            ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lb) 
             | (0x1000000U & vlSelf->top__DOT__de__DOT__lb));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__lb 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__lb))) {
        ++(vlSymsp->__Vcoverage[3198]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lb = 
            ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lb) 
             | (0x2000000U & vlSelf->top__DOT__de__DOT__lb));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__lb 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__lb))) {
        ++(vlSymsp->__Vcoverage[3199]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lb = 
            ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lb) 
             | (0x4000000U & vlSelf->top__DOT__de__DOT__lb));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__lb 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__lb))) {
        ++(vlSymsp->__Vcoverage[3200]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lb = 
            ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lb) 
             | (0x8000000U & vlSelf->top__DOT__de__DOT__lb));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__lb 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__lb))) {
        ++(vlSymsp->__Vcoverage[3201]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lb = 
            ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lb) 
             | (0x10000000U & vlSelf->top__DOT__de__DOT__lb));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__lb 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__lb))) {
        ++(vlSymsp->__Vcoverage[3202]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lb = 
            ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lb) 
             | (0x20000000U & vlSelf->top__DOT__de__DOT__lb));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__lb 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__lb))) {
        ++(vlSymsp->__Vcoverage[3203]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lb = 
            ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lb) 
             | (0x40000000U & vlSelf->top__DOT__de__DOT__lb));
    }
    if (((vlSelf->top__DOT__de__DOT__lb ^ vlSelf->top__DOT__de__DOT____Vtogcov__lb) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3204]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lb = 
            ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lb) 
             | (0x80000000U & vlSelf->top__DOT__de__DOT__lb));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__lbu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lbu))) {
        ++(vlSymsp->__Vcoverage[3205]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lbu = 
            ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__lbu) 
             | (1U & vlSelf->top__DOT__de__DOT__lbu));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__lbu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lbu))) {
        ++(vlSymsp->__Vcoverage[3206]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lbu = 
            ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__lbu) 
             | (2U & vlSelf->top__DOT__de__DOT__lbu));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__lbu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lbu))) {
        ++(vlSymsp->__Vcoverage[3207]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lbu = 
            ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__lbu) 
             | (4U & vlSelf->top__DOT__de__DOT__lbu));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__lbu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lbu))) {
        ++(vlSymsp->__Vcoverage[3208]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lbu = 
            ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__lbu) 
             | (8U & vlSelf->top__DOT__de__DOT__lbu));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__lbu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lbu))) {
        ++(vlSymsp->__Vcoverage[3209]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lbu = 
            ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__lbu) 
             | (0x10U & vlSelf->top__DOT__de__DOT__lbu));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__lbu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lbu))) {
        ++(vlSymsp->__Vcoverage[3210]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lbu = 
            ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__lbu) 
             | (0x20U & vlSelf->top__DOT__de__DOT__lbu));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__lbu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lbu))) {
        ++(vlSymsp->__Vcoverage[3211]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lbu = 
            ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__lbu) 
             | (0x40U & vlSelf->top__DOT__de__DOT__lbu));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__lbu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lbu))) {
        ++(vlSymsp->__Vcoverage[3212]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lbu = 
            ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__lbu) 
             | (0x80U & vlSelf->top__DOT__de__DOT__lbu));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__lbu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lbu))) {
        ++(vlSymsp->__Vcoverage[3213]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lbu = 
            ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__lbu) 
             | (0x100U & vlSelf->top__DOT__de__DOT__lbu));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__lbu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lbu))) {
        ++(vlSymsp->__Vcoverage[3214]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lbu = 
            ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__lbu) 
             | (0x200U & vlSelf->top__DOT__de__DOT__lbu));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__lbu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lbu))) {
        ++(vlSymsp->__Vcoverage[3215]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lbu = 
            ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__lbu) 
             | (0x400U & vlSelf->top__DOT__de__DOT__lbu));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__lbu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lbu))) {
        ++(vlSymsp->__Vcoverage[3216]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lbu = 
            ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__lbu) 
             | (0x800U & vlSelf->top__DOT__de__DOT__lbu));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__lbu 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__lbu))) {
        ++(vlSymsp->__Vcoverage[3217]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lbu = 
            ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__lbu) 
             | (0x1000U & vlSelf->top__DOT__de__DOT__lbu));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__lbu 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__lbu))) {
        ++(vlSymsp->__Vcoverage[3218]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lbu = 
            ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__lbu) 
             | (0x2000U & vlSelf->top__DOT__de__DOT__lbu));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__lbu 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__lbu))) {
        ++(vlSymsp->__Vcoverage[3219]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lbu = 
            ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__lbu) 
             | (0x4000U & vlSelf->top__DOT__de__DOT__lbu));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__lbu 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__lbu))) {
        ++(vlSymsp->__Vcoverage[3220]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lbu = 
            ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__lbu) 
             | (0x8000U & vlSelf->top__DOT__de__DOT__lbu));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__lbu 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__lbu))) {
        ++(vlSymsp->__Vcoverage[3221]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lbu = 
            ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lbu) 
             | (0x10000U & vlSelf->top__DOT__de__DOT__lbu));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__lbu 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__lbu))) {
        ++(vlSymsp->__Vcoverage[3222]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lbu = 
            ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lbu) 
             | (0x20000U & vlSelf->top__DOT__de__DOT__lbu));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__lbu 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__lbu))) {
        ++(vlSymsp->__Vcoverage[3223]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lbu = 
            ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lbu) 
             | (0x40000U & vlSelf->top__DOT__de__DOT__lbu));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__lbu 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__lbu))) {
        ++(vlSymsp->__Vcoverage[3224]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lbu = 
            ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lbu) 
             | (0x80000U & vlSelf->top__DOT__de__DOT__lbu));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__lbu 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__lbu))) {
        ++(vlSymsp->__Vcoverage[3225]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lbu = 
            ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lbu) 
             | (0x100000U & vlSelf->top__DOT__de__DOT__lbu));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__lbu 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__lbu))) {
        ++(vlSymsp->__Vcoverage[3226]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lbu = 
            ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lbu) 
             | (0x200000U & vlSelf->top__DOT__de__DOT__lbu));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__lbu 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__lbu))) {
        ++(vlSymsp->__Vcoverage[3227]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lbu = 
            ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lbu) 
             | (0x400000U & vlSelf->top__DOT__de__DOT__lbu));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__lbu 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__lbu))) {
        ++(vlSymsp->__Vcoverage[3228]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lbu = 
            ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lbu) 
             | (0x800000U & vlSelf->top__DOT__de__DOT__lbu));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__lbu 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__lbu))) {
        ++(vlSymsp->__Vcoverage[3229]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lbu = 
            ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lbu) 
             | (0x1000000U & vlSelf->top__DOT__de__DOT__lbu));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__lbu 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__lbu))) {
        ++(vlSymsp->__Vcoverage[3230]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lbu = 
            ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lbu) 
             | (0x2000000U & vlSelf->top__DOT__de__DOT__lbu));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__lbu 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__lbu))) {
        ++(vlSymsp->__Vcoverage[3231]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lbu = 
            ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lbu) 
             | (0x4000000U & vlSelf->top__DOT__de__DOT__lbu));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__lbu 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__lbu))) {
        ++(vlSymsp->__Vcoverage[3232]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lbu = 
            ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lbu) 
             | (0x8000000U & vlSelf->top__DOT__de__DOT__lbu));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__lbu 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__lbu))) {
        ++(vlSymsp->__Vcoverage[3233]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lbu = 
            ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lbu) 
             | (0x10000000U & vlSelf->top__DOT__de__DOT__lbu));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__lbu 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__lbu))) {
        ++(vlSymsp->__Vcoverage[3234]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lbu = 
            ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lbu) 
             | (0x20000000U & vlSelf->top__DOT__de__DOT__lbu));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__lbu 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__lbu))) {
        ++(vlSymsp->__Vcoverage[3235]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lbu = 
            ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lbu) 
             | (0x40000000U & vlSelf->top__DOT__de__DOT__lbu));
    }
    if (((vlSelf->top__DOT__de__DOT__lbu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lbu) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3236]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lbu = 
            ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lbu) 
             | (0x80000000U & vlSelf->top__DOT__de__DOT__lbu));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__lwu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lwu))) {
        ++(vlSymsp->__Vcoverage[3237]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lwu = 
            ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__lwu) 
             | (1U & vlSelf->top__DOT__de__DOT__lwu));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__lwu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lwu))) {
        ++(vlSymsp->__Vcoverage[3238]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lwu = 
            ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__lwu) 
             | (2U & vlSelf->top__DOT__de__DOT__lwu));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__lwu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lwu))) {
        ++(vlSymsp->__Vcoverage[3239]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lwu = 
            ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__lwu) 
             | (4U & vlSelf->top__DOT__de__DOT__lwu));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__lwu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lwu))) {
        ++(vlSymsp->__Vcoverage[3240]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lwu = 
            ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__lwu) 
             | (8U & vlSelf->top__DOT__de__DOT__lwu));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__lwu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lwu))) {
        ++(vlSymsp->__Vcoverage[3241]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lwu = 
            ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__lwu) 
             | (0x10U & vlSelf->top__DOT__de__DOT__lwu));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__lwu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lwu))) {
        ++(vlSymsp->__Vcoverage[3242]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lwu = 
            ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__lwu) 
             | (0x20U & vlSelf->top__DOT__de__DOT__lwu));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__lwu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lwu))) {
        ++(vlSymsp->__Vcoverage[3243]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lwu = 
            ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__lwu) 
             | (0x40U & vlSelf->top__DOT__de__DOT__lwu));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__lwu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lwu))) {
        ++(vlSymsp->__Vcoverage[3244]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lwu = 
            ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__lwu) 
             | (0x80U & vlSelf->top__DOT__de__DOT__lwu));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__lwu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lwu))) {
        ++(vlSymsp->__Vcoverage[3245]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lwu = 
            ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__lwu) 
             | (0x100U & vlSelf->top__DOT__de__DOT__lwu));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__lwu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lwu))) {
        ++(vlSymsp->__Vcoverage[3246]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lwu = 
            ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__lwu) 
             | (0x200U & vlSelf->top__DOT__de__DOT__lwu));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__lwu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lwu))) {
        ++(vlSymsp->__Vcoverage[3247]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lwu = 
            ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__lwu) 
             | (0x400U & vlSelf->top__DOT__de__DOT__lwu));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__lwu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lwu))) {
        ++(vlSymsp->__Vcoverage[3248]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lwu = 
            ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__lwu) 
             | (0x800U & vlSelf->top__DOT__de__DOT__lwu));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__lwu 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__lwu))) {
        ++(vlSymsp->__Vcoverage[3249]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lwu = 
            ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__lwu) 
             | (0x1000U & vlSelf->top__DOT__de__DOT__lwu));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__lwu 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__lwu))) {
        ++(vlSymsp->__Vcoverage[3250]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lwu = 
            ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__lwu) 
             | (0x2000U & vlSelf->top__DOT__de__DOT__lwu));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__lwu 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__lwu))) {
        ++(vlSymsp->__Vcoverage[3251]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lwu = 
            ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__lwu) 
             | (0x4000U & vlSelf->top__DOT__de__DOT__lwu));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__lwu 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__lwu))) {
        ++(vlSymsp->__Vcoverage[3252]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lwu = 
            ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__lwu) 
             | (0x8000U & vlSelf->top__DOT__de__DOT__lwu));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__lwu 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__lwu))) {
        ++(vlSymsp->__Vcoverage[3253]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lwu = 
            ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lwu) 
             | (0x10000U & vlSelf->top__DOT__de__DOT__lwu));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__lwu 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__lwu))) {
        ++(vlSymsp->__Vcoverage[3254]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lwu = 
            ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lwu) 
             | (0x20000U & vlSelf->top__DOT__de__DOT__lwu));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__lwu 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__lwu))) {
        ++(vlSymsp->__Vcoverage[3255]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lwu = 
            ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lwu) 
             | (0x40000U & vlSelf->top__DOT__de__DOT__lwu));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__lwu 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__lwu))) {
        ++(vlSymsp->__Vcoverage[3256]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lwu = 
            ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lwu) 
             | (0x80000U & vlSelf->top__DOT__de__DOT__lwu));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__lwu 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__lwu))) {
        ++(vlSymsp->__Vcoverage[3257]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lwu = 
            ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lwu) 
             | (0x100000U & vlSelf->top__DOT__de__DOT__lwu));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__lwu 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__lwu))) {
        ++(vlSymsp->__Vcoverage[3258]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lwu = 
            ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lwu) 
             | (0x200000U & vlSelf->top__DOT__de__DOT__lwu));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__lwu 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__lwu))) {
        ++(vlSymsp->__Vcoverage[3259]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lwu = 
            ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lwu) 
             | (0x400000U & vlSelf->top__DOT__de__DOT__lwu));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__lwu 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__lwu))) {
        ++(vlSymsp->__Vcoverage[3260]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lwu = 
            ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lwu) 
             | (0x800000U & vlSelf->top__DOT__de__DOT__lwu));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__lwu 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__lwu))) {
        ++(vlSymsp->__Vcoverage[3261]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lwu = 
            ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lwu) 
             | (0x1000000U & vlSelf->top__DOT__de__DOT__lwu));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__lwu 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__lwu))) {
        ++(vlSymsp->__Vcoverage[3262]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lwu = 
            ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lwu) 
             | (0x2000000U & vlSelf->top__DOT__de__DOT__lwu));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__lwu 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__lwu))) {
        ++(vlSymsp->__Vcoverage[3263]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lwu = 
            ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lwu) 
             | (0x4000000U & vlSelf->top__DOT__de__DOT__lwu));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__lwu 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__lwu))) {
        ++(vlSymsp->__Vcoverage[3264]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lwu = 
            ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lwu) 
             | (0x8000000U & vlSelf->top__DOT__de__DOT__lwu));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__lwu 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__lwu))) {
        ++(vlSymsp->__Vcoverage[3265]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lwu = 
            ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lwu) 
             | (0x10000000U & vlSelf->top__DOT__de__DOT__lwu));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__lwu 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__lwu))) {
        ++(vlSymsp->__Vcoverage[3266]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lwu = 
            ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lwu) 
             | (0x20000000U & vlSelf->top__DOT__de__DOT__lwu));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__lwu 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__lwu))) {
        ++(vlSymsp->__Vcoverage[3267]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lwu = 
            ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lwu) 
             | (0x40000000U & vlSelf->top__DOT__de__DOT__lwu));
    }
    if (((vlSelf->top__DOT__de__DOT__lwu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lwu) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3268]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lwu = 
            ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lwu) 
             | (0x80000000U & vlSelf->top__DOT__de__DOT__lwu));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__lhu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lhu))) {
        ++(vlSymsp->__Vcoverage[3269]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lhu = 
            ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__lhu) 
             | (1U & vlSelf->top__DOT__de__DOT__lhu));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__lhu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lhu))) {
        ++(vlSymsp->__Vcoverage[3270]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lhu = 
            ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__lhu) 
             | (2U & vlSelf->top__DOT__de__DOT__lhu));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__lhu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lhu))) {
        ++(vlSymsp->__Vcoverage[3271]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lhu = 
            ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__lhu) 
             | (4U & vlSelf->top__DOT__de__DOT__lhu));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__lhu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lhu))) {
        ++(vlSymsp->__Vcoverage[3272]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lhu = 
            ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__lhu) 
             | (8U & vlSelf->top__DOT__de__DOT__lhu));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__lhu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lhu))) {
        ++(vlSymsp->__Vcoverage[3273]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lhu = 
            ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__lhu) 
             | (0x10U & vlSelf->top__DOT__de__DOT__lhu));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__lhu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lhu))) {
        ++(vlSymsp->__Vcoverage[3274]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lhu = 
            ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__lhu) 
             | (0x20U & vlSelf->top__DOT__de__DOT__lhu));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__lhu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lhu))) {
        ++(vlSymsp->__Vcoverage[3275]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lhu = 
            ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__lhu) 
             | (0x40U & vlSelf->top__DOT__de__DOT__lhu));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__lhu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lhu))) {
        ++(vlSymsp->__Vcoverage[3276]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lhu = 
            ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__lhu) 
             | (0x80U & vlSelf->top__DOT__de__DOT__lhu));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__lhu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lhu))) {
        ++(vlSymsp->__Vcoverage[3277]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lhu = 
            ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__lhu) 
             | (0x100U & vlSelf->top__DOT__de__DOT__lhu));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__lhu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lhu))) {
        ++(vlSymsp->__Vcoverage[3278]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lhu = 
            ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__lhu) 
             | (0x200U & vlSelf->top__DOT__de__DOT__lhu));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__lhu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lhu))) {
        ++(vlSymsp->__Vcoverage[3279]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lhu = 
            ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__lhu) 
             | (0x400U & vlSelf->top__DOT__de__DOT__lhu));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__lhu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lhu))) {
        ++(vlSymsp->__Vcoverage[3280]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lhu = 
            ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__lhu) 
             | (0x800U & vlSelf->top__DOT__de__DOT__lhu));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__lhu 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__lhu))) {
        ++(vlSymsp->__Vcoverage[3281]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lhu = 
            ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__lhu) 
             | (0x1000U & vlSelf->top__DOT__de__DOT__lhu));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__lhu 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__lhu))) {
        ++(vlSymsp->__Vcoverage[3282]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lhu = 
            ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__lhu) 
             | (0x2000U & vlSelf->top__DOT__de__DOT__lhu));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__lhu 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__lhu))) {
        ++(vlSymsp->__Vcoverage[3283]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lhu = 
            ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__lhu) 
             | (0x4000U & vlSelf->top__DOT__de__DOT__lhu));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__lhu 
                    ^ vlSelf->top__DOT__de__DOT____Vtogcov__lhu))) {
        ++(vlSymsp->__Vcoverage[3284]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lhu = 
            ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__lhu) 
             | (0x8000U & vlSelf->top__DOT__de__DOT__lhu));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__lhu 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__lhu))) {
        ++(vlSymsp->__Vcoverage[3285]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lhu = 
            ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lhu) 
             | (0x10000U & vlSelf->top__DOT__de__DOT__lhu));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__lhu 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__lhu))) {
        ++(vlSymsp->__Vcoverage[3286]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lhu = 
            ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lhu) 
             | (0x20000U & vlSelf->top__DOT__de__DOT__lhu));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__lhu 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__lhu))) {
        ++(vlSymsp->__Vcoverage[3287]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lhu = 
            ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lhu) 
             | (0x40000U & vlSelf->top__DOT__de__DOT__lhu));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__lhu 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__lhu))) {
        ++(vlSymsp->__Vcoverage[3288]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lhu = 
            ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lhu) 
             | (0x80000U & vlSelf->top__DOT__de__DOT__lhu));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__lhu 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__lhu))) {
        ++(vlSymsp->__Vcoverage[3289]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lhu = 
            ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lhu) 
             | (0x100000U & vlSelf->top__DOT__de__DOT__lhu));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__lhu 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__lhu))) {
        ++(vlSymsp->__Vcoverage[3290]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lhu = 
            ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lhu) 
             | (0x200000U & vlSelf->top__DOT__de__DOT__lhu));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__lhu 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__lhu))) {
        ++(vlSymsp->__Vcoverage[3291]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lhu = 
            ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lhu) 
             | (0x400000U & vlSelf->top__DOT__de__DOT__lhu));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__lhu 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__lhu))) {
        ++(vlSymsp->__Vcoverage[3292]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lhu = 
            ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lhu) 
             | (0x800000U & vlSelf->top__DOT__de__DOT__lhu));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__lhu 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__lhu))) {
        ++(vlSymsp->__Vcoverage[3293]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lhu = 
            ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lhu) 
             | (0x1000000U & vlSelf->top__DOT__de__DOT__lhu));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__lhu 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__lhu))) {
        ++(vlSymsp->__Vcoverage[3294]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lhu = 
            ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lhu) 
             | (0x2000000U & vlSelf->top__DOT__de__DOT__lhu));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__lhu 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__lhu))) {
        ++(vlSymsp->__Vcoverage[3295]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lhu = 
            ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lhu) 
             | (0x4000000U & vlSelf->top__DOT__de__DOT__lhu));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__lhu 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__lhu))) {
        ++(vlSymsp->__Vcoverage[3296]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lhu = 
            ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lhu) 
             | (0x8000000U & vlSelf->top__DOT__de__DOT__lhu));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__lhu 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__lhu))) {
        ++(vlSymsp->__Vcoverage[3297]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lhu = 
            ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lhu) 
             | (0x10000000U & vlSelf->top__DOT__de__DOT__lhu));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__lhu 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__lhu))) {
        ++(vlSymsp->__Vcoverage[3298]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lhu = 
            ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lhu) 
             | (0x20000000U & vlSelf->top__DOT__de__DOT__lhu));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__lhu 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__lhu))) {
        ++(vlSymsp->__Vcoverage[3299]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lhu = 
            ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lhu) 
             | (0x40000000U & vlSelf->top__DOT__de__DOT__lhu));
    }
    if (((vlSelf->top__DOT__de__DOT__lhu ^ vlSelf->top__DOT__de__DOT____Vtogcov__lhu) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3300]);
        vlSelf->top__DOT__de__DOT____Vtogcov__lhu = 
            ((0x7fffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__lhu) 
             | (0x80000000U & vlSelf->top__DOT__de__DOT__lhu));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__ld ^ vlSelf->top__DOT__de__DOT____Vtogcov__ld))) {
        ++(vlSymsp->__Vcoverage[3301]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ld = 
            ((0xfffffffeU & vlSelf->top__DOT__de__DOT____Vtogcov__ld) 
             | (1U & vlSelf->top__DOT__de__DOT__ld));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__ld ^ vlSelf->top__DOT__de__DOT____Vtogcov__ld))) {
        ++(vlSymsp->__Vcoverage[3302]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ld = 
            ((0xfffffffdU & vlSelf->top__DOT__de__DOT____Vtogcov__ld) 
             | (2U & vlSelf->top__DOT__de__DOT__ld));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__ld ^ vlSelf->top__DOT__de__DOT____Vtogcov__ld))) {
        ++(vlSymsp->__Vcoverage[3303]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ld = 
            ((0xfffffffbU & vlSelf->top__DOT__de__DOT____Vtogcov__ld) 
             | (4U & vlSelf->top__DOT__de__DOT__ld));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__ld ^ vlSelf->top__DOT__de__DOT____Vtogcov__ld))) {
        ++(vlSymsp->__Vcoverage[3304]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ld = 
            ((0xfffffff7U & vlSelf->top__DOT__de__DOT____Vtogcov__ld) 
             | (8U & vlSelf->top__DOT__de__DOT__ld));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__ld ^ vlSelf->top__DOT__de__DOT____Vtogcov__ld))) {
        ++(vlSymsp->__Vcoverage[3305]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ld = 
            ((0xffffffefU & vlSelf->top__DOT__de__DOT____Vtogcov__ld) 
             | (0x10U & vlSelf->top__DOT__de__DOT__ld));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__ld ^ vlSelf->top__DOT__de__DOT____Vtogcov__ld))) {
        ++(vlSymsp->__Vcoverage[3306]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ld = 
            ((0xffffffdfU & vlSelf->top__DOT__de__DOT____Vtogcov__ld) 
             | (0x20U & vlSelf->top__DOT__de__DOT__ld));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__ld ^ vlSelf->top__DOT__de__DOT____Vtogcov__ld))) {
        ++(vlSymsp->__Vcoverage[3307]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ld = 
            ((0xffffffbfU & vlSelf->top__DOT__de__DOT____Vtogcov__ld) 
             | (0x40U & vlSelf->top__DOT__de__DOT__ld));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__ld ^ vlSelf->top__DOT__de__DOT____Vtogcov__ld))) {
        ++(vlSymsp->__Vcoverage[3308]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ld = 
            ((0xffffff7fU & vlSelf->top__DOT__de__DOT____Vtogcov__ld) 
             | (0x80U & vlSelf->top__DOT__de__DOT__ld));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__ld ^ vlSelf->top__DOT__de__DOT____Vtogcov__ld))) {
        ++(vlSymsp->__Vcoverage[3309]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ld = 
            ((0xfffffeffU & vlSelf->top__DOT__de__DOT____Vtogcov__ld) 
             | (0x100U & vlSelf->top__DOT__de__DOT__ld));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__ld ^ vlSelf->top__DOT__de__DOT____Vtogcov__ld))) {
        ++(vlSymsp->__Vcoverage[3310]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ld = 
            ((0xfffffdffU & vlSelf->top__DOT__de__DOT____Vtogcov__ld) 
             | (0x200U & vlSelf->top__DOT__de__DOT__ld));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__ld ^ vlSelf->top__DOT__de__DOT____Vtogcov__ld))) {
        ++(vlSymsp->__Vcoverage[3311]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ld = 
            ((0xfffffbffU & vlSelf->top__DOT__de__DOT____Vtogcov__ld) 
             | (0x400U & vlSelf->top__DOT__de__DOT__ld));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__ld ^ vlSelf->top__DOT__de__DOT____Vtogcov__ld))) {
        ++(vlSymsp->__Vcoverage[3312]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ld = 
            ((0xfffff7ffU & vlSelf->top__DOT__de__DOT____Vtogcov__ld) 
             | (0x800U & vlSelf->top__DOT__de__DOT__ld));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__ld ^ vlSelf->top__DOT__de__DOT____Vtogcov__ld))) {
        ++(vlSymsp->__Vcoverage[3313]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ld = 
            ((0xffffefffU & vlSelf->top__DOT__de__DOT____Vtogcov__ld) 
             | (0x1000U & vlSelf->top__DOT__de__DOT__ld));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__ld ^ vlSelf->top__DOT__de__DOT____Vtogcov__ld))) {
        ++(vlSymsp->__Vcoverage[3314]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ld = 
            ((0xffffdfffU & vlSelf->top__DOT__de__DOT____Vtogcov__ld) 
             | (0x2000U & vlSelf->top__DOT__de__DOT__ld));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__ld ^ vlSelf->top__DOT__de__DOT____Vtogcov__ld))) {
        ++(vlSymsp->__Vcoverage[3315]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ld = 
            ((0xffffbfffU & vlSelf->top__DOT__de__DOT____Vtogcov__ld) 
             | (0x4000U & vlSelf->top__DOT__de__DOT__ld));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__ld ^ vlSelf->top__DOT__de__DOT____Vtogcov__ld))) {
        ++(vlSymsp->__Vcoverage[3316]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ld = 
            ((0xffff7fffU & vlSelf->top__DOT__de__DOT____Vtogcov__ld) 
             | (0x8000U & vlSelf->top__DOT__de__DOT__ld));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__ld 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__ld))) {
        ++(vlSymsp->__Vcoverage[3317]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ld = 
            ((0xfffeffffU & vlSelf->top__DOT__de__DOT____Vtogcov__ld) 
             | (0x10000U & vlSelf->top__DOT__de__DOT__ld));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__ld 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__ld))) {
        ++(vlSymsp->__Vcoverage[3318]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ld = 
            ((0xfffdffffU & vlSelf->top__DOT__de__DOT____Vtogcov__ld) 
             | (0x20000U & vlSelf->top__DOT__de__DOT__ld));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__ld 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__ld))) {
        ++(vlSymsp->__Vcoverage[3319]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ld = 
            ((0xfffbffffU & vlSelf->top__DOT__de__DOT____Vtogcov__ld) 
             | (0x40000U & vlSelf->top__DOT__de__DOT__ld));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__ld 
                     ^ vlSelf->top__DOT__de__DOT____Vtogcov__ld))) {
        ++(vlSymsp->__Vcoverage[3320]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ld = 
            ((0xfff7ffffU & vlSelf->top__DOT__de__DOT____Vtogcov__ld) 
             | (0x80000U & vlSelf->top__DOT__de__DOT__ld));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__ld 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__ld))) {
        ++(vlSymsp->__Vcoverage[3321]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ld = 
            ((0xffefffffU & vlSelf->top__DOT__de__DOT____Vtogcov__ld) 
             | (0x100000U & vlSelf->top__DOT__de__DOT__ld));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__ld 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__ld))) {
        ++(vlSymsp->__Vcoverage[3322]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ld = 
            ((0xffdfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__ld) 
             | (0x200000U & vlSelf->top__DOT__de__DOT__ld));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__ld 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__ld))) {
        ++(vlSymsp->__Vcoverage[3323]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ld = 
            ((0xffbfffffU & vlSelf->top__DOT__de__DOT____Vtogcov__ld) 
             | (0x400000U & vlSelf->top__DOT__de__DOT__ld));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__ld 
                      ^ vlSelf->top__DOT__de__DOT____Vtogcov__ld))) {
        ++(vlSymsp->__Vcoverage[3324]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ld = 
            ((0xff7fffffU & vlSelf->top__DOT__de__DOT____Vtogcov__ld) 
             | (0x800000U & vlSelf->top__DOT__de__DOT__ld));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__ld 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__ld))) {
        ++(vlSymsp->__Vcoverage[3325]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ld = 
            ((0xfeffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__ld) 
             | (0x1000000U & vlSelf->top__DOT__de__DOT__ld));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__ld 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__ld))) {
        ++(vlSymsp->__Vcoverage[3326]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ld = 
            ((0xfdffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__ld) 
             | (0x2000000U & vlSelf->top__DOT__de__DOT__ld));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__ld 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__ld))) {
        ++(vlSymsp->__Vcoverage[3327]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ld = 
            ((0xfbffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__ld) 
             | (0x4000000U & vlSelf->top__DOT__de__DOT__ld));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__ld 
                       ^ vlSelf->top__DOT__de__DOT____Vtogcov__ld))) {
        ++(vlSymsp->__Vcoverage[3328]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ld = 
            ((0xf7ffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__ld) 
             | (0x8000000U & vlSelf->top__DOT__de__DOT__ld));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__ld 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__ld))) {
        ++(vlSymsp->__Vcoverage[3329]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ld = 
            ((0xefffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__ld) 
             | (0x10000000U & vlSelf->top__DOT__de__DOT__ld));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__ld 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__ld))) {
        ++(vlSymsp->__Vcoverage[3330]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ld = 
            ((0xdfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__ld) 
             | (0x20000000U & vlSelf->top__DOT__de__DOT__ld));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__ld 
                        ^ vlSelf->top__DOT__de__DOT____Vtogcov__ld))) {
        ++(vlSymsp->__Vcoverage[3331]);
        vlSelf->top__DOT__de__DOT____Vtogcov__ld = 
            ((0xbfffffffU & vlSelf->top__DOT__de__DOT____Vtogcov__ld) 
             | (0x40000000U & vlSelf->top__DOT__de__DOT__ld));
    }
    if (((vlSelf->top__DOT__de__DOT__ld ^ vlSelf->top__DOT__de__DOT____Vtogcov__ld) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[3332]);
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
        = ((vlSelf->top__DOT__de__DOT__Xor << 6U) | 
           ((0x3eU & (vlSelf->inst >> 6U)) | (vlSelf->top__DOT__de__DOT__Or 
                                              >> 0x1fU)));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x10U] 
        = ((vlSelf->top__DOT__de__DOT__And << 0xbU) 
           | ((0x7c0U & (vlSelf->inst >> 1U)) | (vlSelf->top__DOT__de__DOT__Xor 
                                                 >> 0x1aU)));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x11U] 
        = ((vlSelf->top__DOT__de__DOT__And >> 0x15U) 
           | ((IData)((((QData)((IData)((0x1fU & (vlSelf->inst 
                                                  >> 7U)))) 
                        << 0x25U) | (((QData)((IData)(vlSelf->top__DOT__de__DOT__Mul)) 
                                      << 5U) | (QData)((IData)(
                                                               (0x1fU 
                                                                & (vlSelf->inst 
                                                                   >> 7U))))))) 
              << 0xbU));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x12U] 
        = (((IData)((((QData)((IData)((0x1fU & (vlSelf->inst 
                                                >> 7U)))) 
                      << 0x25U) | (((QData)((IData)(vlSelf->top__DOT__de__DOT__Mul)) 
                                    << 5U) | (QData)((IData)(
                                                             (0x1fU 
                                                              & (vlSelf->inst 
                                                                 >> 7U))))))) 
            >> 0x15U) | ((vlSelf->top__DOT__de__DOT__Add 
                          << 0x15U) | ((IData)(((((QData)((IData)(
                                                                  (0x1fU 
                                                                   & (vlSelf->inst 
                                                                      >> 7U)))) 
                                                  << 0x25U) 
                                                 | (((QData)((IData)(vlSelf->top__DOT__de__DOT__Mul)) 
                                                     << 5U) 
                                                    | (QData)((IData)(
                                                                      (0x1fU 
                                                                       & (vlSelf->inst 
                                                                          >> 7U)))))) 
                                                >> 0x20U)) 
                                       << 0xbU)));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x13U] 
        = (((0x7ffU & (vlSelf->top__DOT__de__DOT__Add 
                       >> 0xbU)) | ((IData)(((((QData)((IData)(
                                                               (0x1fU 
                                                                & (vlSelf->inst 
                                                                   >> 7U)))) 
                                               << 0x25U) 
                                              | (((QData)((IData)(vlSelf->top__DOT__de__DOT__Mul)) 
                                                  << 5U) 
                                                 | (QData)((IData)(
                                                                   (0x1fU 
                                                                    & (vlSelf->inst 
                                                                       >> 7U)))))) 
                                             >> 0x20U)) 
                                    >> 0x15U)) | ((vlSelf->top__DOT__de__DOT__sraw 
                                                   << 0x1aU) 
                                                  | ((0x3e00000U 
                                                      & (vlSelf->inst 
                                                         << 0xeU)) 
                                                     | (0x1ff800U 
                                                        & (vlSelf->top__DOT__de__DOT__Add 
                                                           >> 0xbU)))));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x14U] 
        = ((0x7ffU & (vlSelf->top__DOT__de__DOT__sraw 
                      >> 6U)) | ((vlSelf->top__DOT__de__DOT__srlw 
                                  << 0x1fU) | ((0x7c000000U 
                                                & (vlSelf->inst 
                                                   << 0x13U)) 
                                               | (0x3fff800U 
                                                  & (vlSelf->top__DOT__de__DOT__sraw 
                                                     >> 6U)))));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x15U] 
        = ((0x7ffU & (vlSelf->top__DOT__de__DOT__srlw 
                      >> 1U)) | ((0x80000000U & (vlSelf->inst 
                                                 << 0x18U)) 
                                 | (0x7ffff800U & (vlSelf->top__DOT__de__DOT__srlw 
                                                   >> 1U))));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x16U] 
        = (((0x7f0U & (vlSelf->top__DOT__de__DOT__sll 
                       << 4U)) | (0xfU & (vlSelf->inst 
                                          >> 8U))) 
           | (0xfffff800U & (vlSelf->top__DOT__de__DOT__sll 
                             << 4U)));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x17U] 
        = (((0x600U & (vlSelf->top__DOT__de__DOT__sllw 
                       << 9U)) | ((0x1f0U & (vlSelf->inst 
                                             >> 3U)) 
                                  | (vlSelf->top__DOT__de__DOT__sll 
                                     >> 0x1cU))) | 
           (0xfffff800U & (vlSelf->top__DOT__de__DOT__sllw 
                           << 9U)));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x18U] 
        = (((0x600U & (vlSelf->inst << 2U)) | (vlSelf->top__DOT__de__DOT__sllw 
                                               >> 0x17U)) 
           | ((vlSelf->top__DOT__de__DOT__remw << 0xeU) 
              | (0x3800U & (vlSelf->inst << 2U))));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x19U] 
        = ((0x7ffU & (vlSelf->top__DOT__de__DOT__remw 
                      >> 0x12U)) | ((vlSelf->top__DOT__de__DOT__remu 
                                     << 0x13U) | ((0x7c000U 
                                                   & (vlSelf->inst 
                                                      << 7U)) 
                                                  | (0x3800U 
                                                     & (vlSelf->top__DOT__de__DOT__remw 
                                                        >> 0x12U)))));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x1aU] 
        = ((0x7ffU & (vlSelf->top__DOT__de__DOT__remu 
                      >> 0xdU)) | ((vlSelf->top__DOT__de__DOT__rem 
                                    << 0x18U) | ((0xf80000U 
                                                  & (vlSelf->inst 
                                                     << 0xcU)) 
                                                 | (0x7f800U 
                                                    & (vlSelf->top__DOT__de__DOT__remu 
                                                       >> 0xdU)))));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x1bU] 
        = ((0x7ffU & (vlSelf->top__DOT__de__DOT__rem 
                      >> 8U)) | ((vlSelf->top__DOT__de__DOT__div 
                                  << 0x1dU) | ((0x1f000000U 
                                                & (vlSelf->inst 
                                                   << 0x11U)) 
                                               | (0xfff800U 
                                                  & (vlSelf->top__DOT__de__DOT__rem 
                                                     >> 8U)))));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x1cU] 
        = ((0x7ffU & (vlSelf->top__DOT__de__DOT__div 
                      >> 3U)) | ((0xe0000000U & (vlSelf->inst 
                                                 << 0x16U)) 
                                 | (0x1ffff800U & (vlSelf->top__DOT__de__DOT__div 
                                                   >> 3U))));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x1dU] 
        = (((0x7fcU & (vlSelf->top__DOT__de__DOT__divu 
                       << 2U)) | (3U & (vlSelf->inst 
                                        >> 0xaU))) 
           | (0xfffff800U & (vlSelf->top__DOT__de__DOT__divu 
                             << 2U)));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x1eU] 
        = (((0x780U & (vlSelf->top__DOT__de__DOT__divuw 
                       << 7U)) | ((0x7cU & (vlSelf->inst 
                                            >> 5U)) 
                                  | (vlSelf->top__DOT__de__DOT__divu 
                                     >> 0x1eU))) | 
           (0xfffff800U & (vlSelf->top__DOT__de__DOT__divuw 
                           << 7U)));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x1fU] 
        = (((0x780U & vlSelf->inst) | (vlSelf->top__DOT__de__DOT__divuw 
                                       >> 0x19U)) | 
           ((vlSelf->top__DOT__de__DOT__divw << 0xcU) 
            | (0x800U & vlSelf->inst)));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x20U] 
        = ((0x7ffU & (vlSelf->top__DOT__de__DOT__divw 
                      >> 0x14U)) | ((vlSelf->top__DOT__de__DOT__mulw 
                                     << 0x11U) | ((0x1f000U 
                                                   & (vlSelf->inst 
                                                      << 5U)) 
                                                  | (0x800U 
                                                     & (vlSelf->top__DOT__de__DOT__divw 
                                                        >> 0x14U)))));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x21U] 
        = ((0x7ffU & (vlSelf->top__DOT__de__DOT__mulw 
                      >> 0xfU)) | ((vlSelf->top__DOT__de__DOT__subw 
                                    << 0x16U) | ((0x3e0000U 
                                                  & (vlSelf->inst 
                                                     << 0xaU)) 
                                                 | (0x1f800U 
                                                    & (vlSelf->top__DOT__de__DOT__mulw 
                                                       >> 0xfU)))));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x22U] 
        = ((0x7ffU & (vlSelf->top__DOT__de__DOT__subw 
                      >> 0xaU)) | ((vlSelf->top__DOT__de__DOT__addw 
                                    << 0x1bU) | ((0x7c00000U 
                                                  & (vlSelf->inst 
                                                     << 0xfU)) 
                                                 | (0x3ff800U 
                                                    & (vlSelf->top__DOT__de__DOT__subw 
                                                       >> 0xaU)))));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x23U] 
        = ((0x7ffU & (vlSelf->top__DOT__de__DOT__addw 
                      >> 5U)) | ((0xf8000000U & (vlSelf->inst 
                                                 << 0x14U)) 
                                 | (0x7fff800U & (vlSelf->top__DOT__de__DOT__addw 
                                                  >> 5U))));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x24U] 
        = vlSelf->top__DOT__de__DOT__lhu;
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x25U] 
        = (((0x7e0U & (vlSelf->top__DOT__de__DOT__lwu 
                       << 5U)) | (0x1fU & (vlSelf->inst 
                                           >> 7U))) 
           | (0xfffff800U & (vlSelf->top__DOT__de__DOT__lwu 
                             << 5U)));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x26U] 
        = (((0x400U & (vlSelf->top__DOT__de__DOT__lbu 
                       << 0xaU)) | ((0x3e0U & (vlSelf->inst 
                                               >> 2U)) 
                                    | (vlSelf->top__DOT__de__DOT__lwu 
                                       >> 0x1bU))) 
           | (0xfffff800U & (vlSelf->top__DOT__de__DOT__lbu 
                             << 0xaU)));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x27U] 
        = (((0x400U & (vlSelf->inst << 3U)) | (vlSelf->top__DOT__de__DOT__lbu 
                                               >> 0x16U)) 
           | ((vlSelf->top__DOT__de__DOT__lb << 0xfU) 
              | (0x7800U & (vlSelf->inst << 3U))));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x28U] 
        = ((0x7ffU & (vlSelf->top__DOT__de__DOT__lb 
                      >> 0x11U)) | ((vlSelf->top__DOT__de__DOT__lh 
                                     << 0x14U) | ((0xf8000U 
                                                   & (vlSelf->inst 
                                                      << 8U)) 
                                                  | (0x7800U 
                                                     & (vlSelf->top__DOT__de__DOT__lb 
                                                        >> 0x11U)))));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x29U] 
        = ((0x7ffU & (vlSelf->top__DOT__de__DOT__lh 
                      >> 0xcU)) | ((vlSelf->top__DOT__de__DOT__lw 
                                    << 0x19U) | ((0x1f00000U 
                                                  & (vlSelf->inst 
                                                     << 0xdU)) 
                                                 | (0xff800U 
                                                    & (vlSelf->top__DOT__de__DOT__lh 
                                                       >> 0xcU)))));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x2aU] 
        = ((0x7ffU & (vlSelf->top__DOT__de__DOT__lw 
                      >> 7U)) | ((vlSelf->top__DOT__de__DOT__jalr 
                                  << 0x1eU) | ((0x3e000000U 
                                                & (vlSelf->inst 
                                                   << 0x12U)) 
                                               | (0x1fff800U 
                                                  & (vlSelf->top__DOT__de__DOT__lw 
                                                     >> 7U)))));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x2bU] 
        = ((0x7ffU & (vlSelf->top__DOT__de__DOT__jalr 
                      >> 2U)) | ((0xc0000000U & (vlSelf->inst 
                                                 << 0x17U)) 
                                 | (0x3ffff800U & (vlSelf->top__DOT__de__DOT__jalr 
                                                   >> 2U))));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x2cU] 
        = (((0x7f8U & (0x378U | (0x400U & (vlSelf->inst 
                                           << 3U)))) 
            | (7U & (vlSelf->inst >> 9U))) | (0xfffff800U 
                                              & (vlSelf->inst 
                                                 << 3U)));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x2dU] 
        = (0x700U | (((0xf8U & (vlSelf->inst >> 4U)) 
                      | (vlSelf->inst >> 0x1dU)) | 
                     (0xfffff800U & (0x3000U | (0xffff8000U 
                                                & (vlSelf->inst 
                                                   << 8U))))));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x2eU] 
        = (((0x700U & (vlSelf->inst << 1U)) | (vlSelf->inst 
                                               >> 0x18U)) 
           | ((0xffffe000U & (0x2e000U | (0xfff00000U 
                                          & (vlSelf->inst 
                                             << 0xdU)))) 
              | (0x1800U & (vlSelf->inst << 1U))));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x2fU] 
        = ((0x7ffU & (vlSelf->inst >> 0x13U)) | ((vlSelf->top__DOT__de__DOT__ori 
                                                  << 0x12U) 
                                                 | ((0x3e000U 
                                                     & (vlSelf->inst 
                                                        << 6U)) 
                                                    | (0x1800U 
                                                       & (vlSelf->inst 
                                                          >> 0x13U)))));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x30U] 
        = ((0x7ffU & (vlSelf->top__DOT__de__DOT__ori 
                      >> 0xeU)) | ((vlSelf->top__DOT__de__DOT__xori 
                                    << 0x17U) | ((0x7c0000U 
                                                  & (vlSelf->inst 
                                                     << 0xbU)) 
                                                 | (0x3f800U 
                                                    & (vlSelf->top__DOT__de__DOT__ori 
                                                       >> 0xeU)))));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x31U] 
        = ((0x7ffU & (vlSelf->top__DOT__de__DOT__xori 
                      >> 9U)) | ((vlSelf->top__DOT__de__DOT__andi 
                                  << 0x1cU) | ((0xf800000U 
                                                & (vlSelf->inst 
                                                   << 0x10U)) 
                                               | (0x7ff800U 
                                                  & (vlSelf->top__DOT__de__DOT__xori 
                                                     >> 9U)))));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x32U] 
        = ((0x7ffU & (vlSelf->top__DOT__de__DOT__andi 
                      >> 4U)) | ((0xf0000000U & (vlSelf->inst 
                                                 << 0x15U)) 
                                 | (0xffff800U & (vlSelf->top__DOT__de__DOT__andi 
                                                  >> 4U))));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x33U] 
        = (((0x7feU & (vlSelf->top__DOT__de__DOT__csrrs 
                       << 1U)) | (1U & (vlSelf->inst 
                                        >> 0xbU))) 
           | (0xfffff800U & (vlSelf->top__DOT__de__DOT__csrrs 
                             << 1U)));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x34U] 
        = (((0x7c0U & (vlSelf->top__DOT__de__DOT__csrrw 
                       << 6U)) | ((0x3eU & (vlSelf->inst 
                                            >> 6U)) 
                                  | (vlSelf->top__DOT__de__DOT__csrrs 
                                     >> 0x1fU))) | 
           (0xfffff800U & (vlSelf->top__DOT__de__DOT__csrrw 
                           << 6U)));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x35U] 
        = (((0x7c0U & (vlSelf->inst >> 1U)) | (vlSelf->top__DOT__de__DOT__csrrw 
                                               >> 0x1aU)) 
           | (vlSelf->top__DOT__de__DOT__addi << 0xbU));
    vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x36U] 
        = (vlSelf->top__DOT__de__DOT__addi >> 0x15U);
    __Vtemp694[0U] = (IData)(((QData)((IData)(vlSelf->top__DOT__de__DOT__remw)) 
                              << 3U));
    __Vtemp694[1U] = ((vlSelf->top__DOT__de__DOT__rem 
                       << 6U) | (IData)((((QData)((IData)(vlSelf->top__DOT__de__DOT__remw)) 
                                          << 3U) >> 0x20U)));
    __Vtemp694[2U] = (vlSelf->top__DOT__de__DOT__rem 
                      >> 0x1aU);
    VL_EXTEND_WW(73,70, __Vtemp695, __Vtemp694);
    __Vtemp696[0U] = __Vtemp695[0U];
    __Vtemp696[1U] = __Vtemp695[1U];
    __Vtemp696[2U] = ((vlSelf->top__DOT__de__DOT__div 
                       << 9U) | __Vtemp695[2U]);
    __Vtemp696[3U] = (vlSelf->top__DOT__de__DOT__div 
                      >> 0x17U);
    VL_EXTEND_WW(108,105, __Vtemp697, __Vtemp696);
    __Vtemp698[0U] = __Vtemp697[0U];
    __Vtemp698[1U] = __Vtemp697[1U];
    __Vtemp698[2U] = __Vtemp697[2U];
    __Vtemp698[3U] = ((vlSelf->top__DOT__de__DOT__divu 
                       << 0xcU) | __Vtemp697[3U]);
    __Vtemp698[4U] = (vlSelf->top__DOT__de__DOT__divu 
                      >> 0x14U);
    VL_EXTEND_WW(143,140, __Vtemp699, __Vtemp698);
    __Vtemp700[0U] = __Vtemp699[0U];
    __Vtemp700[1U] = __Vtemp699[1U];
    __Vtemp700[2U] = __Vtemp699[2U];
    __Vtemp700[3U] = __Vtemp699[3U];
    __Vtemp700[4U] = ((vlSelf->top__DOT__de__DOT__divuw 
                       << 0xfU) | __Vtemp699[4U]);
    __Vtemp700[5U] = (vlSelf->top__DOT__de__DOT__divuw 
                      >> 0x11U);
    VL_EXTEND_WW(178,175, __Vtemp701, __Vtemp700);
    __Vtemp702[0U] = __Vtemp701[0U];
    __Vtemp702[1U] = __Vtemp701[1U];
    __Vtemp702[2U] = __Vtemp701[2U];
    __Vtemp702[3U] = __Vtemp701[3U];
    __Vtemp702[4U] = __Vtemp701[4U];
    __Vtemp702[5U] = ((vlSelf->top__DOT__de__DOT__divw 
                       << 0x12U) | __Vtemp701[5U]);
    __Vtemp702[6U] = (vlSelf->top__DOT__de__DOT__divw 
                      >> 0xeU);
    VL_EXTEND_WW(213,210, __Vtemp703, __Vtemp702);
    __Vtemp704[0U] = __Vtemp703[0U];
    __Vtemp704[1U] = __Vtemp703[1U];
    __Vtemp704[2U] = __Vtemp703[2U];
    __Vtemp704[3U] = __Vtemp703[3U];
    __Vtemp704[4U] = __Vtemp703[4U];
    __Vtemp704[5U] = __Vtemp703[5U];
    __Vtemp704[6U] = ((vlSelf->top__DOT__de__DOT__mulw 
                       << 0x15U) | __Vtemp703[6U]);
    __Vtemp704[7U] = (vlSelf->top__DOT__de__DOT__mulw 
                      >> 0xbU);
    VL_EXTEND_WW(248,245, __Vtemp705, __Vtemp704);
    __Vtemp706[0U] = __Vtemp705[0U];
    __Vtemp706[1U] = __Vtemp705[1U];
    __Vtemp706[2U] = __Vtemp705[2U];
    __Vtemp706[3U] = __Vtemp705[3U];
    __Vtemp706[4U] = __Vtemp705[4U];
    __Vtemp706[5U] = __Vtemp705[5U];
    __Vtemp706[6U] = __Vtemp705[6U];
    __Vtemp706[7U] = ((vlSelf->top__DOT__de__DOT__subw 
                       << 0x18U) | __Vtemp705[7U]);
    __Vtemp706[8U] = (vlSelf->top__DOT__de__DOT__subw 
                      >> 8U);
    VL_EXTEND_WW(283,280, __Vtemp707, __Vtemp706);
    __Vtemp744[0U] = __Vtemp707[0U];
    __Vtemp744[1U] = __Vtemp707[1U];
    __Vtemp744[2U] = __Vtemp707[2U];
    __Vtemp744[3U] = __Vtemp707[3U];
    __Vtemp744[4U] = __Vtemp707[4U];
    __Vtemp744[5U] = __Vtemp707[5U];
    __Vtemp744[6U] = __Vtemp707[6U];
    __Vtemp744[7U] = __Vtemp707[7U];
    __Vtemp744[8U] = ((vlSelf->top__DOT__de__DOT__addw 
                       << 0x1bU) | __Vtemp707[8U]);
    __Vtemp744[9U] = (0x8000000U | ((vlSelf->top__DOT__de__DOT__ld 
                                     << 0x1eU) | (vlSelf->top__DOT__de__DOT__addw 
                                                  >> 5U)));
    __Vtemp744[0xaU] = (0x40000000U | (vlSelf->top__DOT__de__DOT__ld 
                                       >> 2U));
    __Vtemp744[0xbU] = (vlSelf->top__DOT__de__DOT__lhu 
                        << 1U);
    __Vtemp744[0xcU] = (2U | ((vlSelf->top__DOT__de__DOT__lwu 
                               << 4U) | (vlSelf->top__DOT__de__DOT__lhu 
                                         >> 0x1fU)));
    __Vtemp744[0xdU] = (0x10U | ((vlSelf->top__DOT__de__DOT__lbu 
                                  << 7U) | (vlSelf->top__DOT__de__DOT__lwu 
                                            >> 0x1cU)));
    __Vtemp744[0xeU] = (0x80U | ((vlSelf->top__DOT__de__DOT__lb 
                                  << 0xaU) | (vlSelf->top__DOT__de__DOT__lbu 
                                              >> 0x19U)));
    __Vtemp744[0xfU] = (0x400U | ((vlSelf->top__DOT__de__DOT__lh 
                                   << 0xdU) | (vlSelf->top__DOT__de__DOT__lb 
                                               >> 0x16U)));
    __Vtemp744[0x10U] = (0x2000U | ((vlSelf->top__DOT__de__DOT__lw 
                                     << 0x10U) | (vlSelf->top__DOT__de__DOT__lh 
                                                  >> 0x13U)));
    __Vtemp744[0x11U] = (0x20000U | ((vlSelf->top__DOT__de__DOT__sb 
                                      << 0x13U) | (vlSelf->top__DOT__de__DOT__lw 
                                                   >> 0x10U)));
    __Vtemp744[0x12U] = (0x100000U | ((vlSelf->top__DOT__de__DOT__sw 
                                       << 0x16U) | 
                                      (vlSelf->top__DOT__de__DOT__sb 
                                       >> 0xdU)));
    __Vtemp744[0x13U] = (0x800000U | ((vlSelf->top__DOT__de__DOT__sh 
                                       << 0x19U) | 
                                      (vlSelf->top__DOT__de__DOT__sw 
                                       >> 0xaU)));
    __Vtemp744[0x14U] = (0x4000000U | ((vlSelf->top__DOT__de__DOT__sd 
                                        << 0x1cU) | 
                                       (vlSelf->top__DOT__de__DOT__sh 
                                        >> 7U)));
    __Vtemp744[0x15U] = (0x10000000U | ((vlSelf->top__DOT__de__DOT__jalr 
                                         << 0x1fU) 
                                        | (vlSelf->top__DOT__de__DOT__sd 
                                           >> 4U)));
    __Vtemp744[0x16U] = (0x80000000U | (vlSelf->top__DOT__de__DOT__jalr 
                                        >> 1U));
    __Vtemp744[0x17U] = (2U | (0xfffffffcU & (0x1bcU 
                                              | (0xfffffe00U 
                                                 & (vlSelf->inst 
                                                    << 2U)))));
    __Vtemp744[0x18U] = (0x10U | ((0xffffffe0U & (0x6e0U 
                                                  | (0xfffff000U 
                                                     & (vlSelf->inst 
                                                        << 5U)))) 
                                  | (vlSelf->inst >> 0x1eU)));
    __Vtemp744[0x19U] = (0x80U | ((0xffffff00U & (0x1700U 
                                                  | (0xffff8000U 
                                                     & (vlSelf->inst 
                                                        << 8U)))) 
                                  | (vlSelf->inst >> 0x1bU)));
    __Vtemp744[0x1aU] = (0x100U | ((vlSelf->top__DOT__de__DOT__ori 
                                    << 0xbU) | (vlSelf->inst 
                                                >> 0x18U)));
    __Vtemp744[0x1bU] = (0x800U | ((vlSelf->top__DOT__de__DOT__xori 
                                    << 0xeU) | (vlSelf->top__DOT__de__DOT__ori 
                                                >> 0x15U)));
    __Vtemp744[0x1cU] = (0x4000U | ((vlSelf->top__DOT__de__DOT__andi 
                                     << 0x11U) | (vlSelf->top__DOT__de__DOT__xori 
                                                  >> 0x12U)));
    __Vtemp744[0x1dU] = (vlSelf->top__DOT__de__DOT__andi 
                         >> 0xfU);
    VL_EXTEND_WW(948,945, __Vtemp745, __Vtemp744);
    __Vtemp755[0U] = vlSelf->top__DOT__de__DOT__remu;
    __Vtemp755[1U] = __Vtemp745[0U];
    __Vtemp755[2U] = __Vtemp745[1U];
    __Vtemp755[3U] = __Vtemp745[2U];
    __Vtemp755[4U] = __Vtemp745[3U];
    __Vtemp755[5U] = __Vtemp745[4U];
    __Vtemp755[6U] = __Vtemp745[5U];
    __Vtemp755[7U] = __Vtemp745[6U];
    __Vtemp755[8U] = __Vtemp745[7U];
    __Vtemp755[9U] = __Vtemp745[8U];
    __Vtemp755[0xaU] = __Vtemp745[9U];
    __Vtemp755[0xbU] = __Vtemp745[0xaU];
    __Vtemp755[0xcU] = __Vtemp745[0xbU];
    __Vtemp755[0xdU] = __Vtemp745[0xcU];
    __Vtemp755[0xeU] = __Vtemp745[0xdU];
    __Vtemp755[0xfU] = __Vtemp745[0xeU];
    __Vtemp755[0x10U] = __Vtemp745[0xfU];
    __Vtemp755[0x11U] = __Vtemp745[0x10U];
    __Vtemp755[0x12U] = __Vtemp745[0x11U];
    __Vtemp755[0x13U] = __Vtemp745[0x12U];
    __Vtemp755[0x14U] = __Vtemp745[0x13U];
    __Vtemp755[0x15U] = __Vtemp745[0x14U];
    __Vtemp755[0x16U] = __Vtemp745[0x15U];
    __Vtemp755[0x17U] = __Vtemp745[0x16U];
    __Vtemp755[0x18U] = __Vtemp745[0x17U];
    __Vtemp755[0x19U] = __Vtemp745[0x18U];
    __Vtemp755[0x1aU] = __Vtemp745[0x19U];
    __Vtemp755[0x1bU] = __Vtemp745[0x1aU];
    __Vtemp755[0x1cU] = __Vtemp745[0x1bU];
    __Vtemp755[0x1dU] = __Vtemp745[0x1cU];
    __Vtemp755[0x1eU] = (0x7300000U | __Vtemp745[0x1dU]);
    __Vtemp755[0x1fU] = 0x39930200U;
    __Vtemp755[0x20U] = (0x800000U | (vlSelf->top__DOT__de__DOT__csrrs 
                                      << 0x1aU));
    __Vtemp755[0x21U] = (0x4000000U | ((vlSelf->top__DOT__de__DOT__csrrw 
                                        << 0x1dU) | 
                                       (vlSelf->top__DOT__de__DOT__csrrs 
                                        >> 6U)));
    __Vtemp755[0x22U] = (0x20000000U | (vlSelf->top__DOT__de__DOT__csrrw 
                                        >> 3U));
    __Vtemp755[0x23U] = vlSelf->top__DOT__de__DOT__addi;
    __Vtemp780[0U] = (IData)((0x800000001ULL | ((QData)((IData)(vlSelf->top__DOT__de__DOT__srliw)) 
                                                << 3U)));
    __Vtemp780[1U] = ((vlSelf->top__DOT__de__DOT__slliw 
                       << 6U) | (IData)(((0x800000001ULL 
                                          | ((QData)((IData)(vlSelf->top__DOT__de__DOT__srliw)) 
                                             << 3U)) 
                                         >> 0x20U)));
    __Vtemp780[2U] = (0x40U | ((vlSelf->top__DOT__de__DOT__sraiw 
                                << 9U) | (vlSelf->top__DOT__de__DOT__slliw 
                                          >> 0x1aU)));
    __Vtemp780[3U] = (0x200U | ((vlSelf->top__DOT__de__DOT__addiw 
                                 << 0xcU) | (vlSelf->top__DOT__de__DOT__sraiw 
                                             >> 0x17U)));
    __Vtemp780[4U] = (0x3000U | ((vlSelf->top__DOT__de__DOT__bne 
                                  << 0xfU) | (vlSelf->top__DOT__de__DOT__addiw 
                                              >> 0x14U)));
    __Vtemp780[5U] = (0x18000U | ((vlSelf->top__DOT__de__DOT__blt 
                                   << 0x12U) | (vlSelf->top__DOT__de__DOT__bne 
                                                >> 0x11U)));
    __Vtemp780[6U] = (0xc0000U | ((vlSelf->top__DOT__de__DOT__bltu 
                                   << 0x15U) | (vlSelf->top__DOT__de__DOT__blt 
                                                >> 0xeU)));
    __Vtemp780[7U] = (0x600000U | ((vlSelf->top__DOT__de__DOT__bgeu 
                                    << 0x18U) | (vlSelf->top__DOT__de__DOT__bltu 
                                                 >> 0xbU)));
    __Vtemp780[8U] = (0x3000000U | ((vlSelf->top__DOT__de__DOT__bge 
                                     << 0x1bU) | (vlSelf->top__DOT__de__DOT__bgeu 
                                                  >> 8U)));
    __Vtemp780[9U] = (0x18000000U | ((vlSelf->top__DOT__de__DOT__beq 
                                      << 0x1eU) | (vlSelf->top__DOT__de__DOT__bge 
                                                   >> 5U)));
    __Vtemp780[0xaU] = (0x40000000U | (vlSelf->top__DOT__de__DOT__beq 
                                       >> 2U));
    __Vtemp780[0xbU] = (vlSelf->top__DOT__de__DOT__srli 
                        << 1U);
    __Vtemp780[0xcU] = (2U | ((vlSelf->top__DOT__de__DOT__slli 
                               << 4U) | (vlSelf->top__DOT__de__DOT__srli 
                                         >> 0x1fU)));
    __Vtemp780[0xdU] = (0x10U | ((vlSelf->top__DOT__de__DOT__srai 
                                  << 7U) | (vlSelf->top__DOT__de__DOT__slli 
                                            >> 0x1cU)));
    __Vtemp780[0xeU] = (0x80U | ((vlSelf->top__DOT__de__DOT__sltiu 
                                  << 0xaU) | (vlSelf->top__DOT__de__DOT__srai 
                                              >> 0x19U)));
    __Vtemp780[0xfU] = (vlSelf->top__DOT__de__DOT__sltiu 
                        >> 0x16U);
    VL_EXTEND_WW(493,490, __Vtemp781, __Vtemp780);
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
    __Vtemp782[0xfU] = ((vlSelf->top__DOT__de__DOT__sub 
                         << 0xdU) | __Vtemp781[0xfU]);
    __Vtemp782[0x10U] = (vlSelf->top__DOT__de__DOT__sub 
                         >> 0x13U);
    VL_EXTEND_WW(528,525, __Vtemp783, __Vtemp782);
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
    __Vtemp784[0x10U] = ((vlSelf->top__DOT__de__DOT__slt 
                          << 0x10U) | __Vtemp783[0x10U]);
    __Vtemp784[0x11U] = (vlSelf->top__DOT__de__DOT__slt 
                         >> 0x10U);
    VL_EXTEND_WW(563,560, __Vtemp785, __Vtemp784);
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
    __Vtemp786[0x11U] = ((vlSelf->top__DOT__de__DOT__sltu 
                          << 0x13U) | __Vtemp785[0x11U]);
    __Vtemp786[0x12U] = (vlSelf->top__DOT__de__DOT__sltu 
                         >> 0xdU);
    VL_EXTEND_WW(598,595, __Vtemp787, __Vtemp786);
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
    __Vtemp788[0x12U] = ((vlSelf->top__DOT__de__DOT__Or 
                          << 0x16U) | __Vtemp787[0x12U]);
    __Vtemp788[0x13U] = (vlSelf->top__DOT__de__DOT__Or 
                         >> 0xaU);
    VL_EXTEND_WW(633,630, __Vtemp789, __Vtemp788);
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
    __Vtemp790[0x13U] = ((vlSelf->top__DOT__de__DOT__Xor 
                          << 0x19U) | __Vtemp789[0x13U]);
    __Vtemp790[0x14U] = (vlSelf->top__DOT__de__DOT__Xor 
                         >> 7U);
    VL_EXTEND_WW(668,665, __Vtemp791, __Vtemp790);
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
    __Vtemp792[0x14U] = ((vlSelf->top__DOT__de__DOT__And 
                          << 0x1cU) | __Vtemp791[0x14U]);
    __Vtemp792[0x15U] = (vlSelf->top__DOT__de__DOT__And 
                         >> 4U);
    VL_EXTEND_WW(703,700, __Vtemp793, __Vtemp792);
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
    __Vtemp794[0x15U] = ((vlSelf->top__DOT__de__DOT__Mul 
                          << 0x1fU) | __Vtemp793[0x15U]);
    __Vtemp794[0x16U] = (vlSelf->top__DOT__de__DOT__Mul 
                         >> 1U);
    VL_EXTEND_WW(738,735, __Vtemp795, __Vtemp794);
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
    __Vtemp796[0x17U] = ((vlSelf->top__DOT__de__DOT__Add 
                          << 2U) | __Vtemp795[0x17U]);
    __Vtemp796[0x18U] = (vlSelf->top__DOT__de__DOT__Add 
                         >> 0x1eU);
    VL_EXTEND_WW(773,770, __Vtemp797, __Vtemp796);
    __Vtemp798[0U] = __Vtemp797[0U];
    __Vtemp798[1U] = __Vtemp797[1U];
    __Vtemp798[2U] = __Vtemp797[2U];
    __Vtemp798[3U] = __Vtemp797[3U];
    __Vtemp798[4U] = __Vtemp797[4U];
    __Vtemp798[5U] = __Vtemp797[5U];
    __Vtemp798[6U] = __Vtemp797[6U];
    __Vtemp798[7U] = __Vtemp797[7U];
    __Vtemp798[8U] = __Vtemp797[8U];
    __Vtemp798[9U] = __Vtemp797[9U];
    __Vtemp798[0xaU] = __Vtemp797[0xaU];
    __Vtemp798[0xbU] = __Vtemp797[0xbU];
    __Vtemp798[0xcU] = __Vtemp797[0xcU];
    __Vtemp798[0xdU] = __Vtemp797[0xdU];
    __Vtemp798[0xeU] = __Vtemp797[0xeU];
    __Vtemp798[0xfU] = __Vtemp797[0xfU];
    __Vtemp798[0x10U] = __Vtemp797[0x10U];
    __Vtemp798[0x11U] = __Vtemp797[0x11U];
    __Vtemp798[0x12U] = __Vtemp797[0x12U];
    __Vtemp798[0x13U] = __Vtemp797[0x13U];
    __Vtemp798[0x14U] = __Vtemp797[0x14U];
    __Vtemp798[0x15U] = __Vtemp797[0x15U];
    __Vtemp798[0x16U] = __Vtemp797[0x16U];
    __Vtemp798[0x17U] = __Vtemp797[0x17U];
    __Vtemp798[0x18U] = ((vlSelf->top__DOT__de__DOT__sraw 
                          << 5U) | __Vtemp797[0x18U]);
    __Vtemp798[0x19U] = (vlSelf->top__DOT__de__DOT__sraw 
                         >> 0x1bU);
    VL_EXTEND_WW(808,805, __Vtemp799, __Vtemp798);
    __Vtemp800[0U] = __Vtemp799[0U];
    __Vtemp800[1U] = __Vtemp799[1U];
    __Vtemp800[2U] = __Vtemp799[2U];
    __Vtemp800[3U] = __Vtemp799[3U];
    __Vtemp800[4U] = __Vtemp799[4U];
    __Vtemp800[5U] = __Vtemp799[5U];
    __Vtemp800[6U] = __Vtemp799[6U];
    __Vtemp800[7U] = __Vtemp799[7U];
    __Vtemp800[8U] = __Vtemp799[8U];
    __Vtemp800[9U] = __Vtemp799[9U];
    __Vtemp800[0xaU] = __Vtemp799[0xaU];
    __Vtemp800[0xbU] = __Vtemp799[0xbU];
    __Vtemp800[0xcU] = __Vtemp799[0xcU];
    __Vtemp800[0xdU] = __Vtemp799[0xdU];
    __Vtemp800[0xeU] = __Vtemp799[0xeU];
    __Vtemp800[0xfU] = __Vtemp799[0xfU];
    __Vtemp800[0x10U] = __Vtemp799[0x10U];
    __Vtemp800[0x11U] = __Vtemp799[0x11U];
    __Vtemp800[0x12U] = __Vtemp799[0x12U];
    __Vtemp800[0x13U] = __Vtemp799[0x13U];
    __Vtemp800[0x14U] = __Vtemp799[0x14U];
    __Vtemp800[0x15U] = __Vtemp799[0x15U];
    __Vtemp800[0x16U] = __Vtemp799[0x16U];
    __Vtemp800[0x17U] = __Vtemp799[0x17U];
    __Vtemp800[0x18U] = __Vtemp799[0x18U];
    __Vtemp800[0x19U] = ((vlSelf->top__DOT__de__DOT__srlw 
                          << 8U) | __Vtemp799[0x19U]);
    __Vtemp800[0x1aU] = (vlSelf->top__DOT__de__DOT__srlw 
                         >> 0x18U);
    VL_EXTEND_WW(843,840, __Vtemp801, __Vtemp800);
    __Vtemp802[0U] = __Vtemp801[0U];
    __Vtemp802[1U] = __Vtemp801[1U];
    __Vtemp802[2U] = __Vtemp801[2U];
    __Vtemp802[3U] = __Vtemp801[3U];
    __Vtemp802[4U] = __Vtemp801[4U];
    __Vtemp802[5U] = __Vtemp801[5U];
    __Vtemp802[6U] = __Vtemp801[6U];
    __Vtemp802[7U] = __Vtemp801[7U];
    __Vtemp802[8U] = __Vtemp801[8U];
    __Vtemp802[9U] = __Vtemp801[9U];
    __Vtemp802[0xaU] = __Vtemp801[0xaU];
    __Vtemp802[0xbU] = __Vtemp801[0xbU];
    __Vtemp802[0xcU] = __Vtemp801[0xcU];
    __Vtemp802[0xdU] = __Vtemp801[0xdU];
    __Vtemp802[0xeU] = __Vtemp801[0xeU];
    __Vtemp802[0xfU] = __Vtemp801[0xfU];
    __Vtemp802[0x10U] = __Vtemp801[0x10U];
    __Vtemp802[0x11U] = __Vtemp801[0x11U];
    __Vtemp802[0x12U] = __Vtemp801[0x12U];
    __Vtemp802[0x13U] = __Vtemp801[0x13U];
    __Vtemp802[0x14U] = __Vtemp801[0x14U];
    __Vtemp802[0x15U] = __Vtemp801[0x15U];
    __Vtemp802[0x16U] = __Vtemp801[0x16U];
    __Vtemp802[0x17U] = __Vtemp801[0x17U];
    __Vtemp802[0x18U] = __Vtemp801[0x18U];
    __Vtemp802[0x19U] = __Vtemp801[0x19U];
    __Vtemp802[0x1aU] = ((vlSelf->top__DOT__de__DOT__sll 
                          << 0xbU) | __Vtemp801[0x1aU]);
    __Vtemp802[0x1bU] = (vlSelf->top__DOT__de__DOT__sll 
                         >> 0x15U);
    VL_EXTEND_WW(878,875, __Vtemp803, __Vtemp802);
    __Vtemp804[0U] = __Vtemp803[0U];
    __Vtemp804[1U] = __Vtemp803[1U];
    __Vtemp804[2U] = __Vtemp803[2U];
    __Vtemp804[3U] = __Vtemp803[3U];
    __Vtemp804[4U] = __Vtemp803[4U];
    __Vtemp804[5U] = __Vtemp803[5U];
    __Vtemp804[6U] = __Vtemp803[6U];
    __Vtemp804[7U] = __Vtemp803[7U];
    __Vtemp804[8U] = __Vtemp803[8U];
    __Vtemp804[9U] = __Vtemp803[9U];
    __Vtemp804[0xaU] = __Vtemp803[0xaU];
    __Vtemp804[0xbU] = __Vtemp803[0xbU];
    __Vtemp804[0xcU] = __Vtemp803[0xcU];
    __Vtemp804[0xdU] = __Vtemp803[0xdU];
    __Vtemp804[0xeU] = __Vtemp803[0xeU];
    __Vtemp804[0xfU] = __Vtemp803[0xfU];
    __Vtemp804[0x10U] = __Vtemp803[0x10U];
    __Vtemp804[0x11U] = __Vtemp803[0x11U];
    __Vtemp804[0x12U] = __Vtemp803[0x12U];
    __Vtemp804[0x13U] = __Vtemp803[0x13U];
    __Vtemp804[0x14U] = __Vtemp803[0x14U];
    __Vtemp804[0x15U] = __Vtemp803[0x15U];
    __Vtemp804[0x16U] = __Vtemp803[0x16U];
    __Vtemp804[0x17U] = __Vtemp803[0x17U];
    __Vtemp804[0x18U] = __Vtemp803[0x18U];
    __Vtemp804[0x19U] = __Vtemp803[0x19U];
    __Vtemp804[0x1aU] = __Vtemp803[0x1aU];
    __Vtemp804[0x1bU] = ((vlSelf->top__DOT__de__DOT__sllw 
                          << 0xeU) | __Vtemp803[0x1bU]);
    __Vtemp804[0x1cU] = (vlSelf->top__DOT__de__DOT__sllw 
                         >> 0x12U);
    VL_EXTEND_WW(913,910, __Vtemp805, __Vtemp804);
    VL_CONCAT_WWW(2065,1152,913, __Vtemp806, __Vtemp755, __Vtemp805);
    VL_ASSIGN_W(2065,vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4, __Vtemp806);
    if ((1U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__data_list
               [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[6132]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xffeU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (1U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__data_list
               [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[6133]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xffdU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (2U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__data_list
               [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[6134]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xffbU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (4U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__data_list
               [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[6135]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xff7U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (8U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__data_list
                  [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[6136]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xfefU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (0x10U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__data_list
                  [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[6137]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xfdfU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (0x20U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__data_list
                  [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[6138]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xfbfU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (0x40U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__data_list
                  [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[6139]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xf7fU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (0x80U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__data_list
                   [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[6140]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xeffU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (0x100U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__data_list
                   [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[6141]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xdffU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (0x200U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__data_list
                   [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[6142]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xbffU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (0x400U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__data_list
                   [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[6143]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0x7ffU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (0x800U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__data_list
               [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[6132]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xffeU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (1U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__data_list
               [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[6133]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xffdU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (2U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__data_list
               [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[6134]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xffbU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (4U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__data_list
               [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[6135]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xff7U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (8U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__data_list
                  [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[6136]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xfefU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (0x10U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__data_list
                  [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[6137]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xfdfU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (0x20U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__data_list
                  [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[6138]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xfbfU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (0x40U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__data_list
                  [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[6139]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xf7fU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (0x80U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__data_list
                   [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[6140]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xeffU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (0x100U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__data_list
                   [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[6141]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xdffU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (0x200U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__data_list
                   [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[6142]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xbffU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (0x400U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__data_list
                   [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[6143]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0x7ffU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (0x800U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
               [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[6100]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffffffeU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (1U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
               [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[6101]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffffffdU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (2U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
               [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[6102]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffffffbU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (4U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
               [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[6103]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffffff7U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (8U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                  [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[6104]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffffffefU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x10U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                  [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[6105]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffffffdfU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x20U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                  [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[6106]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffffffbfU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x40U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                  [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[6107]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffffff7fU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x80U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                   [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[6108]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffffeffU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x100U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                   [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[6109]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffffdffU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x200U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                   [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[6110]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffffbffU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x400U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                   [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[6111]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x800U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                    [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[6112]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffffefffU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x1000U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                    [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[6113]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffffdfffU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x2000U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                    [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[6114]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffffbfffU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x4000U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                    [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[6115]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffff7fffU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x8000U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                     [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[6116]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffeffffU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x10000U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                     [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[6117]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffdffffU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x20000U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                     [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[6118]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffbffffU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x40000U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                     [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[6119]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x80000U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                      [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[6120]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffefffffU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x100000U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                      [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[6121]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffdfffffU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x200000U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                      [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[6122]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffbfffffU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x400000U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                      [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[6123]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xff7fffffU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x800000U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                       [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[6124]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfeffffffU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x1000000U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                       [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[6125]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfdffffffU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x2000000U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                       [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[6126]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfbffffffU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x4000000U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                       [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[6127]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x8000000U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                        [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                        [0U]))) {
        ++(vlSymsp->__Vcoverage[6128]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xefffffffU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x10000000U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                        [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                        [0U]))) {
        ++(vlSymsp->__Vcoverage[6129]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xdfffffffU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x20000000U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                        [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                        [0U]))) {
        ++(vlSymsp->__Vcoverage[6130]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x40000000U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                         [0U]));
    }
    if (((vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
          [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
          [0U]) >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[6131]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0x7fffffffU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x80000000U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
               [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[6100]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffffffeU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (1U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
               [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[6101]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffffffdU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (2U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
               [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[6102]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffffffbU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (4U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
               [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[6103]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffffff7U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (8U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                  [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[6104]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffffffefU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x10U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                  [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[6105]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffffffdfU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x20U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                  [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[6106]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffffffbfU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x40U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                  [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[6107]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffffff7fU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x80U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                   [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[6108]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffffeffU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x100U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                   [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[6109]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffffdffU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x200U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                   [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[6110]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffffbffU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x400U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                   [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[6111]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x800U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                    [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[6112]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffffefffU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x1000U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                    [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[6113]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffffdfffU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x2000U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                    [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[6114]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffffbfffU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x4000U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                    [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[6115]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffff7fffU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x8000U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                     [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[6116]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffeffffU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x10000U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                     [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[6117]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffdffffU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x20000U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                     [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[6118]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffbffffU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x40000U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                     [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[6119]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x80000U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                      [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[6120]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffefffffU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x100000U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                      [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[6121]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffdfffffU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x200000U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                      [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[6122]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffbfffffU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x400000U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                      [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[6123]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xff7fffffU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x800000U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                       [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[6124]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfeffffffU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x1000000U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                       [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[6125]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfdffffffU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x2000000U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                       [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[6126]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfbffffffU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x4000000U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                       [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[6127]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x8000000U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                        [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                        [0U]))) {
        ++(vlSymsp->__Vcoverage[6128]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xefffffffU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x10000000U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                        [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                        [0U]))) {
        ++(vlSymsp->__Vcoverage[6129]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xdfffffffU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x20000000U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                        [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                        [0U]))) {
        ++(vlSymsp->__Vcoverage[6130]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x40000000U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                         [0U]));
    }
    if (((vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
          [0U] ^ vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
          [0U]) >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[6131]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0x7fffffffU & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x80000000U & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                         [0U]));
    }
    vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__lut_out 
        = ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__data_list
           [0U]);
    ++(vlSymsp->__Vcoverage[6157]);
    ++(vlSymsp->__Vcoverage[6159]);
    ++(vlSymsp->__Vcoverage[6160]);
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
        ++(vlSymsp->__Vcoverage[6491]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0x1eU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (1U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__data_list
               [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__data_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[6492]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0x1dU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (2U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__data_list
               [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__data_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[6493]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0x1bU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (4U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__data_list
               [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__data_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[6494]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0x17U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (8U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__data_list
                  [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__data_list
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[6495]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xfU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (0x10U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__data_list
               [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__data_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[6491]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0x1eU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (1U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__data_list
               [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__data_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[6492]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0x1dU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (2U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__data_list
               [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__data_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[6493]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0x1bU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (4U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__data_list
               [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__data_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[6494]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0x17U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (8U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__data_list
                  [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__data_list
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[6495]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__data_list[0U] 
            = ((0xfU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__data_list
                [0U]) | (0x10U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__data_list
                         [0U]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
               [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[6459]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffffffeU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (1U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
               [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[6460]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffffffdU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (2U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
               [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[6461]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffffffbU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (4U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
               [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[6462]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffffff7U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (8U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                  [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[6463]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffffffefU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x10U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                  [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[6464]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffffffdfU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x20U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                  [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[6465]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffffffbfU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x40U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                  [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[6466]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffffff7fU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x80U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                   [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[6467]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffffeffU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x100U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                   [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[6468]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffffdffU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x200U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                   [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[6469]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffffbffU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x400U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                   [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[6470]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x800U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                    [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[6471]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffffefffU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x1000U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                    [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[6472]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffffdfffU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x2000U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                    [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[6473]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffffbfffU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x4000U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                    [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[6474]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffff7fffU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x8000U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                     [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[6475]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffeffffU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x10000U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                     [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[6476]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffdffffU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x20000U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                     [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[6477]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffbffffU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x40000U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                     [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[6478]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x80000U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                      [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[6479]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffefffffU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x100000U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                      [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[6480]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffdfffffU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x200000U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                      [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[6481]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffbfffffU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x400000U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                      [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[6482]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xff7fffffU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x800000U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                       [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[6483]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfeffffffU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x1000000U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                       [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[6484]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfdffffffU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x2000000U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                       [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[6485]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfbffffffU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x4000000U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                       [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[6486]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x8000000U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                        [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                        [0U]))) {
        ++(vlSymsp->__Vcoverage[6487]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xefffffffU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x10000000U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                        [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                        [0U]))) {
        ++(vlSymsp->__Vcoverage[6488]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xdfffffffU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x20000000U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                        [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                        [0U]))) {
        ++(vlSymsp->__Vcoverage[6489]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x40000000U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                         [0U]));
    }
    if (((vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
          [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
          [0U]) >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[6490]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0x7fffffffU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x80000000U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
               [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[6459]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffffffeU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (1U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
               [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[6460]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffffffdU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (2U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
               [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[6461]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffffffbU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (4U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
               [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[6462]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffffff7U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (8U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                  [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[6463]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffffffefU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x10U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                  [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[6464]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffffffdfU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x20U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                  [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[6465]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffffffbfU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x40U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                  [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[6466]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffffff7fU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x80U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                   [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[6467]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffffeffU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x100U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                   [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[6468]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffffdffU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x200U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                   [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[6469]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffffbffU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x400U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                   [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[6470]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x800U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                    [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[6471]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffffefffU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x1000U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                    [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[6472]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffffdfffU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x2000U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                    [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[6473]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffffbfffU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x4000U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                    [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[6474]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffff7fffU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x8000U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                     [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[6475]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffeffffU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x10000U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                     [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[6476]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffdffffU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x20000U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                     [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[6477]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffbffffU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x40000U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                     [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[6478]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x80000U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                      [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[6479]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffefffffU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x100000U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                      [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[6480]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffdfffffU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x200000U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                      [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[6481]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffbfffffU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x400000U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                      [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[6482]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xff7fffffU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x800000U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                       [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[6483]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfeffffffU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x1000000U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                       [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[6484]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfdffffffU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x2000000U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                       [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[6485]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfbffffffU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x4000000U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                       [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[6486]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x8000000U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                        [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                        [0U]))) {
        ++(vlSymsp->__Vcoverage[6487]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xefffffffU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x10000000U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                        [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                        [0U]))) {
        ++(vlSymsp->__Vcoverage[6488]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xdfffffffU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x20000000U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                        [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                        [0U]))) {
        ++(vlSymsp->__Vcoverage[6489]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x40000000U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                         [0U]));
    }
    if (((vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
          [0U] ^ vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
          [0U]) >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[6490]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0x7fffffffU & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x80000000U & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                         [0U]));
    }
    vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__lut_out 
        = ((- (IData)((vlSelf->inst == vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__data_list
           [0U]);
    ++(vlSymsp->__Vcoverage[6502]);
    ++(vlSymsp->__Vcoverage[6504]);
    ++(vlSymsp->__Vcoverage[6505]);
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
        ++(vlSymsp->__Vcoverage[6257]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffffffeU & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (1U & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
               [0U] ^ vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[6258]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffffffdU & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (2U & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
               [0U] ^ vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[6259]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffffffbU & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (4U & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
               [0U] ^ vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[6260]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffffff7U & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (8U & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                  [0U] ^ vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[6261]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffffffefU & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x10U & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                  [0U] ^ vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[6262]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffffffdfU & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x20U & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                  [0U] ^ vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[6263]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffffffbfU & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x40U & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                  [0U] ^ vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[6264]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffffff7fU & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x80U & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                   [0U] ^ vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[6265]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffffeffU & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x100U & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                   [0U] ^ vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[6266]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffffdffU & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x200U & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                   [0U] ^ vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[6267]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffffbffU & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x400U & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                   [0U] ^ vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[6268]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x800U & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                    [0U] ^ vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[6269]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffffefffU & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x1000U & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                    [0U] ^ vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[6270]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffffdfffU & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x2000U & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                    [0U] ^ vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[6271]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffffbfffU & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x4000U & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                    [0U] ^ vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[6272]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffff7fffU & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x8000U & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                     [0U] ^ vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[6273]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffeffffU & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x10000U & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                     [0U] ^ vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[6274]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffdffffU & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x20000U & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                     [0U] ^ vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[6275]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffbffffU & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x40000U & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                     [0U] ^ vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[6276]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x80000U & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                      [0U] ^ vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[6277]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffefffffU & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x100000U & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                      [0U] ^ vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[6278]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffdfffffU & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x200000U & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                      [0U] ^ vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[6279]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffbfffffU & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x400000U & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                      [0U] ^ vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[6280]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xff7fffffU & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x800000U & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                       [0U] ^ vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[6281]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfeffffffU & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x1000000U & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                       [0U] ^ vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[6282]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfdffffffU & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x2000000U & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                       [0U] ^ vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[6283]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfbffffffU & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x4000000U & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                       [0U] ^ vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[6284]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x8000000U & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                        [0U] ^ vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                        [0U]))) {
        ++(vlSymsp->__Vcoverage[6285]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xefffffffU & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x10000000U & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                        [0U] ^ vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                        [0U]))) {
        ++(vlSymsp->__Vcoverage[6286]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xdfffffffU & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x20000000U & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                        [0U] ^ vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                        [0U]))) {
        ++(vlSymsp->__Vcoverage[6287]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x40000000U & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                         [0U]));
    }
    if (((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
          [0U] ^ vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
          [0U]) >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[6288]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0x7fffffffU & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x80000000U & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
               [0U] ^ vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[6257]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffffffeU & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (1U & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
               [0U] ^ vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[6258]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffffffdU & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (2U & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
               [0U] ^ vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[6259]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffffffbU & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (4U & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
               [0U] ^ vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[6260]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffffff7U & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (8U & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                  [0U] ^ vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[6261]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffffffefU & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x10U & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                  [0U] ^ vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[6262]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffffffdfU & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x20U & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                  [0U] ^ vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[6263]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffffffbfU & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x40U & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                  [0U] ^ vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[6264]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffffff7fU & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x80U & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                   [0U] ^ vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[6265]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffffeffU & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x100U & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                   [0U] ^ vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[6266]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffffdffU & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x200U & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                   [0U] ^ vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[6267]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffffbffU & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x400U & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                   [0U] ^ vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[6268]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x800U & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                    [0U] ^ vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[6269]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffffefffU & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x1000U & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                    [0U] ^ vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[6270]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffffdfffU & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x2000U & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                    [0U] ^ vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[6271]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffffbfffU & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x4000U & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                    [0U] ^ vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[6272]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffff7fffU & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x8000U & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                     [0U] ^ vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[6273]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffeffffU & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x10000U & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                     [0U] ^ vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[6274]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffdffffU & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x20000U & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                     [0U] ^ vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[6275]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfffbffffU & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x40000U & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                     [0U] ^ vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[6276]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x80000U & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                      [0U] ^ vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[6277]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffefffffU & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x100000U & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                      [0U] ^ vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[6278]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffdfffffU & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x200000U & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                      [0U] ^ vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[6279]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xffbfffffU & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x400000U & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                      [0U] ^ vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[6280]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xff7fffffU & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x800000U & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                       [0U] ^ vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[6281]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfeffffffU & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x1000000U & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                       [0U] ^ vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[6282]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfdffffffU & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x2000000U & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                       [0U] ^ vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[6283]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xfbffffffU & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x4000000U & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                       [0U] ^ vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[6284]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x8000000U & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                        [0U] ^ vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                        [0U]))) {
        ++(vlSymsp->__Vcoverage[6285]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xefffffffU & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x10000000U & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                        [0U] ^ vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                        [0U]))) {
        ++(vlSymsp->__Vcoverage[6286]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xdfffffffU & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x20000000U & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                        [0U] ^ vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                        [0U]))) {
        ++(vlSymsp->__Vcoverage[6287]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x40000000U & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                         [0U]));
    }
    if (((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
          [0U] ^ vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
          [0U]) >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[6288]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list[0U] 
            = ((0x7fffffffU & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__key_list
                [0U]) | (0x80000000U & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
                         [0U]));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__data_list
                       [0U]) ^ (IData)(vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__data_list
                                       [0U])))) {
        ++(vlSymsp->__Vcoverage[6289]);
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
        ++(vlSymsp->__Vcoverage[6290]);
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
        ++(vlSymsp->__Vcoverage[6291]);
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
        ++(vlSymsp->__Vcoverage[6292]);
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
        ++(vlSymsp->__Vcoverage[6293]);
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
        ++(vlSymsp->__Vcoverage[6294]);
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
        ++(vlSymsp->__Vcoverage[6295]);
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
        ++(vlSymsp->__Vcoverage[6296]);
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
        ++(vlSymsp->__Vcoverage[6297]);
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
        ++(vlSymsp->__Vcoverage[6298]);
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
        ++(vlSymsp->__Vcoverage[6299]);
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
        ++(vlSymsp->__Vcoverage[6300]);
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
        ++(vlSymsp->__Vcoverage[6301]);
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
        ++(vlSymsp->__Vcoverage[6302]);
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
        ++(vlSymsp->__Vcoverage[6303]);
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
        ++(vlSymsp->__Vcoverage[6304]);
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
        ++(vlSymsp->__Vcoverage[6305]);
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
        ++(vlSymsp->__Vcoverage[6306]);
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
        ++(vlSymsp->__Vcoverage[6307]);
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
        ++(vlSymsp->__Vcoverage[6308]);
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
        ++(vlSymsp->__Vcoverage[6309]);
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
        ++(vlSymsp->__Vcoverage[6310]);
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
        ++(vlSymsp->__Vcoverage[6311]);
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
        ++(vlSymsp->__Vcoverage[6312]);
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
        ++(vlSymsp->__Vcoverage[6313]);
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
        ++(vlSymsp->__Vcoverage[6314]);
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
        ++(vlSymsp->__Vcoverage[6315]);
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
        ++(vlSymsp->__Vcoverage[6316]);
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
        ++(vlSymsp->__Vcoverage[6317]);
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
        ++(vlSymsp->__Vcoverage[6318]);
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
        ++(vlSymsp->__Vcoverage[6319]);
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
        ++(vlSymsp->__Vcoverage[6320]);
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
        ++(vlSymsp->__Vcoverage[6321]);
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
        ++(vlSymsp->__Vcoverage[6322]);
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
        ++(vlSymsp->__Vcoverage[6323]);
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
        ++(vlSymsp->__Vcoverage[6324]);
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
        ++(vlSymsp->__Vcoverage[6325]);
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
        ++(vlSymsp->__Vcoverage[6326]);
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
        ++(vlSymsp->__Vcoverage[6327]);
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
        ++(vlSymsp->__Vcoverage[6328]);
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
        ++(vlSymsp->__Vcoverage[6329]);
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
        ++(vlSymsp->__Vcoverage[6330]);
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
        ++(vlSymsp->__Vcoverage[6331]);
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
        ++(vlSymsp->__Vcoverage[6332]);
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
        ++(vlSymsp->__Vcoverage[6333]);
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
        ++(vlSymsp->__Vcoverage[6334]);
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
        ++(vlSymsp->__Vcoverage[6335]);
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
        ++(vlSymsp->__Vcoverage[6336]);
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
        ++(vlSymsp->__Vcoverage[6337]);
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
        ++(vlSymsp->__Vcoverage[6338]);
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
        ++(vlSymsp->__Vcoverage[6339]);
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
        ++(vlSymsp->__Vcoverage[6340]);
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
        ++(vlSymsp->__Vcoverage[6341]);
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
        ++(vlSymsp->__Vcoverage[6342]);
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
        ++(vlSymsp->__Vcoverage[6343]);
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
        ++(vlSymsp->__Vcoverage[6344]);
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
        ++(vlSymsp->__Vcoverage[6345]);
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
        ++(vlSymsp->__Vcoverage[6346]);
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
        ++(vlSymsp->__Vcoverage[6347]);
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
        ++(vlSymsp->__Vcoverage[6348]);
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
        ++(vlSymsp->__Vcoverage[6349]);
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
        ++(vlSymsp->__Vcoverage[6350]);
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
        ++(vlSymsp->__Vcoverage[6351]);
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
        ++(vlSymsp->__Vcoverage[6352]);
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
        ++(vlSymsp->__Vcoverage[6289]);
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
        ++(vlSymsp->__Vcoverage[6290]);
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
        ++(vlSymsp->__Vcoverage[6291]);
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
        ++(vlSymsp->__Vcoverage[6292]);
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
        ++(vlSymsp->__Vcoverage[6293]);
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
        ++(vlSymsp->__Vcoverage[6294]);
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
        ++(vlSymsp->__Vcoverage[6295]);
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
        ++(vlSymsp->__Vcoverage[6296]);
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
        ++(vlSymsp->__Vcoverage[6297]);
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
        ++(vlSymsp->__Vcoverage[6298]);
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
        ++(vlSymsp->__Vcoverage[6299]);
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
        ++(vlSymsp->__Vcoverage[6300]);
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
        ++(vlSymsp->__Vcoverage[6301]);
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
        ++(vlSymsp->__Vcoverage[6302]);
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
        ++(vlSymsp->__Vcoverage[6303]);
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
        ++(vlSymsp->__Vcoverage[6304]);
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
        ++(vlSymsp->__Vcoverage[6305]);
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
        ++(vlSymsp->__Vcoverage[6306]);
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
        ++(vlSymsp->__Vcoverage[6307]);
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
        ++(vlSymsp->__Vcoverage[6308]);
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
        ++(vlSymsp->__Vcoverage[6309]);
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
        ++(vlSymsp->__Vcoverage[6310]);
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
        ++(vlSymsp->__Vcoverage[6311]);
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
        ++(vlSymsp->__Vcoverage[6312]);
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
        ++(vlSymsp->__Vcoverage[6313]);
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
        ++(vlSymsp->__Vcoverage[6314]);
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
        ++(vlSymsp->__Vcoverage[6315]);
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
        ++(vlSymsp->__Vcoverage[6316]);
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
        ++(vlSymsp->__Vcoverage[6317]);
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
        ++(vlSymsp->__Vcoverage[6318]);
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
        ++(vlSymsp->__Vcoverage[6319]);
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
        ++(vlSymsp->__Vcoverage[6320]);
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
        ++(vlSymsp->__Vcoverage[6321]);
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
        ++(vlSymsp->__Vcoverage[6322]);
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
        ++(vlSymsp->__Vcoverage[6323]);
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
        ++(vlSymsp->__Vcoverage[6324]);
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
        ++(vlSymsp->__Vcoverage[6325]);
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
        ++(vlSymsp->__Vcoverage[6326]);
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
        ++(vlSymsp->__Vcoverage[6327]);
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
        ++(vlSymsp->__Vcoverage[6328]);
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
        ++(vlSymsp->__Vcoverage[6329]);
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
        ++(vlSymsp->__Vcoverage[6330]);
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
        ++(vlSymsp->__Vcoverage[6331]);
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
        ++(vlSymsp->__Vcoverage[6332]);
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
        ++(vlSymsp->__Vcoverage[6333]);
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
        ++(vlSymsp->__Vcoverage[6334]);
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
        ++(vlSymsp->__Vcoverage[6335]);
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
        ++(vlSymsp->__Vcoverage[6336]);
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
        ++(vlSymsp->__Vcoverage[6337]);
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
        ++(vlSymsp->__Vcoverage[6338]);
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
        ++(vlSymsp->__Vcoverage[6339]);
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
        ++(vlSymsp->__Vcoverage[6340]);
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
        ++(vlSymsp->__Vcoverage[6341]);
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
        ++(vlSymsp->__Vcoverage[6342]);
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
        ++(vlSymsp->__Vcoverage[6343]);
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
        ++(vlSymsp->__Vcoverage[6344]);
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
        ++(vlSymsp->__Vcoverage[6345]);
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
        ++(vlSymsp->__Vcoverage[6346]);
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
        ++(vlSymsp->__Vcoverage[6347]);
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
        ++(vlSymsp->__Vcoverage[6348]);
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
        ++(vlSymsp->__Vcoverage[6349]);
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
        ++(vlSymsp->__Vcoverage[6350]);
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
        ++(vlSymsp->__Vcoverage[6351]);
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
        ++(vlSymsp->__Vcoverage[6352]);
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
    ++(vlSymsp->__Vcoverage[6418]);
    ++(vlSymsp->__Vcoverage[6420]);
    ++(vlSymsp->__Vcoverage[6421]);
    vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__hit 
        = (vlSelf->inst == vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__i = 1U;
    vlSelf->top__DOT__de__DOT__wcsrdata2 = ((IData)(vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__hit)
                                             ? vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out
                                             : 0ULL);
    if ((1U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U] 
               ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[5286]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U] 
            = ((0xfffffffeU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U]) 
               | (1U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U] 
               ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[5287]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U] 
            = ((0xfffffffdU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U]) 
               | (2U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U] 
               ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[5288]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U] 
            = ((0xfffffffbU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U]) 
               | (4U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U]));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U] 
               ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[5289]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U] 
            = ((0xfffffff7U & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U]) 
               | (8U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U]));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U] 
                  ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[5290]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U] 
            = ((0xffffffefU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U]) 
               | (0x10U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U]));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U] 
                  ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[5291]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U] 
            = ((0xffffffdfU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U]) 
               | (0x20U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U]));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U] 
                  ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[5292]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U] 
            = ((0xffffffbfU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U]) 
               | (0x40U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U]));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U] 
                  ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[5293]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U] 
            = ((0xffffff7fU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U]) 
               | (0x80U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U]));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U] 
                   ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[5294]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U] 
            = ((0xfffffeffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U]) 
               | (0x100U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U]));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U] 
                   ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[5295]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U] 
            = ((0xfffffdffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U]) 
               | (0x200U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U]));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U] 
                   ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[5296]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U] 
            = ((0xfffffbffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U]) 
               | (0x400U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U]));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U] 
                   ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[5297]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U]) 
               | (0x800U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U] 
                    ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[5298]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U] 
            = ((0xffffefffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U]) 
               | (0x1000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U] 
                    ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[5299]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U] 
            = ((0xffffdfffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U]) 
               | (0x2000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U] 
                    ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[5300]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U] 
            = ((0xffffbfffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U]) 
               | (0x4000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U] 
                    ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[5301]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U] 
            = ((0xffff7fffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U]) 
               | (0x8000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U] 
                     ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[5302]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U] 
            = ((0xfffeffffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U]) 
               | (0x10000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U] 
                     ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[5303]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U] 
            = ((0xfffdffffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U]) 
               | (0x20000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U] 
                     ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[5304]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U] 
            = ((0xfffbffffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U]) 
               | (0x40000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U] 
                     ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[5305]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U]) 
               | (0x80000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U] 
                      ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[5306]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U] 
            = ((0xffefffffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U]) 
               | (0x100000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U] 
                      ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[5307]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U] 
            = ((0xffdfffffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U]) 
               | (0x200000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U] 
                      ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[5308]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U] 
            = ((0xffbfffffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U]) 
               | (0x400000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U] 
                      ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[5309]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U] 
            = ((0xff7fffffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U]) 
               | (0x800000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U] 
                       ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[5310]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U] 
            = ((0xfeffffffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U]) 
               | (0x1000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U] 
                       ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[5311]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U] 
            = ((0xfdffffffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U]) 
               | (0x2000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U] 
                       ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[5312]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U] 
            = ((0xfbffffffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U]) 
               | (0x4000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U] 
                       ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[5313]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U]) 
               | (0x8000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U] 
                        ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[5314]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U] 
            = ((0xefffffffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U]) 
               | (0x10000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U] 
                        ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[5315]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U] 
            = ((0xdfffffffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U]) 
               | (0x20000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U] 
                        ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[5316]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U] 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U]) 
               | (0x40000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U]));
    }
    if (((vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U] 
          ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[5317]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U] 
            = ((0x7fffffffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[0U]) 
               | (0x80000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U] 
               ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[5318]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U] 
            = ((0xfffffffeU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U]) 
               | (1U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U] 
               ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[5319]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U] 
            = ((0xfffffffdU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U]) 
               | (2U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U] 
               ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[5320]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U] 
            = ((0xfffffffbU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U]) 
               | (4U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U]));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U] 
               ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[5321]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U] 
            = ((0xfffffff7U & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U]) 
               | (8U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U]));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U] 
                  ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[5322]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U] 
            = ((0xffffffefU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U]) 
               | (0x10U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U]));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U] 
                  ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[5323]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U] 
            = ((0xffffffdfU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U]) 
               | (0x20U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U]));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U] 
                  ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[5324]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U] 
            = ((0xffffffbfU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U]) 
               | (0x40U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U]));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U] 
                  ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[5325]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U] 
            = ((0xffffff7fU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U]) 
               | (0x80U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U]));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U] 
                   ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[5326]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U] 
            = ((0xfffffeffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U]) 
               | (0x100U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U]));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U] 
                   ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[5327]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U] 
            = ((0xfffffdffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U]) 
               | (0x200U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U]));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U] 
                   ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[5328]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U] 
            = ((0xfffffbffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U]) 
               | (0x400U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U]));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U] 
                   ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[5329]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U]) 
               | (0x800U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U] 
                    ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[5330]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U] 
            = ((0xffffefffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U]) 
               | (0x1000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U] 
                    ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[5331]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U] 
            = ((0xffffdfffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U]) 
               | (0x2000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U] 
                    ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[5332]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U] 
            = ((0xffffbfffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U]) 
               | (0x4000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U] 
                    ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[5333]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U] 
            = ((0xffff7fffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U]) 
               | (0x8000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U] 
                     ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[5334]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U] 
            = ((0xfffeffffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U]) 
               | (0x10000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U] 
                     ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[5335]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U] 
            = ((0xfffdffffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U]) 
               | (0x20000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U] 
                     ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[5336]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U] 
            = ((0xfffbffffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U]) 
               | (0x40000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U] 
                     ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[5337]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U]) 
               | (0x80000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U] 
                      ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[5338]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U] 
            = ((0xffefffffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U]) 
               | (0x100000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U] 
                      ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[5339]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U] 
            = ((0xffdfffffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U]) 
               | (0x200000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U] 
                      ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[5340]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U] 
            = ((0xffbfffffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U]) 
               | (0x400000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U] 
                      ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[5341]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U] 
            = ((0xff7fffffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U]) 
               | (0x800000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U] 
                       ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[5342]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U] 
            = ((0xfeffffffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U]) 
               | (0x1000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U] 
                       ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[5343]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U] 
            = ((0xfdffffffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U]) 
               | (0x2000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U] 
                       ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[5344]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U] 
            = ((0xfbffffffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U]) 
               | (0x4000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U] 
                       ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[5345]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U]) 
               | (0x8000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U] 
                        ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[5346]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U] 
            = ((0xefffffffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U]) 
               | (0x10000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U] 
                        ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[5347]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U] 
            = ((0xdfffffffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U]) 
               | (0x20000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U] 
                        ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[5348]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U] 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U]) 
               | (0x40000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U]));
    }
    if (((vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U] 
          ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[5349]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U] 
            = ((0x7fffffffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[1U]) 
               | (0x80000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U] 
               ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[5350]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U] 
            = ((0xfffffffeU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U]) 
               | (1U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U] 
               ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[5351]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U] 
            = ((0xfffffffdU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U]) 
               | (2U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U] 
               ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[5352]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U] 
            = ((0xfffffffbU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U]) 
               | (4U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U]));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U] 
               ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[5353]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U] 
            = ((0xfffffff7U & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U]) 
               | (8U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U]));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U] 
                  ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[5354]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U] 
            = ((0xffffffefU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U]) 
               | (0x10U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U]));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U] 
                  ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[5355]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U] 
            = ((0xffffffdfU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U]) 
               | (0x20U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U]));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U] 
                  ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[5356]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U] 
            = ((0xffffffbfU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U]) 
               | (0x40U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U]));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U] 
                  ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[5357]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U] 
            = ((0xffffff7fU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U]) 
               | (0x80U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U]));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U] 
                   ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[5358]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U] 
            = ((0xfffffeffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U]) 
               | (0x100U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U]));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U] 
                   ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[5359]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U] 
            = ((0xfffffdffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U]) 
               | (0x200U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U]));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U] 
                   ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[5360]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U] 
            = ((0xfffffbffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U]) 
               | (0x400U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U]));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U] 
                   ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[5361]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U]) 
               | (0x800U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U] 
                    ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[5362]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U] 
            = ((0xffffefffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U]) 
               | (0x1000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U] 
                    ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[5363]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U] 
            = ((0xffffdfffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U]) 
               | (0x2000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U] 
                    ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[5364]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U] 
            = ((0xffffbfffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U]) 
               | (0x4000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U] 
                    ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[5365]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U] 
            = ((0xffff7fffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U]) 
               | (0x8000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U] 
                     ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[5366]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U] 
            = ((0xfffeffffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U]) 
               | (0x10000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U] 
                     ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[5367]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U] 
            = ((0xfffdffffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U]) 
               | (0x20000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U] 
                     ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[5368]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U] 
            = ((0xfffbffffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U]) 
               | (0x40000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U] 
                     ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[5369]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U]) 
               | (0x80000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U] 
                      ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[5370]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U] 
            = ((0xffefffffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U]) 
               | (0x100000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U] 
                      ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[5371]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U] 
            = ((0xffdfffffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U]) 
               | (0x200000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U] 
                      ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[5372]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U] 
            = ((0xffbfffffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U]) 
               | (0x400000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U] 
                      ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[5373]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U] 
            = ((0xff7fffffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U]) 
               | (0x800000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U] 
                       ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[5374]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U] 
            = ((0xfeffffffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U]) 
               | (0x1000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U] 
                       ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[5375]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U] 
            = ((0xfdffffffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U]) 
               | (0x2000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U] 
                       ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[5376]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U] 
            = ((0xfbffffffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U]) 
               | (0x4000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U] 
                       ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[5377]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U]) 
               | (0x8000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U] 
                        ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[5378]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U] 
            = ((0xefffffffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U]) 
               | (0x10000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U] 
                        ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[5379]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U] 
            = ((0xdfffffffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U]) 
               | (0x20000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U] 
                        ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[5380]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U] 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U]) 
               | (0x40000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U]));
    }
    if (((vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U] 
          ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[5381]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U] 
            = ((0x7fffffffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[2U]) 
               | (0x80000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[3U] 
               ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[5382]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U] 
            = ((0xfffffffeU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U]) 
               | (1U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[3U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[3U] 
               ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[5383]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U] 
            = ((0xfffffffdU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U]) 
               | (2U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[3U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[3U] 
               ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[5384]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U] 
            = ((0xfffffffbU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U]) 
               | (4U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[3U]));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[3U] 
               ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[5385]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U] 
            = ((0xfffffff7U & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U]) 
               | (8U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[3U]));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[3U] 
                  ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[5386]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U] 
            = ((0xffffffefU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U]) 
               | (0x10U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[3U]));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[3U] 
                  ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[5387]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U] 
            = ((0xffffffdfU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U]) 
               | (0x20U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[3U]));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[3U] 
                  ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[5388]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U] 
            = ((0xffffffbfU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U]) 
               | (0x40U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[3U]));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[3U] 
                  ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[5389]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U] 
            = ((0xffffff7fU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U]) 
               | (0x80U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[3U]));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[3U] 
                   ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[5390]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U] 
            = ((0xfffffeffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U]) 
               | (0x100U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[3U]));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[3U] 
                   ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[5391]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U] 
            = ((0xfffffdffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U]) 
               | (0x200U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[3U]));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[3U] 
                   ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[5392]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U] 
            = ((0xfffffbffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U]) 
               | (0x400U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[3U]));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[3U] 
                   ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[5393]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U]) 
               | (0x800U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[3U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[3U] 
                    ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[5394]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U] 
            = ((0xffffefffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U]) 
               | (0x1000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[3U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[3U] 
                    ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[5395]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U] 
            = ((0xffffdfffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U]) 
               | (0x2000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[3U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[3U] 
                    ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[5396]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U] 
            = ((0xffffbfffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U]) 
               | (0x4000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[3U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[3U] 
                    ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[5397]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U] 
            = ((0xffff7fffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U]) 
               | (0x8000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[3U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[3U] 
                     ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[5398]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U] 
            = ((0xfffeffffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U]) 
               | (0x10000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[3U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[3U] 
                     ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[5399]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U] 
            = ((0xfffdffffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U]) 
               | (0x20000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[3U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[3U] 
                     ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[5400]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U] 
            = ((0xfffbffffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U]) 
               | (0x40000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[3U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[3U] 
                     ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[5401]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U]) 
               | (0x80000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[3U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[3U] 
                      ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[5402]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U] 
            = ((0xffefffffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U]) 
               | (0x100000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[3U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[3U] 
                      ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[5403]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U] 
            = ((0xffdfffffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U]) 
               | (0x200000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[3U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[3U] 
                      ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[5404]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U] 
            = ((0xffbfffffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U]) 
               | (0x400000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[3U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[3U] 
                      ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[5405]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U] 
            = ((0xff7fffffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U]) 
               | (0x800000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[3U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[3U] 
                       ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[5406]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U] 
            = ((0xfeffffffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U]) 
               | (0x1000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[3U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[3U] 
                       ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[5407]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U] 
            = ((0xfdffffffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U]) 
               | (0x2000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[3U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[3U] 
                       ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[5408]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U] 
            = ((0xfbffffffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U]) 
               | (0x4000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[3U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[3U] 
                       ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[5409]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U]) 
               | (0x8000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[3U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[3U] 
                        ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[5410]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U] 
            = ((0xefffffffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U]) 
               | (0x10000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[3U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[3U] 
                        ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[5411]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U] 
            = ((0xdfffffffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U]) 
               | (0x20000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[3U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[3U] 
                        ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[5412]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U] 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U]) 
               | (0x40000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[3U]));
    }
    if (((vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[3U] 
          ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[5413]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U] 
            = ((0x7fffffffU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[3U]) 
               | (0x80000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[3U]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[4U] 
               ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[5414]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[4U] 
            = ((0xeU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[4U]) 
               | (1U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[4U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[4U] 
               ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[5415]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[4U] 
            = ((0xdU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[4U]) 
               | (2U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[4U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[4U] 
               ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[5416]);
        vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[4U] 
            = ((0xbU & vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[4U]) 
               | (4U & vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[4U]));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT____Vcellinp__m20____pinNumber4[4U] 
               ^ vlSelf->top__DOT__de__DOT__m20__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[5417]);
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
        ++(vlSymsp->__Vcoverage[4741]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U] 
            = ((0xfffffffeU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U]) 
               | (1U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U] 
               ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[4742]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U] 
            = ((0xfffffffdU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U]) 
               | (2U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U] 
               ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[4743]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U] 
            = ((0xfffffffbU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U]) 
               | (4U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U]));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U] 
               ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[4744]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U] 
            = ((0xfffffff7U & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U]) 
               | (8U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U]));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U] 
                  ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[4745]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U] 
            = ((0xffffffefU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U]) 
               | (0x10U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U]));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U] 
                  ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[4746]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U] 
            = ((0xffffffdfU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U]) 
               | (0x20U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U]));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U] 
                  ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[4747]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U] 
            = ((0xffffffbfU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U]) 
               | (0x40U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U]));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U] 
                  ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[4748]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U] 
            = ((0xffffff7fU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U]) 
               | (0x80U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U]));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U] 
                   ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[4749]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U] 
            = ((0xfffffeffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U]) 
               | (0x100U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U]));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U] 
                   ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[4750]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U] 
            = ((0xfffffdffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U]) 
               | (0x200U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U]));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U] 
                   ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[4751]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U] 
            = ((0xfffffbffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U]) 
               | (0x400U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U]));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U] 
                   ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[4752]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U]) 
               | (0x800U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U] 
                    ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[4753]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U] 
            = ((0xffffefffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U]) 
               | (0x1000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U] 
                    ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[4754]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U] 
            = ((0xffffdfffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U]) 
               | (0x2000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U] 
                    ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[4755]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U] 
            = ((0xffffbfffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U]) 
               | (0x4000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U] 
                    ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[4756]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U] 
            = ((0xffff7fffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U]) 
               | (0x8000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U] 
                     ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[4757]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U] 
            = ((0xfffeffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U]) 
               | (0x10000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U] 
                     ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[4758]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U] 
            = ((0xfffdffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U]) 
               | (0x20000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U] 
                     ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[4759]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U] 
            = ((0xfffbffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U]) 
               | (0x40000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U] 
                     ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[4760]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U]) 
               | (0x80000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U] 
                      ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[4761]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U] 
            = ((0xffefffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U]) 
               | (0x100000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U] 
                      ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[4762]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U] 
            = ((0xffdfffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U]) 
               | (0x200000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U] 
                      ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[4763]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U] 
            = ((0xffbfffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U]) 
               | (0x400000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U] 
                      ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[4764]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U] 
            = ((0xff7fffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U]) 
               | (0x800000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U] 
                       ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[4765]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U] 
            = ((0xfeffffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U]) 
               | (0x1000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U] 
                       ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[4766]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U] 
            = ((0xfdffffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U]) 
               | (0x2000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U] 
                       ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[4767]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U] 
            = ((0xfbffffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U]) 
               | (0x4000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U] 
                       ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[4768]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U]) 
               | (0x8000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U] 
                        ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[4769]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U] 
            = ((0xefffffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U]) 
               | (0x10000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U] 
                        ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[4770]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U] 
            = ((0xdfffffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U]) 
               | (0x20000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U] 
                        ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[4771]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U] 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U]) 
               | (0x40000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U]));
    }
    if (((vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U] 
          ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[4772]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U] 
            = ((0x7fffffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[0U]) 
               | (0x80000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U] 
               ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[4773]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U] 
            = ((0xfffffffeU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U]) 
               | (1U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U] 
               ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[4774]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U] 
            = ((0xfffffffdU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U]) 
               | (2U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U] 
               ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[4775]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U] 
            = ((0xfffffffbU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U]) 
               | (4U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U]));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U] 
               ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[4776]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U] 
            = ((0xfffffff7U & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U]) 
               | (8U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U]));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U] 
                  ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[4777]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U] 
            = ((0xffffffefU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U]) 
               | (0x10U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U]));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U] 
                  ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[4778]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U] 
            = ((0xffffffdfU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U]) 
               | (0x20U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U]));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U] 
                  ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[4779]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U] 
            = ((0xffffffbfU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U]) 
               | (0x40U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U]));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U] 
                  ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[4780]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U] 
            = ((0xffffff7fU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U]) 
               | (0x80U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U]));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U] 
                   ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[4781]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U] 
            = ((0xfffffeffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U]) 
               | (0x100U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U]));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U] 
                   ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[4782]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U] 
            = ((0xfffffdffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U]) 
               | (0x200U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U]));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U] 
                   ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[4783]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U] 
            = ((0xfffffbffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U]) 
               | (0x400U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U]));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U] 
                   ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[4784]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U]) 
               | (0x800U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U] 
                    ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[4785]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U] 
            = ((0xffffefffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U]) 
               | (0x1000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U] 
                    ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[4786]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U] 
            = ((0xffffdfffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U]) 
               | (0x2000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U] 
                    ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[4787]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U] 
            = ((0xffffbfffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U]) 
               | (0x4000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U] 
                    ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[4788]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U] 
            = ((0xffff7fffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U]) 
               | (0x8000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U] 
                     ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[4789]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U] 
            = ((0xfffeffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U]) 
               | (0x10000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U] 
                     ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[4790]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U] 
            = ((0xfffdffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U]) 
               | (0x20000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U] 
                     ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[4791]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U] 
            = ((0xfffbffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U]) 
               | (0x40000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U] 
                     ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[4792]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U]) 
               | (0x80000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U] 
                      ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[4793]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U] 
            = ((0xffefffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U]) 
               | (0x100000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U] 
                      ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[4794]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U] 
            = ((0xffdfffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U]) 
               | (0x200000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U] 
                      ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[4795]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U] 
            = ((0xffbfffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U]) 
               | (0x400000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U] 
                      ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[4796]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U] 
            = ((0xff7fffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U]) 
               | (0x800000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U] 
                       ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[4797]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U] 
            = ((0xfeffffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U]) 
               | (0x1000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U] 
                       ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[4798]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U] 
            = ((0xfdffffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U]) 
               | (0x2000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U] 
                       ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[4799]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U] 
            = ((0xfbffffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U]) 
               | (0x4000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U] 
                       ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[4800]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U]) 
               | (0x8000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U] 
                        ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[4801]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U] 
            = ((0xefffffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U]) 
               | (0x10000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U] 
                        ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[4802]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U] 
            = ((0xdfffffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U]) 
               | (0x20000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U] 
                        ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[4803]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U] 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U]) 
               | (0x40000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U]));
    }
    if (((vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U] 
          ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[4804]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U] 
            = ((0x7fffffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[1U]) 
               | (0x80000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U] 
               ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[4805]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U] 
            = ((0xfffffffeU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U]) 
               | (1U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U] 
               ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[4806]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U] 
            = ((0xfffffffdU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U]) 
               | (2U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U] 
               ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[4807]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U] 
            = ((0xfffffffbU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U]) 
               | (4U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U]));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U] 
               ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[4808]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U] 
            = ((0xfffffff7U & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U]) 
               | (8U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U]));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U] 
                  ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[4809]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U] 
            = ((0xffffffefU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U]) 
               | (0x10U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U]));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U] 
                  ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[4810]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U] 
            = ((0xffffffdfU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U]) 
               | (0x20U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U]));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U] 
                  ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[4811]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U] 
            = ((0xffffffbfU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U]) 
               | (0x40U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U]));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U] 
                  ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[4812]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U] 
            = ((0xffffff7fU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U]) 
               | (0x80U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U]));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U] 
                   ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[4813]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U] 
            = ((0xfffffeffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U]) 
               | (0x100U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U]));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U] 
                   ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[4814]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U] 
            = ((0xfffffdffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U]) 
               | (0x200U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U]));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U] 
                   ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[4815]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U] 
            = ((0xfffffbffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U]) 
               | (0x400U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U]));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U] 
                   ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[4816]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U]) 
               | (0x800U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U] 
                    ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[4817]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U] 
            = ((0xffffefffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U]) 
               | (0x1000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U] 
                    ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[4818]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U] 
            = ((0xffffdfffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U]) 
               | (0x2000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U] 
                    ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[4819]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U] 
            = ((0xffffbfffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U]) 
               | (0x4000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U] 
                    ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[4820]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U] 
            = ((0xffff7fffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U]) 
               | (0x8000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U] 
                     ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[4821]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U] 
            = ((0xfffeffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U]) 
               | (0x10000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U] 
                     ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[4822]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U] 
            = ((0xfffdffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U]) 
               | (0x20000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U] 
                     ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[4823]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U] 
            = ((0xfffbffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U]) 
               | (0x40000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U] 
                     ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[4824]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U]) 
               | (0x80000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U] 
                      ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[4825]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U] 
            = ((0xffefffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U]) 
               | (0x100000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U] 
                      ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[4826]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U] 
            = ((0xffdfffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U]) 
               | (0x200000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U] 
                      ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[4827]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U] 
            = ((0xffbfffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U]) 
               | (0x400000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U] 
                      ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[4828]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U] 
            = ((0xff7fffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U]) 
               | (0x800000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U] 
                       ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[4829]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U] 
            = ((0xfeffffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U]) 
               | (0x1000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U] 
                       ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[4830]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U] 
            = ((0xfdffffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U]) 
               | (0x2000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U] 
                       ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[4831]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U] 
            = ((0xfbffffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U]) 
               | (0x4000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U] 
                       ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[4832]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U]) 
               | (0x8000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U] 
                        ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[4833]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U] 
            = ((0xefffffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U]) 
               | (0x10000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U] 
                        ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[4834]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U] 
            = ((0xdfffffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U]) 
               | (0x20000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U] 
                        ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[4835]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U] 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U]) 
               | (0x40000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U]));
    }
    if (((vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U] 
          ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[4836]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U] 
            = ((0x7fffffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[2U]) 
               | (0x80000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[3U] 
               ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[4837]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U] 
            = ((0xfffffffeU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U]) 
               | (1U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[3U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[3U] 
               ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[4838]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U] 
            = ((0xfffffffdU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U]) 
               | (2U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[3U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[3U] 
               ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[4839]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U] 
            = ((0xfffffffbU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U]) 
               | (4U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[3U]));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[3U] 
               ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[4840]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U] 
            = ((0xfffffff7U & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U]) 
               | (8U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[3U]));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[3U] 
                  ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[4841]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U] 
            = ((0xffffffefU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U]) 
               | (0x10U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[3U]));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[3U] 
                  ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[4842]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U] 
            = ((0xffffffdfU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U]) 
               | (0x20U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[3U]));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[3U] 
                  ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[4843]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U] 
            = ((0xffffffbfU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U]) 
               | (0x40U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[3U]));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[3U] 
                  ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[4844]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U] 
            = ((0xffffff7fU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U]) 
               | (0x80U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[3U]));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[3U] 
                   ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[4845]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U] 
            = ((0xfffffeffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U]) 
               | (0x100U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[3U]));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[3U] 
                   ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[4846]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U] 
            = ((0xfffffdffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U]) 
               | (0x200U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[3U]));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[3U] 
                   ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[4847]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U] 
            = ((0xfffffbffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U]) 
               | (0x400U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[3U]));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[3U] 
                   ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[4848]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U]) 
               | (0x800U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[3U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[3U] 
                    ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[4849]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U] 
            = ((0xffffefffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U]) 
               | (0x1000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[3U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[3U] 
                    ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[4850]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U] 
            = ((0xffffdfffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U]) 
               | (0x2000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[3U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[3U] 
                    ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[4851]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U] 
            = ((0xffffbfffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U]) 
               | (0x4000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[3U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[3U] 
                    ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[4852]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U] 
            = ((0xffff7fffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U]) 
               | (0x8000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[3U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[3U] 
                     ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[4853]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U] 
            = ((0xfffeffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U]) 
               | (0x10000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[3U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[3U] 
                     ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[4854]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U] 
            = ((0xfffdffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U]) 
               | (0x20000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[3U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[3U] 
                     ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[4855]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U] 
            = ((0xfffbffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U]) 
               | (0x40000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[3U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[3U] 
                     ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[4856]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U]) 
               | (0x80000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[3U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[3U] 
                      ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[4857]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U] 
            = ((0xffefffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U]) 
               | (0x100000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[3U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[3U] 
                      ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[4858]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U] 
            = ((0xffdfffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U]) 
               | (0x200000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[3U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[3U] 
                      ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[4859]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U] 
            = ((0xffbfffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U]) 
               | (0x400000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[3U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[3U] 
                      ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[4860]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U] 
            = ((0xff7fffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U]) 
               | (0x800000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[3U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[3U] 
                       ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[4861]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U] 
            = ((0xfeffffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U]) 
               | (0x1000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[3U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[3U] 
                       ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[4862]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U] 
            = ((0xfdffffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U]) 
               | (0x2000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[3U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[3U] 
                       ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[4863]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U] 
            = ((0xfbffffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U]) 
               | (0x4000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[3U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[3U] 
                       ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[4864]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U]) 
               | (0x8000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[3U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[3U] 
                        ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[4865]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U] 
            = ((0xefffffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U]) 
               | (0x10000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[3U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[3U] 
                        ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[4866]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U] 
            = ((0xdfffffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U]) 
               | (0x20000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[3U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[3U] 
                        ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[4867]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U] 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U]) 
               | (0x40000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[3U]));
    }
    if (((vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[3U] 
          ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[4868]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U] 
            = ((0x7fffffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[3U]) 
               | (0x80000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[3U]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[4U] 
               ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[4869]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U] 
            = ((0xfffffffeU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U]) 
               | (1U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[4U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[4U] 
               ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[4870]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U] 
            = ((0xfffffffdU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U]) 
               | (2U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[4U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[4U] 
               ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[4871]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U] 
            = ((0xfffffffbU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U]) 
               | (4U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[4U]));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[4U] 
               ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[4872]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U] 
            = ((0xfffffff7U & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U]) 
               | (8U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[4U]));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[4U] 
                  ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[4873]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U] 
            = ((0xffffffefU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U]) 
               | (0x10U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[4U]));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[4U] 
                  ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[4874]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U] 
            = ((0xffffffdfU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U]) 
               | (0x20U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[4U]));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[4U] 
                  ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[4875]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U] 
            = ((0xffffffbfU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U]) 
               | (0x40U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[4U]));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[4U] 
                  ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[4876]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U] 
            = ((0xffffff7fU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U]) 
               | (0x80U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[4U]));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[4U] 
                   ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[4877]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U] 
            = ((0xfffffeffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U]) 
               | (0x100U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[4U]));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[4U] 
                   ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[4878]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U] 
            = ((0xfffffdffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U]) 
               | (0x200U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[4U]));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[4U] 
                   ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[4879]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U] 
            = ((0xfffffbffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U]) 
               | (0x400U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[4U]));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[4U] 
                   ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[4880]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U]) 
               | (0x800U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[4U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[4U] 
                    ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[4881]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U] 
            = ((0xffffefffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U]) 
               | (0x1000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[4U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[4U] 
                    ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[4882]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U] 
            = ((0xffffdfffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U]) 
               | (0x2000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[4U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[4U] 
                    ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[4883]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U] 
            = ((0xffffbfffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U]) 
               | (0x4000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[4U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[4U] 
                    ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[4884]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U] 
            = ((0xffff7fffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U]) 
               | (0x8000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[4U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[4U] 
                     ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[4885]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U] 
            = ((0xfffeffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U]) 
               | (0x10000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[4U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[4U] 
                     ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[4886]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U] 
            = ((0xfffdffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U]) 
               | (0x20000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[4U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[4U] 
                     ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[4887]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U] 
            = ((0xfffbffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U]) 
               | (0x40000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[4U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[4U] 
                     ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[4888]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U]) 
               | (0x80000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[4U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[4U] 
                      ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[4889]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U] 
            = ((0xffefffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U]) 
               | (0x100000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[4U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[4U] 
                      ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[4890]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U] 
            = ((0xffdfffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U]) 
               | (0x200000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[4U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[4U] 
                      ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[4891]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U] 
            = ((0xffbfffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U]) 
               | (0x400000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[4U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[4U] 
                      ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[4892]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U] 
            = ((0xff7fffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U]) 
               | (0x800000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[4U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[4U] 
                       ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[4893]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U] 
            = ((0xfeffffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U]) 
               | (0x1000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[4U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[4U] 
                       ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[4894]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U] 
            = ((0xfdffffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U]) 
               | (0x2000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[4U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[4U] 
                       ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[4895]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U] 
            = ((0xfbffffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U]) 
               | (0x4000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[4U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[4U] 
                       ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[4896]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U]) 
               | (0x8000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[4U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[4U] 
                        ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[4897]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U] 
            = ((0xefffffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U]) 
               | (0x10000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[4U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[4U] 
                        ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[4898]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U] 
            = ((0xdfffffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U]) 
               | (0x20000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[4U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[4U] 
                        ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[4899]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U] 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U]) 
               | (0x40000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[4U]));
    }
    if (((vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[4U] 
          ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[4900]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U] 
            = ((0x7fffffffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[4U]) 
               | (0x80000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[4U]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[5U] 
               ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[5U]))) {
        ++(vlSymsp->__Vcoverage[4901]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[5U] 
            = ((0xfffeU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[5U]) 
               | (1U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[5U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[5U] 
               ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[5U]))) {
        ++(vlSymsp->__Vcoverage[4902]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[5U] 
            = ((0xfffdU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[5U]) 
               | (2U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[5U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[5U] 
               ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[5U]))) {
        ++(vlSymsp->__Vcoverage[4903]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[5U] 
            = ((0xfffbU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[5U]) 
               | (4U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[5U]));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[5U] 
               ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[5U]))) {
        ++(vlSymsp->__Vcoverage[4904]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[5U] 
            = ((0xfff7U & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[5U]) 
               | (8U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[5U]));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[5U] 
                  ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[5U]))) {
        ++(vlSymsp->__Vcoverage[4905]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[5U] 
            = ((0xffefU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[5U]) 
               | (0x10U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[5U]));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[5U] 
                  ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[5U]))) {
        ++(vlSymsp->__Vcoverage[4906]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[5U] 
            = ((0xffdfU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[5U]) 
               | (0x20U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[5U]));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[5U] 
                  ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[5U]))) {
        ++(vlSymsp->__Vcoverage[4907]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[5U] 
            = ((0xffbfU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[5U]) 
               | (0x40U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[5U]));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[5U] 
                  ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[5U]))) {
        ++(vlSymsp->__Vcoverage[4908]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[5U] 
            = ((0xff7fU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[5U]) 
               | (0x80U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[5U]));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[5U] 
                   ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[5U]))) {
        ++(vlSymsp->__Vcoverage[4909]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[5U] 
            = ((0xfeffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[5U]) 
               | (0x100U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[5U]));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[5U] 
                   ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[5U]))) {
        ++(vlSymsp->__Vcoverage[4910]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[5U] 
            = ((0xfdffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[5U]) 
               | (0x200U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[5U]));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[5U] 
                   ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[5U]))) {
        ++(vlSymsp->__Vcoverage[4911]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[5U] 
            = ((0xfbffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[5U]) 
               | (0x400U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[5U]));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[5U] 
                   ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[5U]))) {
        ++(vlSymsp->__Vcoverage[4912]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[5U] 
            = ((0xf7ffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[5U]) 
               | (0x800U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[5U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[5U] 
                    ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[5U]))) {
        ++(vlSymsp->__Vcoverage[4913]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[5U] 
            = ((0xefffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[5U]) 
               | (0x1000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[5U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[5U] 
                    ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[5U]))) {
        ++(vlSymsp->__Vcoverage[4914]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[5U] 
            = ((0xdfffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[5U]) 
               | (0x2000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[5U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[5U] 
                    ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[5U]))) {
        ++(vlSymsp->__Vcoverage[4915]);
        vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[5U] 
            = ((0xbfffU & vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[5U]) 
               | (0x4000U & vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[5U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m19____pinNumber4[5U] 
                    ^ vlSelf->top__DOT__de__DOT__m19__DOT____Vtogcov__lut[5U]))) {
        ++(vlSymsp->__Vcoverage[4916]);
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
        ++(vlSymsp->__Vcoverage[6574]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U] 
            = ((0xfffffffeU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]) 
               | (1U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U] 
               ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[6575]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U] 
            = ((0xfffffffdU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]) 
               | (2U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U] 
               ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[6576]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U] 
            = ((0xfffffffbU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]) 
               | (4U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U]));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U] 
               ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[6577]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U] 
            = ((0xfffffff7U & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]) 
               | (8U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U]));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U] 
                  ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[6578]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U] 
            = ((0xffffffefU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]) 
               | (0x10U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U]));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U] 
                  ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[6579]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U] 
            = ((0xffffffdfU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]) 
               | (0x20U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U]));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U] 
                  ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[6580]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U] 
            = ((0xffffffbfU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]) 
               | (0x40U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U]));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U] 
                  ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[6581]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U] 
            = ((0xffffff7fU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]) 
               | (0x80U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U]));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U] 
                   ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[6582]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U] 
            = ((0xfffffeffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]) 
               | (0x100U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U]));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U] 
                   ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[6583]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U] 
            = ((0xfffffdffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]) 
               | (0x200U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U]));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U] 
                   ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[6584]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U] 
            = ((0xfffffbffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]) 
               | (0x400U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U]));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U] 
                   ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[6585]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]) 
               | (0x800U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U] 
                    ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[6586]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U] 
            = ((0xffffefffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]) 
               | (0x1000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U] 
                    ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[6587]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U] 
            = ((0xffffdfffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]) 
               | (0x2000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U] 
                    ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[6588]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U] 
            = ((0xffffbfffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]) 
               | (0x4000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U] 
                    ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[6589]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U] 
            = ((0xffff7fffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]) 
               | (0x8000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U] 
                     ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[6590]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U] 
            = ((0xfffeffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]) 
               | (0x10000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U] 
                     ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[6591]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U] 
            = ((0xfffdffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]) 
               | (0x20000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U] 
                     ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[6592]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U] 
            = ((0xfffbffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]) 
               | (0x40000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U] 
                     ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[6593]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]) 
               | (0x80000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U] 
                      ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[6594]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U] 
            = ((0xffefffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]) 
               | (0x100000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U] 
                      ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[6595]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U] 
            = ((0xffdfffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]) 
               | (0x200000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U] 
                      ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[6596]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U] 
            = ((0xffbfffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]) 
               | (0x400000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U] 
                      ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[6597]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U] 
            = ((0xff7fffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]) 
               | (0x800000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U] 
                       ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[6598]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U] 
            = ((0xfeffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]) 
               | (0x1000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U] 
                       ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[6599]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U] 
            = ((0xfdffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]) 
               | (0x2000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U] 
                       ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[6600]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U] 
            = ((0xfbffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]) 
               | (0x4000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U] 
                       ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[6601]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]) 
               | (0x8000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U] 
                        ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[6602]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U] 
            = ((0xefffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]) 
               | (0x10000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U] 
                        ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[6603]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U] 
            = ((0xdfffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]) 
               | (0x20000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U] 
                        ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[6604]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U] 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]) 
               | (0x40000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U]));
    }
    if (((vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U] 
          ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[6605]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U] 
            = ((0x7fffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[0U]) 
               | (0x80000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[0U]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U] 
               ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[6606]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U] 
            = ((0xfffffffeU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]) 
               | (1U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U] 
               ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[6607]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U] 
            = ((0xfffffffdU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]) 
               | (2U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U] 
               ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[6608]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U] 
            = ((0xfffffffbU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]) 
               | (4U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U]));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U] 
               ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[6609]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U] 
            = ((0xfffffff7U & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]) 
               | (8U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U]));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U] 
                  ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[6610]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U] 
            = ((0xffffffefU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]) 
               | (0x10U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U]));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U] 
                  ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[6611]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U] 
            = ((0xffffffdfU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]) 
               | (0x20U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U]));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U] 
                  ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[6612]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U] 
            = ((0xffffffbfU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]) 
               | (0x40U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U]));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U] 
                  ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[6613]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U] 
            = ((0xffffff7fU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]) 
               | (0x80U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U]));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U] 
                   ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[6614]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U] 
            = ((0xfffffeffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]) 
               | (0x100U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U]));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U] 
                   ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[6615]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U] 
            = ((0xfffffdffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]) 
               | (0x200U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U]));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U] 
                   ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[6616]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U] 
            = ((0xfffffbffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]) 
               | (0x400U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U]));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U] 
                   ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[6617]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]) 
               | (0x800U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U] 
                    ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[6618]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U] 
            = ((0xffffefffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]) 
               | (0x1000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U] 
                    ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[6619]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U] 
            = ((0xffffdfffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]) 
               | (0x2000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U] 
                    ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[6620]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U] 
            = ((0xffffbfffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]) 
               | (0x4000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U] 
                    ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[6621]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U] 
            = ((0xffff7fffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]) 
               | (0x8000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U] 
                     ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[6622]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U] 
            = ((0xfffeffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]) 
               | (0x10000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U] 
                     ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[6623]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U] 
            = ((0xfffdffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]) 
               | (0x20000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U] 
                     ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[6624]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U] 
            = ((0xfffbffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]) 
               | (0x40000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U] 
                     ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[6625]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]) 
               | (0x80000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U] 
                      ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[6626]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U] 
            = ((0xffefffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]) 
               | (0x100000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U] 
                      ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[6627]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U] 
            = ((0xffdfffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]) 
               | (0x200000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U] 
                      ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[6628]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U] 
            = ((0xffbfffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]) 
               | (0x400000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U] 
                      ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[6629]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U] 
            = ((0xff7fffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]) 
               | (0x800000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U] 
                       ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[6630]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U] 
            = ((0xfeffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]) 
               | (0x1000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U] 
                       ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[6631]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U] 
            = ((0xfdffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]) 
               | (0x2000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U] 
                       ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[6632]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U] 
            = ((0xfbffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]) 
               | (0x4000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U] 
                       ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[6633]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]) 
               | (0x8000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U] 
                        ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[6634]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U] 
            = ((0xefffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]) 
               | (0x10000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U] 
                        ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[6635]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U] 
            = ((0xdfffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]) 
               | (0x20000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U] 
                        ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[6636]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U] 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]) 
               | (0x40000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U]));
    }
    if (((vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U] 
          ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[6637]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U] 
            = ((0x7fffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[1U]) 
               | (0x80000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[1U]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U] 
               ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[6638]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U] 
            = ((0xfffffffeU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]) 
               | (1U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U] 
               ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[6639]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U] 
            = ((0xfffffffdU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]) 
               | (2U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U] 
               ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[6640]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U] 
            = ((0xfffffffbU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]) 
               | (4U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U]));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U] 
               ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[6641]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U] 
            = ((0xfffffff7U & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]) 
               | (8U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U]));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U] 
                  ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[6642]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U] 
            = ((0xffffffefU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]) 
               | (0x10U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U]));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U] 
                  ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[6643]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U] 
            = ((0xffffffdfU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]) 
               | (0x20U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U]));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U] 
                  ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[6644]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U] 
            = ((0xffffffbfU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]) 
               | (0x40U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U]));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U] 
                  ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[6645]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U] 
            = ((0xffffff7fU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]) 
               | (0x80U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U]));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U] 
                   ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[6646]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U] 
            = ((0xfffffeffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]) 
               | (0x100U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U]));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U] 
                   ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[6647]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U] 
            = ((0xfffffdffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]) 
               | (0x200U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U]));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U] 
                   ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[6648]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U] 
            = ((0xfffffbffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]) 
               | (0x400U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U]));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U] 
                   ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[6649]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]) 
               | (0x800U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U] 
                    ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[6650]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U] 
            = ((0xffffefffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]) 
               | (0x1000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U] 
                    ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[6651]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U] 
            = ((0xffffdfffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]) 
               | (0x2000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U] 
                    ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[6652]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U] 
            = ((0xffffbfffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]) 
               | (0x4000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U] 
                    ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[6653]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U] 
            = ((0xffff7fffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]) 
               | (0x8000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U] 
                     ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[6654]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U] 
            = ((0xfffeffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]) 
               | (0x10000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U] 
                     ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[6655]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U] 
            = ((0xfffdffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]) 
               | (0x20000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U] 
                     ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[6656]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U] 
            = ((0xfffbffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]) 
               | (0x40000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U] 
                     ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[6657]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]) 
               | (0x80000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U] 
                      ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[6658]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U] 
            = ((0xffefffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]) 
               | (0x100000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U] 
                      ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[6659]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U] 
            = ((0xffdfffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]) 
               | (0x200000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U] 
                      ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[6660]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U] 
            = ((0xffbfffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]) 
               | (0x400000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U] 
                      ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[6661]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U] 
            = ((0xff7fffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]) 
               | (0x800000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U] 
                       ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[6662]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U] 
            = ((0xfeffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]) 
               | (0x1000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U] 
                       ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[6663]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U] 
            = ((0xfdffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]) 
               | (0x2000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U] 
                       ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[6664]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U] 
            = ((0xfbffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]) 
               | (0x4000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U] 
                       ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[6665]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]) 
               | (0x8000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U] 
                        ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[6666]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U] 
            = ((0xefffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]) 
               | (0x10000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U] 
                        ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[6667]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U] 
            = ((0xdfffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]) 
               | (0x20000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U] 
                        ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[6668]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U] 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]) 
               | (0x40000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U]));
    }
    if (((vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U] 
          ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[6669]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U] 
            = ((0x7fffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[2U]) 
               | (0x80000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[2U]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U] 
               ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[6670]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U] 
            = ((0xfffffffeU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]) 
               | (1U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U] 
               ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[6671]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U] 
            = ((0xfffffffdU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]) 
               | (2U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U] 
               ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[6672]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U] 
            = ((0xfffffffbU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]) 
               | (4U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U]));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U] 
               ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[6673]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U] 
            = ((0xfffffff7U & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]) 
               | (8U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U]));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U] 
                  ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[6674]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U] 
            = ((0xffffffefU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]) 
               | (0x10U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U]));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U] 
                  ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[6675]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U] 
            = ((0xffffffdfU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]) 
               | (0x20U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U]));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U] 
                  ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[6676]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U] 
            = ((0xffffffbfU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]) 
               | (0x40U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U]));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U] 
                  ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[6677]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U] 
            = ((0xffffff7fU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]) 
               | (0x80U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U]));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U] 
                   ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[6678]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U] 
            = ((0xfffffeffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]) 
               | (0x100U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U]));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U] 
                   ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[6679]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U] 
            = ((0xfffffdffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]) 
               | (0x200U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U]));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U] 
                   ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[6680]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U] 
            = ((0xfffffbffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]) 
               | (0x400U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U]));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U] 
                   ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[6681]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]) 
               | (0x800U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U] 
                    ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[6682]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U] 
            = ((0xffffefffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]) 
               | (0x1000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U] 
                    ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[6683]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U] 
            = ((0xffffdfffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]) 
               | (0x2000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U] 
                    ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[6684]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U] 
            = ((0xffffbfffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]) 
               | (0x4000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U] 
                    ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[6685]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U] 
            = ((0xffff7fffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]) 
               | (0x8000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U] 
                     ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[6686]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U] 
            = ((0xfffeffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]) 
               | (0x10000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U] 
                     ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[6687]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U] 
            = ((0xfffdffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]) 
               | (0x20000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U] 
                     ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[6688]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U] 
            = ((0xfffbffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]) 
               | (0x40000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U] 
                     ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[6689]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]) 
               | (0x80000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U] 
                      ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[6690]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U] 
            = ((0xffefffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]) 
               | (0x100000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U] 
                      ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[6691]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U] 
            = ((0xffdfffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]) 
               | (0x200000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U] 
                      ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[6692]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U] 
            = ((0xffbfffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]) 
               | (0x400000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U] 
                      ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[6693]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U] 
            = ((0xff7fffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]) 
               | (0x800000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U] 
                       ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[6694]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U] 
            = ((0xfeffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]) 
               | (0x1000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U] 
                       ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[6695]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U] 
            = ((0xfdffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]) 
               | (0x2000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U] 
                       ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[6696]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U] 
            = ((0xfbffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]) 
               | (0x4000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U] 
                       ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[6697]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]) 
               | (0x8000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U] 
                        ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[6698]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U] 
            = ((0xefffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]) 
               | (0x10000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U] 
                        ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[6699]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U] 
            = ((0xdfffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]) 
               | (0x20000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U] 
                        ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]))) {
        ++(vlSymsp->__Vcoverage[6700]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U] 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]) 
               | (0x40000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U]));
    }
    if (((vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U] 
          ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[6701]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U] 
            = ((0x7fffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[3U]) 
               | (0x80000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[3U]));
    }
    if ((1U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U] 
               ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[6702]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U] 
            = ((0xfffffffeU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]) 
               | (1U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U]));
    }
    if ((2U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U] 
               ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[6703]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U] 
            = ((0xfffffffdU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]) 
               | (2U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U]));
    }
    if ((4U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U] 
               ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[6704]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U] 
            = ((0xfffffffbU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]) 
               | (4U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U]));
    }
    if ((8U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U] 
               ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[6705]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U] 
            = ((0xfffffff7U & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]) 
               | (8U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U]));
    }
    if ((0x10U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U] 
                  ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[6706]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U] 
            = ((0xffffffefU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]) 
               | (0x10U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U]));
    }
    if ((0x20U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U] 
                  ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[6707]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U] 
            = ((0xffffffdfU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]) 
               | (0x20U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U]));
    }
    if ((0x40U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U] 
                  ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[6708]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U] 
            = ((0xffffffbfU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]) 
               | (0x40U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U]));
    }
    if ((0x80U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U] 
                  ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[6709]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U] 
            = ((0xffffff7fU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]) 
               | (0x80U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U]));
    }
    if ((0x100U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U] 
                   ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[6710]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U] 
            = ((0xfffffeffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]) 
               | (0x100U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U]));
    }
    if ((0x200U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U] 
                   ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[6711]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U] 
            = ((0xfffffdffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]) 
               | (0x200U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U]));
    }
    if ((0x400U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U] 
                   ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[6712]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U] 
            = ((0xfffffbffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]) 
               | (0x400U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U]));
    }
    if ((0x800U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U] 
                   ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[6713]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]) 
               | (0x800U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U] 
                    ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[6714]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U] 
            = ((0xffffefffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]) 
               | (0x1000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U] 
                    ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[6715]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U] 
            = ((0xffffdfffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]) 
               | (0x2000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U] 
                    ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[6716]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U] 
            = ((0xffffbfffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]) 
               | (0x4000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U] 
                    ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[6717]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U] 
            = ((0xffff7fffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]) 
               | (0x8000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U] 
                     ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[6718]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U] 
            = ((0xfffeffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]) 
               | (0x10000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U] 
                     ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[6719]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U] 
            = ((0xfffdffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]) 
               | (0x20000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U] 
                     ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[6720]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U] 
            = ((0xfffbffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]) 
               | (0x40000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U] 
                     ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[6721]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]) 
               | (0x80000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U] 
                      ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[6722]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U] 
            = ((0xffefffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]) 
               | (0x100000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U] 
                      ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[6723]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U] 
            = ((0xffdfffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]) 
               | (0x200000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U] 
                      ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[6724]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U] 
            = ((0xffbfffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]) 
               | (0x400000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U] 
                      ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[6725]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U] 
            = ((0xff7fffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]) 
               | (0x800000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U] 
                       ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[6726]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U] 
            = ((0xfeffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]) 
               | (0x1000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U] 
                       ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[6727]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U] 
            = ((0xfdffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]) 
               | (0x2000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U] 
                       ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[6728]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U] 
            = ((0xfbffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]) 
               | (0x4000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U] 
                       ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[6729]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]) 
               | (0x8000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U] 
                        ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[6730]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U] 
            = ((0xefffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]) 
               | (0x10000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U] 
                        ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[6731]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U] 
            = ((0xdfffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]) 
               | (0x20000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U] 
                        ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]))) {
        ++(vlSymsp->__Vcoverage[6732]);
        vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U] 
            = ((0xbfffffffU & vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]) 
               | (0x40000000U & vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U]));
    }
    if (((vlSelf->top__DOT__de__DOT____Vcellinp__m12____pinNumber4[4U] 
          ^ vlSelf->top__DOT__de__DOT__m12__DOT____Vtogcov__lut[4U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[6733]);
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
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list[0x2dU] 
        = (0x1fffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x35U])) 
                               << 0x1fU) | ((QData)((IData)(
                                                            vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x34U])) 
                                            >> 1U)));
    vlSelf->top__DOT__de__DOT__m2__DOT__i0__DOT__pair_list[0x2eU] 
        = (0x1fffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x36U])) 
                               << 0x1aU) | ((QData)((IData)(
                                                            vlSelf->top__DOT__de__DOT____Vcellinp__m2____pinNumber4[0x35U])) 
                                            >> 6U)));
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
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[0x39U] 
        = (0x7ffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x3fU])) 
                              << 0x15U) | ((QData)((IData)(
                                                           vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x3eU])) 
                                           >> 0xbU)));
    vlSelf->top__DOT__de__DOT__m0__DOT__i0__DOT__pair_list[0x3aU] 
        = (0x7ffffffffULL & (((QData)((IData)(vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x40U])) 
                              << 0x12U) | ((QData)((IData)(
                                                           vlSelf->top__DOT__de__DOT____Vcellinp__m0____pinNumber4[0x3fU])) 
                                           >> 0xeU)));
    if (((IData)(vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__hit) 
         ^ (IData)(vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__hit))) {
        ++(vlSymsp->__Vcoverage[6156]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__hit 
            = vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__hit;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__lut_out) 
               ^ (IData)(vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[6144]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffeU & (IData)(vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__lut_out)) 
               | (1U & (IData)(vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__lut_out)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__lut_out) 
               ^ (IData)(vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[6145]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffdU & (IData)(vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__lut_out)) 
               | (2U & (IData)(vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__lut_out)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__lut_out) 
               ^ (IData)(vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[6146]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffbU & (IData)(vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__lut_out)) 
               | (4U & (IData)(vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__lut_out)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__lut_out) 
               ^ (IData)(vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[6147]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xff7U & (IData)(vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__lut_out)) 
               | (8U & (IData)(vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__lut_out)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__lut_out) 
                  ^ (IData)(vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[6148]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfefU & (IData)(vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__lut_out)) 
               | (0x10U & (IData)(vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__lut_out)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__lut_out) 
                  ^ (IData)(vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[6149]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfdfU & (IData)(vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__lut_out)) 
               | (0x20U & (IData)(vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__lut_out)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__lut_out) 
                  ^ (IData)(vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[6150]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfbfU & (IData)(vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__lut_out)) 
               | (0x40U & (IData)(vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__lut_out)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__lut_out) 
                  ^ (IData)(vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[6151]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xf7fU & (IData)(vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__lut_out)) 
               | (0x80U & (IData)(vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__lut_out)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__lut_out) 
                   ^ (IData)(vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[6152]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xeffU & (IData)(vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__lut_out)) 
               | (0x100U & (IData)(vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__lut_out)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__lut_out) 
                   ^ (IData)(vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[6153]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xdffU & (IData)(vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__lut_out)) 
               | (0x200U & (IData)(vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__lut_out)));
    }
    if ((0x400U & ((IData)(vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__lut_out) 
                   ^ (IData)(vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[6154]);
        vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xbffU & (IData)(vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__lut_out)) 
               | (0x400U & (IData)(vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__lut_out)));
    }
    if ((0x800U & ((IData)(vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT__lut_out) 
                   ^ (IData)(vlSelf->top__DOT__de__DOT__m22__DOT__i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[6155]);
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
        ++(vlSymsp->__Vcoverage[6501]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__hit 
            = vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__hit;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__lut_out) 
               ^ (IData)(vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[6496]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0x1eU & (IData)(vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__lut_out)) 
               | (1U & (IData)(vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__lut_out)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__lut_out) 
               ^ (IData)(vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[6497]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0x1dU & (IData)(vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__lut_out)) 
               | (2U & (IData)(vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__lut_out)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__lut_out) 
               ^ (IData)(vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[6498]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0x1bU & (IData)(vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__lut_out)) 
               | (4U & (IData)(vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__lut_out)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__lut_out) 
               ^ (IData)(vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[6499]);
        vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0x17U & (IData)(vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__lut_out)) 
               | (8U & (IData)(vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__lut_out)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT__lut_out) 
                  ^ (IData)(vlSelf->top__DOT__de__DOT__m8__DOT__i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[6500]);
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
        ++(vlSymsp->__Vcoverage[6417]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__hit 
            = vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__hit;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out) 
               ^ (IData)(vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[6353]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[6354]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[6355]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[6356]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[6357]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[6358]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[6359]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[6360]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[6361]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[6362]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[6363]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[6364]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[6365]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[6366]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[6367]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[6368]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[6369]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[6370]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[6371]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[6372]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[6373]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[6374]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[6375]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[6376]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[6377]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[6378]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[6379]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[6380]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[6381]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[6382]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[6383]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[6384]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[6385]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[6386]);
        vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT____Vtogcov__lut_out) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__de__DOT__m23__DOT__i0__DOT__lut_out 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
}
