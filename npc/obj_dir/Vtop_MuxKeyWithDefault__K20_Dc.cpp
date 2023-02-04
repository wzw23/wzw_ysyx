// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop_MuxKeyWithDefault__K20_Dc.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void Vtop_MuxKeyWithDefault__K20_Dc___settle__TOP__top__DOT__de__DOT__m19__2(Vtop_MuxKeyWithDefault__K20_Dc* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_MuxKeyWithDefault__K20_Dc___settle__TOP__top__DOT__de__DOT__m19__2\n"); );
    // Body
    if ((1U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U] 
               ^ vlSelf->__Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[6949]);
        vlSelf->__Vtogcov__lut[0U] = ((0xfffffffeU 
                                       & vlSelf->__Vtogcov__lut[0U]) 
                                      | (1U & vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U]));
    }
    if ((2U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U] 
               ^ vlSelf->__Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[6950]);
        vlSelf->__Vtogcov__lut[0U] = ((0xfffffffdU 
                                       & vlSelf->__Vtogcov__lut[0U]) 
                                      | (2U & vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U]));
    }
    if ((4U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U] 
               ^ vlSelf->__Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[6951]);
        vlSelf->__Vtogcov__lut[0U] = ((0xfffffffbU 
                                       & vlSelf->__Vtogcov__lut[0U]) 
                                      | (4U & vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U]));
    }
    if ((8U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U] 
               ^ vlSelf->__Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[6952]);
        vlSelf->__Vtogcov__lut[0U] = ((0xfffffff7U 
                                       & vlSelf->__Vtogcov__lut[0U]) 
                                      | (8U & vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U]));
    }
    if ((0x10U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U] 
                  ^ vlSelf->__Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[6953]);
        vlSelf->__Vtogcov__lut[0U] = ((0xffffffefU 
                                       & vlSelf->__Vtogcov__lut[0U]) 
                                      | (0x10U & vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U]));
    }
    if ((0x20U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U] 
                  ^ vlSelf->__Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[6954]);
        vlSelf->__Vtogcov__lut[0U] = ((0xffffffdfU 
                                       & vlSelf->__Vtogcov__lut[0U]) 
                                      | (0x20U & vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U]));
    }
    if ((0x40U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U] 
                  ^ vlSelf->__Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[6955]);
        vlSelf->__Vtogcov__lut[0U] = ((0xffffffbfU 
                                       & vlSelf->__Vtogcov__lut[0U]) 
                                      | (0x40U & vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U]));
    }
    if ((0x80U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U] 
                  ^ vlSelf->__Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[6956]);
        vlSelf->__Vtogcov__lut[0U] = ((0xffffff7fU 
                                       & vlSelf->__Vtogcov__lut[0U]) 
                                      | (0x80U & vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U]));
    }
    if ((0x100U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U] 
                   ^ vlSelf->__Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[6957]);
        vlSelf->__Vtogcov__lut[0U] = ((0xfffffeffU 
                                       & vlSelf->__Vtogcov__lut[0U]) 
                                      | (0x100U & vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U]));
    }
    if ((0x200U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U] 
                   ^ vlSelf->__Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[6958]);
        vlSelf->__Vtogcov__lut[0U] = ((0xfffffdffU 
                                       & vlSelf->__Vtogcov__lut[0U]) 
                                      | (0x200U & vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U]));
    }
    if ((0x400U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U] 
                   ^ vlSelf->__Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[6959]);
        vlSelf->__Vtogcov__lut[0U] = ((0xfffffbffU 
                                       & vlSelf->__Vtogcov__lut[0U]) 
                                      | (0x400U & vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U]));
    }
    if ((0x800U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U] 
                   ^ vlSelf->__Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[6960]);
        vlSelf->__Vtogcov__lut[0U] = ((0xfffff7ffU 
                                       & vlSelf->__Vtogcov__lut[0U]) 
                                      | (0x800U & vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U]));
    }
    if ((0x1000U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U] 
                    ^ vlSelf->__Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[6961]);
        vlSelf->__Vtogcov__lut[0U] = ((0xffffefffU 
                                       & vlSelf->__Vtogcov__lut[0U]) 
                                      | (0x1000U & 
                                         vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U]));
    }
    if ((0x2000U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U] 
                    ^ vlSelf->__Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[6962]);
        vlSelf->__Vtogcov__lut[0U] = ((0xffffdfffU 
                                       & vlSelf->__Vtogcov__lut[0U]) 
                                      | (0x2000U & 
                                         vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U]));
    }
    if ((0x4000U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U] 
                    ^ vlSelf->__Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[6963]);
        vlSelf->__Vtogcov__lut[0U] = ((0xffffbfffU 
                                       & vlSelf->__Vtogcov__lut[0U]) 
                                      | (0x4000U & 
                                         vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U]));
    }
    if ((0x8000U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U] 
                    ^ vlSelf->__Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[6964]);
        vlSelf->__Vtogcov__lut[0U] = ((0xffff7fffU 
                                       & vlSelf->__Vtogcov__lut[0U]) 
                                      | (0x8000U & 
                                         vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U]));
    }
    if ((0x10000U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U] 
                     ^ vlSelf->__Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[6965]);
        vlSelf->__Vtogcov__lut[0U] = ((0xfffeffffU 
                                       & vlSelf->__Vtogcov__lut[0U]) 
                                      | (0x10000U & 
                                         vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U]));
    }
    if ((0x20000U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U] 
                     ^ vlSelf->__Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[6966]);
        vlSelf->__Vtogcov__lut[0U] = ((0xfffdffffU 
                                       & vlSelf->__Vtogcov__lut[0U]) 
                                      | (0x20000U & 
                                         vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U]));
    }
    if ((0x40000U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U] 
                     ^ vlSelf->__Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[6967]);
        vlSelf->__Vtogcov__lut[0U] = ((0xfffbffffU 
                                       & vlSelf->__Vtogcov__lut[0U]) 
                                      | (0x40000U & 
                                         vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U]));
    }
    if ((0x80000U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U] 
                     ^ vlSelf->__Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[6968]);
        vlSelf->__Vtogcov__lut[0U] = ((0xfff7ffffU 
                                       & vlSelf->__Vtogcov__lut[0U]) 
                                      | (0x80000U & 
                                         vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U]));
    }
    if ((0x100000U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U] 
                      ^ vlSelf->__Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[6969]);
        vlSelf->__Vtogcov__lut[0U] = ((0xffefffffU 
                                       & vlSelf->__Vtogcov__lut[0U]) 
                                      | (0x100000U 
                                         & vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U]));
    }
    if ((0x200000U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U] 
                      ^ vlSelf->__Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[6970]);
        vlSelf->__Vtogcov__lut[0U] = ((0xffdfffffU 
                                       & vlSelf->__Vtogcov__lut[0U]) 
                                      | (0x200000U 
                                         & vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U]));
    }
    if ((0x400000U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U] 
                      ^ vlSelf->__Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[6971]);
        vlSelf->__Vtogcov__lut[0U] = ((0xffbfffffU 
                                       & vlSelf->__Vtogcov__lut[0U]) 
                                      | (0x400000U 
                                         & vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U]));
    }
    if ((0x800000U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U] 
                      ^ vlSelf->__Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[6972]);
        vlSelf->__Vtogcov__lut[0U] = ((0xff7fffffU 
                                       & vlSelf->__Vtogcov__lut[0U]) 
                                      | (0x800000U 
                                         & vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U]));
    }
    if ((0x1000000U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U] 
                       ^ vlSelf->__Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[6973]);
        vlSelf->__Vtogcov__lut[0U] = ((0xfeffffffU 
                                       & vlSelf->__Vtogcov__lut[0U]) 
                                      | (0x1000000U 
                                         & vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U]));
    }
    if ((0x2000000U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U] 
                       ^ vlSelf->__Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[6974]);
        vlSelf->__Vtogcov__lut[0U] = ((0xfdffffffU 
                                       & vlSelf->__Vtogcov__lut[0U]) 
                                      | (0x2000000U 
                                         & vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U]));
    }
    if ((0x4000000U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U] 
                       ^ vlSelf->__Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[6975]);
        vlSelf->__Vtogcov__lut[0U] = ((0xfbffffffU 
                                       & vlSelf->__Vtogcov__lut[0U]) 
                                      | (0x4000000U 
                                         & vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U]));
    }
    if ((0x8000000U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U] 
                       ^ vlSelf->__Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[6976]);
        vlSelf->__Vtogcov__lut[0U] = ((0xf7ffffffU 
                                       & vlSelf->__Vtogcov__lut[0U]) 
                                      | (0x8000000U 
                                         & vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U]));
    }
    if ((0x10000000U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U] 
                        ^ vlSelf->__Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[6977]);
        vlSelf->__Vtogcov__lut[0U] = ((0xefffffffU 
                                       & vlSelf->__Vtogcov__lut[0U]) 
                                      | (0x10000000U 
                                         & vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U]));
    }
    if ((0x20000000U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U] 
                        ^ vlSelf->__Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[6978]);
        vlSelf->__Vtogcov__lut[0U] = ((0xdfffffffU 
                                       & vlSelf->__Vtogcov__lut[0U]) 
                                      | (0x20000000U 
                                         & vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U]));
    }
    if ((0x40000000U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U] 
                        ^ vlSelf->__Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[6979]);
        vlSelf->__Vtogcov__lut[0U] = ((0xbfffffffU 
                                       & vlSelf->__Vtogcov__lut[0U]) 
                                      | (0x40000000U 
                                         & vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U]));
    }
    if (((vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U] 
          ^ vlSelf->__Vtogcov__lut[0U]) >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[6980]);
        vlSelf->__Vtogcov__lut[0U] = ((0x7fffffffU 
                                       & vlSelf->__Vtogcov__lut[0U]) 
                                      | (0x80000000U 
                                         & vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U]));
    }
    if ((1U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U] 
               ^ vlSelf->__Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[6981]);
        vlSelf->__Vtogcov__lut[1U] = ((0xfffffffeU 
                                       & vlSelf->__Vtogcov__lut[1U]) 
                                      | (1U & vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U]));
    }
    if ((2U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U] 
               ^ vlSelf->__Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[6982]);
        vlSelf->__Vtogcov__lut[1U] = ((0xfffffffdU 
                                       & vlSelf->__Vtogcov__lut[1U]) 
                                      | (2U & vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U]));
    }
    if ((4U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U] 
               ^ vlSelf->__Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[6983]);
        vlSelf->__Vtogcov__lut[1U] = ((0xfffffffbU 
                                       & vlSelf->__Vtogcov__lut[1U]) 
                                      | (4U & vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U]));
    }
    if ((8U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U] 
               ^ vlSelf->__Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[6984]);
        vlSelf->__Vtogcov__lut[1U] = ((0xfffffff7U 
                                       & vlSelf->__Vtogcov__lut[1U]) 
                                      | (8U & vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U]));
    }
    if ((0x10U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U] 
                  ^ vlSelf->__Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[6985]);
        vlSelf->__Vtogcov__lut[1U] = ((0xffffffefU 
                                       & vlSelf->__Vtogcov__lut[1U]) 
                                      | (0x10U & vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U]));
    }
    if ((0x20U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U] 
                  ^ vlSelf->__Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[6986]);
        vlSelf->__Vtogcov__lut[1U] = ((0xffffffdfU 
                                       & vlSelf->__Vtogcov__lut[1U]) 
                                      | (0x20U & vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U]));
    }
    if ((0x40U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U] 
                  ^ vlSelf->__Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[6987]);
        vlSelf->__Vtogcov__lut[1U] = ((0xffffffbfU 
                                       & vlSelf->__Vtogcov__lut[1U]) 
                                      | (0x40U & vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U]));
    }
    if ((0x80U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U] 
                  ^ vlSelf->__Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[6988]);
        vlSelf->__Vtogcov__lut[1U] = ((0xffffff7fU 
                                       & vlSelf->__Vtogcov__lut[1U]) 
                                      | (0x80U & vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U]));
    }
    if ((0x100U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U] 
                   ^ vlSelf->__Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[6989]);
        vlSelf->__Vtogcov__lut[1U] = ((0xfffffeffU 
                                       & vlSelf->__Vtogcov__lut[1U]) 
                                      | (0x100U & vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U]));
    }
    if ((0x200U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U] 
                   ^ vlSelf->__Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[6990]);
        vlSelf->__Vtogcov__lut[1U] = ((0xfffffdffU 
                                       & vlSelf->__Vtogcov__lut[1U]) 
                                      | (0x200U & vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U]));
    }
    if ((0x400U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U] 
                   ^ vlSelf->__Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[6991]);
        vlSelf->__Vtogcov__lut[1U] = ((0xfffffbffU 
                                       & vlSelf->__Vtogcov__lut[1U]) 
                                      | (0x400U & vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U]));
    }
    if ((0x800U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U] 
                   ^ vlSelf->__Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[6992]);
        vlSelf->__Vtogcov__lut[1U] = ((0xfffff7ffU 
                                       & vlSelf->__Vtogcov__lut[1U]) 
                                      | (0x800U & vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U]));
    }
    if ((0x1000U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U] 
                    ^ vlSelf->__Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[6993]);
        vlSelf->__Vtogcov__lut[1U] = ((0xffffefffU 
                                       & vlSelf->__Vtogcov__lut[1U]) 
                                      | (0x1000U & 
                                         vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U]));
    }
    if ((0x2000U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U] 
                    ^ vlSelf->__Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[6994]);
        vlSelf->__Vtogcov__lut[1U] = ((0xffffdfffU 
                                       & vlSelf->__Vtogcov__lut[1U]) 
                                      | (0x2000U & 
                                         vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U]));
    }
    if ((0x4000U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U] 
                    ^ vlSelf->__Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[6995]);
        vlSelf->__Vtogcov__lut[1U] = ((0xffffbfffU 
                                       & vlSelf->__Vtogcov__lut[1U]) 
                                      | (0x4000U & 
                                         vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U]));
    }
    if ((0x8000U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U] 
                    ^ vlSelf->__Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[6996]);
        vlSelf->__Vtogcov__lut[1U] = ((0xffff7fffU 
                                       & vlSelf->__Vtogcov__lut[1U]) 
                                      | (0x8000U & 
                                         vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U]));
    }
    if ((0x10000U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U] 
                     ^ vlSelf->__Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[6997]);
        vlSelf->__Vtogcov__lut[1U] = ((0xfffeffffU 
                                       & vlSelf->__Vtogcov__lut[1U]) 
                                      | (0x10000U & 
                                         vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U]));
    }
    if ((0x20000U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U] 
                     ^ vlSelf->__Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[6998]);
        vlSelf->__Vtogcov__lut[1U] = ((0xfffdffffU 
                                       & vlSelf->__Vtogcov__lut[1U]) 
                                      | (0x20000U & 
                                         vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U]));
    }
    if ((0x40000U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U] 
                     ^ vlSelf->__Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[6999]);
        vlSelf->__Vtogcov__lut[1U] = ((0xfffbffffU 
                                       & vlSelf->__Vtogcov__lut[1U]) 
                                      | (0x40000U & 
                                         vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U]));
    }
    if ((0x80000U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U] 
                     ^ vlSelf->__Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[7000]);
        vlSelf->__Vtogcov__lut[1U] = ((0xfff7ffffU 
                                       & vlSelf->__Vtogcov__lut[1U]) 
                                      | (0x80000U & 
                                         vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U]));
    }
    if ((0x100000U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U] 
                      ^ vlSelf->__Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[7001]);
        vlSelf->__Vtogcov__lut[1U] = ((0xffefffffU 
                                       & vlSelf->__Vtogcov__lut[1U]) 
                                      | (0x100000U 
                                         & vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U]));
    }
    if ((0x200000U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U] 
                      ^ vlSelf->__Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[7002]);
        vlSelf->__Vtogcov__lut[1U] = ((0xffdfffffU 
                                       & vlSelf->__Vtogcov__lut[1U]) 
                                      | (0x200000U 
                                         & vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U]));
    }
    if ((0x400000U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U] 
                      ^ vlSelf->__Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[7003]);
        vlSelf->__Vtogcov__lut[1U] = ((0xffbfffffU 
                                       & vlSelf->__Vtogcov__lut[1U]) 
                                      | (0x400000U 
                                         & vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U]));
    }
    if ((0x800000U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U] 
                      ^ vlSelf->__Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[7004]);
        vlSelf->__Vtogcov__lut[1U] = ((0xff7fffffU 
                                       & vlSelf->__Vtogcov__lut[1U]) 
                                      | (0x800000U 
                                         & vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U]));
    }
    if ((0x1000000U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U] 
                       ^ vlSelf->__Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[7005]);
        vlSelf->__Vtogcov__lut[1U] = ((0xfeffffffU 
                                       & vlSelf->__Vtogcov__lut[1U]) 
                                      | (0x1000000U 
                                         & vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U]));
    }
    if ((0x2000000U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U] 
                       ^ vlSelf->__Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[7006]);
        vlSelf->__Vtogcov__lut[1U] = ((0xfdffffffU 
                                       & vlSelf->__Vtogcov__lut[1U]) 
                                      | (0x2000000U 
                                         & vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U]));
    }
    if ((0x4000000U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U] 
                       ^ vlSelf->__Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[7007]);
        vlSelf->__Vtogcov__lut[1U] = ((0xfbffffffU 
                                       & vlSelf->__Vtogcov__lut[1U]) 
                                      | (0x4000000U 
                                         & vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U]));
    }
    if ((0x8000000U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U] 
                       ^ vlSelf->__Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[7008]);
        vlSelf->__Vtogcov__lut[1U] = ((0xf7ffffffU 
                                       & vlSelf->__Vtogcov__lut[1U]) 
                                      | (0x8000000U 
                                         & vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U]));
    }
    if ((0x10000000U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U] 
                        ^ vlSelf->__Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[7009]);
        vlSelf->__Vtogcov__lut[1U] = ((0xefffffffU 
                                       & vlSelf->__Vtogcov__lut[1U]) 
                                      | (0x10000000U 
                                         & vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U]));
    }
    if ((0x20000000U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U] 
                        ^ vlSelf->__Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[7010]);
        vlSelf->__Vtogcov__lut[1U] = ((0xdfffffffU 
                                       & vlSelf->__Vtogcov__lut[1U]) 
                                      | (0x20000000U 
                                         & vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U]));
    }
    if ((0x40000000U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U] 
                        ^ vlSelf->__Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[7011]);
        vlSelf->__Vtogcov__lut[1U] = ((0xbfffffffU 
                                       & vlSelf->__Vtogcov__lut[1U]) 
                                      | (0x40000000U 
                                         & vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U]));
    }
    if (((vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U] 
          ^ vlSelf->__Vtogcov__lut[1U]) >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[7012]);
        vlSelf->__Vtogcov__lut[1U] = ((0x7fffffffU 
                                       & vlSelf->__Vtogcov__lut[1U]) 
                                      | (0x80000000U 
                                         & vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U]));
    }
    if ((1U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U] 
               ^ vlSelf->__Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[7013]);
        vlSelf->__Vtogcov__lut[2U] = ((0xfffffeU & 
                                       vlSelf->__Vtogcov__lut[2U]) 
                                      | (1U & vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U]));
    }
    if ((2U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U] 
               ^ vlSelf->__Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[7014]);
        vlSelf->__Vtogcov__lut[2U] = ((0xfffffdU & 
                                       vlSelf->__Vtogcov__lut[2U]) 
                                      | (2U & vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U]));
    }
    if ((4U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U] 
               ^ vlSelf->__Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[7015]);
        vlSelf->__Vtogcov__lut[2U] = ((0xfffffbU & 
                                       vlSelf->__Vtogcov__lut[2U]) 
                                      | (4U & vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U]));
    }
    if ((8U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U] 
               ^ vlSelf->__Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[7016]);
        vlSelf->__Vtogcov__lut[2U] = ((0xfffff7U & 
                                       vlSelf->__Vtogcov__lut[2U]) 
                                      | (8U & vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U]));
    }
    if ((0x10U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U] 
                  ^ vlSelf->__Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[7017]);
        vlSelf->__Vtogcov__lut[2U] = ((0xffffefU & 
                                       vlSelf->__Vtogcov__lut[2U]) 
                                      | (0x10U & vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U]));
    }
    if ((0x20U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U] 
                  ^ vlSelf->__Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[7018]);
        vlSelf->__Vtogcov__lut[2U] = ((0xffffdfU & 
                                       vlSelf->__Vtogcov__lut[2U]) 
                                      | (0x20U & vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U]));
    }
    if ((0x40U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U] 
                  ^ vlSelf->__Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[7019]);
        vlSelf->__Vtogcov__lut[2U] = ((0xffffbfU & 
                                       vlSelf->__Vtogcov__lut[2U]) 
                                      | (0x40U & vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U]));
    }
    if ((0x80U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U] 
                  ^ vlSelf->__Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[7020]);
        vlSelf->__Vtogcov__lut[2U] = ((0xffff7fU & 
                                       vlSelf->__Vtogcov__lut[2U]) 
                                      | (0x80U & vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U]));
    }
    if ((0x100U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U] 
                   ^ vlSelf->__Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[7021]);
        vlSelf->__Vtogcov__lut[2U] = ((0xfffeffU & 
                                       vlSelf->__Vtogcov__lut[2U]) 
                                      | (0x100U & vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U]));
    }
    if ((0x200U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U] 
                   ^ vlSelf->__Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[7022]);
        vlSelf->__Vtogcov__lut[2U] = ((0xfffdffU & 
                                       vlSelf->__Vtogcov__lut[2U]) 
                                      | (0x200U & vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U]));
    }
    if ((0x400U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U] 
                   ^ vlSelf->__Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[7023]);
        vlSelf->__Vtogcov__lut[2U] = ((0xfffbffU & 
                                       vlSelf->__Vtogcov__lut[2U]) 
                                      | (0x400U & vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U]));
    }
    if ((0x800U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U] 
                   ^ vlSelf->__Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[7024]);
        vlSelf->__Vtogcov__lut[2U] = ((0xfff7ffU & 
                                       vlSelf->__Vtogcov__lut[2U]) 
                                      | (0x800U & vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U]));
    }
    if ((0x1000U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U] 
                    ^ vlSelf->__Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[7025]);
        vlSelf->__Vtogcov__lut[2U] = ((0xffefffU & 
                                       vlSelf->__Vtogcov__lut[2U]) 
                                      | (0x1000U & 
                                         vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U]));
    }
    if ((0x2000U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U] 
                    ^ vlSelf->__Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[7026]);
        vlSelf->__Vtogcov__lut[2U] = ((0xffdfffU & 
                                       vlSelf->__Vtogcov__lut[2U]) 
                                      | (0x2000U & 
                                         vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U]));
    }
    if ((0x4000U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U] 
                    ^ vlSelf->__Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[7027]);
        vlSelf->__Vtogcov__lut[2U] = ((0xffbfffU & 
                                       vlSelf->__Vtogcov__lut[2U]) 
                                      | (0x4000U & 
                                         vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U]));
    }
    if ((0x8000U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U] 
                    ^ vlSelf->__Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[7028]);
        vlSelf->__Vtogcov__lut[2U] = ((0xff7fffU & 
                                       vlSelf->__Vtogcov__lut[2U]) 
                                      | (0x8000U & 
                                         vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U]));
    }
    if ((0x10000U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U] 
                     ^ vlSelf->__Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[7029]);
        vlSelf->__Vtogcov__lut[2U] = ((0xfeffffU & 
                                       vlSelf->__Vtogcov__lut[2U]) 
                                      | (0x10000U & 
                                         vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U]));
    }
    if ((0x20000U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U] 
                     ^ vlSelf->__Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[7030]);
        vlSelf->__Vtogcov__lut[2U] = ((0xfdffffU & 
                                       vlSelf->__Vtogcov__lut[2U]) 
                                      | (0x20000U & 
                                         vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U]));
    }
    if ((0x40000U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U] 
                     ^ vlSelf->__Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[7031]);
        vlSelf->__Vtogcov__lut[2U] = ((0xfbffffU & 
                                       vlSelf->__Vtogcov__lut[2U]) 
                                      | (0x40000U & 
                                         vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U]));
    }
    if ((0x80000U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U] 
                     ^ vlSelf->__Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[7032]);
        vlSelf->__Vtogcov__lut[2U] = ((0xf7ffffU & 
                                       vlSelf->__Vtogcov__lut[2U]) 
                                      | (0x80000U & 
                                         vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U]));
    }
    if ((0x100000U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U] 
                      ^ vlSelf->__Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[7033]);
        vlSelf->__Vtogcov__lut[2U] = ((0xefffffU & 
                                       vlSelf->__Vtogcov__lut[2U]) 
                                      | (0x100000U 
                                         & vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U]));
    }
    if ((0x200000U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U] 
                      ^ vlSelf->__Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[7034]);
        vlSelf->__Vtogcov__lut[2U] = ((0xdfffffU & 
                                       vlSelf->__Vtogcov__lut[2U]) 
                                      | (0x200000U 
                                         & vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U]));
    }
    if ((0x400000U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U] 
                      ^ vlSelf->__Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[7035]);
        vlSelf->__Vtogcov__lut[2U] = ((0xbfffffU & 
                                       vlSelf->__Vtogcov__lut[2U]) 
                                      | (0x400000U 
                                         & vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U]));
    }
    if ((0x800000U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U] 
                      ^ vlSelf->__Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[7036]);
        vlSelf->__Vtogcov__lut[2U] = ((0x7fffffU & 
                                       vlSelf->__Vtogcov__lut[2U]) 
                                      | (0x800000U 
                                         & vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U]));
    }
    vlSelf->__PVT__i0__DOT__pair_list[0U] = (0xfffffffffffULL 
                                             & (((QData)((IData)(
                                                                 vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[0U]))));
    vlSelf->__PVT__i0__DOT__pair_list[1U] = (0xfffffffffffULL 
                                             & (((QData)((IData)(
                                                                 vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[2U])) 
                                                 << 0x14U) 
                                                | ((QData)((IData)(
                                                                   vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m19____pinNumber4[1U])) 
                                                   >> 0xcU)));
    if ((1U & ((IData)(vlSelf->__PVT__i0__DOT__pair_list
                       [0U]) ^ (IData)(vlSelf->i0__DOT____Vtogcov__pair_list
                                       [0U])))) {
        ++(vlSymsp->__Vcoverage[7037]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xffffffffffeULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | (IData)((IData)((1U & (IData)(
                                                    vlSelf->__PVT__i0__DOT__pair_list
                                                    [0U])))));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 1U)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                [0U] 
                                                >> 1U))))) {
        ++(vlSymsp->__Vcoverage[7038]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xffffffffffdULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 1U))))) 
                       << 1U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 2U)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                [0U] 
                                                >> 2U))))) {
        ++(vlSymsp->__Vcoverage[7039]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xffffffffffbULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 2U))))) 
                       << 2U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 3U)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                [0U] 
                                                >> 3U))))) {
        ++(vlSymsp->__Vcoverage[7040]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xffffffffff7ULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 3U))))) 
                       << 3U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 4U)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                [0U] 
                                                >> 4U))))) {
        ++(vlSymsp->__Vcoverage[7041]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xfffffffffefULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 4U))))) 
                       << 4U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 5U)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                [0U] 
                                                >> 5U))))) {
        ++(vlSymsp->__Vcoverage[7042]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xfffffffffdfULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 5U))))) 
                       << 5U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 6U)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                [0U] 
                                                >> 6U))))) {
        ++(vlSymsp->__Vcoverage[7043]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xfffffffffbfULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 6U))))) 
                       << 6U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 7U)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                [0U] 
                                                >> 7U))))) {
        ++(vlSymsp->__Vcoverage[7044]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xfffffffff7fULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 7U))))) 
                       << 7U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 8U)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                [0U] 
                                                >> 8U))))) {
        ++(vlSymsp->__Vcoverage[7045]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xffffffffeffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 8U))))) 
                       << 8U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 9U)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                [0U] 
                                                >> 9U))))) {
        ++(vlSymsp->__Vcoverage[7046]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xffffffffdffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 9U))))) 
                       << 9U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0xaU)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                  [0U] 
                                                  >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[7047]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xffffffffbffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0xaU))))) 
                       << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0xbU)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                  [0U] 
                                                  >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[7048]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xffffffff7ffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0xbU))))) 
                       << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0xcU)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                  [0U] 
                                                  >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[7049]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xfffffffefffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0xcU))))) 
                       << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0xdU)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                  [0U] 
                                                  >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[7050]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xfffffffdfffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0xdU))))) 
                       << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0xeU)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                  [0U] 
                                                  >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[7051]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xfffffffbfffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0xeU))))) 
                       << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0xfU)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                  [0U] 
                                                  >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[7052]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xfffffff7fffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0xfU))))) 
                       << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x10U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[7053]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xffffffeffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x10U))))) 
                       << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x11U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[7054]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xffffffdffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x11U))))) 
                       << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x12U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[7055]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xffffffbffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x12U))))) 
                       << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x13U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[7056]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xffffff7ffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x13U))))) 
                       << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x14U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[7057]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xfffffefffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x14U))))) 
                       << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x15U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[7058]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xfffffdfffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x15U))))) 
                       << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x16U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[7059]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xfffffbfffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x16U))))) 
                       << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x17U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[7060]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xfffff7fffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x17U))))) 
                       << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x18U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[7061]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xffffeffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x18U))))) 
                       << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x19U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[7062]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xffffdffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x19U))))) 
                       << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x1aU)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[7063]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xffffbffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x1aU))))) 
                       << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x1bU)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[7064]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xffff7ffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x1bU))))) 
                       << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x1cU)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[7065]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xfffefffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x1cU))))) 
                       << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x1dU)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[7066]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xfffdfffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x1dU))))) 
                       << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x1eU)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[7067]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xfffbfffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x1eU))))) 
                       << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x1fU)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[7068]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xfff7fffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x1fU))))) 
                       << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x20U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[7069]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xffeffffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x20U))))) 
                       << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x21U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[7070]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xffdffffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x21U))))) 
                       << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x22U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[7071]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xffbffffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x22U))))) 
                       << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x23U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[7072]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xff7ffffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x23U))))) 
                       << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x24U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[7073]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xfefffffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x24U))))) 
                       << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x25U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[7074]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xfdfffffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x25U))))) 
                       << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x26U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[7075]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xfbfffffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x26U))))) 
                       << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x27U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[7076]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xf7fffffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x27U))))) 
                       << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x28U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[7077]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xeffffffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x28U))))) 
                       << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x29U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[7078]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xdffffffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x29U))))) 
                       << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x2aU)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[7079]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xbffffffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x2aU))))) 
                       << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x2bU)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[7080]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0x7ffffffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x2bU))))) 
                       << 0x2bU));
    }
    if ((1U & ((IData)(vlSelf->__PVT__i0__DOT__pair_list
                       [1U]) ^ (IData)(vlSelf->i0__DOT____Vtogcov__pair_list
                                       [1U])))) {
        ++(vlSymsp->__Vcoverage[7081]);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0xffffffffffeULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | (IData)((IData)((1U & (IData)(
                                                    vlSelf->__PVT__i0__DOT__pair_list
                                                    [1U])))));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 1U)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                [1U] 
                                                >> 1U))))) {
        ++(vlSymsp->__Vcoverage[7082]);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0xffffffffffdULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 1U))))) 
                       << 1U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 2U)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                [1U] 
                                                >> 2U))))) {
        ++(vlSymsp->__Vcoverage[7083]);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0xffffffffffbULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 2U))))) 
                       << 2U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 3U)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                [1U] 
                                                >> 3U))))) {
        ++(vlSymsp->__Vcoverage[7084]);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0xffffffffff7ULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 3U))))) 
                       << 3U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 4U)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                [1U] 
                                                >> 4U))))) {
        ++(vlSymsp->__Vcoverage[7085]);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0xfffffffffefULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 4U))))) 
                       << 4U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 5U)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                [1U] 
                                                >> 5U))))) {
        ++(vlSymsp->__Vcoverage[7086]);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0xfffffffffdfULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 5U))))) 
                       << 5U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 6U)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                [1U] 
                                                >> 6U))))) {
        ++(vlSymsp->__Vcoverage[7087]);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0xfffffffffbfULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 6U))))) 
                       << 6U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 7U)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                [1U] 
                                                >> 7U))))) {
        ++(vlSymsp->__Vcoverage[7088]);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0xfffffffff7fULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 7U))))) 
                       << 7U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 8U)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                [1U] 
                                                >> 8U))))) {
        ++(vlSymsp->__Vcoverage[7089]);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0xffffffffeffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 8U))))) 
                       << 8U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 9U)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                [1U] 
                                                >> 9U))))) {
        ++(vlSymsp->__Vcoverage[7090]);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0xffffffffdffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 9U))))) 
                       << 9U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 0xaU)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                  [1U] 
                                                  >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[7091]);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0xffffffffbffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 0xaU))))) 
                       << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 0xbU)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                  [1U] 
                                                  >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[7092]);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0xffffffff7ffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 0xbU))))) 
                       << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 0xcU)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                  [1U] 
                                                  >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[7093]);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0xfffffffefffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 0xcU))))) 
                       << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 0xdU)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                  [1U] 
                                                  >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[7094]);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0xfffffffdfffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 0xdU))))) 
                       << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 0xeU)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                  [1U] 
                                                  >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[7095]);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0xfffffffbfffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 0xeU))))) 
                       << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 0xfU)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                  [1U] 
                                                  >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[7096]);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0xfffffff7fffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 0xfU))))) 
                       << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 0x10U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[7097]);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0xffffffeffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 0x10U))))) 
                       << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 0x11U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[7098]);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0xffffffdffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 0x11U))))) 
                       << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 0x12U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[7099]);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0xffffffbffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 0x12U))))) 
                       << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 0x13U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[7100]);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0xffffff7ffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 0x13U))))) 
                       << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 0x14U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[7101]);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0xfffffefffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 0x14U))))) 
                       << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 0x15U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[7102]);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0xfffffdfffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 0x15U))))) 
                       << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 0x16U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[7103]);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0xfffffbfffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 0x16U))))) 
                       << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 0x17U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[7104]);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0xfffff7fffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 0x17U))))) 
                       << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 0x18U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[7105]);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0xffffeffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 0x18U))))) 
                       << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 0x19U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[7106]);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0xffffdffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 0x19U))))) 
                       << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 0x1aU)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[7107]);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0xffffbffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 0x1aU))))) 
                       << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 0x1bU)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[7108]);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0xffff7ffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 0x1bU))))) 
                       << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 0x1cU)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[7109]);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0xfffefffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 0x1cU))))) 
                       << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 0x1dU)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[7110]);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0xfffdfffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 0x1dU))))) 
                       << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 0x1eU)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[7111]);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0xfffbfffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 0x1eU))))) 
                       << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 0x1fU)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[7112]);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0xfff7fffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 0x1fU))))) 
                       << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 0x20U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[7113]);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0xffeffffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 0x20U))))) 
                       << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 0x21U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[7114]);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0xffdffffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 0x21U))))) 
                       << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 0x22U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[7115]);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0xffbffffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 0x22U))))) 
                       << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 0x23U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[7116]);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0xff7ffffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 0x23U))))) 
                       << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 0x24U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[7117]);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0xfefffffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 0x24U))))) 
                       << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 0x25U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[7118]);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0xfdfffffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 0x25U))))) 
                       << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 0x26U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[7119]);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0xfbfffffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 0x26U))))) 
                       << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 0x27U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[7120]);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0xf7fffffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 0x27U))))) 
                       << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 0x28U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[7121]);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0xeffffffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 0x28U))))) 
                       << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 0x29U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[7122]);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0xdffffffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 0x29U))))) 
                       << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 0x2aU)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[7123]);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0xbffffffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 0x2aU))))) 
                       << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 0x2bU)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[7124]);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0x7ffffffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 0x2bU))))) 
                       << 0x2bU));
    }
    vlSelf->__PVT__i0__DOT__data_list[0U] = (0xfffU 
                                             & (IData)(
                                                       vlSelf->__PVT__i0__DOT__pair_list
                                                       [0U]));
    vlSelf->__PVT__i0__DOT__data_list[1U] = (0xfffU 
                                             & (IData)(
                                                       vlSelf->__PVT__i0__DOT__pair_list
                                                       [1U]));
    vlSelf->__PVT__i0__DOT__key_list[0U] = (IData)(
                                                   (vlSelf->__PVT__i0__DOT__pair_list
                                                    [0U] 
                                                    >> 0xcU));
    vlSelf->__PVT__i0__DOT__key_list[1U] = (IData)(
                                                   (vlSelf->__PVT__i0__DOT__pair_list
                                                    [1U] 
                                                    >> 0xcU));
    if ((1U & (vlSelf->__PVT__i0__DOT__data_list[0U] 
               ^ vlSelf->i0__DOT____Vtogcov__data_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[7189]);
        vlSelf->i0__DOT____Vtogcov__data_list[0U] = 
            ((0xffeU & vlSelf->i0__DOT____Vtogcov__data_list
              [0U]) | (1U & vlSelf->__PVT__i0__DOT__data_list
                       [0U]));
    }
    if ((2U & (vlSelf->__PVT__i0__DOT__data_list[0U] 
               ^ vlSelf->i0__DOT____Vtogcov__data_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[7190]);
        vlSelf->i0__DOT____Vtogcov__data_list[0U] = 
            ((0xffdU & vlSelf->i0__DOT____Vtogcov__data_list
              [0U]) | (2U & vlSelf->__PVT__i0__DOT__data_list
                       [0U]));
    }
    if ((4U & (vlSelf->__PVT__i0__DOT__data_list[0U] 
               ^ vlSelf->i0__DOT____Vtogcov__data_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[7191]);
        vlSelf->i0__DOT____Vtogcov__data_list[0U] = 
            ((0xffbU & vlSelf->i0__DOT____Vtogcov__data_list
              [0U]) | (4U & vlSelf->__PVT__i0__DOT__data_list
                       [0U]));
    }
    if ((8U & (vlSelf->__PVT__i0__DOT__data_list[0U] 
               ^ vlSelf->i0__DOT____Vtogcov__data_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[7192]);
        vlSelf->i0__DOT____Vtogcov__data_list[0U] = 
            ((0xff7U & vlSelf->i0__DOT____Vtogcov__data_list
              [0U]) | (8U & vlSelf->__PVT__i0__DOT__data_list
                       [0U]));
    }
    if ((0x10U & (vlSelf->__PVT__i0__DOT__data_list
                  [0U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[7193]);
        vlSelf->i0__DOT____Vtogcov__data_list[0U] = 
            ((0xfefU & vlSelf->i0__DOT____Vtogcov__data_list
              [0U]) | (0x10U & vlSelf->__PVT__i0__DOT__data_list
                       [0U]));
    }
    if ((0x20U & (vlSelf->__PVT__i0__DOT__data_list
                  [0U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[7194]);
        vlSelf->i0__DOT____Vtogcov__data_list[0U] = 
            ((0xfdfU & vlSelf->i0__DOT____Vtogcov__data_list
              [0U]) | (0x20U & vlSelf->__PVT__i0__DOT__data_list
                       [0U]));
    }
    if ((0x40U & (vlSelf->__PVT__i0__DOT__data_list
                  [0U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[7195]);
        vlSelf->i0__DOT____Vtogcov__data_list[0U] = 
            ((0xfbfU & vlSelf->i0__DOT____Vtogcov__data_list
              [0U]) | (0x40U & vlSelf->__PVT__i0__DOT__data_list
                       [0U]));
    }
    if ((0x80U & (vlSelf->__PVT__i0__DOT__data_list
                  [0U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[7196]);
        vlSelf->i0__DOT____Vtogcov__data_list[0U] = 
            ((0xf7fU & vlSelf->i0__DOT____Vtogcov__data_list
              [0U]) | (0x80U & vlSelf->__PVT__i0__DOT__data_list
                       [0U]));
    }
    if ((0x100U & (vlSelf->__PVT__i0__DOT__data_list
                   [0U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[7197]);
        vlSelf->i0__DOT____Vtogcov__data_list[0U] = 
            ((0xeffU & vlSelf->i0__DOT____Vtogcov__data_list
              [0U]) | (0x100U & vlSelf->__PVT__i0__DOT__data_list
                       [0U]));
    }
    if ((0x200U & (vlSelf->__PVT__i0__DOT__data_list
                   [0U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[7198]);
        vlSelf->i0__DOT____Vtogcov__data_list[0U] = 
            ((0xdffU & vlSelf->i0__DOT____Vtogcov__data_list
              [0U]) | (0x200U & vlSelf->__PVT__i0__DOT__data_list
                       [0U]));
    }
    if ((0x400U & (vlSelf->__PVT__i0__DOT__data_list
                   [0U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[7199]);
        vlSelf->i0__DOT____Vtogcov__data_list[0U] = 
            ((0xbffU & vlSelf->i0__DOT____Vtogcov__data_list
              [0U]) | (0x400U & vlSelf->__PVT__i0__DOT__data_list
                       [0U]));
    }
    if ((0x800U & (vlSelf->__PVT__i0__DOT__data_list
                   [0U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[7200]);
        vlSelf->i0__DOT____Vtogcov__data_list[0U] = 
            ((0x7ffU & vlSelf->i0__DOT____Vtogcov__data_list
              [0U]) | (0x800U & vlSelf->__PVT__i0__DOT__data_list
                       [0U]));
    }
    if ((1U & (vlSelf->__PVT__i0__DOT__data_list[1U] 
               ^ vlSelf->i0__DOT____Vtogcov__data_list
               [1U]))) {
        ++(vlSymsp->__Vcoverage[7201]);
        vlSelf->i0__DOT____Vtogcov__data_list[1U] = 
            ((0xffeU & vlSelf->i0__DOT____Vtogcov__data_list
              [1U]) | (1U & vlSelf->__PVT__i0__DOT__data_list
                       [1U]));
    }
    if ((2U & (vlSelf->__PVT__i0__DOT__data_list[1U] 
               ^ vlSelf->i0__DOT____Vtogcov__data_list
               [1U]))) {
        ++(vlSymsp->__Vcoverage[7202]);
        vlSelf->i0__DOT____Vtogcov__data_list[1U] = 
            ((0xffdU & vlSelf->i0__DOT____Vtogcov__data_list
              [1U]) | (2U & vlSelf->__PVT__i0__DOT__data_list
                       [1U]));
    }
    if ((4U & (vlSelf->__PVT__i0__DOT__data_list[1U] 
               ^ vlSelf->i0__DOT____Vtogcov__data_list
               [1U]))) {
        ++(vlSymsp->__Vcoverage[7203]);
        vlSelf->i0__DOT____Vtogcov__data_list[1U] = 
            ((0xffbU & vlSelf->i0__DOT____Vtogcov__data_list
              [1U]) | (4U & vlSelf->__PVT__i0__DOT__data_list
                       [1U]));
    }
    if ((8U & (vlSelf->__PVT__i0__DOT__data_list[1U] 
               ^ vlSelf->i0__DOT____Vtogcov__data_list
               [1U]))) {
        ++(vlSymsp->__Vcoverage[7204]);
        vlSelf->i0__DOT____Vtogcov__data_list[1U] = 
            ((0xff7U & vlSelf->i0__DOT____Vtogcov__data_list
              [1U]) | (8U & vlSelf->__PVT__i0__DOT__data_list
                       [1U]));
    }
    if ((0x10U & (vlSelf->__PVT__i0__DOT__data_list
                  [1U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                  [1U]))) {
        ++(vlSymsp->__Vcoverage[7205]);
        vlSelf->i0__DOT____Vtogcov__data_list[1U] = 
            ((0xfefU & vlSelf->i0__DOT____Vtogcov__data_list
              [1U]) | (0x10U & vlSelf->__PVT__i0__DOT__data_list
                       [1U]));
    }
    if ((0x20U & (vlSelf->__PVT__i0__DOT__data_list
                  [1U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                  [1U]))) {
        ++(vlSymsp->__Vcoverage[7206]);
        vlSelf->i0__DOT____Vtogcov__data_list[1U] = 
            ((0xfdfU & vlSelf->i0__DOT____Vtogcov__data_list
              [1U]) | (0x20U & vlSelf->__PVT__i0__DOT__data_list
                       [1U]));
    }
    if ((0x40U & (vlSelf->__PVT__i0__DOT__data_list
                  [1U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                  [1U]))) {
        ++(vlSymsp->__Vcoverage[7207]);
        vlSelf->i0__DOT____Vtogcov__data_list[1U] = 
            ((0xfbfU & vlSelf->i0__DOT____Vtogcov__data_list
              [1U]) | (0x40U & vlSelf->__PVT__i0__DOT__data_list
                       [1U]));
    }
    if ((0x80U & (vlSelf->__PVT__i0__DOT__data_list
                  [1U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                  [1U]))) {
        ++(vlSymsp->__Vcoverage[7208]);
        vlSelf->i0__DOT____Vtogcov__data_list[1U] = 
            ((0xf7fU & vlSelf->i0__DOT____Vtogcov__data_list
              [1U]) | (0x80U & vlSelf->__PVT__i0__DOT__data_list
                       [1U]));
    }
    if ((0x100U & (vlSelf->__PVT__i0__DOT__data_list
                   [1U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                   [1U]))) {
        ++(vlSymsp->__Vcoverage[7209]);
        vlSelf->i0__DOT____Vtogcov__data_list[1U] = 
            ((0xeffU & vlSelf->i0__DOT____Vtogcov__data_list
              [1U]) | (0x100U & vlSelf->__PVT__i0__DOT__data_list
                       [1U]));
    }
    if ((0x200U & (vlSelf->__PVT__i0__DOT__data_list
                   [1U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                   [1U]))) {
        ++(vlSymsp->__Vcoverage[7210]);
        vlSelf->i0__DOT____Vtogcov__data_list[1U] = 
            ((0xdffU & vlSelf->i0__DOT____Vtogcov__data_list
              [1U]) | (0x200U & vlSelf->__PVT__i0__DOT__data_list
                       [1U]));
    }
    if ((0x400U & (vlSelf->__PVT__i0__DOT__data_list
                   [1U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                   [1U]))) {
        ++(vlSymsp->__Vcoverage[7211]);
        vlSelf->i0__DOT____Vtogcov__data_list[1U] = 
            ((0xbffU & vlSelf->i0__DOT____Vtogcov__data_list
              [1U]) | (0x400U & vlSelf->__PVT__i0__DOT__data_list
                       [1U]));
    }
    if ((0x800U & (vlSelf->__PVT__i0__DOT__data_list
                   [1U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                   [1U]))) {
        ++(vlSymsp->__Vcoverage[7212]);
        vlSelf->i0__DOT____Vtogcov__data_list[1U] = 
            ((0x7ffU & vlSelf->i0__DOT____Vtogcov__data_list
              [1U]) | (0x800U & vlSelf->__PVT__i0__DOT__data_list
                       [1U]));
    }
    if ((1U & (vlSelf->__PVT__i0__DOT__key_list[0U] 
               ^ vlSelf->i0__DOT____Vtogcov__key_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[7125]);
        vlSelf->i0__DOT____Vtogcov__key_list[0U] = 
            ((0xfffffffeU & vlSelf->i0__DOT____Vtogcov__key_list
              [0U]) | (1U & vlSelf->__PVT__i0__DOT__key_list
                       [0U]));
    }
    if ((2U & (vlSelf->__PVT__i0__DOT__key_list[0U] 
               ^ vlSelf->i0__DOT____Vtogcov__key_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[7126]);
        vlSelf->i0__DOT____Vtogcov__key_list[0U] = 
            ((0xfffffffdU & vlSelf->i0__DOT____Vtogcov__key_list
              [0U]) | (2U & vlSelf->__PVT__i0__DOT__key_list
                       [0U]));
    }
    if ((4U & (vlSelf->__PVT__i0__DOT__key_list[0U] 
               ^ vlSelf->i0__DOT____Vtogcov__key_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[7127]);
        vlSelf->i0__DOT____Vtogcov__key_list[0U] = 
            ((0xfffffffbU & vlSelf->i0__DOT____Vtogcov__key_list
              [0U]) | (4U & vlSelf->__PVT__i0__DOT__key_list
                       [0U]));
    }
    if ((8U & (vlSelf->__PVT__i0__DOT__key_list[0U] 
               ^ vlSelf->i0__DOT____Vtogcov__key_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[7128]);
        vlSelf->i0__DOT____Vtogcov__key_list[0U] = 
            ((0xfffffff7U & vlSelf->i0__DOT____Vtogcov__key_list
              [0U]) | (8U & vlSelf->__PVT__i0__DOT__key_list
                       [0U]));
    }
    if ((0x10U & (vlSelf->__PVT__i0__DOT__key_list[0U] 
                  ^ vlSelf->i0__DOT____Vtogcov__key_list
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[7129]);
        vlSelf->i0__DOT____Vtogcov__key_list[0U] = 
            ((0xffffffefU & vlSelf->i0__DOT____Vtogcov__key_list
              [0U]) | (0x10U & vlSelf->__PVT__i0__DOT__key_list
                       [0U]));
    }
    if ((0x20U & (vlSelf->__PVT__i0__DOT__key_list[0U] 
                  ^ vlSelf->i0__DOT____Vtogcov__key_list
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[7130]);
        vlSelf->i0__DOT____Vtogcov__key_list[0U] = 
            ((0xffffffdfU & vlSelf->i0__DOT____Vtogcov__key_list
              [0U]) | (0x20U & vlSelf->__PVT__i0__DOT__key_list
                       [0U]));
    }
    if ((0x40U & (vlSelf->__PVT__i0__DOT__key_list[0U] 
                  ^ vlSelf->i0__DOT____Vtogcov__key_list
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[7131]);
        vlSelf->i0__DOT____Vtogcov__key_list[0U] = 
            ((0xffffffbfU & vlSelf->i0__DOT____Vtogcov__key_list
              [0U]) | (0x40U & vlSelf->__PVT__i0__DOT__key_list
                       [0U]));
    }
    if ((0x80U & (vlSelf->__PVT__i0__DOT__key_list[0U] 
                  ^ vlSelf->i0__DOT____Vtogcov__key_list
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[7132]);
        vlSelf->i0__DOT____Vtogcov__key_list[0U] = 
            ((0xffffff7fU & vlSelf->i0__DOT____Vtogcov__key_list
              [0U]) | (0x80U & vlSelf->__PVT__i0__DOT__key_list
                       [0U]));
    }
    if ((0x100U & (vlSelf->__PVT__i0__DOT__key_list
                   [0U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[7133]);
        vlSelf->i0__DOT____Vtogcov__key_list[0U] = 
            ((0xfffffeffU & vlSelf->i0__DOT____Vtogcov__key_list
              [0U]) | (0x100U & vlSelf->__PVT__i0__DOT__key_list
                       [0U]));
    }
    if ((0x200U & (vlSelf->__PVT__i0__DOT__key_list
                   [0U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[7134]);
        vlSelf->i0__DOT____Vtogcov__key_list[0U] = 
            ((0xfffffdffU & vlSelf->i0__DOT____Vtogcov__key_list
              [0U]) | (0x200U & vlSelf->__PVT__i0__DOT__key_list
                       [0U]));
    }
    if ((0x400U & (vlSelf->__PVT__i0__DOT__key_list
                   [0U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[7135]);
        vlSelf->i0__DOT____Vtogcov__key_list[0U] = 
            ((0xfffffbffU & vlSelf->i0__DOT____Vtogcov__key_list
              [0U]) | (0x400U & vlSelf->__PVT__i0__DOT__key_list
                       [0U]));
    }
    if ((0x800U & (vlSelf->__PVT__i0__DOT__key_list
                   [0U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[7136]);
        vlSelf->i0__DOT____Vtogcov__key_list[0U] = 
            ((0xfffff7ffU & vlSelf->i0__DOT____Vtogcov__key_list
              [0U]) | (0x800U & vlSelf->__PVT__i0__DOT__key_list
                       [0U]));
    }
    if ((0x1000U & (vlSelf->__PVT__i0__DOT__key_list
                    [0U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[7137]);
        vlSelf->i0__DOT____Vtogcov__key_list[0U] = 
            ((0xffffefffU & vlSelf->i0__DOT____Vtogcov__key_list
              [0U]) | (0x1000U & vlSelf->__PVT__i0__DOT__key_list
                       [0U]));
    }
    if ((0x2000U & (vlSelf->__PVT__i0__DOT__key_list
                    [0U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[7138]);
        vlSelf->i0__DOT____Vtogcov__key_list[0U] = 
            ((0xffffdfffU & vlSelf->i0__DOT____Vtogcov__key_list
              [0U]) | (0x2000U & vlSelf->__PVT__i0__DOT__key_list
                       [0U]));
    }
    if ((0x4000U & (vlSelf->__PVT__i0__DOT__key_list
                    [0U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[7139]);
        vlSelf->i0__DOT____Vtogcov__key_list[0U] = 
            ((0xffffbfffU & vlSelf->i0__DOT____Vtogcov__key_list
              [0U]) | (0x4000U & vlSelf->__PVT__i0__DOT__key_list
                       [0U]));
    }
    if ((0x8000U & (vlSelf->__PVT__i0__DOT__key_list
                    [0U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[7140]);
        vlSelf->i0__DOT____Vtogcov__key_list[0U] = 
            ((0xffff7fffU & vlSelf->i0__DOT____Vtogcov__key_list
              [0U]) | (0x8000U & vlSelf->__PVT__i0__DOT__key_list
                       [0U]));
    }
    if ((0x10000U & (vlSelf->__PVT__i0__DOT__key_list
                     [0U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[7141]);
        vlSelf->i0__DOT____Vtogcov__key_list[0U] = 
            ((0xfffeffffU & vlSelf->i0__DOT____Vtogcov__key_list
              [0U]) | (0x10000U & vlSelf->__PVT__i0__DOT__key_list
                       [0U]));
    }
    if ((0x20000U & (vlSelf->__PVT__i0__DOT__key_list
                     [0U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[7142]);
        vlSelf->i0__DOT____Vtogcov__key_list[0U] = 
            ((0xfffdffffU & vlSelf->i0__DOT____Vtogcov__key_list
              [0U]) | (0x20000U & vlSelf->__PVT__i0__DOT__key_list
                       [0U]));
    }
    if ((0x40000U & (vlSelf->__PVT__i0__DOT__key_list
                     [0U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[7143]);
        vlSelf->i0__DOT____Vtogcov__key_list[0U] = 
            ((0xfffbffffU & vlSelf->i0__DOT____Vtogcov__key_list
              [0U]) | (0x40000U & vlSelf->__PVT__i0__DOT__key_list
                       [0U]));
    }
    if ((0x80000U & (vlSelf->__PVT__i0__DOT__key_list
                     [0U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[7144]);
        vlSelf->i0__DOT____Vtogcov__key_list[0U] = 
            ((0xfff7ffffU & vlSelf->i0__DOT____Vtogcov__key_list
              [0U]) | (0x80000U & vlSelf->__PVT__i0__DOT__key_list
                       [0U]));
    }
    if ((0x100000U & (vlSelf->__PVT__i0__DOT__key_list
                      [0U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[7145]);
        vlSelf->i0__DOT____Vtogcov__key_list[0U] = 
            ((0xffefffffU & vlSelf->i0__DOT____Vtogcov__key_list
              [0U]) | (0x100000U & vlSelf->__PVT__i0__DOT__key_list
                       [0U]));
    }
    if ((0x200000U & (vlSelf->__PVT__i0__DOT__key_list
                      [0U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[7146]);
        vlSelf->i0__DOT____Vtogcov__key_list[0U] = 
            ((0xffdfffffU & vlSelf->i0__DOT____Vtogcov__key_list
              [0U]) | (0x200000U & vlSelf->__PVT__i0__DOT__key_list
                       [0U]));
    }
    if ((0x400000U & (vlSelf->__PVT__i0__DOT__key_list
                      [0U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[7147]);
        vlSelf->i0__DOT____Vtogcov__key_list[0U] = 
            ((0xffbfffffU & vlSelf->i0__DOT____Vtogcov__key_list
              [0U]) | (0x400000U & vlSelf->__PVT__i0__DOT__key_list
                       [0U]));
    }
    if ((0x800000U & (vlSelf->__PVT__i0__DOT__key_list
                      [0U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[7148]);
        vlSelf->i0__DOT____Vtogcov__key_list[0U] = 
            ((0xff7fffffU & vlSelf->i0__DOT____Vtogcov__key_list
              [0U]) | (0x800000U & vlSelf->__PVT__i0__DOT__key_list
                       [0U]));
    }
    if ((0x1000000U & (vlSelf->__PVT__i0__DOT__key_list
                       [0U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[7149]);
        vlSelf->i0__DOT____Vtogcov__key_list[0U] = 
            ((0xfeffffffU & vlSelf->i0__DOT____Vtogcov__key_list
              [0U]) | (0x1000000U & vlSelf->__PVT__i0__DOT__key_list
                       [0U]));
    }
    if ((0x2000000U & (vlSelf->__PVT__i0__DOT__key_list
                       [0U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[7150]);
        vlSelf->i0__DOT____Vtogcov__key_list[0U] = 
            ((0xfdffffffU & vlSelf->i0__DOT____Vtogcov__key_list
              [0U]) | (0x2000000U & vlSelf->__PVT__i0__DOT__key_list
                       [0U]));
    }
    if ((0x4000000U & (vlSelf->__PVT__i0__DOT__key_list
                       [0U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[7151]);
        vlSelf->i0__DOT____Vtogcov__key_list[0U] = 
            ((0xfbffffffU & vlSelf->i0__DOT____Vtogcov__key_list
              [0U]) | (0x4000000U & vlSelf->__PVT__i0__DOT__key_list
                       [0U]));
    }
    if ((0x8000000U & (vlSelf->__PVT__i0__DOT__key_list
                       [0U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[7152]);
        vlSelf->i0__DOT____Vtogcov__key_list[0U] = 
            ((0xf7ffffffU & vlSelf->i0__DOT____Vtogcov__key_list
              [0U]) | (0x8000000U & vlSelf->__PVT__i0__DOT__key_list
                       [0U]));
    }
    if ((0x10000000U & (vlSelf->__PVT__i0__DOT__key_list
                        [0U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                        [0U]))) {
        ++(vlSymsp->__Vcoverage[7153]);
        vlSelf->i0__DOT____Vtogcov__key_list[0U] = 
            ((0xefffffffU & vlSelf->i0__DOT____Vtogcov__key_list
              [0U]) | (0x10000000U & vlSelf->__PVT__i0__DOT__key_list
                       [0U]));
    }
    if ((0x20000000U & (vlSelf->__PVT__i0__DOT__key_list
                        [0U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                        [0U]))) {
        ++(vlSymsp->__Vcoverage[7154]);
        vlSelf->i0__DOT____Vtogcov__key_list[0U] = 
            ((0xdfffffffU & vlSelf->i0__DOT____Vtogcov__key_list
              [0U]) | (0x20000000U & vlSelf->__PVT__i0__DOT__key_list
                       [0U]));
    }
    if ((0x40000000U & (vlSelf->__PVT__i0__DOT__key_list
                        [0U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                        [0U]))) {
        ++(vlSymsp->__Vcoverage[7155]);
        vlSelf->i0__DOT____Vtogcov__key_list[0U] = 
            ((0xbfffffffU & vlSelf->i0__DOT____Vtogcov__key_list
              [0U]) | (0x40000000U & vlSelf->__PVT__i0__DOT__key_list
                       [0U]));
    }
    if (((vlSelf->__PVT__i0__DOT__key_list[0U] ^ vlSelf->i0__DOT____Vtogcov__key_list
          [0U]) >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[7156]);
        vlSelf->i0__DOT____Vtogcov__key_list[0U] = 
            ((0x7fffffffU & vlSelf->i0__DOT____Vtogcov__key_list
              [0U]) | (0x80000000U & vlSelf->__PVT__i0__DOT__key_list
                       [0U]));
    }
    if ((1U & (vlSelf->__PVT__i0__DOT__key_list[1U] 
               ^ vlSelf->i0__DOT____Vtogcov__key_list
               [1U]))) {
        ++(vlSymsp->__Vcoverage[7157]);
        vlSelf->i0__DOT____Vtogcov__key_list[1U] = 
            ((0xfffffffeU & vlSelf->i0__DOT____Vtogcov__key_list
              [1U]) | (1U & vlSelf->__PVT__i0__DOT__key_list
                       [1U]));
    }
    if ((2U & (vlSelf->__PVT__i0__DOT__key_list[1U] 
               ^ vlSelf->i0__DOT____Vtogcov__key_list
               [1U]))) {
        ++(vlSymsp->__Vcoverage[7158]);
        vlSelf->i0__DOT____Vtogcov__key_list[1U] = 
            ((0xfffffffdU & vlSelf->i0__DOT____Vtogcov__key_list
              [1U]) | (2U & vlSelf->__PVT__i0__DOT__key_list
                       [1U]));
    }
    if ((4U & (vlSelf->__PVT__i0__DOT__key_list[1U] 
               ^ vlSelf->i0__DOT____Vtogcov__key_list
               [1U]))) {
        ++(vlSymsp->__Vcoverage[7159]);
        vlSelf->i0__DOT____Vtogcov__key_list[1U] = 
            ((0xfffffffbU & vlSelf->i0__DOT____Vtogcov__key_list
              [1U]) | (4U & vlSelf->__PVT__i0__DOT__key_list
                       [1U]));
    }
    if ((8U & (vlSelf->__PVT__i0__DOT__key_list[1U] 
               ^ vlSelf->i0__DOT____Vtogcov__key_list
               [1U]))) {
        ++(vlSymsp->__Vcoverage[7160]);
        vlSelf->i0__DOT____Vtogcov__key_list[1U] = 
            ((0xfffffff7U & vlSelf->i0__DOT____Vtogcov__key_list
              [1U]) | (8U & vlSelf->__PVT__i0__DOT__key_list
                       [1U]));
    }
    if ((0x10U & (vlSelf->__PVT__i0__DOT__key_list[1U] 
                  ^ vlSelf->i0__DOT____Vtogcov__key_list
                  [1U]))) {
        ++(vlSymsp->__Vcoverage[7161]);
        vlSelf->i0__DOT____Vtogcov__key_list[1U] = 
            ((0xffffffefU & vlSelf->i0__DOT____Vtogcov__key_list
              [1U]) | (0x10U & vlSelf->__PVT__i0__DOT__key_list
                       [1U]));
    }
    if ((0x20U & (vlSelf->__PVT__i0__DOT__key_list[1U] 
                  ^ vlSelf->i0__DOT____Vtogcov__key_list
                  [1U]))) {
        ++(vlSymsp->__Vcoverage[7162]);
        vlSelf->i0__DOT____Vtogcov__key_list[1U] = 
            ((0xffffffdfU & vlSelf->i0__DOT____Vtogcov__key_list
              [1U]) | (0x20U & vlSelf->__PVT__i0__DOT__key_list
                       [1U]));
    }
    if ((0x40U & (vlSelf->__PVT__i0__DOT__key_list[1U] 
                  ^ vlSelf->i0__DOT____Vtogcov__key_list
                  [1U]))) {
        ++(vlSymsp->__Vcoverage[7163]);
        vlSelf->i0__DOT____Vtogcov__key_list[1U] = 
            ((0xffffffbfU & vlSelf->i0__DOT____Vtogcov__key_list
              [1U]) | (0x40U & vlSelf->__PVT__i0__DOT__key_list
                       [1U]));
    }
    if ((0x80U & (vlSelf->__PVT__i0__DOT__key_list[1U] 
                  ^ vlSelf->i0__DOT____Vtogcov__key_list
                  [1U]))) {
        ++(vlSymsp->__Vcoverage[7164]);
        vlSelf->i0__DOT____Vtogcov__key_list[1U] = 
            ((0xffffff7fU & vlSelf->i0__DOT____Vtogcov__key_list
              [1U]) | (0x80U & vlSelf->__PVT__i0__DOT__key_list
                       [1U]));
    }
    if ((0x100U & (vlSelf->__PVT__i0__DOT__key_list
                   [1U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                   [1U]))) {
        ++(vlSymsp->__Vcoverage[7165]);
        vlSelf->i0__DOT____Vtogcov__key_list[1U] = 
            ((0xfffffeffU & vlSelf->i0__DOT____Vtogcov__key_list
              [1U]) | (0x100U & vlSelf->__PVT__i0__DOT__key_list
                       [1U]));
    }
    if ((0x200U & (vlSelf->__PVT__i0__DOT__key_list
                   [1U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                   [1U]))) {
        ++(vlSymsp->__Vcoverage[7166]);
        vlSelf->i0__DOT____Vtogcov__key_list[1U] = 
            ((0xfffffdffU & vlSelf->i0__DOT____Vtogcov__key_list
              [1U]) | (0x200U & vlSelf->__PVT__i0__DOT__key_list
                       [1U]));
    }
    if ((0x400U & (vlSelf->__PVT__i0__DOT__key_list
                   [1U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                   [1U]))) {
        ++(vlSymsp->__Vcoverage[7167]);
        vlSelf->i0__DOT____Vtogcov__key_list[1U] = 
            ((0xfffffbffU & vlSelf->i0__DOT____Vtogcov__key_list
              [1U]) | (0x400U & vlSelf->__PVT__i0__DOT__key_list
                       [1U]));
    }
    if ((0x800U & (vlSelf->__PVT__i0__DOT__key_list
                   [1U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                   [1U]))) {
        ++(vlSymsp->__Vcoverage[7168]);
        vlSelf->i0__DOT____Vtogcov__key_list[1U] = 
            ((0xfffff7ffU & vlSelf->i0__DOT____Vtogcov__key_list
              [1U]) | (0x800U & vlSelf->__PVT__i0__DOT__key_list
                       [1U]));
    }
    if ((0x1000U & (vlSelf->__PVT__i0__DOT__key_list
                    [1U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                    [1U]))) {
        ++(vlSymsp->__Vcoverage[7169]);
        vlSelf->i0__DOT____Vtogcov__key_list[1U] = 
            ((0xffffefffU & vlSelf->i0__DOT____Vtogcov__key_list
              [1U]) | (0x1000U & vlSelf->__PVT__i0__DOT__key_list
                       [1U]));
    }
    if ((0x2000U & (vlSelf->__PVT__i0__DOT__key_list
                    [1U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                    [1U]))) {
        ++(vlSymsp->__Vcoverage[7170]);
        vlSelf->i0__DOT____Vtogcov__key_list[1U] = 
            ((0xffffdfffU & vlSelf->i0__DOT____Vtogcov__key_list
              [1U]) | (0x2000U & vlSelf->__PVT__i0__DOT__key_list
                       [1U]));
    }
    if ((0x4000U & (vlSelf->__PVT__i0__DOT__key_list
                    [1U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                    [1U]))) {
        ++(vlSymsp->__Vcoverage[7171]);
        vlSelf->i0__DOT____Vtogcov__key_list[1U] = 
            ((0xffffbfffU & vlSelf->i0__DOT____Vtogcov__key_list
              [1U]) | (0x4000U & vlSelf->__PVT__i0__DOT__key_list
                       [1U]));
    }
    if ((0x8000U & (vlSelf->__PVT__i0__DOT__key_list
                    [1U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                    [1U]))) {
        ++(vlSymsp->__Vcoverage[7172]);
        vlSelf->i0__DOT____Vtogcov__key_list[1U] = 
            ((0xffff7fffU & vlSelf->i0__DOT____Vtogcov__key_list
              [1U]) | (0x8000U & vlSelf->__PVT__i0__DOT__key_list
                       [1U]));
    }
    if ((0x10000U & (vlSelf->__PVT__i0__DOT__key_list
                     [1U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                     [1U]))) {
        ++(vlSymsp->__Vcoverage[7173]);
        vlSelf->i0__DOT____Vtogcov__key_list[1U] = 
            ((0xfffeffffU & vlSelf->i0__DOT____Vtogcov__key_list
              [1U]) | (0x10000U & vlSelf->__PVT__i0__DOT__key_list
                       [1U]));
    }
    if ((0x20000U & (vlSelf->__PVT__i0__DOT__key_list
                     [1U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                     [1U]))) {
        ++(vlSymsp->__Vcoverage[7174]);
        vlSelf->i0__DOT____Vtogcov__key_list[1U] = 
            ((0xfffdffffU & vlSelf->i0__DOT____Vtogcov__key_list
              [1U]) | (0x20000U & vlSelf->__PVT__i0__DOT__key_list
                       [1U]));
    }
    if ((0x40000U & (vlSelf->__PVT__i0__DOT__key_list
                     [1U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                     [1U]))) {
        ++(vlSymsp->__Vcoverage[7175]);
        vlSelf->i0__DOT____Vtogcov__key_list[1U] = 
            ((0xfffbffffU & vlSelf->i0__DOT____Vtogcov__key_list
              [1U]) | (0x40000U & vlSelf->__PVT__i0__DOT__key_list
                       [1U]));
    }
    if ((0x80000U & (vlSelf->__PVT__i0__DOT__key_list
                     [1U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                     [1U]))) {
        ++(vlSymsp->__Vcoverage[7176]);
        vlSelf->i0__DOT____Vtogcov__key_list[1U] = 
            ((0xfff7ffffU & vlSelf->i0__DOT____Vtogcov__key_list
              [1U]) | (0x80000U & vlSelf->__PVT__i0__DOT__key_list
                       [1U]));
    }
    if ((0x100000U & (vlSelf->__PVT__i0__DOT__key_list
                      [1U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                      [1U]))) {
        ++(vlSymsp->__Vcoverage[7177]);
        vlSelf->i0__DOT____Vtogcov__key_list[1U] = 
            ((0xffefffffU & vlSelf->i0__DOT____Vtogcov__key_list
              [1U]) | (0x100000U & vlSelf->__PVT__i0__DOT__key_list
                       [1U]));
    }
    if ((0x200000U & (vlSelf->__PVT__i0__DOT__key_list
                      [1U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                      [1U]))) {
        ++(vlSymsp->__Vcoverage[7178]);
        vlSelf->i0__DOT____Vtogcov__key_list[1U] = 
            ((0xffdfffffU & vlSelf->i0__DOT____Vtogcov__key_list
              [1U]) | (0x200000U & vlSelf->__PVT__i0__DOT__key_list
                       [1U]));
    }
    if ((0x400000U & (vlSelf->__PVT__i0__DOT__key_list
                      [1U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                      [1U]))) {
        ++(vlSymsp->__Vcoverage[7179]);
        vlSelf->i0__DOT____Vtogcov__key_list[1U] = 
            ((0xffbfffffU & vlSelf->i0__DOT____Vtogcov__key_list
              [1U]) | (0x400000U & vlSelf->__PVT__i0__DOT__key_list
                       [1U]));
    }
    if ((0x800000U & (vlSelf->__PVT__i0__DOT__key_list
                      [1U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                      [1U]))) {
        ++(vlSymsp->__Vcoverage[7180]);
        vlSelf->i0__DOT____Vtogcov__key_list[1U] = 
            ((0xff7fffffU & vlSelf->i0__DOT____Vtogcov__key_list
              [1U]) | (0x800000U & vlSelf->__PVT__i0__DOT__key_list
                       [1U]));
    }
    if ((0x1000000U & (vlSelf->__PVT__i0__DOT__key_list
                       [1U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                       [1U]))) {
        ++(vlSymsp->__Vcoverage[7181]);
        vlSelf->i0__DOT____Vtogcov__key_list[1U] = 
            ((0xfeffffffU & vlSelf->i0__DOT____Vtogcov__key_list
              [1U]) | (0x1000000U & vlSelf->__PVT__i0__DOT__key_list
                       [1U]));
    }
    if ((0x2000000U & (vlSelf->__PVT__i0__DOT__key_list
                       [1U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                       [1U]))) {
        ++(vlSymsp->__Vcoverage[7182]);
        vlSelf->i0__DOT____Vtogcov__key_list[1U] = 
            ((0xfdffffffU & vlSelf->i0__DOT____Vtogcov__key_list
              [1U]) | (0x2000000U & vlSelf->__PVT__i0__DOT__key_list
                       [1U]));
    }
    if ((0x4000000U & (vlSelf->__PVT__i0__DOT__key_list
                       [1U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                       [1U]))) {
        ++(vlSymsp->__Vcoverage[7183]);
        vlSelf->i0__DOT____Vtogcov__key_list[1U] = 
            ((0xfbffffffU & vlSelf->i0__DOT____Vtogcov__key_list
              [1U]) | (0x4000000U & vlSelf->__PVT__i0__DOT__key_list
                       [1U]));
    }
    if ((0x8000000U & (vlSelf->__PVT__i0__DOT__key_list
                       [1U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                       [1U]))) {
        ++(vlSymsp->__Vcoverage[7184]);
        vlSelf->i0__DOT____Vtogcov__key_list[1U] = 
            ((0xf7ffffffU & vlSelf->i0__DOT____Vtogcov__key_list
              [1U]) | (0x8000000U & vlSelf->__PVT__i0__DOT__key_list
                       [1U]));
    }
    if ((0x10000000U & (vlSelf->__PVT__i0__DOT__key_list
                        [1U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                        [1U]))) {
        ++(vlSymsp->__Vcoverage[7185]);
        vlSelf->i0__DOT____Vtogcov__key_list[1U] = 
            ((0xefffffffU & vlSelf->i0__DOT____Vtogcov__key_list
              [1U]) | (0x10000000U & vlSelf->__PVT__i0__DOT__key_list
                       [1U]));
    }
    if ((0x20000000U & (vlSelf->__PVT__i0__DOT__key_list
                        [1U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                        [1U]))) {
        ++(vlSymsp->__Vcoverage[7186]);
        vlSelf->i0__DOT____Vtogcov__key_list[1U] = 
            ((0xdfffffffU & vlSelf->i0__DOT____Vtogcov__key_list
              [1U]) | (0x20000000U & vlSelf->__PVT__i0__DOT__key_list
                       [1U]));
    }
    if ((0x40000000U & (vlSelf->__PVT__i0__DOT__key_list
                        [1U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                        [1U]))) {
        ++(vlSymsp->__Vcoverage[7187]);
        vlSelf->i0__DOT____Vtogcov__key_list[1U] = 
            ((0xbfffffffU & vlSelf->i0__DOT____Vtogcov__key_list
              [1U]) | (0x40000000U & vlSelf->__PVT__i0__DOT__key_list
                       [1U]));
    }
    if (((vlSelf->__PVT__i0__DOT__key_list[1U] ^ vlSelf->i0__DOT____Vtogcov__key_list
          [1U]) >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[7188]);
        vlSelf->i0__DOT____Vtogcov__key_list[1U] = 
            ((0x7fffffffU & vlSelf->i0__DOT____Vtogcov__key_list
              [1U]) | (0x80000000U & vlSelf->__PVT__i0__DOT__key_list
                       [1U]));
    }
    ++(vlSymsp->__Vcoverage[7226]);
    ++(vlSymsp->__Vcoverage[7226]);
    ++(vlSymsp->__Vcoverage[7228]);
    ++(vlSymsp->__Vcoverage[7229]);
    vlSelf->__PVT__i0__DOT__lut_out = ((- (IData)((vlSymsp->TOP.inst 
                                                   == 
                                                   vlSelf->__PVT__i0__DOT__key_list
                                                   [0U]))) 
                                       & vlSelf->__PVT__i0__DOT__data_list
                                       [0U]);
    vlSelf->__PVT__i0__DOT__i = 2U;
    vlSelf->__PVT__i0__DOT__hit = (vlSymsp->TOP.inst 
                                   == vlSelf->__PVT__i0__DOT__key_list
                                   [0U]);
    vlSelf->__PVT__i0__DOT__lut_out = ((IData)(vlSelf->__PVT__i0__DOT__lut_out) 
                                       | ((- (IData)(
                                                     (vlSymsp->TOP.inst 
                                                      == 
                                                      vlSelf->__PVT__i0__DOT__key_list
                                                      [1U]))) 
                                          & vlSelf->__PVT__i0__DOT__data_list
                                          [1U]));
    vlSelf->__PVT__i0__DOT__hit = ((IData)(vlSelf->__PVT__i0__DOT__hit) 
                                   | (vlSymsp->TOP.inst 
                                      == vlSelf->__PVT__i0__DOT__key_list
                                      [1U]));
    vlSelf->out = ((IData)(vlSelf->__PVT__i0__DOT__hit)
                    ? (IData)(vlSelf->__PVT__i0__DOT__lut_out)
                    : 0U);
    if (((IData)(vlSelf->__PVT__i0__DOT__hit) ^ (IData)(vlSelf->i0__DOT____Vtogcov__hit))) {
        ++(vlSymsp->__Vcoverage[7225]);
        vlSelf->i0__DOT____Vtogcov__hit = vlSelf->__PVT__i0__DOT__hit;
    }
    if ((1U & ((IData)(vlSelf->__PVT__i0__DOT__lut_out) 
               ^ (IData)(vlSelf->i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[7213]);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xffeU 
                                                & (IData)(vlSelf->i0__DOT____Vtogcov__lut_out)) 
                                               | (1U 
                                                  & (IData)(vlSelf->__PVT__i0__DOT__lut_out)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__i0__DOT__lut_out) 
               ^ (IData)(vlSelf->i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[7214]);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xffdU 
                                                & (IData)(vlSelf->i0__DOT____Vtogcov__lut_out)) 
                                               | (2U 
                                                  & (IData)(vlSelf->__PVT__i0__DOT__lut_out)));
    }
    if ((4U & ((IData)(vlSelf->__PVT__i0__DOT__lut_out) 
               ^ (IData)(vlSelf->i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[7215]);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xffbU 
                                                & (IData)(vlSelf->i0__DOT____Vtogcov__lut_out)) 
                                               | (4U 
                                                  & (IData)(vlSelf->__PVT__i0__DOT__lut_out)));
    }
    if ((8U & ((IData)(vlSelf->__PVT__i0__DOT__lut_out) 
               ^ (IData)(vlSelf->i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[7216]);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xff7U 
                                                & (IData)(vlSelf->i0__DOT____Vtogcov__lut_out)) 
                                               | (8U 
                                                  & (IData)(vlSelf->__PVT__i0__DOT__lut_out)));
    }
    if ((0x10U & ((IData)(vlSelf->__PVT__i0__DOT__lut_out) 
                  ^ (IData)(vlSelf->i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[7217]);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xfefU 
                                                & (IData)(vlSelf->i0__DOT____Vtogcov__lut_out)) 
                                               | (0x10U 
                                                  & (IData)(vlSelf->__PVT__i0__DOT__lut_out)));
    }
    if ((0x20U & ((IData)(vlSelf->__PVT__i0__DOT__lut_out) 
                  ^ (IData)(vlSelf->i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[7218]);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xfdfU 
                                                & (IData)(vlSelf->i0__DOT____Vtogcov__lut_out)) 
                                               | (0x20U 
                                                  & (IData)(vlSelf->__PVT__i0__DOT__lut_out)));
    }
    if ((0x40U & ((IData)(vlSelf->__PVT__i0__DOT__lut_out) 
                  ^ (IData)(vlSelf->i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[7219]);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xfbfU 
                                                & (IData)(vlSelf->i0__DOT____Vtogcov__lut_out)) 
                                               | (0x40U 
                                                  & (IData)(vlSelf->__PVT__i0__DOT__lut_out)));
    }
    if ((0x80U & ((IData)(vlSelf->__PVT__i0__DOT__lut_out) 
                  ^ (IData)(vlSelf->i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[7220]);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xf7fU 
                                                & (IData)(vlSelf->i0__DOT____Vtogcov__lut_out)) 
                                               | (0x80U 
                                                  & (IData)(vlSelf->__PVT__i0__DOT__lut_out)));
    }
    if ((0x100U & ((IData)(vlSelf->__PVT__i0__DOT__lut_out) 
                   ^ (IData)(vlSelf->i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[7221]);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xeffU 
                                                & (IData)(vlSelf->i0__DOT____Vtogcov__lut_out)) 
                                               | (0x100U 
                                                  & (IData)(vlSelf->__PVT__i0__DOT__lut_out)));
    }
    if ((0x200U & ((IData)(vlSelf->__PVT__i0__DOT__lut_out) 
                   ^ (IData)(vlSelf->i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[7222]);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xdffU 
                                                & (IData)(vlSelf->i0__DOT____Vtogcov__lut_out)) 
                                               | (0x200U 
                                                  & (IData)(vlSelf->__PVT__i0__DOT__lut_out)));
    }
    if ((0x400U & ((IData)(vlSelf->__PVT__i0__DOT__lut_out) 
                   ^ (IData)(vlSelf->i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[7223]);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xbffU 
                                                & (IData)(vlSelf->i0__DOT____Vtogcov__lut_out)) 
                                               | (0x400U 
                                                  & (IData)(vlSelf->__PVT__i0__DOT__lut_out)));
    }
    if ((0x800U & ((IData)(vlSelf->__PVT__i0__DOT__lut_out) 
                   ^ (IData)(vlSelf->i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[7224]);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0x7ffU 
                                                & (IData)(vlSelf->i0__DOT____Vtogcov__lut_out)) 
                                               | (0x800U 
                                                  & (IData)(vlSelf->__PVT__i0__DOT__lut_out)));
    }
}

VL_INLINE_OPT void Vtop_MuxKeyWithDefault__K20_Dc___combo__TOP__top__DOT__de__DOT__m20__3(Vtop_MuxKeyWithDefault__K20_Dc* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_MuxKeyWithDefault__K20_Dc___combo__TOP__top__DOT__de__DOT__m20__3\n"); );
    // Body
    if ((1U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U] 
               ^ vlSelf->__Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[6949]);
        vlSelf->__Vtogcov__lut[0U] = ((0xfffffffeU 
                                       & vlSelf->__Vtogcov__lut[0U]) 
                                      | (1U & vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U]));
    }
    if ((2U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U] 
               ^ vlSelf->__Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[6950]);
        vlSelf->__Vtogcov__lut[0U] = ((0xfffffffdU 
                                       & vlSelf->__Vtogcov__lut[0U]) 
                                      | (2U & vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U]));
    }
    if ((4U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U] 
               ^ vlSelf->__Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[6951]);
        vlSelf->__Vtogcov__lut[0U] = ((0xfffffffbU 
                                       & vlSelf->__Vtogcov__lut[0U]) 
                                      | (4U & vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U]));
    }
    if ((8U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U] 
               ^ vlSelf->__Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[6952]);
        vlSelf->__Vtogcov__lut[0U] = ((0xfffffff7U 
                                       & vlSelf->__Vtogcov__lut[0U]) 
                                      | (8U & vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U]));
    }
    if ((0x10U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U] 
                  ^ vlSelf->__Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[6953]);
        vlSelf->__Vtogcov__lut[0U] = ((0xffffffefU 
                                       & vlSelf->__Vtogcov__lut[0U]) 
                                      | (0x10U & vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U]));
    }
    if ((0x20U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U] 
                  ^ vlSelf->__Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[6954]);
        vlSelf->__Vtogcov__lut[0U] = ((0xffffffdfU 
                                       & vlSelf->__Vtogcov__lut[0U]) 
                                      | (0x20U & vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U]));
    }
    if ((0x40U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U] 
                  ^ vlSelf->__Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[6955]);
        vlSelf->__Vtogcov__lut[0U] = ((0xffffffbfU 
                                       & vlSelf->__Vtogcov__lut[0U]) 
                                      | (0x40U & vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U]));
    }
    if ((0x80U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U] 
                  ^ vlSelf->__Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[6956]);
        vlSelf->__Vtogcov__lut[0U] = ((0xffffff7fU 
                                       & vlSelf->__Vtogcov__lut[0U]) 
                                      | (0x80U & vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U]));
    }
    if ((0x100U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U] 
                   ^ vlSelf->__Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[6957]);
        vlSelf->__Vtogcov__lut[0U] = ((0xfffffeffU 
                                       & vlSelf->__Vtogcov__lut[0U]) 
                                      | (0x100U & vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U]));
    }
    if ((0x200U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U] 
                   ^ vlSelf->__Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[6958]);
        vlSelf->__Vtogcov__lut[0U] = ((0xfffffdffU 
                                       & vlSelf->__Vtogcov__lut[0U]) 
                                      | (0x200U & vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U]));
    }
    if ((0x400U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U] 
                   ^ vlSelf->__Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[6959]);
        vlSelf->__Vtogcov__lut[0U] = ((0xfffffbffU 
                                       & vlSelf->__Vtogcov__lut[0U]) 
                                      | (0x400U & vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U]));
    }
    if ((0x800U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U] 
                   ^ vlSelf->__Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[6960]);
        vlSelf->__Vtogcov__lut[0U] = ((0xfffff7ffU 
                                       & vlSelf->__Vtogcov__lut[0U]) 
                                      | (0x800U & vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U]));
    }
    if ((0x1000U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U] 
                    ^ vlSelf->__Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[6961]);
        vlSelf->__Vtogcov__lut[0U] = ((0xffffefffU 
                                       & vlSelf->__Vtogcov__lut[0U]) 
                                      | (0x1000U & 
                                         vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U]));
    }
    if ((0x2000U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U] 
                    ^ vlSelf->__Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[6962]);
        vlSelf->__Vtogcov__lut[0U] = ((0xffffdfffU 
                                       & vlSelf->__Vtogcov__lut[0U]) 
                                      | (0x2000U & 
                                         vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U]));
    }
    if ((0x4000U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U] 
                    ^ vlSelf->__Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[6963]);
        vlSelf->__Vtogcov__lut[0U] = ((0xffffbfffU 
                                       & vlSelf->__Vtogcov__lut[0U]) 
                                      | (0x4000U & 
                                         vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U]));
    }
    if ((0x8000U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U] 
                    ^ vlSelf->__Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[6964]);
        vlSelf->__Vtogcov__lut[0U] = ((0xffff7fffU 
                                       & vlSelf->__Vtogcov__lut[0U]) 
                                      | (0x8000U & 
                                         vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U]));
    }
    if ((0x10000U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U] 
                     ^ vlSelf->__Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[6965]);
        vlSelf->__Vtogcov__lut[0U] = ((0xfffeffffU 
                                       & vlSelf->__Vtogcov__lut[0U]) 
                                      | (0x10000U & 
                                         vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U]));
    }
    if ((0x20000U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U] 
                     ^ vlSelf->__Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[6966]);
        vlSelf->__Vtogcov__lut[0U] = ((0xfffdffffU 
                                       & vlSelf->__Vtogcov__lut[0U]) 
                                      | (0x20000U & 
                                         vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U]));
    }
    if ((0x40000U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U] 
                     ^ vlSelf->__Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[6967]);
        vlSelf->__Vtogcov__lut[0U] = ((0xfffbffffU 
                                       & vlSelf->__Vtogcov__lut[0U]) 
                                      | (0x40000U & 
                                         vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U]));
    }
    if ((0x80000U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U] 
                     ^ vlSelf->__Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[6968]);
        vlSelf->__Vtogcov__lut[0U] = ((0xfff7ffffU 
                                       & vlSelf->__Vtogcov__lut[0U]) 
                                      | (0x80000U & 
                                         vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U]));
    }
    if ((0x100000U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U] 
                      ^ vlSelf->__Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[6969]);
        vlSelf->__Vtogcov__lut[0U] = ((0xffefffffU 
                                       & vlSelf->__Vtogcov__lut[0U]) 
                                      | (0x100000U 
                                         & vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U]));
    }
    if ((0x200000U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U] 
                      ^ vlSelf->__Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[6970]);
        vlSelf->__Vtogcov__lut[0U] = ((0xffdfffffU 
                                       & vlSelf->__Vtogcov__lut[0U]) 
                                      | (0x200000U 
                                         & vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U]));
    }
    if ((0x400000U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U] 
                      ^ vlSelf->__Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[6971]);
        vlSelf->__Vtogcov__lut[0U] = ((0xffbfffffU 
                                       & vlSelf->__Vtogcov__lut[0U]) 
                                      | (0x400000U 
                                         & vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U]));
    }
    if ((0x800000U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U] 
                      ^ vlSelf->__Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[6972]);
        vlSelf->__Vtogcov__lut[0U] = ((0xff7fffffU 
                                       & vlSelf->__Vtogcov__lut[0U]) 
                                      | (0x800000U 
                                         & vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U]));
    }
    if ((0x1000000U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U] 
                       ^ vlSelf->__Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[6973]);
        vlSelf->__Vtogcov__lut[0U] = ((0xfeffffffU 
                                       & vlSelf->__Vtogcov__lut[0U]) 
                                      | (0x1000000U 
                                         & vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U]));
    }
    if ((0x2000000U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U] 
                       ^ vlSelf->__Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[6974]);
        vlSelf->__Vtogcov__lut[0U] = ((0xfdffffffU 
                                       & vlSelf->__Vtogcov__lut[0U]) 
                                      | (0x2000000U 
                                         & vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U]));
    }
    if ((0x4000000U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U] 
                       ^ vlSelf->__Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[6975]);
        vlSelf->__Vtogcov__lut[0U] = ((0xfbffffffU 
                                       & vlSelf->__Vtogcov__lut[0U]) 
                                      | (0x4000000U 
                                         & vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U]));
    }
    if ((0x8000000U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U] 
                       ^ vlSelf->__Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[6976]);
        vlSelf->__Vtogcov__lut[0U] = ((0xf7ffffffU 
                                       & vlSelf->__Vtogcov__lut[0U]) 
                                      | (0x8000000U 
                                         & vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U]));
    }
    if ((0x10000000U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U] 
                        ^ vlSelf->__Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[6977]);
        vlSelf->__Vtogcov__lut[0U] = ((0xefffffffU 
                                       & vlSelf->__Vtogcov__lut[0U]) 
                                      | (0x10000000U 
                                         & vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U]));
    }
    if ((0x20000000U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U] 
                        ^ vlSelf->__Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[6978]);
        vlSelf->__Vtogcov__lut[0U] = ((0xdfffffffU 
                                       & vlSelf->__Vtogcov__lut[0U]) 
                                      | (0x20000000U 
                                         & vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U]));
    }
    if ((0x40000000U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U] 
                        ^ vlSelf->__Vtogcov__lut[0U]))) {
        ++(vlSymsp->__Vcoverage[6979]);
        vlSelf->__Vtogcov__lut[0U] = ((0xbfffffffU 
                                       & vlSelf->__Vtogcov__lut[0U]) 
                                      | (0x40000000U 
                                         & vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U]));
    }
    if (((vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U] 
          ^ vlSelf->__Vtogcov__lut[0U]) >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[6980]);
        vlSelf->__Vtogcov__lut[0U] = ((0x7fffffffU 
                                       & vlSelf->__Vtogcov__lut[0U]) 
                                      | (0x80000000U 
                                         & vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U]));
    }
    if ((1U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U] 
               ^ vlSelf->__Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[6981]);
        vlSelf->__Vtogcov__lut[1U] = ((0xfffffffeU 
                                       & vlSelf->__Vtogcov__lut[1U]) 
                                      | (1U & vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U]));
    }
    if ((2U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U] 
               ^ vlSelf->__Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[6982]);
        vlSelf->__Vtogcov__lut[1U] = ((0xfffffffdU 
                                       & vlSelf->__Vtogcov__lut[1U]) 
                                      | (2U & vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U]));
    }
    if ((4U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U] 
               ^ vlSelf->__Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[6983]);
        vlSelf->__Vtogcov__lut[1U] = ((0xfffffffbU 
                                       & vlSelf->__Vtogcov__lut[1U]) 
                                      | (4U & vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U]));
    }
    if ((8U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U] 
               ^ vlSelf->__Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[6984]);
        vlSelf->__Vtogcov__lut[1U] = ((0xfffffff7U 
                                       & vlSelf->__Vtogcov__lut[1U]) 
                                      | (8U & vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U]));
    }
    if ((0x10U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U] 
                  ^ vlSelf->__Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[6985]);
        vlSelf->__Vtogcov__lut[1U] = ((0xffffffefU 
                                       & vlSelf->__Vtogcov__lut[1U]) 
                                      | (0x10U & vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U]));
    }
    if ((0x20U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U] 
                  ^ vlSelf->__Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[6986]);
        vlSelf->__Vtogcov__lut[1U] = ((0xffffffdfU 
                                       & vlSelf->__Vtogcov__lut[1U]) 
                                      | (0x20U & vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U]));
    }
    if ((0x40U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U] 
                  ^ vlSelf->__Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[6987]);
        vlSelf->__Vtogcov__lut[1U] = ((0xffffffbfU 
                                       & vlSelf->__Vtogcov__lut[1U]) 
                                      | (0x40U & vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U]));
    }
    if ((0x80U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U] 
                  ^ vlSelf->__Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[6988]);
        vlSelf->__Vtogcov__lut[1U] = ((0xffffff7fU 
                                       & vlSelf->__Vtogcov__lut[1U]) 
                                      | (0x80U & vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U]));
    }
    if ((0x100U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U] 
                   ^ vlSelf->__Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[6989]);
        vlSelf->__Vtogcov__lut[1U] = ((0xfffffeffU 
                                       & vlSelf->__Vtogcov__lut[1U]) 
                                      | (0x100U & vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U]));
    }
    if ((0x200U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U] 
                   ^ vlSelf->__Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[6990]);
        vlSelf->__Vtogcov__lut[1U] = ((0xfffffdffU 
                                       & vlSelf->__Vtogcov__lut[1U]) 
                                      | (0x200U & vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U]));
    }
    if ((0x400U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U] 
                   ^ vlSelf->__Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[6991]);
        vlSelf->__Vtogcov__lut[1U] = ((0xfffffbffU 
                                       & vlSelf->__Vtogcov__lut[1U]) 
                                      | (0x400U & vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U]));
    }
    if ((0x800U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U] 
                   ^ vlSelf->__Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[6992]);
        vlSelf->__Vtogcov__lut[1U] = ((0xfffff7ffU 
                                       & vlSelf->__Vtogcov__lut[1U]) 
                                      | (0x800U & vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U]));
    }
    if ((0x1000U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U] 
                    ^ vlSelf->__Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[6993]);
        vlSelf->__Vtogcov__lut[1U] = ((0xffffefffU 
                                       & vlSelf->__Vtogcov__lut[1U]) 
                                      | (0x1000U & 
                                         vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U]));
    }
    if ((0x2000U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U] 
                    ^ vlSelf->__Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[6994]);
        vlSelf->__Vtogcov__lut[1U] = ((0xffffdfffU 
                                       & vlSelf->__Vtogcov__lut[1U]) 
                                      | (0x2000U & 
                                         vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U]));
    }
    if ((0x4000U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U] 
                    ^ vlSelf->__Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[6995]);
        vlSelf->__Vtogcov__lut[1U] = ((0xffffbfffU 
                                       & vlSelf->__Vtogcov__lut[1U]) 
                                      | (0x4000U & 
                                         vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U]));
    }
    if ((0x8000U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U] 
                    ^ vlSelf->__Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[6996]);
        vlSelf->__Vtogcov__lut[1U] = ((0xffff7fffU 
                                       & vlSelf->__Vtogcov__lut[1U]) 
                                      | (0x8000U & 
                                         vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U]));
    }
    if ((0x10000U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U] 
                     ^ vlSelf->__Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[6997]);
        vlSelf->__Vtogcov__lut[1U] = ((0xfffeffffU 
                                       & vlSelf->__Vtogcov__lut[1U]) 
                                      | (0x10000U & 
                                         vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U]));
    }
    if ((0x20000U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U] 
                     ^ vlSelf->__Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[6998]);
        vlSelf->__Vtogcov__lut[1U] = ((0xfffdffffU 
                                       & vlSelf->__Vtogcov__lut[1U]) 
                                      | (0x20000U & 
                                         vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U]));
    }
    if ((0x40000U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U] 
                     ^ vlSelf->__Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[6999]);
        vlSelf->__Vtogcov__lut[1U] = ((0xfffbffffU 
                                       & vlSelf->__Vtogcov__lut[1U]) 
                                      | (0x40000U & 
                                         vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U]));
    }
    if ((0x80000U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U] 
                     ^ vlSelf->__Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[7000]);
        vlSelf->__Vtogcov__lut[1U] = ((0xfff7ffffU 
                                       & vlSelf->__Vtogcov__lut[1U]) 
                                      | (0x80000U & 
                                         vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U]));
    }
    if ((0x100000U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U] 
                      ^ vlSelf->__Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[7001]);
        vlSelf->__Vtogcov__lut[1U] = ((0xffefffffU 
                                       & vlSelf->__Vtogcov__lut[1U]) 
                                      | (0x100000U 
                                         & vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U]));
    }
    if ((0x200000U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U] 
                      ^ vlSelf->__Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[7002]);
        vlSelf->__Vtogcov__lut[1U] = ((0xffdfffffU 
                                       & vlSelf->__Vtogcov__lut[1U]) 
                                      | (0x200000U 
                                         & vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U]));
    }
    if ((0x400000U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U] 
                      ^ vlSelf->__Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[7003]);
        vlSelf->__Vtogcov__lut[1U] = ((0xffbfffffU 
                                       & vlSelf->__Vtogcov__lut[1U]) 
                                      | (0x400000U 
                                         & vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U]));
    }
    if ((0x800000U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U] 
                      ^ vlSelf->__Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[7004]);
        vlSelf->__Vtogcov__lut[1U] = ((0xff7fffffU 
                                       & vlSelf->__Vtogcov__lut[1U]) 
                                      | (0x800000U 
                                         & vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U]));
    }
    if ((0x1000000U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U] 
                       ^ vlSelf->__Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[7005]);
        vlSelf->__Vtogcov__lut[1U] = ((0xfeffffffU 
                                       & vlSelf->__Vtogcov__lut[1U]) 
                                      | (0x1000000U 
                                         & vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U]));
    }
    if ((0x2000000U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U] 
                       ^ vlSelf->__Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[7006]);
        vlSelf->__Vtogcov__lut[1U] = ((0xfdffffffU 
                                       & vlSelf->__Vtogcov__lut[1U]) 
                                      | (0x2000000U 
                                         & vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U]));
    }
    if ((0x4000000U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U] 
                       ^ vlSelf->__Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[7007]);
        vlSelf->__Vtogcov__lut[1U] = ((0xfbffffffU 
                                       & vlSelf->__Vtogcov__lut[1U]) 
                                      | (0x4000000U 
                                         & vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U]));
    }
    if ((0x8000000U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U] 
                       ^ vlSelf->__Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[7008]);
        vlSelf->__Vtogcov__lut[1U] = ((0xf7ffffffU 
                                       & vlSelf->__Vtogcov__lut[1U]) 
                                      | (0x8000000U 
                                         & vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U]));
    }
    if ((0x10000000U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U] 
                        ^ vlSelf->__Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[7009]);
        vlSelf->__Vtogcov__lut[1U] = ((0xefffffffU 
                                       & vlSelf->__Vtogcov__lut[1U]) 
                                      | (0x10000000U 
                                         & vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U]));
    }
    if ((0x20000000U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U] 
                        ^ vlSelf->__Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[7010]);
        vlSelf->__Vtogcov__lut[1U] = ((0xdfffffffU 
                                       & vlSelf->__Vtogcov__lut[1U]) 
                                      | (0x20000000U 
                                         & vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U]));
    }
    if ((0x40000000U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U] 
                        ^ vlSelf->__Vtogcov__lut[1U]))) {
        ++(vlSymsp->__Vcoverage[7011]);
        vlSelf->__Vtogcov__lut[1U] = ((0xbfffffffU 
                                       & vlSelf->__Vtogcov__lut[1U]) 
                                      | (0x40000000U 
                                         & vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U]));
    }
    if (((vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U] 
          ^ vlSelf->__Vtogcov__lut[1U]) >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[7012]);
        vlSelf->__Vtogcov__lut[1U] = ((0x7fffffffU 
                                       & vlSelf->__Vtogcov__lut[1U]) 
                                      | (0x80000000U 
                                         & vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U]));
    }
    if ((1U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U] 
               ^ vlSelf->__Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[7013]);
        vlSelf->__Vtogcov__lut[2U] = ((0xfffffeU & 
                                       vlSelf->__Vtogcov__lut[2U]) 
                                      | (1U & vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U]));
    }
    if ((2U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U] 
               ^ vlSelf->__Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[7014]);
        vlSelf->__Vtogcov__lut[2U] = ((0xfffffdU & 
                                       vlSelf->__Vtogcov__lut[2U]) 
                                      | (2U & vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U]));
    }
    if ((4U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U] 
               ^ vlSelf->__Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[7015]);
        vlSelf->__Vtogcov__lut[2U] = ((0xfffffbU & 
                                       vlSelf->__Vtogcov__lut[2U]) 
                                      | (4U & vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U]));
    }
    if ((8U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U] 
               ^ vlSelf->__Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[7016]);
        vlSelf->__Vtogcov__lut[2U] = ((0xfffff7U & 
                                       vlSelf->__Vtogcov__lut[2U]) 
                                      | (8U & vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U]));
    }
    if ((0x10U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U] 
                  ^ vlSelf->__Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[7017]);
        vlSelf->__Vtogcov__lut[2U] = ((0xffffefU & 
                                       vlSelf->__Vtogcov__lut[2U]) 
                                      | (0x10U & vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U]));
    }
    if ((0x20U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U] 
                  ^ vlSelf->__Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[7018]);
        vlSelf->__Vtogcov__lut[2U] = ((0xffffdfU & 
                                       vlSelf->__Vtogcov__lut[2U]) 
                                      | (0x20U & vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U]));
    }
    if ((0x40U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U] 
                  ^ vlSelf->__Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[7019]);
        vlSelf->__Vtogcov__lut[2U] = ((0xffffbfU & 
                                       vlSelf->__Vtogcov__lut[2U]) 
                                      | (0x40U & vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U]));
    }
    if ((0x80U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U] 
                  ^ vlSelf->__Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[7020]);
        vlSelf->__Vtogcov__lut[2U] = ((0xffff7fU & 
                                       vlSelf->__Vtogcov__lut[2U]) 
                                      | (0x80U & vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U]));
    }
    if ((0x100U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U] 
                   ^ vlSelf->__Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[7021]);
        vlSelf->__Vtogcov__lut[2U] = ((0xfffeffU & 
                                       vlSelf->__Vtogcov__lut[2U]) 
                                      | (0x100U & vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U]));
    }
    if ((0x200U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U] 
                   ^ vlSelf->__Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[7022]);
        vlSelf->__Vtogcov__lut[2U] = ((0xfffdffU & 
                                       vlSelf->__Vtogcov__lut[2U]) 
                                      | (0x200U & vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U]));
    }
    if ((0x400U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U] 
                   ^ vlSelf->__Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[7023]);
        vlSelf->__Vtogcov__lut[2U] = ((0xfffbffU & 
                                       vlSelf->__Vtogcov__lut[2U]) 
                                      | (0x400U & vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U]));
    }
    if ((0x800U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U] 
                   ^ vlSelf->__Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[7024]);
        vlSelf->__Vtogcov__lut[2U] = ((0xfff7ffU & 
                                       vlSelf->__Vtogcov__lut[2U]) 
                                      | (0x800U & vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U]));
    }
    if ((0x1000U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U] 
                    ^ vlSelf->__Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[7025]);
        vlSelf->__Vtogcov__lut[2U] = ((0xffefffU & 
                                       vlSelf->__Vtogcov__lut[2U]) 
                                      | (0x1000U & 
                                         vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U]));
    }
    if ((0x2000U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U] 
                    ^ vlSelf->__Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[7026]);
        vlSelf->__Vtogcov__lut[2U] = ((0xffdfffU & 
                                       vlSelf->__Vtogcov__lut[2U]) 
                                      | (0x2000U & 
                                         vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U]));
    }
    if ((0x4000U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U] 
                    ^ vlSelf->__Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[7027]);
        vlSelf->__Vtogcov__lut[2U] = ((0xffbfffU & 
                                       vlSelf->__Vtogcov__lut[2U]) 
                                      | (0x4000U & 
                                         vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U]));
    }
    if ((0x8000U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U] 
                    ^ vlSelf->__Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[7028]);
        vlSelf->__Vtogcov__lut[2U] = ((0xff7fffU & 
                                       vlSelf->__Vtogcov__lut[2U]) 
                                      | (0x8000U & 
                                         vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U]));
    }
    if ((0x10000U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U] 
                     ^ vlSelf->__Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[7029]);
        vlSelf->__Vtogcov__lut[2U] = ((0xfeffffU & 
                                       vlSelf->__Vtogcov__lut[2U]) 
                                      | (0x10000U & 
                                         vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U]));
    }
    if ((0x20000U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U] 
                     ^ vlSelf->__Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[7030]);
        vlSelf->__Vtogcov__lut[2U] = ((0xfdffffU & 
                                       vlSelf->__Vtogcov__lut[2U]) 
                                      | (0x20000U & 
                                         vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U]));
    }
    if ((0x40000U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U] 
                     ^ vlSelf->__Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[7031]);
        vlSelf->__Vtogcov__lut[2U] = ((0xfbffffU & 
                                       vlSelf->__Vtogcov__lut[2U]) 
                                      | (0x40000U & 
                                         vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U]));
    }
    if ((0x80000U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U] 
                     ^ vlSelf->__Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[7032]);
        vlSelf->__Vtogcov__lut[2U] = ((0xf7ffffU & 
                                       vlSelf->__Vtogcov__lut[2U]) 
                                      | (0x80000U & 
                                         vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U]));
    }
    if ((0x100000U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U] 
                      ^ vlSelf->__Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[7033]);
        vlSelf->__Vtogcov__lut[2U] = ((0xefffffU & 
                                       vlSelf->__Vtogcov__lut[2U]) 
                                      | (0x100000U 
                                         & vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U]));
    }
    if ((0x200000U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U] 
                      ^ vlSelf->__Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[7034]);
        vlSelf->__Vtogcov__lut[2U] = ((0xdfffffU & 
                                       vlSelf->__Vtogcov__lut[2U]) 
                                      | (0x200000U 
                                         & vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U]));
    }
    if ((0x400000U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U] 
                      ^ vlSelf->__Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[7035]);
        vlSelf->__Vtogcov__lut[2U] = ((0xbfffffU & 
                                       vlSelf->__Vtogcov__lut[2U]) 
                                      | (0x400000U 
                                         & vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U]));
    }
    if ((0x800000U & (vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U] 
                      ^ vlSelf->__Vtogcov__lut[2U]))) {
        ++(vlSymsp->__Vcoverage[7036]);
        vlSelf->__Vtogcov__lut[2U] = ((0x7fffffU & 
                                       vlSelf->__Vtogcov__lut[2U]) 
                                      | (0x800000U 
                                         & vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U]));
    }
    vlSelf->__PVT__i0__DOT__pair_list[0U] = (0xfffffffffffULL 
                                             & (((QData)((IData)(
                                                                 vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[0U]))));
    vlSelf->__PVT__i0__DOT__pair_list[1U] = (0xfffffffffffULL 
                                             & (((QData)((IData)(
                                                                 vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[2U])) 
                                                 << 0x14U) 
                                                | ((QData)((IData)(
                                                                   vlSymsp->TOP.top__DOT__de__DOT____Vcellinp__m20____pinNumber4[1U])) 
                                                   >> 0xcU)));
    if ((1U & ((IData)(vlSelf->__PVT__i0__DOT__pair_list
                       [0U]) ^ (IData)(vlSelf->i0__DOT____Vtogcov__pair_list
                                       [0U])))) {
        ++(vlSymsp->__Vcoverage[7037]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xffffffffffeULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | (IData)((IData)((1U & (IData)(
                                                    vlSelf->__PVT__i0__DOT__pair_list
                                                    [0U])))));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 1U)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                [0U] 
                                                >> 1U))))) {
        ++(vlSymsp->__Vcoverage[7038]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xffffffffffdULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 1U))))) 
                       << 1U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 2U)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                [0U] 
                                                >> 2U))))) {
        ++(vlSymsp->__Vcoverage[7039]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xffffffffffbULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 2U))))) 
                       << 2U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 3U)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                [0U] 
                                                >> 3U))))) {
        ++(vlSymsp->__Vcoverage[7040]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xffffffffff7ULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 3U))))) 
                       << 3U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 4U)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                [0U] 
                                                >> 4U))))) {
        ++(vlSymsp->__Vcoverage[7041]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xfffffffffefULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 4U))))) 
                       << 4U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 5U)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                [0U] 
                                                >> 5U))))) {
        ++(vlSymsp->__Vcoverage[7042]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xfffffffffdfULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 5U))))) 
                       << 5U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 6U)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                [0U] 
                                                >> 6U))))) {
        ++(vlSymsp->__Vcoverage[7043]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xfffffffffbfULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 6U))))) 
                       << 6U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 7U)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                [0U] 
                                                >> 7U))))) {
        ++(vlSymsp->__Vcoverage[7044]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xfffffffff7fULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 7U))))) 
                       << 7U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 8U)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                [0U] 
                                                >> 8U))))) {
        ++(vlSymsp->__Vcoverage[7045]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xffffffffeffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 8U))))) 
                       << 8U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 9U)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                [0U] 
                                                >> 9U))))) {
        ++(vlSymsp->__Vcoverage[7046]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xffffffffdffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 9U))))) 
                       << 9U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0xaU)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                  [0U] 
                                                  >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[7047]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xffffffffbffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0xaU))))) 
                       << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0xbU)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                  [0U] 
                                                  >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[7048]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xffffffff7ffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0xbU))))) 
                       << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0xcU)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                  [0U] 
                                                  >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[7049]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xfffffffefffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0xcU))))) 
                       << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0xdU)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                  [0U] 
                                                  >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[7050]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xfffffffdfffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0xdU))))) 
                       << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0xeU)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                  [0U] 
                                                  >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[7051]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xfffffffbfffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0xeU))))) 
                       << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0xfU)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                  [0U] 
                                                  >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[7052]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xfffffff7fffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0xfU))))) 
                       << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x10U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[7053]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xffffffeffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x10U))))) 
                       << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x11U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[7054]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xffffffdffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x11U))))) 
                       << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x12U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[7055]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xffffffbffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x12U))))) 
                       << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x13U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[7056]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xffffff7ffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x13U))))) 
                       << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x14U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[7057]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xfffffefffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x14U))))) 
                       << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x15U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[7058]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xfffffdfffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x15U))))) 
                       << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x16U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[7059]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xfffffbfffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x16U))))) 
                       << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x17U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[7060]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xfffff7fffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x17U))))) 
                       << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x18U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[7061]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xffffeffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x18U))))) 
                       << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x19U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[7062]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xffffdffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x19U))))) 
                       << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x1aU)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[7063]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xffffbffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x1aU))))) 
                       << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x1bU)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[7064]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xffff7ffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x1bU))))) 
                       << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x1cU)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[7065]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xfffefffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x1cU))))) 
                       << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x1dU)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[7066]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xfffdfffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x1dU))))) 
                       << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x1eU)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[7067]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xfffbfffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x1eU))))) 
                       << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x1fU)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[7068]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xfff7fffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x1fU))))) 
                       << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x20U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[7069]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xffeffffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x20U))))) 
                       << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x21U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[7070]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xffdffffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x21U))))) 
                       << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x22U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[7071]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xffbffffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x22U))))) 
                       << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x23U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[7072]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xff7ffffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x23U))))) 
                       << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x24U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[7073]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xfefffffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x24U))))) 
                       << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x25U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[7074]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xfdfffffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x25U))))) 
                       << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x26U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[7075]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xfbfffffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x26U))))) 
                       << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x27U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[7076]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xf7fffffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x27U))))) 
                       << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x28U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[7077]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xeffffffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x28U))))) 
                       << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x29U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[7078]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xdffffffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x29U))))) 
                       << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x2aU)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[7079]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0xbffffffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x2aU))))) 
                       << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [0U] >> 0x2bU)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [0U] 
                                                   >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[7080]);
        vlSelf->i0__DOT____Vtogcov__pair_list[0U] = 
            ((0x7ffffffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [0U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [0U] 
                                                      >> 0x2bU))))) 
                       << 0x2bU));
    }
    if ((1U & ((IData)(vlSelf->__PVT__i0__DOT__pair_list
                       [1U]) ^ (IData)(vlSelf->i0__DOT____Vtogcov__pair_list
                                       [1U])))) {
        ++(vlSymsp->__Vcoverage[7081]);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0xffffffffffeULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | (IData)((IData)((1U & (IData)(
                                                    vlSelf->__PVT__i0__DOT__pair_list
                                                    [1U])))));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 1U)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                [1U] 
                                                >> 1U))))) {
        ++(vlSymsp->__Vcoverage[7082]);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0xffffffffffdULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 1U))))) 
                       << 1U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 2U)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                [1U] 
                                                >> 2U))))) {
        ++(vlSymsp->__Vcoverage[7083]);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0xffffffffffbULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 2U))))) 
                       << 2U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 3U)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                [1U] 
                                                >> 3U))))) {
        ++(vlSymsp->__Vcoverage[7084]);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0xffffffffff7ULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 3U))))) 
                       << 3U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 4U)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                [1U] 
                                                >> 4U))))) {
        ++(vlSymsp->__Vcoverage[7085]);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0xfffffffffefULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 4U))))) 
                       << 4U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 5U)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                [1U] 
                                                >> 5U))))) {
        ++(vlSymsp->__Vcoverage[7086]);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0xfffffffffdfULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 5U))))) 
                       << 5U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 6U)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                [1U] 
                                                >> 6U))))) {
        ++(vlSymsp->__Vcoverage[7087]);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0xfffffffffbfULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 6U))))) 
                       << 6U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 7U)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                [1U] 
                                                >> 7U))))) {
        ++(vlSymsp->__Vcoverage[7088]);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0xfffffffff7fULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 7U))))) 
                       << 7U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 8U)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                [1U] 
                                                >> 8U))))) {
        ++(vlSymsp->__Vcoverage[7089]);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0xffffffffeffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 8U))))) 
                       << 8U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 9U)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                [1U] 
                                                >> 9U))))) {
        ++(vlSymsp->__Vcoverage[7090]);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0xffffffffdffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 9U))))) 
                       << 9U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 0xaU)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                  [1U] 
                                                  >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[7091]);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0xffffffffbffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 0xaU))))) 
                       << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 0xbU)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                  [1U] 
                                                  >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[7092]);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0xffffffff7ffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 0xbU))))) 
                       << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 0xcU)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                  [1U] 
                                                  >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[7093]);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0xfffffffefffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 0xcU))))) 
                       << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 0xdU)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                  [1U] 
                                                  >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[7094]);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0xfffffffdfffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 0xdU))))) 
                       << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 0xeU)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                  [1U] 
                                                  >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[7095]);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0xfffffffbfffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 0xeU))))) 
                       << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 0xfU)) ^ (IData)((vlSelf->i0__DOT____Vtogcov__pair_list
                                                  [1U] 
                                                  >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[7096]);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0xfffffff7fffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 0xfU))))) 
                       << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 0x10U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[7097]);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0xffffffeffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 0x10U))))) 
                       << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 0x11U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[7098]);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0xffffffdffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 0x11U))))) 
                       << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 0x12U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[7099]);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0xffffffbffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 0x12U))))) 
                       << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 0x13U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[7100]);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0xffffff7ffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 0x13U))))) 
                       << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 0x14U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[7101]);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0xfffffefffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 0x14U))))) 
                       << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 0x15U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[7102]);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0xfffffdfffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 0x15U))))) 
                       << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 0x16U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[7103]);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0xfffffbfffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 0x16U))))) 
                       << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 0x17U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[7104]);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0xfffff7fffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 0x17U))))) 
                       << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 0x18U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[7105]);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0xffffeffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 0x18U))))) 
                       << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 0x19U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[7106]);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0xffffdffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 0x19U))))) 
                       << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 0x1aU)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[7107]);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0xffffbffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 0x1aU))))) 
                       << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 0x1bU)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[7108]);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0xffff7ffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 0x1bU))))) 
                       << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 0x1cU)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[7109]);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0xfffefffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 0x1cU))))) 
                       << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 0x1dU)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[7110]);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0xfffdfffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 0x1dU))))) 
                       << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 0x1eU)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[7111]);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0xfffbfffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 0x1eU))))) 
                       << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 0x1fU)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[7112]);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0xfff7fffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 0x1fU))))) 
                       << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 0x20U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[7113]);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0xffeffffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 0x20U))))) 
                       << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 0x21U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[7114]);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0xffdffffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 0x21U))))) 
                       << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 0x22U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[7115]);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0xffbffffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 0x22U))))) 
                       << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 0x23U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[7116]);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0xff7ffffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 0x23U))))) 
                       << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 0x24U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[7117]);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0xfefffffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 0x24U))))) 
                       << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 0x25U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[7118]);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0xfdfffffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 0x25U))))) 
                       << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 0x26U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[7119]);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0xfbfffffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 0x26U))))) 
                       << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 0x27U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[7120]);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0xf7fffffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 0x27U))))) 
                       << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 0x28U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[7121]);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0xeffffffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 0x28U))))) 
                       << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 0x29U)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[7122]);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0xdffffffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 0x29U))))) 
                       << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 0x2aU)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[7123]);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0xbffffffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 0x2aU))))) 
                       << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->__PVT__i0__DOT__pair_list
                        [1U] >> 0x2bU)) ^ (IData)((
                                                   vlSelf->i0__DOT____Vtogcov__pair_list
                                                   [1U] 
                                                   >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[7124]);
        vlSelf->i0__DOT____Vtogcov__pair_list[1U] = 
            ((0x7ffffffffffULL & vlSelf->i0__DOT____Vtogcov__pair_list
              [1U]) | ((QData)((IData)((1U & (IData)(
                                                     (vlSelf->__PVT__i0__DOT__pair_list
                                                      [1U] 
                                                      >> 0x2bU))))) 
                       << 0x2bU));
    }
    vlSelf->__PVT__i0__DOT__data_list[0U] = (0xfffU 
                                             & (IData)(
                                                       vlSelf->__PVT__i0__DOT__pair_list
                                                       [0U]));
    vlSelf->__PVT__i0__DOT__data_list[1U] = (0xfffU 
                                             & (IData)(
                                                       vlSelf->__PVT__i0__DOT__pair_list
                                                       [1U]));
    vlSelf->__PVT__i0__DOT__key_list[0U] = (IData)(
                                                   (vlSelf->__PVT__i0__DOT__pair_list
                                                    [0U] 
                                                    >> 0xcU));
    vlSelf->__PVT__i0__DOT__key_list[1U] = (IData)(
                                                   (vlSelf->__PVT__i0__DOT__pair_list
                                                    [1U] 
                                                    >> 0xcU));
    if ((1U & (vlSelf->__PVT__i0__DOT__data_list[0U] 
               ^ vlSelf->i0__DOT____Vtogcov__data_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[7189]);
        vlSelf->i0__DOT____Vtogcov__data_list[0U] = 
            ((0xffeU & vlSelf->i0__DOT____Vtogcov__data_list
              [0U]) | (1U & vlSelf->__PVT__i0__DOT__data_list
                       [0U]));
    }
    if ((2U & (vlSelf->__PVT__i0__DOT__data_list[0U] 
               ^ vlSelf->i0__DOT____Vtogcov__data_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[7190]);
        vlSelf->i0__DOT____Vtogcov__data_list[0U] = 
            ((0xffdU & vlSelf->i0__DOT____Vtogcov__data_list
              [0U]) | (2U & vlSelf->__PVT__i0__DOT__data_list
                       [0U]));
    }
    if ((4U & (vlSelf->__PVT__i0__DOT__data_list[0U] 
               ^ vlSelf->i0__DOT____Vtogcov__data_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[7191]);
        vlSelf->i0__DOT____Vtogcov__data_list[0U] = 
            ((0xffbU & vlSelf->i0__DOT____Vtogcov__data_list
              [0U]) | (4U & vlSelf->__PVT__i0__DOT__data_list
                       [0U]));
    }
    if ((8U & (vlSelf->__PVT__i0__DOT__data_list[0U] 
               ^ vlSelf->i0__DOT____Vtogcov__data_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[7192]);
        vlSelf->i0__DOT____Vtogcov__data_list[0U] = 
            ((0xff7U & vlSelf->i0__DOT____Vtogcov__data_list
              [0U]) | (8U & vlSelf->__PVT__i0__DOT__data_list
                       [0U]));
    }
    if ((0x10U & (vlSelf->__PVT__i0__DOT__data_list
                  [0U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[7193]);
        vlSelf->i0__DOT____Vtogcov__data_list[0U] = 
            ((0xfefU & vlSelf->i0__DOT____Vtogcov__data_list
              [0U]) | (0x10U & vlSelf->__PVT__i0__DOT__data_list
                       [0U]));
    }
    if ((0x20U & (vlSelf->__PVT__i0__DOT__data_list
                  [0U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[7194]);
        vlSelf->i0__DOT____Vtogcov__data_list[0U] = 
            ((0xfdfU & vlSelf->i0__DOT____Vtogcov__data_list
              [0U]) | (0x20U & vlSelf->__PVT__i0__DOT__data_list
                       [0U]));
    }
    if ((0x40U & (vlSelf->__PVT__i0__DOT__data_list
                  [0U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[7195]);
        vlSelf->i0__DOT____Vtogcov__data_list[0U] = 
            ((0xfbfU & vlSelf->i0__DOT____Vtogcov__data_list
              [0U]) | (0x40U & vlSelf->__PVT__i0__DOT__data_list
                       [0U]));
    }
    if ((0x80U & (vlSelf->__PVT__i0__DOT__data_list
                  [0U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[7196]);
        vlSelf->i0__DOT____Vtogcov__data_list[0U] = 
            ((0xf7fU & vlSelf->i0__DOT____Vtogcov__data_list
              [0U]) | (0x80U & vlSelf->__PVT__i0__DOT__data_list
                       [0U]));
    }
    if ((0x100U & (vlSelf->__PVT__i0__DOT__data_list
                   [0U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[7197]);
        vlSelf->i0__DOT____Vtogcov__data_list[0U] = 
            ((0xeffU & vlSelf->i0__DOT____Vtogcov__data_list
              [0U]) | (0x100U & vlSelf->__PVT__i0__DOT__data_list
                       [0U]));
    }
    if ((0x200U & (vlSelf->__PVT__i0__DOT__data_list
                   [0U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[7198]);
        vlSelf->i0__DOT____Vtogcov__data_list[0U] = 
            ((0xdffU & vlSelf->i0__DOT____Vtogcov__data_list
              [0U]) | (0x200U & vlSelf->__PVT__i0__DOT__data_list
                       [0U]));
    }
    if ((0x400U & (vlSelf->__PVT__i0__DOT__data_list
                   [0U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[7199]);
        vlSelf->i0__DOT____Vtogcov__data_list[0U] = 
            ((0xbffU & vlSelf->i0__DOT____Vtogcov__data_list
              [0U]) | (0x400U & vlSelf->__PVT__i0__DOT__data_list
                       [0U]));
    }
    if ((0x800U & (vlSelf->__PVT__i0__DOT__data_list
                   [0U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[7200]);
        vlSelf->i0__DOT____Vtogcov__data_list[0U] = 
            ((0x7ffU & vlSelf->i0__DOT____Vtogcov__data_list
              [0U]) | (0x800U & vlSelf->__PVT__i0__DOT__data_list
                       [0U]));
    }
    if ((1U & (vlSelf->__PVT__i0__DOT__data_list[1U] 
               ^ vlSelf->i0__DOT____Vtogcov__data_list
               [1U]))) {
        ++(vlSymsp->__Vcoverage[7201]);
        vlSelf->i0__DOT____Vtogcov__data_list[1U] = 
            ((0xffeU & vlSelf->i0__DOT____Vtogcov__data_list
              [1U]) | (1U & vlSelf->__PVT__i0__DOT__data_list
                       [1U]));
    }
    if ((2U & (vlSelf->__PVT__i0__DOT__data_list[1U] 
               ^ vlSelf->i0__DOT____Vtogcov__data_list
               [1U]))) {
        ++(vlSymsp->__Vcoverage[7202]);
        vlSelf->i0__DOT____Vtogcov__data_list[1U] = 
            ((0xffdU & vlSelf->i0__DOT____Vtogcov__data_list
              [1U]) | (2U & vlSelf->__PVT__i0__DOT__data_list
                       [1U]));
    }
    if ((4U & (vlSelf->__PVT__i0__DOT__data_list[1U] 
               ^ vlSelf->i0__DOT____Vtogcov__data_list
               [1U]))) {
        ++(vlSymsp->__Vcoverage[7203]);
        vlSelf->i0__DOT____Vtogcov__data_list[1U] = 
            ((0xffbU & vlSelf->i0__DOT____Vtogcov__data_list
              [1U]) | (4U & vlSelf->__PVT__i0__DOT__data_list
                       [1U]));
    }
    if ((8U & (vlSelf->__PVT__i0__DOT__data_list[1U] 
               ^ vlSelf->i0__DOT____Vtogcov__data_list
               [1U]))) {
        ++(vlSymsp->__Vcoverage[7204]);
        vlSelf->i0__DOT____Vtogcov__data_list[1U] = 
            ((0xff7U & vlSelf->i0__DOT____Vtogcov__data_list
              [1U]) | (8U & vlSelf->__PVT__i0__DOT__data_list
                       [1U]));
    }
    if ((0x10U & (vlSelf->__PVT__i0__DOT__data_list
                  [1U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                  [1U]))) {
        ++(vlSymsp->__Vcoverage[7205]);
        vlSelf->i0__DOT____Vtogcov__data_list[1U] = 
            ((0xfefU & vlSelf->i0__DOT____Vtogcov__data_list
              [1U]) | (0x10U & vlSelf->__PVT__i0__DOT__data_list
                       [1U]));
    }
    if ((0x20U & (vlSelf->__PVT__i0__DOT__data_list
                  [1U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                  [1U]))) {
        ++(vlSymsp->__Vcoverage[7206]);
        vlSelf->i0__DOT____Vtogcov__data_list[1U] = 
            ((0xfdfU & vlSelf->i0__DOT____Vtogcov__data_list
              [1U]) | (0x20U & vlSelf->__PVT__i0__DOT__data_list
                       [1U]));
    }
    if ((0x40U & (vlSelf->__PVT__i0__DOT__data_list
                  [1U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                  [1U]))) {
        ++(vlSymsp->__Vcoverage[7207]);
        vlSelf->i0__DOT____Vtogcov__data_list[1U] = 
            ((0xfbfU & vlSelf->i0__DOT____Vtogcov__data_list
              [1U]) | (0x40U & vlSelf->__PVT__i0__DOT__data_list
                       [1U]));
    }
    if ((0x80U & (vlSelf->__PVT__i0__DOT__data_list
                  [1U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                  [1U]))) {
        ++(vlSymsp->__Vcoverage[7208]);
        vlSelf->i0__DOT____Vtogcov__data_list[1U] = 
            ((0xf7fU & vlSelf->i0__DOT____Vtogcov__data_list
              [1U]) | (0x80U & vlSelf->__PVT__i0__DOT__data_list
                       [1U]));
    }
    if ((0x100U & (vlSelf->__PVT__i0__DOT__data_list
                   [1U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                   [1U]))) {
        ++(vlSymsp->__Vcoverage[7209]);
        vlSelf->i0__DOT____Vtogcov__data_list[1U] = 
            ((0xeffU & vlSelf->i0__DOT____Vtogcov__data_list
              [1U]) | (0x100U & vlSelf->__PVT__i0__DOT__data_list
                       [1U]));
    }
    if ((0x200U & (vlSelf->__PVT__i0__DOT__data_list
                   [1U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                   [1U]))) {
        ++(vlSymsp->__Vcoverage[7210]);
        vlSelf->i0__DOT____Vtogcov__data_list[1U] = 
            ((0xdffU & vlSelf->i0__DOT____Vtogcov__data_list
              [1U]) | (0x200U & vlSelf->__PVT__i0__DOT__data_list
                       [1U]));
    }
    if ((0x400U & (vlSelf->__PVT__i0__DOT__data_list
                   [1U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                   [1U]))) {
        ++(vlSymsp->__Vcoverage[7211]);
        vlSelf->i0__DOT____Vtogcov__data_list[1U] = 
            ((0xbffU & vlSelf->i0__DOT____Vtogcov__data_list
              [1U]) | (0x400U & vlSelf->__PVT__i0__DOT__data_list
                       [1U]));
    }
    if ((0x800U & (vlSelf->__PVT__i0__DOT__data_list
                   [1U] ^ vlSelf->i0__DOT____Vtogcov__data_list
                   [1U]))) {
        ++(vlSymsp->__Vcoverage[7212]);
        vlSelf->i0__DOT____Vtogcov__data_list[1U] = 
            ((0x7ffU & vlSelf->i0__DOT____Vtogcov__data_list
              [1U]) | (0x800U & vlSelf->__PVT__i0__DOT__data_list
                       [1U]));
    }
    if ((1U & (vlSelf->__PVT__i0__DOT__key_list[0U] 
               ^ vlSelf->i0__DOT____Vtogcov__key_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[7125]);
        vlSelf->i0__DOT____Vtogcov__key_list[0U] = 
            ((0xfffffffeU & vlSelf->i0__DOT____Vtogcov__key_list
              [0U]) | (1U & vlSelf->__PVT__i0__DOT__key_list
                       [0U]));
    }
    if ((2U & (vlSelf->__PVT__i0__DOT__key_list[0U] 
               ^ vlSelf->i0__DOT____Vtogcov__key_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[7126]);
        vlSelf->i0__DOT____Vtogcov__key_list[0U] = 
            ((0xfffffffdU & vlSelf->i0__DOT____Vtogcov__key_list
              [0U]) | (2U & vlSelf->__PVT__i0__DOT__key_list
                       [0U]));
    }
    if ((4U & (vlSelf->__PVT__i0__DOT__key_list[0U] 
               ^ vlSelf->i0__DOT____Vtogcov__key_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[7127]);
        vlSelf->i0__DOT____Vtogcov__key_list[0U] = 
            ((0xfffffffbU & vlSelf->i0__DOT____Vtogcov__key_list
              [0U]) | (4U & vlSelf->__PVT__i0__DOT__key_list
                       [0U]));
    }
    if ((8U & (vlSelf->__PVT__i0__DOT__key_list[0U] 
               ^ vlSelf->i0__DOT____Vtogcov__key_list
               [0U]))) {
        ++(vlSymsp->__Vcoverage[7128]);
        vlSelf->i0__DOT____Vtogcov__key_list[0U] = 
            ((0xfffffff7U & vlSelf->i0__DOT____Vtogcov__key_list
              [0U]) | (8U & vlSelf->__PVT__i0__DOT__key_list
                       [0U]));
    }
    if ((0x10U & (vlSelf->__PVT__i0__DOT__key_list[0U] 
                  ^ vlSelf->i0__DOT____Vtogcov__key_list
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[7129]);
        vlSelf->i0__DOT____Vtogcov__key_list[0U] = 
            ((0xffffffefU & vlSelf->i0__DOT____Vtogcov__key_list
              [0U]) | (0x10U & vlSelf->__PVT__i0__DOT__key_list
                       [0U]));
    }
    if ((0x20U & (vlSelf->__PVT__i0__DOT__key_list[0U] 
                  ^ vlSelf->i0__DOT____Vtogcov__key_list
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[7130]);
        vlSelf->i0__DOT____Vtogcov__key_list[0U] = 
            ((0xffffffdfU & vlSelf->i0__DOT____Vtogcov__key_list
              [0U]) | (0x20U & vlSelf->__PVT__i0__DOT__key_list
                       [0U]));
    }
    if ((0x40U & (vlSelf->__PVT__i0__DOT__key_list[0U] 
                  ^ vlSelf->i0__DOT____Vtogcov__key_list
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[7131]);
        vlSelf->i0__DOT____Vtogcov__key_list[0U] = 
            ((0xffffffbfU & vlSelf->i0__DOT____Vtogcov__key_list
              [0U]) | (0x40U & vlSelf->__PVT__i0__DOT__key_list
                       [0U]));
    }
    if ((0x80U & (vlSelf->__PVT__i0__DOT__key_list[0U] 
                  ^ vlSelf->i0__DOT____Vtogcov__key_list
                  [0U]))) {
        ++(vlSymsp->__Vcoverage[7132]);
        vlSelf->i0__DOT____Vtogcov__key_list[0U] = 
            ((0xffffff7fU & vlSelf->i0__DOT____Vtogcov__key_list
              [0U]) | (0x80U & vlSelf->__PVT__i0__DOT__key_list
                       [0U]));
    }
    if ((0x100U & (vlSelf->__PVT__i0__DOT__key_list
                   [0U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[7133]);
        vlSelf->i0__DOT____Vtogcov__key_list[0U] = 
            ((0xfffffeffU & vlSelf->i0__DOT____Vtogcov__key_list
              [0U]) | (0x100U & vlSelf->__PVT__i0__DOT__key_list
                       [0U]));
    }
    if ((0x200U & (vlSelf->__PVT__i0__DOT__key_list
                   [0U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[7134]);
        vlSelf->i0__DOT____Vtogcov__key_list[0U] = 
            ((0xfffffdffU & vlSelf->i0__DOT____Vtogcov__key_list
              [0U]) | (0x200U & vlSelf->__PVT__i0__DOT__key_list
                       [0U]));
    }
    if ((0x400U & (vlSelf->__PVT__i0__DOT__key_list
                   [0U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[7135]);
        vlSelf->i0__DOT____Vtogcov__key_list[0U] = 
            ((0xfffffbffU & vlSelf->i0__DOT____Vtogcov__key_list
              [0U]) | (0x400U & vlSelf->__PVT__i0__DOT__key_list
                       [0U]));
    }
    if ((0x800U & (vlSelf->__PVT__i0__DOT__key_list
                   [0U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                   [0U]))) {
        ++(vlSymsp->__Vcoverage[7136]);
        vlSelf->i0__DOT____Vtogcov__key_list[0U] = 
            ((0xfffff7ffU & vlSelf->i0__DOT____Vtogcov__key_list
              [0U]) | (0x800U & vlSelf->__PVT__i0__DOT__key_list
                       [0U]));
    }
    if ((0x1000U & (vlSelf->__PVT__i0__DOT__key_list
                    [0U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[7137]);
        vlSelf->i0__DOT____Vtogcov__key_list[0U] = 
            ((0xffffefffU & vlSelf->i0__DOT____Vtogcov__key_list
              [0U]) | (0x1000U & vlSelf->__PVT__i0__DOT__key_list
                       [0U]));
    }
    if ((0x2000U & (vlSelf->__PVT__i0__DOT__key_list
                    [0U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[7138]);
        vlSelf->i0__DOT____Vtogcov__key_list[0U] = 
            ((0xffffdfffU & vlSelf->i0__DOT____Vtogcov__key_list
              [0U]) | (0x2000U & vlSelf->__PVT__i0__DOT__key_list
                       [0U]));
    }
    if ((0x4000U & (vlSelf->__PVT__i0__DOT__key_list
                    [0U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[7139]);
        vlSelf->i0__DOT____Vtogcov__key_list[0U] = 
            ((0xffffbfffU & vlSelf->i0__DOT____Vtogcov__key_list
              [0U]) | (0x4000U & vlSelf->__PVT__i0__DOT__key_list
                       [0U]));
    }
    if ((0x8000U & (vlSelf->__PVT__i0__DOT__key_list
                    [0U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                    [0U]))) {
        ++(vlSymsp->__Vcoverage[7140]);
        vlSelf->i0__DOT____Vtogcov__key_list[0U] = 
            ((0xffff7fffU & vlSelf->i0__DOT____Vtogcov__key_list
              [0U]) | (0x8000U & vlSelf->__PVT__i0__DOT__key_list
                       [0U]));
    }
    if ((0x10000U & (vlSelf->__PVT__i0__DOT__key_list
                     [0U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[7141]);
        vlSelf->i0__DOT____Vtogcov__key_list[0U] = 
            ((0xfffeffffU & vlSelf->i0__DOT____Vtogcov__key_list
              [0U]) | (0x10000U & vlSelf->__PVT__i0__DOT__key_list
                       [0U]));
    }
    if ((0x20000U & (vlSelf->__PVT__i0__DOT__key_list
                     [0U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[7142]);
        vlSelf->i0__DOT____Vtogcov__key_list[0U] = 
            ((0xfffdffffU & vlSelf->i0__DOT____Vtogcov__key_list
              [0U]) | (0x20000U & vlSelf->__PVT__i0__DOT__key_list
                       [0U]));
    }
    if ((0x40000U & (vlSelf->__PVT__i0__DOT__key_list
                     [0U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[7143]);
        vlSelf->i0__DOT____Vtogcov__key_list[0U] = 
            ((0xfffbffffU & vlSelf->i0__DOT____Vtogcov__key_list
              [0U]) | (0x40000U & vlSelf->__PVT__i0__DOT__key_list
                       [0U]));
    }
    if ((0x80000U & (vlSelf->__PVT__i0__DOT__key_list
                     [0U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                     [0U]))) {
        ++(vlSymsp->__Vcoverage[7144]);
        vlSelf->i0__DOT____Vtogcov__key_list[0U] = 
            ((0xfff7ffffU & vlSelf->i0__DOT____Vtogcov__key_list
              [0U]) | (0x80000U & vlSelf->__PVT__i0__DOT__key_list
                       [0U]));
    }
    if ((0x100000U & (vlSelf->__PVT__i0__DOT__key_list
                      [0U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[7145]);
        vlSelf->i0__DOT____Vtogcov__key_list[0U] = 
            ((0xffefffffU & vlSelf->i0__DOT____Vtogcov__key_list
              [0U]) | (0x100000U & vlSelf->__PVT__i0__DOT__key_list
                       [0U]));
    }
    if ((0x200000U & (vlSelf->__PVT__i0__DOT__key_list
                      [0U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[7146]);
        vlSelf->i0__DOT____Vtogcov__key_list[0U] = 
            ((0xffdfffffU & vlSelf->i0__DOT____Vtogcov__key_list
              [0U]) | (0x200000U & vlSelf->__PVT__i0__DOT__key_list
                       [0U]));
    }
    if ((0x400000U & (vlSelf->__PVT__i0__DOT__key_list
                      [0U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[7147]);
        vlSelf->i0__DOT____Vtogcov__key_list[0U] = 
            ((0xffbfffffU & vlSelf->i0__DOT____Vtogcov__key_list
              [0U]) | (0x400000U & vlSelf->__PVT__i0__DOT__key_list
                       [0U]));
    }
    if ((0x800000U & (vlSelf->__PVT__i0__DOT__key_list
                      [0U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                      [0U]))) {
        ++(vlSymsp->__Vcoverage[7148]);
        vlSelf->i0__DOT____Vtogcov__key_list[0U] = 
            ((0xff7fffffU & vlSelf->i0__DOT____Vtogcov__key_list
              [0U]) | (0x800000U & vlSelf->__PVT__i0__DOT__key_list
                       [0U]));
    }
    if ((0x1000000U & (vlSelf->__PVT__i0__DOT__key_list
                       [0U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[7149]);
        vlSelf->i0__DOT____Vtogcov__key_list[0U] = 
            ((0xfeffffffU & vlSelf->i0__DOT____Vtogcov__key_list
              [0U]) | (0x1000000U & vlSelf->__PVT__i0__DOT__key_list
                       [0U]));
    }
    if ((0x2000000U & (vlSelf->__PVT__i0__DOT__key_list
                       [0U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[7150]);
        vlSelf->i0__DOT____Vtogcov__key_list[0U] = 
            ((0xfdffffffU & vlSelf->i0__DOT____Vtogcov__key_list
              [0U]) | (0x2000000U & vlSelf->__PVT__i0__DOT__key_list
                       [0U]));
    }
    if ((0x4000000U & (vlSelf->__PVT__i0__DOT__key_list
                       [0U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[7151]);
        vlSelf->i0__DOT____Vtogcov__key_list[0U] = 
            ((0xfbffffffU & vlSelf->i0__DOT____Vtogcov__key_list
              [0U]) | (0x4000000U & vlSelf->__PVT__i0__DOT__key_list
                       [0U]));
    }
    if ((0x8000000U & (vlSelf->__PVT__i0__DOT__key_list
                       [0U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                       [0U]))) {
        ++(vlSymsp->__Vcoverage[7152]);
        vlSelf->i0__DOT____Vtogcov__key_list[0U] = 
            ((0xf7ffffffU & vlSelf->i0__DOT____Vtogcov__key_list
              [0U]) | (0x8000000U & vlSelf->__PVT__i0__DOT__key_list
                       [0U]));
    }
    if ((0x10000000U & (vlSelf->__PVT__i0__DOT__key_list
                        [0U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                        [0U]))) {
        ++(vlSymsp->__Vcoverage[7153]);
        vlSelf->i0__DOT____Vtogcov__key_list[0U] = 
            ((0xefffffffU & vlSelf->i0__DOT____Vtogcov__key_list
              [0U]) | (0x10000000U & vlSelf->__PVT__i0__DOT__key_list
                       [0U]));
    }
    if ((0x20000000U & (vlSelf->__PVT__i0__DOT__key_list
                        [0U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                        [0U]))) {
        ++(vlSymsp->__Vcoverage[7154]);
        vlSelf->i0__DOT____Vtogcov__key_list[0U] = 
            ((0xdfffffffU & vlSelf->i0__DOT____Vtogcov__key_list
              [0U]) | (0x20000000U & vlSelf->__PVT__i0__DOT__key_list
                       [0U]));
    }
    if ((0x40000000U & (vlSelf->__PVT__i0__DOT__key_list
                        [0U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                        [0U]))) {
        ++(vlSymsp->__Vcoverage[7155]);
        vlSelf->i0__DOT____Vtogcov__key_list[0U] = 
            ((0xbfffffffU & vlSelf->i0__DOT____Vtogcov__key_list
              [0U]) | (0x40000000U & vlSelf->__PVT__i0__DOT__key_list
                       [0U]));
    }
    if (((vlSelf->__PVT__i0__DOT__key_list[0U] ^ vlSelf->i0__DOT____Vtogcov__key_list
          [0U]) >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[7156]);
        vlSelf->i0__DOT____Vtogcov__key_list[0U] = 
            ((0x7fffffffU & vlSelf->i0__DOT____Vtogcov__key_list
              [0U]) | (0x80000000U & vlSelf->__PVT__i0__DOT__key_list
                       [0U]));
    }
    if ((1U & (vlSelf->__PVT__i0__DOT__key_list[1U] 
               ^ vlSelf->i0__DOT____Vtogcov__key_list
               [1U]))) {
        ++(vlSymsp->__Vcoverage[7157]);
        vlSelf->i0__DOT____Vtogcov__key_list[1U] = 
            ((0xfffffffeU & vlSelf->i0__DOT____Vtogcov__key_list
              [1U]) | (1U & vlSelf->__PVT__i0__DOT__key_list
                       [1U]));
    }
    if ((2U & (vlSelf->__PVT__i0__DOT__key_list[1U] 
               ^ vlSelf->i0__DOT____Vtogcov__key_list
               [1U]))) {
        ++(vlSymsp->__Vcoverage[7158]);
        vlSelf->i0__DOT____Vtogcov__key_list[1U] = 
            ((0xfffffffdU & vlSelf->i0__DOT____Vtogcov__key_list
              [1U]) | (2U & vlSelf->__PVT__i0__DOT__key_list
                       [1U]));
    }
    if ((4U & (vlSelf->__PVT__i0__DOT__key_list[1U] 
               ^ vlSelf->i0__DOT____Vtogcov__key_list
               [1U]))) {
        ++(vlSymsp->__Vcoverage[7159]);
        vlSelf->i0__DOT____Vtogcov__key_list[1U] = 
            ((0xfffffffbU & vlSelf->i0__DOT____Vtogcov__key_list
              [1U]) | (4U & vlSelf->__PVT__i0__DOT__key_list
                       [1U]));
    }
    if ((8U & (vlSelf->__PVT__i0__DOT__key_list[1U] 
               ^ vlSelf->i0__DOT____Vtogcov__key_list
               [1U]))) {
        ++(vlSymsp->__Vcoverage[7160]);
        vlSelf->i0__DOT____Vtogcov__key_list[1U] = 
            ((0xfffffff7U & vlSelf->i0__DOT____Vtogcov__key_list
              [1U]) | (8U & vlSelf->__PVT__i0__DOT__key_list
                       [1U]));
    }
    if ((0x10U & (vlSelf->__PVT__i0__DOT__key_list[1U] 
                  ^ vlSelf->i0__DOT____Vtogcov__key_list
                  [1U]))) {
        ++(vlSymsp->__Vcoverage[7161]);
        vlSelf->i0__DOT____Vtogcov__key_list[1U] = 
            ((0xffffffefU & vlSelf->i0__DOT____Vtogcov__key_list
              [1U]) | (0x10U & vlSelf->__PVT__i0__DOT__key_list
                       [1U]));
    }
    if ((0x20U & (vlSelf->__PVT__i0__DOT__key_list[1U] 
                  ^ vlSelf->i0__DOT____Vtogcov__key_list
                  [1U]))) {
        ++(vlSymsp->__Vcoverage[7162]);
        vlSelf->i0__DOT____Vtogcov__key_list[1U] = 
            ((0xffffffdfU & vlSelf->i0__DOT____Vtogcov__key_list
              [1U]) | (0x20U & vlSelf->__PVT__i0__DOT__key_list
                       [1U]));
    }
    if ((0x40U & (vlSelf->__PVT__i0__DOT__key_list[1U] 
                  ^ vlSelf->i0__DOT____Vtogcov__key_list
                  [1U]))) {
        ++(vlSymsp->__Vcoverage[7163]);
        vlSelf->i0__DOT____Vtogcov__key_list[1U] = 
            ((0xffffffbfU & vlSelf->i0__DOT____Vtogcov__key_list
              [1U]) | (0x40U & vlSelf->__PVT__i0__DOT__key_list
                       [1U]));
    }
    if ((0x80U & (vlSelf->__PVT__i0__DOT__key_list[1U] 
                  ^ vlSelf->i0__DOT____Vtogcov__key_list
                  [1U]))) {
        ++(vlSymsp->__Vcoverage[7164]);
        vlSelf->i0__DOT____Vtogcov__key_list[1U] = 
            ((0xffffff7fU & vlSelf->i0__DOT____Vtogcov__key_list
              [1U]) | (0x80U & vlSelf->__PVT__i0__DOT__key_list
                       [1U]));
    }
    if ((0x100U & (vlSelf->__PVT__i0__DOT__key_list
                   [1U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                   [1U]))) {
        ++(vlSymsp->__Vcoverage[7165]);
        vlSelf->i0__DOT____Vtogcov__key_list[1U] = 
            ((0xfffffeffU & vlSelf->i0__DOT____Vtogcov__key_list
              [1U]) | (0x100U & vlSelf->__PVT__i0__DOT__key_list
                       [1U]));
    }
    if ((0x200U & (vlSelf->__PVT__i0__DOT__key_list
                   [1U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                   [1U]))) {
        ++(vlSymsp->__Vcoverage[7166]);
        vlSelf->i0__DOT____Vtogcov__key_list[1U] = 
            ((0xfffffdffU & vlSelf->i0__DOT____Vtogcov__key_list
              [1U]) | (0x200U & vlSelf->__PVT__i0__DOT__key_list
                       [1U]));
    }
    if ((0x400U & (vlSelf->__PVT__i0__DOT__key_list
                   [1U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                   [1U]))) {
        ++(vlSymsp->__Vcoverage[7167]);
        vlSelf->i0__DOT____Vtogcov__key_list[1U] = 
            ((0xfffffbffU & vlSelf->i0__DOT____Vtogcov__key_list
              [1U]) | (0x400U & vlSelf->__PVT__i0__DOT__key_list
                       [1U]));
    }
    if ((0x800U & (vlSelf->__PVT__i0__DOT__key_list
                   [1U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                   [1U]))) {
        ++(vlSymsp->__Vcoverage[7168]);
        vlSelf->i0__DOT____Vtogcov__key_list[1U] = 
            ((0xfffff7ffU & vlSelf->i0__DOT____Vtogcov__key_list
              [1U]) | (0x800U & vlSelf->__PVT__i0__DOT__key_list
                       [1U]));
    }
    if ((0x1000U & (vlSelf->__PVT__i0__DOT__key_list
                    [1U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                    [1U]))) {
        ++(vlSymsp->__Vcoverage[7169]);
        vlSelf->i0__DOT____Vtogcov__key_list[1U] = 
            ((0xffffefffU & vlSelf->i0__DOT____Vtogcov__key_list
              [1U]) | (0x1000U & vlSelf->__PVT__i0__DOT__key_list
                       [1U]));
    }
    if ((0x2000U & (vlSelf->__PVT__i0__DOT__key_list
                    [1U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                    [1U]))) {
        ++(vlSymsp->__Vcoverage[7170]);
        vlSelf->i0__DOT____Vtogcov__key_list[1U] = 
            ((0xffffdfffU & vlSelf->i0__DOT____Vtogcov__key_list
              [1U]) | (0x2000U & vlSelf->__PVT__i0__DOT__key_list
                       [1U]));
    }
    if ((0x4000U & (vlSelf->__PVT__i0__DOT__key_list
                    [1U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                    [1U]))) {
        ++(vlSymsp->__Vcoverage[7171]);
        vlSelf->i0__DOT____Vtogcov__key_list[1U] = 
            ((0xffffbfffU & vlSelf->i0__DOT____Vtogcov__key_list
              [1U]) | (0x4000U & vlSelf->__PVT__i0__DOT__key_list
                       [1U]));
    }
    if ((0x8000U & (vlSelf->__PVT__i0__DOT__key_list
                    [1U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                    [1U]))) {
        ++(vlSymsp->__Vcoverage[7172]);
        vlSelf->i0__DOT____Vtogcov__key_list[1U] = 
            ((0xffff7fffU & vlSelf->i0__DOT____Vtogcov__key_list
              [1U]) | (0x8000U & vlSelf->__PVT__i0__DOT__key_list
                       [1U]));
    }
    if ((0x10000U & (vlSelf->__PVT__i0__DOT__key_list
                     [1U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                     [1U]))) {
        ++(vlSymsp->__Vcoverage[7173]);
        vlSelf->i0__DOT____Vtogcov__key_list[1U] = 
            ((0xfffeffffU & vlSelf->i0__DOT____Vtogcov__key_list
              [1U]) | (0x10000U & vlSelf->__PVT__i0__DOT__key_list
                       [1U]));
    }
    if ((0x20000U & (vlSelf->__PVT__i0__DOT__key_list
                     [1U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                     [1U]))) {
        ++(vlSymsp->__Vcoverage[7174]);
        vlSelf->i0__DOT____Vtogcov__key_list[1U] = 
            ((0xfffdffffU & vlSelf->i0__DOT____Vtogcov__key_list
              [1U]) | (0x20000U & vlSelf->__PVT__i0__DOT__key_list
                       [1U]));
    }
    if ((0x40000U & (vlSelf->__PVT__i0__DOT__key_list
                     [1U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                     [1U]))) {
        ++(vlSymsp->__Vcoverage[7175]);
        vlSelf->i0__DOT____Vtogcov__key_list[1U] = 
            ((0xfffbffffU & vlSelf->i0__DOT____Vtogcov__key_list
              [1U]) | (0x40000U & vlSelf->__PVT__i0__DOT__key_list
                       [1U]));
    }
    if ((0x80000U & (vlSelf->__PVT__i0__DOT__key_list
                     [1U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                     [1U]))) {
        ++(vlSymsp->__Vcoverage[7176]);
        vlSelf->i0__DOT____Vtogcov__key_list[1U] = 
            ((0xfff7ffffU & vlSelf->i0__DOT____Vtogcov__key_list
              [1U]) | (0x80000U & vlSelf->__PVT__i0__DOT__key_list
                       [1U]));
    }
    if ((0x100000U & (vlSelf->__PVT__i0__DOT__key_list
                      [1U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                      [1U]))) {
        ++(vlSymsp->__Vcoverage[7177]);
        vlSelf->i0__DOT____Vtogcov__key_list[1U] = 
            ((0xffefffffU & vlSelf->i0__DOT____Vtogcov__key_list
              [1U]) | (0x100000U & vlSelf->__PVT__i0__DOT__key_list
                       [1U]));
    }
    if ((0x200000U & (vlSelf->__PVT__i0__DOT__key_list
                      [1U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                      [1U]))) {
        ++(vlSymsp->__Vcoverage[7178]);
        vlSelf->i0__DOT____Vtogcov__key_list[1U] = 
            ((0xffdfffffU & vlSelf->i0__DOT____Vtogcov__key_list
              [1U]) | (0x200000U & vlSelf->__PVT__i0__DOT__key_list
                       [1U]));
    }
    if ((0x400000U & (vlSelf->__PVT__i0__DOT__key_list
                      [1U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                      [1U]))) {
        ++(vlSymsp->__Vcoverage[7179]);
        vlSelf->i0__DOT____Vtogcov__key_list[1U] = 
            ((0xffbfffffU & vlSelf->i0__DOT____Vtogcov__key_list
              [1U]) | (0x400000U & vlSelf->__PVT__i0__DOT__key_list
                       [1U]));
    }
    if ((0x800000U & (vlSelf->__PVT__i0__DOT__key_list
                      [1U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                      [1U]))) {
        ++(vlSymsp->__Vcoverage[7180]);
        vlSelf->i0__DOT____Vtogcov__key_list[1U] = 
            ((0xff7fffffU & vlSelf->i0__DOT____Vtogcov__key_list
              [1U]) | (0x800000U & vlSelf->__PVT__i0__DOT__key_list
                       [1U]));
    }
    if ((0x1000000U & (vlSelf->__PVT__i0__DOT__key_list
                       [1U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                       [1U]))) {
        ++(vlSymsp->__Vcoverage[7181]);
        vlSelf->i0__DOT____Vtogcov__key_list[1U] = 
            ((0xfeffffffU & vlSelf->i0__DOT____Vtogcov__key_list
              [1U]) | (0x1000000U & vlSelf->__PVT__i0__DOT__key_list
                       [1U]));
    }
    if ((0x2000000U & (vlSelf->__PVT__i0__DOT__key_list
                       [1U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                       [1U]))) {
        ++(vlSymsp->__Vcoverage[7182]);
        vlSelf->i0__DOT____Vtogcov__key_list[1U] = 
            ((0xfdffffffU & vlSelf->i0__DOT____Vtogcov__key_list
              [1U]) | (0x2000000U & vlSelf->__PVT__i0__DOT__key_list
                       [1U]));
    }
    if ((0x4000000U & (vlSelf->__PVT__i0__DOT__key_list
                       [1U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                       [1U]))) {
        ++(vlSymsp->__Vcoverage[7183]);
        vlSelf->i0__DOT____Vtogcov__key_list[1U] = 
            ((0xfbffffffU & vlSelf->i0__DOT____Vtogcov__key_list
              [1U]) | (0x4000000U & vlSelf->__PVT__i0__DOT__key_list
                       [1U]));
    }
    if ((0x8000000U & (vlSelf->__PVT__i0__DOT__key_list
                       [1U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                       [1U]))) {
        ++(vlSymsp->__Vcoverage[7184]);
        vlSelf->i0__DOT____Vtogcov__key_list[1U] = 
            ((0xf7ffffffU & vlSelf->i0__DOT____Vtogcov__key_list
              [1U]) | (0x8000000U & vlSelf->__PVT__i0__DOT__key_list
                       [1U]));
    }
    if ((0x10000000U & (vlSelf->__PVT__i0__DOT__key_list
                        [1U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                        [1U]))) {
        ++(vlSymsp->__Vcoverage[7185]);
        vlSelf->i0__DOT____Vtogcov__key_list[1U] = 
            ((0xefffffffU & vlSelf->i0__DOT____Vtogcov__key_list
              [1U]) | (0x10000000U & vlSelf->__PVT__i0__DOT__key_list
                       [1U]));
    }
    if ((0x20000000U & (vlSelf->__PVT__i0__DOT__key_list
                        [1U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                        [1U]))) {
        ++(vlSymsp->__Vcoverage[7186]);
        vlSelf->i0__DOT____Vtogcov__key_list[1U] = 
            ((0xdfffffffU & vlSelf->i0__DOT____Vtogcov__key_list
              [1U]) | (0x20000000U & vlSelf->__PVT__i0__DOT__key_list
                       [1U]));
    }
    if ((0x40000000U & (vlSelf->__PVT__i0__DOT__key_list
                        [1U] ^ vlSelf->i0__DOT____Vtogcov__key_list
                        [1U]))) {
        ++(vlSymsp->__Vcoverage[7187]);
        vlSelf->i0__DOT____Vtogcov__key_list[1U] = 
            ((0xbfffffffU & vlSelf->i0__DOT____Vtogcov__key_list
              [1U]) | (0x40000000U & vlSelf->__PVT__i0__DOT__key_list
                       [1U]));
    }
    if (((vlSelf->__PVT__i0__DOT__key_list[1U] ^ vlSelf->i0__DOT____Vtogcov__key_list
          [1U]) >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[7188]);
        vlSelf->i0__DOT____Vtogcov__key_list[1U] = 
            ((0x7fffffffU & vlSelf->i0__DOT____Vtogcov__key_list
              [1U]) | (0x80000000U & vlSelf->__PVT__i0__DOT__key_list
                       [1U]));
    }
}

VL_INLINE_OPT void Vtop_MuxKeyWithDefault__K20_Dc___combo__TOP__top__DOT__de__DOT__m20__5(Vtop_MuxKeyWithDefault__K20_Dc* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_MuxKeyWithDefault__K20_Dc___combo__TOP__top__DOT__de__DOT__m20__5\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[7226]);
    ++(vlSymsp->__Vcoverage[7226]);
    ++(vlSymsp->__Vcoverage[7228]);
    ++(vlSymsp->__Vcoverage[7229]);
    vlSelf->__PVT__i0__DOT__lut_out = ((- (IData)((vlSymsp->TOP.inst 
                                                   == 
                                                   vlSelf->__PVT__i0__DOT__key_list
                                                   [0U]))) 
                                       & vlSelf->__PVT__i0__DOT__data_list
                                       [0U]);
    vlSelf->__PVT__i0__DOT__i = 2U;
    vlSelf->__PVT__i0__DOT__hit = (vlSymsp->TOP.inst 
                                   == vlSelf->__PVT__i0__DOT__key_list
                                   [0U]);
    vlSelf->__PVT__i0__DOT__lut_out = ((IData)(vlSelf->__PVT__i0__DOT__lut_out) 
                                       | ((- (IData)(
                                                     (vlSymsp->TOP.inst 
                                                      == 
                                                      vlSelf->__PVT__i0__DOT__key_list
                                                      [1U]))) 
                                          & vlSelf->__PVT__i0__DOT__data_list
                                          [1U]));
    vlSelf->__PVT__i0__DOT__hit = ((IData)(vlSelf->__PVT__i0__DOT__hit) 
                                   | (vlSymsp->TOP.inst 
                                      == vlSelf->__PVT__i0__DOT__key_list
                                      [1U]));
    vlSelf->out = ((IData)(vlSelf->__PVT__i0__DOT__hit)
                    ? (IData)(vlSelf->__PVT__i0__DOT__lut_out)
                    : 0U);
    if (((IData)(vlSelf->__PVT__i0__DOT__hit) ^ (IData)(vlSelf->i0__DOT____Vtogcov__hit))) {
        ++(vlSymsp->__Vcoverage[7225]);
        vlSelf->i0__DOT____Vtogcov__hit = vlSelf->__PVT__i0__DOT__hit;
    }
    if ((1U & ((IData)(vlSelf->__PVT__i0__DOT__lut_out) 
               ^ (IData)(vlSelf->i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[7213]);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xffeU 
                                                & (IData)(vlSelf->i0__DOT____Vtogcov__lut_out)) 
                                               | (1U 
                                                  & (IData)(vlSelf->__PVT__i0__DOT__lut_out)));
    }
    if ((2U & ((IData)(vlSelf->__PVT__i0__DOT__lut_out) 
               ^ (IData)(vlSelf->i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[7214]);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xffdU 
                                                & (IData)(vlSelf->i0__DOT____Vtogcov__lut_out)) 
                                               | (2U 
                                                  & (IData)(vlSelf->__PVT__i0__DOT__lut_out)));
    }
    if ((4U & ((IData)(vlSelf->__PVT__i0__DOT__lut_out) 
               ^ (IData)(vlSelf->i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[7215]);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xffbU 
                                                & (IData)(vlSelf->i0__DOT____Vtogcov__lut_out)) 
                                               | (4U 
                                                  & (IData)(vlSelf->__PVT__i0__DOT__lut_out)));
    }
    if ((8U & ((IData)(vlSelf->__PVT__i0__DOT__lut_out) 
               ^ (IData)(vlSelf->i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[7216]);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xff7U 
                                                & (IData)(vlSelf->i0__DOT____Vtogcov__lut_out)) 
                                               | (8U 
                                                  & (IData)(vlSelf->__PVT__i0__DOT__lut_out)));
    }
    if ((0x10U & ((IData)(vlSelf->__PVT__i0__DOT__lut_out) 
                  ^ (IData)(vlSelf->i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[7217]);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xfefU 
                                                & (IData)(vlSelf->i0__DOT____Vtogcov__lut_out)) 
                                               | (0x10U 
                                                  & (IData)(vlSelf->__PVT__i0__DOT__lut_out)));
    }
    if ((0x20U & ((IData)(vlSelf->__PVT__i0__DOT__lut_out) 
                  ^ (IData)(vlSelf->i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[7218]);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xfdfU 
                                                & (IData)(vlSelf->i0__DOT____Vtogcov__lut_out)) 
                                               | (0x20U 
                                                  & (IData)(vlSelf->__PVT__i0__DOT__lut_out)));
    }
    if ((0x40U & ((IData)(vlSelf->__PVT__i0__DOT__lut_out) 
                  ^ (IData)(vlSelf->i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[7219]);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xfbfU 
                                                & (IData)(vlSelf->i0__DOT____Vtogcov__lut_out)) 
                                               | (0x40U 
                                                  & (IData)(vlSelf->__PVT__i0__DOT__lut_out)));
    }
    if ((0x80U & ((IData)(vlSelf->__PVT__i0__DOT__lut_out) 
                  ^ (IData)(vlSelf->i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[7220]);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xf7fU 
                                                & (IData)(vlSelf->i0__DOT____Vtogcov__lut_out)) 
                                               | (0x80U 
                                                  & (IData)(vlSelf->__PVT__i0__DOT__lut_out)));
    }
    if ((0x100U & ((IData)(vlSelf->__PVT__i0__DOT__lut_out) 
                   ^ (IData)(vlSelf->i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[7221]);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xeffU 
                                                & (IData)(vlSelf->i0__DOT____Vtogcov__lut_out)) 
                                               | (0x100U 
                                                  & (IData)(vlSelf->__PVT__i0__DOT__lut_out)));
    }
    if ((0x200U & ((IData)(vlSelf->__PVT__i0__DOT__lut_out) 
                   ^ (IData)(vlSelf->i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[7222]);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xdffU 
                                                & (IData)(vlSelf->i0__DOT____Vtogcov__lut_out)) 
                                               | (0x200U 
                                                  & (IData)(vlSelf->__PVT__i0__DOT__lut_out)));
    }
    if ((0x400U & ((IData)(vlSelf->__PVT__i0__DOT__lut_out) 
                   ^ (IData)(vlSelf->i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[7223]);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0xbffU 
                                                & (IData)(vlSelf->i0__DOT____Vtogcov__lut_out)) 
                                               | (0x400U 
                                                  & (IData)(vlSelf->__PVT__i0__DOT__lut_out)));
    }
    if ((0x800U & ((IData)(vlSelf->__PVT__i0__DOT__lut_out) 
                   ^ (IData)(vlSelf->i0__DOT____Vtogcov__lut_out)))) {
        ++(vlSymsp->__Vcoverage[7224]);
        vlSelf->i0__DOT____Vtogcov__lut_out = ((0x7ffU 
                                                & (IData)(vlSelf->i0__DOT____Vtogcov__lut_out)) 
                                               | (0x800U 
                                                  & (IData)(vlSelf->__PVT__i0__DOT__lut_out)));
    }
}
