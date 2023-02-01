// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtop__Syms.h"
#include "Vtop.h"
#include "Vtop___024root.h"
#include "Vtop_MuxKeyWithDefault__N4_K20_D40.h"
#include "Vtop_MuxKeyWithDefault__N31_K20_D40.h"
#include "Vtop_MuxKeyWithDefault__N6_K3_D40.h"

void Vtop___024root____Vdpiexp_top__DOT__de__DOT__putstate_TOP(Vtop__Syms* __restrict vlSymsp, IData/*31:0*/ &statefh, IData/*31:0*/ &a0, IData/*31:0*/ &pcr, IData/*31:0*/ &dnpcr, IData/*31:0*/ &callreturn, IData/*31:0*/ &Typer);

// FUNCTIONS
Vtop__Syms::~Vtop__Syms()
{
}

Vtop__Syms::Vtop__Syms(VerilatedContext* contextp, const char* namep,Vtop* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp(modelp)
    // Setup module instances
    , TOP(namep)
    , TOP__top__DOT__de__DOT__m1(Verilated::catName(namep, "top.de.m1"))
    , TOP__top__DOT__de__DOT__m10(Verilated::catName(namep, "top.de.m10"))
    , TOP__top__DOT__de__DOT__m4(Verilated::catName(namep, "top.de.m4"))
    , TOP__top__DOT__de__DOT__m5(Verilated::catName(namep, "top.de.m5"))
    , TOP__top__DOT__de__DOT__m7(Verilated::catName(namep, "top.de.m7"))
    , TOP__top__DOT__de__DOT__m9(Verilated::catName(namep, "top.de.m9"))
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__top__DOT__de__DOT__m1 = &TOP__top__DOT__de__DOT__m1;
    TOP.__PVT__top__DOT__de__DOT__m10 = &TOP__top__DOT__de__DOT__m10;
    TOP.__PVT__top__DOT__de__DOT__m4 = &TOP__top__DOT__de__DOT__m4;
    TOP.__PVT__top__DOT__de__DOT__m5 = &TOP__top__DOT__de__DOT__m5;
    TOP.__PVT__top__DOT__de__DOT__m7 = &TOP__top__DOT__de__DOT__m7;
    TOP.__PVT__top__DOT__de__DOT__m9 = &TOP__top__DOT__de__DOT__m9;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(this, true);
    TOP__top__DOT__de__DOT__m1.__Vconfigure(this, true);
    TOP__top__DOT__de__DOT__m10.__Vconfigure(this, true);
    TOP__top__DOT__de__DOT__m4.__Vconfigure(this, true);
    TOP__top__DOT__de__DOT__m5.__Vconfigure(this, false);
    TOP__top__DOT__de__DOT__m7.__Vconfigure(this, false);
    TOP__top__DOT__de__DOT__m9.__Vconfigure(this, false);
    // Setup scopes
    __Vscope_top__de.configure(this, name(), "top.de", "de", -12, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal=0; __Vfinal<2; __Vfinal++) {
        __Vscope_top__de.exportInsert(__Vfinal, "putstate", (void*)(&Vtop___024root____Vdpiexp_top__DOT__de__DOT__putstate_TOP));
    }
}
