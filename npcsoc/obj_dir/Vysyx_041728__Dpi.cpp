// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Implementation of DPI export functions.
//
// Verilator compiles this file in when DPI functions are used.
// If you have multiple Verilated designs with the same DPI exported
// function names, you will get multiple definition link errors from here.
// This is an unfortunate result of the DPI specification.
// To solve this, either
//    1. Call Vysyx_041728::{export_function} instead,
//       and do not even bother to compile this file
// or 2. Compile all __Dpi.cpp files in the same compiler run,
//       and #ifdefs already inserted here will sort everything out.

#include "Vysyx_041728__Dpi.h"
#include "Vysyx_041728.h"

#ifndef VL_DPIDECL_difftestcommit_
#define VL_DPIDECL_difftestcommit_
void difftestcommit(svBit* commit) {
    // DPI export at vsrc/difftest.sv:5:6
    return Vysyx_041728::difftestcommit(commit);
}
#endif

#ifndef VL_DPIDECL_getabort_
#define VL_DPIDECL_getabort_
void getabort(svBit* abor) {
    // DPI export at vsrc/ebProbe.sv:7:6
    return Vysyx_041728::getabort(abor);
}
#endif

#ifndef VL_DPIDECL_getintr_
#define VL_DPIDECL_getintr_
void getintr(svBit* commit) {
    // DPI export at vsrc/intr.sv:5:6
    return Vysyx_041728::getintr(commit);
}
#endif

#ifndef VL_DPIDECL_getskip_
#define VL_DPIDECL_getskip_
void getskip(svBit* commit) {
    // DPI export at vsrc/skip.sv:5:6
    return Vysyx_041728::getskip(commit);
}
#endif

