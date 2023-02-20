// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vysyx_041728.h"
#include "Vysyx_041728__Syms.h"
#include "verilated_vcd_c.h"
#include "verilated_dpi.h"

//============================================================
// Constructors

Vysyx_041728::Vysyx_041728(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vysyx_041728__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , io_imaster_awready{vlSymsp->TOP.io_imaster_awready}
    , io_imaster_awvalid{vlSymsp->TOP.io_imaster_awvalid}
    , io_imaster_awid{vlSymsp->TOP.io_imaster_awid}
    , io_imaster_awaddr{vlSymsp->TOP.io_imaster_awaddr}
    , io_imaster_awlen{vlSymsp->TOP.io_imaster_awlen}
    , io_imaster_awsize{vlSymsp->TOP.io_imaster_awsize}
    , io_imaster_awburst{vlSymsp->TOP.io_imaster_awburst}
    , io_imaster_wready{vlSymsp->TOP.io_imaster_wready}
    , io_imaster_wvalid{vlSymsp->TOP.io_imaster_wvalid}
    , io_imaster_wdata{vlSymsp->TOP.io_imaster_wdata}
    , io_imaster_wstrb{vlSymsp->TOP.io_imaster_wstrb}
    , io_imaster_wlast{vlSymsp->TOP.io_imaster_wlast}
    , io_imaster_bready{vlSymsp->TOP.io_imaster_bready}
    , io_imaster_bvalid{vlSymsp->TOP.io_imaster_bvalid}
    , io_imaster_bid{vlSymsp->TOP.io_imaster_bid}
    , io_imaster_bresp{vlSymsp->TOP.io_imaster_bresp}
    , io_imaster_arready{vlSymsp->TOP.io_imaster_arready}
    , io_imaster_arvalid{vlSymsp->TOP.io_imaster_arvalid}
    , io_imaster_arid{vlSymsp->TOP.io_imaster_arid}
    , io_imaster_araddr{vlSymsp->TOP.io_imaster_araddr}
    , io_imaster_arlen{vlSymsp->TOP.io_imaster_arlen}
    , io_imaster_arsize{vlSymsp->TOP.io_imaster_arsize}
    , io_imaster_arburst{vlSymsp->TOP.io_imaster_arburst}
    , io_imaster_rready{vlSymsp->TOP.io_imaster_rready}
    , io_imaster_rvalid{vlSymsp->TOP.io_imaster_rvalid}
    , io_imaster_rid{vlSymsp->TOP.io_imaster_rid}
    , io_imaster_rresp{vlSymsp->TOP.io_imaster_rresp}
    , io_imaster_rdata{vlSymsp->TOP.io_imaster_rdata}
    , io_imaster_rlast{vlSymsp->TOP.io_imaster_rlast}
    , io_dmaster_awready{vlSymsp->TOP.io_dmaster_awready}
    , io_dmaster_awvalid{vlSymsp->TOP.io_dmaster_awvalid}
    , io_dmaster_awid{vlSymsp->TOP.io_dmaster_awid}
    , io_dmaster_awaddr{vlSymsp->TOP.io_dmaster_awaddr}
    , io_dmaster_awlen{vlSymsp->TOP.io_dmaster_awlen}
    , io_dmaster_awsize{vlSymsp->TOP.io_dmaster_awsize}
    , io_dmaster_awburst{vlSymsp->TOP.io_dmaster_awburst}
    , io_dmaster_wready{vlSymsp->TOP.io_dmaster_wready}
    , io_dmaster_wvalid{vlSymsp->TOP.io_dmaster_wvalid}
    , io_dmaster_wdata{vlSymsp->TOP.io_dmaster_wdata}
    , io_dmaster_wstrb{vlSymsp->TOP.io_dmaster_wstrb}
    , io_dmaster_wlast{vlSymsp->TOP.io_dmaster_wlast}
    , io_dmaster_bready{vlSymsp->TOP.io_dmaster_bready}
    , io_dmaster_bvalid{vlSymsp->TOP.io_dmaster_bvalid}
    , io_dmaster_bid{vlSymsp->TOP.io_dmaster_bid}
    , io_dmaster_bresp{vlSymsp->TOP.io_dmaster_bresp}
    , io_dmaster_arready{vlSymsp->TOP.io_dmaster_arready}
    , io_dmaster_arvalid{vlSymsp->TOP.io_dmaster_arvalid}
    , io_dmaster_arid{vlSymsp->TOP.io_dmaster_arid}
    , io_dmaster_araddr{vlSymsp->TOP.io_dmaster_araddr}
    , io_dmaster_arlen{vlSymsp->TOP.io_dmaster_arlen}
    , io_dmaster_arsize{vlSymsp->TOP.io_dmaster_arsize}
    , io_dmaster_arburst{vlSymsp->TOP.io_dmaster_arburst}
    , io_dmaster_rready{vlSymsp->TOP.io_dmaster_rready}
    , io_dmaster_rvalid{vlSymsp->TOP.io_dmaster_rvalid}
    , io_dmaster_rid{vlSymsp->TOP.io_dmaster_rid}
    , io_dmaster_rresp{vlSymsp->TOP.io_dmaster_rresp}
    , io_dmaster_rdata{vlSymsp->TOP.io_dmaster_rdata}
    , io_dmaster_rlast{vlSymsp->TOP.io_dmaster_rlast}
    , io_mmio_valid{vlSymsp->TOP.io_mmio_valid}
    , io_mmio_ready{vlSymsp->TOP.io_mmio_ready}
    , io_mmio_data_read{vlSymsp->TOP.io_mmio_data_read}
    , io_mmio_data_write{vlSymsp->TOP.io_mmio_data_write}
    , io_mmio_wen{vlSymsp->TOP.io_mmio_wen}
    , io_mmio_addr{vlSymsp->TOP.io_mmio_addr}
    , io_mmio_rsize{vlSymsp->TOP.io_mmio_rsize}
    , io_mmio_mask{vlSymsp->TOP.io_mmio_mask}
    , __PVT__ysyx_041728__DOT__mem{vlSymsp->TOP.__PVT__ysyx_041728__DOT__mem}
    , __PVT__ysyx_041728__DOT__mem_1{vlSymsp->TOP.__PVT__ysyx_041728__DOT__mem_1}
    , __PVT__ysyx_041728__DOT__mem_2{vlSymsp->TOP.__PVT__ysyx_041728__DOT__mem_2}
    , __PVT__ysyx_041728__DOT__mem_3{vlSymsp->TOP.__PVT__ysyx_041728__DOT__mem_3}
    , __PVT__ysyx_041728__DOT__mem_4{vlSymsp->TOP.__PVT__ysyx_041728__DOT__mem_4}
    , __PVT__ysyx_041728__DOT__mem_5{vlSymsp->TOP.__PVT__ysyx_041728__DOT__mem_5}
    , __PVT__ysyx_041728__DOT__mem_6{vlSymsp->TOP.__PVT__ysyx_041728__DOT__mem_6}
    , __PVT__ysyx_041728__DOT__mem_7{vlSymsp->TOP.__PVT__ysyx_041728__DOT__mem_7}
    , rootp{&(vlSymsp->TOP)}
{
}

Vysyx_041728::Vysyx_041728(const char* _vcname__)
    : Vysyx_041728(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vysyx_041728::~Vysyx_041728() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vysyx_041728___024root___eval_initial(Vysyx_041728___024root* vlSelf);
void Vysyx_041728___024root___eval_settle(Vysyx_041728___024root* vlSelf);
void Vysyx_041728___024root___eval(Vysyx_041728___024root* vlSelf);
QData Vysyx_041728___024root___change_request(Vysyx_041728___024root* vlSelf);
#ifdef VL_DEBUG
void Vysyx_041728___024root___eval_debug_assertions(Vysyx_041728___024root* vlSelf);
#endif  // VL_DEBUG
void Vysyx_041728___024root___final(Vysyx_041728___024root* vlSelf);

static void _eval_initial_loop(Vysyx_041728__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vysyx_041728___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vysyx_041728___024root___eval_settle(&(vlSymsp->TOP));
        Vysyx_041728___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vysyx_041728___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("vsrc/top.v", 20273, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vysyx_041728___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vysyx_041728::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vysyx_041728::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vysyx_041728___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vysyx_041728___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vysyx_041728___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("vsrc/top.v", 20273, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vysyx_041728___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vysyx_041728::final() {
    Vysyx_041728___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vysyx_041728::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vysyx_041728::name() const {
    return vlSymsp->name();
}

//============================================================
// Trace configuration

void Vysyx_041728___024root__traceInitTop(Vysyx_041728___024root* vlSelf, VerilatedVcd* tracep);

static void traceInit(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vysyx_041728___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_041728___024root*>(voidSelf);
    Vysyx_041728__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vysyx_041728___024root__traceInitTop(vlSelf, tracep);
    tracep->scopeEscape('.');
}

void Vysyx_041728___024root__traceRegister(Vysyx_041728___024root* vlSelf, VerilatedVcd* tracep);

void Vysyx_041728::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, &(vlSymsp->TOP));
    Vysyx_041728___024root__traceRegister(&(vlSymsp->TOP), tfp->spTrace());
}
