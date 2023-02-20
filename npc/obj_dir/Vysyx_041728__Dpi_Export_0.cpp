// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Implementation of DPI export functions.
//
#include "Vysyx_041728.h"
#include "Vysyx_041728__Syms.h"
#include "verilated_dpi.h"


void Vysyx_041728::difftestcommit(svBit* commit) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_041728___024root::difftestcommit\n"); );
    // Variables
    CData/*0:0*/ commit__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("difftestcommit");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    Vysyx_041728__Vcb_difftestcommit_t __Vcb = (Vysyx_041728__Vcb_difftestcommit_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((Vysyx_041728__Syms*)(__Vscopep->symsp()), commit__Vcvt);
    for (size_t commit__Vidx = 0; commit__Vidx < 1; ++commit__Vidx) *commit = commit__Vcvt;
}

void Vysyx_041728::getintr(svBit* commit) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_041728___024root::getintr\n"); );
    // Variables
    CData/*0:0*/ commit__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("getintr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    Vysyx_041728__Vcb_getintr_t __Vcb = (Vysyx_041728__Vcb_getintr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((Vysyx_041728__Syms*)(__Vscopep->symsp()), commit__Vcvt);
    for (size_t commit__Vidx = 0; commit__Vidx < 1; ++commit__Vidx) *commit = commit__Vcvt;
}

void Vysyx_041728::getabort(svBit* abor) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_041728___024root::getabort\n"); );
    // Variables
    CData/*0:0*/ abor__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("getabort");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    Vysyx_041728__Vcb_getabort_t __Vcb = (Vysyx_041728__Vcb_getabort_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((Vysyx_041728__Syms*)(__Vscopep->symsp()), abor__Vcvt);
    for (size_t abor__Vidx = 0; abor__Vidx < 1; ++abor__Vidx) *abor = abor__Vcvt;
}

void Vysyx_041728::getskip(svBit* commit) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_041728___024root::getskip\n"); );
    // Variables
    CData/*0:0*/ commit__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("getskip");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    Vysyx_041728__Vcb_getskip_t __Vcb = (Vysyx_041728__Vcb_getskip_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((Vysyx_041728__Syms*)(__Vscopep->symsp()), commit__Vcvt);
    for (size_t commit__Vidx = 0; commit__Vidx < 1; ++commit__Vidx) *commit = commit__Vcvt;
}
