// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VTOP_H_
#define VERILATED_VTOP_H_  // guard

#include "verilated_heavy.h"
#include "verilated_cov.h"
#include "svdpi.h"

class Vtop__Syms;
class Vtop___024root;
class VerilatedVcdC;
class Vtop_VerilatedVcd;
class Vtop_MuxKeyWithDefault__N6_K3_D40;
class Vtop_MuxKeyWithDefault__N3_K20_D40;
class Vtop_MuxKeyWithDefault__N1_K20_D40;


// This class is the main interface to the Verilated model
class Vtop VL_NOT_FINAL {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vtop__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clk,0,0);
    VL_IN8(&rst,0,0);
    VL_IN(&inst,31,0);
    VL_OUT(&cpupc,31,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    Vtop_MuxKeyWithDefault__N6_K3_D40* const __PVT__top__DOT__de__DOT__m1;
    Vtop_MuxKeyWithDefault__N6_K3_D40* const __PVT__top__DOT__de__DOT__m7;
    Vtop_MuxKeyWithDefault__N3_K20_D40* const __PVT__top__DOT__de__DOT__m4;
    Vtop_MuxKeyWithDefault__N3_K20_D40* const __PVT__top__DOT__de__DOT__m5;
    Vtop_MuxKeyWithDefault__N1_K20_D40* const __PVT__top__DOT__de__DOT__m9;
    Vtop_MuxKeyWithDefault__N1_K20_D40* const __PVT__top__DOT__de__DOT__m10;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vtop___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vtop(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vtop(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vtop();
  private:
    VL_UNCOPYABLE(Vtop);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); eval_end_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    /// Return current simulation context for this model.
    /// Used to get to e.g. simulation time via contextp()->time()
    VerilatedContext* contextp() const;
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    /// DPI Export functions
    static void putstate(int* statefh, int* a0, int* pcr, int* dnpcr, int* callreturn, int* Typer);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
