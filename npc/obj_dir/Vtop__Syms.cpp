// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtop__Syms.h"
#include "Vtop.h"
#include "Vtop___024root.h"
#include "Vtop_MuxKeyWithDefault__N4_K20_D40.h"
#include "Vtop_MuxKeyWithDefault__N29_K20_D40.h"
#include "Vtop_MuxKeyWithDefault__N6_K3_D40.h"

void Vtop___024root____Vdpiexp_top__DOT__de__DOT__putstate_TOP(Vtop__Syms* __restrict vlSymsp, IData/*31:0*/ &statefh, IData/*31:0*/ &a0, IData/*31:0*/ &pcr, IData/*31:0*/ &dnpcr, IData/*31:0*/ &callreturn, IData/*31:0*/ &Typer);

// FUNCTIONS
Vtop__Syms::~Vtop__Syms()
{
#ifdef VM_TRACE
    if (__Vm_dumping) _traceDumpClose();
#endif  // VM_TRACE
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

void Vtop__Syms::_traceDump() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    __Vm_dumperp->dump(VL_TIME_Q());
}

void Vtop__Syms::_traceDumpOpen() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    if (VL_UNLIKELY(!__Vm_dumperp)) {
        __Vm_dumperp = new VerilatedVcdC();
        __Vm_modelp->trace(__Vm_dumperp, 0, 0);
        std::string dumpfile = _vm_contextp__->dumpfileCheck();
        __Vm_dumperp->open(dumpfile.c_str());
        __Vm_dumping = true;
    }
}

void Vtop__Syms::_traceDumpClose() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    __Vm_dumping = false;
    VL_DO_CLEAR(delete __Vm_dumperp, __Vm_dumperp = nullptr);
}
