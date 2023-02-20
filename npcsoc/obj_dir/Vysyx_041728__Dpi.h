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
    // DPI export at vsrc/difftest.sv:5:6
    extern void difftestcommit(svBit* commit);
    // DPI export at vsrc/ebProbe.sv:7:6
    extern void getabort(svBit* abor);
    // DPI export at vsrc/intr.sv:5:6
    extern void getintr(svBit* commit);
    // DPI export at vsrc/skip.sv:5:6
    extern void getskip(svBit* commit);

    // DPI IMPORTS
    // DPI import at vsrc/DPIC_RegRead.sv:72:40
    extern void set_gpr_ptr(const svOpenArrayHandle a);

#ifdef __cplusplus
}
#endif
