// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTOP_TEST__SYMS_H_
#define VERILATED_VTOP_TEST__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODEL CLASS

#include "Vtop_test.h"

// INCLUDE MODULE CLASSES
#include "Vtop_test___024root.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class Vtop_test__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtop_test* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtop_test___024root            TOP;

    // CONSTRUCTORS
    Vtop_test__Syms(VerilatedContext* contextp, const char* namep, Vtop_test* modelp);
    ~Vtop_test__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
