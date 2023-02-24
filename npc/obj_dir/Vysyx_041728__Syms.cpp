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
    , TOP__ysyx_041728__DOT__dmem(Verilated::catName(namep, "ysyx_041728.dmem"))
    , TOP__ysyx_041728__DOT__dmem_1(Verilated::catName(namep, "ysyx_041728.dmem_1"))
    , TOP__ysyx_041728__DOT__dmem_2(Verilated::catName(namep, "ysyx_041728.dmem_2"))
    , TOP__ysyx_041728__DOT__dmem_3(Verilated::catName(namep, "ysyx_041728.dmem_3"))
    , TOP__ysyx_041728__DOT__imem(Verilated::catName(namep, "ysyx_041728.imem"))
    , TOP__ysyx_041728__DOT__imem_1(Verilated::catName(namep, "ysyx_041728.imem_1"))
    , TOP__ysyx_041728__DOT__imem_2(Verilated::catName(namep, "ysyx_041728.imem_2"))
    , TOP__ysyx_041728__DOT__imem_3(Verilated::catName(namep, "ysyx_041728.imem_3"))
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__ysyx_041728__DOT__dmem = &TOP__ysyx_041728__DOT__dmem;
    TOP.__PVT__ysyx_041728__DOT__dmem_1 = &TOP__ysyx_041728__DOT__dmem_1;
    TOP.__PVT__ysyx_041728__DOT__dmem_2 = &TOP__ysyx_041728__DOT__dmem_2;
    TOP.__PVT__ysyx_041728__DOT__dmem_3 = &TOP__ysyx_041728__DOT__dmem_3;
    TOP.__PVT__ysyx_041728__DOT__imem = &TOP__ysyx_041728__DOT__imem;
    TOP.__PVT__ysyx_041728__DOT__imem_1 = &TOP__ysyx_041728__DOT__imem_1;
    TOP.__PVT__ysyx_041728__DOT__imem_2 = &TOP__ysyx_041728__DOT__imem_2;
    TOP.__PVT__ysyx_041728__DOT__imem_3 = &TOP__ysyx_041728__DOT__imem_3;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(this, true);
    TOP__ysyx_041728__DOT__dmem.__Vconfigure(this, true);
    TOP__ysyx_041728__DOT__dmem_1.__Vconfigure(this, false);
    TOP__ysyx_041728__DOT__dmem_2.__Vconfigure(this, false);
    TOP__ysyx_041728__DOT__dmem_3.__Vconfigure(this, false);
    TOP__ysyx_041728__DOT__imem.__Vconfigure(this, false);
    TOP__ysyx_041728__DOT__imem_1.__Vconfigure(this, false);
    TOP__ysyx_041728__DOT__imem_2.__Vconfigure(this, false);
    TOP__ysyx_041728__DOT__imem_3.__Vconfigure(this, false);
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
