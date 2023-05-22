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


    // DPI IMPORTS
    // DPI import at /home/wzw/ysyx-workbench/npc/vsrc/ysyx_22050533.v:2699:31
    extern void set_csr_ptr(const svOpenArrayHandle a);
    // DPI import at /home/wzw/ysyx-workbench/npc/vsrc/ysyx_22050533.v:2698:31
    extern void set_gpr_ptr(const svOpenArrayHandle a);
    // DPI import at /home/wzw/ysyx-workbench/npc/vsrc/top_test.v:535:30
    extern void vpmem_read(long long mraddr, long long* mrdata);
    // DPI import at /home/wzw/ysyx-workbench/npc/vsrc/top_test.v:538:30
    extern void vpmem_write(long long waddr, long long wdata, char wmask, long long use_wen);

#ifdef __cplusplus
}
#endif
