// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTOP__SYMS_H_
#define VERILATED_VTOP__SYMS_H_  // guard

#include "verilated_heavy.h"
#include "verilated_vcd_c.h"

// INCLUDE MODEL CLASS

#include "Vtop.h"

// INCLUDE MODULE CLASSES
#include "Vtop___024root.h"
#include "Vtop_MuxKeyWithDefault__N4_K20_D40.h"
#include "Vtop_MuxKeyWithDefault__N29_K20_D40.h"
#include "Vtop_MuxKeyWithDefault__N6_K3_D40.h"

// DPI TYPES for DPI Export callbacks (Internal use)
using Vtop__Vcb_putstate_t = void (*) (Vtop__Syms* __restrict vlSymsp, IData/*31:0*/ &statefh, IData/*31:0*/ &a0, IData/*31:0*/ &pcr, IData/*31:0*/ &dnpcr, IData/*31:0*/ &callreturn, IData/*31:0*/ &Typer);

// SYMS CLASS (contains all model state)
class Vtop__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtop* const __Vm_modelp;
    bool __Vm_dumping = false;  // Dumping is active
    VerilatedMutex __Vm_dumperMutex;  // Protect __Vm_dumperp
    VerilatedVcdC* __Vm_dumperp VL_GUARDED_BY(__Vm_dumperMutex) = nullptr;  /// Trace class for $dump*
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtop___024root                 TOP;
    Vtop_MuxKeyWithDefault__N6_K3_D40 TOP__top__DOT__de__DOT__m1;
    Vtop_MuxKeyWithDefault__N4_K20_D40 TOP__top__DOT__de__DOT__m10;
    Vtop_MuxKeyWithDefault__N29_K20_D40 TOP__top__DOT__de__DOT__m4;
    Vtop_MuxKeyWithDefault__N29_K20_D40 TOP__top__DOT__de__DOT__m5;
    Vtop_MuxKeyWithDefault__N6_K3_D40 TOP__top__DOT__de__DOT__m7;
    Vtop_MuxKeyWithDefault__N4_K20_D40 TOP__top__DOT__de__DOT__m9;

    // COVERAGE
    uint32_t __Vcoverage[5924];

    // SCOPE NAMES
    VerilatedScope __Vscope_top__de;

    // CONSTRUCTORS
    Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp);
    ~Vtop__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
    void _traceDump();
    void _traceDumpOpen();
    void _traceDumpClose();
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
