// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI EXPORTS
    // DPI export at /home/wzw/ysyx-workbench/npc/vsrc/decode_exec.v:36:18
    extern void putstate(int* statefh, int* a0, int* pcr, int* dnpcr, int* callreturn);

    // DPI IMPORTS
    // DPI import at /home/wzw/ysyx-workbench/npc/vsrc/decode_exec.v:9:32
    extern void set_gpr_ptr(const svOpenArrayHandle a);

#ifdef __cplusplus
}
#endif
