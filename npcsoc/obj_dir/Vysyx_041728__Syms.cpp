// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vysyx_041728__Syms.h"
#include "Vysyx_041728.h"
#include "Vysyx_041728___024root.h"
#include "Vysyx_041728_mem.h"

void Vysyx_041728___024root____Vdpiexp_ysyx_041728__DOT__riscvIns__DOT__Ebpro__DOT__getabort_TOP(Vysyx_041728__Syms* __restrict vlSymsp, CData/*0:0*/ &abor);
void Vysyx_041728___024root____Vdpiexp_ysyx_041728__DOT__riscvIns__DOT__difftest__DOT__difftestcommit_TOP(Vysyx_041728__Syms* __restrict vlSymsp, CData/*0:0*/ &commit);
void Vysyx_041728___024root____Vdpiexp_ysyx_041728__DOT__riscvIns__DOT__intrins__DOT__getintr_TOP(Vysyx_041728__Syms* __restrict vlSymsp, CData/*0:0*/ &commit);
void Vysyx_041728___024root____Vdpiexp_ysyx_041728__DOT__riscvIns__DOT__skipinst__DOT__getskip_TOP(Vysyx_041728__Syms* __restrict vlSymsp, CData/*0:0*/ &commit);

// FUNCTIONS
Vysyx_041728__Syms::~Vysyx_041728__Syms()
{
}

Vysyx_041728__Syms::Vysyx_041728__Syms(VerilatedContext* contextp, const char* namep,Vysyx_041728* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp(modelp)
    // Setup module instances
    , TOP(namep)
    , TOP__ysyx_041728__DOT__mem(Verilated::catName(namep, "ysyx_041728.mem"))
    , TOP__ysyx_041728__DOT__mem_1(Verilated::catName(namep, "ysyx_041728.mem_1"))
    , TOP__ysyx_041728__DOT__mem_2(Verilated::catName(namep, "ysyx_041728.mem_2"))
    , TOP__ysyx_041728__DOT__mem_3(Verilated::catName(namep, "ysyx_041728.mem_3"))
    , TOP__ysyx_041728__DOT__mem_4(Verilated::catName(namep, "ysyx_041728.mem_4"))
    , TOP__ysyx_041728__DOT__mem_5(Verilated::catName(namep, "ysyx_041728.mem_5"))
    , TOP__ysyx_041728__DOT__mem_6(Verilated::catName(namep, "ysyx_041728.mem_6"))
    , TOP__ysyx_041728__DOT__mem_7(Verilated::catName(namep, "ysyx_041728.mem_7"))
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__ysyx_041728__DOT__mem = &TOP__ysyx_041728__DOT__mem;
    TOP.__PVT__ysyx_041728__DOT__mem_1 = &TOP__ysyx_041728__DOT__mem_1;
    TOP.__PVT__ysyx_041728__DOT__mem_2 = &TOP__ysyx_041728__DOT__mem_2;
    TOP.__PVT__ysyx_041728__DOT__mem_3 = &TOP__ysyx_041728__DOT__mem_3;
    TOP.__PVT__ysyx_041728__DOT__mem_4 = &TOP__ysyx_041728__DOT__mem_4;
    TOP.__PVT__ysyx_041728__DOT__mem_5 = &TOP__ysyx_041728__DOT__mem_5;
    TOP.__PVT__ysyx_041728__DOT__mem_6 = &TOP__ysyx_041728__DOT__mem_6;
    TOP.__PVT__ysyx_041728__DOT__mem_7 = &TOP__ysyx_041728__DOT__mem_7;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(this, true);
    TOP__ysyx_041728__DOT__mem.__Vconfigure(this, true);
    TOP__ysyx_041728__DOT__mem_1.__Vconfigure(this, false);
    TOP__ysyx_041728__DOT__mem_2.__Vconfigure(this, false);
    TOP__ysyx_041728__DOT__mem_3.__Vconfigure(this, false);
    TOP__ysyx_041728__DOT__mem_4.__Vconfigure(this, false);
    TOP__ysyx_041728__DOT__mem_5.__Vconfigure(this, false);
    TOP__ysyx_041728__DOT__mem_6.__Vconfigure(this, false);
    TOP__ysyx_041728__DOT__mem_7.__Vconfigure(this, false);
    // Setup scopes
    __Vscope_ysyx_041728__riscvIns__Ebpro.configure(this, name(), "ysyx_041728.riscvIns.Ebpro", "Ebpro", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyx_041728__riscvIns__difftest.configure(this, name(), "ysyx_041728.riscvIns.difftest", "difftest", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyx_041728__riscvIns__intrins.configure(this, name(), "ysyx_041728.riscvIns.intrins", "intrins", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyx_041728__riscvIns__skipinst.configure(this, name(), "ysyx_041728.riscvIns.skipinst", "skipinst", -12, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal=0; __Vfinal<2; __Vfinal++) {
        __Vscope_ysyx_041728__riscvIns__Ebpro.exportInsert(__Vfinal, "getabort", (void*)(&Vysyx_041728___024root____Vdpiexp_ysyx_041728__DOT__riscvIns__DOT__Ebpro__DOT__getabort_TOP));
        __Vscope_ysyx_041728__riscvIns__difftest.exportInsert(__Vfinal, "difftestcommit", (void*)(&Vysyx_041728___024root____Vdpiexp_ysyx_041728__DOT__riscvIns__DOT__difftest__DOT__difftestcommit_TOP));
        __Vscope_ysyx_041728__riscvIns__intrins.exportInsert(__Vfinal, "getintr", (void*)(&Vysyx_041728___024root____Vdpiexp_ysyx_041728__DOT__riscvIns__DOT__intrins__DOT__getintr_TOP));
        __Vscope_ysyx_041728__riscvIns__skipinst.exportInsert(__Vfinal, "getskip", (void*)(&Vysyx_041728___024root____Vdpiexp_ysyx_041728__DOT__riscvIns__DOT__skipinst__DOT__getskip_TOP));
    }
}
