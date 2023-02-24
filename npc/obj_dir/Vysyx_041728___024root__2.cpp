// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_041728.h for the primary calling header

#include "Vysyx_041728___024root.h"
#include "Vysyx_041728__Syms.h"

#include "verilated_dpi.h"

QData Vysyx_041728___024root___change_request_1(Vysyx_041728___024root* vlSelf);

VL_INLINE_OPT QData Vysyx_041728___024root___change_request(Vysyx_041728___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041728__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_041728___024root___change_request\n"); );
    // Body
    return (Vysyx_041728___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vysyx_041728___024root___change_request_1(Vysyx_041728___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041728__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_041728___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vysyx_041728___024root___eval_debug_assertions(Vysyx_041728___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_041728__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_041728___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->io_dmaster_awready & 0xfeU))) {
        Verilated::overWidthError("io_dmaster_awready");}
    if (VL_UNLIKELY((vlSelf->io_dmaster_wready & 0xfeU))) {
        Verilated::overWidthError("io_dmaster_wready");}
    if (VL_UNLIKELY((vlSelf->io_dmaster_bvalid & 0xfeU))) {
        Verilated::overWidthError("io_dmaster_bvalid");}
    if (VL_UNLIKELY((vlSelf->io_dmaster_bid & 0xf0U))) {
        Verilated::overWidthError("io_dmaster_bid");}
    if (VL_UNLIKELY((vlSelf->io_dmaster_bresp & 0xfcU))) {
        Verilated::overWidthError("io_dmaster_bresp");}
    if (VL_UNLIKELY((vlSelf->io_dmaster_arready & 0xfeU))) {
        Verilated::overWidthError("io_dmaster_arready");}
    if (VL_UNLIKELY((vlSelf->io_dmaster_rvalid & 0xfeU))) {
        Verilated::overWidthError("io_dmaster_rvalid");}
    if (VL_UNLIKELY((vlSelf->io_dmaster_rid & 0xf0U))) {
        Verilated::overWidthError("io_dmaster_rid");}
    if (VL_UNLIKELY((vlSelf->io_dmaster_rresp & 0xfcU))) {
        Verilated::overWidthError("io_dmaster_rresp");}
    if (VL_UNLIKELY((vlSelf->io_dmaster_rlast & 0xfeU))) {
        Verilated::overWidthError("io_dmaster_rlast");}
    if (VL_UNLIKELY((vlSelf->io_mmio_ready & 0xfeU))) {
        Verilated::overWidthError("io_mmio_ready");}
}
#endif  // VL_DEBUG
