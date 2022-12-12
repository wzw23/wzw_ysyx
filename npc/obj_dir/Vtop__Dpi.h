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
    // DPI export at vsrc/decode_exec.v:17:10
    extern void put_state(svLogic prior_state);
    // DPI export at vsrc/decode_exec.v:21:20
    extern void putstate(int* statefh);

#ifdef __cplusplus
}
#endif
