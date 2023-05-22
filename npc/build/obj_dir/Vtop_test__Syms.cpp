// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtop_test__Syms.h"
#include "Vtop_test.h"
#include "Vtop_test___024root.h"

// FUNCTIONS
Vtop_test__Syms::~Vtop_test__Syms()
{
}

Vtop_test__Syms::Vtop_test__Syms(VerilatedContext* contextp, const char* namep,Vtop_test* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp(modelp)
    // Setup module instances
    , TOP(namep)
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(this, true);
    // Setup export functions
    for (int __Vfinal=0; __Vfinal<2; __Vfinal++) {
    }
}
