// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VYSYX_041728__SYMS_H_
#define VERILATED_VYSYX_041728__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODEL CLASS

#include "Vysyx_041728.h"

// INCLUDE MODULE CLASSES
#include "Vysyx_041728___024root.h"
#include "Vysyx_041728_mem.h"

// DPI TYPES for DPI Export callbacks (Internal use)
using Vysyx_041728__Vcb_difftestcommit_t = void (*) (Vysyx_041728__Syms* __restrict vlSymsp, CData/*0:0*/ &commit);
using Vysyx_041728__Vcb_getabort_t = void (*) (Vysyx_041728__Syms* __restrict vlSymsp, CData/*0:0*/ &abor);
using Vysyx_041728__Vcb_getintr_t = void (*) (Vysyx_041728__Syms* __restrict vlSymsp, CData/*0:0*/ &commit);
using Vysyx_041728__Vcb_getskip_t = void (*) (Vysyx_041728__Syms* __restrict vlSymsp, CData/*0:0*/ &commit);

// SYMS CLASS (contains all model state)
class Vysyx_041728__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vysyx_041728* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vysyx_041728___024root         TOP;
    Vysyx_041728_mem               TOP__ysyx_041728__DOT__mem;
    Vysyx_041728_mem               TOP__ysyx_041728__DOT__mem_1;
    Vysyx_041728_mem               TOP__ysyx_041728__DOT__mem_2;
    Vysyx_041728_mem               TOP__ysyx_041728__DOT__mem_3;
    Vysyx_041728_mem               TOP__ysyx_041728__DOT__mem_4;
    Vysyx_041728_mem               TOP__ysyx_041728__DOT__mem_5;
    Vysyx_041728_mem               TOP__ysyx_041728__DOT__mem_6;
    Vysyx_041728_mem               TOP__ysyx_041728__DOT__mem_7;

    // SCOPE NAMES
    VerilatedScope __Vscope_ysyx_041728__riscvIns__Ebpro;
    VerilatedScope __Vscope_ysyx_041728__riscvIns__difftest;
    VerilatedScope __Vscope_ysyx_041728__riscvIns__intrins;
    VerilatedScope __Vscope_ysyx_041728__riscvIns__skipinst;

    // CONSTRUCTORS
    Vysyx_041728__Syms(VerilatedContext* contextp, const char* namep, Vysyx_041728* modelp);
    ~Vysyx_041728__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
