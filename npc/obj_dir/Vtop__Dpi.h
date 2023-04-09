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
    // DPI import at /home/wzw/ysyx-workbench/npc/vsrc/RegisterFile2.v:29:31
    extern void set_csr_ptr(const svOpenArrayHandle a);
    // DPI import at /home/wzw/ysyx-workbench/npc/vsrc/RegisterFile2.v:28:31
    extern void set_gpr_ptr(const svOpenArrayHandle a);
    // DPI import at /home/wzw/ysyx-workbench/npc/vsrc/If.v:6:30
    extern void vpmem_read(long long mraddr, long long* mrdata);
    // DPI import at /home/wzw/ysyx-workbench/npc/vsrc/axi_lite_s2.v:30:30
    extern void vpmem_write(long long waddr, long long wdata, char wmask, long long use_wen);

#ifdef __cplusplus
}
#endif
