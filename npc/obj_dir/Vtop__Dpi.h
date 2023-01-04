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
    // DPI export at /home/wzw/ysyx-workbench/npc/vsrc/decode_exec.v:54:18
    extern void putstate(int* statefh, int* a0, int* pcr, int* dnpcr, int* callreturn, int* Typer);

    // DPI IMPORTS
    // DPI import at /home/wzw/ysyx-workbench/npc/vsrc/decode_exec.v:9:32
    extern void set_gpr_ptr(const svOpenArrayHandle a);
    // DPI import at /home/wzw/ysyx-workbench/npc/vsrc/decode_exec.v:13:32
    extern void vpmem_write(long long waddr, long long wdata, char wmask);

#ifdef __cplusplus
}
#endif
